//! src/features/grad_skip.rs - from FUN_1801554c0.  key "grad_skip".
//! Auto-skips the graduation / career-finish sequence. C: ../../ghidra/all_features_decompiled.c
//! (sub_1801554c0).
//!
//! Real structure from the decompile: gated on an install flag (DAT_1805eb100); resolves a
//! game object, formats a lookup via a 0x79-byte format string (DAT_180513f66), and if a
//! result variant matches (local_1f0 == 1, a parse via FUN_180228c60 returning the Ok niche
//! -0x7fffffffffffffee) it drives the skip.
pub static mut INSTALLED: bool = false; // DAT_1805eb100

pub fn tick(ctx: usize) {
    if unsafe { !INSTALLED } { return; }
    if !feature_tick("grad_skip") { return; }

    // resolve the graduation-screen object; format the state lookup (0x79-byte fmt).
    let obj = resolve_grad_object(ctx);
    if obj == 0 { return; }

    // parse the current phase; FUN_180228c60 returns a Result-like value, Ok niche
    // -0x7fffffffffffffee. Only when the phase == 1 (graduation active) do we skip.
    if let Some(phase) = parse_grad_phase(obj) {
        if phase == 1 { skip_graduation(obj); }
    }
}
fn resolve_grad_object(_ctx: usize) -> usize { 0 }
fn parse_grad_phase(_obj: usize) -> Option<i32> { None } // FUN_180228c60
fn skip_graduation(_obj: usize) {}
fn feature_tick(_k: &str) -> bool { false }
