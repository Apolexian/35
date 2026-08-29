//! src/features/story.rs - from FUN_1801f93b0.  key "story.turbo".
//! "Force max story speed". If armed + enabled, calls a resolved game fn ptr to fast-forward
//! the story/adventure playback. C: sub_1801f93b0.
pub static mut INSTALLED: bool = false;         // DAT_180608280
pub fn tick() {
    if unsafe { !INSTALLED } { return; }
    if !feature_tick("story.turbo") { return; } // FUN_18011ed60("story.turbo",11,0)
    // publish turbo state (DAT_180608278) and, if the game's story-advance fn ptr is resolved
    // (DAT_180608288), invoke it to skip to max speed.
    story_advance_max();
}
fn story_advance_max() {}                        // (*DAT_180608288)(..)
fn feature_tick(_k: &str) -> bool { false }
