//! src/core/watchdog.rs - from FUN_18002ebf0 ("heaven2-watchdog").
//! Background monitor thread: polls a heartbeat timestamp; on a stall (main-thread hang) it
//! captures a "hang-" minidump and flags/recovers. Persistence / self-heal.
//! C: ../../ghidra/subsystems_decompiled.c (sub_18002ebf0).
use std::sync::atomic::{AtomicU64, Ordering};

pub static HEARTBEAT: AtomicU64 = AtomicU64::new(0); // DAT_180607bf8 (updated each pump)

/// spawned as "heaven2-watchdog". Loops: sleep, compare now vs last heartbeat; if the main
/// thread hasn't ticked within the threshold, write a hang minidump.
pub fn run() {
    loop {
        let last = HEARTBEAT.load(Ordering::Acquire);
        let now = now_ms();
        if now.saturating_sub(last) > HANG_THRESHOLD_MS { write_hang_minidump(); }
        sleep_ms(POLL_MS);
    }
}
const HANG_THRESHOLD_MS: u64 = 5000;
const POLL_MS: u64 = 250;
fn now_ms() -> u64 { 0 }
fn write_hang_minidump() {} // MiniDumpWriteDump -> heaven2-logs\hang-*
fn sleep_ms(_ms: u64) {}
