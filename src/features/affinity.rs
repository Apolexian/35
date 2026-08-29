//! src/features/affinity.rs - keys affinity.show / affinity.size / affinity.edit.
//! Shows Team Trials affinity numbers as a draggable overlay (heaven_tt_affinity.json stores
//! the per-number positions). UI-heavy; reconstructed as skeleton.
//! C: ../../ghidra/all_features_decompiled.c (sub_1801fd340 region + gametora/ui.rs).
#[derive(Default)]
pub struct Affinity { pub show: bool, pub size: f32, pub edit: bool }
impl Affinity {
    /// draw the affinity overlay; in edit mode each number is drag-positionable.
    pub fn ui(&mut self) { if !self.show { return; } /* egui draggable numbers */ }
}
