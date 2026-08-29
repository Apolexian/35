//! src/features/followers.rs - from FUN_18021c680.  key "followers.enabled".
//! Toggles a hook over the friend/trainer UI (FriendListItem / TrainerInfo / FollowInfoRoot);
//! when enabled it augments follower info display. C: sub_18021c680.
pub static mut ENABLED: bool = false;            // DAT_1806085e0
pub fn tick() {
    let now = feature_tick("followers.enabled");  // FUN_18011ed60
    let was = unsafe { ENABLED };
    unsafe { ENABLED = now; }
    if now != was {
        // install/remove the follower-UI hook on toggle (FUN_1802aab50 builds the hook target
        // string; FUN_1800e8390 installs). game classes: FriendListItem/TrainerInfo/FollowInfoRoot.
        toggle_follower_hook(now);
    }
}
fn toggle_follower_hook(_on: bool) {}
fn feature_tick(_k: &str) -> bool { false }
