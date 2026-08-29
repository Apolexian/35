//! src/features/custompriority.rs - key "custompriority.show" (+ Ctrl+G skill priority).
//! Large egui-driven UI (FUN_180160040 / FUN_180178300) letting the user define a custom skill
//! buy-priority list; feeds the rating skill-buy optimizer. Reconstructed as skeleton (UI-heavy).
//! C: ../../ghidra/all_features_decompiled.c (sub_180160040, sub_180178300).
#[derive(Default)]
pub struct CustomPriority { pub show: bool, pub profile: String, pub skills: Vec<u32> }
impl CustomPriority {
    /// draw the Custom Priority manager overlay (##custommgr / ##custprofile).
    pub fn ui(&mut self) { if !self.show { return; } /* egui list editor */ }
}
