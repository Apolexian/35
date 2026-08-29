//! src/features/localapi.rs - from FUN_180217e50.  key "localapi.enabled".
//! Local event stream + C ABI. Binds 127.0.0.1:<port> (default 8799). Handshake JSON:
//! {"hello":"heaven-localapi","tags":[...]}. Channels heaven-localapi-tx / -accept.
//! C: ../../ghidra/all_features_decompiled.c (sub_180217e50).
pub const DEFAULT_PORT: u16 = 8799;
pub const BIND_ADDR: &str = "127.0.0.1";

pub struct LocalApi { pub enabled: bool, pub port: u16 }
impl Default for LocalApi { fn default() -> Self { LocalApi { enabled: false, port: DEFAULT_PORT } } }
impl LocalApi {
    /// if enabled, listen on 127.0.0.1:port, greet clients with the hello frame, then stream events.
    pub fn start(&self) { if !self.enabled { return; } /* ws2_32 bind/listen/accept */ }
    pub fn hello_frame(tags: &[&str]) -> String {
        let list: Vec<String> = tags.iter().map(|t| format!("\"{t}\"")).collect();
        format!("{{\"hello\":\"heaven-localapi\",\"tags\":[{}]}}", list.join(","))
    }
}
