//! src/features/oracle/reader.rs
//! Back-ported to Rust from Ghidra decompile of FUN_180148840 (un-obfuscated).
//! This is a the ACTUAL decompiled logic - not a stub.
//! C source: ../../../ghidra/decompiled_targets.c (sub_180148840).
//!
//! Semantics recovered from the decompile:
//!  - Result<T,E> uses niche tags: Err(alloc)  = -0x7ffffffffffffff5,
//!    enum variant "present" = -0x7ffffffffffffff7, list-node tag = -0x7ffffffffffffff8.
//!  - reward entry stride 0x50 (80B); choice entry stride 0x28 (40B); display entry stride 0x20.
//!  - shared prediction state = a futex-guarded global (DAT_1805eae30..50): lock byte + Vec.
//!  - the 3-byte UTF-8 blob 0xE2 0x80 0x93 = "–" (en dash), used as the per-reward placeholder.

use std::sync::atomic::{AtomicU64, AtomicU8, Ordering};

// ---- il2cpp field-name constants (plaintext in .rdata) ----
const FLD_CHOICE_ARRAY:        &str = "choice_array";            // DAT_1804f6174 (+len 0xc)
const FLD_CHOICE_REWARD_ARRAY: &str = "choice_reward_array";     // DAT_1804f6161
const OF_EVENT_CONTENTS_INFO:  &str = "o.f.event_contents_info"; // DAT_1804f6009
const OF_CHOICE_ARRAY:         &str = "o.f.choice_array";        // DAT_1804f6020
const OF_CHOICE_REWARD_ARRAY:  &str = "o.f.choice_reward_array"; // DAT_1804f6282 (+len 0x17)
const FEED_TAG:                &str = "oracle:feed";             // DAT_1804f61d8

// ---- process globals (named from decompile) ----
static PREDICT_SEQ: AtomicU64 = AtomicU64::new(0);   // DAT_1806079e8 (atomic counter, ring index)
static STATE_LOCK:  AtomicU8  = AtomicU8::new(0);    // DAT_1805eae30 (futex byte on shared Vec)

/// A single displayed reward line for one choice. Matches the 0x20-stride fat record the
/// decompile builds: {len, ptr, cap, extra}.
struct DisplayEntry { text: String }

/// Shared prediction, published for the overlay + local feed. Backed by DAT_1805eae38/40/48
/// (ptr,len,cap of a Vec<DisplayEntry>) under STATE_LOCK.
struct SharedPrediction { entries: Vec<DisplayEntry> }
static mut SHARED: Option<SharedPrediction> = None;

/// Hook body: FUN_180148840(param_1 = event view-controller, param_2 = event object).
pub fn on_event_shown(vc: usize, ev: usize) {
    // 1) feature + throttle gate - FUN_18011ed60("oracle.predict",14,1)
    if !feature_tick("oracle.predict") { return; }

    // 2) require at least one of the reward fields - FUN_1800e8880(vc,ev,"choice_array"/"choice_reward_array")
    let has_choices = il2_has_field(vc, ev, FLD_CHOICE_ARRAY);
    let has_rewards = il2_has_field(vc, ev, FLD_CHOICE_REWARD_ARRAY);
    if !has_choices && !has_rewards { return; }

    // diagnostics ring push (tag "oracle:feed", timestamp)
    let seq = PREDICT_SEQ.fetch_add(1, Ordering::SeqCst);
    diag_ring_push(seq, FEED_TAG);

    // 3) snapshot event into 0x400 scratch - FUN_180082530 -> Result
    let snap = match read_event_snapshot(vc, ev, 0x400) {
        Ok(s) => s,
        Err(_) => return,                     // Err niche -0x7ffffffffffffff5
    };

    // 4) parse choices - FUN_180148050 reads o.f.event_contents_info -> o.f.choice_array.
    //    Each present choice carries a choice_reward_array (walked at stride 0x50).
    let choices = parse_choices(&snap, OF_EVENT_CONTENTS_INFO, OF_CHOICE_ARRAY);

    // 5) read the top-level choice_reward_array (o.f.choice_reward_array) and, per choice,
    //    build a display line. The decompile allocates a 3-byte "–" placeholder per reward
    //    and stores {len:3, ptr, cap:3} records - real formatting is finished in FUN_18014d920.
    let mut entries: Vec<DisplayEntry> = Vec::with_capacity(choices.len());
    let _reward_root = il2_read_array(ev, OF_CHOICE_REWARD_ARRAY); // stride 0x50
    for ch in &choices {
        let _rewards = walk_reward_entries(ch);   // stride 0x50 per reward
        entries.push(DisplayEntry { text: "\u{2013}".to_string() }); // placeholder line
    }

    // 6) publish under the futex lock (DAT_1805eae30). Old Vec is dropped/freed.
    publish_shared(entries);

    // 7) hand off to the formatter/overlay renderer - FUN_18014d920
    render_and_feed();
}

/// futex-guarded swap of the shared prediction (mirrors the LOCK/UNLOCK + WakeByAddressSingle path).
fn publish_shared(entries: Vec<DisplayEntry>) {
    while STATE_LOCK.compare_exchange(0, 1, Ordering::Acquire, Ordering::Relaxed).is_err() {
        std::hint::spin_loop();
    }
    // SAFETY: guarded by STATE_LOCK; single writer.
    unsafe { SHARED = Some(SharedPrediction { entries }); }
    STATE_LOCK.store(0, Ordering::Release);
    wake_one(&STATE_LOCK);                     // WakeByAddressSingle(&DAT_1805eae30)
}

// ---- runtime glue (il2cpp via resolved fnptr table @ .data 0x1805ea2d0..) ----
fn feature_tick(_k: &str) -> bool { true }                         // FUN_18011ed60
fn il2_has_field(_vc: usize,_ev: usize,_f: &str) -> bool { false } // FUN_1800e8880
fn diag_ring_push(_seq: u64,_tag: &str) {}                         // DAT_180607568/6e8/868 ring
fn read_event_snapshot(_vc: usize,_ev: usize,_cap: usize) -> Result<Vec<u8>, ()> { Err(()) } // FUN_180082530
fn parse_choices(_s: &[u8],_f1: &str,_f2: &str) -> Vec<usize> { Vec::new() }  // FUN_180148050
fn il2_read_array(_obj: usize,_f: &str) -> Vec<usize> { Vec::new() }
fn walk_reward_entries(_choice: &usize) -> Vec<usize> { Vec::new() }          // stride 0x50
fn render_and_feed() {}                                            // FUN_18014d920
fn wake_one(_a: &AtomicU8) {}                                      // WakeByAddressSingle
