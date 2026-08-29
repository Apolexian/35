//! src/features/team_trials/mod.rs - TT automation core  [RE]
//! Evidence [STRINGS]: "team_trials.capture", "heaven2-tt-export", struct Profile/Slot/Store
//! [VERBATIM], heaven_tt_profiles.json, race_horse_data / chara_result_array reads.
use serde::{Serialize, Deserialize};

#[derive(Serialize, Deserialize)] // [VERBATIM] "struct Store profiles with 1 element"
pub struct Store { pub profiles: Vec<Profile> }

#[derive(Serialize, Deserialize)] // [VERBATIM] "struct Profile name slots eval_point"
pub struct Profile { pub name: String, pub slots: Vec<Slot>, pub eval_point: i64 }

#[derive(Serialize, Deserialize)] // [VERBATIM] "struct Slot distance_type member_id trained_chara_id running_style"
pub struct Slot {
    pub distance_type: u8,     // 1=sprint 2=mile 3=medium 4=long 5=dirt (5 distance buckets)
    pub member_id: u8,         // 1..=3 per distance
    pub trained_chara_id: u32, // the trained uma to field
    pub running_style: u8,     // 1=front 2=pace 3=late 4=end
}

/// On the TT team-build screen, auto-fills all 15 slots from the selected Profile
/// by driving the game's roster picker via il2cpp. `padder` fills empty slots. [RE]
pub fn apply_profile_to_builder(_p: &Profile) { unimplemented!() }

/// team_trials.capture: after a race, scrapes race_horse_data_array + chara_result_array
/// and exports to heaven2-tt-export (local api / clipboard) for analysis. [RE]
pub fn capture_result() { unimplemented!() }
