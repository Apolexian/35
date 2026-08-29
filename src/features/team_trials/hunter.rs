//! src/features/team_trials/hunter.rs - opponent re-roll hunter. from FUN_1802266f0.
//! C: ../../../ghidra/all_features_decompiled.c (sub_1802266f0).
//! Evidence [strings]: "OPPONENT REROLL", "Refresh until your target appears, then alert.",
//! "Open the Select Opponent screen to hunt.", "Start hunt", "viewer ID (optional)",
//! "Target found!", "heaven2-tt-hunter-alert", "OpponentSelect VC not found", heaven_tt_hunter.json.
//!
//! Real structure from the decompile (control flow accurate; the opponent-name strings the
//! function builds are CFF-obfuscated, so the compare targets are reconstructed by role):
//!  - locate the OpponentSelect view-controller (else log "OpponentSelect VC not found").
//!  - read the offered opponents; allocate 0x2d/0x30-byte buffers to build each name/id string.
//!  - if none match the target -> tap the in-game refresh; on match -> alert (FlashWindowEx +
//!    Shell_NotifyIconW tray notify, tag "heaven2-tt-hunter-alert") and stop hunting.
use serde::{Serialize, Deserialize};

#[derive(Serialize, Deserialize, Default)]
pub struct HunterTarget { pub name: String, pub vid: String } // heaven_tt_hunter.json

pub struct Hunter { pub target: HunterTarget, pub hunting: bool }

struct Opponent { name: String, viewer_id: u64 }

impl Hunter {
    /// FUN_1802266f0 (pump): scan the 3 offered opponents; match target by name or viewer id;
    /// refresh if no match, alert + stop on match.
    pub fn pump(&mut self) {
        if !self.hunting { return; }
        let vc = match self.opponent_select_vc() {
            Some(v) => v,
            None => return, // "OpponentSelect VC not found"
        };
        for opp in self.read_offered_opponents(vc) {
            if self.matches(&opp) {
                self.alert("Target found!");   // FlashWindowEx + Shell_NotifyIconW
                self.hunting = false;
                return;
            }
        }
        self.tap_refresh(vc);                  // costs in-game refresh currency
    }

    fn matches(&self, o: &Opponent) -> bool {
        (!self.target.name.is_empty() && o.name == self.target.name)
        || (!self.target.vid.is_empty() && o.viewer_id.to_string() == self.target.vid)
    }
    fn opponent_select_vc(&self) -> Option<usize> { None } // il2cpp: Gallop.TeamStadiumDeckViewController (recovered by emulation)
    fn read_offered_opponents(&self, _vc: usize) -> Vec<Opponent> { Vec::new() }
    fn tap_refresh(&self, _vc: usize) {}
    fn alert(&self, _msg: &str) {}
}
