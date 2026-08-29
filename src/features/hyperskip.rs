//! src/features/hyperskip.rs - "super skip". from FUN_18021c950 (+ FUN_180223350
//! for the dialog/home path). keys: hyperskip.enabled, hyperskip.multiplier ("Speed x{N}").
//! C: ../../ghidra/all_features_decompiled.c. Symbol names decrypted via Unicorn emulation
//! (RECOVERED_NAMES.md).
//!
//! MECHANISM - SYNTHETIC UI TAP INJECTION (verified by decrypting the resolved symbols):
//! Umamusume has no discrete "skip button" - tapping the screen advances/speeds some sequences,
//! and a built-in skip speeds some animations (not instantly). hyperskip weaponizes that input
//! path: it fabricates Unity pointer events and dispatches them to the game's UI, auto-"tapping"
//! the advance/skip input at high frequency so skippable sequences blow past.
//!
//! Resolved (all via il2cpp, names decrypted):
//!   input:   UnityEngine.EventSystems.EventSystem.get_current, UnityEngine.EventSystems.PointerEventData
//!   targets: Gallop.ButtonCommon, Gallop.FlickableButton, Gallop.PartsSingleModeResultStoryEvent
//!   dispatch: OnPointerClick / OnPointerDown / OnPointerUp, and OnClickSkipButton (story events)
//!   scene:   UnityEngine.GameObject/Transform/Component get_activeInHierarchy, get_gameObject,
//!            get_transform, get_parent  (to find the active on-screen tappable)
//! FUN_18021c950 resolves + caches these method pointers (DAT_180607df0/e08/e18). A per-frame
//! driver then, while enabled, builds a PointerEventData and dispatches it to the active UI
//! object, paced by `multiplier` (higher = more synthetic taps per second).
use std::sync::atomic::{AtomicUsize, AtomicU32, AtomicBool, Ordering};

pub static ENABLED: AtomicBool = AtomicBool::new(false);        // hyperskip.enabled
static MULT_BITS: AtomicU32 = AtomicU32::new(1.0f32.to_bits()); // hyperskip.multiplier ("Speed x{N}")

// cached resolved method pointers (the decompile's DAT_180607df0 / e08 / e18).
static M_ON_CLICK_SKIP: AtomicUsize = AtomicUsize::new(0); // Gallop.*.OnClickSkipButton
static M_POINTER_CLICK: AtomicUsize = AtomicUsize::new(0); // OnPointerClick
static M_RUNTIME_INVOKE: AtomicUsize = AtomicUsize::new(0);

/// FUN_18021c950: resolve the skip-button types/methods and cache their pointers.
/// Returns false (the decompile's panic-bail path via FUN_18045031b) if a required method
/// can't be resolved.
pub fn install() -> bool {
    let button = match il2_class_from_name("Gallop.ButtonCommon") { Some(c) => c, None => return false };
    let on_click = il2_get_method(button, "OnClickSkipButton");
    let on_ptr   = il2_get_method(button, "OnPointerClick");
    if on_click == 0 { return false; }
    M_ON_CLICK_SKIP.store(on_click, Ordering::Release);   // -> DAT_180607df0
    M_POINTER_CLICK.store(on_ptr, Ordering::Release);      // -> DAT_180607e08
    M_RUNTIME_INVOKE.store(il2_runtime_invoke_ptr(), Ordering::Release);
    true
}

pub fn set_multiplier(m: f32) { MULT_BITS.store(m.max(1.0).to_bits(), Ordering::Relaxed); }
pub fn multiplier() -> f32 { f32::from_bits(MULT_BITS.load(Ordering::Relaxed)) }

/// per-frame driver: while enabled, find the active on-screen UI object and dispatch a
/// fabricated pointer event to its click handler (auto-tap). `multiplier` paces how often the
/// synthetic tap is injected (the decompile scales an elapsed-time threshold by the multiplier).
static mut LAST_FIRE_MS: u64 = 0;
const BASE_INTERVAL_MS: f32 = 100.0; // nominal tap cadence, scaled by multiplier
pub fn tick(now_ms: u64) {
    if !ENABLED.load(Ordering::Relaxed) { return; }
    let click = M_ON_CLICK_SKIP.load(Ordering::Acquire); // OnPointerClick / OnClickSkipButton
    if click == 0 { return; }
    let interval = (BASE_INTERVAL_MS / multiplier().max(1.0)) as u64;
    if now_ms.saturating_sub(unsafe { LAST_FIRE_MS }) < interval { return; }
    unsafe { LAST_FIRE_MS = now_ms; }
    let target = match find_active_tappable() { Some(t) => t, None => return };
    let evt = build_pointer_event_data();               // fabricated PointerEventData
    il2_runtime_invoke2(click, target, evt);            // dispatch OnPointerClick(target, evt)
}

// il2cpp leaf calls (resolved fnptr table @ .data 0x1805ea2d0..)
fn il2_class_from_name(_n: &str) -> Option<usize> { None }        // il2cpp_class_from_name
fn il2_get_method(_class: usize, _name: &str) -> usize { 0 }      // il2cpp_class_get_method_from_name
fn il2_runtime_invoke_ptr() -> usize { 0 }
fn find_active_tappable() -> Option<usize> { None }               // EventSystem.get_current + active-in-hierarchy scan
fn build_pointer_event_data() -> usize { 0 }                     // new UnityEngine.EventSystems.PointerEventData
fn il2_runtime_invoke2(_method: usize, _obj: usize, _evt: usize) {} // il2cpp_runtime_invoke(OnPointerClick, target, evt)
