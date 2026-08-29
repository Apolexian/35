//! src/features/hints.rs - keys hints.alert / hints.alert_auto / hints.alert_edit +
//! per-slot geometry hints.alert_{p,f}{0..4}{x,y}, hints.alert_{r}{x,y}.
//! Facility "hint alert" overlay: draws ovals over training facilities that have skill hints,
//! auto-aligned to the buttons (or hand-placed in edit mode). UI-heavy; skeleton.
//! C: ../../ghidra/all_features_decompiled.c (sub_1801e5ca0; src/features/hints/{alert,screen}.rs).
#[derive(Default)]
pub struct Hints {
    pub alert: bool,
    pub alert_auto: bool,   // auto-align ovals to the facility buttons
    pub alert_edit: bool,   // drag to place by hand
    pub facility_xy: [[f32; 2]; 5], // hints.alert_f{0..4}{x,y}
    pub popup_xy:    [[f32; 2]; 5], // hints.alert_p{0..4}{x,y}
    pub reset_xy:    [f32; 2],      // hints.alert_r{x,y}
}
impl Hints {
    /// each pump: detect which facilities carry hints, draw an alert oval over each.
    pub fn ui(&mut self) { if !self.alert { return; } /* egui ovals per facility */ }
}
