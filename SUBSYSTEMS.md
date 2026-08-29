# Heaven 2.0 core subsystems (from subsystems_decompiled.c)

## Watchdog  (FUN_18002ebf0, refs "heaven2-watchdog")
Background monitor thread. Polls a heartbeat timestamp at DAT_180607bf8. If the main thread stops
bumping it (hang), it grabs a "hang-" minidump and can restart or flag. Ties into crashguard.
Basically a self-heal / persistence mechanism.
DETECTION: a thread named/behaving like heaven2-watchdog, periodic timestamp writes.

## Crashguard  (FUN_1800e6560 / FUN_1800e72e0, "crashguard armed (VEH + minidump on our AVs)")
Installs a Vectored Exception Handler. On an access violation inside heaven2.dll it writes a
"crash-<...>" minidump into heaven2-logs\ and marks "feature disabled after panic".
AddVectoredExceptionHandler + MiniDumpWriteDump (dbghelp).

## Safeboot  (FUN_1800e6560 / FUN_18011acb0 / FUN_18011bd40, "safeboot.txt")
Reads safeboot.txt. If a feature crashed on the previous run it stays disabled next boot
("feature disabled after panic: <name>"). Crash-loop protection.

## HWID compute  (FUN_18010b840, "safeguard-hwid-v2")
Reads a few registry values via FUN_1800226a0 (a RegGetValueW wrapper), concatenates, hashes.
Inputs, from the reg path fragments at DAT_1804e1de3/dea/dee/e0e:
  SOFTWARE\Microsoft\Cryptography\MachineGuid
  SOFTWARE\Microsoft\Windows NT\CurrentVersion\ProductId
  + GetVolumeInformationW volume serial
Domain tag "safeguard-hwid-v2" -> 32 hex chars.

## License parse + gate  (FUN_180111650, "Claims"/"hwid"; sig verify FUN_18010e520 / FUN_18013a5d0)
Parses the HEAVEN-LICENSE-v1 token (base64 JSON: uid/iss/exp/hwid/feat/rid/wk), verifies the
ed25519 signature, checks hwid == local hwid and exp hasn't passed.
Same thing is validated server-side at /session token mint (launcher.log "mint ... OK"), so a
local-only bypass doesn't get you past the server gate. That's the important part.

## Standalone hwid tool  (heaven-hwid.exe, base 0x140000000; FUN_14000149b prints hwid)
Same MachineGuid + ProductId + volume recipe. Just a way to grab the machine's id for licensing.

## Injector - heaven_platform.dll  (DllMain FUN_180001000; inject FUN_1800016c0)
Technique is an inline trampoline hook on ntdll!NtCreateUserProcess.
  1. DllMain(DLL_PROCESS_ATTACH): opens heaven_platform.log, GetModuleFileNameA.
  2. GetProcAddress(ntdll,"NtCreateUserProcess"), read prologue "4C 8B" (mov r10,rcx) to pull the
     syscall number (saw 0xCF).
  3. VirtualAlloc RWX 0x40 trampoline, VirtualProtect + patch the stub to redirect.
  4. On the redirected process-create, inject heaven2.dll into the new game process.
     Fallback: LoadLibrary(heaven2.dll) from disk if the "HeavenEngineV1" shared-mem isn't there.
DETECTION (strong): ntdll!NtCreateUserProcess prologue modified in a process that also has
heaven_platform.dll loaded; an RWX ~0x40-byte trampoline page near ntdll; the heaven_platform.log
file. Worker requests from here use UA "Mozilla/5.0 (Windows NT 10.0; Win64; x64)".
