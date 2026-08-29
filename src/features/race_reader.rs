//! src/features/race_reader.rs - live race-memory reader. from FUN_1800efeb0.
//! Reads race state from the game (fields race_horse_data / available_continue_num) into a 0x400
//! buffer, tagged "race:rmpv". Feeds oracle sim + race_export. Same read pattern as oracle_reader.
//! C: ../../ghidra/dx11_race_decompiled.c (sub_1800efeb0).
pub fn on_race_frame(vc: usize, race_obj: usize) -> Option<Vec<u8>> {
    // FUN_1800e8880(vc, race_obj, "race_horse_data", 0xf) / ("available_continue_num", 0x16)
    let has_horse = il2_has_field(vc, race_obj, "race_horse_data");
    let has_cont  = il2_has_field(vc, race_obj, "available_continue_num");
    if !has_horse && !has_cont { return None; }
    diag_ring_push("race:rmpv");
    let snap = read_race_snapshot(vc, race_obj, 0x400)?; // FUN_180081e20 -> Result (err niche handled)
    // ... parse horses / continue count ... (tag "race:rmpv:done")
    Some(snap)
}
fn il2_has_field(_vc: usize,_o: usize,_f: &str) -> bool { false }
fn diag_ring_push(_t: &str) {}
fn read_race_snapshot(_vc: usize,_o: usize,_cap: usize) -> Option<Vec<u8>> { None }
