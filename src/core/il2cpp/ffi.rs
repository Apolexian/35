//! src/core/il2cpp/ffi.rs - Unity IL2CPP runtime bindings  [RE]
//! Evidence [STRINGS]: full il2cpp_* export list, "GameAssembly.dll",
//! "il2cpp_resolve_icall", "GameAssembly.dll not loaded yet", "missing export: ...".
//! Resolves the game's IL2CPP API from GameAssembly.dll to read classes/fields at runtime.

use std::ffi::c_void;
macro_rules! il2 { ($($n:ident),*$(,)?) => { $(pub static mut $n: usize = 0;)* } }
il2!(
  il2cpp_domain_get, il2cpp_domain_get_assemblies, il2cpp_assembly_get_image,
  il2cpp_class_from_name, il2cpp_class_get_method_from_name, il2cpp_class_get_field_from_name,
  il2cpp_field_get_offset, il2cpp_field_static_get_value, il2cpp_object_get_class,
  il2cpp_class_get_name, il2cpp_thread_attach, il2cpp_thread_detach,
  il2cpp_runtime_invoke, il2cpp_string_new, il2cpp_array_new, il2cpp_array_length,
);

/// GetProcAddress each il2cpp_* export from GameAssembly.dll; retries until loaded. [RE][IMPORTS]
pub fn resolve_exports() -> Result<(), &'static str> { unimplemented!("[RE]") }

/// [STRINGS] reads the game's static field `currentCryptoKey` (a System.Boolean[]/byte[])
/// via il2cpp_field_static_get_value - i.e. lifts the game's live crypto key out of memory.
pub unsafe fn read_current_crypto_key(_klass: *mut c_void) -> Vec<u8> { unimplemented!() }
