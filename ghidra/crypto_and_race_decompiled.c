

/* ===== 18015b030  FUN_18015b030 ===== */

uint FUN_18015b030(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  int local_88;
  short local_84;
  ulonglong local_80;
  undefined8 local_78;
  undefined8 *local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  char local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar12 = *param_1;
  uVar2 = 0x7335c131;
  uVar8 = 0x9b3861dd;
  uVar9 = 0;
  while( true ) {
    while( true ) {
      while( true ) {
        while ((int)uVar8 < 0x425611fd) {
          if (uVar8 == 0x9b3861dd) {
            uVar2 = uVar2 ^ 0x6a4af7aa;
            uVar9 = 0x2f05f306;
            goto LAB_18015b0f8;
          }
          if (uVar8 == 0xb43d92db) {
            uVar2 = uVar2 * 0x3696e11f;
            uVar9 = 0xc8f6cf39;
            uVar8 = 0x7ccb5de2;
          }
          else {
            if (uVar8 != 0xc21ee7d5) goto LAB_18015b0f8;
            uVar2 = uVar2 + 0x26eb7427;
            uVar9 = 0xbc77235a;
            uVar8 = 0x7e69c48f;
          }
        }
        if (uVar8 != 0x7ccb5de2) break;
        uVar2 = uVar2 * -0xcc40e3;
        uVar9 = 0xbed5ba37;
        uVar8 = 0xc21ee7d5;
      }
      if (uVar8 != 0x7e69c48f) break;
      uVar2 = 0x8074e3d2 - uVar2;
      uVar9 = 0x3c3fd572;
      uVar8 = 0x425611fd;
    }
    if (uVar8 == 0x425611fd) break;
LAB_18015b0f8:
    uVar8 = uVar8 ^ uVar9;
  }
  lVar10 = (longlong)&DAT_180517540 - (ulonglong)(uVar2 & 0xffff);
  local_78._4_4_ = (undefined4)((ulonglong)lVar10 >> 0x20);
  local_78 = CONCAT44(local_78._4_4_,0x7335c131);
  plVar3 = (longlong *)FUN_180098b50(lVar10,0x7335c131);
  local_a0 = *plVar3 + -0x46fd90262fe43b41;
  local_98 = plVar3[1] + -0x1bed0c4594207efb;
  local_90 = plVar3[2] + -0x2bfe5b630927c078;
  local_88 = (int)plVar3[3] + -0xd27318b;
  local_84 = *(short *)((longlong)plVar3 + 0x1c) + 0x643e;
  uVar2 = 7;
  if (((lVar12 != 0) && (lVar10 = FUN_1800fa0e0(&local_a0,0x1e), lVar10 != 0)) &&
     (DAT_1805ea490 == 0)) {
    FUN_1800f9810(&local_78,param_2,param_3);
    uVar4 = (*DAT_1805ea420)(lVar10,local_70);
    if (uVar4 == 0) {
      uVar13 = 0;
    }
    else {
      uVar8 = (*DAT_1805ea428)(uVar4);
      uVar13 = (ulonglong)uVar8;
    }
    if (local_78 != 0) {
      thunk_FUN_1802919a0(local_70,local_78,1);
    }
    if (uVar4 != 0) {
      uVar8 = 0x1d75f82f;
      uVar9 = 0x9b3861dd;
      uVar11 = 0;
      while( true ) {
        while( true ) {
          while( true ) {
            while ((int)uVar9 < 0x425611fd) {
              if (uVar9 == 0x9b3861dd) {
                uVar8 = uVar8 * -0x63b5c9fa;
                uVar11 = 0x2f05f306;
                goto LAB_18015b29f;
              }
              if (uVar9 == 0xb43d92db) {
                uVar8 = uVar8 ^ uVar8 >> 0x12;
                uVar11 = 0xc8f6cf39;
                uVar9 = 0x7ccb5de2;
              }
              else {
                if (uVar9 != 0xc21ee7d5) goto LAB_18015b29f;
                uVar8 = uVar8 ^ (uVar8 << 6 | uVar8 >> 0x1a);
                uVar11 = 0xbc77235a;
                uVar9 = 0x7e69c48f;
              }
            }
            if (uVar9 != 0x7ccb5de2) break;
            uVar8 = ~uVar8;
            uVar11 = 0xbed5ba37;
            uVar9 = 0xc21ee7d5;
          }
          if (uVar9 != 0x7e69c48f) break;
          uVar8 = uVar8 * 0x1d68ffdb;
          uVar11 = 0x3c3fd572;
          uVar9 = 0x425611fd;
        }
        if (uVar9 == 0x425611fd) break;
LAB_18015b29f:
        uVar9 = uVar9 ^ uVar11;
      }
      lVar10 = (longlong)&DAT_1805176e8 - (ulonglong)(uVar8 & 0xffff);
      local_78._4_4_ = (undefined4)((ulonglong)lVar10 >> 0x20);
      local_78 = CONCAT44(local_78._4_4_,0x1d75f82f);
      plVar3 = (longlong *)FUN_1800a17d0(lVar10,0x1d75f82f);
      local_78 = *plVar3 + 0x7b14ac05b9017314;
      local_70 = (undefined8 *)(plVar3[1] + -0x686a9377c3e4ed51);
      local_68 = plVar3[2] + 0x60f029e37a8a40ca;
      local_60 = plVar3[3] + 0x59cb63fedc431ba5;
      local_58 = plVar3[4] + -0x1d8427f07cdc625c;
      local_50 = (int)plVar3[5] + -0x49cb1d0e;
      local_4c = *(char *)((longlong)plVar3 + 0x2c) + '\'';
      uVar5 = FUN_1800fa0e0(&local_78,0x2d);
      if ((uVar5 != 0) && (DAT_1805ea490 == 0)) {
        FUN_1800658a0();
        puVar6 = (undefined8 *)thunk_FUN_180291940(0xb,1);
        if (puVar6 == (undefined8 *)0x0) {
          FUN_18045031b(1,0xb);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        *puVar6 = 0x61566e6564646968;
        *(undefined4 *)((longlong)puVar6 + 7) = 0x65756c61;
        local_78 = 0xb;
        local_68 = 0xb;
        local_80 = uVar13;
        local_70 = puVar6;
        FUN_1804449c0(&local_78);
        puVar6 = local_70;
        lVar10 = local_78;
        *(undefined1 *)((longlong)local_70 + 0xb) = 0;
        lVar7 = (*DAT_1805ea420)(uVar5,local_70);
        if (lVar7 != 0) {
          uVar4 = (*DAT_1805ea428)(lVar7);
        }
        if (lVar10 != 0) {
          thunk_FUN_1802919a0(puVar6,lVar10,1);
        }
        if ((0xf < (uint)uVar4 && lVar7 != 0) && (DAT_1805ea490 == 0)) {
          FUN_1800f9810(&local_78,"currentCryptoKey",0x10);
          puVar6 = local_70;
          lVar10 = (*DAT_1805ea420)(uVar5,local_70);
          if (lVar10 != 0) {
            uVar5 = (*DAT_1805ea428)(lVar10);
          }
          if (local_78 != 0) {
            thunk_FUN_1802919a0(puVar6,local_78,1);
          }
          if (0xf < (uint)uVar5 && lVar10 != 0) {
            lVar12 = local_80 + lVar12;
            uVar2 = *(uint *)(((uVar5 & 0xffffffff) - 0x10) + lVar12) ^
                    *(uint *)(((uVar4 & 0xffffffff) - 0x10) + lVar12);
          }
        }
      }
    }
  }
  return uVar2;
}




/* ===== 1802223e0  FUN_1802223e0 ===== */

undefined8 * FUN_1802223e0(undefined8 *param_1)

{
  short sVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  HMODULE pHVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  int iStack_48;
  short sStack_44;
  char cStack_42;
  undefined1 uStack_41;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  pHVar6 = GetModuleHandleA("G");
  if (pHVar6 != (HMODULE)0x0) {
    DAT_180607aa8 = FUN_1800fca60(pHVar6,"il2cpp_class_get_fields",0x17);
    DAT_180607a88 = FUN_1800fca60(pHVar6,"il2cpp_field_get_name",0x15);
    DAT_180607a90 = FUN_1800fca60(pHVar6,"il2cpp_field_get_type",0x15);
    DAT_180607ac0 = FUN_1800fca60(pHVar6,"il",0x17);
    DAT_180607aa0 = FUN_1800fca60(pHVar6,"il2cpp_field_get_flags",0x16);
    DAT_180607ad8 = FUN_1800fca60(pHVar6,"il2cpp_field_static_get_value",0x1d);
    DAT_180607a78 = FUN_1800fca60(pHVar6,"il2cpp_type_get_type",0x14);
    DAT_180607a68 = FUN_1800fca60(pHVar6,"il2cpp_array_length",0x13);
    FUN_1800fca60(pHVar6,"il2cpp_array_new",0x10);
    DAT_180607ac8 = FUN_1800fca60(pHVar6,"il2cpp_object_get_class",0x17);
    DAT_180607a80 = FUN_1800fca60(pHVar6,"il2cpp_class_get_name",0x15);
    FUN_1800fca60(pHVar6,"il2cpp_class_get_namespace",0x1a);
    DAT_180607ab0 = FUN_1800fca60(pHVar6,"il2cpp_class_get_parent",0x17);
    FUN_1800fca60(pHVar6,"il2cpp_class_get_methods",0x18);
    FUN_1800fca60(pHVar6,"il2cpp_method_get_param_count",0x1d);
    FUN_1800fca60(pHVar6,"il2cpp_method_get_param",0x17);
    FUN_1800fca60(pHVar6,"il2cpp_method_get_name",0x16);
    DAT_180607a98 = FUN_1800fca60(pHVar6,"il2cpp_class_from_type",0x16);
    DAT_180607a70 = FUN_1800fca60(pHVar6,"il2cpp_class_is_enum",0x14);
    DAT_180607ad0 = FUN_1800fca60(pHVar6,"il2cpp_class_is_valuetype",0x19);
    DAT_180607ab8 = FUN_1800fca60(pHVar6,"il2cpp_class_value_si",0x17);
    DAT_180607ae0 = FUN_1800fca60(pHVar6,"il2cpp_class_get_element_class",0x1e);
    FUN_1800fca60(pHVar6,"il2cpp_image_get_class_count",0x1c);
    FUN_1800fca60(pHVar6,"il2cpp_image_get_class",0x16);
    FUN_1800fca60(pHVar6,"il2cpp_class_from_name",0x16);
    FUN_1800fca60(pHVar6,"il2cpp_domain_get",0x11);
    FUN_1800fca60(pHVar6,"il2cpp_domain_get_assemblies",0x1c);
    FUN_1800fca60(pHVar6,"il2cpp_assembly_get_image",0x19);
    FUN_1800fca60(pHVar6,"il2cpp_image_get_name",0x15);
    FUN_1800fca60(pHVar6,"il2cpp_thread_current",0x15);
    FUN_1800fca60(pHVar6,"il2cpp_thread_attach",0x14);
    FUN_1800fca60(pHVar6,"il2cpp_thread_detach",0x14);
    FUN_1800fca60(pHVar6,"il2cpp_class_get_method_from_name",0x21);
    FUN_1800fca60(pHVar6,"il2cpp_method_get_flags",0x17);
    FUN_1800fca60(pHVar6,"il2cpp_class_get_type",0x15);
    FUN_1800fca60(pHVar6,"il2cpp_type_get_object",0x16);
  }
  if (((DAT_180607aa8 == 0) || (DAT_180607ac0 == 0)) || (DAT_180607ac8 == 0)) {
    uVar5 = 0xab476f77;
    uVar12 = 0x9b3861dd;
    uVar11 = 0;
    while( true ) {
      while( true ) {
        while( true ) {
          while ((int)uVar12 < 0x425611fd) {
            if (uVar12 == 0x9b3861dd) {
              uVar5 = uVar5 ^ uVar5 >> 1;
              uVar11 = 0x2f05f306;
              goto LAB_1802228eb;
            }
            if (uVar12 == 0xb43d92db) {
              uVar5 = 0xcad2c - uVar5;
              uVar11 = 0xc8f6cf39;
              uVar12 = 0x7ccb5de2;
            }
            else {
              if (uVar12 != 0xc21ee7d5) goto LAB_1802228eb;
              uVar5 = uVar5 * 0x5c6dc040;
              uVar11 = 0xbc77235a;
              uVar12 = 0x7e69c48f;
            }
          }
          if (uVar12 != 0x7ccb5de2) break;
          uVar5 = ~uVar5;
          uVar11 = 0xbed5ba37;
          uVar12 = 0xc21ee7d5;
        }
        if (uVar12 != 0x7e69c48f) break;
        uVar5 = ~uVar5;
        uVar11 = 0x3c3fd572;
        uVar12 = 0x425611fd;
      }
      if (uVar12 == 0x425611fd) break;
LAB_1802228eb:
      uVar12 = uVar12 ^ uVar11;
    }
    lVar8 = (longlong)&DAT_18051e5f8 - (ulonglong)(uVar5 & 0xffff);
    uStack_58._4_4_ = (undefined4)((ulonglong)lVar8 >> 0x20);
    uStack_58 = (undefined4 *)CONCAT44(uStack_58._4_4_,0xab476f77);
    plVar7 = (longlong *)FUN_1800a0200(lVar8,0xab476f77);
    lVar8 = *plVar7;
    lVar9 = plVar7[1];
    lVar10 = plVar7[2];
    sVar1 = *(short *)((longlong)plVar7 + 0x14);
    cVar4 = *(char *)((longlong)plVar7 + 0x16);
    FUN_1800658a0();
    plVar7 = (longlong *)thunk_FUN_180291940(0x17,1);
    if (plVar7 == (longlong *)0x0) {
      FUN_18045031b(1,0x17);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    *plVar7 = lVar8 + -0xe901652e4bf9c6c;
    plVar7[1] = lVar9 + -0x1364c62e78ec4080;
    *(int *)(plVar7 + 2) = (int)lVar10 + -0x7523df;
    *(short *)((longlong)plVar7 + 0x14) = sVar1 + 0x6ae6;
    *(char *)((longlong)plVar7 + 0x16) = cVar4 + -0x25;
    param_1[1] = 0x17;
    param_1[2] = plVar7;
    param_1[3] = 0x17;
  }
  else {
    uVar12 = 0x6f07e394;
    uVar5 = 0x9b3861dd;
    uVar11 = 0;
    while( true ) {
      while( true ) {
        while( true ) {
          while ((int)uVar5 < 0x425611fd) {
            if (uVar5 == 0x9b3861dd) {
              uVar12 = uVar12 * 0x785a1822;
              uVar11 = 0x2f05f306;
              goto LAB_180222850;
            }
            if (uVar5 == 0xb43d92db) {
              uVar12 = 0xc40e2e29 - uVar12;
              uVar11 = 0xc8f6cf39;
              uVar5 = 0x7ccb5de2;
            }
            else {
              if (uVar5 != 0xc21ee7d5) goto LAB_180222850;
              uVar12 = 0x5b6dd810 - uVar12;
              uVar11 = 0xbc77235a;
              uVar5 = 0x7e69c48f;
            }
          }
          if (uVar5 != 0x7ccb5de2) break;
          uVar12 = -uVar12;
          uVar11 = 0xbed5ba37;
          uVar5 = 0xc21ee7d5;
        }
        if (uVar5 != 0x7e69c48f) break;
        uVar12 = uVar12 + 0x724fbdd3;
        uVar11 = 0x3c3fd572;
        uVar5 = 0x425611fd;
      }
      if (uVar5 == 0x425611fd) break;
LAB_180222850:
      uVar5 = uVar5 ^ uVar11;
    }
    lVar8 = (longlong)&DAT_18051e620 - (ulonglong)(uVar12 & 0xffff);
    uStack_58._4_4_ = (undefined4)((ulonglong)lVar8 >> 0x20);
    uStack_58 = (undefined4 *)CONCAT44(uStack_58._4_4_,0x6f07e394);
    plVar7 = (longlong *)FUN_1800a0750(lVar8,0x6f07e394);
    uStack_58 = (undefined4 *)(*plVar7 + -0x640719dbbe67024d);
    uStack_50._0_6_ =
         CONCAT24(*(short *)((longlong)plVar7 + 0xc) + -0x6557,(int)plVar7[1] + 0x60b892fa);
    uStack_50._0_7_ = CONCAT16(*(char *)((longlong)plVar7 + 0xe) + '\x1a',(undefined6)uStack_50);
    lVar8 = FUN_1800fa0e0(&uStack_58);
    if (lVar8 != 0) {
      lStack_70 = 0;
      lStack_68 = 8;
      lStack_60 = 0;
      uVar5 = 0x5550460c;
      uVar12 = 0x9b3861dd;
      uVar11 = 0;
      while( true ) {
        while( true ) {
          while( true ) {
            while ((int)uVar12 < 0x425611fd) {
              if (uVar12 == 0x9b3861dd) {
                uVar5 = uVar5 * -0x1b14de64;
                uVar11 = 0x2f05f306;
                goto LAB_180222ac1;
              }
              if (uVar12 == 0xb43d92db) {
                uVar5 = uVar5 ^ uVar5 >> 0xd;
                uVar11 = 0xc8f6cf39;
                uVar12 = 0x7ccb5de2;
              }
              else {
                if (uVar12 != 0xc21ee7d5) goto LAB_180222ac1;
                uVar5 = uVar5 ^ 0x9720a6f2;
                uVar11 = 0xbc77235a;
                uVar12 = 0x7e69c48f;
              }
            }
            if (uVar12 != 0x7ccb5de2) break;
            uVar5 = uVar5 + 0xc21a11fe;
            uVar11 = 0xbed5ba37;
            uVar12 = 0xc21ee7d5;
          }
          if (uVar12 != 0x7e69c48f) break;
          uVar5 = uVar5 + 0xc3557fee;
          uVar11 = 0x3c3fd572;
          uVar12 = 0x425611fd;
        }
        if (uVar12 == 0x425611fd) break;
LAB_180222ac1:
        uVar12 = uVar12 ^ uVar11;
      }
      lVar9 = (longlong)&DAT_18051e668 - (ulonglong)(uVar5 & 0xffff);
      uStack_58._4_4_ = (undefined4)((ulonglong)lVar9 >> 0x20);
      uStack_58 = (undefined4 *)CONCAT44(uStack_58._4_4_,0x5550460c);
      plVar7 = (longlong *)FUN_18009f230(lVar9,0x5550460c);
      uStack_58 = (undefined4 *)(*plVar7 + 0x30f75360f1c2e910);
      uStack_50._0_6_ =
           CONCAT24(*(short *)((longlong)plVar7 + 0xc) + 0x49ab,(int)plVar7[1] + -0x76030473);
      uStack_50._0_7_ = CONCAT16(*(char *)((longlong)plVar7 + 0xe) + '\'',(undefined6)uStack_50);
      cVar4 = FUN_180121e60(lVar8,&uStack_58,0xf,0,&DAT_18051e678,0x18,&LAB_180121bf0,&DAT_180607c58
                           );
      lVar9 = lStack_60;
      if (cVar4 != '\0') {
        if (lStack_60 == lStack_70) {
          FUN_1804443a0(&lStack_70);
        }
        lVar10 = lVar9 * 0x10;
        *(undefined **)(lStack_68 + lVar10) = &DAT_18051e690;
        *(undefined8 *)(lStack_68 + 8 + lVar10) = 7;
        lStack_60 = lVar9 + 1;
      }
      uVar5 = 0x5d886cb0;
      uVar12 = 0x9b3861dd;
      uVar11 = 0;
      while( true ) {
        while( true ) {
          while( true ) {
            while ((int)uVar12 < 0x425611fd) {
              if (uVar12 == 0x9b3861dd) {
                uVar5 = 0xf838f28 - uVar5;
                uVar11 = 0x2f05f306;
                goto LAB_180222c35;
              }
              if (uVar12 == 0xb43d92db) {
                uVar5 = uVar5 ^ uVar5 >> 0xb;
                uVar11 = 0xc8f6cf39;
                uVar12 = 0x7ccb5de2;
              }
              else {
                if (uVar12 != 0xc21ee7d5) goto LAB_180222c35;
                uVar5 = uVar5 * -0x1d96231b;
                uVar11 = 0xbc77235a;
                uVar12 = 0x7e69c48f;
              }
            }
            if (uVar12 != 0x7ccb5de2) break;
            uVar5 = -uVar5;
            uVar11 = 0xbed5ba37;
            uVar12 = 0xc21ee7d5;
          }
          if (uVar12 != 0x7e69c48f) break;
          uVar5 = uVar5 * -0x2071ae6c;
          uVar11 = 0x3c3fd572;
          uVar12 = 0x425611fd;
        }
        if (uVar12 == 0x425611fd) break;
LAB_180222c35:
        uVar12 = uVar12 ^ uVar11;
      }
      lVar9 = (longlong)&DAT_18051e630 - (ulonglong)(uVar5 & 0xffff);
      uStack_58._4_4_ = (undefined4)((ulonglong)lVar9 >> 0x20);
      uStack_58 = (undefined4 *)CONCAT44(uStack_58._4_4_,0x5d886cb0);
      plVar7 = (longlong *)FUN_1800a0af0(lVar9,0x5d886cb0);
      uStack_58 = (undefined4 *)(*plVar7 + -0x3e3e666c0faa1e3b);
      uStack_50 = (undefined1 *)(plVar7[1] + 0x39e0f411ac839daa);
      iStack_48 = (int)plVar7[2] + -0x34c5cc60;
      sStack_44 = *(short *)((longlong)plVar7 + 0x14) + -0x2a19;
      cStack_42 = *(char *)((longlong)plVar7 + 0x16) + -0x80;
      cVar4 = FUN_180121e60(lVar8,&uStack_58,0x17,1,&DAT_18051e697,0x20,&LAB_180121e00,
                            &DAT_180607c38);
      lVar9 = lStack_60;
      if (cVar4 != '\0') {
        if (lStack_60 == lStack_70) {
          FUN_1804443a0(&lStack_70);
        }
        lVar10 = lVar9 * 0x10;
        *(undefined **)(lStack_68 + lVar10) = &DAT_18051e6b7;
        *(undefined8 *)(lStack_68 + 8 + lVar10) = 2;
        lStack_60 = lVar9 + 1;
      }
      uVar5 = 0x4cdf2fe4;
      uVar12 = 0x9b3861dd;
      uVar11 = 0;
      while( true ) {
        while( true ) {
          while( true ) {
            while ((int)uVar12 < 0x425611fd) {
              if (uVar12 == 0x9b3861dd) {
                uVar5 = uVar5 ^ (uVar5 << 1 | (uint)((int)uVar5 < 0));
                uVar11 = 0x2f05f306;
                goto LAB_180222dbb;
              }
              if (uVar12 == 0xb43d92db) {
                uVar5 = ~uVar5;
                uVar11 = 0xc8f6cf39;
                uVar12 = 0x7ccb5de2;
              }
              else {
                if (uVar12 != 0xc21ee7d5) goto LAB_180222dbb;
                uVar5 = uVar5 ^ 0xcb36a7a9;
                uVar11 = 0xbc77235a;
                uVar12 = 0x7e69c48f;
              }
            }
            if (uVar12 != 0x7ccb5de2) break;
            uVar5 = -uVar5;
            uVar11 = 0xbed5ba37;
            uVar12 = 0xc21ee7d5;
          }
          if (uVar12 != 0x7e69c48f) break;
          uVar5 = -uVar5;
          uVar11 = 0x3c3fd572;
          uVar12 = 0x425611fd;
        }
        if (uVar12 == 0x425611fd) break;
LAB_180222dbb:
        uVar12 = uVar12 ^ uVar11;
      }
      lVar9 = (longlong)&DAT_18051e5e0 - (ulonglong)(uVar5 & 0xffff);
      uStack_58._4_4_ = (undefined4)((ulonglong)lVar9 >> 0x20);
      uStack_58 = (undefined4 *)CONCAT44(uStack_58._4_4_,0x4cdf2fe4);
      plVar7 = (longlong *)FUN_1800a4c60(lVar9,0x4cdf2fe4);
      uStack_58 = (undefined4 *)(*plVar7 + -0x5d8dc7681a2c5db);
      uStack_50 = (undefined1 *)(plVar7[1] + -0x290d50382b68671e);
      iStack_48 = CONCAT31(iStack_48._1_3_,(char)plVar7[2] + '\x02');
      cVar4 = FUN_180121e60(lVar8,&uStack_58,0x11,1,&DAT_18051e6b9,0x1a,&LAB_180121c60,
                            &DAT_180607c60);
      lVar8 = lStack_60;
      if (cVar4 != '\0') {
        if (lStack_60 == lStack_70) {
          FUN_1804443a0(&lStack_70);
        }
        lVar9 = lVar8 * 0x10;
        *(undefined **)(lStack_68 + lVar9) = &DAT_18051e6d3;
        *(undefined8 *)(lStack_68 + 8 + lVar9) = 3;
        lStack_60 = lVar8 + 1;
      }
      if (lStack_60 == 0) {
        uVar12 = 0x79a76733;
        uVar5 = 0x9b3861dd;
        uVar11 = 0;
        while( true ) {
          while( true ) {
            while( true ) {
              while ((int)uVar5 < 0x425611fd) {
                if (uVar5 == 0x9b3861dd) {
                  uVar12 = uVar12 ^ (uVar12 << 3 | uVar12 >> 0x1d);
                  uVar11 = 0x2f05f306;
                  goto LAB_180223137;
                }
                if (uVar5 == 0xb43d92db) {
                  uVar12 = uVar12 * 0x33d84dd0;
                  uVar11 = 0xc8f6cf39;
                  uVar5 = 0x7ccb5de2;
                }
                else {
                  if (uVar5 != 0xc21ee7d5) goto LAB_180223137;
                  uVar12 = 0x177d3e75 - uVar12;
                  uVar11 = 0xbc77235a;
                  uVar5 = 0x7e69c48f;
                }
              }
              if (uVar5 != 0x7ccb5de2) break;
              uVar12 = 0xa2a4ae14 - uVar12;
              uVar11 = 0xbed5ba37;
              uVar5 = 0xc21ee7d5;
            }
            if (uVar5 != 0x7e69c48f) break;
            uVar12 = uVar12 * 0x6e4229c2;
            uVar11 = 0x3c3fd572;
            uVar5 = 0x425611fd;
          }
          if (uVar5 == 0x425611fd) break;
LAB_180223137:
          uVar5 = uVar5 ^ uVar11;
        }
        lVar8 = (longlong)&DAT_18051e648 - (ulonglong)(uVar12 & 0xffff);
        uStack_58._4_4_ = (undefined4)((ulonglong)lVar8 >> 0x20);
        uStack_58 = (undefined4 *)CONCAT44(uStack_58._4_4_,0x79a76733);
        plVar7 = (longlong *)FUN_1800a3ae0(lVar8,0x79a76733);
        lVar8 = *plVar7;
        lVar9 = plVar7[1];
        lVar10 = plVar7[2];
        lVar3 = plVar7[3];
        cVar4 = *(char *)((longlong)plVar7 + 0x1a);
        FUN_1800658a0();
        plVar7 = (longlong *)thunk_FUN_180291940(0x1b,1);
        if (plVar7 == (longlong *)0x0) {
          FUN_18045031b(1,0x1b);
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        *plVar7 = lVar8 + 0x7548924636f54d2e;
        plVar7[1] = lVar9 + -0x764082ef78f3a6fa;
        plVar7[2] = lVar10 + -0x4a1a53065a4b7222;
        *(short *)(plVar7 + 3) = (short)lVar3 + 0x1444;
        *(char *)((longlong)plVar7 + 0x1a) = cVar4 + '+';
        param_1[1] = 0x1b;
        param_1[2] = plVar7;
        param_1[3] = 0x1b;
        *param_1 = 2;
      }
      else {
        DAT_180607c40 = FUN_18011ed60("race_export.enabled",0x13,0);
        FUN_180085dd0(&uStack_58,lStack_68,lStack_60,&DAT_180518436,1);
        uStack_78 = CONCAT17(uStack_41,CONCAT16(cStack_42,CONCAT24(sStack_44,iStack_48)));
        uStack_88 = (undefined4)uStack_58;
        uStack_84 = uStack_58._4_4_;
        uStack_80 = (undefined4)uStack_50;
        uStack_7c = uStack_50._4_4_;
        uStack_58 = &uStack_88;
        uStack_50 = &DAT_180003600;
        FUN_1802aab50(&uStack_a0,&DAT_18051e6d6,&uStack_58);
        if (CONCAT44(uStack_84,uStack_88) != 0) {
          thunk_FUN_1802919a0(CONCAT44(uStack_7c,uStack_80),CONCAT44(uStack_84,uStack_88),1);
        }
        param_1[3] = uStack_90;
        *(undefined4 *)(param_1 + 1) = uStack_a0;
        *(undefined4 *)((longlong)param_1 + 0xc) = uStack_9c;
        *(undefined4 *)(param_1 + 2) = uStack_98;
        *(undefined4 *)((longlong)param_1 + 0x14) = uStack_94;
        *param_1 = 1;
      }
      if (lStack_70 == 0) {
        return param_1;
      }
      thunk_FUN_1802919a0(lStack_68,lStack_70 << 4,8);
      return param_1;
    }
    uVar12 = 0x40447b20;
    uVar5 = 0x9b3861dd;
    uVar11 = 0;
    while( true ) {
      while( true ) {
        while( true ) {
          while ((int)uVar5 < 0x425611fd) {
            if (uVar5 == 0x9b3861dd) {
              uVar12 = ~uVar12;
              uVar11 = 0x2f05f306;
              goto LAB_180222ff8;
            }
            if (uVar5 == 0xb43d92db) {
              uVar12 = uVar12 ^ uVar12 >> 1;
              uVar11 = 0xc8f6cf39;
              uVar5 = 0x7ccb5de2;
            }
            else {
              if (uVar5 != 0xc21ee7d5) goto LAB_180222ff8;
              uVar12 = -uVar12;
              uVar11 = 0xbc77235a;
              uVar5 = 0x7e69c48f;
            }
          }
          if (uVar5 != 0x7ccb5de2) break;
          uVar12 = 0xf08ae238 - uVar12;
          uVar11 = 0xbed5ba37;
          uVar5 = 0xc21ee7d5;
        }
        if (uVar5 != 0x7e69c48f) break;
        uVar12 = 0x5e108dbe - uVar12;
        uVar11 = 0x3c3fd572;
        uVar5 = 0x425611fd;
      }
      if (uVar5 == 0x425611fd) break;
LAB_180222ff8:
      uVar5 = uVar5 ^ uVar11;
    }
    lVar8 = (longlong)&DAT_18051e610 - (ulonglong)(uVar12 & 0xffff);
    uStack_58._4_4_ = (undefined4)((ulonglong)lVar8 >> 0x20);
    uStack_58 = (undefined4 *)CONCAT44(uStack_58._4_4_,0x40447b20);
    plVar7 = (longlong *)FUN_18009e120(lVar8,0x40447b20);
    lVar8 = *plVar7;
    lVar9 = plVar7[1];
    cVar4 = *(char *)((longlong)plVar7 + 0xc);
    FUN_1800658a0();
    plVar7 = (longlong *)thunk_FUN_180291940(0xd,1);
    if (plVar7 == (longlong *)0x0) {
      FUN_18045031b(1,0xd);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    *plVar7 = lVar8 + -0xe6c5a41b17a49a7;
    *(int *)(plVar7 + 1) = (int)lVar9 + 0x21a0c2ac;
    *(char *)((longlong)plVar7 + 0xc) = cVar4 + -0x6a;
    param_1[1] = 0xd;
    param_1[2] = plVar7;
    param_1[3] = 0xd;
  }
  *param_1 = 2;
  return param_1;
}




/* ===== 180033810  FUN_180033810 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180033810(longlong *param_1)

{
  size_t sVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 local_140 [32];
  longlong local_120;
  undefined8 local_118;
  undefined4 local_108;
  undefined4 local_104;
  double local_f0;
  undefined1 local_e8 [16];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b0;
  longlong local_a8;
  void *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 *local_78;
  undefined1 *local_70;
  size_t local_60;
  uint *local_58;
  undefined8 *local_50;
  size_t local_48;
  uint *local_40;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_d8 = (undefined4)param_1[4];
  uStack_d4 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_d0 = (undefined4)param_1[5];
  uStack_cc = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_c8 = (undefined4)param_1[6];
  uStack_c4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_c0 = (undefined4)param_1[7];
  uStack_bc = *(undefined4 *)((longlong)param_1 + 0x3c);
  local_b0 = *param_1;
  local_a8 = param_1[1];
  lVar14 = param_1[2];
  local_33 = 1;
  pcVar8 = (char *)FUN_18027a790(&DAT_1804e2dd8,0x1e,&local_d8);
  if (((pcVar8 == (char *)0x0) || (*pcVar8 != '\x03')) || (*(longlong *)(pcVar8 + 0x18) == 0)) {
    if (local_b0 != 0) {
      thunk_FUN_1802919a0(local_a8,local_b0,1);
    }
    FUN_18005ce00(&local_d8);
    return;
  }
  local_33 = 1;
  FUN_180121cc0(&local_d8);
  local_33 = 1;
  pcVar8 = (char *)FUN_18027a790(&DAT_1804e2df6,0x19,&local_d8);
  if ((pcVar8 == (char *)0x0) || (*pcVar8 != '\x03')) {
LAB_180033999:
    FUN_1800658a0();
    uVar15 = 5;
    puVar16 = (undefined8 *)thunk_FUN_180291940(5,1);
    if (puVar16 == (undefined8 *)0x0) {
      local_58 = (uint *)0x1;
      local_60 = 0;
      local_32 = 1;
      FUN_18045031b(1,5);
      goto LAB_180034235;
    }
    local_40 = (uint *)0x1;
    *(undefined1 *)((longlong)puVar16 + 4) = 0x72;
    *(undefined4 *)puVar16 = 0x6568744f;
    local_98 = (longlong *)0x5;
    local_88 = (double *)0x5;
    local_48 = 0;
    uStack_90 = puVar16;
    goto LAB_1800339f5;
  }
  sVar1 = *(size_t *)(pcVar8 + 0x18);
  if ((longlong)sVar1 < 0) {
    uVar11 = 0;
LAB_1800338d0:
    local_33 = 1;
    FUN_18045031b(uVar11);
    goto LAB_180034235;
  }
  local_48 = sVar1;
  if (sVar1 == 0) goto LAB_180033999;
  _Src = *(void **)(pcVar8 + 0x10);
  FUN_1800658a0();
  sVar1 = local_48;
  local_40 = (uint *)thunk_FUN_180291940(local_48,1);
  uVar11 = 1;
  if (local_40 == (uint *)0x0) goto LAB_1800338d0;
  memcpy(local_40,_Src,sVar1);
  switch(sVar1) {
  case 5:
    uVar7 = *local_40 ^ 0x6c696144;
    uVar10 = (byte)local_40[1] ^ 0x79;
    goto LAB_180033da0;
  case 6:
    if ((short)local_40[1] != 0x656c || *local_40 != 0x676e6953) goto switchD_18003397d_caseD_a;
    FUN_1800658a0();
    uVar15 = 6;
    puVar16 = (undefined8 *)thunk_FUN_180291940(6,1);
    if (puVar16 == (undefined8 *)0x0) {
      local_58 = local_40;
      local_60 = 6;
      local_32 = 1;
      FUN_18045031b(1,6);
      goto LAB_180034235;
    }
    *(undefined2 *)((longlong)puVar16 + 4) = 0x7265;
    *(undefined4 *)puVar16 = 0x65726143;
    local_98 = (longlong *)0x6;
    local_88 = (double *)0x6;
    local_48 = 6;
    uStack_90 = puVar16;
    break;
  case 7:
    uVar7 = *local_40 ^ 0x64617453;
    uVar10 = *(uint *)((longlong)local_40 + 3) ^ 0x6d756964;
LAB_180033da0:
    if (uVar10 == 0 && uVar7 == 0) {
LAB_180033f17:
      FUN_1800658a0();
      uVar15 = 0xb;
      puVar16 = (undefined8 *)thunk_FUN_180291940(0xb,1);
      if (puVar16 == (undefined8 *)0x0) {
        local_58 = local_40;
        local_60 = local_48;
        local_32 = 1;
        FUN_18045031b(1,0xb);
LAB_180034235:
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      *puVar16 = 0x697274206d616554;
      *(undefined4 *)((longlong)puVar16 + 7) = 0x736c6169;
      local_98 = (longlong *)0xb;
      local_88 = (double *)0xb;
      uStack_90 = puVar16;
    }
    else {
switchD_18003397d_caseD_a:
      local_58 = local_40;
      local_60 = local_48;
      local_32 = 1;
      FUN_180121f40(&local_98);
      uVar15 = (ulonglong)local_88;
    }
    break;
  case 8:
    if (*(longlong *)local_40 != 0x6563697463617250) goto switchD_18003397d_caseD_a;
    FUN_1800658a0();
    uVar15 = 0xd;
    puVar16 = (undefined8 *)thunk_FUN_180291940(0xd,1);
    if (puVar16 == (undefined8 *)0x0) {
      local_58 = local_40;
      local_60 = 8;
      local_32 = 1;
      FUN_18045031b(1,0xd);
      goto LAB_180034235;
    }
    *(undefined8 *)((longlong)puVar16 + 5) = 0x6d6f6f7220656369;
    *puVar16 = 0x6563697463617250;
    local_98 = (longlong *)0xd;
    local_88 = (double *)0xd;
    local_48 = 8;
    uStack_90 = puVar16;
    break;
  case 9:
    if ((char)local_40[2] == 'h' && *(longlong *)local_40 == 0x6374614d6d6f6f52) {
      FUN_1800658a0();
      uVar15 = 10;
      puVar16 = (undefined8 *)thunk_FUN_180291940(10,1);
      if (puVar16 == (undefined8 *)0x0) {
        local_58 = local_40;
        local_60 = 9;
        local_32 = 1;
        FUN_18045031b(1,10);
        goto LAB_180034235;
      }
      *puVar16 = 0x74616d206d6f6f52;
      *(undefined2 *)(puVar16 + 1) = 0x6863;
      local_98 = (longlong *)0xa;
      local_88 = (double *)0xa;
    }
    else {
      if ((char)local_40[2] != 's' || *(longlong *)local_40 != 0x6e6f69706d616843)
      goto switchD_18003397d_caseD_a;
      FUN_1800658a0();
      uVar15 = 0x11;
      puVar16 = (undefined8 *)thunk_FUN_180291940(0x11,1);
      uVar6 = _UNK_1804e2d19;
      uVar5 = _UNK_1804e2d15;
      uVar12 = _UNK_1804e2d11;
      if (puVar16 == (undefined8 *)0x0) {
        local_58 = local_40;
        local_60 = 9;
        local_32 = 1;
        FUN_18045031b(1,0x11);
        goto LAB_180034235;
      }
      *(undefined4 *)puVar16 = _DAT_1804e2d0d;
      *(undefined4 *)((longlong)puVar16 + 4) = uVar12;
      *(undefined4 *)(puVar16 + 1) = uVar5;
      *(undefined4 *)((longlong)puVar16 + 0xc) = uVar6;
      *(undefined1 *)(puVar16 + 2) = 0x67;
      local_98 = (longlong *)0x11;
      local_88 = (double *)0x11;
    }
    local_48 = 9;
    uStack_90 = puVar16;
    break;
  default:
    goto switchD_18003397d_caseD_a;
  case 0xb:
    if (*(longlong *)((longlong)local_40 + 3) != 0x6d7569646174536d ||
        *(longlong *)local_40 != 0x646174536d616554) goto switchD_18003397d_caseD_a;
    goto LAB_180033f17;
  }
LAB_1800339f5:
  local_50 = uStack_90;
  FUN_180292cc0(local_140,local_a8,lVar14,uStack_90,uVar15);
  lVar14 = (longlong)local_98;
  if (local_98 != (longlong *)0x0) {
    thunk_FUN_1802919a0(local_50,local_98,1);
  }
  uVar12 = (undefined4)lVar14;
  local_31 = 1;
  local_108 = FUN_180293430();
  local_31 = 1;
  local_104 = uVar12;
  FUN_1802933e0(&local_98,&local_108,0xd53e8000,0x19db1de);
  local_e8 = ZEXT816(0);
  if ((char)local_98 == '\0') {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uStack_90;
    local_e8._8_8_ = 0;
    local_e8._0_8_ = ((ulonglong)local_88 & 0xffffffff) / 1000000;
    local_e8 = ZEXT816(1000) * auVar3 + local_e8;
  }
  local_31 = 1;
  pcVar8 = (char *)FUN_18027a790("<RaceHorse>k__BackingField",0x1a,&local_d8);
  if (((pcVar8 != (char *)0x0) && (*pcVar8 == '\x04')) && (*(longlong *)(pcVar8 + 0x18) != 0)) {
    lVar14 = *(longlong *)(pcVar8 + 0x10);
    lVar13 = *(longlong *)(pcVar8 + 0x18) * 0x20 + lVar14;
    do {
      local_31 = 1;
      pcVar8 = (char *)FUN_18027a790("FinishOrder",0xb,lVar14);
      if ((pcVar8 != (char *)0x0) && (*pcVar8 == '\x02')) {
        if (*(longlong *)(pcVar8 + 8) == 0) {
          lVar2 = *(longlong *)(pcVar8 + 0x10);
          if (-1 < lVar2) goto joined_r0x000180033ae8;
        }
        else if ((int)*(longlong *)(pcVar8 + 8) == 1) {
          lVar2 = *(longlong *)(pcVar8 + 0x10);
joined_r0x000180033ae8:
          if (lVar2 == 0) goto LAB_180033be6;
        }
      }
      lVar14 = lVar14 + 0x20;
    } while (lVar14 != lVar13);
  }
  local_31 = 1;
  pcVar8 = (char *)FUN_18027a790("<PlayerTeamMemberArray>k__BackingField",0x26,&local_d8);
  if (((pcVar8 != (char *)0x0) && (*pcVar8 == '\x04')) && (*(longlong *)(pcVar8 + 0x18) != 0)) {
    lVar14 = *(longlong *)(pcVar8 + 0x10);
    lVar13 = *(longlong *)(pcVar8 + 0x18) * 0x20 + lVar14;
    do {
      local_31 = 1;
      pcVar8 = (char *)FUN_18027a790("FinishOrder",0xb,lVar14);
      if ((pcVar8 != (char *)0x0) && (*pcVar8 == '\x02')) {
        if (*(longlong *)(pcVar8 + 8) == 0) {
          lVar2 = *(longlong *)(pcVar8 + 0x10);
          if (-1 < lVar2) goto joined_r0x000180033b93;
        }
        else if ((int)*(longlong *)(pcVar8 + 8) != 2) {
          lVar2 = *(longlong *)(pcVar8 + 0x10);
joined_r0x000180033b93:
          if (lVar2 == 0) goto LAB_180033be6;
        }
      }
      lVar14 = lVar14 + 0x20;
    } while (lVar14 != lVar13);
  }
  uStack_90 = (undefined8 *)&LAB_1802b6f60;
  local_31 = 1;
  local_98 = (longlong *)local_e8;
  FUN_1802aab50(&local_108,&DAT_1804e2e0f,&local_98);
LAB_180033c76:
  local_88 = (double *)CONCAT44(uStack_c4,local_c8);
  uStack_80 = (undefined *)CONCAT44(uStack_bc,uStack_c0);
  local_98 = (longlong *)CONCAT44(uStack_d4,local_d8);
  uStack_90 = (undefined8 *)CONCAT44(uStack_cc,uStack_d0);
  local_31 = 0;
  FUN_180121690(&local_98,local_140,&local_108);
  if (local_48 != 0) {
    thunk_FUN_1802919a0(local_40,local_48,1);
  }
  if (local_b0 != 0) {
    thunk_FUN_1802919a0(local_a8,local_b0,1);
  }
  return;
LAB_180033be6:
  local_31 = 1;
  pcVar9 = (char *)FUN_18027a790("<charaName>k__BackingField",0x1a,lVar14);
  puVar16 = (undefined8 *)&DAT_00000004;
  pcVar8 = "race";
  if ((pcVar9 == (char *)0x0) || (*pcVar9 != '\x03')) {
LAB_180033f74:
    FUN_1800658a0();
    uVar11 = 1;
    local_a0 = (void *)thunk_FUN_180291940(puVar16,1);
    if (local_a0 == (void *)0x0) {
LAB_180033c30:
      local_31 = 1;
      FUN_18045031b(uVar11,puVar16);
      goto LAB_180034235;
    }
    local_50 = puVar16;
    memcpy(local_a0,pcVar8,(size_t)puVar16);
  }
  else {
    puVar16 = *(undefined8 **)(pcVar9 + 0x18);
    if ((longlong)puVar16 < 0) {
      uVar11 = 0;
      goto LAB_180033c30;
    }
    if (puVar16 != (undefined8 *)0x0) {
      pcVar8 = *(char **)(pcVar9 + 0x10);
      goto LAB_180033f74;
    }
    local_a0 = (void *)0x1;
    local_50 = (undefined8 *)0x0;
  }
  pcVar8 = (char *)FUN_18027a790("FinishTimeRaw",0xd,lVar14);
  local_f0 = 0.0;
  if ((pcVar8 != (char *)0x0) && (local_f0 = 0.0, *pcVar8 == '\x02')) {
    if (*(longlong *)(pcVar8 + 8) == 2) {
      local_f0 = *(double *)(pcVar8 + 0x10);
    }
    else if ((int)*(longlong *)(pcVar8 + 8) == 1) {
      local_f0 = (double)*(longlong *)(pcVar8 + 0x10);
    }
    else {
      local_f0 = ((double)CONCAT44(DAT_1804519d0._4_4_,
                                   (int)((ulonglong)*(undefined8 *)(pcVar8 + 0x10) >> 0x20)) -
                 _UNK_1804519e8) +
                 ((double)CONCAT44((undefined4)DAT_1804519d0,(int)*(undefined8 *)(pcVar8 + 0x10)) -
                 _DAT_1804519e0);
    }
  }
  FUN_180121f40(&local_120,local_a0,local_50);
  uStack_90 = (undefined8 *)&DAT_180003600;
  local_88 = &local_f0;
  uStack_80 = &DAT_1802b85e0;
  local_70 = &LAB_1802b6f60;
  local_98 = &local_120;
  local_78 = local_e8;
  FUN_1802aab50(&local_108,&DAT_1804e2e1d,&local_98);
  if (local_120 != 0) {
    thunk_FUN_1802919a0(local_118,local_120,1);
  }
  if (local_50 != (undefined8 *)0x0) {
    thunk_FUN_1802919a0(local_a0,local_50,1);
  }
  goto LAB_180033c76;
}


