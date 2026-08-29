//! src/features/smooth.rs - key "smooth.enabled".  "Smooth skip loading".
//! Smooths the visual transition when skipping loads/animations so fast-skip isn't jarring.
//! C: ../../ghidra/all_features_decompiled.c.
pub static mut ENABLED: bool = false;
pub fn tick() {
    unsafe { ENABLED = feature_tick("smooth.enabled"); }
}
fn feature_tick(_k: &str) -> bool { false }
