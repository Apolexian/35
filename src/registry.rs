//! src/registry.rs - feature registry + pump loop. Mirrors the boot log's Registry::install
//! (27 features) and the per-frame reg.pump. This ties the reconstructed modules together into
//! the same shape the real binary boots (see heaven2-boot.txt).
use crate::features;
use crate::core;

/// Registry::install order, from heaven2-boot.txt.
pub const FEATURES: &[&str] = &[
    "skips","game_speed","hyperskip","fps_unlock","graphics","race_result","team_trials",
    "race_export","shop","grad_skip","oracle","affinity","rating","custompriority","smooth",
    "reset","icons","hints","menu_prefs","profiles","logclean","localapi","bridge","story",
    "gametora","followers","streamer",
];

/// boot::start sequence (from the boot log): install core guards, load settings, then features.
pub fn boot() {
    core::crashguard::install();
    // watchdog::run() spawned on its own thread
    // safeboot::load(), settings::load(), killswitch::global_off()
    // license::gate(), license::unlock_private()
    install_all();
}

fn install_all() { /* Registry::install: build each feature module */ }

/// reg.pump - called every frame from the overlay pump host. Ticks each armed feature.
pub fn pump() {
    core::watchdog::HEARTBEAT.store(now_ms(), std::sync::atomic::Ordering::Release);
    features::killswitch::tick();
    features::game_speed::apply(1.0, 4.0);
    features::story::tick();
    features::race_result::tick();
    features::grad_skip::tick(0 /* ctx */);
    features::graphics::tick();
    features::reset::tick();
    features::smooth::tick();
    features::followers::tick();
    features::tt_capture::tick(0 /* race_obj */);
    // oracle/race readers fire from their own game hooks, not the pump.
}
fn now_ms() -> u64 { 0 }
