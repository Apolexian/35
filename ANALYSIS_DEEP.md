# Deep analysis (capstone + .pdata + Ghidra headless)

## Function map (heaven2.dll, 13,353 funcs via .pdata)
| feature | func RVA/VA | size | obfuscation |
|---|---|---|---|
| oracle EVENT-REWARD reader (`oracle.predict`) | 0x180148840 | 9293 | **clean** (not flattened) |
| oracle predictor/formatter #2 | 0x18014d920 | 7957 | light |
| hyperskip core (`hyperskip.multiplier`) | 0x18021c950 | 11623 | **CFF flattened** |
| skips state machine | 0x1801f0e10 | 11088 | **CFF flattened** |
| TT hunter pump (`OpponentSelect VC not found`) | 0x1802266f0 | 8674 | **CFF flattened** |
| TT UI (`OPPONENT REROLL`) | 0x1802223e0 | 3704 | - |
| killswitch (`heaven2.off`) | 0x1800e9920 | 14174 | **CFF flattened** |
| padder pump | 0x180224f40 | 5391 | - |
| padder endview | 0x180131840 | 246 | - |

## Obfuscation

Not applied evenly, which was the first useful thing to notice. Whole-binary counts:
~6,777 flattening state-cmps and ~4,251 movabs (on-stack string build / xor keys).

The data model and the feature-key strings are all plaintext. It's the sensitive control funcs
that get CFF + string-decrypt. So the config keys basically fell out for free while the crypto
extractor fought back.

CFF dispatcher is an LCG-style state machine - `cmp ecx,<magic> / je` then imul/xor/rol to
pick the next state. Some strings (currentCryptoKey, HEAVEN-LICENSE-v1) are built at runtime, no
clean reference to grep for.

## il2cpp runtime import table
Resolved fnptr slots live in .data around 0x1805ea2d0 .. 0x1805eb5d8, plus a 0x180607510 region.
They resolve via GetProcAddress on GameAssembly.dll exports, which is why none of this shows up in
the IAT.

## Launcher / backend (heaven-product-launcher.exe)
- Worker: heaven2-beta.nighty33.workers.dev/session (UA HeavenLauncher, POST json).
- HWID: hash("safeguard-hwid-v2", MachineGuid + ProductId + volume serial).
- Update path: ed25519 signature + sha256. MITM or tamper gets rejected.
- Build paths in the binary leak an E:\ dev tree and a C:\Users\ home dir; there's also a
  buyer uid baked in. Redacted here.
