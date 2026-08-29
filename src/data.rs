//! src/data.rs - game data model (deserialized from bundled JSON + gametora scrape)
//! ALL field names below are [VERBATIM] from serde metadata in heaven2.dll .rdata.
use serde::Deserialize;

#[derive(Deserialize)] // "struct Skill ... with 21 elements"
pub struct Skill {
    pub id: u32, pub iconid: u32, pub rarity: u8, pub activation: String,
    pub name_en: String, pub jpname: String, pub name_ko: String, pub name_tw: String,
    pub desc_en: String, pub endesc: String, pub enname: String,
    pub cost: i32, pub condition_groups: Vec<ConditionGroup>,
    pub gene_version: Option<GeneVersion>, pub charversions: Vec<u32>,
    pub sce_e: String, pub sup_e: String, pub evo: bool,
    pub r#type: u8, pub tid: u32,
    // note: 21st element folded into one of the above during RE
}

#[derive(Deserialize)] // "struct ConditionGroup ... with 6 elements"
pub struct ConditionGroup {
    pub condition: String, pub precondition: String,
    pub base_time: f32, pub cd: f32, pub time_scale: f32, // +1 RE
    pub value: Option<SkillEffect>,
}

#[derive(Deserialize)] // "struct SkillEffect value max_procs value_scale with 4 elements"
pub struct SkillEffect { pub value: f32, pub max_procs: i32, pub value_scale: f32, pub kind: u8 }

#[derive(Deserialize)] // "struct GeneVersion parent_skills with 8 elements"
pub struct GeneVersion { pub parent_skills: Vec<u32> /* +7 RE fields */ }

#[derive(Deserialize)] // "struct Character ... with 9 elements"
pub struct Character {
    pub char_id: u32, pub en_name: String, pub jp_name: String, pub va_en: String,
    pub birth_month: u8, pub birth_day: u8, pub height: u16, pub three_sizes: ThreeSizes,
}
#[derive(Deserialize)] pub struct ThreeSizes { pub b: u16, pub w: u16, pub h: u16 } // "b w h"

#[derive(Deserialize)] // "struct CharacterCard ... with 19 elements"
pub struct CharacterCard {
    pub title: String, pub title_en_gl: String,
    pub base_stats: Vec<i32>, pub five_star_stats: Vec<i32>, pub four_star_stats: Vec<i32>,
    pub three_star_stats: Vec<i32>, pub two_star_stats: Vec<i32>,
    pub aptitude: Vec<String>, pub stat_bonus: Vec<i32>,
    pub skills_unique: Vec<u32>, pub skills_innate: Vec<u32>, pub skills_awakening: Vec<u32>,
    pub skills_event: Vec<u32>, pub skills_evo: Vec<SkillEvoRef>,
    // +5 RE
}
#[derive(Deserialize)] // "struct SkillEvoRef card_id evos scenario_id"
pub struct SkillEvoRef { pub card_id: u32, pub evos: Vec<u32>, pub scenario_id: u32 }

#[derive(Deserialize)] // "struct SupportCard ... with 13 elements"
pub struct SupportCard {
    pub support_id: u32, pub char_name: String, pub title_en: String, pub obtained: String,
    pub effects: Vec<Vec<i32>>, pub hints: SupportHints, pub event_skills: Vec<u32>,
    pub unique: Option<SupportUnique>, pub release_en: String, // +4 RE
}
#[derive(Deserialize)] pub struct SupportHints { pub hint_skills: Vec<u32>, pub hint_others: Vec<HintOther> }
#[derive(Deserialize)] pub struct HintOther { pub hint_type: String, pub hint_value: i32 }
#[derive(Deserialize)] pub struct SupportUnique { pub level: i32 /* +1 */ }

#[derive(Deserialize)] // "struct Scenario name_en_old name_ja url_name with 5 elements"
pub struct Scenario { pub name_en_old: String, pub name_ja: String, pub url_name: String }

#[derive(Deserialize)] // "struct RawCourse ... with 9 elements" - track geometry from gametora
pub struct RawCourse { /* nd dt su tn co st sl io - 9 short keys [VERBATIM tokens] */
    pub nd: i32, pub dt: i32, pub su: i32, pub tn: i32, pub co: i32,
    pub st: i32, pub sl: i32, pub io: i32, pub extra: i32,
}
