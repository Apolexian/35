//! src/features/oracle/mod.rs - race outcome projection  [RE]
//! Evidence: module paths oracle/mod.rs + oracle/project.rs, zones/* skill-timing model,
//! RawCourse geometry, SkillEffect(value,max_procs,value_scale).
//! Oracle simulates the race from course geometry + each horse's skills to project
//! finish order / whether a target skill will proc in its condition zone. [RE]
pub struct Projection { pub order: Vec<u32>, pub finish_time: Vec<f32> }
pub fn project(_course: &crate::data::RawCourse, _field: &[u32]) -> Projection { unimplemented!() }
