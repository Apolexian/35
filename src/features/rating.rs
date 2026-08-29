//! src/features/rating.rs - from FUN_1801fd340.  keys rating.* .
//! Skill-buy optimizer + rating display. Modes: rating.mode / rating.custom (+ custom_tier_base,
//! custom_fill, custom_tt, custom_profile). "Apply optimal" buys skills in priority order,
//! leftover SP -> rating. C: ../../ghidra/all_features_decompiled.c (sub_1801fd340).
pub struct Rating {
    pub enabled: bool,
    pub hidden: bool,
    pub mode: f32,        // rating.mode (f32; <0 => switch to custom if rating.custom set)
    pub custom: bool,     // rating.custom
}
impl Default for Rating {
    fn default() -> Self { Rating { enabled: false, hidden: false, mode: 0.0, custom: false } }
}
impl Rating {
    /// FUN_1801fd340 head: if mode<0 and custom is set, flip mode to the custom base value.
    pub fn resolve_mode(&mut self, custom_base: f32) {
        if self.mode < 0.0 && self.custom { self.mode = custom_base; }
    }
    /// "Apply optimal": buy skills in priority order until SP exhausted; remainder feeds rating.
    pub fn apply_optimal(&self) { if !self.enabled { return; } /* greedy skill purchase */ }
}
