# IL2CPP class/field access map (AC memory signatures)

Built by xref'ing game-type name strings in Ghidra back to the Heaven function that reads them.

One thing to keep straight about offsets: the il2cpp field OFFSETS aren't constants in the DLL.
Heaven resolves them at runtime via il2cpp_field_get_offset(class_from_name(image, ns, name)).
What's actually fixed is the class+field NAMES it looks up, plus a couple of hardcoded struct
strides (reward entry = 0x50). An AC resolves those same names to the same offsets against the
live game, so the name set is the durable signature, not any address.

## Event-reward oracle  (FUN_180148840 / FUN_18014b590 / FUN_18014d920)
Fields read off the event view-controller:
  event_id, event_contents_info, choice_array, choice_reward_array,
  chara_effect_id_array, chara_info, commit, choices, rewards
Stat codes decoded: SPD STA PWR GUT WIZ SKPT
Reward struct stride: 0x50 (80 bytes)  [hardcoded in the decompile]
Local feed: channel "heaven2-events", key "heaven2-events.key", tag "oracle:feed"

## Race export / sim  (FUN_1802223e0 / FUN_180033810 / FUN_1802223b0 / FUN_180444ff0)
Methods invoked (il2cpp_runtime_invoke by name):
  RaceInfo.SetAndDeserializeBase64
  RaceInfo.get_RaceTrackId
  3dRaceInfo.SetupSimulateData
C# backing fields read (<name>k__BackingField):
  RaceHorse, PlayerTeamMemberArray, RaceType, SimDataBase64, charaName
plus raceFinishTimeRaw, FinishOrderRaw
Setting key: race_export.enabled ; export channel "heaven2-race-export"

## Team Trials hunter  (FUN_1800da710 / FUN_1802266f0)
Class: OpponentSelect (view controller) -> logs "OpponentSelect VC not found".
Reads the offered opponents, taps the in-game refresh, matches on name / viewer_id.

## Crypto-key extractor  (FUN_18015b030)
Reads the game's STATIC field `currentCryptoKey` via il2cpp_field_static_get_value.
Does a full reflection walk to get there: il2cpp_class_get_fields / field_get_name /
field_get_type / field_get_offset / field_static_get_value. Pulls the live key out of game memory.

## Skips state machine  (FUN_1801f0e10 / FUN_180141470)
keys: skips.training skip:rainbow skips.bubbles skip:train
      skips.rival skip:rival skips.events skip:event(:loop-armed)

## Data source (rating/affinity/hints)
Reads the Cygames master.mdb SQLite:
  LocalLow\Cygames\umamusume\master\master.mdb  (or gamedir\master)
  query: select "index", text from text_data where category=6
Menu tree strings: Skips / Speed / Performance / Career / Team Trials / System

## Resolved il2cpp fnptr slots (from the decompile, active)
  DAT_1805ea420 = il2cpp_class_get_field_from_name (or class_from_name) resolver
  DAT_1805ea428 = follow-on il2cpp call (field_get_offset / static_get_value)
  DAT_1805ea490 = "il2cpp not ready" guard flag (nonzero => abort)
  Table region : .data 0x1805ea2d0 .. 0x1805eb5d8  (+ 0x180607510 region)

## Crypto-key extractor, the messy detail (FUN_18015b030)
  - The class name that owns `currentCryptoKey` is STRING-OBFUSCATED. It gets decrypted at
    runtime by FUN_180098b50(&DAT_180517540, key=0x7335c131) and
    FUN_1800a17d0(&DAT_1805176e8, 0x1d75f82f). Custom per-char cipher, imul/rol state, not a
    plain xor - you have to emulate it to get the string back.
  - The field name "currentCryptoKey" (0x10) is plaintext. Read via static_get_value.
  - AC signature: any module calling il2cpp_field_static_get_value on a field named
    "currentCryptoKey" that it didn't itself define. That's this cheat lifting the game key.
