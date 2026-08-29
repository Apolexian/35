//! src/core/license.rs - license gate. from FUN_180111650 (Claims parse) +
//! FUN_18010e520 / FUN_18013a5d0 (signature verify). C: ../../ghidra/subsystems_decompiled.c.
//!
//! Token format: "HEAVEN-LICENSE-v1." + b64url(json Claims) + "." + b64url(ed25519 sig).
//! Claims fields (serde): uid, iss, exp, hwid, feat, rid, wk.
//!
//! Documented for understanding/detection only. The gate is ALSO enforced server-side: the
//! launcher mints a session token from heaven2-beta.nighty33.workers.dev/session per launch,
//! and the worker validates the hwid. A client-side patch does not obtain a server token.
use serde::Deserialize;

#[derive(Deserialize)]
pub struct Claims {
    pub uid: String, pub iss: u64, pub exp: u64, pub hwid: String,
    pub feat: Vec<String>, pub rid: String, pub wk: String,
}

/// Parse + verify a license token against the local hwid (FUN_180111650 + sig verify).
pub fn gate(token: &str, hwid_now: &str) -> Result<Claims, GateError> {
    let (_hdr, rest)   = token.split_once('.').ok_or(GateError::Malformed)?;
    let (body, sig)    = rest.split_once('.').ok_or(GateError::Malformed)?;
    let payload = b64url(body)?;
    if !verify_sig(&payload, &b64url(sig)?) { return Err(GateError::BadSignature); } // ed25519, embedded pubkey
    let claims: Claims = serde_json::from_slice(&payload).map_err(|_| GateError::Json)?;
    if claims.hwid != hwid_now { return Err(GateError::HwidMismatch); }
    if now_unix() > claims.exp { return Err(GateError::Expired); }
    Ok(claims)
}

pub enum GateError { Malformed, BadSignature, HwidMismatch, Expired, Json }
fn b64url(_s: &str) -> Result<Vec<u8>, GateError> { Err(GateError::Malformed) }
fn verify_sig(_payload: &[u8], _sig: &[u8]) -> bool { false }
fn now_unix() -> u64 { 0 }
