//! src/features/skips.rs - auto-skip. from FUN_1801f0e10 (state builder) +
//! the per-event hook FUN_180141710. Keys: skips.training/bubbles/rival/events,
//! skip:rainbow/train/rival/event(:loop-armed). C: ../../ghidra/all_features_decompiled.c
//! (sub_1801f0e10, sub_180141710).
//!
//! Real structure from the decompile: FUN_1801f0e10 allocates the skip state (a ~0x7000 buffer
//! + 0x280-stride records), reads each skip's setting, and installs the relevant game hooks. The
//! per-event hook FUN_180141710 fires on each event/dialog step: if the "events" skip is armed
//! for the current event id it records a diag entry (tag "skip:event:loop-armed") and lets the
//! original handler run, re-arming across the multi-step event.

#[derive(Default)]
pub struct Skips {
    pub training: bool, // skips.training (+ rainbow: skip:rainbow)
    pub bubbles:  bool, // skips.bubbles  (skip:train)
    pub rival:    bool, // skips.rival
    pub events:   bool, // skips.events   (loop-armed)
}

impl Skips {
    /// FUN_1801f0e10: read each skip setting and (re)install its hook.
    pub fn install(&mut self) {
        self.training = feature_tick("skips.training");
        self.bubbles  = feature_tick("skips.bubbles");
        self.rival    = feature_tick("skips.rival");
        self.events   = feature_tick("skips.events");
        // install/refresh the game-side skip hooks per armed flag.
    }
}

/// FUN_180141710: hooked over an event/dialog handler. If "events" is armed for this event id
/// (marker DAT_1805eace0), record the skip and call the original handler; loop-arm re-fires it
/// across each step of a multi-step event.
pub fn on_event_step(event_id: usize) {
    if events_armed(event_id) {
        set_skip_pending();                    // DAT_180608168 = 1
        diag_ring_push("skip:event:loop-armed");
    }
    call_original_event_handler();             // (*DAT_1806081e0)(..)
}

fn events_armed(_id: usize) -> bool { false }  // DAT_1805eace0 marker
fn set_skip_pending() {}
fn diag_ring_push(_t: &str) {}
fn call_original_event_handler() {}
fn feature_tick(_k: &str) -> bool { false }
