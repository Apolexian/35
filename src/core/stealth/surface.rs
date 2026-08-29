//! src/core/stealth/{surface,watermark}.rs  [RE]
//! Evidence [IMPORTS]: SetWindowDisplayAffinity (hide from capture), CheckRemoteDebuggerPresent,
//! IsDebuggerPresent; [STRINGS]: "Heaven is visible to screen capture", watermark module.
pub fn hide_from_capture(hwnd: usize, hidden: bool) {
    // SetWindowDisplayAffinity(hwnd, if hidden {WDA_EXCLUDEFROMCAPTURE} else {WDA_NONE})
    let _ = (hwnd, hidden); // [IMPORTS user32!SetWindowDisplayAffinity]
}
pub fn is_debugged() -> bool { false /* IsDebuggerPresent || CheckRemoteDebuggerPresent */ }
/// watermark.rs: stamps the license uid into the overlay so leaked
/// screenshots trace back to the buyer. [RE]
pub fn overlay_watermark(_uid: &str) {}
