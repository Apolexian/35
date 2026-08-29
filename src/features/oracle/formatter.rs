//! src/features/oracle/formatter.rs - from FUN_18014d920.
//! Formats the reward prediction into overlay text and the "Good condition"/"Bad condition"
//! labels, then renders boxes over each event choice. The decompile's panic strings reference
//! src/features/oracle/mod.rs (confirming the module layout).
//! C: ../../../ghidra/decompiled_targets.c (sub_18014d920).
use crate::features::oracle::project::Prediction;

/// FUN_18014d920: turn a Prediction into per-choice display strings and draw them.
pub fn render(pred: &Prediction) {
    for opt in &pred.options {
        let _line = format_reward_line(&opt.label, opt);
        // draw_box_over_choice(opt.index, &_line);
    }
}
fn format_reward_line(label: &str, opt: &crate::features::oracle::project::OptionOutcome) -> String {
    // "Option N: SPD +x STA +y ... (Good/Bad condition)"
    let r = &opt.rewards;
    format!("{label}: SPD +{} STA +{} PWR +{} GUT +{} WIZ +{} SKPT +{}",
            r.spd, r.sta, r.pwr, r.gut, r.wiz, r.skpt)
}
