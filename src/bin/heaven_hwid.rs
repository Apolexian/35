//! src/bin/heaven_hwid.rs - reconstruction of heaven-hwid.exe (standalone HWID printer).
//! from Ghidra FUN_14000149b. Prints the machine's 32-hex id (same recipe as
//! core::hwid) so a user can send it to the cheat maker to get a machine-locked license.
//! C: ../../ghidra/hwid_exe_decompiled.c.
use heaven2_reconstructed::core::hwid;
fn main() {
    // read MachineGuid + ProductId + volume serial, hash with "safeguard-hwid-v2", print hex.
    println!("{}", hwid::compute());
}
