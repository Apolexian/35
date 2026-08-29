//! src/core/crashguard.rs - VEH crash handler + safeboot, from FUN_1800e6560
//! and FUN_1800e72e0. "crashguard armed (VEH + minidump on our AVs)". C:
//! ../../ghidra/subsystems_decompiled.c (sub_1800e6560).
//!
//! Real structure from the decompile:
//!  - the VEH filter checks the exception code (access-violation family, the -0x3ffffffb /
//!    0xC0000005-style constant) and whether the faulting address is inside the Heaven module;
//!    only then does it act, otherwise it returns 0 (continue search / pass to the game).
//!  - safeboot: reads "safeboot.txt" (DAT_1804e2a30, len 0xc) and parses which feature crashed
//!    last run so it can be disabled this run ("feature disabled after panic: <name>").
const SAFEBOOT_FILE: &str = "safeboot.txt"; // DAT_1804e2a30 (len 0xc)

pub fn install() { add_vectored_exception_handler(veh_filter); }

/// VEH filter: act only on an access violation whose faulting address is inside heaven2.dll.
fn veh_filter(exception_code: u32, fault_addr: usize) -> i32 {
    const ACCESS_VIOLATION: u32 = 0xC0000005;
    if exception_code == ACCESS_VIOLATION && addr_in_heaven_module(fault_addr) {
        write_crash_minidump();      // -> heaven2-logs\crash-*
        record_crashed_feature();    // written for safeboot to read next launch
        CONTINUE_EXECUTION
    } else {
        CONTINUE_SEARCH              // return 0: pass through to the game's handler
    }
}

/// safeboot::load - on boot, read safeboot.txt and return the set of features to keep disabled.
pub fn safeboot_disabled_features() -> Vec<String> {
    match read_file(SAFEBOOT_FILE) {
        Some(txt) => txt.lines().map(|l| l.trim().to_string()).filter(|l| !l.is_empty()).collect(),
        None => Vec::new(),
    }
}

const CONTINUE_EXECUTION: i32 = -1;
const CONTINUE_SEARCH: i32 = 0;
fn add_vectored_exception_handler(_h: fn(u32, usize) -> i32) {}
fn addr_in_heaven_module(_a: usize) -> bool { false }
fn write_crash_minidump() {}
fn record_crashed_feature() {}
fn read_file(_p: &str) -> Option<String> { None }
