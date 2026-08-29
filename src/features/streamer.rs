//! src/features/streamer.rs - from FUN_1800cd910.  key "streamer.enabled".
//! Streamer mode: hides the Heaven overlay window from screen capture via
//! SetWindowDisplayAffinity(WDA_EXCLUDEFROMCAPTURE), and watermarks frames with the license uid.
//! IMPORTANT (detection): the capture-hiding APIs do NOT exist under Wine/Proton - on those
//! systems streamer mode fails and "Heaven WILL show up in a capture" (per its own log).
//! C: ../../ghidra/all_features_decompiled.c (sub_1800cd910; src/core/stealth/{surface,watermark}.rs).
pub struct Streamer { pub enabled: bool }
impl Streamer {
    /// Try to create the hidden overlay window and exclude it from capture. Returns false when
    /// the platform (Wine/Proton) can't hide it - then the overlay is visible in captures.
    pub fn engage(&self) -> bool {
        if !self.enabled { return false; }
        set_window_display_affinity_exclude()  // user32!SetWindowDisplayAffinity
    }
}
fn set_window_display_affinity_exclude() -> bool { false }
