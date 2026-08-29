# Heaven 2.0 - tournament detection

Target: Umamusume Pretty Derby (Steam). The cheat is "Heaven 2.0", Rust, injected DLL.
Build paths in the binaries name an author handle and a per-seat licensing handle. Both redacted.

## 1. Host artifacts (disk)
Scan player machines or submitted logs. Any one of these files means Heaven is/was present:
  heaven2.dll  heaven_platform.dll  heaven-product-launcher.exe  heaven-hwid.exe
  heaven2.pack  heaven-automation.pack
  heaven2.license  heaven-automation.license  heaven2.session  automation.session
  heaven2.log  heaven2-boot.txt  heaven2-logs\crash-*  heaven2.map
  heaven2.off (kill-switch)  heaven2.offdisabled.txt  .heaven2
  heaven_tt_profiles.json  heaven_tt_hunter.json  heaven_platform.log  launcher.log
  heaven-cursor*.png/.txt  launcher.json (points at game_exe + bundles)
Config dirs: bundles\heaven2, bundles\automation, state\

## 2. Process / memory (live or dump)
  - Injected module heaven2.dll / heaven_platform.dll inside UmamusumePrettyDerby.exe
  - Named shared memory "HeavenEngineV1"
  - heaven_platform.dll hooks NtCreateUserProcess (syscall 0xCF) to inject at launch
  - Local listen socket (ws2_32 bind/listen/accept) - that's localapi / the "heaven2-tt-export" bridge
  - DX11 present-hook overlay: hudhook 0.6.5 + DirectComposition (dcomp.dll)
  - Trampoline hooks (minhook / "mh"): VirtualProtect + FlushInstructionCache on game funcs
  - Anti-analysis: IsDebuggerPresent + CheckRemoteDebuggerPresent, and
    SetWindowDisplayAffinity(WDA_EXCLUDEFROMCAPTURE) to keep the overlay out of OBS/screen-capture

Strongest single AC signature: an injected module calling il2cpp_field_static_get_value on a game
field named "currentCryptoKey". Heaven lifts the game's own crypto key straight out of memory,
nothing legit does that.

## 3. Network (netflow / DNS)
  - C2 host: heaven2-beta.nighty33.workers.dev  (path /session, POST JSON, UA "HeavenLauncher")
  - Cloudflare Workers backend under nighty33.workers.dev
  - Per-launch token "mint" - launcher.log line: "mint heaven2/automation: OK (fresh token from worker)"

## 4. HWID (tie multiple accounts to one machine)
  hwid = hash("safeguard-hwid-v2",
              HKLM\SOFTWARE\Microsoft\Cryptography\MachineGuid
            + HKLM\SOFTWARE\Microsoft\Windows NT\CurrentVersion\ProductId
            + GetVolumeInformationW volume serial)  -> 32 hex chars.
  Shows up in: the license (hwid claim), the session token prefix, launcher.log.
  Same hwid across accounts = same physical machine. This is the correlation lever.

## 5. Overlay / stream tells (VODs, screenshots)
  Strings the overlay draws: "HEAVEN 2.0  BETA", "Heaven 2.0 ready",
  "Heaven is visible to screen capture", "OPPONENT REROLL", "Event predictor",
  "Reward preview", "Apply optimal", "Speed x<N>". menu tabs: Skips / Speed / Performance /
  Career / Team Trials / System.

  Careful here - the overlay is capture-excluded by default. A clean-looking stream does NOT clear
  a player. Go by indirect tells instead: impossibly fast races, perfect event choices, TT reroll spam.

## 6. Feature -> what to watch for in-game
  oracle (event reward): always-optimal training-event choices. reads choice_reward_array from
      memory; overlay shows the exact rewards before the pick.
  hyperskip / game_speed / skips: abnormally fast race/training completion.
  team_trials hunter: refreshes Opponent over and over until a target viewer_id/name shows up.
  team_trials padder/profiles: instant full 15-slot TT team fill (heaven_tt_profiles.json).
  race_export / oracle sim: RaceInfo.SetAndDeserializeBase64 + 3dRaceInfo.SetupSimulateData to
      pre-simulate the outcome.
  rating/affinity/hints: reads Cygames master.mdb (LocalLow\Cygames\umamusume\master).

## 7. Game classes/fields it touches (for a custom AC memory scanner)
  Event: event_id, event_contents_info, choice_array, choice_reward_array,
         chara_effect_id_array, chara_info  (reward stride 0x50; codes SPD STA PWR GUT WIZ SKPT)
  Race:  RaceInfo.SetAndDeserializeBase64, RaceInfo.get_RaceTrackId, 3dRaceInfo.SetupSimulateData
         backing fields: RaceHorse, PlayerTeamMemberArray, RaceType, SimDataBase64, charaName,
         raceFinishTimeRaw, FinishOrderRaw
  TT:    OpponentSelect (view controller)
  Crypto: static field currentCryptoKey

## limits
  - Updater checks ed25519 + sha256, so you can't feed it a fake build.
  - Some internal class names are string-obfuscated (multi-stage) and I never recovered them
    statically. The field/method names above are the reliable signatures - lean on those.
