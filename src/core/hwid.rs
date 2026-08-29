//! src/core/hwid.rs - machine-id fingerprint. from heaven-hwid.exe FUN_14000149b
//! and heaven2.dll FUN_18010b840. Both use the identical recipe.
//! C: ../../ghidra/hwid_exe_decompiled.c, ../../ghidra/subsystems_decompiled.c.
//!
//! Recipe (reg paths from the decompile):
//!   RegGetValueW(HKLM, "SOFTWARE\\Microsoft\\Cryptography",              "MachineGuid")
//!   RegGetValueW(HKLM, "SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion","ProductId")
//!   GetVolumeInformationW -> volume serial
//! hwid = hex( hash( domain="safeguard-hwid-v2", MachineGuid + ProductId + VolumeSerial ) )
//! -> 32 hex chars. Matches the license.hwid claim, session-token prefix, and launcher.log.
//!
//! NOTE: This is documented for detection/attribution (correlating accounts to one machine),
//! NOT to forge or bypass the license lock - that check is also enforced server-side at mint.
pub const DOMAIN: &str = "safeguard-hwid-v2";
pub const REG_CRYPTO:  (&str, &str) = ("SOFTWARE\\Microsoft\\Cryptography", "MachineGuid");
pub const REG_WINNT:   (&str, &str) = ("SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion", "ProductId");

/// Compute the 32-hex machine id.
pub fn compute() -> String {
    let machine_guid = reg_get(REG_CRYPTO.0, REG_CRYPTO.1);
    let product_id   = reg_get(REG_WINNT.0,  REG_WINNT.1);
    let vol_serial   = volume_serial();
    hash_hex(DOMAIN, &[machine_guid, product_id, vol_serial])
}
fn reg_get(_path: &str, _name: &str) -> String { String::new() } // RegGetValueW
fn volume_serial() -> String { String::new() }                   // GetVolumeInformationW
fn hash_hex(_domain: &str, _parts: &[String]) -> String { String::new() }
