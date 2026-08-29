//! src/features/zones/{condition,course,operands}.rs - skill trigger-zone evaluator [RE]
//! Parses a skill's condition string (e.g. "phase_random&distance_rate>=0.5") into an
//! operand tree, then computes the [start,end] track distance where it can fire, given
//! RawCourse. Feeds oracle + the hint overlay. [RE]
pub enum Operand { Field(String), Num(f32), Cmp(Box<Operand>, Ord, Box<Operand>), And(Vec<Operand>), Or(Vec<Operand>) }
pub enum Ord { Ge, Gt, Le, Lt, Eq }
pub fn parse(_cond: &str) -> Operand { unimplemented!() }
pub fn zone_for(_c: &crate::data::RawCourse, _op: &Operand) -> Option<(f32,f32)> { None }
