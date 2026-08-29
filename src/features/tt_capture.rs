//! src/features/tt_capture.rs - from FUN_1801383e0.  key "team_trials.capture".
//! After a Team Trials race, captures race_horse_data / chara_result_array and writes it to the
//! data dir for later analysis / import. C: ../../ghidra/all_features_decompiled.c (sub_1801383e0).
//!
//! Real structure from the decompile:
//!  - a resolved callback runs first (DAT_180607d18) each entry;
//!  - gated on a valid race object arg + an armed byte (DAT_180607c40);
//!  - builds a data-dir path (FUN_180292cc0 with "datadir.txt", "native"), reads the TT result
//!    into a buffer (FUN_1800faec0 -> Result), and on Ok writes the capture file.
pub static mut ARMED: bool = false; // DAT_180607c40

pub fn tick(race_obj: usize) {
    run_pre_callback();                        // (*DAT_180607d18)()
    if race_obj == 0 || unsafe { !ARMED } { return; }
    if !feature_tick("team_trials.capture") { return; } // ..0x13,1

    let dir = data_dir();                       // built from "datadir.txt" / "native"
    if let Some(result) = read_tt_result(race_obj) { // FUN_1800faec0 -> Result (Ok niche)
        write_capture(&dir, &result);
    }
}
fn run_pre_callback() {}
fn data_dir() -> String { String::new() }       // FUN_180292cc0("datadir.txt"/"native")
fn read_tt_result(_obj: usize) -> Option<Vec<u8>> { None } // FUN_1800faec0
fn write_capture(_dir: &str, _r: &[u8]) {}
fn feature_tick(_k: &str) -> bool { false }
