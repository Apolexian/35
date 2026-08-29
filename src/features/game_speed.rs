//! src/features/game_speed.rs - from FUN_180222170 / FUN_1802221f0.
//! Setting keys: "game_speed.speed", "game_speed.menus" (+"Speed menus/transitions (experimental, may crash)").
//! C: ../../ghidra/all_features_decompiled.c (sub_180222170).
use std::sync::atomic::{AtomicU32, Ordering};

/// game speed multiplier (DAT_1805ea374, an f32 clamped to [.., max]). 1.0 = normal.
static SPEED_BITS: AtomicU32 = AtomicU32::new(1.0f32.to_bits());
/// whether the "speed up menus/transitions" toggle is on (DAT_180607a20). experimental.
pub static mut MENUS: bool = false;

/// FUN_180222170: read the configured speed, clamp to the allowed max, publish it,
/// and read the menus toggle. Applied by scaling the game's timeScale/deltaTime.
pub fn apply(configured: f32, max_allowed: f32) {
    let mut s = 1.0f32;
    if configured.is_finite() {
        s = max_allowed;
        if configured <= max_allowed { s = configured; }
    }
    SPEED_BITS.store(s.to_bits(), Ordering::Relaxed);
    unsafe { MENUS = feature_tick("game_speed.menus"); }
}
pub fn speed() -> f32 { f32::from_bits(SPEED_BITS.load(Ordering::Relaxed)) }
fn feature_tick(_k: &str) -> bool { false } // FUN_18011ed60
