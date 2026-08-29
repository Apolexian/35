//! src/features/bridge.rs - from FUN_1801467b0.  keys "bridge.enabled","bridge.port".
//! "Companion overlay feed": an AES-256 encrypted local feed for an external companion app.
//! HARDCODED crypto (plaintext in .rdata): key + IV below. C: ../../ghidra/all_features_decompiled.c (sub_1801467b0).
pub const AES_KEY: &[u8] = b"CarrotBlender-Fixed-AES256-Key!!"; // 32 bytes
pub const AES_IV:  &[u8] = b"CarrotBlenderIV0";                 // 16 bytes
pub const DEFAULT_PORT: u16 = 17229;

pub struct Bridge { pub enabled: bool, pub port: u16 }
impl Default for Bridge { fn default() -> Self { Bridge { enabled: false, port: DEFAULT_PORT } } }
impl Bridge {
    /// serialize the current overlay state, AES-256-CBC encrypt with (AES_KEY, AES_IV),
    /// and push it to any connected companion on `port`.
    pub fn publish(&self, _payload: &[u8]) { if !self.enabled { return; } /* aes + send */ }
}
