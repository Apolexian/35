# heaven2

Picking apart the "Heaven 2.0" tool for Umamusume. I only cared about detecting it for
tournament use, so I never actually ran the thing. Most of what's here is how it wedges itself in
and what game memory it pokes at.

Original is a stripped, partly-obfuscated Rust build. No recovering the real sources from that.
The stuff in `src/` is my rebuild off the decompiles. It compiles and it matches what the binary
actually does, but it's my reconstruction, not the vendor's code. Don't confuse the two.

## Layout

* `src/` rust rebuild, ~50 modules. `cargo build` works.
* `ghidra/` raw decompiled C for the functions I looked at (~64k lines).
* `extracted_assets/` 3 PNGs carved out of the DLL: default cursor, logo, wordmark.
* docs:
  * `DETECTION_PACKAGE.md` - IOCs and memory signatures. this is the one you want for tournaments.
  * `SUBSYSTEMS.md` - injector, watchdog, crashguard, safeboot, hwid, license.
  * `IL2CPP_SIGNATURES.md` - the game classes/fields it reads.
  * `FEATURE_KEYS.md` - features, config keys, the hardcoded crypto/ports.
  * `ANALYSIS_DEEP.md` - function map, obfuscation, il2cpp table.
  * `RECOVERED_NAMES.md` - obfuscated class names pulled back out by emulation.
  * `RECONSTRUCTION_NOTES.md` - how much to trust each module.

## Binaries

* `heaven2.dll` - the engine. 13353 functions. I got through ~50 of them.
* `heaven_platform.dll` - injector. hooks NtCreateUserProcess and drops heaven2.dll into the game.
* `heaven-hwid.exe` - prints the machine id.
* `heaven-product-launcher.exe` - updater + token mint against the worker.

## the shape of it

Rust. overlay is winit+egui through hudhook 0.6.5 sitting on a DX11 present hook. reads the game
by il2cpp reflection.

backend is a cloudflare worker: heaven2-beta.nighty33.workers.dev/session. two UAs show up,
"HeavenLauncher" and "Mozilla/5.0 (Windows NT 10.0; Win64; x64)".

machine id = hash("safeguard-hwid-v2", MachineGuid + ProductId + volume serial). checked client
side AND at the worker when it mints a token, which matters later.

bridge crypto is baked in: key "CarrotBlender-Fixed-AES256-Key!!", iv "CarrotBlenderIV0",
port 17229. localapi runs on 8799.

features: oracle (event reward preview), hyperskip, team trials opponent hunter + padder,
race export/sim, rating skill-buy optimiser, skips, streamer (hides the overlay from capture).

## what actually catches it

full list is in DETECTION_PACKAGE.md. the ones that matter:

1. heaven2.dll / heaven_platform.dll loaded inside UmamusumePrettyDerby.exe.
2. ntdll!NtCreateUserProcess prologue patched, plus an RWX trampoline sitting near ntdll. that's the injector.
3. a hook on IDXGISwapChain::Present. that's the egui overlay.
4. injected code reading Gallop.WorkSingleModeCharaData.currentCryptoKey.
5. named shared memory "HeavenEngineV1"; local sockets on 8799 / 17229.
6. files: heaven2.*, heaven_platform.log, heaven_tt_*.json, heaven-cursor*.png, heaven2.off.
7. same machine id turning up across accounts = same box.

## the license lock

I mapped the hwid/license check but didn't defeat it, and honestly there's no point. It's
enforced at the worker when the token is minted, so patching the client gets you nothing - the
server just won't hand you a token.
