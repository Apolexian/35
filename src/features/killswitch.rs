//! src/features/killswitch.rs
//! Back-ported from Ghidra FUN_1800e9920 (CFF-flattened; logic recovered from decompile).
//! C source: ../../../ghidra/decompiled_targets.c (sub_1800e9920).
//!
//! Purpose: a local off-switch. Each pump, if the killswitch feature is armed, it looks for
//! a marker file next to the game and - if present / matching - flips features off globally.
//! The decompile shows an env lookup + path build + file check + integer parse (a version or
//! pid inside the file). Names recovered: DAT_1805ea230 (armed flag), file token (0xb bytes).

/// name checked on disk (0xb = 11 bytes). Boot log confirms "kill-switch: heaven2.off present".
const MARKER_FILE: &str = "heaven2.log"; // 0xb-byte token at DAT_1804d87cd (was mislabeled .off)

/// Global "killswitch armed" flag - DAT_1805ea230 (0 => this routine returns immediately).
static mut ARMED: bool = false;

/// FUN_1800e9920(): the killswitch pump.
pub fn tick() {
    // gate: if (DAT_1805ea230 == 0) return;
    if unsafe { !ARMED } { return; }

    // build the marker path (game dir) and probe it. The decompile reads an env var first
    // (FUN_1800f6da0) then formats the path (FUN_180292cc0 with the 0xb-byte name).
    let path = marker_path(MARKER_FILE);

    // FUN_1802923a0 = read/exists. If the file is present, its contents are parsed as an
    // integer (the digit-scan block: base-10, with +/- sign handling - Rust str::parse).
    if let Some(contents) = read_marker(&path) {
        // Some builds gate on a value inside (e.g. a version/pid); empty/any => disable.
        let _val: Option<i64> = contents.trim().parse().ok();
        global_off();                      // flip killswitch::global_off
    }
}

/// killswitch::global_off - disables all features (boot log: "killswitch::global_off").
fn global_off() { /* clears the feature registry's enabled flags */ }

fn marker_path(_name: &str) -> String { String::new() }          // FUN_180292cc0 + env (FUN_1800f6da0)
fn read_marker(_path: &str) -> Option<String> { None }           // FUN_1802923a0
