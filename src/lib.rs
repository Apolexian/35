//! heaven2 rebuild from the decompiles. not the vendor source, see RECONSTRUCTION_NOTES.md.

pub mod data;
pub mod net;
pub mod launcher_worker;
pub mod platform_injector; // heaven_platform.dll (injector)
pub mod registry;          // Registry::install + reg.pump

pub mod core {
    pub mod il2cpp { pub mod resolve; }
    pub mod cursor;
    pub mod overlay;
    pub mod watchdog;
    pub mod crashguard;
    pub mod hwid;
    pub mod license;
}

pub mod features {
    // simple hook features (LOGIC, accurate back-port)
    pub mod killswitch;
    pub mod game_speed;
    pub mod story;
    pub mod race_result;
    pub mod race_export;
    pub mod race_reader;
    pub mod grad_skip;
    pub mod smooth;
    pub mod reset;
    pub mod graphics;
    pub mod menu_prefs;
    pub mod followers;
    pub mod tt_capture;
    pub mod profiles;
    pub mod localapi;
    pub mod bridge;
    pub mod crypto_key;

    // state/optimizer features
    pub mod rating;
    pub mod skips;

    // UI-heavy features (skeleton reconstruction)
    pub mod hyperskip;
    pub mod custompriority;
    pub mod affinity;
    pub mod hints;
    pub mod streamer;

    pub mod oracle { pub mod project; pub mod reader; pub mod formatter; }
    pub mod team_trials { pub mod hunter; pub mod padder; }
}
