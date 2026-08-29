//! src/features/menu_prefs.rs - from FUN_1800d5460.  key "menu_prefs.open_on_start".
//! Menu preferences (e.g. open the Heaven overlay automatically on launch, changelog modal).
//! C: ../../ghidra/all_features_decompiled.c (sub_1800d5460).
#[derive(Default)]
pub struct MenuPrefs { pub open_on_start: bool }
impl MenuPrefs {
    /// FUN_1800d5460: initialize menu-pref state struct (the decompile zero-inits a large
    /// struct and sets a few fields incl. the open-on-start flag + changelog "what's new").
    pub fn init(&mut self) { /* zero-init overlay-menu state; honor open_on_start */ }
}
