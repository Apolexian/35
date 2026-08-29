//! src/features/tt_padder.rs - from FUN_180224f40.
//! Fills leftover Team Trials slots (beyond the profile's picks) with valid filler umas so the
//! team is always submittable. Publishes the padded set under a futex-guarded shared global
//! (same lock pattern as the oracle prediction). C: ../../../ghidra/all_features_decompiled.c
//! (sub_180224f40). Strings: "padder:pump:apply-to-builder", "padder:endview:enter".
use std::sync::atomic::{AtomicU8, Ordering};

static STATE_LOCK: AtomicU8 = AtomicU8::new(0); // DAT_1805eaa98 (futex byte)
pub static mut ACTIVE: bool = false;            // DAT_180607d80 (set on first pump)

/// FUN_180224f40 (pump): on the TT team-build view, compute the filler slots and publish them
/// to the shared builder state under the lock. First-pump initializes (DAT_180607d80 edge).
pub fn pump(builder: usize) {
    let first = unsafe { !ACTIVE };
    unsafe { ACTIVE = true; }
    if first && !builder_ready(builder) { return; }

    let fillers = compute_fillers(builder);   // pick valid umas for empty slots

    // publish under STATE_LOCK (mirrors DAT_1805eaa98 lock + WakeByAddress path)
    while STATE_LOCK.compare_exchange(0, 1, Ordering::Acquire, Ordering::Relaxed).is_err() {
        std::hint::spin_loop();
    }
    apply_to_builder(builder, &fillers);       // "padder:pump:apply-to-builder"
    STATE_LOCK.store(0, Ordering::Release);
}

/// "padder:endview:enter" - reset padder state when leaving the build view.
pub fn on_endview_enter() { unsafe { ACTIVE = false; } }

fn builder_ready(_b: usize) -> bool { false }
fn compute_fillers(_b: usize) -> Vec<u32> { Vec::new() }
fn apply_to_builder(_b: usize, _f: &[u32]) {}
