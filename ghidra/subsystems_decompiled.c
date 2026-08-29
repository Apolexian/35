

/* ===== 18002ebf0  FUN_18002ebf0 ===== */

void FUN_18002ebf0(undefined8 ***param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 ***pppuVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118;
  longlong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined ***local_d8;
  undefined ***local_d0;
  undefined8 ***local_c8;
  undefined1 *local_c0;
  undefined ***local_b8;
  undefined8 local_b0;
  undefined ****local_a8;
  undefined ***local_a0;
  undefined8 local_98;
  undefined ****local_88;
  code *local_80;
  undefined8 local_78;
  undefined1 uStack_70;
  undefined1 local_6f;
  undefined1 uStack_6e;
  undefined1 uStack_6d;
  undefined4 uStack_6c;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 *local_60;
  undefined ***local_58;
  undefined ****local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  do {
    do {
      do {
        do {
          uVar8 = 0;
          thunk_FUN_18029bec0(1);
          uVar6 = DAT_180607bf8;
          if (DAT_180607bf0 != '\0') {
            return;
          }
        } while (DAT_180607bf8 == 0);
        if (DAT_1805ea290 != 0) {
          FUN_180443e1b();
        }
        lVar4 = FUN_180292190(&DAT_1805ea280);
        cVar3 = DAT_180607bf2;
        uVar7 = (uVar8 & 0xffffffff) / 1000000 + lVar4 * 1000;
        pppuVar5 = (undefined8 ***)0x0;
        if (uVar6 <= uVar7) {
          pppuVar5 = (undefined8 ***)(uVar7 - uVar6);
        }
      } while (pppuVar5 < param_1);
      LOCK();
      DAT_180607bf2 = '\x01';
      UNLOCK();
    } while (cVar3 != '\0');
    local_d8 = (undefined ***)pppuVar5;
    if (DAT_1805ea090 == 0) {
      (**(code **)(DAT_1805ea088 + 0x28))(DAT_1805ea080);
    }
    if (DAT_1805ea290 != 0) {
      FUN_180443e1b();
    }
    lVar4 = FUN_180292190(&DAT_1805ea280);
    local_b8 = (undefined ***)((uVar8 & 0xffffffff) / 1000000 + lVar4 * 1000);
    FUN_1800f6da0(&local_128);
    uVar2 = local_118;
    local_b0 = local_120;
    local_88 = &local_b8;
    local_80 = FUN_1802b9200;
    FUN_1802aab50(&local_f0,&DAT_1804e2b06,&local_88);
    local_50 = (undefined ****)local_e8;
    FUN_180292cc0(&local_88,local_b0,uVar2,local_e8,local_e0);
    if (local_f0 != 0) {
      thunk_FUN_1802919a0(local_50,local_f0,1);
    }
    local_50 = (undefined ****)local_80;
    FUN_180117290(local_80,local_78,0);
    if (local_88 != (undefined ****)0x0) {
      thunk_FUN_1802919a0(local_50,local_88,1);
    }
    local_88 = &local_b8;
    local_80 = FUN_1802b9200;
    FUN_1802aab50(&local_108,&DAT_1804e2b13,&local_88);
    local_50 = (undefined ****)local_100;
    FUN_180292cc0(&local_a8,local_b0,uVar2,local_100,local_f8);
    if (local_108 != 0) {
      thunk_FUN_1802919a0(local_50,local_108,1);
    }
    local_88 = (undefined ****)((ulonglong)local_88 & 0xffffffff00000000);
    local_80 = (code *)0x0;
    local_78._0_4_ = 7;
    uStack_68 = 0;
    local_78._4_4_ = 0;
    uStack_70 = 0;
    uStack_6e = 0;
    local_6f = 1;
    uStack_6d = 1;
    uStack_6c = 1;
    local_50 = (undefined ****)local_a0;
    pppuVar5 = (undefined8 ***)local_a0;
    uVar6 = FUN_180295830(&local_88,local_a0,local_98);
    if ((undefined8 ****)local_a8 != (undefined8 ****)0x0) {
      thunk_FUN_1802919a0(local_50,local_a8,1);
    }
    if ((uVar6 & 1) == 0) {
      local_a0 = (undefined ***)FUN_1802b9200;
      local_88 = &local_58;
      local_80 = (code *)0x0;
      local_a8 = &local_d8;
      local_58 = (undefined ***)pppuVar5;
      cVar3 = FUN_1802b1150(&local_88,&PTR_LAB_180455660,&DAT_1804e2b20,&local_a8);
      if (cVar3 == '\0') {
        if (local_80 != (code *)0x0) {
          FUN_18005c5a0();
        }
      }
      else {
        if (local_80 == (code *)0x0) {
          FUN_180450790("a formatting trait implementation returned an error when the underlying stream did not/ru"
                        ,0xad,&DAT_180455648);
          goto LAB_18002f224;
        }
        FUN_18005c5a0();
      }
      local_88 = (undefined ****)&PTR_s_0_1_0_1804d96f8;
      local_80 = (code *)&LAB_18004ae90;
      local_78._0_4_ = 0x804d9710;
      local_78._4_4_ = 1;
      uStack_70 = 0x90;
      local_6f = 0xae;
      uStack_6e = 4;
      uStack_6d = 0x80;
      uStack_6c = 1;
      uStack_68 = 0x30;
      uStack_67 = 0x1804d97;
      local_60 = &LAB_18004ae90;
      FUN_1802aab50(&local_a8,&DAT_1804d9740,&local_88);
      local_c0 = &DAT_180003600;
      local_88 = &local_58;
      local_80 = (code *)0x0;
      local_c8 = &local_a8;
      cVar3 = FUN_1802b1150(&local_88,&PTR_LAB_180455660,&DAT_1804d789f,&local_c8);
      if (cVar3 == '\0') {
        if (local_80 != (code *)0x0) {
          FUN_18005c5a0();
        }
      }
      else {
        if (local_80 == (code *)0x0) {
          FUN_180450790("a formatting trait implementation returned an error when the underlying stream did not/ru"
                        ,0xad,&DAT_180455648);
          goto LAB_18002f224;
        }
        FUN_18005c5a0();
      }
      if ((undefined8 ****)local_a8 != (undefined8 ****)0x0) {
        thunk_FUN_1802919a0(local_a0,local_a8,1);
      }
      local_c8 = (undefined8 ***)CONCAT44(local_c8._4_4_,DAT_1805ea4d8);
      local_a8 = (undefined ****)&local_c8;
      local_a0 = (undefined ***)&LAB_1802b87a0;
      local_88 = &local_58;
      local_80 = (code *)0x0;
      cVar3 = FUN_1802b1150(&local_88,&PTR_LAB_180455660,&DAT_1804e2b52,&local_a8);
      if (cVar3 == '\0') {
        if (local_80 != (code *)0x0) {
          FUN_18005c5a0();
        }
      }
      else {
        if (local_80 == (code *)0x0) {
          FUN_180450790("a formatting trait implementation returned an error when the underlying stream did not/ru"
                        ,0xad,&DAT_180455648);
          goto LAB_18002f224;
        }
        FUN_18005c5a0();
      }
      FUN_1800ef5b0(&local_88);
      local_c0 = &DAT_180003600;
      local_a8 = &local_58;
      local_a0 = (undefined ***)0x0;
      local_c8 = &local_88;
      cVar3 = FUN_1802b1150(&local_a8,&PTR_LAB_180455660,&DAT_1804d84f2,&local_c8);
      if (cVar3 == '\0') {
        if ((undefined8 ***)local_a0 != (undefined8 ***)0x0) {
          FUN_18005c5a0();
        }
      }
      else {
        if ((undefined8 ***)local_a0 == (undefined8 ***)0x0) {
          FUN_180450790("a formatting trait implementation returned an error when the underlying stream did not/ru"
                        ,0xad,&DAT_180455648);
          goto LAB_18002f224;
        }
        FUN_18005c5a0();
      }
      if (local_88 != (undefined ****)0x0) {
        thunk_FUN_1802919a0(local_80,local_88,1);
      }
      local_a8 = &local_b8;
      local_a0 = (undefined ***)FUN_1802b9200;
      local_88 = &local_58;
      local_80 = (code *)0x0;
      cVar3 = FUN_1802b1150(&local_88,&PTR_LAB_180455660,&DAT_1804e2b7a,&local_a8);
      if (cVar3 == '\0') {
        if (local_80 != (code *)0x0) {
          FUN_18005c5a0();
        }
      }
      else {
        if (local_80 == (code *)0x0) {
          FUN_180450790("a formatting trait implementation returned an error when the underlying stream did not/ru"
                        ,0xad,&DAT_180455648);
LAB_18002f224:
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        FUN_18005c5a0();
      }
      CloseHandle(local_58);
    }
    else {
      FUN_18005c5a0(pppuVar5);
    }
    local_80 = FUN_1802b9200;
    local_78 = &local_b8;
    uStack_70 = 0;
    local_6f = 0x92;
    uStack_6e = 0x2b;
    uStack_6d = 0x80;
    uStack_6c = 1;
    local_88 = &local_d8;
    FUN_1802aab50(&local_a8,&DAT_1804e2bd0,&local_88);
    local_50 = local_a8;
    local_d0 = local_a0;
    FUN_1800e8390(3,local_a0,local_98);
    if ((undefined8 ****)local_50 != (undefined8 ****)0x0) {
      thunk_FUN_1802919a0(local_d0,local_50,1);
    }
    if (local_128 != 0) {
      thunk_FUN_1802919a0(local_b0,local_128,1);
    }
  } while( true );
}




/* ===== 1800e6560  FUN_1800e6560 ===== */

undefined8 FUN_1800e6560(undefined8 *param_1)

{
  int *piVar1;
  undefined **lpModuleName;
  code *pcVar2;
  HMODULE pHVar3;
  char cVar4;
  BOOL BVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  HMODULE *ppHVar11;
  undefined **ppuVar12;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  HMODULE *ppHStack_f0;
  undefined **ppuStack_e8;
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  HMODULE *ppHStack_c8;
  HMODULE *ppHStack_c0;
  undefined1 *puStack_b8;
  longlong lStack_b0;
  HMODULE pHStack_a8;
  HMODULE *ppHStack_a0;
  undefined8 uStack_98;
  HMODULE *ppHStack_88;
  HMODULE pHStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined4 uStack_64;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined1 *puStack_58;
  HMODULE pHStack_50;
  undefined8 uStack_48;
  
  pHVar3 = DAT_180607510;
  uStack_48 = 0xfffffffffffffffe;
  if ((((param_1 != (undefined8 *)0x0) && (piVar1 = (int *)*param_1, piVar1 != (int *)0x0)) &&
      (*piVar1 == -0x3ffffffb)) &&
     (lpModuleName = *(undefined ***)(piVar1 + 4), DAT_180607510 != (HMODULE)0x0)) {
    pHStack_80 = (HMODULE)0x0;
    ppuVar10 = lpModuleName;
    BVar5 = GetModuleHandleExW(6,(LPCWSTR)lpModuleName,&pHStack_80);
    cVar4 = DAT_180607508;
    if (BVar5 == 0) {
      if (pHVar3 != (HMODULE)0x0) {
        return 0;
      }
    }
    else if (pHStack_80 != pHVar3) {
      return 0;
    }
    LOCK();
    DAT_180607508 = 1;
    UNLOCK();
    if (cVar4 != '\0') {
      DAT_180607508 = 1;
      return 0;
    }
    if (DAT_180607be8 != (undefined *)0x0) {
      puStack_120 = DAT_180607be8;
      uStack_118 = DAT_180607be0;
      pHStack_80 = (HMODULE)((ulonglong)pHStack_80 & 0xffffffff00000000);
      pcStack_78 = (code *)0x0;
      uStack_70._0_4_ = 7;
      uStack_60 = 0;
      uStack_70._4_4_ = 0;
      uStack_68 = 0;
      uStack_67 = 0;
      uStack_65 = 0;
      uStack_64 = 1;
      uStack_66 = 1;
      FUN_1800f6da0(&pHStack_a8);
      ppHStack_88 = ppHStack_a0;
      FUN_180292cc0(&ppuStack_e8,ppHStack_a0,uStack_98,&DAT_1804e2a30,0xc);
      if (pHStack_a8 != (HMODULE)0x0) {
        thunk_FUN_1802919a0(ppHStack_88,pHStack_a8,1);
      }
      ppHStack_88 = (HMODULE *)puStack_e0;
      puVar8 = puStack_e0;
      uVar6 = FUN_180295830(&pHStack_80,puStack_e0,uStack_d8);
      ppuVar10 = ppuStack_e8;
      if (ppuStack_e8 != (undefined **)0x0) {
        thunk_FUN_1802919a0(ppHStack_88,ppuStack_e8,1);
      }
      if ((uVar6 & 1) == 0) {
        ppuStack_e8 = &puStack_120;
        puStack_e0 = &LAB_18004ae90;
        pHStack_a8 = (HMODULE)&puStack_108;
        ppHStack_a0 = (HMODULE *)0x0;
        ppuVar10 = &PTR_LAB_180455660;
        puStack_108 = puVar8;
        cVar4 = FUN_1802b1150(&pHStack_a8,&PTR_LAB_180455660,&DAT_1804d789f,&ppuStack_e8);
        if (cVar4 == '\0') {
          if (ppHStack_a0 != (HMODULE *)0x0) {
            FUN_18005c5a0();
          }
        }
        else {
          if (ppHStack_a0 == (HMODULE *)0x0) {
            FUN_180450790("a formatting trait implementation returned an error when the underlying stream did not/ru"
                          ,0xad,&DAT_180455648);
            goto LAB_1800e6d8e;
          }
          FUN_18005c5a0();
        }
        CloseHandle(puStack_108);
      }
      else {
        FUN_18005c5a0(puVar8);
      }
    }
    if (DAT_1805ea290 != 0) {
      FUN_180443e1b();
    }
    lVar7 = FUN_180292190(&DAT_1805ea280);
    lStack_b0 = ((ulonglong)ppuVar10 & 0xffffffff) / 1000000 + lVar7 * 1000;
    FUN_1800f6da0(&ppuStack_e8);
    ppHStack_88 = (HMODULE *)puStack_e0;
    pHStack_80 = (HMODULE)&lStack_b0;
    pcStack_78 = FUN_1802b9200;
    FUN_1802aab50(&puStack_108,&DAT_1804d8441,&pHStack_80);
    pHStack_50 = (HMODULE)uStack_100;
    FUN_180292cc0(&pHStack_80,ppHStack_88,uStack_d8,uStack_100,uStack_f8);
    if (puStack_108 != (undefined1 *)0x0) {
      thunk_FUN_1802919a0(pHStack_50,puStack_108,1);
    }
    pHStack_50 = (HMODULE)pcStack_78;
    FUN_180117290(pcStack_78,CONCAT44(uStack_70._4_4_,(undefined4)uStack_70),param_1);
    if (pHStack_80 != (HMODULE)0x0) {
      thunk_FUN_1802919a0(pHStack_50,pHStack_80,1);
    }
    pHStack_80 = (HMODULE)&lStack_b0;
    pcStack_78 = FUN_1802b9200;
    FUN_1802aab50(&puStack_120,&DAT_1804d844f,&pHStack_80);
    pHStack_50 = (HMODULE)uStack_118;
    FUN_180292cc0(&pHStack_a8,ppHStack_88,uStack_d8,uStack_118,uStack_110);
    if (puStack_120 != (undefined *)0x0) {
      thunk_FUN_1802919a0(pHStack_50,puStack_120,1);
    }
    pHStack_80 = (HMODULE)((ulonglong)pHStack_80 & 0xffffffff00000000);
    pcStack_78 = (code *)0x0;
    uStack_70._0_4_ = 7;
    uStack_70._4_4_ = 0;
    uStack_68 = 0;
    uStack_66 = 0;
    uStack_60 = 0;
    uStack_67 = 1;
    uStack_64 = 1;
    uStack_65 = 1;
    pHStack_50 = (HMODULE)ppHStack_a0;
    ppHVar11 = ppHStack_a0;
    uVar6 = FUN_180295830(&pHStack_80,ppHStack_a0,uStack_98);
    if (pHStack_a8 != (HMODULE)0x0) {
      thunk_FUN_1802919a0(pHStack_50,pHStack_a8,1);
    }
    if ((uVar6 & 1) == 0) {
      ppuVar10 = (undefined **)0x33;
      ppuVar12 = (undefined **)&DAT_1804d845d;
      ppHStack_c8 = ppHVar11;
      do {
        ppuVar9 = ppuVar12;
        lVar7 = FUN_1802a0490((HMODULE)&ppHStack_c8,ppuVar12,ppuVar10);
        if (lVar7 == 1) {
          switch((uint)ppuVar9 & 3) {
          case 0:
            cVar4 = *(char *)(ppuVar9 + 2);
            break;
          case 1:
            cVar4 = *(char *)((longlong)ppuVar9 + 0xf);
            break;
          case 2:
            goto switchD_1800e6951_caseD_2;
          case 3:
            cVar4 = (char)((ulonglong)ppuVar9 >> 0x20);
            if (0x29 < (uint)((ulonglong)ppuVar9 >> 0x20)) {
              cVar4 = '*';
            }
          }
          if (cVar4 != '#') {
switchD_1800e6951_caseD_2:
            if (ppuVar9 != (undefined **)0x0) {
LAB_1800e699e:
              FUN_18005c5a0(ppuVar9);
            }
            break;
          }
          FUN_18005c5a0(ppuVar9);
        }
        else {
          if (ppuVar9 == (undefined **)0x0) {
            ppuVar9 = &PTR_s_failed_to_write_whole_buffer_1804556b0;
            goto LAB_1800e699e;
          }
          if (ppuVar10 < ppuVar9) {
            FUN_1804507c0(ppuVar9,ppuVar10,ppuVar10,&DAT_1804556c8);
            goto LAB_1800e6d8e;
          }
          ppuVar12 = (undefined **)((longlong)ppuVar12 + (longlong)ppuVar9);
          ppuVar10 = (undefined **)((longlong)ppuVar10 - (longlong)ppuVar9);
        }
      } while (ppuVar10 != (undefined **)0x0);
      pHStack_80 = (HMODULE)&PTR_s_0_1_0_1804d96f8;
      pcStack_78 = (code *)&LAB_18004ae90;
      uStack_70._0_4_ = 0x804d9710;
      uStack_70._4_4_ = 1;
      uStack_68 = 0x90;
      uStack_67 = 0xae;
      uStack_66 = 4;
      uStack_65 = 0x80;
      uStack_64 = 1;
      uStack_60 = 0x30;
      uStack_5f = 0x1804d97;
      puStack_58 = &LAB_18004ae90;
      FUN_1802aab50(&pHStack_a8,&DAT_1804d9740,&pHStack_80);
      puStack_b8 = &DAT_180003600;
      pcStack_78 = (code *)0x0;
      ppHStack_c0 = &pHStack_a8;
      pHStack_80 = (HMODULE)&ppHStack_c8;
      cVar4 = FUN_1802b1150(&pHStack_80,&PTR_LAB_180455660,&DAT_1804d789f,(HMODULE)&ppHStack_c0);
      if (cVar4 == '\0') {
        if (pcStack_78 != (code *)0x0) {
          FUN_18005c5a0();
        }
      }
      else {
        if (pcStack_78 == (code *)0x0) {
          FUN_180450790("a formatting trait implementation returned an error when the underlying stream did not/ru"
                        ,0xad,&DAT_180455648);
          goto LAB_1800e6d8e;
        }
        FUN_18005c5a0();
      }
      if (pHStack_a8 != (HMODULE)0x0) {
        thunk_FUN_1802919a0(ppHStack_a0,pHStack_a8,1);
      }
      ppHVar11 = (HMODULE *)((longlong)lpModuleName - (longlong)pHVar3);
      ppHStack_a0 = (HMODULE *)FUN_1802b84c0;
      pcStack_78 = (code *)0x0;
      ppHStack_c0 = ppHVar11;
      pHStack_a8 = (HMODULE)&ppHStack_c0;
      pHStack_80 = (HMODULE)&ppHStack_c8;
      cVar4 = FUN_1802b1150(&pHStack_80,&PTR_LAB_180455660,&DAT_1804d8490,&pHStack_a8);
      if (cVar4 == '\0') {
        if (pcStack_78 != (code *)0x0) {
          FUN_18005c5a0();
        }
      }
      else {
        if (pcStack_78 == (code *)0x0) {
          FUN_180450790("a formatting trait implementation returned an error when the underlying stream did not/ru"
                        ,0xad,&DAT_180455648);
          goto LAB_1800e6d8e;
        }
        FUN_18005c5a0();
      }
      ppHStack_c0 = (HMODULE *)CONCAT44(ppHStack_c0._4_4_,DAT_1805ea4d8);
      ppHStack_a0 = (HMODULE *)&LAB_1802b87a0;
      pcStack_78 = (code *)0x0;
      pHStack_a8 = (HMODULE)&ppHStack_c0;
      pHStack_80 = (HMODULE)&ppHStack_c8;
      cVar4 = FUN_1802b1150(&pHStack_80,&PTR_LAB_180455660,&DAT_1804d84ca,&pHStack_a8);
      if (cVar4 == '\0') {
        if (pcStack_78 != (code *)0x0) {
          FUN_18005c5a0();
        }
      }
      else {
        if (pcStack_78 == (code *)0x0) {
          FUN_180450790("a formatting trait implementation returned an error when the underlying stream did not/ru"
                        ,0xad,&DAT_180455648);
          goto LAB_1800e6d8e;
        }
        FUN_18005c5a0();
      }
      FUN_1800ef5b0(&pHStack_80);
      puStack_b8 = &DAT_180003600;
      ppHStack_a0 = (HMODULE *)0x0;
      ppHStack_c0 = &pHStack_80;
      pHStack_a8 = (HMODULE)&ppHStack_c8;
      cVar4 = FUN_1802b1150(&pHStack_a8,&PTR_LAB_180455660,&DAT_1804d84f2,&ppHStack_c0);
      if (cVar4 == '\0') {
        if (ppHStack_a0 != (HMODULE *)0x0) {
          FUN_18005c5a0();
        }
      }
      else {
        if (ppHStack_a0 == (HMODULE *)0x0) {
          FUN_180450790("a formatting trait implementation returned an error when the underlying stream did not/ru"
                        ,0xad,&DAT_180455648);
          goto LAB_1800e6d8e;
        }
        FUN_18005c5a0();
      }
      if (pHStack_80 != (HMODULE)0x0) {
        thunk_FUN_1802919a0(pcStack_78,pHStack_80,1);
      }
      pHStack_a8 = (HMODULE)&lStack_b0;
      ppHStack_a0 = (HMODULE *)FUN_1802b9200;
      pcStack_78 = (code *)0x0;
      pHStack_80 = (HMODULE)&ppHStack_c8;
      cVar4 = FUN_1802b1150(&pHStack_80,&PTR_LAB_180455660,&DAT_1804d84f8,&pHStack_a8);
      if (cVar4 == '\0') {
        if (pcStack_78 != (code *)0x0) {
          FUN_18005c5a0();
        }
      }
      else {
        if (pcStack_78 == (code *)0x0) {
          FUN_180450790("a formatting trait implementation returned an error when the underlying stream did not/ru"
                        ,0xad,&DAT_180455648);
LAB_1800e6d8e:
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        FUN_18005c5a0();
      }
      CloseHandle(ppHStack_c8);
    }
    else {
      FUN_18005c5a0(ppHVar11);
      ppHVar11 = (HMODULE *)((longlong)lpModuleName - (longlong)pHVar3);
    }
    pHStack_80 = (HMODULE)&ppHStack_c0;
    pcStack_78 = FUN_1802b84c0;
    uStack_70 = &lStack_b0;
    uStack_68 = 0;
    uStack_67 = 0x92;
    uStack_66 = 0x2b;
    uStack_65 = 0x80;
    uStack_64 = 1;
    ppHStack_c0 = ppHVar11;
    FUN_1802aab50(&pHStack_a8,&DAT_1804d8533,&pHStack_80);
    pHStack_50 = pHStack_a8;
    ppHStack_f0 = ppHStack_a0;
    FUN_1800e8390(3,ppHStack_a0,uStack_98);
    if (pHStack_50 != (HMODULE)0x0) {
      thunk_FUN_1802919a0(ppHStack_f0,pHStack_50,1);
    }
    if (ppuStack_e8 != (undefined **)0x0) {
      thunk_FUN_1802919a0(ppHStack_88,ppuStack_e8,1);
    }
    DAT_180607508 = '\0';
  }
  return 0;
}




/* ===== 18011acb0  FUN_18011acb0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18011acb0(ulonglong *param_1,undefined8 *param_2,ulonglong param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  undefined8 ****ppppuVar21;
  undefined1 *puVar22;
  char cVar23;
  byte bVar24;
  ushort uVar25;
  int iVar26;
  ulonglong uVar27;
  undefined1 *puVar28;
  undefined8 *****pppppuVar29;
  undefined8 *puVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  undefined4 uVar33;
  undefined1 *puVar34;
  undefined8 *****pppppuVar35;
  longlong lVar36;
  undefined1 *puVar37;
  undefined8 uVar38;
  uint uVar39;
  longlong lVar40;
  bool bVar41;
  bool bVar42;
  byte bVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined8 ****ppppuStack_1a8;
  undefined1 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined8 *local_178;
  undefined8 *local_170;
  undefined8 local_168;
  ulonglong *local_160;
  undefined8 ****local_158;
  undefined1 *local_150;
  undefined1 auStack_148 [16];
  undefined8 ****local_138;
  undefined1 *local_130;
  ulonglong local_120;
  ulonglong uStack_118;
  ulonglong local_110;
  undefined8 ****local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  undefined8 ****local_f0;
  undefined8 ****local_e8;
  undefined1 *local_e0;
  undefined8 *local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined1 local_b8;
  undefined7 uStack_b7;
  undefined8 ****local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined1 *local_88;
  undefined8 ****local_80;
  undefined8 local_78;
  
  local_78 = 0xfffffffffffffffe;
  lVar36 = param_3 * 0x38;
  if (param_3 < 0x24924924924924a) {
    local_168 = param_4;
    local_160 = param_1;
    if (lVar36 == 0) {
      uStack_118 = 8;
      local_120 = 0;
    }
    else {
      FUN_1800658a0();
      uVar38 = 8;
      uStack_118 = thunk_FUN_180291940(lVar36,8);
      local_120 = param_3;
      if (uStack_118 == 0) goto LAB_18011acfb;
    }
    local_110 = 0;
    local_158 = (undefined8 *****)0x1;
    local_170 = param_2 + param_3 * 2;
    local_150 = (undefined1 *)0x0;
    auStack_148 = ZEXT816(0);
    do {
      if (param_2 == local_170) {
        if (auStack_148._8_8_ != 0 ||
            (ulonglong)-auStack_148._8_8_ < (ulonglong)(0x95 < (ulonglong)auStack_148._0_8_)) {
          local_e0 = &LAB_18004ae90;
          local_d8 = (undefined8 *)auStack_148;
          local_d0 = &LAB_1802b6f60;
          local_e8 = &local_158;
          FUN_1802aab50(&local_a8,&DAT_1804e299b,&local_e8);
          local_f0 = local_a8;
          local_f8 = local_a0;
          FUN_1800e8390(1,local_a0,local_98);
          if ((undefined8 *****)local_f0 != (undefined8 *****)0x0) {
            thunk_FUN_1802919a0(local_f8,local_f0,1);
          }
        }
        local_160[2] = local_110;
        *local_160 = local_120;
        local_160[1] = uStack_118;
        return;
      }
      local_f0 = (undefined8 ****)*param_2;
      local_f8 = (undefined1 *)param_2[1];
      local_178 = param_2;
      (**(code **)((longlong)local_f8 + 0x18))(&local_e8);
      local_108 = local_e8;
      local_100 = local_e0;
      local_138 = local_e8;
      local_130 = local_e0;
      local_a8 = &local_138;
      local_a0 = &LAB_18004ae90;
      FUN_1802aab50(&local_e8,&DAT_1804e2006,&local_a8);
      local_80 = local_e8;
      local_88 = local_e0;
      cVar23 = FUN_18011ed60(local_e0,local_d8,1);
      if ((undefined8 *****)local_80 != (undefined8 *****)0x0) {
        thunk_FUN_1802919a0(local_88,local_80,1);
      }
      puVar37 = local_100;
      ppppuVar21 = local_108;
      if (cVar23 == '\0') {
        FUN_1800658a0();
        puVar30 = (undefined8 *)thunk_FUN_180291940(0x2b,1);
        uVar38 = _UNK_1804e2921;
        if (puVar30 == (undefined8 *)0x0) {
          FUN_18045031b(1,0x2b);
          goto LAB_18011b7e8;
        }
        *(ulonglong *)((longlong)puVar30 + 0x1b) = CONCAT35(_UNK_1804e291e,_DAT_1804e2919);
        *(undefined8 *)((longlong)puVar30 + 0x23) = uVar38;
        uVar38 = CONCAT53(_DAT_1804e2919,_UNK_1804e2916);
        puVar30[2] = _DAT_1804e290e;
        puVar30[3] = uVar38;
        uVar38 = _UNK_1804e2906;
        *puVar30 = _DAT_1804e28fe;
        puVar30[1] = uVar38;
        pppppuVar35 = (undefined8 *****)0x3;
        puVar37 = (undefined1 *)0x2b;
        uVar38 = 0x2b;
      }
      else {
        if (DAT_1805ea078 != 0) {
          FUN_180442b27();
        }
        if (DAT_1805ea060 != 0) {
          uVar27 = FUN_180064d00(DAT_1805ea068,DAT_1805ea070,ppppuVar21,puVar37);
          uVar31 = DAT_1805ea050;
          lVar36 = DAT_1805ea048;
          bVar24 = (byte)(uVar27 >> 0x39);
          auVar44 = ZEXT216(CONCAT11(bVar24,bVar24));
          auVar44 = pshuflw(auVar44,auVar44,0);
          lVar40 = 0;
          while( true ) {
            uVar27 = uVar27 & uVar31;
            pcVar1 = (char *)(lVar36 + uVar27);
            cVar23 = *pcVar1;
            cVar6 = pcVar1[1];
            cVar7 = pcVar1[2];
            cVar8 = pcVar1[3];
            cVar9 = pcVar1[4];
            cVar10 = pcVar1[5];
            cVar11 = pcVar1[6];
            cVar12 = pcVar1[7];
            cVar13 = pcVar1[8];
            cVar14 = pcVar1[9];
            cVar15 = pcVar1[10];
            cVar16 = pcVar1[0xb];
            cVar17 = pcVar1[0xc];
            cVar18 = pcVar1[0xd];
            cVar19 = pcVar1[0xe];
            cVar20 = pcVar1[0xf];
            auVar45[0] = -(cVar23 == auVar44[0]);
            auVar45[1] = -(cVar6 == auVar44[1]);
            auVar45[2] = -(cVar7 == auVar44[2]);
            auVar45[3] = -(cVar8 == auVar44[3]);
            auVar45[4] = -(cVar9 == auVar44[4]);
            auVar45[5] = -(cVar10 == auVar44[5]);
            auVar45[6] = -(cVar11 == auVar44[6]);
            auVar45[7] = -(cVar12 == auVar44[7]);
            auVar45[8] = -(cVar13 == auVar44[0]);
            auVar45[9] = -(cVar14 == auVar44[1]);
            auVar45[10] = -(cVar15 == auVar44[2]);
            auVar45[0xb] = -(cVar16 == auVar44[3]);
            auVar45[0xc] = -(cVar17 == auVar44[4]);
            auVar45[0xd] = -(cVar18 == auVar44[5]);
            auVar45[0xe] = -(cVar19 == auVar44[6]);
            auVar45[0xf] = -(cVar20 == auVar44[7]);
            uVar25 = (ushort)(SUB161(auVar45 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar45[0xf] >> 7) << 0xf;
            uVar39 = (uint)uVar25;
            while (uVar25 != 0) {
              uVar3 = 0;
              for (uVar4 = uVar39; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
                uVar3 = uVar3 + 1;
              }
              uVar32 = uVar3 + uVar27 & uVar31;
              if (puVar37 == *(undefined1 **)(lVar36 + -8 + uVar32 * -0x18)) {
                iVar26 = memcmp(ppppuVar21,*(void **)(lVar36 + uVar32 * -0x18 + -0x10),
                                (size_t)puVar37);
                if (iVar26 == 0) {
                  FUN_1800658a0();
                  puVar30 = (undefined8 *)thunk_FUN_180291940(0x1a,1);
                  uVar38 = _UNK_1804e2993;
                  if (puVar30 == (undefined8 *)0x0) {
                    FUN_18045031b(1,0x1a);
                    goto LAB_18011b7e8;
                  }
                  *(ulonglong *)((longlong)puVar30 + 10) = CONCAT26(_UNK_1804e2991,_DAT_1804e298b);
                  *(undefined8 *)((longlong)puVar30 + 0x12) = uVar38;
                  uVar38 = CONCAT62(_DAT_1804e298b,_UNK_1804e2989);
                  *puVar30 = _DAT_1804e2981;
                  puVar30[1] = uVar38;
                  pppppuVar35 = (undefined8 *****)0x3;
                  puVar37 = (undefined1 *)0x1a;
                  uVar38 = 0x1a;
                  goto LAB_18011b44f;
                }
              }
              uVar25 = (ushort)(uVar39 - 1) & (ushort)uVar39;
              uVar39 = CONCAT22((short)(uVar39 - 1 >> 0x10),uVar25);
            }
            auVar47[0] = -(cVar23 == -1);
            auVar47[1] = -(cVar6 == -1);
            auVar47[2] = -(cVar7 == -1);
            auVar47[3] = -(cVar8 == -1);
            auVar47[4] = -(cVar9 == -1);
            auVar47[5] = -(cVar10 == -1);
            auVar47[6] = -(cVar11 == -1);
            auVar47[7] = -(cVar12 == -1);
            auVar47[8] = -(cVar13 == -1);
            auVar47[9] = -(cVar14 == -1);
            auVar47[10] = -(cVar15 == -1);
            auVar47[0xb] = -(cVar16 == -1);
            auVar47[0xc] = -(cVar17 == -1);
            auVar47[0xd] = -(cVar18 == -1);
            auVar47[0xe] = -(cVar19 == -1);
            auVar47[0xf] = -(cVar20 == -1);
            if ((((((((((((((((auVar47 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                             (auVar47 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                            (auVar47 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                           (auVar47 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          (auVar47 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                         (auVar47 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar47 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar47 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar47 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar47 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar47 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar47 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar47 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar47 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar47 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || cVar20 == -1)
            break;
            uVar27 = uVar27 + lVar40 + 0x10;
            lVar40 = lVar40 + 0x10;
          }
        }
        puVar37 = local_100;
        ppppuVar21 = local_108;
        if (DAT_1805ea808 != 0) {
          FUN_180443c0f();
        }
        LOCK();
        bVar42 = DAT_1805ea7d0 == '\0';
        if (bVar42) {
          DAT_1805ea7d0 = '\x01';
        }
        UNLOCK();
        if (!bVar42) {
          FUN_18044ee10(&DAT_1805ea7d0);
        }
        if ((*(ulonglong *)PTR_DAT_1806073e0 & 0x7fffffffffffffff) == 0) {
          if (DAT_1805ea7d1 == '\0') {
            bVar24 = 0;
            goto joined_r0x00018011b1f1;
          }
LAB_18011b019:
          if ((*(ulonglong *)PTR_DAT_1806073e0 & 0x7fffffffffffffff) != 0) {
            cVar23 = FUN_18044f9d0();
            if (cVar23 == '\0') {
              DAT_1805ea7d1 = '\x01';
            }
          }
LAB_18011b02f:
          cVar23 = DAT_1805ea7d0;
          bVar42 = false;
          LOCK();
          DAT_1805ea7d0 = '\0';
          UNLOCK();
          if (cVar23 == '\x02') goto LAB_18011b49f;
        }
        else {
          bVar24 = FUN_18044f9d0();
          if (DAT_1805ea7d1 != '\0') {
            if (bVar24 != 0) goto LAB_18011b019;
            goto LAB_18011b02f;
          }
          bVar24 = bVar24 ^ 1;
joined_r0x00018011b1f1:
          puVar22 = local_88;
          pppppuVar35 = (undefined8 *****)local_80;
          if (DAT_1805ea7f0 != 0) {
            puVar28 = (undefined1 *)FUN_180064d00(DAT_1805ea7f8,DAT_1805ea800,ppppuVar21,puVar37);
            uVar31 = DAT_1805ea7e0;
            lVar36 = DAT_1805ea7d8;
            bVar43 = (byte)((ulonglong)puVar28 >> 0x39);
            auVar44 = ZEXT216(CONCAT11(bVar43,bVar43));
            auVar44 = pshuflw(auVar44,auVar44,0);
            puVar34 = (undefined1 *)0x0;
            while( true ) {
              pppppuVar29 = (undefined8 *****)((ulonglong)puVar28 & uVar31);
              pcVar1 = (char *)(lVar36 + (longlong)pppppuVar29);
              cVar23 = *pcVar1;
              cVar6 = pcVar1[1];
              cVar7 = pcVar1[2];
              cVar8 = pcVar1[3];
              cVar9 = pcVar1[4];
              cVar10 = pcVar1[5];
              cVar11 = pcVar1[6];
              cVar12 = pcVar1[7];
              cVar13 = pcVar1[8];
              cVar14 = pcVar1[9];
              cVar15 = pcVar1[10];
              cVar16 = pcVar1[0xb];
              cVar17 = pcVar1[0xc];
              cVar18 = pcVar1[0xd];
              cVar19 = pcVar1[0xe];
              cVar20 = pcVar1[0xf];
              auVar46[0] = -(cVar23 == auVar44[0]);
              auVar46[1] = -(cVar6 == auVar44[1]);
              auVar46[2] = -(cVar7 == auVar44[2]);
              auVar46[3] = -(cVar8 == auVar44[3]);
              auVar46[4] = -(cVar9 == auVar44[4]);
              auVar46[5] = -(cVar10 == auVar44[5]);
              auVar46[6] = -(cVar11 == auVar44[6]);
              auVar46[7] = -(cVar12 == auVar44[7]);
              auVar46[8] = -(cVar13 == auVar44[0]);
              auVar46[9] = -(cVar14 == auVar44[1]);
              auVar46[10] = -(cVar15 == auVar44[2]);
              auVar46[0xb] = -(cVar16 == auVar44[3]);
              auVar46[0xc] = -(cVar17 == auVar44[4]);
              auVar46[0xd] = -(cVar18 == auVar44[5]);
              auVar46[0xe] = -(cVar19 == auVar44[6]);
              auVar46[0xf] = -(cVar20 == auVar44[7]);
              uVar25 = (ushort)(SUB161(auVar46 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar46 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar46 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar46 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar46 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar46 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar46 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar46 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar46 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar46 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar46 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar46 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar46 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar46[0xf] >> 7) << 0xf;
              uVar39 = (uint)uVar25;
              puVar22 = local_88;
              pppppuVar35 = (undefined8 *****)local_80;
              while (local_88 = puVar34, local_80 = pppppuVar29, uVar25 != 0) {
                uVar3 = 0;
                for (uVar4 = uVar39; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
                  uVar3 = uVar3 + 1;
                }
                uVar27 = (ulonglong)((ulonglong)uVar3 + (longlong)local_80) & uVar31;
                if (puVar37 == *(undefined1 **)(lVar36 + -8 + uVar27 * -0x18)) {
                  iVar26 = memcmp(ppppuVar21,*(void **)(lVar36 + uVar27 * -0x18 + -0x10),
                                  (size_t)puVar37);
                  bVar42 = true;
                  if (iVar26 == 0) goto LAB_18011b1fa;
                }
                uVar25 = (ushort)(uVar39 - 1) & (ushort)uVar39;
                uVar39 = CONCAT22((short)(uVar39 - 1 >> 0x10),uVar25);
                pppppuVar29 = (undefined8 *****)local_80;
                puVar34 = local_88;
                puVar22 = local_88;
                pppppuVar35 = (undefined8 *****)local_80;
              }
              auVar48[0] = -(cVar23 == -1);
              auVar48[1] = -(cVar6 == -1);
              auVar48[2] = -(cVar7 == -1);
              auVar48[3] = -(cVar8 == -1);
              auVar48[4] = -(cVar9 == -1);
              auVar48[5] = -(cVar10 == -1);
              auVar48[6] = -(cVar11 == -1);
              auVar48[7] = -(cVar12 == -1);
              auVar48[8] = -(cVar13 == -1);
              auVar48[9] = -(cVar14 == -1);
              auVar48[10] = -(cVar15 == -1);
              auVar48[0xb] = -(cVar16 == -1);
              auVar48[0xc] = -(cVar17 == -1);
              auVar48[0xd] = -(cVar18 == -1);
              auVar48[0xe] = -(cVar19 == -1);
              auVar48[0xf] = -(cVar20 == -1);
              if ((((((((((((((((auVar48 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                               (auVar48 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                              (auVar48 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                             (auVar48 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                            (auVar48 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                           (auVar48 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          (auVar48 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                         (auVar48 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar48 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar48 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar48 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar48 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar48 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar48 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar48 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  cVar20 == -1) break;
              puVar28 = (undefined1 *)((longlong)local_80 + (longlong)(local_88 + 0x10));
              puVar34 = local_88 + 0x10;
              local_88 = puVar22;
              local_80 = pppppuVar35;
            }
          }
          local_80 = pppppuVar35;
          local_88 = puVar22;
          bVar42 = false;
LAB_18011b1fa:
          if ((bVar24 == 0) && ((*(ulonglong *)PTR_DAT_1806073e0 & 0x7fffffffffffffff) != 0)) {
            cVar23 = FUN_18044f9d0();
            if (cVar23 == '\0') {
              DAT_1805ea7d1 = '\x01';
            }
          }
          cVar23 = DAT_1805ea7d0;
          LOCK();
          DAT_1805ea7d0 = '\0';
          UNLOCK();
          if (cVar23 == '\x02') {
LAB_18011b49f:
            DAT_1805ea7d0 = '\0';
            WakeByAddressSingle(&DAT_1805ea7d0);
          }
          if (bVar42) {
            FUN_1800658a0();
            puVar30 = (undefined8 *)thunk_FUN_180291940(0x22,1);
            uVar38 = _UNK_1804e2977;
            if (puVar30 == (undefined8 *)0x0) {
              FUN_18045031b(1,0x22);
LAB_18011b7e8:
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            puVar30[2] = _DAT_1804e296f;
            puVar30[3] = uVar38;
            uVar38 = _UNK_1804e2967;
            *puVar30 = _DAT_1804e295f;
            puVar30[1] = uVar38;
            *(undefined2 *)(puVar30 + 4) = 0x6863;
            pppppuVar35 = (undefined8 *****)0x3;
            puVar37 = (undefined1 *)0x22;
            uVar38 = 0x22;
            goto LAB_18011b44f;
          }
        }
        DAT_180607be0 = local_100;
        DAT_180607be8 = (undefined8 *****)local_108;
        local_a8 = &local_108;
        local_a0 = &LAB_18004ae90;
        FUN_1802aab50(&local_e8,&DAT_1804e2929,&local_a8);
        local_80 = local_e8;
        local_88 = local_e0;
        FUN_18011fd80(local_e0,local_d8);
        pppppuVar35 = (undefined8 *****)local_80;
        if ((undefined8 *****)local_80 != (undefined8 *****)0x0) {
          thunk_FUN_1802919a0(local_88,local_80,1);
        }
        uVar33 = SUB84(pppppuVar35,0);
        uStack_188 = FUN_180291ff0();
        uStack_180 = uVar33;
        (**(code **)((longlong)local_f8 + 0x20))(&ppppuStack_1a8,local_f0,local_168);
        uVar38 = uStack_190;
        puVar30 = puStack_198;
        puVar37 = puStack_1a0;
        if (ppppuStack_1a8 == (undefined8 ****)&DAT_00000004) {
          local_e8 = (undefined8 *****)0x2;
        }
        else {
          local_e8 = ppppuStack_1a8;
        }
        pppppuVar35 = (undefined8 *****)local_e8;
        local_138 = &local_108;
        local_130 = &LAB_18004ae90;
        FUN_1802aab50(&local_a8,&DAT_1804e2943,&local_138);
        local_80 = local_a8;
        local_88 = local_a0;
        FUN_18011fd80(local_a0,local_98);
        pppppuVar29 = (undefined8 *****)local_80;
        if ((undefined8 *****)local_80 != (undefined8 *****)0x0) {
          thunk_FUN_1802919a0(local_88,local_80,1);
        }
        uVar31 = FUN_180292190(&uStack_188);
        auVar44._8_8_ = 0;
        auVar44._0_8_ = uVar31;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = ((ulonglong)pppppuVar29 & 0xffffffff) / 1000000;
        auVar5 = auVar44 * ZEXT816(1000) + auVar5;
        bVar42 = (ulonglong)auStack_148._0_8_ < auVar5._0_8_;
        bVar41 = (ulonglong)auStack_148._8_8_ < auVar5._8_8_;
        uVar31 = auStack_148._8_8_ - auVar5._8_8_;
        if (bVar41 || uVar31 < bVar42) {
          local_158 = local_108;
          local_150 = local_100;
          auStack_148 = auVar5;
        }
        DAT_180607be8 = (undefined8 *****)0x0;
      }
LAB_18011b44f:
      uVar31 = local_110;
      local_c8 = local_f0;
      local_c0 = (longlong)local_f8;
      local_b8 = 0;
      local_e8 = pppppuVar35;
      local_e0 = puVar37;
      local_d8 = puVar30;
      local_d0 = (undefined1 *)uVar38;
      if (local_110 == local_120) {
        FUN_1804442c0(&local_120);
      }
      param_2 = local_178 + 2;
      lVar36 = uVar31 * 0x38;
      *(ulonglong *)(uStack_118 + 0x30 + lVar36) = CONCAT71(uStack_b7,local_b8);
      puVar30 = (undefined8 *)(uStack_118 + 0x20 + lVar36);
      *puVar30 = local_c8;
      puVar30[1] = local_c0;
      puVar30 = (undefined8 *)(uStack_118 + 0x10 + lVar36);
      *puVar30 = local_d8;
      puVar30[1] = local_d0;
      *(undefined8 *)(uStack_118 + lVar36) = local_e8;
      ((undefined8 *)(uStack_118 + lVar36))[1] = local_e0;
      local_110 = uVar31 + 1;
    } while( true );
  }
  uVar38 = 0;
LAB_18011acfb:
  FUN_18045031b(uVar38,lVar36);
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}




/* ===== 18011bd40  FUN_18011bd40 ===== */

void FUN_18011bd40(void)

{
  char cVar1;
  short sVar2;
  code *pcVar3;
  longlong lVar4;
  PVOID pvVar5;
  PVOID pvVar6;
  uint uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  LPCVOID lpAddress;
  SIZE_T SVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  char cVar18;
  undefined8 *local_80;
  _MEMORY_BASIC_INFORMATION local_78;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar8 = DAT_180607bd8;
  if ((DAT_1805ea490 == 0) && (lVar9 = (*DAT_1805ea3e8)(), uVar8 = DAT_180607bd8, lVar9 != 0)) {
    cVar18 = DAT_180607bc0;
    if (DAT_180607bc0 == '\0') {
      uVar7 = 0xce30e039;
      uVar15 = 0x9b3861dd;
      uVar16 = 0;
      while( true ) {
        while( true ) {
          while( true ) {
            while ((int)uVar15 < 0x425611fd) {
              if (uVar15 == 0x9b3861dd) {
                uVar7 = -uVar7;
                uVar16 = 0x2f05f306;
                goto LAB_18011be3a;
              }
              if (uVar15 == 0xb43d92db) {
                uVar7 = uVar7 * -0x6ddadedc;
                uVar16 = 0xc8f6cf39;
                uVar15 = 0x7ccb5de2;
              }
              else {
                if (uVar15 != 0xc21ee7d5) goto LAB_18011be3a;
                uVar7 = ~uVar7;
                uVar16 = 0xbc77235a;
                uVar15 = 0x7e69c48f;
              }
            }
            if (uVar15 != 0x7ccb5de2) break;
            uVar7 = -uVar7;
            uVar16 = 0xbed5ba37;
            uVar15 = 0xc21ee7d5;
          }
          if (uVar15 != 0x7e69c48f) break;
          uVar7 = uVar7 ^ 0x937d99f2;
          uVar16 = 0x3c3fd572;
          uVar15 = 0x425611fd;
        }
        if (uVar15 == 0x425611fd) break;
LAB_18011be3a:
        uVar15 = uVar15 ^ uVar16;
      }
      lVar9 = (longlong)&DAT_1804e29c8 - (ulonglong)(uVar7 & 0xffff);
      local_78.BaseAddress._4_4_ = (undefined4)((ulonglong)lVar9 >> 0x20);
      local_78.BaseAddress = (PVOID)CONCAT44(local_78.BaseAddress._4_4_,0xce30e039);
      plVar10 = (longlong *)FUN_180099520(lVar9,0xce30e039);
      local_78.BaseAddress = (PVOID)(*plVar10 + 0x6c77bd08e7d62d30);
      local_78.AllocationBase = (PVOID)(plVar10[1] + 0x6f86ab2fe108ec83);
      local_78._20_2_ = *(short *)((longlong)plVar10 + 0x14) + 0x13e7;
      local_78.AllocationProtect = (int)plVar10[2] + 0xe681dd9e;
      lVar9 = FUN_1800fa0e0(&local_78);
      uVar7 = 0x2d6a381d;
      uVar15 = 0x9b3861dd;
      uVar16 = 0;
      while( true ) {
        while( true ) {
          while( true ) {
            while ((int)uVar15 < 0x425611fd) {
              if (uVar15 == 0x9b3861dd) {
                uVar7 = uVar7 ^ uVar7 >> 0x11;
                uVar16 = 0x2f05f306;
                goto LAB_18011bf43;
              }
              if (uVar15 == 0xb43d92db) {
                uVar7 = uVar7 ^ 0xc72b06e3;
                uVar16 = 0xc8f6cf39;
                uVar15 = 0x7ccb5de2;
              }
              else {
                if (uVar15 != 0xc21ee7d5) goto LAB_18011bf43;
                uVar7 = uVar7 + 0xe3413a79;
                uVar16 = 0xbc77235a;
                uVar15 = 0x7e69c48f;
              }
            }
            if (uVar15 != 0x7ccb5de2) break;
            uVar7 = uVar7 * 0x14906331;
            uVar16 = 0xbed5ba37;
            uVar15 = 0xc21ee7d5;
          }
          if (uVar15 != 0x7e69c48f) break;
          uVar7 = uVar7 + 0x46beceae;
          uVar16 = 0x3c3fd572;
          uVar15 = 0x425611fd;
        }
        if (uVar15 == 0x425611fd) break;
LAB_18011bf43:
        uVar15 = uVar15 ^ uVar16;
      }
      lVar14 = (longlong)&DAT_1804e29f0 - (ulonglong)(uVar7 & 0xffff);
      local_78.BaseAddress._4_4_ = (undefined4)((ulonglong)lVar14 >> 0x20);
      local_78.BaseAddress = (PVOID)CONCAT44(local_78.BaseAddress._4_4_,0x2d6a381d);
      plVar10 = (longlong *)FUN_180094f80(lVar14,0x2d6a381d);
      local_78.BaseAddress = (PVOID)(*plVar10 + 0x36c415ad75d60e06);
      local_78.AllocationBase = (PVOID)(plVar10[1] + -0x7b49263fc5b3e2cb);
      local_78._16_8_ = plVar10[2] + -0x46e3297e51afc919;
      local_78.RegionSize = CONCAT71(local_78.RegionSize._1_7_,(char)plVar10[3] + -0x79);
      lVar14 = FUN_1800fa0e0(&local_78);
      cVar18 = '\x02';
      if ((lVar9 != 0) && (lVar14 != 0)) {
        uVar7 = 0xa1f01ecc;
        uVar15 = 0x9b3861dd;
        uVar16 = 0;
        while( true ) {
          while( true ) {
            while( true ) {
              while ((int)uVar15 < 0x425611fd) {
                if (uVar15 == 0x9b3861dd) {
                  uVar7 = uVar7 * -0x7b000c8d;
                  uVar16 = 0x2f05f306;
                  goto LAB_18011c060;
                }
                if (uVar15 == 0xb43d92db) {
                  uVar7 = uVar7 * -0x17e03fd2;
                  uVar16 = 0xc8f6cf39;
                  uVar15 = 0x7ccb5de2;
                }
                else {
                  if (uVar15 != 0xc21ee7d5) goto LAB_18011c060;
                  uVar7 = ~uVar7;
                  uVar16 = 0xbc77235a;
                  uVar15 = 0x7e69c48f;
                }
              }
              if (uVar15 != 0x7ccb5de2) break;
              uVar7 = ~uVar7;
              uVar16 = 0xbed5ba37;
              uVar15 = 0xc21ee7d5;
            }
            if (uVar15 != 0x7e69c48f) break;
            uVar7 = uVar7 ^ (uVar7 << 7 | uVar7 >> 0x19);
            uVar16 = 0x3c3fd572;
            uVar15 = 0x425611fd;
          }
          if (uVar15 == 0x425611fd) break;
LAB_18011c060:
          uVar15 = uVar15 ^ uVar16;
        }
        lVar17 = (longlong)&DAT_1804e2a10 - (ulonglong)(uVar7 & 0xffff);
        local_78.BaseAddress._4_4_ = (undefined4)((ulonglong)lVar17 >> 0x20);
        local_78.BaseAddress = (PVOID)CONCAT44(local_78.BaseAddress._4_4_,0xa1f01ecc);
        plVar10 = (longlong *)FUN_1800a3170(lVar17,0xa1f01ecc);
        lVar17 = *plVar10;
        lVar4 = plVar10[1];
        uVar7 = 0;
        if (DAT_1805ea490 == 0) {
          FUN_1800658a0();
          plVar10 = (longlong *)thunk_FUN_180291940(0xc,1);
          if (plVar10 == (longlong *)0x0) {
            FUN_18045031b(1,0xc);
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          *plVar10 = lVar17 + -0x6d706def4393b572;
          *(int *)(plVar10 + 1) = (int)lVar4 + 0x7979ecb6;
          local_78.BaseAddress = &DAT_0000000c;
          local_78._16_8_ = 0xc;
          local_78.AllocationBase = plVar10;
          FUN_1804449c0(&local_78);
          pvVar6 = local_78.AllocationBase;
          pvVar5 = local_78.BaseAddress;
          *(undefined1 *)((longlong)local_78.AllocationBase + 0xc) = 0;
          local_80 = (undefined8 *)(*DAT_1805ea418)(lVar9,local_78.AllocationBase,0);
          if ((undefined1 *)pvVar5 != (undefined1 *)0x0) {
            thunk_FUN_1802919a0(pvVar6,pvVar5,1);
          }
        }
        else {
          local_80 = (undefined8 *)0x0;
        }
        uVar15 = 0xc73c0a3f;
        uVar16 = 0x9b3861dd;
        while( true ) {
          while( true ) {
            while( true ) {
              while ((int)uVar16 < 0x425611fd) {
                if (uVar16 == 0x9b3861dd) {
                  uVar15 = uVar15 ^ uVar15 >> 2;
                  uVar7 = 0x2f05f306;
                  goto LAB_18011c1d7;
                }
                if (uVar16 == 0xb43d92db) {
                  uVar15 = 0xe5e91e4b - uVar15;
                  uVar7 = 0xc8f6cf39;
                  uVar16 = 0x7ccb5de2;
                }
                else {
                  if (uVar16 != 0xc21ee7d5) goto LAB_18011c1d7;
                  uVar15 = uVar15 * 0x3f367688;
                  uVar7 = 0xbc77235a;
                  uVar16 = 0x7e69c48f;
                }
              }
              if (uVar16 != 0x7ccb5de2) break;
              uVar15 = uVar15 ^ 0xb2f890c1;
              uVar7 = 0xbed5ba37;
              uVar16 = 0xc21ee7d5;
            }
            if (uVar16 != 0x7e69c48f) break;
            uVar15 = uVar15 ^ 0x94cc221;
            uVar7 = 0x3c3fd572;
            uVar16 = 0x425611fd;
          }
          if (uVar16 == 0x425611fd) break;
LAB_18011c1d7:
          uVar16 = uVar16 ^ uVar7;
        }
        lVar17 = (longlong)&DAT_1804e29e0 - (ulonglong)(uVar15 & 0xffff);
        local_78.BaseAddress._4_4_ = (undefined4)((ulonglong)lVar17 >> 0x20);
        local_78.BaseAddress = (PVOID)CONCAT44(local_78.BaseAddress._4_4_,0xc73c0a3f);
        plVar10 = (longlong *)FUN_180094a40(lVar17,0xc73c0a3f);
        lVar17 = *plVar10;
        lVar4 = plVar10[1];
        sVar2 = *(short *)((longlong)plVar10 + 0xc);
        uVar7 = 0;
        if (DAT_1805ea490 == 0) {
          FUN_1800658a0();
          plVar10 = (longlong *)thunk_FUN_180291940(0xe,1);
          if (plVar10 == (longlong *)0x0) {
            FUN_18045031b(1,0xe);
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          *plVar10 = lVar17 + -0x19b84a8eb6254f49;
          *(int *)(plVar10 + 1) = (int)lVar4 + 0xdda3da5;
          *(short *)((longlong)plVar10 + 0xc) = sVar2 + -0x552e;
          local_78.BaseAddress = (PVOID)0xe;
          local_78._16_8_ = 0xe;
          local_78.AllocationBase = plVar10;
          FUN_1804449c0(&local_78);
          pvVar6 = local_78.AllocationBase;
          pvVar5 = local_78.BaseAddress;
          *(undefined1 *)((longlong)local_78.AllocationBase + 0xe) = 0;
          puVar11 = (undefined8 *)(*DAT_1805ea418)(lVar9,local_78.AllocationBase,0);
          if (pvVar5 != (PVOID)0x0) {
            thunk_FUN_1802919a0(pvVar6,pvVar5,1);
          }
        }
        else {
          puVar11 = (undefined8 *)0x0;
        }
        uVar15 = 0x4db70a83;
        uVar16 = 0x9b3861dd;
        while( true ) {
          while( true ) {
            while( true ) {
              while ((int)uVar16 < 0x425611fd) {
                if (uVar16 == 0x9b3861dd) {
                  uVar15 = -uVar15;
                  uVar7 = 0x2f05f306;
                  goto LAB_18011c350;
                }
                if (uVar16 == 0xb43d92db) {
                  uVar15 = uVar15 ^ 0xa99682d7;
                  uVar7 = 0xc8f6cf39;
                  uVar16 = 0x7ccb5de2;
                }
                else {
                  if (uVar16 != 0xc21ee7d5) goto LAB_18011c350;
                  uVar15 = uVar15 ^ 0x7cb9d640;
                  uVar7 = 0xbc77235a;
                  uVar16 = 0x7e69c48f;
                }
              }
              if (uVar16 != 0x7ccb5de2) break;
              uVar15 = uVar15 * -0x1356ce30;
              uVar7 = 0xbed5ba37;
              uVar16 = 0xc21ee7d5;
            }
            if (uVar16 != 0x7e69c48f) break;
            uVar15 = -uVar15;
            uVar7 = 0x3c3fd572;
            uVar16 = 0x425611fd;
          }
          if (uVar16 == 0x425611fd) break;
LAB_18011c350:
          uVar16 = uVar16 ^ uVar7;
        }
        lVar9 = (longlong)&DAT_1804e2a20 - (ulonglong)(uVar15 & 0xffff);
        local_78.BaseAddress._4_4_ = (undefined4)((ulonglong)lVar9 >> 0x20);
        local_78.BaseAddress = (PVOID)CONCAT44(local_78.BaseAddress._4_4_,0x4db70a83);
        plVar10 = (longlong *)FUN_1800a5af0(lVar9,0x4db70a83);
        lVar9 = *plVar10;
        lVar17 = plVar10[1];
        cVar1 = *(char *)((longlong)plVar10 + 0xc);
        if (DAT_1805ea490 == 0) {
          FUN_1800658a0();
          plVar10 = (longlong *)thunk_FUN_180291940(0xd,1);
          if (plVar10 == (longlong *)0x0) {
            FUN_18045031b(1,0xd);
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          *plVar10 = lVar9 + 0x660ce98df986dd3d;
          *(int *)(plVar10 + 1) = (int)lVar17 + -0x6364498d;
          *(char *)((longlong)plVar10 + 0xc) = cVar1 + 'y';
          local_78.BaseAddress = &DAT_0000000d;
          local_78._16_8_ = 0xd;
          local_78.AllocationBase = plVar10;
          FUN_1804449c0(&local_78);
          pvVar6 = local_78.AllocationBase;
          pvVar5 = local_78.BaseAddress;
          *(undefined1 *)((longlong)local_78.AllocationBase + 0xd) = 0;
          puVar12 = (undefined8 *)(*DAT_1805ea418)(lVar14,local_78.AllocationBase,0);
          if ((undefined1 *)pvVar5 != (undefined1 *)0x0) {
            thunk_FUN_1802919a0(pvVar6,pvVar5,1);
          }
        }
        else {
          puVar12 = (undefined8 *)0x0;
        }
        if (((local_80 != (undefined8 *)0x0) && (puVar11 != (undefined8 *)0x0)) &&
           (puVar12 != (undefined8 *)0x0)) {
          DAT_180607ba0 = (code *)*local_80;
          DAT_180607bb0 = (code *)*puVar11;
          DAT_180607bc8 = (code *)*puVar12;
          cVar18 = '\x01';
          DAT_180607b98 = lVar14;
          DAT_180607ba8 = local_80;
          DAT_180607bb8 = puVar11;
          DAT_180607bd0 = puVar12;
        }
      }
    }
    DAT_180607bc0 = cVar18;
    uVar8 = DAT_180607bd8;
    if (DAT_180607bc0 == '\x01') {
      lVar9 = (*DAT_180607ba0)(DAT_180607ba8);
      uVar8 = 0;
      if ((lVar9 != 0) &&
         (lpAddress = (LPCVOID)(*DAT_180607bb0)(lVar9,DAT_180607bb8),
         ((ulonglong)lpAddress & 7) == 0 && (longlong)lpAddress - 0x10000U >> 0x10 < 0x7fffffff)) {
        local_78.State = 0;
        local_78.Protect = 0;
        local_78.Type = 0;
        local_78._44_4_ = 0;
        local_78.AllocationProtect = 0;
        local_78._20_4_ = 0;
        local_78.RegionSize = 0;
        local_78.BaseAddress = (PVOID)0x0;
        local_78.AllocationBase = (PVOID)0x0;
        SVar13 = VirtualQuery(lpAddress,&local_78,0x30);
        lVar9 = DAT_180607b98;
        if (((SVar13 != 0) &&
            ((local_78.State == 0x1000 && ((local_78._32_8_ & 0x10100000000) == 0)))) &&
           ((longlong)lpAddress + 0x100U <= local_78.RegionSize + (longlong)local_78.BaseAddress)) {
          if (lpAddress == (LPCVOID)0x0) {
            lVar14 = 0;
          }
          else {
            lVar14 = 0;
            if (DAT_1805ea490 == 0) {
              lVar14 = (*DAT_1805ea430)(lpAddress);
            }
          }
          uVar8 = 0;
          if (lVar14 == lVar9) {
            uVar8 = (*DAT_180607bc8)(lpAddress,DAT_180607bd0);
          }
        }
      }
    }
  }
  DAT_180607bd8 = uVar8;
  return;
}




/* ===== 18010b840  FUN_18010b840 ===== */

void FUN_18010b840(undefined8 *param_1,undefined *param_2,undefined *param_3,longlong param_4,
                  undefined8 param_5,undefined4 param_6,char param_7)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  void *_Src;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined *puVar10;
  undefined8 in_stack_fffffffffffffec8;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 in_stack_fffffffffffffed8;
  undefined4 uVar14;
  longlong local_120;
  undefined8 local_118;
  int local_110;
  longlong local_108;
  undefined8 local_100;
  longlong local_f0;
  undefined8 local_e8;
  longlong local_d8;
  undefined8 local_d0;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  void *local_a0;
  undefined8 local_98;
  longlong local_90;
  ulonglong local_88;
  longlong local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  undefined4 local_58;
  uint local_50;
  uint local_4c;
  undefined8 local_48;
  
  uVar14 = (undefined4)((ulonglong)in_stack_fffffffffffffed8 >> 0x20);
  uVar11 = (uint)((ulonglong)in_stack_fffffffffffffec8 >> 0x20);
  local_48 = 0xfffffffffffffffe;
  local_70 = &DAT_1804e1de3;
  uStack_68 = &DAT_1804e1dea;
  local_60 = local_60 & 0xffffffffffff0000;
  local_58 = 1;
  FUN_1800226a0(&local_d8,&local_70);
  lVar5 = WinHttpOpen(local_d0,4,0,0,(ulonglong)uVar11 << 0x20);
  if (lVar5 == 0) {
    *param_1 = 0x8000000000000000;
    goto joined_r0x00018010bc49;
  }
  local_80 = lVar5;
  WinHttpSetTimeouts(lVar5,4000,4000,4000,8000);
  uStack_68 = param_2 + 0x21;
  local_60 = local_60 & 0xffffffffffff0000;
  local_58 = 1;
  local_70 = param_2;
  FUN_1800226a0(&local_c0,&local_70);
  lVar5 = local_80;
  lVar6 = WinHttpConnect(local_80,local_b8,0x1bb,0);
  if (lVar6 == 0) {
    *param_1 = 0x8000000000000000;
  }
  else {
    local_70 = &DAT_1804e1dea;
    uStack_68 = &DAT_1804e1dee;
    local_60 = local_60 & 0xffffffffffff0000;
    local_58 = 1;
    local_78 = lVar6;
    FUN_1800226a0(&local_f0,&local_70);
    uStack_68 = param_3 + param_4;
    local_60 = local_60 & 0xffffffffffff0000;
    local_58 = 1;
    local_70 = param_3;
    FUN_1800226a0(&local_108,&local_70);
    lVar6 = local_78;
    uVar3 = local_e8;
    uVar2 = local_100;
    uVar12 = 0;
    uVar13 = 0;
    lVar5 = WinHttpOpenRequest(local_78,local_e8,local_100,0,0,0,CONCAT44(uVar14,0x800000));
    if (lVar5 == 0) {
      *param_1 = 0x8000000000000000;
      lVar5 = local_80;
    }
    else {
      local_a8 = uVar2;
      local_70 = &DAT_1804e1dee;
      uStack_68 = &DAT_1804e1e0e;
      local_60 = local_60 & 0xffffffffffff0000;
      local_58 = 1;
      local_90 = lVar5;
      FUN_1800226a0(&local_120,&local_70);
      lVar8 = local_90;
      iVar4 = WinHttpSendRequest(local_90,local_118,local_110 + -1,param_5,CONCAT44(uVar12,param_6),
                                 CONCAT44(uVar13,param_6),0);
      if (iVar4 == 0) {
        *param_1 = 0x8000000000000000;
        lVar6 = local_78;
        lVar5 = local_80;
      }
      else {
        iVar4 = WinHttpReceiveResponse(lVar8,0);
        lVar5 = local_80;
        if (iVar4 == 0) {
LAB_18010bca2:
          *param_1 = 0x8000000000000000;
          lVar6 = local_78;
        }
        else {
          if (param_7 != '\0') {
            local_50 = 0;
            local_70 = (undefined *)CONCAT44(local_70._4_4_,4);
            iVar4 = WinHttpQueryHeaders(lVar8,0x20000013,0,&local_50,&local_70,0);
            if ((iVar4 == 0) || (99 < local_50 - 200)) goto LAB_18010bca2;
          }
          local_98 = local_118;
          local_70 = (undefined *)0x0;
          uStack_68 = (undefined *)0x1;
          local_60 = 0;
          local_4c = 0;
          iVar4 = WinHttpQueryDataAvailable(lVar8,&local_4c);
          if (iVar4 != 0) {
            puVar10 = (undefined *)0x1;
            uVar7 = 0;
            do {
              uVar9 = (ulonglong)local_4c;
              if (uVar9 == 0) {
LAB_18010bd91:
                param_1[2] = local_60;
                *(undefined4 *)param_1 = (undefined4)local_70;
                *(undefined4 *)((longlong)param_1 + 4) = local_70._4_4_;
                *(undefined4 *)(param_1 + 1) = (undefined4)uStack_68;
                *(undefined4 *)((longlong)param_1 + 0xc) = uStack_68._4_4_;
                if (local_120 != 0) {
                  thunk_FUN_1802919a0(local_98,local_120 * 2,2);
                }
                WinHttpCloseHandle(lVar8);
                lVar6 = local_78;
                lVar5 = local_80;
                if (local_108 != 0) {
                  thunk_FUN_1802919a0(local_a8,local_108 * 2,2);
                }
                if (local_f0 != 0) {
                  thunk_FUN_1802919a0(uVar3,local_f0 * 2,2);
                }
                WinHttpCloseHandle(lVar6);
                if (local_c0 != 0) {
                  thunk_FUN_1802919a0(local_b8,local_c0 * 2,2);
                }
                goto LAB_18010bd33;
              }
              FUN_1800658a0();
              local_88 = uVar9;
              _Src = (void *)thunk_FUN_180291be0(uVar9,1);
              if (_Src == (void *)0x0) {
                FUN_18045031b(1,local_88);
                    /* WARNING: Does not return */
                pcVar1 = (code *)invalidInstructionException();
                (*pcVar1)();
              }
              local_50 = 0;
              iVar4 = WinHttpReadData(lVar8,_Src,local_4c,&local_50);
              if (iVar4 == 0) {
                *param_1 = 0x8000000000000000;
                thunk_FUN_1802919a0(_Src,local_88,1);
                goto LAB_18010be4c;
              }
              if (local_50 == 0) {
LAB_18010bd7b:
                thunk_FUN_1802919a0(_Src,local_88,1);
                lVar8 = local_90;
                goto LAB_18010bd91;
              }
              uVar9 = (ulonglong)local_50;
              if ((uint)local_88 < local_50) {
                uVar9 = local_88 & 0xffffffff;
              }
              if ((longlong)local_70 - uVar7 < uVar9) {
                local_a0 = _Src;
                FUN_180444e70(&local_70,uVar7,uVar9,1,1);
                uVar7 = local_60;
                _Src = local_a0;
                puVar10 = uStack_68;
              }
              memcpy(puVar10 + uVar7,_Src,uVar9);
              uVar7 = uVar7 + uVar9;
              local_60 = uVar7;
              if (30000000 < uVar7) goto LAB_18010bd7b;
              thunk_FUN_1802919a0(_Src,local_88,1);
              lVar8 = local_90;
              local_4c = 0;
              iVar4 = WinHttpQueryDataAvailable(local_90,&local_4c);
            } while (iVar4 != 0);
          }
          *param_1 = 0x8000000000000000;
LAB_18010be4c:
          lVar6 = local_78;
          lVar5 = local_80;
          local_118 = local_98;
          if (local_70 != (undefined *)0x0) {
            thunk_FUN_1802919a0(uStack_68,local_70,1);
          }
        }
      }
      if (local_120 != 0) {
        thunk_FUN_1802919a0(local_118,local_120 * 2,2);
      }
      WinHttpCloseHandle(lVar8);
    }
    if (local_108 != 0) {
      thunk_FUN_1802919a0(local_100,local_108 * 2,2);
    }
    if (local_f0 != 0) {
      thunk_FUN_1802919a0(local_e8,local_f0 * 2,2);
    }
    WinHttpCloseHandle(lVar6);
  }
  if (local_c0 != 0) {
    thunk_FUN_1802919a0(local_b8,local_c0 * 2,2);
  }
LAB_18010bd33:
  WinHttpCloseHandle(lVar5);
joined_r0x00018010bc49:
  if (local_d8 != 0) {
    thunk_FUN_1802919a0(local_d0,local_d8 * 2,2);
  }
  return;
}




/* ===== 18010c0c0  FUN_18010c0c0 ===== */

void FUN_18010c0c0(undefined8 *param_1,undefined *param_2,longlong param_3,undefined *param_4,
                  longlong param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  void *_Src;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined *puVar11;
  undefined8 in_stack_fffffffffffffed8;
  uint uVar12;
  undefined8 in_stack_fffffffffffffee8;
  undefined4 uVar13;
  longlong local_108;
  undefined8 local_100;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong local_d0;
  undefined8 local_c8;
  longlong local_b8;
  undefined8 local_b0;
  void *local_a0;
  undefined8 local_98;
  longlong local_90;
  longlong local_88;
  ulonglong local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  undefined4 local_58;
  uint local_50;
  uint local_4c;
  undefined8 local_48;
  
  uVar13 = (undefined4)((ulonglong)in_stack_fffffffffffffee8 >> 0x20);
  uVar12 = (uint)((ulonglong)in_stack_fffffffffffffed8 >> 0x20);
  local_48 = 0xfffffffffffffffe;
  local_70 = &DAT_1804e1e0e;
  uStack_68 = &DAT_1804e1e37;
  local_60 = local_60 & 0xffffffffffff0000;
  local_58 = 1;
  FUN_1800226a0(&local_b8,&local_70);
  uVar4 = local_b0;
  lVar6 = WinHttpOpen(local_b0,4,0,0,(ulonglong)uVar12 << 0x20);
  if (lVar6 == 0) {
    *param_1 = 0x8000000000000000;
  }
  else {
    local_88 = lVar6;
    WinHttpSetTimeouts(lVar6,4000,4000,4000,15000);
    uStack_68 = param_2 + param_3;
    local_60 = local_60 & 0xffffffffffff0000;
    local_58 = 1;
    local_70 = param_2;
    FUN_1800226a0(&local_d0,&local_70);
    lVar6 = local_88;
    uVar3 = local_c8;
    lVar7 = WinHttpConnect(local_88,local_c8,0x1bb,0);
    if (lVar7 == 0) {
      *param_1 = 0x8000000000000000;
    }
    else {
      local_70 = &DAT_1804e1e37;
      uStack_68 = &DAT_1804e1e3a;
      local_60 = local_60 & 0xffffffffffff0000;
      local_58 = 1;
      local_90 = lVar7;
      FUN_1800226a0(&local_e8,&local_70);
      uStack_68 = param_4 + param_5;
      local_60 = local_60 & 0xffffffffffff0000;
      local_58 = 1;
      local_70 = param_4;
      FUN_1800226a0(&local_108,&local_70);
      lVar7 = local_90;
      uVar2 = local_e0;
      uVar9 = 0;
      uVar10 = 0;
      local_98 = local_100;
      lVar8 = WinHttpOpenRequest(local_90,local_e0,local_100,0,0,0,CONCAT44(uVar13,0x800000));
      if (lVar8 == 0) {
        *param_1 = 0x8000000000000000;
        lVar6 = local_88;
      }
      else {
        local_f0 = uVar2;
        iVar5 = WinHttpSendRequest(lVar8,0,0,0,uVar9 & 0xffffffff00000000,
                                   uVar10 & 0xffffffff00000000,0);
        lVar6 = local_88;
        if ((iVar5 == 0) || (iVar5 = WinHttpReceiveResponse(lVar8,0), iVar5 == 0)) {
          *param_1 = 0x8000000000000000;
        }
        else {
          local_50 = 0;
          local_70 = (undefined *)CONCAT44(local_70._4_4_,4);
          local_78 = lVar8;
          iVar5 = WinHttpQueryHeaders(lVar8,0x20000013,0,&local_50,&local_70,0);
          if ((iVar5 == 0) || (99 < local_50 - 200)) {
            *param_1 = 0x8000000000000000;
            lVar8 = local_78;
          }
          else {
            local_70 = (undefined *)0x0;
            uStack_68 = (undefined *)0x1;
            local_60 = 0;
            local_4c = 0;
            iVar5 = WinHttpQueryDataAvailable(local_78,&local_4c);
            if (iVar5 != 0) {
              puVar11 = (undefined *)0x1;
              uVar9 = 0;
              do {
                uVar10 = (ulonglong)local_4c;
                if (uVar10 == 0) {
LAB_18010c4f6:
                  param_1[2] = local_60;
                  *(undefined4 *)param_1 = (undefined4)local_70;
                  *(undefined4 *)((longlong)param_1 + 4) = local_70._4_4_;
                  *(undefined4 *)(param_1 + 1) = (undefined4)uStack_68;
                  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_68._4_4_;
                  WinHttpCloseHandle(local_78);
                  if (local_108 != 0) {
                    thunk_FUN_1802919a0(local_98,local_108 * 2,2);
                  }
                  lVar6 = local_88;
                  if (local_e8 != 0) {
                    thunk_FUN_1802919a0(local_f0,local_e8 * 2,2);
                  }
                  WinHttpCloseHandle(lVar7);
                  if (local_d0 != 0) {
                    thunk_FUN_1802919a0(uVar3,local_d0 * 2,2);
                  }
                  WinHttpCloseHandle(lVar6);
                  local_b0 = uVar4;
                  goto joined_r0x00018010c57c;
                }
                FUN_1800658a0();
                local_80 = uVar10;
                _Src = (void *)thunk_FUN_180291be0(uVar10,1);
                if (_Src == (void *)0x0) {
                  FUN_18045031b(1,local_80);
                    /* WARNING: Does not return */
                  pcVar1 = (code *)invalidInstructionException();
                  (*pcVar1)();
                }
                local_50 = 0;
                iVar5 = WinHttpReadData(local_78,_Src,local_4c,&local_50);
                if (iVar5 == 0) {
                  *param_1 = 0x8000000000000000;
                  thunk_FUN_1802919a0(_Src,local_80,1);
                  goto LAB_18010c5a6;
                }
                if (local_50 == 0) {
LAB_18010c4e0:
                  thunk_FUN_1802919a0(_Src,local_80,1);
                  lVar7 = local_90;
                  goto LAB_18010c4f6;
                }
                uVar10 = (ulonglong)local_50;
                if ((uint)local_80 < local_50) {
                  uVar10 = local_80 & 0xffffffff;
                }
                if ((longlong)local_70 - uVar9 < uVar10) {
                  local_a0 = _Src;
                  FUN_180444e70(&local_70,uVar9,uVar10,1,1);
                  uVar9 = local_60;
                  _Src = local_a0;
                  puVar11 = uStack_68;
                }
                memcpy(puVar11 + uVar9,_Src,uVar10);
                uVar9 = uVar9 + uVar10;
                local_60 = uVar9;
                if (30000000 < uVar9) goto LAB_18010c4e0;
                thunk_FUN_1802919a0(_Src,local_80,1);
                local_4c = 0;
                iVar5 = WinHttpQueryDataAvailable(local_78,&local_4c);
                lVar7 = local_90;
              } while (iVar5 != 0);
            }
            *param_1 = 0x8000000000000000;
LAB_18010c5a6:
            lVar6 = local_88;
            lVar8 = local_78;
            if (local_70 != (undefined *)0x0) {
              thunk_FUN_1802919a0(uStack_68,local_70,1);
              lVar8 = local_78;
            }
          }
        }
        WinHttpCloseHandle(lVar8);
      }
      if (local_108 != 0) {
        thunk_FUN_1802919a0(local_98,local_108 * 2,2);
      }
      if (local_e8 != 0) {
        thunk_FUN_1802919a0(local_e0,local_e8 * 2,2);
      }
      WinHttpCloseHandle(lVar7);
    }
    if (local_d0 != 0) {
      thunk_FUN_1802919a0(local_c8,local_d0 * 2,2);
    }
    WinHttpCloseHandle(lVar6);
  }
joined_r0x00018010c57c:
  if (local_b8 != 0) {
    thunk_FUN_1802919a0(local_b0,local_b8 * 2,2);
  }
  return;
}




/* ===== 180111650  FUN_180111650 ===== */

/* WARNING: Removing unreachable block (ram,0x000180111b7a) */
/* WARNING: Removing unreachable block (ram,0x000180111b80) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong ******* FUN_180111650(undefined8 *param_1,code *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  longlong *******ppppppplVar5;
  longlong *******ppppppplVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  longlong *******ppppppplVar10;
  longlong *******ppppppplVar11;
  undefined4 uVar12;
  longlong unaff_GS_OFFSET;
  bool bVar13;
  longlong *******ppppppplStack_118;
  longlong *******ppppppplStack_110;
  longlong *******ppppppplStack_108;
  longlong *******ppppppplStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  longlong *******ppppppplStack_c0;
  undefined4 uStack_b8;
  longlong *******ppppppplStack_b0;
  longlong *******ppppppplStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  longlong *******ppppppplStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong *******ppppppplStack_68;
  longlong *******ppppppplStack_60;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined8 uStack_50;
  
  uStack_50 = 0xfffffffffffffffe;
  if (DAT_180607b44 != '\0') {
    return (longlong *******)0x0;
  }
  if (DAT_180607b43 != '\0') {
    ppppppplVar5 = (longlong *******)FUN_1802654d0(param_2);
    return ppppppplVar5;
  }
  ppppppplVar5 = (longlong *******)*param_1;
  LOCK();
  bVar13 = DAT_180607b60 == '\0';
  if (bVar13) {
    DAT_180607b60 = '\x01';
  }
  UNLOCK();
  if (!bVar13) {
    FUN_18044ee10(&DAT_180607b60);
  }
  puVar2 = PTR_DAT_1806073e0;
  lVar7 = DAT_180607b68;
  if ((*(ulonglong *)PTR_DAT_1806073e0 & 0x7fffffffffffffff) == 0) {
LAB_18011171c:
    uVar12 = DAT_180607b7c;
    uVar9 = DAT_180607b78;
    ppppppplVar10 = DAT_180607b70;
    DAT_180607b68 = 0;
    if (((*(ulonglong *)puVar2 & 0x7fffffffffffffff) != 0) &&
       (cVar3 = FUN_18044f9d0(), cVar3 == '\0')) {
      DAT_180607b61 = 1;
    }
  }
  else {
    cVar3 = FUN_18044f9d0();
    lVar7 = DAT_180607b68;
    DAT_180607b68 = 0;
    ppppppplVar10 = DAT_180607b70;
    uVar12 = DAT_180607b7c;
    uVar9 = DAT_180607b78;
    if (cVar3 != '\0') goto LAB_18011171c;
  }
  cVar3 = DAT_180607b60;
  LOCK();
  DAT_180607b60 = '\0';
  UNLOCK();
  if (cVar3 == '\x02') {
    WakeByAddressSingle(&DAT_180607b60);
  }
  if (lVar7 == 1) {
    DAT_180607b80 = 1;
    lVar7 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8);
    ppppppplVar6 = (longlong *******)(lVar7 + 0x300);
    if (*(char *)(lVar7 + 0x328) != '\x01') {
      if (*(char *)(lVar7 + 0x328) == '\x02') {
        FUN_18044f880(&PTR_s__rustc_ac68faa20c58cbccd01ee7208_180456ba8);
        goto LAB_1801121ac;
      }
      param_2 = FUN_1800283b0;
      FUN_18029c090(ppppppplVar6);
      *(undefined1 *)(lVar7 + 0x328) = 1;
    }
    uStack_f8 = (longlong *******)0x0;
    ppppppplStack_90 = (longlong *******)*ppppppplVar6;
    if (ppppppplStack_90 != (longlong *******)0x0) {
      FUN_180450450(&PTR_s_src_core_stealth_surface_rs_1804e2528);
      goto LAB_1801121ac;
    }
    *ppppppplVar6 = (longlong ******)0xffffffffffffffff;
    ppppppplStack_68 = (longlong *******)(lVar7 + 0x308);
    ppppppplStack_60 = ppppppplVar6;
    FUN_180062ca0();
    *(undefined4 *)(ppppppplStack_68 + 2) = (undefined4)uStack_e8;
    *(undefined4 *)((longlong)ppppppplStack_68 + 0x14) = uStack_e8._4_4_;
    *(undefined4 *)(ppppppplStack_68 + 3) = uStack_e0;
    *(undefined4 *)((longlong)ppppppplStack_68 + 0x1c) = uStack_dc;
    *(undefined4 *)ppppppplStack_68 = (undefined4)uStack_f8;
    *(undefined4 *)((longlong)ppppppplStack_68 + 4) = uStack_f8._4_4_;
    *(undefined4 *)(ppppppplStack_68 + 1) = (undefined4)uStack_f0;
    *(undefined4 *)((longlong)ppppppplStack_68 + 0xc) = uStack_f0._4_4_;
    *ppppppplStack_60 = (longlong ******)((longlong)*ppppppplStack_60 + 1);
    DAT_180607b50 = 0;
    if (ppppppplVar10 != (longlong *******)0x0) {
      uStack_f8 = (longlong *******)0x0;
      param_2 = (code *)&DAT_180454bc8;
      (*(code *)**ppppppplVar5)(ppppppplVar5,&DAT_180454bc8,&uStack_f8);
      if (uStack_f8 != (longlong *******)0x0) {
        ppppppplStack_100 = uStack_f8;
        param_2 = (code *)&ppppppplStack_100;
        FUN_1802645a0(&uStack_f8);
        ppppppplVar6 = uStack_f0;
        ppppppplVar11 = (longlong *******)0x0;
        if ((byte)uStack_f8 == 0) {
          ppppppplVar11 = uStack_f0;
        }
        if ((uStack_f0 != (longlong *******)0x0 & (byte)uStack_f8) == 1) {
          FUN_1802654f0(&uStack_f0);
        }
        if (ppppppplVar11 != (longlong *******)0x0) {
          uStack_f8 = (longlong *******)0x0;
          param_2 = (code *)&DAT_18051b328;
          ppppppplStack_b0 = ppppppplVar11;
          iVar4 = (*(code *)(*ppppppplVar6)[6])(ppppppplVar6,&DAT_18051b328,&uStack_f8);
          if (iVar4 < 0) {
            uStack_80 = (longlong *******)FUN_180265500(iVar4);
            uStack_78 = SUB84(param_2,0);
            uStack_88 = (longlong *******)0x1;
            if (uStack_80 != (longlong *******)0x0) {
              FUN_1802654f0(&uStack_80);
            }
          }
          else if (uStack_f8 != (longlong *******)0x0) {
            ppppppplStack_110 = uStack_f8;
            FUN_1802654f0(&ppppppplStack_b0);
            uStack_f8 = (longlong *******)CONCAT44(uVar12,uVar9);
            uStack_f0 = _DAT_180452e00;
            uStack_e8 = _UNK_180452e08;
            uStack_e0 = _DAT_180452e10;
            uStack_dc = _UNK_180452e14;
            uStack_d8 = _UNK_180452e18;
            uStack_d4 = _UNK_180452e1c;
            uStack_d0 = 1;
            ppppppplStack_c0 = (longlong *******)0x0;
            ppppppplStack_b0 = (longlong *******)0x1;
            uStack_88 = (longlong *******)0x1;
            uStack_80 = (longlong *******)0x0;
            param_2 = (code *)ppppppplVar5;
            ppppppplStack_a8 = ppppppplVar5;
            iVar4 = (*(code *)(*ppppppplStack_110)[0x18])
                              (ppppppplStack_110,ppppppplVar5,&uStack_f8,0,&ppppppplStack_c0);
            if (iVar4 < 0) {
              ppppppplVar6 = (longlong *******)FUN_180265500(iVar4);
              bVar13 = true;
              ppppppplStack_90 = (longlong *******)param_2;
              if ((byte)uStack_88 == '\0') {
                FUN_1802654f0(&uStack_80);
              }
            }
            else {
              ppppppplStack_90 = (longlong *******)0x0;
              bVar13 = ppppppplStack_c0 == (longlong *******)0x0;
              ppppppplVar6 = ppppppplStack_c0;
            }
            if ((char)ppppppplStack_b0 == '\0') {
              FUN_1802654f0(&ppppppplStack_a8);
            }
            cVar3 = DAT_180607b58;
            if (bVar13) {
              uStack_b8 = SUB84(ppppppplStack_90,0);
              LOCK();
              DAT_180607b58 = '\x01';
              UNLOCK();
              ppppppplStack_c0 = ppppppplVar6;
              if (cVar3 == '\0') {
                ppppppplStack_b0 = (longlong *******)&ppppppplStack_c0;
                ppppppplStack_a8 = (longlong *******)&LAB_180265900;
                FUN_1802aab50(&uStack_88,&DAT_1804e2580,&ppppppplStack_b0);
                ppppppplStack_60 = uStack_88;
                ppppppplStack_68 = uStack_80;
                FUN_1800e8390(2,uStack_80,CONCAT44(uStack_74,uStack_78));
                param_2 = (code *)ppppppplStack_60;
                if (ppppppplStack_60 != (longlong *******)0x0) {
                  thunk_FUN_1802919a0(ppppppplStack_68,ppppppplStack_60,1);
                }
              }
              if (ppppppplStack_c0 != (longlong *******)0x0) {
                FUN_1802654f0(&ppppppplStack_c0);
              }
            }
            else {
              ppppppplStack_c0 = (longlong *******)0x0;
              ppppppplStack_b0 = (longlong *******)0x1;
              ppppppplStack_a8 = ppppppplStack_100;
              param_2 = (code *)&DAT_18051b318;
              ppppppplStack_118 = ppppppplVar6;
              iVar4 = DCompositionCreateDevice(ppppppplStack_100,&DAT_18051b318,&ppppppplStack_c0);
              if (iVar4 < 0) {
                uStack_80 = (longlong *******)FUN_180265500(iVar4);
                uStack_78 = SUB84(param_2,0);
                uStack_88 = (longlong *******)0x1;
                if ((char)ppppppplStack_b0 == '\0') {
                  FUN_1802654f0(&ppppppplStack_a8);
                  ppppppplVar6 = uStack_80;
                  goto joined_r0x000180111d00;
                }
LAB_180111bab:
                ppppppplVar6 = uStack_80;
                ppppppplVar11 = (longlong *******)0x0;
                if (uStack_80 != (longlong *******)0x0) {
                  FUN_1802654f0(&uStack_80);
                }
              }
              else {
                if (ppppppplStack_c0 == (longlong *******)0x0) {
                  uStack_78 = 0;
                }
                uStack_88 = (longlong *******)(ulonglong)(ppppppplStack_c0 == (longlong *******)0x0)
                ;
                ppppppplVar6 = ppppppplStack_c0;
joined_r0x000180111d00:
                ppppppplVar11 = ppppppplVar6;
                uStack_80 = ppppppplVar6;
                if (uStack_88 != (longlong *******)0x0) goto LAB_180111bab;
              }
              if (ppppppplVar11 != (longlong *******)0x0) {
                ppppppplStack_b0 = (longlong *******)0x0;
                ppppppplStack_108 = ppppppplVar11;
                iVar4 = (*(code *)(*ppppppplVar6)[6])
                                  (ppppppplVar6,ppppppplVar10,1,&ppppppplStack_b0);
                if (iVar4 < 0) {
                  uStack_80 = (longlong *******)FUN_180265500(iVar4);
                  uStack_78 = SUB84(ppppppplVar10,0);
                  uStack_88 = (longlong *******)0x1;
                  if (uStack_80 != (longlong *******)0x0) {
                    FUN_1802654f0(&uStack_80);
                  }
                }
                else if (ppppppplStack_b0 != (longlong *******)0x0) {
                  ppppppplStack_c0 = ppppppplStack_b0;
                  param_2 = (code *)&ppppppplStack_108;
                  FUN_1802645a0(&uStack_88);
                  ppppppplVar10 = uStack_80;
                  ppppppplVar6 = (longlong *******)0x0;
                  if ((byte)uStack_88 == 0) {
                    ppppppplVar6 = uStack_80;
                  }
                  if ((uStack_80 != (longlong *******)0x0 & (byte)uStack_88) == 1) {
                    FUN_1802654f0(&uStack_80);
                  }
                  if (ppppppplVar6 != (longlong *******)0x0) {
                    param_2 = (code *)ppppppplStack_118;
                    ppppppplStack_b0 = ppppppplVar6;
                    iVar4 = (*(code *)(*ppppppplVar10)[0xf])(ppppppplVar10);
                    if (iVar4 < 0) {
                      uStack_80 = (longlong *******)FUN_180265500(iVar4);
                      uStack_78 = SUB84(param_2,0);
                      uStack_88 = (longlong *******)0x1;
                      if (uStack_80 != (longlong *******)0x0) {
                        FUN_1802654f0(&uStack_80);
                      }
                    }
                    else {
                      param_2 = (code *)ppppppplStack_c0;
                      FUN_1801e3410(&uStack_88,ppppppplStack_c0,ppppppplStack_b0);
                      if ((int)uStack_88 == 1) {
                        if (uStack_80 != (longlong *******)0x0) {
                          FUN_1802654f0(&uStack_80);
                        }
                      }
                      else {
                        param_2 = (code *)&ppppppplStack_108;
                        FUN_180264610(&uStack_88);
                        ppppppplVar11 = ppppppplStack_b0;
                        ppppppplVar6 = ppppppplStack_c0;
                        ppppppplVar10 = ppppppplStack_108;
                        if ((int)uStack_88 != 1) {
                          ppppppplStack_90 = ppppppplStack_118;
                          FUN_1802654f0(&ppppppplStack_110);
                          FUN_1802654f0(&ppppppplStack_100);
                          ppppppplStack_b0 = ppppppplVar10;
                          ppppppplStack_a8 = ppppppplVar6;
                          uStack_a0 = ppppppplVar11;
                          uStack_98 = ppppppplStack_90;
                          if (*(code *)(ppppppplStack_60 + 5) != (code)0x1) {
                            if (*(code *)(ppppppplStack_60 + 5) == (code)0x2) {
                              FUN_1802654f0(&ppppppplStack_b0);
                              FUN_1802654f0(&ppppppplStack_a8);
                              FUN_1802654f0(&uStack_a0);
                              FUN_1802654f0(&uStack_98);
                              FUN_18044f880(&PTR_s__rustc_ac68faa20c58cbccd01ee7208_180456ba8);
                              goto LAB_1801121ac;
                            }
                            uStack_51 = 1;
                            param_2 = FUN_1800283b0;
                            FUN_18029c090(ppppppplStack_60);
                            *(code *)(ppppppplStack_60 + 5) = (code)0x1;
                          }
                          uStack_78 = (undefined4)uStack_a0;
                          uStack_74 = uStack_a0._4_4_;
                          uStack_70 = (undefined4)uStack_98;
                          uStack_6c = uStack_98._4_4_;
                          uStack_88 = ppppppplStack_b0;
                          uStack_80 = ppppppplStack_a8;
                          uStack_e8 = uStack_a0;
                          uStack_e0 = (undefined4)uStack_98;
                          uStack_dc = uStack_98._4_4_;
                          uStack_f8 = ppppppplStack_b0;
                          uStack_f0 = ppppppplStack_a8;
                          ppppppplStack_90 = (longlong *******)*ppppppplStack_60;
                          if (ppppppplStack_90 != (longlong *******)0x0) {
                            FUN_180450450(&PTR_s_src_core_stealth_surface_rs_1804e2540);
                            goto LAB_1801121ac;
                          }
                          *ppppppplStack_60 = (longlong ******)0xffffffffffffffff;
                          FUN_180062ca0(ppppppplStack_68);
                          ppppppplStack_68[2] = (longlong ******)CONCAT44(uStack_74,uStack_78);
                          ppppppplStack_68[3] = (longlong ******)CONCAT44(uStack_6c,uStack_70);
                          *(int *)ppppppplStack_68 = (int)uStack_88;
                          *(undefined4 *)((longlong)ppppppplStack_68 + 4) = uStack_88._4_4_;
                          *(undefined4 *)(ppppppplStack_68 + 1) = (undefined4)uStack_80;
                          *(undefined4 *)((longlong)ppppppplStack_68 + 0xc) = uStack_80._4_4_;
                          *ppppppplStack_60 = (longlong ******)((longlong)*ppppppplStack_60 + 1);
                          DAT_180607b50 = CONCAT44(uVar9,uVar12);
                          goto LAB_180111db3;
                        }
                        if (uStack_80 != (longlong *******)0x0) {
                          FUN_1802654f0(&uStack_80);
                        }
                      }
                    }
                    FUN_1802654f0(&ppppppplStack_b0);
                  }
                  FUN_1802654f0(&ppppppplStack_c0);
                  ppppppplVar10 = (longlong *******)param_2;
                }
                FUN_1802654f0(&ppppppplStack_108);
                param_2 = (code *)ppppppplVar10;
              }
              FUN_1802654f0(&ppppppplStack_118);
            }
            FUN_1802654f0(&ppppppplStack_110);
            goto LAB_180111da9;
          }
          FUN_1802654f0(&ppppppplStack_b0);
        }
LAB_180111da9:
        FUN_1802654f0(&ppppppplStack_100);
      }
    }
LAB_180111db3:
    DAT_180607b80 = 0;
  }
  if (DAT_1805ea290 != 0) {
    FUN_180443e1b();
  }
  lVar7 = FUN_180292190(&DAT_1805ea280);
  if ((((ulonglong)param_2 & 0xffffffff) / 1000000 + lVar7 * 1000) - DAT_180607b48 < 0x10) {
    return (longlong *******)0x0;
  }
  lVar7 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8);
  ppppppplVar10 = (longlong *******)(lVar7 + 0x300);
  if (*(char *)(lVar7 + 0x328) != '\x01') {
    if (*(char *)(lVar7 + 0x328) == '\x02') {
      FUN_18044f880(&PTR_s__rustc_ac68faa20c58cbccd01ee7208_180456ba8);
      goto LAB_1801121ac;
    }
    FUN_18029c090(ppppppplVar10);
    *(undefined1 *)(lVar7 + 0x328) = 1;
  }
  uVar8 = (ulonglong)*ppppppplVar10;
  if (0x7ffffffffffffffe < uVar8) {
    FUN_180450490(&PTR_s_src_core_stealth_surface_rs_1804e2558);
LAB_1801121ac:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  *ppppppplVar10 = (longlong ******)(uVar8 + 1);
  if (*(longlong *)(lVar7 + 0x308) == 0) {
    ppppppplVar5 = (longlong *******)0x0;
    goto LAB_1801120d4;
  }
  uStack_88 = (longlong *******)0x0;
  uVar9 = 0;
  ppppppplStack_60 = ppppppplVar10;
  iVar4 = (**(code **)(**(longlong **)(lVar7 + 800) + 0x48))
                    (*(longlong **)(lVar7 + 800),0,&DAT_18051b338,&uStack_88);
  if (iVar4 < 0) {
    uStack_f0 = (longlong *******)FUN_180265500(iVar4);
    uStack_e8 = (longlong *******)CONCAT44(uStack_e8._4_4_,uVar9);
    uStack_f8 = (longlong *******)0x1;
    if (uStack_f0 != (longlong *******)0x0) {
      FUN_1802654f0(&uStack_f0);
    }
LAB_1801120c5:
    ppppppplVar5 = (longlong *******)0x0;
  }
  else {
    if (uStack_88 == (longlong *******)0x0) goto LAB_1801120c5;
    ppppppplStack_c0 = uStack_88;
    ppppppplStack_b0 = (longlong *******)0x0;
    FUN_180264900(&uStack_f8,param_1);
    ppppppplVar10 = uStack_f0;
    ppppppplVar6 = (longlong *******)0x0;
    if ((byte)uStack_f8 == 0) {
      ppppppplVar6 = uStack_f0;
    }
    if ((uStack_f0 != (longlong *******)0x0 & (byte)uStack_f8) == 1) {
      FUN_1802654f0(&uStack_f0);
    }
    if (ppppppplVar6 == (longlong *******)0x0) {
LAB_1801120a3:
      if (ppppppplStack_b0 != (longlong *******)0x0) {
        uStack_52 = 1;
        FUN_1802654f0(&ppppppplStack_b0);
      }
      FUN_1802654f0(&ppppppplStack_c0);
      goto LAB_1801120c5;
    }
    ppppppplVar11 = ppppppplStack_c0;
    uStack_88 = ppppppplVar6;
    iVar4 = (*(code *)(*ppppppplVar5)[9])(ppppppplVar5,ppppppplStack_c0,0,&ppppppplStack_b0);
    uVar9 = SUB84(ppppppplVar11,0);
    if (iVar4 < 0) {
      uStack_f0 = (longlong *******)FUN_180265500(iVar4);
      uStack_e8 = (longlong *******)CONCAT44(uStack_e8._4_4_,uVar9);
      uStack_f8 = (longlong *******)0x1;
      if (uStack_f0 != (longlong *******)0x0) {
        FUN_1802654f0(&uStack_f0);
      }
LAB_180112096:
      FUN_1802654f0(&uStack_88);
      goto LAB_1801120a3;
    }
    if (ppppppplStack_b0 == (longlong *******)0x0) goto LAB_180112096;
    (*(code *)(*ppppppplVar10)[0x32])(ppppppplVar10,ppppppplStack_b0,&DAT_1804e2570);
    FUN_1802654f0(&uStack_88);
    ppppppplVar5 = ppppppplStack_c0;
    if (ppppppplStack_b0 != (longlong *******)0x0) {
      uStack_52 = 0;
      FUN_1802654f0(&ppppppplStack_b0);
    }
  }
  uVar8 = (longlong)*ppppppplStack_60 - 1;
  ppppppplVar10 = ppppppplStack_60;
LAB_1801120d4:
  *ppppppplVar10 = (longlong ******)uVar8;
  return ppppppplVar5;
}




/* ===== 18010e520  FUN_18010e520 ===== */

char ** FUN_18010e520(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  uint7 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  char **ppcVar9;
  uint7 *puVar10;
  undefined1 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  char *pcVar15;
  undefined4 local_158;
  undefined2 uStack_154;
  undefined1 uStack_152;
  int iStack_151;
  undefined4 uStack_14d;
  undefined1 uStack_149;
  undefined8 local_148;
  undefined8 uStack_140;
  ulonglong local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  char *local_b0;
  char **ppcStack_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined7 uStack_98;
  undefined1 uStack_91;
  ulonglong local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined7 uStack_7f;
  longlong local_78;
  char **local_70;
  undefined8 local_68;
  uint7 *local_60;
  longlong local_58;
  char local_49 [9];
  
  local_49[1] = -2;
  local_49[2] = -1;
  local_49[3] = -1;
  local_49[4] = -1;
  local_49[5] = -1;
  local_49[6] = -1;
  local_49[7] = -1;
  local_49[8] = -1;
  uVar12 = 0x40;
  ppcVar9 = (char **)FUN_1800642b0(
                                  "7118ad1a83facb1e27d9c8dd2a480febc789dc2c6000ab648565514af0c0e555"
                                  );
  if ((uVar12 & 1) == 0) {
    local_90 = uVar12 >> 1;
    local_49[0] = '\0';
    local_b0 = local_49;
    local_a0 = (undefined4)uVar12;
    uStack_9c = (undefined4)(uVar12 >> 0x20);
    uStack_98 = 0;
    uStack_91 = 0;
    uStack_88 = 1;
    local_80 = 1;
    ppcStack_a8 = ppcVar9;
    ppcVar9 = (char **)FUN_180004a70(&local_b0);
    if (((ulonglong)ppcVar9 & 1) != 0) {
      FUN_1800658a0();
      lVar13 = 1;
      puVar10 = (uint7 *)thunk_FUN_180291940(8);
      if (puVar10 == (uint7 *)0x0) {
        FUN_18045031b(1,8);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      *(char *)puVar10 = (char)uVar12;
      local_68 = 8;
      local_58 = 1;
      local_128 = CONCAT71(uStack_7f,local_80);
      local_148 = CONCAT44(uStack_9c,local_a0);
      uStack_140 = CONCAT17(uStack_91,uStack_98);
      local_138 = local_90;
      uStack_130 = uStack_88;
      local_158 = local_b0._0_4_;
      uStack_154 = (undefined2)((ulonglong)local_b0 >> 0x20);
      uStack_152 = (undefined1)((ulonglong)local_b0 >> 0x30);
      iStack_151._1_3_ = (uint3)ppcStack_a8;
      iStack_151 = CONCAT31(iStack_151._1_3_,(char)((ulonglong)local_b0 >> 0x38));
      uStack_14d = (undefined4)((ulonglong)ppcStack_a8 >> 0x18);
      uStack_149 = (undefined1)((ulonglong)ppcStack_a8 >> 0x38);
      lVar8 = 2;
      local_60 = puVar10;
      while( true ) {
        lVar14 = lVar8;
        uVar11 = (undefined1)lVar13;
        ppcVar9 = (char **)FUN_180004a70(&local_158);
        if (((ulonglong)ppcVar9 & 1) == 0) break;
        lVar13 = lVar14 + -1;
        if (lVar13 == local_68) {
          FUN_180444e70(&local_68,lVar13,1,1,1);
          puVar10 = local_60;
        }
        *(undefined1 *)((longlong)puVar10 + lVar14 + -1) = uVar11;
        lVar8 = lVar14 + 1;
        local_58 = lVar14;
      }
      if ((local_49[0] == '\0') && (ppcVar9 = (char **)-local_68, lVar14 == 0x21)) {
        uVar4 = *local_60;
        lVar13 = *(longlong *)((longlong)local_60 + 7);
        uVar1 = *(undefined8 *)((longlong)local_60 + 0xf);
        uVar2 = *(undefined8 *)((longlong)local_60 + 0x17);
        uVar11 = *(undefined1 *)((longlong)local_60 + 0x1f);
        if (local_68 != 0) {
          thunk_FUN_1802919a0(local_60,local_68,1);
        }
        pcVar15 = (char *)(lVar13 << 0x38 | (ulonglong)uVar4);
        uStack_152 = (undefined1)((ulonglong)lVar13 >> 0x38);
        uStack_154 = (undefined2)((ulonglong)lVar13 >> 0x28);
        local_158 = (undefined4)((ulonglong)lVar13 >> 8);
        iStack_151 = (int)uVar1;
        iVar6 = iStack_151;
        uStack_14d = (undefined4)((ulonglong)uVar1 >> 0x20);
        iStack_151._0_1_ = (undefined1)uVar1;
        uVar5 = CONCAT17((undefined1)iStack_151,(int7)((ulonglong)lVar13 >> 8));
        local_68._0_7_ = (undefined7)((ulonglong)uVar1 >> 8);
        local_a0 = (undefined4)((ulonglong)uVar1 >> 8);
        uStack_9c._3_1_ = (undefined1)uVar2;
        uStack_9c = CONCAT13(uStack_9c._3_1_,(int3)((ulonglong)uVar1 >> 0x28));
        uStack_98 = (undefined7)((ulonglong)uVar2 >> 8);
        ppcVar9 = &local_b0;
        iStack_151 = iVar6;
        local_b0 = pcVar15;
        ppcStack_a8 = (char **)uVar5;
        uStack_91 = uVar11;
        FUN_18026efc0(&local_158);
        if ((char)local_158 != '\0') {
          ppcVar9 = (char **)CONCAT17(uStack_149,CONCAT43(uStack_14d,iStack_151._1_3_));
          param_1[8] = local_138;
          param_1[6] = local_148;
          param_1[7] = uStack_140;
          param_1[0x17] = local_c0;
          param_1[0x18] = uStack_b8;
          param_1[0x15] = local_d0;
          param_1[0x16] = uStack_c8;
          param_1[0x13] = local_e0;
          param_1[0x14] = uStack_d8;
          param_1[0x11] = local_f0;
          param_1[0x12] = uStack_e8;
          param_1[0xf] = local_100;
          param_1[0x10] = uStack_f8;
          param_1[0xd] = local_110;
          param_1[0xe] = uStack_108;
          param_1[0xb] = local_120;
          param_1[0xc] = uStack_118;
          param_1[9] = uStack_130;
          param_1[10] = local_128;
          uVar7 = (undefined4)local_68;
          *(undefined4 *)((longlong)param_1 + 0x1b) = local_68._3_4_;
          *(undefined4 *)(param_1 + 3) = uVar7;
          param_1[1] = pcVar15;
          param_1[2] = uVar5;
          *(undefined8 *)((longlong)param_1 + 0x1f) = uVar2;
          *(undefined1 *)((longlong)param_1 + 0x27) = uVar11;
          param_1[5] = ppcVar9;
          *param_1 = 1;
          return ppcVar9;
        }
        local_158 = 0;
        uStack_154 = 0;
        uStack_152 = 0;
        iStack_151 = (uint)iStack_151._1_3_ << 8;
        local_78 = FUN_1802661b0(&local_158);
        *param_1 = 0;
        if (local_78 == 0) {
          return (char **)0x0;
        }
        local_70 = ppcVar9;
        if ((code *)*ppcVar9 != (code *)0x0) {
          (*(code *)*ppcVar9)(local_78);
        }
        if (local_70[1] == (char *)0x0) {
          return local_70;
        }
        ppcVar9 = (char **)thunk_FUN_1802919a0(local_78,local_70[1],local_70[2]);
        return ppcVar9;
      }
      if (local_68 != 0) {
        ppcVar9 = (char **)thunk_FUN_1802919a0(local_60,local_68,1);
      }
    }
  }
  *param_1 = 0;
  return ppcVar9;
}




/* ===== 18013a5d0  FUN_18013a5d0 ===== */

void FUN_18013a5d0(undefined8 *param_1,LPCVOID param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  SIZE_T SVar10;
  LPCVOID lpAddress;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lStack_d0;
  ulonglong uStack_c8;
  longlong lStack_c0;
  ulonglong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  _MEMORY_BASIC_INFORMATION _Stack_98;
  undefined8 uStack_60;
  
  pcVar9 = DAT_180607e20;
  pcVar8 = DAT_180607dc8;
  pcVar7 = DAT_180607dc0;
  uStack_60 = 0xfffffffffffffffe;
  if (param_2 != (LPCVOID)0x0) {
    _Stack_98.State = 0;
    _Stack_98.Protect = 0;
    _Stack_98.Type = 0;
    _Stack_98._44_4_ = 0;
    _Stack_98._16_8_ = 0;
    _Stack_98.RegionSize = 0;
    _Stack_98.BaseAddress = (PVOID)0x0;
    _Stack_98.AllocationBase = (PVOID)0x0;
    SVar10 = VirtualQuery(param_2,&_Stack_98,0x30);
    if (((((SVar10 != 0) && (_Stack_98.State == 0x1000)) && (param_2 < (LPCVOID)0xffffffffffffffe8))
        && (((_Stack_98._32_8_ & 0x10100000000) == 0 &&
            ((longlong)param_2 + 0x18U <= _Stack_98.RegionSize + (longlong)_Stack_98.BaseAddress))))
       && (((pcVar9 != (code *)0x0 && ((pcVar7 != (code *)0x0 && (pcVar8 != (code *)0x0)))) &&
           (*(longlong *)((longlong)param_2 + 0x10) != 0)))) {
      lpAddress = (LPCVOID)(*pcVar8)(param_2,DAT_180607de8);
      uStack_c8 = 0;
      lStack_c0 = 8;
      uStack_b8 = 0;
      uVar14 = 0;
      lStack_d0 = 8;
      lVar16 = -0x18;
      uVar15 = 0;
      while (lpAddress != (LPCVOID)0x0) {
        _Stack_98.State = 0;
        _Stack_98.Protect = 0;
        _Stack_98.Type = 0;
        _Stack_98._44_4_ = 0;
        _Stack_98._16_8_ = 0;
        _Stack_98.RegionSize = 0;
        _Stack_98.BaseAddress = (PVOID)0x0;
        _Stack_98.AllocationBase = (PVOID)0x0;
        SVar10 = VirtualQuery(lpAddress,&_Stack_98,0x30);
        if ((((SVar10 == 0) || (_Stack_98.State != 0x1000)) ||
            ((LPCVOID)0xffffffffffffffe7 < lpAddress)) ||
           ((((_Stack_98._32_8_ & 0x10100000000) != 0 ||
             (_Stack_98.RegionSize + (longlong)_Stack_98.BaseAddress < (longlong)lpAddress + 0x18U))
            || ((*(longlong *)((longlong)lpAddress + 0x10) == 0 || (0x13 < uVar15)))))) break;
        lVar11 = (*pcVar9)(lpAddress,DAT_180607db8);
        if ((lVar11 == 0) || (*(uint *)(lVar11 + 0x10) - 0x3d0901 < 0xffc2f700)) {
          uStack_b0 = 0;
          uStack_a8 = 1;
          uStack_a0 = 0;
        }
        else {
          _Stack_98.AllocationBase =
               (PVOID)(lVar11 + (ulonglong)*(uint *)(lVar11 + 0x10) * 2 + 0x14);
          _Stack_98.BaseAddress = (PVOID)(lVar11 + 0x14);
          _Stack_98._16_8_ = _Stack_98._16_8_ & 0xffffffffffff0000;
          FUN_180229060(&uStack_b0,&_Stack_98);
        }
        if (uVar14 == uStack_c8) {
          FUN_1804441e0(&uStack_c8);
          lStack_d0 = lStack_c0;
        }
        *(undefined8 *)(lStack_d0 + 0x10 + uVar14 * 0x18) = uStack_a0;
        puVar1 = (undefined4 *)(lStack_d0 + uVar14 * 0x18);
        *puVar1 = (undefined4)uStack_b0;
        puVar1[1] = uStack_b0._4_4_;
        puVar1[2] = (undefined4)uStack_a8;
        puVar1[3] = uStack_a8._4_4_;
        uVar14 = uVar14 + 1;
        uStack_b8 = uVar14;
        lpAddress = (LPCVOID)(*pcVar7)(lpAddress,DAT_180607de0);
        uVar15 = uVar15 + 1;
        lVar16 = lVar16 + 0x18;
      }
      lVar11 = lStack_c0;
      if ((uVar14 & 0xfffffffffffffffe) != 0) {
        lVar12 = 0;
        do {
          puVar1 = (undefined4 *)(lStack_c0 + lVar12);
          uVar3 = *puVar1;
          uVar4 = puVar1[1];
          uVar5 = puVar1[2];
          uVar6 = puVar1[3];
          uVar2 = ((undefined8 *)(lStack_c0 + lVar16))[1];
          *(undefined8 *)(lStack_c0 + lVar12) = *(undefined8 *)(lStack_c0 + lVar16);
          ((undefined8 *)(lStack_c0 + lVar12))[1] = uVar2;
          puVar1 = (undefined4 *)(lStack_c0 + lVar16);
          *puVar1 = uVar3;
          puVar1[1] = uVar4;
          puVar1[2] = uVar5;
          puVar1[3] = uVar6;
          uVar2 = *(undefined8 *)(lStack_c0 + 0x10 + lVar12);
          *(undefined8 *)(lStack_c0 + 0x10 + lVar12) = *(undefined8 *)(lStack_c0 + 0x10 + lVar16);
          *(undefined8 *)(lStack_c0 + 0x10 + lVar16) = uVar2;
          lVar12 = lVar12 + 0x18;
          lVar16 = lVar16 + -0x18;
        } while ((uVar14 * 4 & 0xfffffffffffffff8) * 3 != lVar12);
      }
      FUN_1800860b0(&_Stack_98,lStack_c0,uVar14,&DAT_1804e1bff,1);
      param_1[2] = _Stack_98._16_8_;
      *(undefined4 *)param_1 = _Stack_98.BaseAddress._0_4_;
      *(undefined4 *)((longlong)param_1 + 4) = _Stack_98.BaseAddress._4_4_;
      *(undefined4 *)(param_1 + 1) = _Stack_98.AllocationBase._0_4_;
      *(undefined4 *)((longlong)param_1 + 0xc) = _Stack_98.AllocationBase._4_4_;
      if (uVar14 != 0) {
        puVar13 = (undefined8 *)(lVar11 + 8);
        do {
          if (puVar13[-1] != 0) {
            thunk_FUN_1802919a0(*puVar13,puVar13[-1],1);
          }
          puVar13 = puVar13 + 3;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      if (uStack_c8 == 0) {
        return;
      }
      thunk_FUN_1802919a0(lVar11,uStack_c8 * 0x18,8);
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = 0;
  return;
}


