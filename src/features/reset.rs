//! src/features/reset.rs - keys "reset.fire" / "reset:fire".  "Reset game".
//! Fires a game reset/restart action when the user triggers it (edge-triggered).
//! C: ../../ghidra/all_features_decompiled.c.
pub fn tick() {
    if feature_edge("reset:fire") { fire_reset(); }
}
fn feature_edge(_k: &str) -> bool { false }
fn fire_reset() {}
