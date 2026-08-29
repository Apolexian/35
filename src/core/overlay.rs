//! src/core/overlay.rs - DX11 present-hook overlay. from FUN_1801e2500 (+egui/hudhook).
//! The overlay renders via a hook on the DXGI swap chain Present (hudhook 0.6.5, dx11 backend).
//! Gated by a RENDER_ENABLED flag (DAT_1806085e0) flipped at boot ("RENDER_ENABLED = true").
//! C: ../../ghidra/dx11_race_decompiled.c (sub_1801e2500); src/hooks/dx11.rs, src/renderer/backend/dx11.rs.
//!
//! DETECTION: this is the strongest visual/behavioural signature - an unexpected hook on
//! IDXGISwapChain::Present in the game process, plus an egui/hudhook render pipeline.

pub static mut RENDER_ENABLED: bool = false; // DAT_1806085e0

/// Installed over IDXGISwapChain::Present. Each present: if enabled, build the egui frame and
/// draw it, then call the original Present (DAT_180607e20 = trampoline to real Present).
pub fn on_present(swap_chain: usize, _sync_interval: u64) {
    if unsafe { !RENDER_ENABLED } { call_original_present(swap_chain); return; }
    // acquire the back buffer, run the egui pass (a jump-table dispatch over UI states in the
    // decompile: &DAT_180520908 + table[state]), then present.
    render_egui_frame(swap_chain);
    call_original_present(swap_chain);
}
fn render_egui_frame(_sc: usize) {}
fn call_original_present(_sc: usize) {} // (*DAT_180607e20)(..)
