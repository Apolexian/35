# Obfuscated strings recovered by Unicorn emulation

The sensitive game class/method names in heaven2.dll aren't stored in the clear. They're
multi-stage obfuscated: a FUN_180098b50 pointer-compute followed by inline movabs/add that decrypt
into a stack buffer. Static grep gets you nothing.

Way I got them: emulate each function under Unicorn, force the il2cpp-ready guard
(DAT_1805ea490, static value 3 -> 0), stub the allocators, then read the decrypted stack buffer
right at the il2cpp resolver call site. Tedious but it works.

## Crypto key extractor (FUN_18015b030)
  class  Gallop.WorkSingleModeCharaData
  field  currentCryptoKey   (static)
  => reads Gallop.WorkSingleModeCharaData.currentCryptoKey via il2cpp_field_static_get_value

## Hyperskip (FUN_18021c950) - mechanism is simulated skip-button clicks
  Gallop.ButtonCommon
  Gallop.FlickableButton
  Gallop.PartsSingleModeResultStoryEvent
  methods: OnClickSkipButton, OnPointerClick, OnPointerDown, OnPointerUp
  helpers: UnityEngine.Component.GetComponentInParent, Object.FindObjectsOfType, .ctor

## Team Trials hunter (FUN_1802266f0)
  Gallop.TeamStadiumDeckViewController  (the TT opponent/deck select controller)

## Notes
  - Oracle event reader (FUN_180148840) used PLAINTEXT field names (choice_array,
    choice_reward_array, event_id ...). no decryption needed for that one.
  - The reflection dumper (FUN_1802223e0) resolves the whole il2cpp export set by plaintext name.
  - DETECTION: an injected module resolving "Gallop.WorkSingleModeCharaData" + "currentCryptoKey",
    or hooking Gallop.ButtonCommon.OnClickSkipButton, is Heaven.
