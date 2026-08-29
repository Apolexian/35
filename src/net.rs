//! src/net.rs - worker C2 + session mint  [RE]
//! Evidence: winhttp imports, "HEAVEN_WORKER", "heaven2-beta.nighty33.workers.dev/session"
//! [STRINGS], struct CheckResponse [VERBATIM], session token artifacts.

use serde::Deserialize;

pub const WORKER_HOST: &str = "heaven2-beta.nighty33.workers.dev"; // [STRINGS]
pub const SESSION_PATH: &str = "/session";                          // [STRINGS]

/// [VERBATIM] "struct CheckResponse ok token reason nonce sig version hash
///  changelog dll_sha pack_sha dll_sig pack_sig sub_exp with 14 elements"
#[derive(Deserialize)]
pub struct CheckResponse {
    pub ok: bool,
    pub token: String,       // fresh session token ("mint ... OK")
    pub reason: String,
    pub nonce: String,
    pub sig: String,
    pub version: String,     // latest version (drives update modal: 0.1.2 -> 0.1.5)
    pub hash: String,
    pub changelog: String,
    pub dll_sha: String,     // integrity: expected sha of heaven2.dll
    pub pack_sha: String,
    pub dll_sig: String,
    pub pack_sig: String,
    pub sub_exp: u64,        // subscription expiry (server-authoritative)
}

/// POST {hwid, product, nonce} -> CheckResponse. Bearer = license token. [RE][IMPORTS winhttp]
pub fn mint_session(license_token: &str, hwid: &str, product: &str) -> Option<CheckResponse> {
    // WinHttpOpen/Connect/OpenRequest(POST, SESSION_PATH)/SendRequest/ReceiveResponse/ReadData
    // body = serde_json {"hwid":hwid,"product":product,"nonce":rand()}
    // header Authorization: Bearer <license_token>
    // response verified against embedded pubkey (sig/nonce), then cached to <product>.session
    unimplemented!("[RE] winhttp call chain")
}
