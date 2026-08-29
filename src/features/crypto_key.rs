//! src/features/crypto_key.rs - from FUN_18015b030.
//! Lifts the game's live crypto key. The owning class name was string-obfuscated in the binary
//! (multi-stage cipher); RECOVERED via Unicorn emulation of the decrypt chain:
//!
//!     class  = "Gallop.WorkSingleModeCharaData"
//!     field  = "currentCryptoKey"   (static)
//!     reader = il2cpp_field_static_get_value   (resolved slot DAT_180607ad8)
//!
//! i.e. the cheat reads Gallop.WorkSingleModeCharaData.currentCryptoKey out of game memory to
//! decrypt game network/save data. C: ../../ghidra/crypto_and_race_decompiled.c (sub_18015b030).
pub const CLASS: &str = "Gallop.WorkSingleModeCharaData"; // recovered by emulation
pub const FIELD: &str = "currentCryptoKey";

/// Resolve the class, get its static field "currentCryptoKey", read its value (the key bytes).
pub fn read_current_crypto_key() -> Option<Vec<u8>> {
    let class = il2_class_from_name(CLASS)?;           // il2cpp_class_from_name
    let field = il2_get_field(class, FIELD)?;          // il2cpp_class_get_field_from_name
    il2_field_static_get_value(field)                  // il2cpp_field_static_get_value (DAT_180607ad8)
}
fn il2_class_from_name(_n: &str) -> Option<usize> { None }
fn il2_get_field(_class: usize, _name: &str) -> Option<usize> { None }
fn il2_field_static_get_value(_field: usize) -> Option<Vec<u8>> { None }
