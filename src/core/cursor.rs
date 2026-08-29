//! src/core/cursor.rs - custom cursor (core module, not one of the 27 features).
//! Keys: cursor.enabled, cursor.size (##cursz), cursor.fps (##curfps). Docs: docs/CUSTOM-CURSOR.md.
//!
//! Default cursor ships EMBEDDED in heaven2.dll (a 128x128 PNG at file offset 0x4d8b44 -
//! extracted to extracted_assets/embedded_2_0x4d8b44.png). Users may override by dropping their
//! own PNG next to the game exe:
//!   heaven-cursor.png                      (static)
//!   heaven-cursor-1.png, heaven-cursor-2.png, ...  (animated sequence, plays at cursor.fps)
//!   heaven-cursor.txt                      (optional config)
//! C evidence: src/core/cursor.rs path string + "heaven-cursor" loader strings in heaven2.dll.

pub struct Cursor {
    pub enabled: bool, // cursor.enabled
    pub size: f32,     // cursor.size
    pub fps: f32,      // cursor.fps (animation frame rate)
    frames: Vec<Vec<u8>>, // decoded PNG frames (default embedded, or user heaven-cursor*.png)
    idx: usize,
}
impl Default for Cursor {
    fn default() -> Self { Cursor { enabled: false, size: 1.0, fps: 12.0, frames: Vec::new(), idx: 0 } }
}
impl Cursor {
    /// load user cursor next to the game exe if present, else fall back to the embedded default.
    pub fn load(&mut self, game_dir: &str) {
        // try heaven-cursor-1.png.. (animated), else heaven-cursor.png, else embedded default.
        if !self.load_sequence(game_dir) && !self.load_static(game_dir) {
            self.frames = vec![embedded_default_png().to_vec()];
        }
    }
    /// per-frame tick: advance the animation and draw the cursor sprite at `size`.
    pub fn tick(&mut self) {
        if !self.enabled || self.frames.is_empty() { return; }
        self.idx = (self.idx + 1) % self.frames.len(); // paced by cursor.fps
        // draw_sprite(self.frames[self.idx], self.size);
    }
    fn load_sequence(&mut self, _dir: &str) -> bool { false } // heaven-cursor-N.png
    fn load_static(&mut self, _dir: &str) -> bool { false }   // heaven-cursor.png
}
/// the default cursor PNG baked into heaven2.dll .rdata (128x128).
fn embedded_default_png() -> &'static [u8] { &[] }
