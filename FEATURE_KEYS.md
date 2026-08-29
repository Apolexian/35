# Heaven 2.0 - feature + config key inventory (from string mining)

## Crypto / network - HARDCODED in the binary
  bridge AES-256 key: "CarrotBlender-Fixed-AES256-Key!!"  IV: "CarrotBlenderIV0"
  bridge.port  = 17229   (companion overlay feed, bridge.enabled)
  localapi.port= 8799    (heaven-localapi; handshake {"hello":"heaven-localapi","tags":[...]};
                          channels heaven-localapi-tx / heaven-localapi-accept)
  event feed keys: heaven-evt-key-v1 / heaven-evt-nonce-v1 ; channel "heaven2-events"
  C2: heaven2-beta.nighty33.workers.dev/session

## 27 feature modules (Registry::install order) + their setting keys
  skips        : skips.training skip:rainbow skips.bubbles skip:train
                 skips.rival skips.events skip:event(:loop-armed)
  game_speed   : game_speed.speed  game_speed.menus  ("Speed menus/transitions (experimental)")
  hyperskip    : hyperskip.enabled hyperskip.multiplier  ("Speed x<N>")
  fps_unlock   : fps_unlock
  graphics     : graphics.*
  race_result  : race_result.enabled  (RaceSkipButton)
  team_trials  : team_trials.capture  + profiles (heaven_tt_profiles.json) + hunter (heaven_tt_hunter.json)
  race_export  : race_export.enabled  ("heaven2-tt-export" / "heaven2-race-export")
  shop         : (shop automation)
  grad_skip    : grad_skip
  oracle       : oracle.predict oracle.capture oracle.prediction  (event reward predictor)
  affinity     : affinity.show affinity.size affinity.edit (heaven_tt_affinity.json)
  rating       : rating.enabled rating.hidden rating.mode rating.custom
                 rating.custom_tier_base rating.custom_fill rating.custom_tt rating.custom_profile
                 ("Skill-buy optimizer", "Apply optimal")
  custompriority: custompriority.show  (Custom Priority skill list; Ctrl+G)
  smooth       : smooth.enabled  ("Smooth skip loading")
  reset        : reset.fire  reset:fire  ("Reset game")
  icons        : (heaven-icons: skill/uma/rank/support/scenario icons)
  hints        : hints.alert_auto hints.alert_edit  (facility hint alert overlay)
  menu_prefs   : menu_prefs.open_on_start
  profiles     : (TT team profiles)
  logclean     : (log cleanup)
  localapi     : localapi.port (8799)
  bridge       : bridge.enabled bridge.port (17229)  ("Companion overlay feed")
  story        : story.turbo  ("Force max story speed")
  gametora     : gametora.com scrape (skills/support-cards/characters/scenarios)
  followers    : followers.enabled  (reads FriendListItem/TrainerInfo/FollowInfo)
  streamer     : streamer.enabled   (hides overlay from capture; FAILS on Wine/Proton)

## Core (non-feature) modules
  crashguard (VEH+minidump), watchdog, safeboot, settings, killswitch,
  license::gate + license::unlock_private, core/stealth/{surface,watermark}
