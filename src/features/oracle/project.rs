//! src/features/oracle/project.rs - EVENT REWARD ORACLE
//! GHIDRA-CONFIRMED from FUN_180148840 (clean, not obfuscated). Full C in
//! ../../../ghidra/decompiled_targets.c. This is the "event reward cheat":
//! reads every training-event choice and its exact rewards from the live event
//! object via il2cpp, formats them, draws them over the choice buttons. READ-ONLY -
//! it does NOT modify rewards; it reveals them before you pick (perfect information).
//!
//! Decompiled call flow (from the decompile):
//!   FUN_18011ed60("oracle.predict", 0xe, 1)          // feature/timing gate
//!   FUN_1800e8880(vc, ev, "choice_array"/*+12*/)     // il2cpp field read
//!   FUN_1800e8880(vc, ev, "choice_reward_array")     // il2cpp field read
//!   loop stride 0x50 over reward entries  x2 (choices, then rewards)
//!   field paths: "o.f.event_contents_info" "o.f.choice_array" "o.f.choice_reward_array"
//!   reward stat codes: SPD STA PWR GUT WIZ SK(PT)
//!   also reads: chara_info, commit, choices, rewards
//!   local feed: "oracle:feed" / channel "heaven2-events" / key "heaven2-events.key"

use serde::Serialize;

const F_EVENT_INFO:   &str = "event_contents_info"; // o.f.event_contents_info
const F_CHOICE_ARRAY: &str = "choice_array";        // o.f.choice_array
const F_CHOICE_REWARD:&str = "choice_reward_array"; // o.f.choice_reward_array

/// il2cpp reward entry is 0x50 (80) bytes - matches the decompiled stride. [GHIDRA]
#[repr(C)]
struct RawRewardEntry { _raw: [u8; 0x50] }

#[derive(Serialize, Default)]
pub struct Rewards { // stat codes are the game's own: SPDSTAPWRGUTWIZSKPT
    pub spd: i32, pub sta: i32, pub pwr: i32, pub gut: i32, pub wiz: i32, pub skpt: i32,
    pub extra: Vec<(String,i32)>, // energy/mood/bond/hints/items
}
#[derive(Serialize)]
pub struct OptionOutcome { pub index: u8, pub rewards: Rewards, pub label: String }
#[derive(Serialize)]
pub struct Prediction { pub event_id: u64, pub options: Vec<OptionOutcome> }

/// Hook body over the event view-controller. Runs while an event dialog is up. [GHIDRA]
/// params in decompile: (param_1 = VC ptr, param_2 = event obj ptr).
pub fn predict(vc: usize, ev: usize) -> Option<Prediction> {
    if !feature_gate("oracle.predict") { return None; }                 // FUN_18011ed60
    let choices = il2_read_obj_array(vc, ev, F_EVENT_INFO, F_CHOICE_ARRAY)?;
    let mut options = Vec::with_capacity(choices.len());
    for (i, choice) in choices.into_iter().enumerate() {
        let raw: Vec<RawRewardEntry> = il2_read_array(choice, F_CHOICE_REWARD)?; // stride 0x50
        options.push(OptionOutcome {
            index: i as u8,
            rewards: decode_rewards(&raw),
            label: format!("Option {}", i + 1),
        });
    }
    let pred = Prediction { event_id: il2_read_u64(ev, "event_id")?, options };
    publish_feed(&pred);   // "oracle:feed" -> channel "heaven2-events" (key "heaven2-events.key")
    Some(pred)
}

// il2cpp-backed (via resolved fnptr table @ .data 0x1805ea2d0..; not IAT). [GHIDRA/RE]
fn feature_gate(_k: &str) -> bool { true }
fn il2_read_obj_array(_vc: usize,_ev: usize,_f1: &str,_f2: &str) -> Option<Vec<usize>> { None }
fn il2_read_array<T>(_obj: usize,_f: &str) -> Option<Vec<T>> { None }
fn il2_read_u64(_obj: usize,_f: &str) -> Option<u64> { None }
fn decode_rewards(_r: &[RawRewardEntry]) -> Rewards { Rewards::default() }
fn publish_feed(_p: &Prediction) {}
