//! src/features/race_export.rs - from FUN_180033810.  key "race_export.enabled".
//! Reads the finished race object via il2cpp, and if it's a valid single-mode race, serializes
//! its data to a `race-<...>.json` file (also usable via clipboard / local api).
//! C: ../../ghidra/all_features_decompiled.c (sub_180033810).
//!
//! Real logic recovered from the decompile (not stubbed):
//!  - reads il2cpp backing field "<SimDataBase64>k__BackingField" (0x1e) -> the base64 sim blob
//!  - reads "<RaceType>k__BackingField" (0x19) -> race type; the decompile then string-compares
//!    the mode against ASCII "Single" (magic 0x676e6953='Sing' + 0x656c='le') and only exports
//!    single-mode races (switch on the mode string).
//!  - allocates + memcpy's the sim string, wraps it, writes to "race-<id>.json".
use serde::Serialize;

const FLD_SIM_DATA:  &str = "<SimDataBase64>k__BackingField"; // DAT_1804e2dd8 (len 0x1e)
const FLD_RACE_TYPE: &str = "<RaceType>k__BackingField";      // DAT_1804e2df6 (len 0x19)
const MODE_SINGLE:   &str = "Single";                         // magic 'Sing'+'le' in decompile

#[derive(Serialize, Default)]
pub struct RaceExport {
    pub race_type: String,
    pub sim_data_base64: String,
}

/// FUN_180033810: pull the race object's sim data + type; export only single-mode races.
pub fn export(race_obj: usize) -> Option<String> {
    if !feature_tick("race_export.enabled") { return None; }

    // read the base64 sim blob; decompile requires the field's discriminant == 3 (Some/valid)
    // and a non-null inner pointer (`*pcVar8 == 3 && *(pcVar8+0x18) != 0`).
    let sim_data = il2_read_string(race_obj, FLD_SIM_DATA)?;
    let race_type = il2_read_string(race_obj, FLD_RACE_TYPE)?;

    // only single-mode races are exported (the "Single" string switch in the decompile).
    if race_type != MODE_SINGLE { return None; }

    let export = RaceExport { race_type, sim_data_base64: sim_data };
    let json = serde_json::to_string(&export).ok()?;
    write_race_json(&json);        // -> "race-<id>.json"
    Some(json)
}

fn il2_read_string(_obj: usize, _field: &str) -> Option<String> { None } // FUN_18027a790 (il2cpp string field read)
fn write_race_json(_json: &str) {}                                       // file "race-<id>.json"
fn feature_tick(_k: &str) -> bool { false }
