//! src/core/il2cpp/resolve.rs
//! Back-ported from Ghidra FUN_1802223e0 (the il2cpp reflection-table initializer).
//! Resolves GameAssembly.dll exports into a global fnptr table, then walks class fields.
//! C source: ../../../ghidra/decompiled_targets.c (sub_1802223e0).
//!
//! The exact .data slot for each export was recovered from the decompile
//! (see ../../../ghidra/il2cpp_slot_map.txt). This is why the cheat's il2cpp calls do not
//! appear in the PE import table - they are GetProcAddress'd here at runtime.

#![allow(non_upper_case_globals)]
use std::os::raw::c_void;

/// Every il2cpp export the reflection layer resolves. Field = the recovered .data global.
#[derive(Default)]
pub struct Il2CppApi {
    pub class_get_fields:        usize, // DAT_180607aa8
    pub field_get_name:          usize, // DAT_180607a88
    pub field_get_type:          usize, // DAT_180607a90
    pub field_get_flags:         usize, // DAT_180607aa0
    pub field_static_get_value:  usize, // DAT_180607ad8  <-- reads currentCryptoKey
    pub type_get_type:           usize, // DAT_180607a78
    pub array_length:            usize, // DAT_180607a68
    pub object_get_class:        usize, // DAT_180607ac8
    pub class_get_name:          usize, // DAT_180607a80
    pub class_get_parent:        usize, // DAT_180607ab0
    pub class_from_type:         usize, // DAT_180607a98
    pub class_is_enum:           usize, // DAT_180607a70
    pub class_is_valuetype:      usize, // DAT_180607ad0
    pub class_value_size:        usize, // DAT_180607ab8
    pub class_get_element_class: usize, // DAT_180607ae0
    // additionally resolved but used locally (not stored to a named global):
    // field_get_offset, class_from_name, class_get_method_from_name, runtime_invoke,
    // domain_get, domain_get_assemblies, assembly_get_image, thread_attach/detach, string_new...
}

/// Names passed to GetProcAddress, straight from the decompile (FUN_1800fca60 = GetProcAddress
/// wrapper: (module, name, name_len)).
pub const EXPORTS: &[&str] = &[
    "il2cpp_class_get_fields","il2cpp_field_get_name","il2cpp_field_get_type",
    "il2cpp_field_get_flags","il2cpp_field_static_get_value","il2cpp_type_get_type",
    "il2cpp_array_length","il2cpp_array_new","il2cpp_object_get_class","il2cpp_class_get_name",
    "il2cpp_class_get_namespace","il2cpp_class_get_parent","il2cpp_class_get_methods",
    "il2cpp_method_get_param_count","il2cpp_method_get_param","il2cpp_method_get_name",
    "il2cpp_class_from_type","il2cpp_class_is_enum","il2cpp_class_is_valuetype",
    "il2cpp_class_value_size","il2cpp_class_get_element_class","il2cpp_image_get_class_count",
    "il2cpp_image_get_class","il2cpp_class_from_name","il2cpp_domain_get",
    "il2cpp_domain_get_assemblies","il2cpp_assembly_get_image","il2cpp_image_get_name",
    "il2cpp_thread_current","il2cpp_thread_attach","il2cpp_thread_detach",
    "il2cpp_class_get_method_from_name","il2cpp_method_get_flags","il2cpp_class_get_type",
    "il2cpp_type_get_object",
];

/// FUN_1802223e0 head: GetModuleHandle("GameAssembly.dll") then resolve every export.
/// Returns false (and the CFF error path) if the core three are missing:
/// class_get_fields / (il-prefixed) / object_get_class.
pub fn resolve(game_assembly: *mut c_void) -> Option<Il2CppApi> {
    if game_assembly.is_null() { return None; }
    let mut api = Il2CppApi::default();
    // each: FUN_1800fca60(module, name, len) = GetProcAddress
    api.class_get_fields        = get_proc(game_assembly, "il2cpp_class_get_fields");
    api.field_get_name          = get_proc(game_assembly, "il2cpp_field_get_name");
    api.field_get_type          = get_proc(game_assembly, "il2cpp_field_get_type");
    api.field_get_flags         = get_proc(game_assembly, "il2cpp_field_get_flags");
    api.field_static_get_value  = get_proc(game_assembly, "il2cpp_field_static_get_value");
    api.type_get_type           = get_proc(game_assembly, "il2cpp_type_get_type");
    api.array_length            = get_proc(game_assembly, "il2cpp_array_length");
    api.object_get_class        = get_proc(game_assembly, "il2cpp_object_get_class");
    api.class_get_name          = get_proc(game_assembly, "il2cpp_class_get_name");
    api.class_get_parent        = get_proc(game_assembly, "il2cpp_class_get_parent");
    api.class_from_type         = get_proc(game_assembly, "il2cpp_class_from_type");
    api.class_is_enum           = get_proc(game_assembly, "il2cpp_class_is_enum");
    api.class_is_valuetype      = get_proc(game_assembly, "il2cpp_class_is_valuetype");
    api.class_value_size        = get_proc(game_assembly, "il2cpp_class_value_size");
    api.class_get_element_class = get_proc(game_assembly, "il2cpp_class_get_element_class");

    // guard from decompile: if (class_get_fields==0 || il*==0 || object_get_class==0) -> abort
    if api.class_get_fields == 0 || api.object_get_class == 0 { return None; }
    Some(api)
}

fn get_proc(_module: *mut c_void, _name: &str) -> usize { 0 } // FUN_1800fca60 = GetProcAddress
