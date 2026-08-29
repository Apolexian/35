//! src/platform_injector.rs - reconstruction of heaven_platform.dll (the injector / PCL).
//! from Ghidra DllMain FUN_180001000 + inject FUN_1800016c0.
//! C: ghidra/injector_decompiled.c.
//!
//! Technique: on DLL_PROCESS_ATTACH it inline-hooks ntdll!NtCreateUserProcess so that when the
//! game process is created, heaven2.dll is injected into it. Falls back to a disk LoadLibrary of
//! heaven2.dll if the shared-memory engine "HeavenEngineV1" isn't present.
//!
//! DETECTION (strong): ntdll!NtCreateUserProcess prologue patched in a process that has
//! heaven_platform.dll loaded; an RWX ~0x40-byte trampoline near ntdll; file heaven_platform.log.

pub const SHARED_MEM: &str = "HeavenEngineV1";
pub const LOG_FILE:   &str = "heaven_platform.log";

/// DllMain(DLL_PROCESS_ATTACH): open log, resolve NtCreateUserProcess, read its syscall stub
/// prologue ("4C 8B" = mov r10,rcx) to extract the syscall number (0xCF observed), then patch.
pub fn dll_main_attach(_module: usize) {
    open_log(LOG_FILE);
    let ntcup = get_proc("ntdll.dll", "NtCreateUserProcess");
    if let Some(syscall_no) = read_syscall_number(ntcup) {
        let _ = syscall_no; // logged: "NtCreateUserProcess: syscall number = 0xCF"
        install_trampoline(ntcup); // VirtualAlloc RWX 0x40 + VirtualProtect + patch -> "Redirected"
    }
}

/// The redirected NtCreateUserProcess: after the real call creates the game process, inject.
pub fn on_process_created(_new_process: usize) {
    // if shared-mem HeavenEngineV1 present -> map+run; else disk fallback LoadLibrary(heaven2.dll)
    inject_engine();
}
fn open_log(_p: &str) {}
fn get_proc(_m: &str, _n: &str) -> usize { 0 }
fn read_syscall_number(_stub: usize) -> Option<u32> { None }
fn install_trampoline(_target: usize) {}
fn inject_engine() {}
