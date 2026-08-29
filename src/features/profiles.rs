//! src/features/profiles.rs - from FUN_180130070 (serde serialize of TT profiles).
//! Round-trips heaven_tt_profiles.json. Field names straight from the decompile's FUN_180003cd0
//! serde map keys. C: ../../ghidra/all_features_decompiled.c (sub_180130070).
use serde::{Serialize, Deserialize};

#[derive(Serialize, Deserialize)] pub struct Store { pub profiles: Vec<Profile> }
#[derive(Serialize, Deserialize)] pub struct Profile { pub name: String, pub slots: Vec<Slot>, pub eval_point: i64 }
#[derive(Serialize, Deserialize)] pub struct Slot {
    pub distance_type: u8, pub member_id: u8, pub trained_chara_id: u32, pub running_style: u8,
}

/// FUN_180130070: serialize the profile store to JSON (keys profiles/name/slots/... ).
pub fn to_json(store: &Store) -> String { serde_json::to_string(store).unwrap_or_default() }
