//! src/core/license/verify.rs  - license gate  [RE]
//! Evidence: struct Claims [VERBATIM], "HEAVEN-LICENSE-v1" [STRINGS],
//! ProcessPrng/BCryptGenRandom/SystemFunction036 + base64 [IMPORTS],
//! boot log: license::gate / license::unlock_private, field "currentCryptoKey".

use serde::Deserialize;

/// [VERBATIM] serde: "struct Claims uid iss exp hwid feat rid wk with 7 elements"
#[derive(Deserialize)]
pub struct Claims {
    pub uid:  String,      // buyer handle
    pub iss:  u64,         // issued-at unix
    pub exp:  u64,         // expiry unix
    pub hwid: String,      // machine lock (32 hex = md5-ish of hw fingerprint)
    pub feat: Vec<String>, // entitled feature flags (empty in beta license)
    pub rid:  String,      // release id, e.g. "beta1"
    pub wk:   String,      // wrapped key -> unlocks `unlock_private` features
}

/// Token format: "HEAVEN-LICENSE-v1." + b64url(payload) + "." + b64url(sig)  [STRINGS]
/// Ed25519/HMAC over payload; pubkey embedded in .rdata (not reproduced here). [RE]
pub fn verify(token: &str, hwid_now: &str) -> Result<Claims, GateError> {
    let (_hdr, rest) = token.split_once('.').ok_or(GateError::Malformed)?;
    let (payload_b64, sig_b64) = rest.split_once('.').ok_or(GateError::Malformed)?;

    let payload = b64url_decode(payload_b64)?;
    let sig     = b64url_decode(sig_b64)?;
    if !verify_sig(&payload, &sig) { return Err(GateError::BadSignature); } // [RE]

    let claims: Claims = serde_json::from_slice(&payload)?;

    // [RE] gate checks - order from boot log (gate then unlock_private)
    if claims.hwid != hwid_now      { return Err(GateError::HwidMismatch); }
    if now_unix() > claims.exp      { return Err(GateError::Expired); }
    Ok(claims)
}

/// [RE] unlock_private: `wk` is unwrapped with a key derived from hwid,
/// yielding the AES key that decrypts the "private" feature blob shipped in .rdata.
/// NOTE: intentionally not reconstructed - this is the license-circumvention path.
pub fn unlock_private(_claims: &Claims) { /* omitted */ }

pub enum GateError { Malformed, BadSignature, HwidMismatch, Expired, Json }
