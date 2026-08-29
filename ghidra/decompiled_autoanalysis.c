

/* ===== sub_180148840  NOFUNC ===== */
// no function


/* ===== sub_18014d920  FUN_18014d920 ===== */

/* WARNING: Removing unreachable block (ram,0x00018014d9f5) */
/* WARNING: Removing unreachable block (ram,0x00018014da08) */
/* WARNING: Removing unreachable block (ram,0x00018014dc6d) */
/* WARNING: Removing unreachable block (ram,0x00018014dc83) */
/* WARNING: Removing unreachable block (ram,0x00018014f677) */
/* WARNING: Removing unreachable block (ram,0x00018014dca0) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18014d920(undefined8 param_1,char *******param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  size_t _Size;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  code *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  byte bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined *puVar13;
  char cVar14;
  char cVar15;
  uint uVar16;
  ulonglong uVar17;
  char *******pppppppcVar18;
  longlong lVar19;
  char *******pppppppcVar20;
  char *******pppppppcVar21;
  longlong lVar22;
  int iVar23;
  longlong *plVar24;
  char *******pppppppcVar25;
  char *******pppppppcVar26;
  char *******pppppppcVar27;
  char *******pppppppcVar28;
  char *pcVar29;
  char *******pppppppcVar30;
  char *******pppppppcVar31;
  char *******pppppppcVar32;
  undefined8 *puVar33;
  char *******pppppppcVar34;
  undefined1 *puVar35;
  char *******pppppppcVar36;
  int iVar37;
  char *pcVar38;
  char *pcVar39;
  longlong lVar40;
  longlong lVar41;
  char *******pppppppcVar42;
  undefined8 uVar43;
  char ******ppppppcVar44;
  longlong lVar45;
  bool bVar46;
  char ******local_1f8;
  undefined8 local_1f0;
  ulonglong local_1e8;
  char ******local_1e0;
  char *******local_1d8;
  char *******local_1d0;
  char *******local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  char *******local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  char *******local_198;
  char *******pppppppcStack_190;
  undefined8 local_188;
  undefined1 local_180;
  char *******local_138;
  char *******pppppppcStack_130;
  char *******local_128;
  char *******local_120;
  char *******local_118;
  undefined8 uStack_110;
  ulonglong local_108;
  char *******local_100;
  char *******local_f8;
  undefined8 uStack_f0;
  char *******local_e8;
  ulonglong local_d8;
  ulonglong local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  char *******local_b0;
  undefined1 *local_a8;
  char *******local_a0;
  ulonglong local_98;
  char *******local_88;
  char *******local_80;
  char local_72;
  undefined1 local_71;
  undefined8 local_70;
  
  local_70 = 0xfffffffffffffffe;
  if (DAT_1805eadf8 == 0) {
    LOCK();
    bVar46 = DAT_1805eadb0 == 0;
    if (bVar46) {
      DAT_1805eadb0 = 1;
    }
    UNLOCK();
  }
  else {
    FUN_180442c83();
    LOCK();
    bVar46 = DAT_1805eadb0 == 0;
    if (bVar46) {
      DAT_1805eadb0 = 1;
    }
    UNLOCK();
  }
  if (!bVar46) {
    FUN_18044ee10(&DAT_1805eadb0);
  }
  puVar13 = PTR_DAT_1806073e0;
  if ((*(ulonglong *)PTR_DAT_1806073e0 & 0x7fffffffffffffff) == 0) {
    if (DAT_1805eadb1 == '\0') {
      uVar16 = 0;
LAB_18014da82:
      uVar12 = DAT_1805eade8._4_4_;
      uVar11 = (undefined4)DAT_1805eade8;
      lVar22 = DAT_1805eadc8;
      puVar33 = DAT_1805eadc0;
      pppppppcVar25 = (char *******)(DAT_1805eadc8 << 5);
      puVar35 = &DAT_00000008;
      local_100 = (char *******)&DAT_00000008;
      if (DAT_1805eadc8 != 0) {
        FUN_1800658a0();
        param_2 = (char *******)thunk_FUN_180291940(pppppppcVar25,8);
        local_100 = param_2;
        if (param_2 == (char *******)0x0) {
          local_88 = (char *******)CONCAT44(local_88._4_4_,uVar16);
          FUN_18045031b(8,pppppppcVar25);
          goto LAB_18014f833;
        }
        pppppppcVar36 = (char *******)0x0;
        lVar19 = lVar22;
        do {
          if (pppppppcVar25 == pppppppcVar36) break;
          uVar43 = puVar33[1];
          *(undefined8 *)((longlong)param_2 + (longlong)pppppppcVar36) = *puVar33;
          *(undefined8 *)((char *)((longlong)param_2 + (longlong)pppppppcVar36) + 8) = uVar43;
          puVar1 = puVar33 + 2;
          uVar7 = *(undefined4 *)((longlong)puVar33 + 0x14);
          uVar8 = *(undefined4 *)(puVar33 + 3);
          uVar9 = *(undefined4 *)((longlong)puVar33 + 0x1c);
          puVar33 = puVar33 + 4;
          pcVar29 = (char *)((longlong)(param_2 + 2) + (longlong)pppppppcVar36);
          *(undefined4 *)pcVar29 = *(undefined4 *)puVar1;
          *(undefined4 *)(pcVar29 + 4) = uVar7;
          *(undefined4 *)(pcVar29 + 8) = uVar8;
          *(undefined4 *)(pcVar29 + 0xc) = uVar9;
          pppppppcVar36 = pppppppcVar36 + 4;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
      }
      uVar17 = DAT_1805eade0;
      pppppppcVar36 = DAT_1805eadd8;
      if (DAT_1805eade0 == 0) {
        uVar17 = 0;
        pppppppcVar36 = param_2;
      }
      else {
        _Size = DAT_1805eade0 * 8;
        local_80 = pppppppcVar25;
        FUN_1800658a0();
        puVar35 = (undefined1 *)thunk_FUN_180291940(_Size,8);
        if (puVar35 == (undefined1 *)0x0) {
          local_88 = (char *******)CONCAT44(local_88._4_4_,uVar16);
          local_1b0 = lVar22;
          FUN_18045031b(8,_Size);
          goto LAB_18014f833;
        }
        memcpy(puVar35,pppppppcVar36,_Size);
      }
      if ((((char)uVar16 == '\0') && ((*(ulonglong *)puVar13 & 0x7fffffffffffffff) != 0)) &&
         (cVar14 = FUN_18044f9d0(), cVar14 == '\0')) {
        DAT_1805eadb1 = '\x01';
      }
      bVar10 = DAT_1805eadb0;
      LOCK();
      DAT_1805eadb0 = 0;
      UNLOCK();
      if (bVar10 == 2) {
        WakeByAddressSingle(&DAT_1805eadb0);
      }
      if (DAT_1805eae50 != 0) {
        FUN_1804428c1();
      }
      LOCK();
      bVar46 = DAT_1805eae30 == '\0';
      if (bVar46) {
        DAT_1805eae30 = '\x01';
      }
      UNLOCK();
      if (!bVar46) {
        FUN_18044ee10();
      }
      local_1b0 = lVar22;
      local_1e8 = uVar17;
      local_a8 = puVar35;
      if ((*(ulonglong *)puVar13 & 0x7fffffffffffffff) == 0) {
        if (DAT_1805eae31 != '\0') {
LAB_18014dc08:
          if (((*(ulonglong *)puVar13 & 0x7fffffffffffffff) != 0) &&
             (cVar14 = FUN_18044f9d0(), cVar14 == '\0')) {
            DAT_1805eae31 = '\x01';
          }
          goto LAB_18014dc18;
        }
        uVar16 = 0;
LAB_18014dd39:
        pppppppcVar20 = DAT_1805eae48;
        pppppppcVar25 = DAT_1805eae40;
        lVar22 = (longlong)DAT_1805eae48 * 0x20;
        local_88 = (char *******)CONCAT44(local_88._4_4_,uVar16);
        if (DAT_1805eae48 == (char *******)0x0) {
          pppppppcVar18 = (char *******)&DAT_00000008;
        }
        else {
          FUN_1800658a0();
          pppppppcVar36 = (char *******)&DAT_00000008;
          pppppppcVar18 = (char *******)thunk_FUN_180291940(lVar22);
          if (pppppppcVar18 == (char *******)0x0) {
            FUN_18045031b(8,lVar22);
LAB_18014f833:
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
        }
        pppppppcVar21 = pppppppcVar25 + (longlong)pppppppcVar20 * 4;
        pppppppcVar27 = (char *******)0x0;
        uStack_110 = pppppppcVar18;
        local_118 = pppppppcVar20;
        pppppppcVar42 = pppppppcVar20;
        lVar22 = local_1b0;
        pppppppcVar31 = local_80;
        for (; (local_80 = pppppppcVar27, local_1b0 = lVar22, pppppppcVar42 != (char *******)0x0 &&
               (pppppppcVar42 = (char *******)((longlong)pppppppcVar42 + -1),
               pppppppcVar25 != pppppppcVar21)); pppppppcVar25 = pppppppcVar25 + 4) {
          if (pppppppcVar20 <= local_80) {
            FUN_1804505b3(local_80,pppppppcVar20,&PTR_s__rustc_ac68faa20c58cbccd01ee7208_18051ca10);
            goto LAB_18014f833;
          }
          pppppppcVar31 = (char *******)pppppppcVar25[3];
          pppppppcVar36 = pppppppcVar25;
          FUN_1802aaec0(&local_1a8);
          pppppppcVar18[(longlong)local_80 * 4] = (char ******)local_1a8;
          (pppppppcVar18 + (longlong)local_80 * 4)[1] = (char ******)uStack_1a0;
          pppppppcVar18[(longlong)local_80 * 4 + 2] = (char ******)local_198;
          (pppppppcVar18 + (longlong)local_80 * 4 + 2)[1] = (char ******)pppppppcVar31;
          pppppppcVar27 = (char *******)((longlong)local_80 + 1);
          lVar22 = local_1b0;
          pppppppcStack_190 = pppppppcVar31;
          pppppppcVar31 = local_80;
        }
        uStack_110._4_4_ = (undefined4)((ulonglong)uStack_110 >> 0x20);
        uStack_1c0 = (undefined4)uStack_110;
        uStack_1bc = uStack_110._4_4_;
        local_1b8 = pppppppcVar20;
        local_1c8 = local_118;
        local_80 = pppppppcVar31;
        if ((((char)local_88 == '\0') &&
            ((*(ulonglong *)PTR_DAT_1806073e0 & 0x7fffffffffffffff) != 0)) &&
           (cVar14 = FUN_18044f9d0(), cVar14 == '\0')) {
          DAT_1805eae31 = '\x01';
        }
        cVar14 = DAT_1805eae30;
        LOCK();
        DAT_1805eae30 = '\0';
        UNLOCK();
        if (cVar14 == '\x02') {
          WakeByAddressSingle(&DAT_1805eae30);
        }
        pppppppcVar25 = local_1b8;
        local_c8 = 0;
        uStack_c0 = 8;
        local_b8 = 0;
        if (local_1b8 != (char *******)0x0) {
          local_f8 = local_1c8;
          uStack_f0 = CONCAT44(uStack_1bc,uStack_1c0);
          uVar17 = uStack_f0;
          local_e8 = local_1b8;
          local_1a8 = (char *******)0x0;
          uStack_1a0 = (code *)&DAT_00000008;
          local_198 = (char *******)0x0;
          if (local_1b8 != (char *******)0x0) {
            pppppppcVar36 = (char *******)&DAT_00000008;
            pppppppcVar20 = (char *******)0x0;
            do {
              pppppppcVar18 = local_198;
              plVar24 = (longlong *)(uVar17 + (longlong)pppppppcVar20 * 0x20 + 0x18);
              ppppppcVar44 = *(char *******)(uVar17 + 0x18 + (longlong)pppppppcVar20 * 0x20);
              pppppppcVar42 = pppppppcVar20;
              pppppppcVar31 = (char *******)((longlong)pppppppcVar20 + 1);
              if ((char *******)((longlong)pppppppcVar20 + 1) < pppppppcVar25) {
                pppppppcVar31 = pppppppcVar25;
              }
              do {
                pppppppcVar27 = pppppppcVar42;
                if ((char ******)*plVar24 != ppppppcVar44) break;
                pppppppcVar42 = (char *******)((longlong)pppppppcVar42 + 1);
                plVar24 = plVar24 + 4;
                pppppppcVar27 = pppppppcVar31;
              } while (pppppppcVar31 != pppppppcVar42);
              if (local_198 == local_1a8) {
                FUN_1804441e0(&local_1a8);
                pppppppcVar36 = (char *******)uStack_1a0;
              }
              pppppppcVar36[(longlong)pppppppcVar18 * 3] = ppppppcVar44;
              pppppppcVar36[(longlong)pppppppcVar18 * 3 + 1] = (char ******)pppppppcVar20;
              pppppppcVar36[(longlong)pppppppcVar18 * 3 + 2] =
                   (char ******)((longlong)pppppppcVar27 - (longlong)pppppppcVar20);
              local_198 = (char *******)((longlong)pppppppcVar18 + 1);
              lVar22 = local_1b0;
              pppppppcVar20 = pppppppcVar27;
            } while (pppppppcVar27 < pppppppcVar25);
          }
          pppppppcVar18 = local_198;
          pppppppcVar42 = local_100 + lVar22 * 4;
          local_d8 = local_1e8 & 0xffffffffffffff8;
          local_d0 = (ulonglong)((int)local_1e8 * 8 & 0x38);
          pppppppcVar25 = (char *******)((longlong)uStack_1a0 + -0x18);
          lVar22 = (longlong)local_198 * 0x18;
          pppppppcVar20 = (char *******)0x0;
          local_1d0 = local_1a8;
          local_1d8 = (char *******)uStack_1a0;
          pppppppcVar36 = local_100;
joined_r0x00018014e102:
          pppppppcVar31 = pppppppcVar20;
          pppppppcVar27 = pppppppcVar36;
          if (pppppppcVar36 != pppppppcVar42) {
            do {
              lVar19 = local_b8;
              if (*(char *)pppppppcVar27 == '\0') {
LAB_18014e1e8:
                pppppppcVar21 = (char *******)0x0;
              }
              else {
                lVar40 = lVar22;
                pppppppcVar36 = pppppppcVar25;
                do {
                  if (lVar40 == 0) goto LAB_18014e1e8;
                  pppppppcVar21 = pppppppcVar36 + 3;
                  lVar40 = lVar40 + -0x18;
                  pppppppcVar20 = pppppppcVar36 + 3;
                  pppppppcVar36 = pppppppcVar21;
                } while (*pppppppcVar20 != pppppppcVar27[1]);
              }
              pppppppcVar36 = pppppppcVar27 + 4;
              pppppppcVar20 = (char *******)((longlong)pppppppcVar31 + 1);
              pppppppcVar28 = local_1d8 + (longlong)pppppppcVar31 * 3;
              if (pppppppcVar18 <= pppppppcVar31) {
                pppppppcVar28 = (char *******)0x0;
              }
              if (pppppppcVar21 != (char *******)0x0) {
                pppppppcVar28 = pppppppcVar21;
              }
              if ((pppppppcVar28 == (char *******)0x0) ||
                 (pppppppcVar31 = (char *******)pppppppcVar28[2], pppppppcVar31 == (char *******)0x0
                 )) goto LAB_18014e276;
              lVar19 = (longlong)pppppppcVar31 * 0x18;
              local_b0 = pppppppcVar31;
              if ((char *******)0x555555555555555 < pppppppcVar31) {
                uVar43 = 0;
LAB_18014eeae:
                FUN_18045031b(uVar43,lVar19);
                goto LAB_18014f833;
              }
              if (lVar19 == 0) {
                pppppppcVar21 = (char *******)&DAT_00000008;
                pppppppcVar31 = (char *******)0x0;
              }
              else {
                FUN_1800658a0();
                uVar43 = 8;
                pppppppcVar21 = (char *******)thunk_FUN_180291940(lVar19);
                pppppppcVar31 = local_b0;
                if (pppppppcVar21 == (char *******)0x0) goto LAB_18014eeae;
              }
              local_98 = uStack_f0;
              local_88 = local_e8;
              pppppppcVar32 = (char *******)0x0;
              pppppppcVar34 = (char *******)0x0;
              local_118 = pppppppcVar31;
              uStack_110 = pppppppcVar21;
              if (local_b0 != (char *******)0x0) {
                do {
                  pppppppcVar31 =
                       (char *******)((longlong)pppppppcVar34 + (longlong)pppppppcVar28[1]);
                  local_80 = pppppppcVar32;
                  if (local_88 <= pppppppcVar31) {
                    FUN_1804505b3(pppppppcVar31,local_88,&PTR_s_src_features_oracle_mod_rs_1804f64c8
                                 );
                    goto LAB_18014f833;
                  }
                  FUN_1802aaec0(&local_1a8,(longlong)pppppppcVar31 * 0x20 + local_98);
                  pppppppcVar34 = (char *******)((longlong)pppppppcVar34 + 1);
                  pppppppcVar21[(longlong)local_80 * 3 + 2] = (char ******)local_198;
                  pppppppcVar31 = pppppppcVar21 + (longlong)local_80 * 3;
                  *(undefined4 *)pppppppcVar31 = (undefined4)local_1a8;
                  *(undefined4 *)((longlong)pppppppcVar31 + 4) = local_1a8._4_4_;
                  *(undefined4 *)(pppppppcVar31 + 1) = (undefined4)uStack_1a0;
                  *(undefined4 *)((longlong)pppppppcVar31 + 0xc) = uStack_1a0._4_4_;
                  pppppppcVar32 = (char *******)((longlong)local_80 + 1);
                } while (pppppppcVar34 < local_b0);
              }
              pppppppcVar34 = uStack_110;
              pppppppcVar21 = local_118;
              local_1e0 = pppppppcVar27[2];
              pppppppcVar31 = uStack_110 + (longlong)pppppppcVar32 * 3;
              pppppppcVar30 = uStack_110;
              local_80 = pppppppcVar28;
              do {
                pppppppcVar26 = pppppppcVar30;
                pppppppcVar28 = pppppppcVar34;
                if (pppppppcVar26 == pppppppcVar31) break;
                local_71 = 1;
                cVar14 = FUN_180003660(&DAT_1804f6138,0xe,pppppppcVar26[1],pppppppcVar26[2]);
                pppppppcVar30 = pppppppcVar26 + 3;
              } while (cVar14 == '\0');
              do {
                if (pppppppcVar28 == pppppppcVar31) goto LAB_18014e6b3;
                local_71 = 1;
                cVar14 = FUN_180003660(&DAT_1804f6146,0xd,pppppppcVar28[1],pppppppcVar28[2]);
                pppppppcVar28 = pppppppcVar28 + 3;
              } while (cVar14 == '\0');
              if ((local_b0 < (char *******)0x3) || (pppppppcVar26 == pppppppcVar31)) {
LAB_18014e6b3:
                uVar17 = (longlong)local_1e0 - 1;
                pppppppcVar31 = local_80;
                if (pppppppcVar27[3] == (char ******)0x0) {
                  if ((longlong)uVar17 < 1) {
                    uVar17 = 0;
                  }
                  if ((uVar17 | (ulonglong)local_b0) >> 0x20 == 0) {
                    pppppppcVar27 =
                         (char *******)((uVar17 & 0xffffffff) % ((ulonglong)local_b0 & 0xffffffff));
                  }
                  else {
                    pppppppcVar27 = (char *******)(uVar17 % (ulonglong)local_b0);
                  }
                }
                else {
                  pppppppcVar27 = (char *******)((longlong)uVar17 / 2);
                  if ((longlong)uVar17 / 2 < 1) {
                    pppppppcVar27 = (char *******)0x0;
                  }
                }
              }
              else {
                pppppppcVar28 = (char *******)0x0;
                local_120 = (char *******)0x0;
                for (pppppppcVar31 = (char *******)0x1; local_a0 = pppppppcVar28,
                    pppppppcVar31 < local_b0;
                    pppppppcVar31 = (char *******)((longlong)pppppppcVar31 + 1)) {
                  pppppppcVar27 = (char *******)((longlong)pppppppcVar31 + (longlong)local_80[1]);
                  if (local_88 <= pppppppcVar27) {
                    local_71 = 1;
                    FUN_1804505b3(pppppppcVar27,local_88,&PTR_s_src_features_oracle_mod_rs_1804f64e0
                                 );
                    goto LAB_18014f833;
                  }
                  uVar43 = *(undefined8 *)(local_98 + 8 + (longlong)pppppppcVar27 * 0x20);
                  uVar3 = *(undefined8 *)(local_98 + 0x10 + (longlong)pppppppcVar27 * 0x20);
                  local_71 = 1;
                  cVar14 = FUN_180003660(&DAT_1804f6138,0xe,uVar43,uVar3);
                  local_71 = 1;
                  cVar15 = FUN_180003660(&DAT_1804f6146,0xd,uVar43,uVar3);
                  iVar23 = 100;
                  if (cVar14 == '\0') {
                    iVar23 = 0;
                  }
                  iVar6 = iVar23 + -100;
                  if (cVar15 == '\0') {
                    iVar6 = iVar23;
                  }
                  pppppppcVar27 = (char *******)((longlong)local_120 + (longlong)local_80[1]);
                  if (local_88 <= pppppppcVar27) {
                    local_71 = 1;
                    FUN_1804505b3(pppppppcVar27,local_88,&PTR_s_src_features_oracle_mod_rs_1804f64e0
                                 );
                    goto LAB_18014f833;
                  }
                  uVar43 = *(undefined8 *)(local_98 + 8 + (longlong)pppppppcVar27 * 0x20);
                  uVar3 = *(undefined8 *)(local_98 + 0x10 + (longlong)pppppppcVar27 * 0x20);
                  local_71 = 1;
                  cVar14 = FUN_180003660(&DAT_1804f6138,0xe,uVar43,uVar3);
                  local_71 = 1;
                  cVar15 = FUN_180003660(&DAT_1804f6146,0xd,uVar43,uVar3);
                  iVar23 = 100;
                  if (cVar14 == '\0') {
                    iVar23 = 0;
                  }
                  iVar37 = iVar23 + -100;
                  if (cVar15 == '\0') {
                    iVar37 = iVar23;
                  }
                  pppppppcVar27 = pppppppcVar31;
                  if (iVar6 <= iVar37) {
                    pppppppcVar27 = local_120;
                  }
                  pppppppcVar28 = (char *******)((longlong)pppppppcVar31 + (longlong)local_80[1]);
                  if (local_88 <= pppppppcVar28) {
                    local_71 = 1;
                    FUN_1804505b3(pppppppcVar28,local_88,&PTR_s_src_features_oracle_mod_rs_1804f64e0
                                 );
                    goto LAB_18014f833;
                  }
                  uVar43 = *(undefined8 *)(local_98 + 8 + (longlong)pppppppcVar28 * 0x20);
                  uVar3 = *(undefined8 *)(local_98 + 0x10 + (longlong)pppppppcVar28 * 0x20);
                  local_71 = 1;
                  cVar14 = FUN_180003660(&DAT_1804f6138,0xe,uVar43,uVar3);
                  local_71 = 1;
                  cVar15 = FUN_180003660(&DAT_1804f6146,0xd,uVar43,uVar3);
                  iVar23 = 100;
                  if (cVar14 == '\0') {
                    iVar23 = 0;
                  }
                  iVar6 = iVar23 + -100;
                  if (cVar15 == '\0') {
                    iVar6 = iVar23;
                  }
                  pppppppcVar28 = (char *******)((longlong)local_a0 + (longlong)local_80[1]);
                  if (local_88 <= pppppppcVar28) {
                    local_71 = 1;
                    FUN_1804505b3(pppppppcVar28,local_88,&PTR_s_src_features_oracle_mod_rs_1804f64e0
                                 );
                    goto LAB_18014f833;
                  }
                  uVar43 = *(undefined8 *)(local_98 + 8 + (longlong)pppppppcVar28 * 0x20);
                  uVar3 = *(undefined8 *)(local_98 + 0x10 + (longlong)pppppppcVar28 * 0x20);
                  local_71 = 1;
                  cVar14 = FUN_180003660(&DAT_1804f6138,0xe,uVar43,uVar3);
                  local_71 = 1;
                  cVar15 = FUN_180003660(&DAT_1804f6146,0xd,uVar43,uVar3);
                  iVar23 = 100;
                  if (cVar14 == '\0') {
                    iVar23 = 0;
                  }
                  iVar37 = iVar23 + -100;
                  if (cVar15 == '\0') {
                    iVar37 = iVar23;
                  }
                  pppppppcVar28 = pppppppcVar31;
                  if (iVar37 <= iVar6) {
                    pppppppcVar28 = local_a0;
                  }
                  local_120 = pppppppcVar27;
                }
                pppppppcVar27 = local_120;
                pppppppcVar31 = local_80;
                if (((ulonglong)local_1e0 & 1) != 0) {
                  pppppppcVar28 = (char *******)((longlong)pppppppcVar28 + (longlong)local_80[1]);
                  if (local_88 <= pppppppcVar28) {
                    local_71 = 1;
                    FUN_1804505b3(pppppppcVar28,local_88,&PTR_s_src_features_oracle_mod_rs_1804f6498
                                 );
                    goto LAB_18014f833;
                  }
                  lVar19 = *(longlong *)(local_98 + 8 + (longlong)pppppppcVar28 * 0x20);
                  pcVar29 = *(char **)(local_98 + 0x10 + (longlong)pppppppcVar28 * 0x20);
                  local_1f8 = (char ******)&DAT_1804f64b0;
                  local_1f0 = 3;
                  local_1a8 = &local_1f8;
                  uStack_1a0 = (code *)&LAB_18004ae90;
                  local_71 = 1;
                  FUN_1802aab50(&local_138,&DAT_1804f6030,&local_1a8);
                  FUN_1802ab150(&local_1a8,&local_138,lVar19,pcVar29);
                  pppppppcVar31 = local_80;
                  FUN_180003af0(&local_118,&local_1a8);
                  if ((int)local_118 == 1) {
                    pcVar38 = (char *)((longlong)uStack_110 + (longlong)local_128);
                    if (pcVar38 != (char *)0x0) {
                      if (pcVar38 < pcVar29) {
                        if (pcVar38[lVar19] < -0x40) {
LAB_18014f818:
                          FUN_180450430(lVar19,pcVar29,pcVar38,pcVar29,
                                        &PTR_s_src_features_oracle_mod_rs_1804f6060);
                          goto LAB_18014f833;
                        }
                      }
                      else if (pcVar29 != pcVar38) goto LAB_18014f818;
                    }
                    uStack_1a0 = (code *)(pcVar29 + -(longlong)pcVar38);
                    pppppppcVar27 = (char *******)(pcVar38 + lVar19);
                    local_198 = (char *******)0x0;
                    local_180 = 1;
                    local_188 = 0x5d0000005d;
                    local_1a8 = pppppppcVar27;
                    pppppppcStack_190 = (char *******)uStack_1a0;
                    FUN_180003440(&local_118,&local_1a8);
                    if ((int)local_118 == 1) {
                      pcVar39 = (char *)((longlong)uStack_110 + (longlong)pcVar38);
                      if (CARRY8((ulonglong)uStack_110,(ulonglong)pcVar38)) goto LAB_18014f7fe;
                      if (pcVar38 != (char *)0x0) {
                        if (pcVar38 < pcVar29) {
                          if (-0x41 < *(char *)pppppppcVar27) goto LAB_18014eb03;
                        }
                        else if (pcVar29 == pcVar38) goto LAB_18014eb03;
                        goto LAB_18014f7fe;
                      }
LAB_18014eb03:
                      if (pcVar39 == (char *)0x0) {
LAB_18014eb1f:
                        if (uStack_110 == (char *******)0x0) {
LAB_18014ec1b:
                          bVar46 = false;
                        }
                        else {
                          if (uStack_110 == (char *******)0x1) {
                            cVar14 = *(char *)pppppppcVar27;
                            bVar46 = false;
                            if ((cVar14 == '+') || (cVar14 == '-')) goto LAB_18014ec1e;
                          }
                          else {
                            cVar14 = *(char *)pppppppcVar27;
                          }
                          if (cVar14 == '-') {
                            pppppppcVar31 = local_80;
                            if (&DAT_00000010 < uStack_110) {
                              pcVar38 = pcVar38 + lVar19;
                              pppppppcVar27 = (char *******)0x1;
                              lVar19 = 0;
                              do {
                                auVar4 = SEXT816(lVar19);
                                lVar19 = lVar19 * 10;
                                if (((SEXT816(lVar19) != auVar4 * SEXT816(10)) ||
                                    (uVar16 = (byte)pcVar38[(longlong)pppppppcVar27] - 0x30,
                                    9 < uVar16)) ||
                                   (bVar46 = SBORROW8(lVar19,(ulonglong)uVar16),
                                   lVar19 = lVar19 - (ulonglong)uVar16, bVar46)) {
                                  bVar46 = false;
                                  goto LAB_18014ec1e;
                                }
                                pppppppcVar27 = (char *******)((longlong)pppppppcVar27 + 1);
                              } while (uStack_110 != pppppppcVar27);
                              bVar46 = true;
                            }
                            else if (uStack_110 == (char *******)0x1) {
                              bVar46 = true;
                              lVar19 = 0;
                            }
                            else {
                              pcVar38 = pcVar38 + lVar19;
                              pppppppcVar27 = (char *******)0x1;
                              lVar19 = 0;
                              do {
                                bVar46 = (byte)pcVar38[(longlong)pppppppcVar27] - 0x30 < 10;
                                if (!bVar46) break;
                                lVar19 = lVar19 * 10 -
                                         (ulonglong)((byte)pcVar38[(longlong)pppppppcVar27] - 0x30);
                                pppppppcVar27 = (char *******)((longlong)pppppppcVar27 + 1);
                              } while (uStack_110 != pppppppcVar27);
                            }
                          }
                          else {
                            pppppppcVar28 = uStack_110;
                            if (cVar14 == '+') {
                              pppppppcVar27 = (char *******)((longlong)pppppppcVar27 + 1);
                              pppppppcVar28 = (char *******)((longlong)uStack_110 + -1);
                            }
                            if (&DAT_0000000f < pppppppcVar28) {
                              pppppppcVar30 = (char *******)0x0;
                              lVar19 = 0;
                              do {
                                auVar4 = SEXT816(lVar19);
                                lVar19 = lVar19 * 10;
                                if (((SEXT816(lVar19) != auVar4 * SEXT816(10)) ||
                                    (uVar16 = *(byte *)((longlong)pppppppcVar27 +
                                                       (longlong)pppppppcVar30) - 0x30, 9 < uVar16))
                                   || (bVar46 = SCARRY8(lVar19,(ulonglong)uVar16),
                                      lVar19 = lVar19 + (ulonglong)uVar16, bVar46))
                                goto LAB_18014ec1b;
                                pppppppcVar30 = (char *******)((longlong)pppppppcVar30 + 1);
                              } while (pppppppcVar28 != pppppppcVar30);
                              bVar46 = true;
                            }
                            else if (pppppppcVar28 == (char *******)0x0) {
                              bVar46 = true;
                              lVar19 = 0;
                            }
                            else {
                              pppppppcVar30 = (char *******)0x0;
                              lVar19 = 0;
                              do {
                                uVar16 = *(byte *)((longlong)pppppppcVar27 + (longlong)pppppppcVar30
                                                  ) - 0x30;
                                bVar46 = uVar16 < 10;
                                if (!bVar46) break;
                                lVar19 = (ulonglong)uVar16 + lVar19 * 10;
                                pppppppcVar30 = (char *******)((longlong)pppppppcVar30 + 1);
                              } while (pppppppcVar28 != pppppppcVar30);
                            }
                          }
                        }
LAB_18014ec1e:
                        if (local_138 != (char *******)0x0) {
                          thunk_FUN_1802919a0(pppppppcStack_130,local_138,1);
                        }
                        if (!bVar46) goto LAB_18014e977;
                        uVar17 = 0;
                        while (pppppppcVar27 = local_a0, local_d8 != uVar17) {
                          if (((*(longlong *)(local_a8 + uVar17 * 8) == lVar19) ||
                              (*(longlong *)(local_a8 + uVar17 * 8 + 8) == lVar19)) ||
                             ((*(longlong *)(local_a8 + uVar17 * 8 + 0x10) == lVar19 ||
                              ((((*(longlong *)(local_a8 + uVar17 * 8 + 0x18) == lVar19 ||
                                 (*(longlong *)(local_a8 + uVar17 * 8 + 0x20) == lVar19)) ||
                                (*(longlong *)(local_a8 + uVar17 * 8 + 0x28) == lVar19)) ||
                               ((*(longlong *)(local_a8 + uVar17 * 8 + 0x30) == lVar19 ||
                                (lVar40 = uVar17 * 8, uVar17 = uVar17 + 8,
                                *(longlong *)(local_a8 + lVar40 + 0x38) == lVar19))))))))
                          goto LAB_18014e813;
                        }
                        if ((local_d0 == 0) ||
                           ((*(longlong *)(local_a8 + local_d8 * 8) != lVar19 &&
                            (((int)local_d0 == 8 ||
                             ((pppppppcVar31 = local_80,
                              *(longlong *)(local_a8 + local_d8 * 8 + 8) != lVar19 &&
                              (((int)local_d0 == 0x10 ||
                               ((*(longlong *)(local_a8 + local_d8 * 8 + 0x10) != lVar19 &&
                                (((int)local_d0 == 0x18 ||
                                 ((*(longlong *)(local_a8 + local_d8 * 8 + 0x18) != lVar19 &&
                                  (((int)local_d0 == 0x20 ||
                                   ((*(longlong *)(local_a8 + local_d8 * 8 + 0x20) != lVar19 &&
                                    (((int)local_d0 == 0x28 ||
                                     ((*(longlong *)(local_a8 + local_d8 * 8 + 0x28) != lVar19 &&
                                      (((int)local_d0 == 0x30 ||
                                       ((*(longlong *)(local_a8 + local_d8 * 8 + 0x30) != lVar19 &&
                                        ((int)local_d0 == 0x38))))))))))))))))))))))))))))
                        goto LAB_18014e977;
                        goto LAB_18014e813;
                      }
                      if (pcVar39 < pcVar29) {
                        if (-0x41 < pcVar39[lVar19]) goto LAB_18014eb1f;
                      }
                      else if (pcVar39 == pcVar29) goto LAB_18014eb1f;
LAB_18014f7fe:
                      FUN_180450430(lVar19,pcVar29,pcVar38,pcVar39,
                                    &PTR_s_src_features_oracle_mod_rs_1804f6078);
                      goto LAB_18014f833;
                    }
                  }
                  if (local_138 != (char *******)0x0) {
                    thunk_FUN_1802919a0(pppppppcStack_130,local_138,1);
                  }
LAB_18014e977:
                  pcVar29 = (char *)0x0;
                  pppppppcVar27 = local_b0;
                  pppppppcVar28 = (char *******)0xffffffffffffffff;
LAB_18014e987:
                  pppppppcVar30 = (char *******)(pcVar29 + -1);
                  do {
                    pppppppcVar26 = pppppppcVar30;
                    pppppppcVar30 = (char *******)((longlong)pppppppcVar26 + 1);
                    if (pppppppcVar27 <= pppppppcVar30) {
                      pppppppcVar27 = local_120;
                      if (pppppppcVar28 != (char *******)0xffffffffffffffff) {
                        pppppppcVar27 = pppppppcVar28;
                      }
                      goto LAB_18014e813;
                    }
                  } while (local_120 == pppppppcVar30);
                  if (pppppppcVar28 == (char *******)0xffffffffffffffff) goto LAB_18014eadd;
                  pppppppcVar31 =
                       (char *******)((longlong)pppppppcVar30 + (longlong)pppppppcVar31[1]);
                  if (pppppppcVar31 < local_88) {
                    uVar43 = *(undefined8 *)(local_98 + 8 + (longlong)pppppppcVar31 * 0x20);
                    uVar3 = *(undefined8 *)(local_98 + 0x10 + (longlong)pppppppcVar31 * 0x20);
                    local_71 = 1;
                    cVar14 = FUN_180003660(&DAT_1804f6138,0xe,uVar43,uVar3);
                    local_71 = 1;
                    cVar15 = FUN_180003660(&DAT_1804f6146,0xd,uVar43,uVar3);
                    iVar23 = 0;
                    if (cVar14 != '\0') {
                      iVar23 = 100;
                    }
                    iVar6 = iVar23 + -100;
                    if (cVar15 == '\0') {
                      iVar6 = iVar23;
                    }
                    pppppppcVar31 = (char *******)((longlong)pppppppcVar28 + (longlong)local_80[1]);
                    if (pppppppcVar31 < local_88) goto code_r0x00018014ea4b;
                    local_71 = 1;
                    FUN_1804505b3(pppppppcVar31,local_88,&PTR_s_src_features_oracle_mod_rs_1804f64e0
                                 );
                  }
                  else {
                    local_71 = 1;
                    FUN_1804505b3(pppppppcVar31,local_88,&PTR_s_src_features_oracle_mod_rs_1804f64e0
                                 );
                  }
                  goto LAB_18014f833;
                }
              }
LAB_18014e813:
              lVar19 = local_b8;
              pppppppcVar28 = (char *******)((longlong)local_b0 + -1);
              if (pppppppcVar27 <= (char *******)((longlong)local_b0 + -1)) {
                pppppppcVar28 = pppppppcVar27;
              }
              pppppppcStack_190 = (char *******)pppppppcVar31[1];
              local_188 = CONCAT44(local_188._4_4_,(int)pppppppcVar28 + 1);
              local_1a8 = pppppppcVar21;
              uStack_1a0 = (code *)pppppppcVar34;
              local_198 = pppppppcVar32;
              if (local_b8 == local_c8) {
                FUN_180444250(&local_c8);
              }
              *(undefined8 *)(uStack_c0 + 0x20 + lVar19 * 0x28) = local_188;
              puVar33 = (undefined8 *)(uStack_c0 + 0x10 + lVar19 * 0x28);
              *puVar33 = local_198;
              puVar33[1] = pppppppcStack_190;
              puVar2 = (undefined4 *)(uStack_c0 + lVar19 * 0x28);
              *puVar2 = (undefined4)local_1a8;
              puVar2[1] = local_1a8._4_4_;
              puVar2[2] = (undefined4)uStack_1a0;
              puVar2[3] = uStack_1a0._4_4_;
              local_b8 = lVar19 + 1;
              pppppppcVar31 = pppppppcVar20;
              pppppppcVar27 = pppppppcVar36;
              if (pppppppcVar36 == pppppppcVar42) break;
            } while( true );
          }
          if (local_1d0 != (char *******)0x0) {
            thunk_FUN_1802919a0(local_1d8,(longlong)local_1d0 * 0x18,8);
          }
          uVar17 = uStack_f0;
          if (local_e8 != (char *******)0x0) {
            puVar33 = (undefined8 *)(uStack_f0 + 8);
            pppppppcVar25 = local_e8;
            do {
              if (puVar33[-1] != 0) {
                thunk_FUN_1802919a0(*puVar33,puVar33[-1],1);
              }
              puVar33 = puVar33 + 4;
              pppppppcVar25 = (char *******)((longlong)pppppppcVar25 + -1);
            } while (pppppppcVar25 != (char *******)0x0);
          }
          pppppppcVar36 = local_f8;
          if (local_f8 != (char *******)0x0) {
            pppppppcVar36 = (char *******)((longlong)local_f8 << 5);
            thunk_FUN_1802919a0(uVar17,pppppppcVar36,8);
          }
          local_98 = local_98 & 0xffffffff00000000;
          goto LAB_18014eee7;
        }
      }
      else {
        uVar16 = FUN_18044f9d0();
        if (DAT_1805eae31 == '\0') {
          uVar16 = uVar16 ^ 1;
          goto LAB_18014dd39;
        }
        if ((char)uVar16 != '\0') goto LAB_18014dc08;
LAB_18014dc18:
        cVar14 = DAT_1805eae30;
        LOCK();
        DAT_1805eae30 = '\0';
        UNLOCK();
        if (cVar14 == '\x02') {
          WakeByAddressSingle(&DAT_1805eae30);
        }
        local_1c8 = (char *******)0x8000000000000000;
      }
      local_b8 = 0;
      uStack_c0 = 8;
      local_c8 = 0;
      local_98 = CONCAT44(local_98._4_4_,1);
      if (lVar22 != 0) {
        lVar19 = 8;
        lVar45 = 0;
        lVar40 = 0;
        do {
          lVar41 = local_b8;
          pppppppcVar25 = (char *******)(*(longlong *)((longlong)local_100 + lVar45 + 0x10) + -1);
          pppppppcVar36 = local_100;
          if (*(longlong *)((longlong)local_100 + lVar45 + 0x18) != 0) {
            pppppppcVar25 = (char *******)((longlong)pppppppcVar25 / 2);
            pppppppcVar36 = pppppppcVar25;
          }
          if ((longlong)pppppppcVar25 < 1) {
            pppppppcVar25 = (char *******)0x0;
          }
          local_188 = CONCAT44(local_188._4_4_,(int)pppppppcVar25 + 1);
          local_1a8 = (char *******)0x0;
          uStack_1a0 = (code *)&DAT_00000008;
          local_198 = (char *******)0x0;
          pppppppcStack_190 = (char *******)0x0;
          if (local_b8 == local_c8) {
            FUN_180444250(&local_c8);
            lVar19 = uStack_c0;
          }
          *(undefined8 *)(lVar19 + 0x20 + lVar40) = local_188;
          puVar33 = (undefined8 *)(lVar19 + 0x10 + lVar40);
          *puVar33 = local_198;
          puVar33[1] = pppppppcStack_190;
          puVar2 = (undefined4 *)(lVar19 + lVar40);
          *puVar2 = (undefined4)local_1a8;
          puVar2[1] = local_1a8._4_4_;
          puVar2[2] = (undefined4)uStack_1a0;
          puVar2[3] = uStack_1a0._4_4_;
          local_b8 = lVar41 + 1;
          lVar40 = lVar40 + 0x28;
          lVar45 = lVar45 + 0x20;
        } while (lVar22 << 5 != lVar45);
      }
LAB_18014eee7:
      local_f8 = (char *******)0x0;
      uStack_f0 = 1;
      local_e8 = (char *******)0x0;
      lVar22 = uStack_c0 + local_b8 * 0x28;
      lVar19 = 1;
      pppppppcVar25 = (char *******)0x0;
      ppppppcVar44 = (char ******)0x0;
      for (lVar40 = uStack_c0; lVar40 != lVar22; lVar40 = lVar40 + 0x28) {
        uVar16 = *(int *)(lVar40 + 0x20) - 1;
        uVar17 = (ulonglong)uVar16;
        if ((int)uVar16 < 1) {
          uVar17 = 0;
        }
        if (uVar17 < *(ulonglong *)(lVar40 + 0x10)) {
          local_72 = 1;
          FUN_1802aaec0(&local_1a8,uVar17 * 0x18 + *(longlong *)(lVar40 + 8));
          local_128 = local_198;
          local_138 = local_1a8;
          pppppppcStack_130 = (char *******)uStack_1a0;
        }
        else {
          local_138 = (char *******)0x0;
          pppppppcStack_130 = (char *******)0x1;
          local_128 = (char *******)0x0;
        }
        ppppppcVar44 = (char ******)((longlong)ppppppcVar44 + 1);
        local_198 = (char *******)(lVar40 + 0x20);
        local_1a8 = &local_1f8;
        uStack_1a0 = FUN_1802b9200;
        pppppppcStack_190 = (char *******)&LAB_1802b87a0;
        local_1f8 = ppppppcVar44;
        FUN_1802aab50(&local_118,&DAT_1804f64b3,&local_1a8);
        uVar17 = local_108;
        local_88 = local_118;
        local_80 = uStack_110;
        if ((ulonglong)((longlong)local_f8 - (longlong)pppppppcVar25) < local_108) {
          FUN_180444e70(&local_f8,pppppppcVar25,local_108,1,1);
          pppppppcVar25 = local_e8;
          lVar19 = uStack_f0;
LAB_18014f04c:
          memcpy((char *)((longlong)pppppppcVar25 + lVar19),local_80,uVar17);
        }
        else if (local_108 != 0) goto LAB_18014f04c;
        pppppppcVar25 = (char *******)((longlong)pppppppcVar25 + uVar17);
        local_e8 = pppppppcVar25;
        if (local_88 != (char *******)0x0) {
          thunk_FUN_1802919a0(local_80,local_88,1);
        }
        if (local_128 != (char *******)0x0) {
          local_118 = (char *******)&local_138;
          uStack_110 = (char *******)&DAT_180003600;
          FUN_1802aab50(&local_1a8,&DAT_1804f64bf,&local_118);
          pppppppcVar36 = local_198;
          local_88 = local_1a8;
          local_80 = (char *******)uStack_1a0;
          if ((char *******)((longlong)local_f8 - (longlong)pppppppcVar25) < local_198) {
            FUN_180444e70(&local_f8,pppppppcVar25,local_198,1,1);
            pppppppcVar25 = local_e8;
LAB_18014f103:
            lVar19 = uStack_f0;
            memcpy((char *)((longlong)pppppppcVar25 + uStack_f0),local_80,(size_t)pppppppcVar36);
          }
          else if (local_198 != (char *******)0x0) goto LAB_18014f103;
          pppppppcVar25 = (char *******)((longlong)pppppppcVar25 + (longlong)pppppppcVar36);
          local_e8 = pppppppcVar25;
          if (local_88 != (char *******)0x0) {
            thunk_FUN_1802919a0(local_80,local_88,1);
          }
        }
        pppppppcVar36 = local_138;
        if (local_138 != (char *******)0x0) {
          thunk_FUN_1802919a0(pppppppcStack_130,local_138,1);
        }
      }
      if (DAT_1805eae28 != 0) {
        local_72 = 1;
        FUN_180442ff3();
      }
      LOCK();
      bVar46 = DAT_1805eae00 == '\0';
      if (bVar46) {
        DAT_1805eae00 = '\x01';
      }
      UNLOCK();
      if (!bVar46) {
        local_72 = 1;
        FUN_18044ee10(&DAT_1805eae00);
      }
      if ((*(ulonglong *)PTR_DAT_1806073e0 & 0x7fffffffffffffff) == 0) {
        if (DAT_1805eae01 == '\0') {
          uVar16 = 0;
          local_88 = (char *******)CONCAT44(DAT_1805eae08._4_4_,(undefined4)DAT_1805eae08);
LAB_18014f260:
          lVar19 = DAT_1805eae18;
          local_80 = (char *******)CONCAT44(local_80._4_4_,uVar16);
          lVar22 = CONCAT44(DAT_1805eae10._4_4_,(undefined4)DAT_1805eae10);
          if (DAT_1805eae18 != 0) {
            lVar40 = 0;
            do {
              lVar45 = *(longlong *)(lVar22 + 8 + lVar40 * 0x28);
              lVar41 = *(longlong *)(lVar22 + 0x10 + lVar40 * 0x28);
              if (lVar41 != 0) {
                puVar33 = (undefined8 *)(lVar45 + 8);
                do {
                  pppppppcVar36 = (char *******)puVar33[-1];
                  if (pppppppcVar36 != (char *******)0x0) {
                    thunk_FUN_1802919a0(*puVar33,pppppppcVar36,1);
                  }
                  puVar33 = puVar33 + 3;
                  lVar41 = lVar41 + -1;
                } while (lVar41 != 0);
              }
              lVar41 = *(longlong *)(lVar22 + lVar40 * 0x28);
              if (lVar41 != 0) {
                pppppppcVar36 = (char *******)(lVar41 * 0x18);
                thunk_FUN_1802919a0(lVar45,pppppppcVar36,8);
              }
              lVar40 = lVar40 + 1;
            } while (lVar40 != lVar19);
          }
          puVar13 = PTR_DAT_1806073e0;
          cVar14 = (char)local_80;
          if (local_88 != (char *******)0x0) {
            pppppppcVar36 = (char *******)((longlong)local_88 * 0x28);
            thunk_FUN_1802919a0(lVar22,pppppppcVar36,8);
          }
          DAT_1805eae18 = local_b8;
          DAT_1805eae08._0_4_ = (undefined4)local_c8;
          DAT_1805eae08._4_4_ = local_c8._4_4_;
          DAT_1805eae10._0_4_ = (undefined4)uStack_c0;
          DAT_1805eae10._4_4_ = uStack_c0._4_4_;
          DAT_1805eae20 = CONCAT44(uVar12,uVar11);
          if ((cVar14 == '\0') && ((*(ulonglong *)puVar13 & 0x7fffffffffffffff) != 0)) {
            local_72 = 0;
            cVar14 = FUN_18044f9d0();
            if (cVar14 == '\0') {
              DAT_1805eae01 = '\x01';
            }
          }
          cVar15 = DAT_1805eae00;
          cVar14 = '\0';
          LOCK();
          DAT_1805eae00 = '\0';
          UNLOCK();
          if (cVar15 == '\x02') {
            local_72 = 0;
            WakeByAddressSingle(&DAT_1805eae00);
            cVar14 = '\0';
          }
          goto joined_r0x00018014f63f;
        }
LAB_18014f210:
        if ((*(ulonglong *)PTR_DAT_1806073e0 & 0x7fffffffffffffff) != 0) {
          local_72 = 1;
          cVar14 = FUN_18044f9d0();
          if (cVar14 == '\0') {
            DAT_1805eae01 = '\x01';
          }
        }
      }
      else {
        local_72 = 1;
        uVar16 = FUN_18044f9d0();
        if (DAT_1805eae01 == '\0') {
          uVar16 = uVar16 ^ 1;
          local_88 = (char *******)CONCAT44(DAT_1805eae08._4_4_,(undefined4)DAT_1805eae08);
          goto LAB_18014f260;
        }
        if ((char)uVar16 != '\0') goto LAB_18014f210;
      }
      cVar15 = DAT_1805eae00;
      LOCK();
      DAT_1805eae00 = '\0';
      UNLOCK();
      cVar14 = '\x01';
      if (cVar15 == '\x02') {
        local_72 = 1;
        WakeByAddressSingle(&DAT_1805eae00);
      }
joined_r0x00018014f63f:
      if (DAT_1805ea290 != 0) {
        local_72 = cVar14;
        FUN_180443e1b();
      }
      local_72 = cVar14;
      lVar22 = FUN_180292190(&DAT_1805ea280);
      DAT_1806082b0 = ((ulonglong)pppppppcVar36 & 0xffffffff) / 1000000 + lVar22 * 1000;
      if (local_f8 != (char *******)0x0) {
        thunk_FUN_1802919a0(uStack_f0,local_f8,1);
      }
      lVar19 = local_b8;
      lVar22 = uStack_c0;
      if (cVar14 != '\0') {
        if (local_b8 != 0) {
          lVar40 = 0;
          do {
            lVar45 = *(longlong *)(lVar22 + 8 + lVar40 * 0x28);
            lVar41 = *(longlong *)(lVar22 + 0x10 + lVar40 * 0x28);
            if (lVar41 != 0) {
              puVar33 = (undefined8 *)(lVar45 + 8);
              do {
                if (puVar33[-1] != 0) {
                  thunk_FUN_1802919a0(*puVar33,puVar33[-1],1);
                }
                puVar33 = puVar33 + 3;
                lVar41 = lVar41 + -1;
              } while (lVar41 != 0);
            }
            lVar41 = *(longlong *)(lVar22 + lVar40 * 0x28);
            if (lVar41 != 0) {
              thunk_FUN_1802919a0(lVar45,lVar41 * 0x18,8);
            }
            lVar40 = lVar40 + 1;
          } while (lVar40 != lVar19);
        }
        if (local_c8 != 0) {
          thunk_FUN_1802919a0(lVar22,local_c8 * 0x28,8);
        }
      }
      puVar35 = local_a8;
      lVar22 = local_1b0;
      pppppppcVar25 = local_1c8;
      uVar17 = CONCAT71((int7)((ulonglong)-(longlong)local_1c8 >> 8),1);
      if ((local_98 & 1) != 0) {
        lVar19 = CONCAT44(uStack_1bc,uStack_1c0);
        if (local_1b8 != (char *******)0x0) {
          puVar33 = (undefined8 *)(lVar19 + 8);
          pppppppcVar36 = local_1b8;
          do {
            if (puVar33[-1] != 0) {
              uVar17 = thunk_FUN_1802919a0(*puVar33,puVar33[-1],1);
            }
            puVar33 = puVar33 + 4;
            pppppppcVar36 = (char *******)((longlong)pppppppcVar36 + -1);
          } while (pppppppcVar36 != (char *******)0x0);
        }
        if (pppppppcVar25 != (char *******)0x0) {
          uVar17 = thunk_FUN_1802919a0(lVar19,(longlong)pppppppcVar25 << 5,8);
        }
      }
      if (lVar22 != 0) {
        uVar17 = thunk_FUN_1802919a0(local_100,lVar22 << 5,8);
      }
      if (local_1e8 == 0) {
        return uVar17;
      }
      uVar17 = thunk_FUN_1802919a0(puVar35,local_1e8 << 3,8);
      return uVar17;
    }
  }
  else {
    uVar16 = FUN_18044f9d0();
    if (DAT_1805eadb1 == '\0') {
      uVar16 = uVar16 ^ 1;
      goto LAB_18014da82;
    }
    if ((char)uVar16 == '\0') goto LAB_18014d9a6;
  }
  if (((*(ulonglong *)puVar13 & 0x7fffffffffffffff) != 0) &&
     (cVar14 = FUN_18044f9d0(), cVar14 == '\0')) {
    DAT_1805eadb1 = '\x01';
  }
LAB_18014d9a6:
  bVar10 = DAT_1805eadb0;
  LOCK();
  DAT_1805eadb0 = 0;
  UNLOCK();
  if (bVar10 != 2) {
    DAT_1805eadb0 = 0;
    return (ulonglong)bVar10;
  }
  uVar17 = WakeByAddressSingle(&DAT_1805eadb0);
  return uVar17;
LAB_18014e276:
  local_188 = CONCAT44(local_188._4_4_,1);
  local_1a8 = (char *******)0x0;
  uStack_1a0 = (code *)&DAT_00000008;
  local_198 = (char *******)0x0;
  pppppppcStack_190 = (char *******)0x0;
  if (local_b8 == local_c8) {
    FUN_180444250(&local_c8);
  }
  *(undefined8 *)(uStack_c0 + 0x20 + lVar19 * 0x28) = local_188;
  puVar33 = (undefined8 *)(uStack_c0 + 0x10 + lVar19 * 0x28);
  *puVar33 = local_198;
  puVar33[1] = pppppppcStack_190;
  puVar2 = (undefined4 *)(uStack_c0 + lVar19 * 0x28);
  *puVar2 = (undefined4)local_1a8;
  puVar2[1] = local_1a8._4_4_;
  puVar2[2] = (undefined4)uStack_1a0;
  puVar2[3] = uStack_1a0._4_4_;
  local_b8 = lVar19 + 1;
  goto joined_r0x00018014e102;
code_r0x00018014ea4b:
  uVar43 = *(undefined8 *)(local_98 + 8 + (longlong)pppppppcVar31 * 0x20);
  uVar3 = *(undefined8 *)(local_98 + 0x10 + (longlong)pppppppcVar31 * 0x20);
  local_71 = 1;
  cVar14 = FUN_180003660(&DAT_1804f6138,0xe,uVar43,uVar3);
  local_71 = 1;
  cVar15 = FUN_180003660(&DAT_1804f6146,0xd,uVar43,uVar3);
  pcVar29 = (char *)((longlong)pppppppcVar26 + 2);
  iVar23 = 0;
  if (cVar14 != '\0') {
    iVar23 = 100;
  }
  iVar37 = iVar23 + -100;
  if (cVar15 == '\0') {
    iVar37 = iVar23;
  }
  pppppppcVar27 = local_b0;
  pppppppcVar31 = local_80;
  if (iVar37 < iVar6) {
LAB_18014eadd:
    pcVar29 = (char *)((longlong)pppppppcVar26 + 2);
    pppppppcVar28 = pppppppcVar30;
  }
  goto LAB_18014e987;
}




/* ===== sub_18021c950  NOFUNC ===== */
// no function


/* ===== sub_1801f0e10  NOFUNC ===== */
// no function


/* ===== sub_1802266f0  NOFUNC ===== */
// no function


/* ===== sub_1800e9920  FUN_1800e9920 ===== */

/* WARNING: Removing unreachable block (ram,0x0001800eb551) */
/* WARNING: Removing unreachable block (ram,0x0001800eb12e) */
/* WARNING: Removing unreachable block (ram,0x0001800eb6a6) */
/* WARNING: Removing unreachable block (ram,0x0001800ec106) */
/* WARNING: Removing unreachable block (ram,0x0001800ec414) */
/* WARNING: Removing unreachable block (ram,0x0001800ec421) */
/* WARNING: Removing unreachable block (ram,0x0001800ec42c) */
/* WARNING: Removing unreachable block (ram,0x0001800ec43d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800e9920(void)

{
  HMODULE pHVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  undefined1 auVar6 [16];
  char *pcVar7;
  undefined6 uVar8;
  HMODULE pHVar9;
  undefined6 uVar10;
  undefined8 uVar11;
  HMODULE pHVar12;
  int iVar13;
  int iVar14;
  undefined8 *_Size;
  undefined *puVar15;
  undefined1 uVar16;
  undefined2 uVar17;
  undefined2 uVar18;
  undefined2 uVar19;
  undefined2 uVar20;
  undefined2 uVar21;
  undefined2 uVar22;
  char cVar23;
  byte bVar24;
  char cVar25;
  BOOL BVar26;
  undefined4 uVar27;
  int iVar28;
  ulonglong uVar29;
  HINSTANCE__ *pHVar30;
  longlong lVar31;
  ulonglong uVar32;
  undefined8 uVar33;
  uint *puVar34;
  undefined4 *puVar35;
  HINSTANCE__ *pHVar36;
  longlong lVar37;
  HINSTANCE__ *pHVar38;
  longlong lVar39;
  void *pvVar40;
  void *pvVar41;
  int *piVar42;
  void *_Buf1;
  longlong *plVar43;
  uint uVar44;
  longlong lVar45;
  uint uVar46;
  undefined1 *puVar47;
  HINSTANCE__ *pHVar48;
  HINSTANCE__ *pHVar49;
  undefined8 *puVar50;
  ulonglong uVar51;
  undefined1 *puVar52;
  byte bVar53;
  uint uVar54;
  HINSTANCE__ *pHVar55;
  byte *pbVar56;
  longlong lVar57;
  undefined1 uVar58;
  bool bVar60;
  undefined1 *local_340;
  undefined8 *local_338;
  undefined8 local_330;
  HINSTANCE__ *local_328;
  HINSTANCE__ *local_320;
  undefined1 *local_318;
  HMODULE local_310;
  HINSTANCE__ *local_308;
  undefined8 *local_300;
  undefined1 local_2f8 [2] [16];
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined1 *local_2c8;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  HMODULE local_278;
  HINSTANCE__ *local_270;
  HINSTANCE__ *local_268;
  HINSTANCE__ *local_260;
  HINSTANCE__ local_258;
  undefined1 uStack_254;
  undefined1 uStack_253;
  undefined2 uStack_252;
  uint uStack_250;
  undefined1 uStack_24c;
  undefined1 uStack_24b;
  undefined2 uStack_24a;
  uint uStack_248;
  undefined1 uStack_244;
  undefined1 uStack_243;
  undefined2 uStack_242;
  uint uStack_240;
  undefined1 uStack_23c;
  undefined1 uStack_23b;
  undefined2 uStack_23a;
  undefined8 local_238;
  uint uStack_230;
  uint uStack_22c;
  undefined1 local_228;
  undefined4 uStack_227;
  undefined4 uStack_223;
  undefined4 uStack_21f;
  undefined4 uStack_21b;
  undefined1 uStack_217;
  undefined6 uStack_216;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  HMODULE local_1b0;
  HINSTANCE__ *pHStack_1a8;
  undefined1 *local_1a0;
  undefined8 uStack_198;
  undefined8 *local_190;
  undefined8 local_188;
  undefined2 uStack_180;
  undefined2 uStack_17e;
  undefined2 uStack_17c;
  undefined2 uStack_17a;
  byte local_178;
  undefined1 uStack_177;
  undefined2 uStack_176;
  undefined2 uStack_174;
  undefined2 uStack_172;
  undefined1 uStack_170;
  undefined1 uStack_16f;
  undefined1 uStack_16e;
  undefined1 uStack_16d;
  int iStack_16c;
  undefined8 uStack_168;
  undefined8 uStack_160;
  longlong lStack_158;
  longlong local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int *local_c0;
  void *local_b8;
  undefined1 local_a9;
  HINSTANCE__ *local_a8;
  undefined1 local_9b;
  undefined1 local_9a;
  undefined1 local_99;
  HINSTANCE__ *local_98;
  undefined1 local_8f;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined1 local_8c;
  undefined1 local_8b;
  undefined1 local_8a;
  undefined1 local_89;
  HINSTANCE__ *local_88;
  undefined1 local_79;
  undefined8 local_78;
  undefined1 local_69;
  HINSTANCE__ *local_68;
  undefined8 local_60;
  undefined1 uVar59;
  
  local_60 = 0xfffffffffffffffe;
  if (DAT_1805ea230 == 0) {
    return;
  }
  FUN_18011fd80(&DAT_1804d8b38,0x20);
  FUN_1800f6da0(&local_188);
  local_68 = (HINSTANCE__ *)
             CONCAT26(uStack_17a,CONCAT24(uStack_17c,CONCAT22(uStack_17e,uStack_180)));
  FUN_180292cc0(&local_2d8,local_68,
                CONCAT26(uStack_172,
                         CONCAT24(uStack_174,CONCAT22(uStack_176,CONCAT11(uStack_177,local_178)))),
                &DAT_1804d87cd,0xb);
  if ((HMODULE)local_188 != (HMODULE)0x0) {
    thunk_FUN_1802919a0(local_68,local_188,1);
  }
  local_188 = (undefined **)((ulonglong)local_188 & 0xffffffff00000000);
  uStack_180 = 0;
  uStack_17e = 0;
  uStack_17c = 0;
  uStack_17a = 0;
  local_178 = 7;
  uStack_177 = 0;
  uStack_176 = 0;
  uStack_168._0_4_ = (uint)uStack_168 & 0xffffff00;
  uStack_174 = 0;
  uStack_172 = 0;
  uStack_170 = 0;
  uStack_16f = 0;
  uStack_16d = 0;
  iStack_16c = 1;
  uStack_16e = 1;
  local_68 = (HINSTANCE__ *)CONCAT44(uStack_2d4,local_2d8);
  pHVar55 = (HINSTANCE__ *)CONCAT44(uStack_2cc,uStack_2d0);
  local_88 = pHVar55;
  uVar29 = FUN_180295830(&local_188,pHVar55,local_2c8);
  if (local_68 != (HINSTANCE__ *)0x0) {
    thunk_FUN_1802919a0(local_88,local_68,1);
  }
  if ((uVar29 & 1) == 0) {
    FUN_1800658a0();
    pHVar38 = (HINSTANCE__ *)thunk_FUN_180291940(0x20,8);
    if (pHVar38 == (HINSTANCE__ *)0x0) {
      local_68 = pHVar55;
      FUN_180450301(8,0x20);
      goto LAB_1800ed03d;
    }
    *(longlong *)pHVar38 = 1;
    *(longlong *)(pHVar38 + 2) = 1;
    *(longlong *)(pHVar38 + 4) = 0;
    *(HINSTANCE__ **)(pHVar38 + 6) = pHVar55;
    local_188 = (undefined **)0x1;
    uStack_180 = 1;
    uStack_17e = 0;
    uStack_17c = 0;
    uStack_17a = 0;
    local_178 = 0;
    uStack_177 = 0;
    uStack_170 = 0;
    uStack_16f = 0;
    uStack_16e = 0;
    uStack_16d = 0;
    iStack_16c = 0;
    uStack_168._0_4_ = 8;
    uStack_168._4_4_ = 0;
    uStack_160 = (undefined1 *)0x0;
    local_320 = pHVar38;
    FUN_1800658a0();
    pHVar55 = (HINSTANCE__ *)thunk_FUN_180291940(0x30,8);
    local_88 = pHVar38;
    if (pHVar55 == (HINSTANCE__ *)0x0) {
      FUN_180450301(8,0x30);
      goto LAB_1800ed03d;
    }
    pHVar55[8].unused = (uint)uStack_168;
    pHVar55[9].unused = uStack_168._4_4_;
    pHVar55[10].unused = (int)uStack_160;
    pHVar55[0xb].unused = uStack_160._4_4_;
    pHVar55[4].unused = CONCAT22(uStack_176,CONCAT11(uStack_177,local_178));
    pHVar55[5].unused = CONCAT22(uStack_172,uStack_174);
    pHVar55[6].unused = CONCAT13(uStack_16d,CONCAT12(uStack_16e,CONCAT11(uStack_16f,uStack_170)));
    pHVar55[7].unused = iStack_16c;
    pHVar55->unused = (int)local_188;
    pHVar55[1].unused = local_188._4_4_;
    pHVar55[2].unused = CONCAT22(uStack_17e,uStack_180);
    pHVar55[3].unused = CONCAT22(uStack_17a,uStack_17c);
    LOCK();
    lVar31 = *(longlong *)pHVar55;
    *(longlong *)pHVar55 = *(longlong *)pHVar55 + 1;
    UNLOCK();
    local_328 = pHVar55;
    if (*(longlong *)pHVar55 == 0 || SCARRY8(lVar31,1) != *(longlong *)pHVar55 < 0)
    goto LAB_1800ed03d;
    LOCK();
    lVar31 = *(longlong *)pHVar38;
    *(longlong *)pHVar38 = *(longlong *)pHVar38 + 1;
    UNLOCK();
    if (*(longlong *)pHVar38 == 0 || SCARRY8(lVar31,1) != *(longlong *)pHVar38 < 0)
    goto LAB_1800ed03d;
    local_178 = 0;
    uStack_177 = 0;
    uStack_176 = 0;
    uStack_174 = 0;
    uStack_172 = 0x8000;
    local_188 = (undefined **)0x0;
    uStack_160 = (undefined1 *)((ulonglong)uStack_160 & 0xffffffffffffff00);
    local_310 = pHVar55;
    local_308 = pHVar38;
    local_68 = pHVar55;
    FUN_1800658a0();
    local_78 = (HINSTANCE__ *)thunk_FUN_180291940(0xb,1);
    if (local_78 == (HINSTANCE__ *)0x0) {
      FUN_18045031b(1,0xb);
      goto LAB_1800ed03d;
    }
    *(longlong *)local_78 = 0x2d326e6576616568;
    *(undefined4 *)((longlong)&local_78[1].unused + 3) = 0x676f6c2d;
    local_258.unused = 0xb;
    uStack_254 = 0;
    uStack_253 = 0;
    uStack_252 = 0;
    uStack_250 = (uint)local_78;
    uStack_24c = (undefined1)((ulonglong)local_78 >> 0x20);
    uStack_24b = (undefined1)((ulonglong)local_78 >> 0x28);
    uStack_24a = (undefined2)((ulonglong)local_78 >> 0x30);
    uStack_248 = 0xb;
    uStack_244 = 0;
    uStack_243 = 0;
    uStack_242 = 0;
    FUN_1802923a0(&local_2b8,&local_188,&local_258);
    puVar15 = PTR_DAT_1806073d8;
    local_2f8[0]._8_4_ = (undefined4)uStack_2a0;
    local_2f8[0]._0_8_ = local_2a8;
    local_2f8[0]._12_4_ = uStack_2a0._4_4_;
    cVar25 = (char)uStack_290;
    local_330 = 0;
    local_268 = local_68;
    local_260 = local_88;
    pHVar55 = uStack_2b0;
    if ((char)local_2b8 == '\0') {
      if (*(longlong *)PTR_DAT_1806073d8 == 0) {
        local_89 = 1;
        local_8a = 1;
        local_8b = 1;
        FUN_180296dc0(&local_188,"RUST_MIN_STACKNil",0xe);
        pHVar55 = (HINSTANCE__ *)0x200000;
        local_78 = (HINSTANCE__ *)local_188;
        local_98 = (HINSTANCE__ *)
                   CONCAT26(uStack_17a,CONCAT24(uStack_17c,CONCAT22(uStack_17e,uStack_180)));
        FUN_1802b1da0(&local_258,local_98,
                      CONCAT26(uStack_172,
                               CONCAT24(uStack_174,
                                        CONCAT22(uStack_176,CONCAT11(uStack_177,local_178)))));
        if ((local_258.unused != 1) &&
           (uVar29 = CONCAT26(uStack_242,CONCAT15(uStack_243,CONCAT14(uStack_244,uStack_248))),
           uVar29 != 0)) {
          pcVar7 = (char *)CONCAT26(uStack_24a,CONCAT15(uStack_24b,CONCAT14(uStack_24c,uStack_250)))
          ;
          if (uVar29 == 1) {
            cVar23 = *pcVar7;
            if ((cVar23 == '+') || (cVar23 == '-')) goto joined_r0x0001800e9cc5;
          }
          else {
            cVar23 = *pcVar7;
          }
          uVar51 = (ulonglong)(cVar23 == '+');
          if (uVar29 - uVar51 < 0x11) {
            if (uVar29 == uVar51) {
              pHVar55 = (HINSTANCE__ *)0x0;
            }
            else {
              pHVar55 = (HINSTANCE__ *)0x0;
              lVar31 = 0;
              do {
                if (9 < (byte)pcVar7[lVar31 + uVar51] - 0x30) {
                  pHVar55 = (HINSTANCE__ *)0x200000;
                  break;
                }
                pHVar55 = (HINSTANCE__ *)
                          ((ulonglong)((byte)pcVar7[lVar31 + uVar51] - 0x30) +
                          (longlong)pHVar55 * 10);
                lVar31 = lVar31 + 1;
              } while (lVar31 != uVar29 + -uVar51);
            }
          }
          else {
            pHVar55 = (HINSTANCE__ *)0x0;
            lVar31 = 0;
            while( true ) {
              if (lVar31 == uVar29 + -uVar51) goto joined_r0x0001800e9cc5;
              auVar2._8_8_ = 0;
              auVar2._0_8_ = pHVar55;
              uVar32 = SUB168(auVar2 * ZEXT816(10),0);
              if (SUB168(auVar2 * ZEXT816(10),8) != 0) break;
              uVar54 = (byte)pcVar7[lVar31 + uVar51] - 0x30;
              pHVar55 = (HINSTANCE__ *)(uVar32 + uVar54);
              if ((9 < uVar54) || (lVar31 = lVar31 + 1, CARRY8(uVar32,(ulonglong)uVar54))) break;
            }
            pHVar55 = (HINSTANCE__ *)0x200000;
          }
        }
joined_r0x0001800e9cc5:
        if (local_78 != (HINSTANCE__ *)0x0) {
          thunk_FUN_1802919a0(local_98,local_78,1);
        }
        *(undefined1 **)puVar15 = (undefined1 *)((longlong)&pHVar55->unused + 1);
      }
      else {
        pHVar55 = (HINSTANCE__ *)(*(longlong *)PTR_DAT_1806073d8 + -1);
      }
    }
    local_89 = 1;
    local_8a = 1;
    local_8b = 1;
    uVar33 = FUN_180292300();
    local_89 = 1;
    local_8a = 1;
    local_8b = 0;
    local_270 = (HINSTANCE__ *)FUN_180295110(uVar33,local_2f8);
    if (cVar25 == '\0') {
      local_99 = 1;
      local_9a = 1;
      FUN_180299180(&local_1b0,&local_270);
    }
    else {
      local_1b0 = (HINSTANCE__ *)0x0;
      pHStack_1a8 = (HINSTANCE__ *)&DAT_00000008;
      local_1a0 = (undefined1 *)0x0;
      uStack_198 = 0;
    }
    local_188 = (undefined **)0x1;
    uStack_180 = 1;
    uStack_17e = 0;
    uStack_17c = 0;
    uStack_17a = 0;
    local_178 = 0;
    uStack_177 = 0;
    uStack_176 = 0;
    uStack_174 = 0;
    uStack_172 = 0;
    uStack_170 = 0;
    uStack_16f = 0;
    uStack_16e = 0;
    uStack_16d = 0;
    iStack_16c = 0;
    FUN_1800658a0();
    local_78 = (HINSTANCE__ *)thunk_FUN_180291940(0x30,8);
    if (local_78 == (HINSTANCE__ *)0x0) {
      FUN_180450301(8,0x30);
      goto LAB_1800ed03d;
    }
    local_78[8].unused = (uint)uStack_168;
    local_78[9].unused = uStack_168._4_4_;
    local_78[10].unused = (int)uStack_160;
    local_78[0xb].unused = uStack_160._4_4_;
    *(longlong *)(local_78 + 4) =
         CONCAT26(uStack_172,
                  CONCAT24(uStack_174,CONCAT22(uStack_176,CONCAT11(uStack_177,local_178))));
    *(longlong *)(local_78 + 6) =
         CONCAT44(iStack_16c,
                  CONCAT13(uStack_16d,CONCAT12(uStack_16e,CONCAT11(uStack_16f,uStack_170))));
    *(undefined ***)local_78 = local_188;
    *(longlong *)(local_78 + 2) =
         CONCAT26(uStack_17a,CONCAT24(uStack_17c,CONCAT22(uStack_17e,uStack_180)));
    LOCK();
    lVar31 = *(longlong *)local_78;
    *(longlong *)local_78 = *(longlong *)local_78 + 1;
    UNLOCK();
    local_278 = local_78;
    if (*(longlong *)local_78 == 0 || SCARRY8(lVar31,1) != *(longlong *)local_78 < 0)
    goto LAB_1800ed03d;
    uStack_230 = (uint)local_68;
    uStack_22c = (uint)((ulonglong)local_68 >> 0x20);
    local_228 = SUB81(local_88,0);
    uStack_227 = (undefined4)((ulonglong)local_88 >> 8);
    uStack_223._0_3_ = (undefined3)((ulonglong)local_88 >> 0x28);
    uStack_248 = (uint)local_1a0;
    uStack_244 = (undefined1)((ulonglong)local_1a0 >> 0x20);
    uStack_243 = (undefined1)((ulonglong)local_1a0 >> 0x28);
    uStack_242 = (undefined2)((ulonglong)local_1a0 >> 0x30);
    uStack_240 = (uint)uStack_198;
    uStack_23c = (undefined1)((ulonglong)uStack_198 >> 0x20);
    uStack_23b = (undefined1)((ulonglong)uStack_198 >> 0x28);
    uStack_23a = (undefined2)((ulonglong)uStack_198 >> 0x30);
    local_258.unused = (uint)local_1b0;
    uStack_254 = (undefined1)((ulonglong)local_1b0 >> 0x20);
    uStack_253 = (undefined1)((ulonglong)local_1b0 >> 0x28);
    uStack_252 = (undefined2)((ulonglong)local_1b0 >> 0x30);
    uStack_250 = (uint)pHStack_1a8;
    uStack_24c = (undefined1)((ulonglong)pHStack_1a8 >> 0x20);
    uStack_24b = (undefined1)((ulonglong)pHStack_1a8 >> 0x28);
    uStack_24a = (undefined2)((ulonglong)pHStack_1a8 >> 0x30);
    local_238._0_4_ = (uint)local_78;
    local_238._4_4_ = (uint)((ulonglong)local_78 >> 0x20);
    if (*(longlong *)(local_78 + 4) != 0) {
      local_8c = 1;
      FUN_180292380(*(longlong *)(local_78 + 4) + 0x10);
    }
    lStack_158 = CONCAT35((undefined3)uStack_223,CONCAT41(uStack_227,local_228));
    uStack_17c = CONCAT11(uStack_24b,uStack_24c);
    uStack_174 = CONCAT11(uStack_243,uStack_244);
    iStack_16c = CONCAT22(uStack_23a,CONCAT11(uStack_23b,uStack_23c));
    uStack_168._0_4_ = (uint)local_238;
    uStack_168._4_4_ = local_238._4_4_;
    uStack_160 = (undefined1 *)CONCAT44(uStack_22c,uStack_230);
    local_178 = (byte)uStack_248;
    uStack_177 = (undefined1)(uStack_248 >> 8);
    uStack_176 = (undefined2)(uStack_248 >> 0x10);
    uStack_172 = uStack_242;
    uStack_170 = (undefined1)uStack_240;
    uStack_16f = (undefined1)(uStack_240 >> 8);
    uStack_16e = (undefined1)(uStack_240 >> 0x10);
    uStack_16d = (undefined1)(uStack_240 >> 0x18);
    local_188 = (undefined **)
                CONCAT44(CONCAT22(uStack_252,CONCAT11(uStack_253,uStack_254)),local_258.unused);
    uStack_180 = (undefined2)uStack_250;
    uStack_17e = (undefined2)(uStack_250 >> 0x10);
    uStack_17a = uStack_24a;
    FUN_1800658a0();
    puVar34 = (uint *)thunk_FUN_180291940(0x38,8);
    if (puVar34 == (uint *)0x0) {
      FUN_180450301(8,0x38);
      goto LAB_1800ed03d;
    }
    *(ulonglong *)(puVar34 + 0xc) = CONCAT35((undefined3)uStack_223,CONCAT41(uStack_227,local_228));
    puVar34[8] = (uint)local_238;
    puVar34[9] = local_238._4_4_;
    puVar34[10] = uStack_230;
    puVar34[0xb] = uStack_22c;
    puVar34[4] = uStack_248;
    puVar34[5] = CONCAT22(uStack_242,CONCAT11(uStack_243,uStack_244));
    puVar34[6] = uStack_240;
    puVar34[7] = CONCAT22(uStack_23a,CONCAT11(uStack_23b,uStack_23c));
    *puVar34 = local_258.unused;
    puVar34[1] = CONCAT22(uStack_252,CONCAT11(uStack_253,uStack_254));
    puVar34[2] = uStack_250;
    puVar34[3] = CONCAT22(uStack_24a,CONCAT11(uStack_24b,uStack_24c));
    LOCK();
    lVar31 = *(longlong *)local_270;
    *(longlong *)local_270 = *(longlong *)local_270 + 1;
    UNLOCK();
    if (*(longlong *)local_270 == 0 || SCARRY8(lVar31,1) != *(longlong *)local_270 < 0)
    goto LAB_1800ed03d;
    local_188 = (undefined **)local_270;
    uStack_180 = SUB82(puVar34,0);
    uStack_17e = (undefined2)((ulonglong)puVar34 >> 0x10);
    uStack_17c = (undefined2)((ulonglong)puVar34 >> 0x20);
    uStack_17a = (undefined2)((ulonglong)puVar34 >> 0x30);
    local_178 = 0x20;
    uStack_177 = 0x6c;
    uStack_176 = 0x8045;
    uStack_174 = 1;
    uStack_172 = 0;
    FUN_1800658a0();
    puVar35 = (undefined4 *)thunk_FUN_180291940(0x18,8);
    if (puVar35 == (undefined4 *)0x0) {
      FUN_180450301(8,0x18);
      goto LAB_1800ed03d;
    }
    *(ulonglong *)(puVar35 + 4) =
         CONCAT26(uStack_172,
                  CONCAT24(uStack_174,CONCAT22(uStack_176,CONCAT11(uStack_177,local_178))));
    *puVar35 = (int)local_188;
    puVar35[1] = local_188._4_4_;
    puVar35[2] = CONCAT22(uStack_17e,uStack_180);
    puVar35[3] = CONCAT22(uStack_17a,uStack_17c);
    local_8c = 0;
    lVar31 = FUN_180292410(pHVar55);
    uVar21 = uStack_17a;
    uVar19 = uStack_17c;
    uVar17 = uStack_17e;
    pHVar55 = local_270;
    uStack_17e = (undefined2)((ulonglong)puVar35 >> 0x10);
    uVar18 = uStack_17e;
    uStack_17c = (undefined2)((ulonglong)puVar35 >> 0x20);
    uVar20 = uStack_17c;
    uStack_17a = (undefined2)((ulonglong)puVar35 >> 0x30);
    uVar22 = uStack_17a;
    if (lVar31 == 1) {
      LOCK();
      *(longlong *)local_278 = *(longlong *)local_278 + -1;
      UNLOCK();
      uStack_17e = uVar17;
      uStack_17c = uVar19;
      uStack_17a = uVar21;
      if (*(longlong *)local_278 == 0) {
        FUN_180295a20(&local_278);
      }
      LOCK();
      *(longlong *)local_270 = *(longlong *)local_270 + -1;
      UNLOCK();
      if (*(longlong *)local_270 == 0) {
        local_89 = 0;
        local_8a = 0;
        local_8b = 0;
        FUN_180295b60(&local_270);
      }
      uStack_180 = SUB82(puVar35,0);
      local_188 = (undefined **)0x0;
      local_79 = 0;
      uStack_17e = uVar18;
      uStack_17c = uVar20;
      uStack_17a = uVar22;
      FUN_18005c5a0(puVar35);
    }
    else {
      local_188 = (undefined **)local_270;
      uStack_180 = SUB82(local_278,0);
      uStack_17e = (undefined2)((ulonglong)local_278 >> 0x10);
      uStack_17c = (undefined2)((ulonglong)local_278 >> 0x20);
      uStack_17a = (undefined2)((ulonglong)local_278 >> 0x30);
      local_178 = (byte)puVar35;
      uStack_177 = (undefined1)((ulonglong)puVar35 >> 8);
      uStack_176 = uVar18;
      uStack_174 = uVar20;
      uStack_172 = uVar22;
      CloseHandle(puVar35);
      LOCK();
      *(longlong *)pHVar55 = *(longlong *)pHVar55 + -1;
      UNLOCK();
      if (*(longlong *)pHVar55 == 0) {
        FUN_180295b60(&local_188);
      }
      plVar43 = (longlong *)
                CONCAT26(uStack_17a,CONCAT24(uStack_17c,CONCAT22(uStack_17e,uStack_180)));
      LOCK();
      *plVar43 = *plVar43 + -1;
      UNLOCK();
      if (*plVar43 == 0) {
        local_79 = 0;
        FUN_180295a20(&uStack_180);
      }
    }
    pHVar55 = local_68;
    LOCK();
    lVar31 = *(longlong *)local_68;
    *(longlong *)local_68 = *(longlong *)local_68 + 1;
    UNLOCK();
    if (*(longlong *)local_68 == 0 || SCARRY8(lVar31,1) != *(longlong *)local_68 < 0)
    goto LAB_1800ed03d;
    local_188 = (undefined **)local_68;
    FUN_1800658a0();
    pHVar38 = (HINSTANCE__ *)thunk_FUN_180291940(8,8);
    if (pHVar38 == (HINSTANCE__ *)0x0) {
      FUN_180450301(8,8);
      goto LAB_1800ed03d;
    }
    *(HINSTANCE__ **)pHVar38 = pHVar55;
    uStack_180 = 0x87d8;
    uStack_17e = 0x804d;
    uStack_17c = 1;
    uStack_17a = 0;
    local_188 = (undefined **)pHVar38;
    if (DAT_1805ea0c0 != 0) {
      FUN_180443f77(&local_188);
    }
    local_78 = (HINSTANCE__ *)local_188;
    if ((HINSTANCE__ *)local_188 != (HINSTANCE__ *)0x0) {
      local_98 = (HINSTANCE__ *)
                 CONCAT26(uStack_17a,CONCAT24(uStack_17c,CONCAT22(uStack_17e,uStack_180)));
      if (*(code **)local_98 != (code *)0x0) {
        (**(code **)local_98)(local_188);
      }
      if (*(longlong *)(local_98 + 2) != 0) {
        thunk_FUN_1802919a0(local_78,*(longlong *)(local_98 + 2),*(longlong *)(local_98 + 4));
      }
    }
    pHVar38 = local_68;
    pHVar55 = local_88;
    LOCK();
    lVar31 = *(longlong *)local_68;
    *(longlong *)local_68 = *(longlong *)local_68 + 1;
    UNLOCK();
    if (*(longlong *)local_68 == 0 || SCARRY8(lVar31,1) != *(longlong *)local_68 < 0)
    goto LAB_1800ed03d;
    LOCK();
    lVar31 = *(longlong *)local_88;
    *(longlong *)local_88 = *(longlong *)local_88 + 1;
    UNLOCK();
    if (*(longlong *)local_88 == 0 || SCARRY8(lVar31,1) != *(longlong *)local_88 < 0)
    goto LAB_1800ed03d;
    local_188 = (undefined **)local_68;
    uStack_180 = SUB82(local_88,0);
    uStack_17e = (undefined2)((ulonglong)local_88 >> 0x10);
    uStack_17c = (undefined2)((ulonglong)local_88 >> 0x20);
    uStack_17a = (undefined2)((ulonglong)local_88 >> 0x30);
    FUN_1800658a0();
    pHVar30 = (HINSTANCE__ *)thunk_FUN_180291940(0x10,8);
    if (pHVar30 == (HINSTANCE__ *)0x0) {
      FUN_180450301(8,0x10);
      goto LAB_1800ed03d;
    }
    *(HINSTANCE__ **)pHVar30 = pHVar38;
    *(HINSTANCE__ **)(pHVar30 + 2) = pHVar55;
    uStack_180 = 0x8808;
    uStack_17e = 0x804d;
    uStack_17c = 1;
    uStack_17a = 0;
    local_188 = (undefined **)pHVar30;
    if (DAT_1805ea0a8 != 0) {
      FUN_18044385e(&DAT_1805ea098,&local_188);
    }
    local_78 = (HINSTANCE__ *)local_188;
    pHVar55 = local_88;
    if ((HINSTANCE__ *)local_188 != (HINSTANCE__ *)0x0) {
      local_98 = (HINSTANCE__ *)
                 CONCAT26(uStack_17a,CONCAT24(uStack_17c,CONCAT22(uStack_17e,uStack_180)));
      if (*(code **)local_98 != (code *)0x0) {
        (**(code **)local_98)(local_188);
      }
      pHVar55 = local_88;
      if (*(longlong *)(local_98 + 2) != 0) {
        thunk_FUN_1802919a0(local_78,*(longlong *)(local_98 + 2),*(longlong *)(local_98 + 4));
      }
    }
    pHVar38 = local_68;
    LOCK();
    lVar31 = *(longlong *)local_68;
    *(longlong *)local_68 = *(longlong *)local_68 + 1;
    UNLOCK();
    if (*(longlong *)local_68 == 0 || SCARRY8(lVar31,1) != *(longlong *)local_68 < 0)
    goto LAB_1800ed03d;
    LOCK();
    lVar31 = *(longlong *)pHVar55;
    *(longlong *)pHVar55 = *(longlong *)pHVar55 + 1;
    UNLOCK();
    if (*(longlong *)pHVar55 == 0 || SCARRY8(lVar31,1) != *(longlong *)pHVar55 < 0)
    goto LAB_1800ed03d;
    local_188 = (undefined **)local_68;
    uStack_180 = SUB82(pHVar55,0);
    uStack_17e = (undefined2)((ulonglong)pHVar55 >> 0x10);
    uStack_17c = (undefined2)((ulonglong)pHVar55 >> 0x20);
    uStack_17a = (undefined2)((ulonglong)pHVar55 >> 0x30);
    FUN_1800658a0();
    pHVar30 = (HINSTANCE__ *)thunk_FUN_180291940(0x10,8);
    if (pHVar30 == (HINSTANCE__ *)0x0) {
      FUN_180450301(8,0x10);
      goto LAB_1800ed03d;
    }
    *(HINSTANCE__ **)pHVar30 = pHVar38;
    *(HINSTANCE__ **)(pHVar30 + 2) = pHVar55;
    uStack_180 = 0x8838;
    uStack_17e = 0x804d;
    uStack_17c = 1;
    uStack_17a = 0;
    local_188 = (undefined **)pHVar30;
    if (DAT_1805ea090 != 0) {
      FUN_18044385e(&DAT_1805ea080,&local_188);
    }
    local_78 = (HINSTANCE__ *)local_188;
    if ((HINSTANCE__ *)local_188 == (HINSTANCE__ *)0x0) {
      LOCK();
      *(longlong *)local_68 = *(longlong *)local_68 + -1;
      lVar31 = *(longlong *)local_68;
      UNLOCK();
      pHVar55 = local_88;
    }
    else {
      local_98 = (HINSTANCE__ *)
                 CONCAT26(uStack_17a,CONCAT24(uStack_17c,CONCAT22(uStack_17e,uStack_180)));
      if (*(code **)local_98 != (code *)0x0) {
        (**(code **)local_98)(local_188);
      }
      pHVar55 = local_88;
      if (*(longlong *)(local_98 + 2) != 0) {
        thunk_FUN_1802919a0(local_78,*(longlong *)(local_98 + 2),*(longlong *)(local_98 + 4));
      }
      LOCK();
      *(longlong *)local_68 = *(longlong *)local_68 + -1;
      lVar31 = *(longlong *)local_68;
      UNLOCK();
    }
    if (lVar31 == 0) {
      FUN_180086cf0(&local_328);
    }
    LOCK();
    *(longlong *)pHVar55 = *(longlong *)pHVar55 + -1;
    UNLOCK();
    if (*(longlong *)pHVar55 == 0) {
      FUN_180086d90(&local_320);
    }
  }
  else {
    FUN_18005c5a0(pHVar55);
  }
  FUN_18011fd80(&DAT_1804d8b58,0x22);
  FUN_180297860(1,&DAT_1804d8868);
  uVar29 = DAT_1806079e8;
  LOCK();
  DAT_1806079e8 = DAT_1806079e8 + 1;
  UNLOCK();
  if (DAT_1805ea290 != 0) {
    FUN_180443e1b();
  }
  iVar28 = (int)(uVar29 / 0x30);
  uVar51 = (ulonglong)(uint)(iVar28 * 0x10);
  uVar54 = ((int)uVar29 + iVar28 * -0x30) * 8;
  lVar31 = FUN_180292190(&DAT_1805ea280);
  *(ulonglong *)(&DAT_180607568 + uVar54) = (uVar51 & 0xffffffff) / 1000000 + lVar31 * 1000;
  *(undefined8 *)(&DAT_1806076e8 + uVar54) = 4;
  *(undefined **)(&DAT_180607868 + uVar54) = &DAT_1804d8b7a;
  local_188 = &PTR_s_0_1_0_1804d96f8;
  uStack_180 = 0xae90;
  uStack_17e = 0x8004;
  uStack_17c = 1;
  uStack_17a = 0;
  local_178 = 0x10;
  uStack_177 = 0x97;
  uStack_176 = 0x804d;
  uStack_174 = 1;
  uStack_172 = 0;
  uStack_170 = 0x90;
  uStack_16f = 0xae;
  uStack_16e = 4;
  uStack_16d = 0x80;
  iStack_16c = 1;
  uStack_168._0_4_ = 0x804d9730;
  uStack_168._4_4_ = 1;
  uStack_160 = &LAB_18004ae90;
  FUN_1802aab50(&local_258,&DAT_1804d9740,&local_188);
  uStack_2b0 = (HINSTANCE__ *)&DAT_180003600;
  local_2b8 = &local_258;
  FUN_1802aab50(&local_188,&DAT_1804d8b7e,&local_2b8);
  lVar31 = CONCAT26(uStack_252,CONCAT15(uStack_253,CONCAT14(uStack_254,local_258.unused)));
  if (lVar31 != 0) {
    thunk_FUN_1802919a0(CONCAT26(uStack_24a,CONCAT15(uStack_24b,CONCAT14(uStack_24c,uStack_250))),
                        lVar31,1);
  }
  local_68 = (HINSTANCE__ *)local_188;
  local_88 = (HINSTANCE__ *)
             CONCAT26(uStack_17a,CONCAT24(uStack_17c,CONCAT22(uStack_17e,uStack_180)));
  FUN_1800e8390(1,local_88,
                CONCAT26(uStack_172,
                         CONCAT24(uStack_174,CONCAT22(uStack_176,CONCAT11(uStack_177,local_178)))));
  if (local_68 != (HINSTANCE__ *)0x0) {
    thunk_FUN_1802919a0(local_88,local_68,1);
  }
  FUN_18011fd80(&DAT_1804d8b8d,0x23);
  local_188 = (undefined **)0x0;
  BVar26 = GetModuleHandleExW(6,(LPCWSTR)FUN_1800e72e0,(HMODULE *)&local_188);
  if (BVar26 != 0) {
    DAT_180607510 = (HINSTANCE__ *)local_188;
  }
  AddVectoredExceptionHandler(1,(PVECTORED_EXCEPTION_HANDLER)&LAB_1800e6560);
  FUN_1800e8390(1,"crashguard armed (VEH + minidump on our AVs)",0x2c);
  FUN_18011fd80(&DAT_1804d8bb0,0x21);
  cVar25 = DAT_180607bf1;
  local_278 = (HINSTANCE__ *)0x1770;
  LOCK();
  DAT_180607bf1 = '\x01';
  UNLOCK();
  if (cVar25 == '\0') {
    local_178 = 0;
    uStack_177 = 0;
    uStack_176 = 0;
    uStack_174 = 0;
    uStack_172 = 0x8000;
    local_188 = (undefined **)0x0;
    uStack_160 = (undefined1 *)((ulonglong)uStack_160 & 0xffffffffffffff00);
    FUN_1800658a0();
    local_68 = (HINSTANCE__ *)thunk_FUN_180291940(0x10,1);
    iVar14 = _UNK_1804e2c0c;
    iVar13 = _UNK_1804e2c08;
    iVar28 = _UNK_1804e2c04;
    if (local_68 == (HINSTANCE__ *)0x0) {
      FUN_18045031b(1,0x10);
      goto LAB_1800ed03d;
    }
    local_68->unused = _DAT_1804e2c00;
    local_68[1].unused = iVar28;
    local_68[2].unused = iVar13;
    local_68[3].unused = iVar14;
    local_258.unused = 0x10;
    uStack_254 = 0;
    uStack_253 = 0;
    uStack_252 = 0;
    uStack_250 = (uint)local_68;
    uStack_24c = (undefined1)((ulonglong)local_68 >> 0x20);
    uStack_24b = (undefined1)((ulonglong)local_68 >> 0x28);
    uStack_24a = (undefined2)((ulonglong)local_68 >> 0x30);
    uStack_248 = 0x10;
    uStack_244 = 0;
    uStack_243 = 0;
    uStack_242 = 0;
    FUN_1802923a0(&local_2b8,&local_188,&local_258);
    puVar15 = PTR_DAT_1806073d8;
    local_2c8 = (undefined1 *)CONCAT44(uStack_294,local_298);
    local_2d8 = (undefined4)local_2a8;
    uStack_2d4 = local_2a8._4_4_;
    uStack_2d0 = (undefined4)uStack_2a0;
    uStack_2cc = uStack_2a0._4_4_;
    cVar25 = (char)uStack_290;
    local_310 = (HINSTANCE__ *)0x0;
    pHVar55 = uStack_2b0;
    if ((char)local_2b8 == '\0') {
      if (*(longlong *)PTR_DAT_1806073d8 == 0) {
        local_8d = 1;
        local_8e = 1;
        FUN_180296dc0(&local_188,"RUST_MIN_STACKNil",0xe);
        pHVar55 = (HINSTANCE__ *)0x200000;
        local_68 = (HINSTANCE__ *)local_188;
        local_88 = (HINSTANCE__ *)
                   CONCAT26(uStack_17a,CONCAT24(uStack_17c,CONCAT22(uStack_17e,uStack_180)));
        FUN_1802b1da0(&local_258,local_88,
                      CONCAT26(uStack_172,
                               CONCAT24(uStack_174,
                                        CONCAT22(uStack_176,CONCAT11(uStack_177,local_178)))));
        if ((local_258.unused != 1) &&
           (uVar29 = CONCAT26(uStack_242,CONCAT15(uStack_243,CONCAT14(uStack_244,uStack_248))),
           uVar29 != 0)) {
          pcVar7 = (char *)CONCAT26(uStack_24a,CONCAT15(uStack_24b,CONCAT14(uStack_24c,uStack_250)))
          ;
          if (uVar29 == 1) {
            cVar23 = *pcVar7;
            if ((cVar23 == '+') || (cVar23 == '-')) goto joined_r0x0001800ea701;
          }
          else {
            cVar23 = *pcVar7;
          }
          uVar51 = (ulonglong)(cVar23 == '+');
          if (uVar29 - uVar51 < 0x11) {
            if (uVar29 == uVar51) {
              pHVar55 = (HINSTANCE__ *)0x0;
            }
            else {
              pHVar55 = (HINSTANCE__ *)0x0;
              lVar31 = 0;
              do {
                if (9 < (byte)pcVar7[lVar31 + uVar51] - 0x30) {
                  pHVar55 = (HINSTANCE__ *)0x200000;
                  break;
                }
                pHVar55 = (HINSTANCE__ *)
                          ((ulonglong)((byte)pcVar7[lVar31 + uVar51] - 0x30) +
                          (longlong)pHVar55 * 10);
                lVar31 = lVar31 + 1;
              } while (lVar31 != uVar29 + -uVar51);
            }
          }
          else {
            pHVar55 = (HINSTANCE__ *)0x0;
            lVar31 = 0;
            while( true ) {
              if (lVar31 == uVar29 + -uVar51) goto joined_r0x0001800ea701;
              auVar3._8_8_ = 0;
              auVar3._0_8_ = pHVar55;
              uVar32 = SUB168(auVar3 * ZEXT816(10),0);
              if (SUB168(auVar3 * ZEXT816(10),8) != 0) break;
              uVar54 = (byte)pcVar7[lVar31 + uVar51] - 0x30;
              pHVar55 = (HINSTANCE__ *)(uVar32 + uVar54);
              if ((9 < uVar54) || (lVar31 = lVar31 + 1, CARRY8(uVar32,(ulonglong)uVar54))) break;
            }
            pHVar55 = (HINSTANCE__ *)0x200000;
          }
        }
joined_r0x0001800ea701:
        if (local_68 != (HINSTANCE__ *)0x0) {
          thunk_FUN_1802919a0(local_88,local_68,1);
        }
        *(undefined1 **)puVar15 = (undefined1 *)((longlong)&pHVar55->unused + 1);
      }
      else {
        pHVar55 = (HINSTANCE__ *)(*(longlong *)PTR_DAT_1806073d8 + -1);
      }
    }
    local_8d = 1;
    local_8e = 1;
    uVar33 = FUN_180292300();
    local_8d = 1;
    local_8e = 0;
    local_268 = (HINSTANCE__ *)FUN_180295110(uVar33,&local_2d8);
    if (cVar25 == '\0') {
      local_9b = 1;
      FUN_180299180(&local_1b0,&local_268);
    }
    else {
      local_1b0 = (HINSTANCE__ *)0x0;
      pHStack_1a8 = (HINSTANCE__ *)&DAT_00000008;
      local_1a0 = (undefined1 *)0x0;
      uStack_198 = 0;
    }
    local_188 = (undefined **)0x1;
    uStack_180 = 1;
    uStack_17e = 0;
    uStack_17c = 0;
    uStack_17a = 0;
    local_178 = 0;
    uStack_177 = 0;
    uStack_176 = 0;
    uStack_174 = 0;
    uStack_172 = 0;
    uStack_170 = 0;
    uStack_16f = 0;
    uStack_16e = 0;
    uStack_16d = 0;
    iStack_16c = 0;
    FUN_1800658a0();
    local_68 = (HINSTANCE__ *)thunk_FUN_180291940(0x30,8);
    if (local_68 == (HINSTANCE__ *)0x0) {
      FUN_180450301(8,0x30);
LAB_1800ed03d:
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    local_68[8].unused = (uint)uStack_168;
    local_68[9].unused = uStack_168._4_4_;
    local_68[10].unused = (int)uStack_160;
    local_68[0xb].unused = uStack_160._4_4_;
    *(longlong *)(local_68 + 4) =
         CONCAT26(uStack_172,
                  CONCAT24(uStack_174,CONCAT22(uStack_176,CONCAT11(uStack_177,local_178))));
    *(longlong *)(local_68 + 6) =
         CONCAT44(iStack_16c,
                  CONCAT13(uStack_16d,CONCAT12(uStack_16e,CONCAT11(uStack_16f,uStack_170))));
    *(undefined ***)local_68 = local_188;
    *(longlong *)(local_68 + 2) =
         CONCAT26(uStack_17a,CONCAT24(uStack_17c,CONCAT22(uStack_17e,uStack_180)));
    local_2f8[0]._0_8_ = local_68;
    LOCK();
    lVar31 = *(longlong *)local_68;
    *(longlong *)local_68 = *(longlong *)local_68 + 1;
    UNLOCK();
    if (*(longlong *)local_68 == 0 || SCARRY8(lVar31,1) != *(longlong *)local_68 < 0)
    goto LAB_1800ed03d;
    uStack_230 = 6000;
    uStack_22c = 0;
    uStack_248 = (uint)local_1a0;
    uStack_244 = (undefined1)((ulonglong)local_1a0 >> 0x20);
    uStack_243 = (undefined1)((ulonglong)local_1a0 >> 0x28);
    uStack_242 = (undefined2)((ulonglong)local_1a0 >> 0x30);
    uStack_240 = (uint)uStack_198;
    uStack_23c = (undefined1)((ulonglong)uStack_198 >> 0x20);
    uStack_23b = (undefined1)((ulonglong)uStack_198 >> 0x28);
    uStack_23a = (undefined2)((ulonglong)uStack_198 >> 0x30);
    local_258.unused = (uint)local_1b0;
    uStack_254 = (undefined1)((ulonglong)local_1b0 >> 0x20);
    uStack_253 = (undefined1)((ulonglong)local_1b0 >> 0x28);
    uStack_252 = (undefined2)((ulonglong)local_1b0 >> 0x30);
    uStack_250 = (uint)pHStack_1a8;
    uStack_24c = (undefined1)((ulonglong)pHStack_1a8 >> 0x20);
    uStack_24b = (undefined1)((ulonglong)pHStack_1a8 >> 0x28);
    uStack_24a = (undefined2)((ulonglong)pHStack_1a8 >> 0x30);
    local_238._0_4_ = (uint)local_68;
    local_238._4_4_ = (uint)((ulonglong)local_68 >> 0x20);
    if (*(longlong *)(local_68 + 4) != 0) {
      local_8f = 1;
      FUN_180292380(*(longlong *)(local_68 + 4) + 0x10);
    }
    uStack_17c = CONCAT11(uStack_24b,uStack_24c);
    uStack_174 = CONCAT11(uStack_243,uStack_244);
    iStack_16c = CONCAT22(uStack_23a,CONCAT11(uStack_23b,uStack_23c));
    uStack_168._0_4_ = (uint)local_238;
    uStack_168._4_4_ = local_238._4_4_;
    uStack_160 = (undefined1 *)CONCAT44(uStack_22c,uStack_230);
    local_178 = (byte)uStack_248;
    uStack_177 = (undefined1)(uStack_248 >> 8);
    uStack_176 = (undefined2)(uStack_248 >> 0x10);
    uStack_172 = uStack_242;
    uStack_170 = (undefined1)uStack_240;
    uStack_16f = (undefined1)(uStack_240 >> 8);
    uStack_16e = (undefined1)(uStack_240 >> 0x10);
    uStack_16d = (undefined1)(uStack_240 >> 0x18);
    local_188 = (undefined **)
                CONCAT44(CONCAT22(uStack_252,CONCAT11(uStack_253,uStack_254)),local_258.unused);
    uStack_180 = (undefined2)uStack_250;
    uStack_17e = (undefined2)(uStack_250 >> 0x10);
    uStack_17a = uStack_24a;
    FUN_1800658a0();
    puVar34 = (uint *)thunk_FUN_180291940(0x30,8);
    if (puVar34 == (uint *)0x0) {
      FUN_180450301(8,0x30);
      goto LAB_1800ed03d;
    }
    puVar34[8] = (uint)local_238;
    puVar34[9] = local_238._4_4_;
    puVar34[10] = uStack_230;
    puVar34[0xb] = uStack_22c;
    puVar34[4] = uStack_248;
    puVar34[5] = CONCAT22(uStack_242,CONCAT11(uStack_243,uStack_244));
    puVar34[6] = uStack_240;
    puVar34[7] = CONCAT22(uStack_23a,CONCAT11(uStack_23b,uStack_23c));
    *puVar34 = local_258.unused;
    puVar34[1] = CONCAT22(uStack_252,CONCAT11(uStack_253,uStack_254));
    puVar34[2] = uStack_250;
    puVar34[3] = CONCAT22(uStack_24a,CONCAT11(uStack_24b,uStack_24c));
    LOCK();
    lVar31 = *(longlong *)local_268;
    *(longlong *)local_268 = *(longlong *)local_268 + 1;
    UNLOCK();
    if (*(longlong *)local_268 == 0 || SCARRY8(lVar31,1) != *(longlong *)local_268 < 0)
    goto LAB_1800ed03d;
    local_188 = (undefined **)local_268;
    uStack_180 = SUB82(puVar34,0);
    uStack_17e = (undefined2)((ulonglong)puVar34 >> 0x10);
    uStack_17c = (undefined2)((ulonglong)puVar34 >> 0x20);
    uStack_17a = (undefined2)((ulonglong)puVar34 >> 0x30);
    local_178 = 0x60;
    uStack_177 = 0x6c;
    uStack_176 = 0x8045;
    uStack_174 = 1;
    uStack_172 = 0;
    FUN_1800658a0();
    puVar35 = (undefined4 *)thunk_FUN_180291940(0x18,8);
    if (puVar35 == (undefined4 *)0x0) {
      FUN_180450301(8,0x18);
      goto LAB_1800ed03d;
    }
    *(ulonglong *)(puVar35 + 4) =
         CONCAT26(uStack_172,
                  CONCAT24(uStack_174,CONCAT22(uStack_176,CONCAT11(uStack_177,local_178))));
    *puVar35 = (int)local_188;
    puVar35[1] = local_188._4_4_;
    puVar35[2] = CONCAT22(uStack_17e,uStack_180);
    puVar35[3] = CONCAT22(uStack_17a,uStack_17c);
    local_8f = 0;
    lVar31 = FUN_180292410(pHVar55);
    pHVar55 = local_268;
    if (lVar31 == 1) {
      LOCK();
      *(longlong *)local_2f8[0]._0_8_ = *(longlong *)local_2f8[0]._0_8_ + -1;
      UNLOCK();
      if (*(longlong *)local_2f8[0]._0_8_ == 0) {
        FUN_180295a20(local_2f8);
      }
      LOCK();
      *(longlong *)local_268 = *(longlong *)local_268 + -1;
      UNLOCK();
      if (*(longlong *)local_268 == 0) {
        local_8d = 0;
        local_8e = 0;
        FUN_180295b60(&local_268);
      }
      FUN_18005c5a0(puVar35);
    }
    else {
      local_188 = (undefined **)local_268;
      uStack_180 = SUB162(local_2f8[0],0);
      uStack_17e = SUB162(local_2f8[0],2);
      uStack_17c = SUB162(local_2f8[0],4);
      uStack_17a = SUB162(local_2f8[0],6);
      local_178 = (byte)puVar35;
      uStack_177 = (undefined1)((ulonglong)puVar35 >> 8);
      uStack_176 = (undefined2)((ulonglong)puVar35 >> 0x10);
      uStack_174 = (undefined2)((ulonglong)puVar35 >> 0x20);
      uStack_172 = (undefined2)((ulonglong)puVar35 >> 0x30);
      CloseHandle(puVar35);
      LOCK();
      *(longlong *)pHVar55 = *(longlong *)pHVar55 + -1;
      UNLOCK();
      if (*(longlong *)pHVar55 == 0) {
        FUN_180295b60(&local_188);
      }
      plVar43 = (longlong *)
                CONCAT26(uStack_17a,CONCAT24(uStack_17c,CONCAT22(uStack_17e,uStack_180)));
      LOCK();
      *plVar43 = *plVar43 + -1;
      UNLOCK();
      if (*plVar43 == 0) {
        FUN_180295a20(&uStack_180);
      }
    }
    local_258.unused = (int)&local_278;
    uStack_254 = (undefined1)((ulonglong)&local_278 >> 0x20);
    uStack_253 = (undefined1)((ulonglong)&local_278 >> 0x28);
    uStack_252 = (undefined2)((ulonglong)&local_278 >> 0x30);
    uStack_250 = 0x802b9200;
    uStack_24c = 1;
    uStack_24b = 0;
    uStack_24a = 0;
    FUN_1802aab50(&local_188,&DAT_1804e2c10,&local_258);
    local_68 = (HINSTANCE__ *)local_188;
    local_88 = (HINSTANCE__ *)
               CONCAT26(uStack_17a,CONCAT24(uStack_17c,CONCAT22(uStack_17e,uStack_180)));
    FUN_1800e8390(1,local_88,
                  CONCAT26(uStack_172,
                           CONCAT24(uStack_174,CONCAT22(uStack_176,CONCAT11(uStack_177,local_178))))
                 );
    if (local_68 != (HINSTANCE__ *)0x0) {
      thunk_FUN_1802919a0(local_88,local_68,1);
    }
  }
  FUN_18011fd80(&DAT_1804d8bd1,0x1e);
  FUN_1800f6da0(&local_188);
  local_68 = (HINSTANCE__ *)
             CONCAT26(uStack_17a,CONCAT24(uStack_17c,CONCAT22(uStack_17e,uStack_180)));
  FUN_180292cc0(&local_258,local_68,
                CONCAT26(uStack_172,
                         CONCAT24(uStack_174,CONCAT22(uStack_176,CONCAT11(uStack_177,local_178)))),
                &DAT_1804e2a30,0xc);
  if ((HINSTANCE__ *)local_188 != (HINSTANCE__ *)0x0) {
    thunk_FUN_1802919a0(local_68,local_188,1);
  }
  local_68 = (HINSTANCE__ *)
             CONCAT26(uStack_24a,CONCAT15(uStack_24b,CONCAT14(uStack_24c,uStack_250)));
  FUN_18029cfe0(&local_2b8);
  if (CONCAT26(uStack_252,CONCAT15(uStack_253,CONCAT14(uStack_254,local_258.unused))) != 0) {
    thunk_FUN_1802919a0(local_68);
  }
  pHVar55 = local_2a8;
  local_88 = local_2b8;
  local_68 = uStack_2b0;
  if (DAT_1805ea808 != 0) {
    FUN_180443c0f();
  }
  LOCK();
  bVar60 = DAT_1805ea7d0 == '\0';
  if (bVar60) {
    DAT_1805ea7d0 = '\x01';
  }
  UNLOCK();
  if (!bVar60) {
    FUN_18044ee10(&DAT_1805ea7d0);
  }
  puVar15 = PTR_DAT_1806073e0;
  if ((*(ulonglong *)PTR_DAT_1806073e0 & 0x7fffffffffffffff) == 0) {
    uVar54 = 0;
  }
  else {
    uVar54 = FUN_18044f9d0();
    uVar54 = uVar54 ^ 1;
  }
  if (DAT_1805ea7d1 == '\0') {
    local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
    local_78 = (HINSTANCE__ *)CONCAT44(local_78._4_4_,uVar54);
    pHVar30 = (HINSTANCE__ *)0x0;
    pHVar38 = (HINSTANCE__ *)0x0;
    bVar60 = false;
LAB_1800eade0:
    pHVar48 = pHVar38;
    if (!bVar60) {
      do {
        pHVar38 = pHVar48;
        if (pHVar55 < pHVar48) {
LAB_1800eae86:
          bVar60 = true;
          if (pHVar55 == pHVar30) goto LAB_1800eb032;
          puVar52 = (undefined1 *)((longlong)&pHVar30->unused + (longlong)&local_68->unused);
          pHVar48 = (HINSTANCE__ *)((longlong)pHVar55 - (longlong)pHVar30);
          goto joined_r0x0001800eaea9;
        }
        puVar52 = (undefined1 *)((longlong)&pHVar48->unused + (longlong)&local_68->unused);
        pHVar38 = pHVar55;
        if ((undefined1 *)((longlong)pHVar55 - (longlong)pHVar48) < (undefined1 *)0x10) {
          puVar47 = (undefined1 *)0x0;
          if (pHVar55 == pHVar48) goto LAB_1800eae86;
          while (puVar52[(longlong)puVar47] != '\n') {
            puVar47 = puVar47 + 1;
            if ((undefined1 *)((longlong)pHVar55 - (longlong)pHVar48) == puVar47)
            goto LAB_1800eae86;
          }
        }
        else {
          puVar47 = puVar52;
          lVar31 = FUN_1802b1fb0(10);
          if (lVar31 != 1) goto LAB_1800eae86;
        }
        pHVar38 = (HINSTANCE__ *)((longlong)&pHVar48->unused + (longlong)(puVar47 + 1));
        piVar42 = &pHVar48->unused;
        pHVar48 = pHVar38;
      } while ((pHVar55 <= (HINSTANCE__ *)((longlong)piVar42 + (longlong)puVar47)) ||
              (puVar52[(longlong)puVar47] != '\n'));
      bVar60 = false;
      puVar52 = (undefined1 *)((longlong)&pHVar30->unused + (longlong)&local_68->unused);
      pHVar48 = (HINSTANCE__ *)((longlong)pHVar38 - (longlong)pHVar30);
      pHVar30 = pHVar38;
joined_r0x0001800eaea9:
      if ((pHVar48 != (HINSTANCE__ *)0x0) &&
         (pHVar36 = (HINSTANCE__ *)((longlong)&pHVar48[-1].unused + 3),
         puVar52[(longlong)pHVar36] == '\n')) {
        pHVar49 = (HINSTANCE__ *)((longlong)&pHVar48[-1].unused + 2);
        if (pHVar36 == (HINSTANCE__ *)0x0) {
          puVar47 = (undefined1 *)0x0;
        }
        else {
          puVar47 = (undefined1 *)0x0;
          if (puVar52[(longlong)pHVar49] == '\r') {
            puVar47 = puVar52;
          }
        }
        pHVar48 = pHVar36;
        if (puVar47 != (undefined1 *)0x0) {
          puVar52 = puVar47;
          pHVar48 = pHVar49;
        }
      }
      if (puVar52 == (undefined1 *)0x0) goto LAB_1800eb032;
      pHVar36 = (HINSTANCE__ *)FUN_1800642b0();
      if ((pHVar48 != (HINSTANCE__ *)0x0) && (pHVar36 != (HINSTANCE__ *)0x0)) {
        local_1b0 = pHVar36;
        pHStack_1a8 = pHVar48;
        if ((longlong)pHVar48 < 0) {
          uVar33 = 0;
          pHVar48 = local_98;
        }
        else {
          local_98 = pHVar36;
          FUN_1800658a0();
          uVar33 = 1;
          pHVar36 = (HINSTANCE__ *)thunk_FUN_180291940(pHVar48,1);
          if (pHVar36 != (HINSTANCE__ *)0x0) {
            memcpy(pHVar36,local_98,(size_t)pHVar48);
            uStack_180 = SUB82(pHVar36,0);
            uStack_17e = (undefined2)((ulonglong)pHVar36 >> 0x10);
            uStack_17c = (undefined2)((ulonglong)pHVar36 >> 0x20);
            uStack_17a = (undefined2)((ulonglong)pHVar36 >> 0x30);
            local_178 = (byte)pHVar48;
            uStack_177 = (undefined1)((ulonglong)pHVar48 >> 8);
            uStack_176 = (undefined2)((ulonglong)pHVar48 >> 0x10);
            uStack_174 = (undefined2)((ulonglong)pHVar48 >> 0x20);
            uStack_172 = (undefined2)((ulonglong)pHVar48 >> 0x30);
            local_188 = (undefined **)pHVar48;
            local_98 = pHVar36;
            FUN_18022c290(&DAT_1805ea7d8,&local_188);
            local_258.unused = (int)&local_1b0;
            uStack_254 = (undefined1)((ulonglong)&local_1b0 >> 0x20);
            uStack_253 = (undefined1)((ulonglong)&local_1b0 >> 0x28);
            uStack_252 = (undefined2)((ulonglong)&local_1b0 >> 0x30);
            uStack_250 = 0x8004ae90;
            uStack_24c = 1;
            uStack_24b = 0;
            uStack_24a = 0;
            FUN_1802aab50(&local_188,&DAT_1804e2a3c,&local_258);
            local_a8 = (HINSTANCE__ *)local_188;
            local_b8 = (void *)CONCAT26(uStack_17a,
                                        CONCAT24(uStack_17c,CONCAT22(uStack_17e,uStack_180)));
            FUN_1800e8390(2);
            if (local_a8 != (HINSTANCE__ *)0x0) {
              thunk_FUN_1802919a0(local_b8);
            }
            goto LAB_1800eade0;
          }
        }
        local_98 = pHVar48;
        FUN_18045031b(uVar33,local_98);
        goto LAB_1800ed03d;
      }
      goto LAB_1800eade0;
    }
LAB_1800eb032:
    if ((((char)local_78 == '\0') && ((*(ulonglong *)PTR_DAT_1806073e0 & 0x7fffffffffffffff) != 0))
       && (cVar25 = FUN_18044f9d0(), cVar25 == '\0')) {
      DAT_1805ea7d1 = '\x01';
    }
    cVar25 = DAT_1805ea7d0;
    LOCK();
    DAT_1805ea7d0 = '\0';
    UNLOCK();
    if (cVar25 == '\x02') {
      WakeByAddressSingle(&DAT_1805ea7d0);
    }
  }
  else {
    if ((((char)uVar54 == '\0') && ((*(ulonglong *)puVar15 & 0x7fffffffffffffff) != 0)) &&
       (cVar25 = FUN_18044f9d0(), cVar25 == '\0')) {
      DAT_1805ea7d1 = '\x01';
    }
    cVar25 = DAT_1805ea7d0;
    LOCK();
    DAT_1805ea7d0 = '\0';
    UNLOCK();
    if (cVar25 == '\x02') {
      WakeByAddressSingle(&DAT_1805ea7d0);
    }
  }
  FUN_1800f6da0(&local_188);
  local_78 = (HINSTANCE__ *)
             CONCAT26(uStack_17a,CONCAT24(uStack_17c,CONCAT22(uStack_17e,uStack_180)));
  FUN_180292cc0(&local_258,local_78,
                CONCAT26(uStack_172,
                         CONCAT24(uStack_174,CONCAT22(uStack_176,CONCAT11(uStack_177,local_178)))),
                &DAT_1804e2a30,0xc);
  if ((HINSTANCE__ *)local_188 != (HINSTANCE__ *)0x0) {
    thunk_FUN_1802919a0(local_78,local_188,1);
  }
  local_78 = (HINSTANCE__ *)
             CONCAT26(uStack_24a,CONCAT15(uStack_24b,CONCAT14(uStack_24c,uStack_250)));
  lVar37 = FUN_180298160(local_78,CONCAT26(uStack_242,
                                           CONCAT15(uStack_243,CONCAT14(uStack_244,uStack_248))));
  lVar31 = CONCAT26(uStack_252,CONCAT15(uStack_253,CONCAT14(uStack_254,local_258.unused)));
  if (lVar31 != 0) {
    thunk_FUN_1802919a0(local_78,lVar31,1);
  }
  if (lVar37 != 0) {
    FUN_18005c5a0(lVar37);
  }
  if (local_88 != (HINSTANCE__ *)0x0) {
    thunk_FUN_1802919a0(local_68,local_88,1);
  }
  FUN_18011fd80(&DAT_1804d8bef,0x1e);
  FUN_1800f6da0(&local_188);
  local_68 = (HINSTANCE__ *)
             CONCAT26(uStack_17a,CONCAT24(uStack_17c,CONCAT22(uStack_17e,uStack_180)));
  FUN_180292cc0(&local_258,local_68,
                CONCAT26(uStack_172,
                         CONCAT24(uStack_174,CONCAT22(uStack_176,CONCAT11(uStack_177,local_178)))),
                &DAT_1804e2ad7,0xc);
  if ((HINSTANCE__ *)local_188 != (HINSTANCE__ *)0x0) {
    thunk_FUN_1802919a0(local_68,local_188,1);
  }
  local_68 = (HINSTANCE__ *)
             CONCAT26(uStack_24a,CONCAT15(uStack_24b,CONCAT14(uStack_24c,uStack_250)));
  FUN_18029cfe0(&local_1b0,local_68,
                CONCAT26(uStack_242,CONCAT15(uStack_243,CONCAT14(uStack_244,uStack_248))));
  lVar31 = CONCAT26(uStack_252,CONCAT15(uStack_253,CONCAT14(uStack_254,local_258.unused)));
  if (lVar31 != 0) {
    thunk_FUN_1802919a0(local_68,lVar31,1);
  }
  puVar52 = local_1a0;
  local_68 = local_1b0;
  local_88 = pHStack_1a8;
  if (DAT_1805ea848 != 0) {
    FUN_1804439b5();
  }
  LOCK();
  bVar60 = DAT_1805ea810 == '\0';
  if (bVar60) {
    DAT_1805ea810 = '\x01';
  }
  UNLOCK();
  if (!bVar60) {
    FUN_18044ee10(&DAT_1805ea810);
  }
  puVar15 = PTR_DAT_1806073e0;
  if ((*(ulonglong *)PTR_DAT_1806073e0 & 0x7fffffffffffffff) == 0) {
    if (DAT_1805ea811 != '\0') {
LAB_1800eb254:
      if (((*(ulonglong *)puVar15 & 0x7fffffffffffffff) != 0) &&
         (cVar25 = FUN_18044f9d0(), cVar25 == '\0')) {
        DAT_1805ea811 = '\x01';
      }
      goto LAB_1800eb263;
    }
    local_78 = (HINSTANCE__ *)((ulonglong)local_78 & 0xffffffff00000000);
LAB_1800eb28f:
    local_188 = (undefined **)0x0;
    uStack_180 = SUB82(puVar52,0);
    uStack_17e = (undefined2)((ulonglong)puVar52 >> 0x10);
    uStack_17c = (undefined2)((ulonglong)puVar52 >> 0x20);
    uStack_17a = (undefined2)((ulonglong)puVar52 >> 0x30);
    local_178 = (byte)local_88;
    uStack_177 = (undefined1)((ulonglong)local_88 >> 8);
    uStack_176 = (undefined2)((ulonglong)local_88 >> 0x10);
    uStack_174 = (undefined2)((ulonglong)local_88 >> 0x20);
    uStack_172 = (undefined2)((ulonglong)local_88 >> 0x30);
    uStack_170 = SUB81(puVar52,0);
    uStack_16f = (undefined1)((ulonglong)puVar52 >> 8);
    uStack_16e = (undefined1)((ulonglong)puVar52 >> 0x10);
    uStack_16d = (undefined1)((ulonglong)puVar52 >> 0x18);
    iStack_16c = (int)((ulonglong)puVar52 >> 0x20);
    uStack_168._0_4_ = 0;
    uStack_168._4_4_ = 0;
    uStack_160 = puVar52;
    lStack_158 = 0xa0000000a;
    local_150 = CONCAT71(local_150._1_7_,1);
    local_148 = local_148 & 0xffffffffffff0000;
    uVar29 = 0;
    while ((uVar29 & 1) == 0) {
      lVar31 = CONCAT26(uStack_172,
                        CONCAT24(uStack_174,CONCAT22(uStack_176,CONCAT11(uStack_177,local_178))));
      FUN_180003440(&local_258,&local_178);
      if (local_258.unused == 1) {
        pHVar55 = (HINSTANCE__ *)
                  CONCAT26(uStack_242,CONCAT15(uStack_243,CONCAT14(uStack_244,uStack_248)));
        lVar37 = (longlong)pHVar55 - (longlong)local_188;
        lVar31 = (longlong)&((HINSTANCE__ *)local_188)->unused + lVar31;
        local_188 = (undefined **)pHVar55;
      }
      else {
        if (local_148._1_1_ != '\0') break;
        local_148._0_2_ = CONCAT11(1,(byte)local_148);
        lVar37 = CONCAT26(uStack_17a,CONCAT24(uStack_17c,CONCAT22(uStack_17e,uStack_180))) -
                 (longlong)local_188;
        if ((lVar37 != 0 | (byte)local_148) != 1) break;
        lVar31 = (longlong)&((HINSTANCE__ *)local_188)->unused +
                 CONCAT26(uStack_172,
                          CONCAT24(uStack_174,CONCAT22(uStack_176,CONCAT11(uStack_177,local_178))));
      }
      lVar57 = lVar37;
      if ((lVar37 != 0) && (lVar39 = lVar37 + -1, *(char *)(lVar31 + lVar39) == '\n')) {
        if ((lVar39 == 0) || (lVar45 = lVar31, *(char *)(lVar31 + lVar37 + -2) != '\r')) {
          lVar45 = 0;
        }
        lVar57 = lVar39;
        if (lVar45 != 0) {
          lVar57 = lVar37 + -2;
          lVar31 = lVar45;
        }
      }
      local_258.unused = (int)lVar31;
      uStack_254 = (undefined1)((ulonglong)lVar31 >> 0x20);
      uStack_253 = (undefined1)((ulonglong)lVar31 >> 0x28);
      uStack_252 = (undefined2)((ulonglong)lVar31 >> 0x30);
      uStack_250 = (uint)lVar57;
      uStack_24c = (undefined1)((ulonglong)lVar57 >> 0x20);
      uStack_24b = (undefined1)((ulonglong)lVar57 >> 0x28);
      uStack_24a = (undefined2)((ulonglong)lVar57 >> 0x30);
      uStack_248 = 0;
      uStack_244 = 0;
      uStack_243 = 0;
      uStack_242 = 0;
      uStack_230 = CONCAT31(uStack_230._1_3_,1);
      local_238._0_4_ = 0x3d;
      local_238._4_4_ = 0x3d;
      uStack_240 = uStack_250;
      uStack_23c = uStack_24c;
      uStack_23b = uStack_24b;
      uStack_23a = uStack_24a;
      FUN_180003440(&local_2b8,&local_258);
      pHVar55 = uStack_2b0;
      if (((char)local_2b8 != '\0') && (lVar31 != 0)) {
        lVar57 = lVar57 - (longlong)local_2a8;
        uVar33 = FUN_1800642b0((undefined1 *)((longlong)&local_2a8->unused + lVar31),lVar57);
        FUN_1802b7cc0(&local_2b8,uVar33,lVar57);
        if ((char)local_2b8 != '\x01') {
          uVar27 = SUB84(uStack_2b0,0);
          pvVar40 = (void *)FUN_1800642b0(lVar31);
          if ((longlong)pHVar55 < 0) {
            uVar33 = 0;
LAB_1800eb4e0:
            FUN_18045031b(uVar33,local_98);
            goto LAB_1800ed03d;
          }
          if (pHVar55 == (HINSTANCE__ *)0x0) {
            pHVar38 = (HINSTANCE__ *)0x1;
          }
          else {
            FUN_1800658a0();
            pHVar38 = (HINSTANCE__ *)thunk_FUN_180291940(pHVar55,1);
            if (pHVar38 == (HINSTANCE__ *)0x0) {
              uVar33 = 1;
              local_98 = pHVar55;
              goto LAB_1800eb4e0;
            }
            memcpy(pHVar38,pvVar40,(size_t)pHVar55);
          }
          local_258.unused = (int)pHVar55;
          uStack_254 = (undefined1)((ulonglong)pHVar55 >> 0x20);
          uStack_253 = (undefined1)((ulonglong)pHVar55 >> 0x28);
          uStack_252 = (undefined2)((ulonglong)pHVar55 >> 0x30);
          uStack_250 = (uint)pHVar38;
          uStack_24c = (undefined1)((ulonglong)pHVar38 >> 0x20);
          uStack_24b = (undefined1)((ulonglong)pHVar38 >> 0x28);
          uStack_24a = (undefined2)((ulonglong)pHVar38 >> 0x30);
          uStack_248 = local_258.unused;
          uStack_244 = uStack_254;
          uStack_243 = uStack_253;
          uStack_242 = uStack_252;
          local_98 = pHVar38;
          FUN_18022a930(&DAT_1805ea818,&local_258,uVar27);
        }
      }
      uVar29 = local_148 >> 8 & 0xff;
    }
    if ((((char)local_78 == '\0') && ((*(ulonglong *)PTR_DAT_1806073e0 & 0x7fffffffffffffff) != 0))
       && (cVar25 = FUN_18044f9d0(), cVar25 == '\0')) {
      DAT_1805ea811 = '\x01';
    }
    cVar25 = DAT_1805ea810;
    LOCK();
    DAT_1805ea810 = '\0';
    UNLOCK();
    if (cVar25 == '\x02') {
      WakeByAddressSingle(&DAT_1805ea810);
    }
  }
  else {
    uVar27 = FUN_18044f9d0();
    if (DAT_1805ea811 == '\0') {
      local_78 = (HINSTANCE__ *)(CONCAT44(local_78._4_4_,uVar27) ^ 1);
      goto LAB_1800eb28f;
    }
    if ((char)uVar27 != '\0') goto LAB_1800eb254;
LAB_1800eb263:
    cVar25 = DAT_1805ea810;
    LOCK();
    DAT_1805ea810 = '\0';
    UNLOCK();
    if (cVar25 == '\x02') {
      WakeByAddressSingle(&DAT_1805ea810);
    }
  }
  if (local_68 != (HINSTANCE__ *)0x0) {
    thunk_FUN_1802919a0(local_88,local_68,1);
  }
  FUN_1800f6da0(&local_188);
  local_68 = (HINSTANCE__ *)
             CONCAT26(uStack_17a,CONCAT24(uStack_17c,CONCAT22(uStack_17e,uStack_180)));
  FUN_180292cc0(&local_258,local_68,
                CONCAT26(uStack_172,
                         CONCAT24(uStack_174,CONCAT22(uStack_176,CONCAT11(uStack_177,local_178)))),
                &DAT_1804e2ae3,0x10);
  if ((HINSTANCE__ *)local_188 != (HINSTANCE__ *)0x0) {
    thunk_FUN_1802919a0(local_68,local_188,1);
  }
  local_68 = (HINSTANCE__ *)
             CONCAT26(uStack_24a,CONCAT15(uStack_24b,CONCAT14(uStack_24c,uStack_250)));
  FUN_18029cfe0(&local_2d8,local_68,
                CONCAT26(uStack_242,CONCAT15(uStack_243,CONCAT14(uStack_244,uStack_248))));
  lVar31 = CONCAT26(uStack_252,CONCAT15(uStack_253,CONCAT14(uStack_254,local_258.unused)));
  if (lVar31 != 0) {
    thunk_FUN_1802919a0(local_68,lVar31,1);
  }
  puVar52 = local_2c8;
  local_68 = (HINSTANCE__ *)CONCAT44(uStack_2d4,local_2d8);
  local_88 = (HINSTANCE__ *)CONCAT44(uStack_2cc,uStack_2d0);
  if (DAT_1805ea888 != 0) {
    FUN_180443049();
  }
  LOCK();
  bVar60 = DAT_1805ea850 == '\0';
  if (bVar60) {
    DAT_1805ea850 = '\x01';
  }
  UNLOCK();
  if (!bVar60) {
    FUN_18044ee10(&DAT_1805ea850);
  }
  puVar15 = PTR_DAT_1806073e0;
  if ((*(ulonglong *)PTR_DAT_1806073e0 & 0x7fffffffffffffff) == 0) {
    if (DAT_1805ea851 != '\0') {
LAB_1800eb661:
      if (((*(ulonglong *)puVar15 & 0x7fffffffffffffff) != 0) &&
         (cVar25 = FUN_18044f9d0(), cVar25 == '\0')) {
        DAT_1805ea851 = '\x01';
      }
      goto LAB_1800eb670;
    }
    local_78 = (HINSTANCE__ *)((ulonglong)local_78 & 0xffffffff00000000);
LAB_1800eb7a0:
    local_188 = (undefined **)0x0;
    uStack_180 = SUB82(puVar52,0);
    uStack_17e = (undefined2)((ulonglong)puVar52 >> 0x10);
    uStack_17c = (undefined2)((ulonglong)puVar52 >> 0x20);
    uStack_17a = (undefined2)((ulonglong)puVar52 >> 0x30);
    local_178 = (byte)local_88;
    uStack_177 = (undefined1)((ulonglong)local_88 >> 8);
    uStack_176 = (undefined2)((ulonglong)local_88 >> 0x10);
    uStack_174 = (undefined2)((ulonglong)local_88 >> 0x20);
    uStack_172 = (undefined2)((ulonglong)local_88 >> 0x30);
    uStack_170 = SUB81(puVar52,0);
    uStack_16f = (undefined1)((ulonglong)puVar52 >> 8);
    uStack_16e = (undefined1)((ulonglong)puVar52 >> 0x10);
    uStack_16d = (undefined1)((ulonglong)puVar52 >> 0x18);
    iStack_16c = (int)((ulonglong)puVar52 >> 0x20);
    uStack_168._0_4_ = 0;
    uStack_168._4_4_ = 0;
    uStack_160 = puVar52;
    lStack_158 = 0xa0000000a;
    local_150 = CONCAT71(local_150._1_7_,1);
    local_148 = local_148 & 0xffffffffffff0000;
    uVar29 = 0;
    while ((uVar29 & 1) == 0) {
      lVar31 = CONCAT26(uStack_172,
                        CONCAT24(uStack_174,CONCAT22(uStack_176,CONCAT11(uStack_177,local_178))));
      FUN_180003440(&local_258,&local_178);
      if (local_258.unused == 1) {
        pHVar55 = (HINSTANCE__ *)
                  CONCAT26(uStack_242,CONCAT15(uStack_243,CONCAT14(uStack_244,uStack_248)));
        lVar37 = (longlong)pHVar55 - (longlong)local_188;
        lVar31 = (longlong)&((HINSTANCE__ *)local_188)->unused + lVar31;
        local_188 = (undefined **)pHVar55;
      }
      else {
        if (local_148._1_1_ != '\0') break;
        local_148._0_2_ = CONCAT11(1,(byte)local_148);
        lVar37 = CONCAT26(uStack_17a,CONCAT24(uStack_17c,CONCAT22(uStack_17e,uStack_180))) -
                 (longlong)local_188;
        if ((lVar37 != 0 | (byte)local_148) != 1) break;
        lVar31 = (longlong)&((HINSTANCE__ *)local_188)->unused +
                 CONCAT26(uStack_172,
                          CONCAT24(uStack_174,CONCAT22(uStack_176,CONCAT11(uStack_177,local_178))));
      }
      lVar57 = lVar37;
      if ((lVar37 != 0) && (lVar39 = lVar37 + -1, *(char *)(lVar31 + lVar39) == '\n')) {
        if ((lVar39 == 0) || (lVar45 = lVar31, *(char *)(lVar31 + lVar37 + -2) != '\r')) {
          lVar45 = 0;
        }
        lVar57 = lVar39;
        if (lVar45 != 0) {
          lVar57 = lVar37 + -2;
          lVar31 = lVar45;
        }
      }
      local_258.unused = (int)lVar31;
      uStack_254 = (undefined1)((ulonglong)lVar31 >> 0x20);
      uStack_253 = (undefined1)((ulonglong)lVar31 >> 0x28);
      uStack_252 = (undefined2)((ulonglong)lVar31 >> 0x30);
      uStack_250 = (uint)lVar57;
      uStack_24c = (undefined1)((ulonglong)lVar57 >> 0x20);
      uStack_24b = (undefined1)((ulonglong)lVar57 >> 0x28);
      uStack_24a = (undefined2)((ulonglong)lVar57 >> 0x30);
      uStack_248 = 0;
      uStack_244 = 0;
      uStack_243 = 0;
      uStack_242 = 0;
      uStack_230 = CONCAT31(uStack_230._1_3_,1);
      local_238._0_4_ = 0x3d;
      local_238._4_4_ = 0x3d;
      uStack_240 = uStack_250;
      uStack_23c = uStack_24c;
      uStack_23b = uStack_24b;
      uStack_23a = uStack_24a;
      FUN_180003440(&local_2b8,&local_258);
      if (((char)local_2b8 != '\0') && (lVar31 != 0)) {
        pvVar41 = (void *)(lVar57 - (longlong)local_2a8);
        piVar42 = &local_2a8->unused;
        pHVar55 = uStack_2b0;
        pvVar40 = (void *)FUN_1800642b0(lVar31);
        if ((longlong)pHVar55 < 0) {
          uVar33 = 0;
LAB_1800eba65:
          FUN_18045031b(uVar33,local_98);
          goto LAB_1800ed03d;
        }
        if (pHVar55 == (HINSTANCE__ *)0x0) {
          local_98 = (HINSTANCE__ *)0x1;
        }
        else {
          FUN_1800658a0();
          local_98 = (HINSTANCE__ *)thunk_FUN_180291940(pHVar55,1);
          if (local_98 == (HINSTANCE__ *)0x0) {
            uVar33 = 1;
            local_98 = pHVar55;
            goto LAB_1800eba65;
          }
          memcpy(local_98,pvVar40,(size_t)pHVar55);
        }
        local_2b8 = pHVar55;
        uStack_2b0 = local_98;
        local_2a8 = pHVar55;
        local_a8 = pHVar55;
        if ((longlong)pvVar41 < 0) {
          uVar33 = 0;
LAB_1800eba79:
          local_a9 = 1;
          FUN_18045031b(uVar33,local_b8);
          goto LAB_1800ed03d;
        }
        if (pvVar41 == (void *)0x0) {
          pvVar40 = (void *)0x1;
        }
        else {
          FUN_1800658a0();
          pvVar40 = (void *)thunk_FUN_180291940(pvVar41,1);
          if (pvVar40 == (void *)0x0) {
            uVar33 = 1;
            local_b8 = pvVar41;
            goto LAB_1800eba79;
          }
          memcpy(pvVar40,(undefined1 *)((longlong)piVar42 + lVar31),(size_t)pvVar41);
        }
        local_258.unused = (int)pvVar41;
        uStack_254 = (undefined1)((ulonglong)pvVar41 >> 0x20);
        uStack_253 = (undefined1)((ulonglong)pvVar41 >> 0x28);
        uStack_252 = (undefined2)((ulonglong)pvVar41 >> 0x30);
        uStack_250 = (uint)pvVar40;
        uStack_24c = (undefined1)((ulonglong)pvVar40 >> 0x20);
        uStack_24b = (undefined1)((ulonglong)pvVar40 >> 0x28);
        uStack_24a = (undefined2)((ulonglong)pvVar40 >> 0x30);
        local_a9 = 0;
        uStack_248 = local_258.unused;
        uStack_244 = uStack_254;
        uStack_243 = uStack_253;
        uStack_242 = uStack_252;
        local_b8 = pvVar40;
        FUN_18022a5d0(&local_1b0,&DAT_1805ea858,&local_2b8,&local_258);
        if (0 < (longlong)local_1b0) {
          thunk_FUN_1802919a0(pHStack_1a8,local_1b0,1);
        }
      }
      uVar29 = local_148 >> 8 & 0xff;
    }
    if ((((char)local_78 == '\0') && ((*(ulonglong *)PTR_DAT_1806073e0 & 0x7fffffffffffffff) != 0))
       && (cVar25 = FUN_18044f9d0(), cVar25 == '\0')) {
      DAT_1805ea851 = '\x01';
    }
    cVar25 = DAT_1805ea850;
    LOCK();
    DAT_1805ea850 = 0;
    UNLOCK();
    if (cVar25 == '\x02') {
      WakeByAddressSingle(&DAT_1805ea850);
    }
  }
  else {
    uVar27 = FUN_18044f9d0();
    if (DAT_1805ea851 == '\0') {
      local_78 = (HINSTANCE__ *)(CONCAT44(local_78._4_4_,uVar27) ^ 1);
      goto LAB_1800eb7a0;
    }
    if ((char)uVar27 != '\0') goto LAB_1800eb661;
LAB_1800eb670:
    cVar25 = DAT_1805ea850;
    LOCK();
    DAT_1805ea850 = 0;
    UNLOCK();
    if (cVar25 == '\x02') {
      WakeByAddressSingle(&DAT_1805ea850);
    }
  }
  if (local_68 != (HINSTANCE__ *)0x0) {
    thunk_FUN_1802919a0(local_88,local_68,1);
  }
  FUN_18011fd80(&DAT_1804d8c0d,0x22);
  bVar53 = 0;
  bVar24 = FUN_18011ed60(&DAT_1804e201c,0x11,0);
  cVar25 = FUN_18011ed60(&DAT_1804e200d,0xf,0);
  if (cVar25 == '\0') {
    bVar53 = 0;
    cVar25 = FUN_18011ed60(&DAT_1804e1ff4,0x12,0);
    if (cVar25 == '\0') {
      bVar53 = bVar24 ^ 1;
    }
  }
  DAT_180607b40 = bVar53;
  if (bVar24 != 0) {
    FUN_18011efa0(&DAT_1804e201c,0x11,0);
  }
  FUN_18011fd80(&DAT_1804d8c2f,0x26);
  if (DAT_1805ea368 == 0) {
    if (DAT_1805ea358 != (HINSTANCE__ *)0x0) goto LAB_1800eb75e;
LAB_1800ebb06:
    pHVar55 = (HINSTANCE__ *)0x1;
    local_68 = DAT_1805ea358;
  }
  else {
    FUN_1804423b4();
    if (DAT_1805ea358 == (HINSTANCE__ *)0x0) goto LAB_1800ebb06;
LAB_1800eb75e:
    pHVar38 = DAT_1805ea358;
    pvVar40 = DAT_1805ea350;
    FUN_1800658a0();
    pHVar55 = (HINSTANCE__ *)thunk_FUN_180291940(pHVar38,1);
    if (pHVar55 == (HINSTANCE__ *)0x0) goto LAB_1800ed00c;
    memcpy(pHVar55,pvVar40,(size_t)pHVar38);
    local_68 = pHVar38;
  }
  local_88 = pHVar55;
  FUN_180292cc0(&local_258,pHVar55,local_68,"heaven2.off",0xb);
  local_78 = (HINSTANCE__ *)
             CONCAT26(uStack_24a,CONCAT15(uStack_24b,CONCAT14(uStack_24c,uStack_250)));
  FUN_1802986f0(&local_188,local_78,
                CONCAT26(uStack_242,CONCAT15(uStack_243,CONCAT14(uStack_244,uStack_248))));
  pHVar55 = (HINSTANCE__ *)local_188;
  if ((HINSTANCE__ *)local_188 == (HINSTANCE__ *)0x2) {
    FUN_18005c5a0(CONCAT26(uStack_17a,CONCAT24(uStack_17c,CONCAT22(uStack_17e,uStack_180))));
  }
  lVar31 = CONCAT26(uStack_252,CONCAT15(uStack_253,CONCAT14(uStack_254,local_258.unused)));
  if (lVar31 != 0) {
    thunk_FUN_1802919a0(local_78,lVar31,1);
  }
  if (local_68 != (HINSTANCE__ *)0x0) {
    thunk_FUN_1802919a0(local_88,local_68,1);
  }
  if ((int)pHVar55 == 2) {
    FUN_18011fd80(&DAT_1804d8c55,0x1d);
    cVar25 = FUN_180100e90();
    if (cVar25 == '\0') {
      local_2b8 = (HINSTANCE__ *)&DAT_1804e12a0;
      uStack_2b0 = (HINSTANCE__ *)&DAT_1804d8a40;
      FUN_18011acb0(&local_188,8,0,&local_2b8);
      uVar18 = uStack_17e;
      uVar17 = uStack_180;
      uStack_242 = CONCAT11(uStack_177,local_178);
      uStack_168._0_4_ = CONCAT22(uStack_176,uStack_242);
      uVar10 = CONCAT24(uStack_174,(uint)uStack_168);
      uStack_240 = (uint)((uint6)uVar10 >> 0x10);
      uStack_23c = (undefined1)uStack_172;
      uStack_23b = (undefined1)((ushort)uStack_172 >> 8);
      uVar8 = CONCAT24(uStack_17c,CONCAT22(uStack_17e,uStack_180));
      uStack_252 = SUB82(local_188,0);
      uStack_250 = (uint)((ulonglong)local_188 >> 0x10);
      uStack_24c = (undefined1)((ulonglong)local_188 >> 0x30);
      uStack_24b = (undefined1)((ulonglong)local_188 >> 0x38);
      uStack_24a = uStack_180;
      uStack_248 = (uint)((uint6)uVar8 >> 0x10);
      uStack_244 = (undefined1)uStack_17a;
      uStack_243 = (undefined1)((ushort)uStack_17a >> 8);
      uStack_180 = 0;
      uStack_17a = CONCAT11(uStack_253,uStack_254);
      uStack_172 = (undefined2)((ulonglong)local_188 >> 0x30);
      uStack_17e = (undefined2)local_258.unused;
      uStack_17c = (undefined2)((uint)local_258.unused >> 0x10);
      local_178 = (byte)local_188;
      uStack_177 = (undefined1)((ulonglong)local_188 >> 8);
      uStack_176 = (undefined2)((ulonglong)local_188 >> 0x10);
      uStack_174 = (undefined2)((ulonglong)local_188 >> 0x20);
      uStack_170 = (undefined1)uVar17;
      uStack_16f = (undefined1)((ushort)uVar17 >> 8);
      uStack_16e = (undefined1)uVar18;
      uStack_16d = (undefined1)((ushort)uVar18 >> 8);
      iStack_16c = (int)(CONCAT17(uStack_243,CONCAT16(uStack_244,uVar8)) >> 0x20);
      uStack_168._4_4_ = (uint)(CONCAT17(uStack_23b,CONCAT16(uStack_23c,uVar10)) >> 0x20);
      local_188 = (undefined **)0x1;
      if (DAT_1805ea230 != 0) {
        FUN_180443905(&local_188);
      }
      if ((char)local_188 == '\0') {
        return;
      }
      lVar31 = CONCAT26(uStack_172,
                        CONCAT24(uStack_174,CONCAT22(uStack_176,CONCAT11(uStack_177,local_178))));
      pHVar55 = (HINSTANCE__ *)
                CONCAT44(iStack_16c,
                         CONCAT13(uStack_16d,CONCAT12(uStack_16e,CONCAT11(uStack_16f,uStack_170))));
      if (CONCAT44(uStack_168._4_4_,(uint)uStack_168) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001800ebe58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_180520098 + *(int *)(&DAT_180520098 + *(longlong *)pHVar55 * 4)))();
        return;
      }
    }
    else {
      if (DAT_1805ea5e8 == 0) {
        if (DAT_1805ea368 == 0) {
          if (DAT_1805ea358 != (HINSTANCE__ *)0x0) goto LAB_1800ebc0e;
LAB_1800ec02d:
          local_88 = (HINSTANCE__ *)0x1;
          local_68 = DAT_1805ea358;
        }
        else {
          FUN_1804423b4();
          if (DAT_1805ea358 == (HINSTANCE__ *)0x0) goto LAB_1800ec02d;
LAB_1800ebc0e:
          pHVar38 = DAT_1805ea358;
          pvVar40 = DAT_1805ea350;
          local_68 = DAT_1805ea358;
          FUN_1800658a0();
          pvVar41 = (void *)thunk_FUN_180291940(pHVar38,1);
          if (pvVar41 == (void *)0x0) {
LAB_1800ed00c:
            FUN_18045031b(1,pHVar38);
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          local_88 = (HINSTANCE__ *)pvVar41;
          memcpy(pvVar41,pvVar40,(size_t)pHVar38);
        }
        local_188 = &PTR_s_heaven2_1804d9890;
        uStack_180 = 0xae90;
        uStack_17e = 0x8004;
        uStack_17c = 1;
        uStack_17a = 0;
        FUN_1802aab50(&local_2d8,&DAT_1804e1750,&local_188);
        local_78 = (HINSTANCE__ *)CONCAT44(uStack_2cc,uStack_2d0);
        FUN_180292cc0(&local_1b0,local_88,local_68,local_78,local_2c8);
        if (CONCAT44(uStack_2d4,local_2d8) != 0) {
          thunk_FUN_1802919a0(local_78,CONCAT44(uStack_2d4,local_2d8),1);
        }
        if (local_68 != (HINSTANCE__ *)0x0) {
          thunk_FUN_1802919a0(local_88,local_68,1);
        }
        local_98 = pHStack_1a8;
        FUN_18029cfe0(&local_188,pHStack_1a8,local_1a0);
        _Size = DAT_1805ea5e0;
        pvVar40 = DAT_1805ea5d8;
        local_68 = (HINSTANCE__ *)
                   CONCAT26(uStack_17a,CONCAT24(uStack_17c,CONCAT22(uStack_17e,uStack_180)));
        local_88 = (HINSTANCE__ *)local_188;
        lVar31 = CONCAT26(uStack_172,
                          CONCAT24(uStack_174,CONCAT22(uStack_176,CONCAT11(uStack_177,local_178))));
        uVar27 = SUB84(local_188,0);
        local_258.unused = FUN_180293430();
        uStack_254 = (undefined1)uVar27;
        uStack_253 = (undefined1)((uint)uVar27 >> 8);
        uStack_252 = (undefined2)((uint)uVar27 >> 0x10);
        FUN_1802933e0(&local_188,&local_258,0xd53e8000,0x19db1de);
        if ((char)local_188 == '\0') {
          uVar29 = CONCAT26(uStack_17a,CONCAT24(uStack_17c,CONCAT22(uStack_17e,uStack_180)));
        }
        else {
          uVar29 = 0;
        }
        pHVar55 = (HINSTANCE__ *)FUN_1800642b0(local_68);
        if (lVar31 == 0) {
          uVar58 = 1;
LAB_1800ec5cc:
          local_268 = (HINSTANCE__ *)CONCAT71(local_268._1_7_,uVar58);
          local_258.unused = (int)&local_268;
          uStack_254 = (undefined1)((ulonglong)&local_268 >> 0x20);
          uStack_253 = (undefined1)((ulonglong)&local_268 >> 0x28);
          uStack_252 = (undefined2)((ulonglong)&local_268 >> 0x30);
          uStack_250 = 0x80091280;
          uStack_24c = 1;
          uStack_24b = 0;
          uStack_24a = 0;
          FUN_1802aab50(&local_188,&DAT_1804e175b,&local_258);
          local_78 = (HINSTANCE__ *)local_188;
          local_a8 = (HINSTANCE__ *)
                     CONCAT26(uStack_17a,CONCAT24(uStack_17c,CONCAT22(uStack_17e,uStack_180)));
          FUN_1800e8390(2,local_a8,
                        CONCAT26(uStack_172,
                                 CONCAT24(uStack_174,
                                          CONCAT22(uStack_176,CONCAT11(uStack_177,local_178)))));
          if (local_78 != (HINSTANCE__ *)0x0) {
            thunk_FUN_1802919a0(local_a8,local_78,1);
          }
          bVar60 = false;
        }
        else {
          uStack_180 = (undefined2)lVar31;
          uStack_17e = (undefined2)((ulonglong)lVar31 >> 0x10);
          uStack_17c = (undefined2)((ulonglong)lVar31 >> 0x20);
          uStack_17a = (undefined2)((ulonglong)lVar31 >> 0x30);
          local_178 = 0;
          uStack_177 = 0;
          uStack_176 = 0;
          uStack_174 = 0;
          uStack_172 = 0;
          uStack_170 = (undefined1)lVar31;
          uStack_16f = (undefined1)((ulonglong)lVar31 >> 8);
          uStack_16e = (undefined1)((ulonglong)lVar31 >> 0x10);
          uStack_16d = (undefined1)((ulonglong)lVar31 >> 0x18);
          iStack_16c = (int)((ulonglong)lVar31 >> 0x20);
          uStack_160 = (undefined1 *)CONCAT71(uStack_160._1_7_,1);
          uStack_168._0_4_ = 0x2e;
          uStack_168._4_4_ = 0x2e;
          local_188 = (undefined **)pHVar55;
          FUN_180003440(&local_258,&local_188);
          if ((char)local_258.unused == '\0') {
            uVar58 = 2;
            goto LAB_1800ec5cc;
          }
          uVar59 = 2;
          uVar58 = 2;
          if (pHVar55 == (HINSTANCE__ *)0x0) goto LAB_1800ec5cc;
          lVar37 = CONCAT26(uStack_242,CONCAT15(uStack_243,CONCAT14(uStack_244,uStack_248)));
          FUN_180091430(&local_258,pHVar55,
                        CONCAT26(uStack_24a,CONCAT15(uStack_24b,CONCAT14(uStack_24c,uStack_250))));
          FUN_180091430(&local_188,(longlong)&pHVar55->unused + lVar37,lVar31 - lVar37);
          puVar52 = _UNK_1804e20e4;
          pHVar55 = _DAT_1804e20dc;
          local_b8 = (void *)CONCAT26(uStack_252,
                                      CONCAT15(uStack_253,CONCAT14(uStack_254,local_258.unused)));
          local_300 = (undefined8 *)
                      CONCAT26(uStack_24a,CONCAT15(uStack_24b,CONCAT14(uStack_24c,uStack_250)));
          local_78 = (HINSTANCE__ *)
                     CONCAT26(uStack_17a,CONCAT24(uStack_17c,CONCAT22(uStack_17e,uStack_180)));
          local_a8 = (HINSTANCE__ *)local_188;
          uVar33 = CONCAT26(uStack_242,CONCAT15(uStack_243,CONCAT14(uStack_244,uStack_248)));
          uVar11 = CONCAT26(uStack_172,
                            CONCAT24(uStack_174,CONCAT22(uStack_176,CONCAT11(uStack_177,local_178)))
                           );
          local_2a8 = _DAT_1804e20dc;
          uStack_2a0 = _UNK_1804e20e4;
          local_2b8 = (HINSTANCE__ *)CONCAT44(_UNK_1804e20d0,_DAT_1804e20cc);
          uStack_2b0 = (HINSTANCE__ *)CONCAT44(_UNK_1804e20d8,_UNK_1804e20d4);
          puVar50 = &local_2b8;
          FUN_18026efc0(&local_258);
          uVar58 = uVar59;
          if ((char)local_258.unused == '\0') {
            local_188 = (undefined **)0x0;
            piVar42 = (int *)FUN_1802661b0(&local_188);
            pvVar41 = local_b8;
            if (piVar42 != (int *)0x0) {
              local_190 = puVar50;
              local_c0 = piVar42;
              if ((code *)*puVar50 != (code *)0x0) {
                (*(code *)*puVar50)(piVar42);
              }
LAB_1800ec48c:
              pvVar41 = local_b8;
              if (local_190[1] != 0) {
                thunk_FUN_1802919a0(local_c0,local_190[1],local_190[2]);
                pvVar41 = local_b8;
              }
            }
joined_r0x0001800ec5a8:
            local_b8 = pvVar41;
            if (local_a8 != (HINSTANCE__ *)0x0) {
              thunk_FUN_1802919a0(local_78,local_a8,1);
            }
            if (pvVar41 != (void *)0x0) {
              thunk_FUN_1802919a0(local_300,pvVar41,1);
            }
            goto LAB_1800ec5cc;
          }
          local_150 = CONCAT44(local_238._4_4_,(uint)local_238);
          uStack_160 = (undefined1 *)
                       CONCAT26(uStack_242,CONCAT15(uStack_243,CONCAT14(uStack_244,uStack_248)));
          lStack_158 = CONCAT26(uStack_23a,CONCAT15(uStack_23b,CONCAT14(uStack_23c,uStack_240)));
          local_148 = CONCAT44(uStack_22c,uStack_230);
          uStack_140 = CONCAT35((undefined3)uStack_223,CONCAT41(uStack_227,local_228));
          local_138 = CONCAT35((undefined3)uStack_21b,CONCAT41(uStack_21f,uStack_223._3_1_));
          uStack_130 = CONCAT62(uStack_216,CONCAT11(uStack_217,uStack_21b._3_1_));
          local_128 = local_210;
          uStack_120 = uStack_208;
          local_118 = local_200;
          uStack_110 = uStack_1f8;
          local_108 = local_1f0;
          uStack_100 = uStack_1e8;
          local_f8 = local_1e0;
          uStack_f0 = uStack_1d8;
          local_e8 = local_1d0;
          uStack_e0 = uStack_1c8;
          local_d8 = local_1c0;
          uStack_d4 = uStack_1bc;
          uStack_d0 = uStack_1b8;
          uStack_cc = uStack_1b4;
          local_178 = (byte)pHVar55;
          uStack_177 = (undefined1)((ulonglong)pHVar55 >> 8);
          uStack_176 = (undefined2)((ulonglong)pHVar55 >> 0x10);
          uStack_174 = (undefined2)((ulonglong)pHVar55 >> 0x20);
          uStack_172 = (undefined2)((ulonglong)pHVar55 >> 0x30);
          uStack_170 = SUB81(puVar52,0);
          uStack_16f = (undefined1)((ulonglong)puVar52 >> 8);
          uStack_16e = (undefined1)((ulonglong)puVar52 >> 0x10);
          uStack_16d = (undefined1)((ulonglong)puVar52 >> 0x18);
          iStack_16c = (int)((ulonglong)puVar52 >> 0x20);
          local_188 = (undefined **)0x1ecbfa831aad1871;
          uStack_180 = 0xd927;
          uStack_17e = 0xddc8;
          uStack_17c = 0x482a;
          uStack_17a = 0xeb0f;
          uStack_168._0_4_ = uStack_250;
          uStack_168._4_4_ =
               (uint)(CONCAT26(uStack_24a,CONCAT15(uStack_24b,CONCAT14(uStack_24c,uStack_250))) >>
                     0x20);
          FUN_180272a70(&local_258,local_78,uVar11);
          if ((char)local_258.unused == '\x01') {
            local_c0 = (int *)CONCAT26(uStack_24a,
                                       CONCAT15(uStack_24b,CONCAT14(uStack_24c,uStack_250)));
            pvVar41 = local_b8;
            if (local_c0 != (int *)0x0) {
              local_190 = (undefined8 *)
                          CONCAT26(uStack_242,CONCAT15(uStack_243,CONCAT14(uStack_244,uStack_248)));
              if ((code *)*local_190 != (code *)0x0) {
                (*(code *)*local_190)(local_c0);
              }
              goto LAB_1800ec48c;
            }
            goto joined_r0x0001800ec5a8;
          }
          local_298 = CONCAT13(local_238._4_1_,local_238._1_3_);
          uStack_294 = CONCAT13((undefined1)uStack_230,local_238._5_3_);
          uStack_290 = CONCAT13((undefined1)uStack_22c,uStack_230._1_3_);
          uStack_28c = CONCAT13(local_228,uStack_22c._1_3_);
          local_288 = uStack_227;
          uStack_284 = uStack_223;
          uStack_280 = uStack_21f;
          uStack_27c = uStack_21b;
          local_2a8 = (HINSTANCE__ *)
                      CONCAT44(CONCAT13((undefined1)uStack_240,CONCAT21(uStack_242,uStack_243)),
                               CONCAT13(uStack_244,uStack_248._1_3_));
          uStack_2a0 = (undefined1 *)
                       CONCAT44(CONCAT13((undefined1)local_238,CONCAT21(uStack_23a,uStack_23b)),
                                CONCAT13(uStack_23c,uStack_240._1_3_));
          local_2b8 = (HINSTANCE__ *)
                      CONCAT44(CONCAT13((undefined1)uStack_250,CONCAT21(uStack_252,uStack_253)),
                               CONCAT13(uStack_254,local_258.unused._1_3_));
          uStack_2b0 = (HINSTANCE__ *)
                       CONCAT44(CONCAT13((undefined1)uStack_248,CONCAT21(uStack_24a,uStack_24b)),
                                CONCAT13(uStack_24c,uStack_250._1_3_));
          FUN_180266200(&local_258,&local_188,local_300,uVar33,&local_2b8);
          if ((char)local_258.unused != '\0') {
            local_c0 = (int *)CONCAT26(uStack_24a,
                                       CONCAT15(uStack_24b,CONCAT14(uStack_24c,uStack_250)));
            if (local_c0 != (int *)0x0) {
              local_190 = (undefined8 *)
                          CONCAT26(uStack_242,CONCAT15(uStack_243,CONCAT14(uStack_244,uStack_248)));
              if ((code *)*local_190 != (code *)0x0) {
                (*(code *)*local_190)(local_c0);
              }
              if (local_190[1] != 0) {
                thunk_FUN_1802919a0(local_c0,local_190[1],local_190[2]);
              }
            }
            uVar58 = 3;
            pvVar41 = local_b8;
            goto joined_r0x0001800ec5a8;
          }
          FUN_180062100(&local_258);
          puVar50 = local_300;
          FUN_1802b1da0(&local_258,local_300,uVar33);
          uVar18 = uStack_242;
          uVar17 = uStack_24a;
          uVar16 = uStack_24b;
          uVar59 = uStack_24c;
          uVar54 = uStack_250;
          pvVar41 = local_b8;
          if (local_258.unused == 1) goto joined_r0x0001800ec5a8;
          uVar33 = CONCAT26(uStack_242,CONCAT15(uStack_243,CONCAT14(uStack_244,uStack_248)));
          local_258.unused = 0;
          uStack_254 = 0;
          uStack_253 = 0;
          uStack_252 = 0;
          uStack_250 = uStack_248;
          uStack_24c = uStack_244;
          uStack_24b = uStack_243;
          uStack_24a = uStack_242;
          uStack_248 = uVar54;
          uStack_244 = uVar59;
          uStack_243 = uVar16;
          uStack_242 = uVar17;
          uStack_23a = uVar18;
          local_238._0_4_ = 0;
          local_238._4_4_ = 0;
          uStack_22c = (uint)((ulonglong)uVar33 >> 0x20);
          local_228 = 0x7c;
          uStack_227 = 0x7c000000;
          uStack_223 = 0x1000000;
          uStack_21b = CONCAT13(1,(undefined3)uStack_21b);
          uStack_217 = 0;
          uStack_240 = uStack_250;
          uStack_23c = uStack_24c;
          uStack_23b = uStack_24b;
          uStack_230 = uStack_250;
          _Buf1 = (void *)FUN_180064730(&local_258);
          local_190 = puVar50;
          local_c0 = (int *)FUN_180064730(&local_258);
          local_338 = puVar50;
          lVar31 = FUN_180064730(&local_258);
          lVar37 = FUN_180064730(&local_258);
          pvVar41 = local_b8;
          if (((_Buf1 == (void *)0x0) || (local_c0 == (int *)0x0)) ||
             ((lVar31 == 0 || (lVar37 != 0)))) goto joined_r0x0001800ec5a8;
          FUN_180002450(local_2f8,lVar31,puVar50);
          pvVar41 = local_b8;
          if ((local_2f8[0][0] == '\x01') || (uVar58 = 4, local_190 != _Size))
          goto joined_r0x0001800ec5a8;
          uVar33 = local_2f8[0]._8_8_;
          iVar28 = memcmp(_Buf1,pvVar40,(size_t)_Size);
          pvVar41 = local_b8;
          if ((iVar28 != 0) ||
             (((uVar58 = 5, local_338 != (undefined8 *)0x7 ||
               (*(int *)((longlong)local_c0 + 3) != 0x326e6576 || *local_c0 != 0x76616568)) ||
              (uVar58 = 6, (ulonglong)uVar33 <= uVar29)))) goto joined_r0x0001800ec5a8;
          if (local_a8 != (HINSTANCE__ *)0x0) {
            thunk_FUN_1802919a0(local_78,local_a8,1);
          }
          if (local_b8 != (void *)0x0) {
            thunk_FUN_1802919a0(local_300,local_b8,1);
          }
          local_268 = (HINSTANCE__ *)((ulonglong)local_268 & 0xffffffffffffff00);
          uVar54 = 0x12acbff9;
          uVar44 = 0x9b3861dd;
          uVar46 = 0;
          while( true ) {
            while( true ) {
              while( true ) {
                while ((int)uVar44 < 0x425611fd) {
                  if (uVar44 == 0x9b3861dd) {
                    uVar54 = -uVar54;
                    uVar46 = 0x2f05f306;
                    goto LAB_1800ecec9;
                  }
                  if (uVar44 == 0xb43d92db) {
                    uVar54 = uVar54 + 0xc5996e7d;
                    uVar46 = 0xc8f6cf39;
                    uVar44 = 0x7ccb5de2;
                  }
                  else {
                    if (uVar44 != 0xc21ee7d5) goto LAB_1800ecec9;
                    uVar54 = uVar54 ^ (uVar54 << 3 | uVar54 >> 0x1d);
                    uVar46 = 0xbc77235a;
                    uVar44 = 0x7e69c48f;
                  }
                }
                if (uVar44 != 0x7ccb5de2) break;
                uVar54 = uVar54 * -0x5f99d6e;
                uVar46 = 0xbed5ba37;
                uVar44 = 0xc21ee7d5;
              }
              if (uVar44 != 0x7e69c48f) break;
              uVar54 = 0x4be0fd47 - uVar54;
              uVar46 = 0x3c3fd572;
              uVar44 = 0x425611fd;
            }
            if (uVar44 == 0x425611fd) break;
LAB_1800ecec9:
            uVar44 = uVar44 ^ uVar46;
          }
          lVar31 = (longlong)&DAT_1804e1708 - (ulonglong)(uVar54 & 0xffff);
          local_188._4_4_ = (int)((ulonglong)lVar31 >> 0x20);
          local_188 = (undefined **)CONCAT44(local_188._4_4_,0x12acbff9);
          plVar43 = (longlong *)FUN_1800a5530(lVar31,0x12acbff9);
          local_188 = (undefined **)(*plVar43 + -0x58537ba1db500591);
          lVar31 = plVar43[1] + -0x58da67b22c335993;
          lVar37 = plVar43[2] + 0xf23b9dd91aa793b;
          lVar57 = plVar43[3] + -0xb44447f84e3600f;
          uStack_168 = (undefined1 (*) [16])(plVar43[4] + -0x1e17c16c054b493b);
          uStack_160 = (undefined1 *)(plVar43[5] + -0x73cf6c6ade8063b2);
          lStack_158 = plVar43[6] + -0x7dd7124ea9f215cc;
          local_150 = plVar43[7] + 0xad3bf026c4ecdbe;
          uStack_180 = (undefined2)lVar31;
          uStack_17e = (undefined2)((ulonglong)lVar31 >> 0x10);
          uStack_17c = (undefined2)((ulonglong)lVar31 >> 0x20);
          uStack_17a = (undefined2)((ulonglong)lVar31 >> 0x30);
          local_178 = (byte)lVar37;
          uStack_177 = (undefined1)((ulonglong)lVar37 >> 8);
          uStack_176 = (undefined2)((ulonglong)lVar37 >> 0x10);
          uStack_174 = (undefined2)((ulonglong)lVar37 >> 0x20);
          uStack_172 = (undefined2)((ulonglong)lVar37 >> 0x30);
          uStack_170 = (undefined1)lVar57;
          uStack_16f = (undefined1)((ulonglong)lVar57 >> 8);
          uStack_16e = (undefined1)((ulonglong)lVar57 >> 0x10);
          uStack_16d = (undefined1)((ulonglong)lVar57 >> 0x18);
          iStack_16c = (int)((ulonglong)lVar57 >> 0x20);
          local_148 = CONCAT62(local_148._2_6_,(short)plVar43[8] + -0xd05);
          bVar60 = true;
          FUN_1800e8390(CONCAT71((int7)((ulonglong)local_188 >> 8),1),&local_188,0x42);
        }
        if (local_88 != (HINSTANCE__ *)0x0) {
          thunk_FUN_1802919a0(local_68,local_88,1);
        }
        if (local_1b0 != (HINSTANCE__ *)0x0) {
          thunk_FUN_1802919a0(local_98,local_1b0,1);
        }
        if (bVar60) {
          FUN_18011fd80(&DAT_1804d8c72,0x27);
          FUN_1800ff710();
          pHVar55 = (HINSTANCE__ *)&DAT_1804d8a40;
          if (DAT_1805ea490 == 0) {
            pHVar55 = (HINSTANCE__ *)&DAT_1804d8a98;
          }
          uVar27 = 0x1d;
          FUN_18011fd80(&DAT_1804d8c99);
          FUN_180444ff0(&local_2d8);
          local_310 = (HMODULE)&DAT_1804e12a0;
          local_308 = pHVar55;
          local_268 = (HINSTANCE__ *)FUN_180291ff0();
          local_260 = (HINSTANCE__ *)CONCAT44(local_260._4_4_,uVar27);
          local_2b8 = (HINSTANCE__ *)local_2c8;
          local_258.unused = (int)&local_2b8;
          uStack_254 = (undefined1)((ulonglong)&local_2b8 >> 0x20);
          uStack_253 = (undefined1)((ulonglong)&local_2b8 >> 0x28);
          uStack_252 = (undefined2)((ulonglong)&local_2b8 >> 0x30);
          uStack_250 = 0x802b9200;
          uStack_24c = 1;
          uStack_24b = 0;
          uStack_24a = 0;
          FUN_1802aab50(&local_188,&DAT_1804d8cb6,&local_258);
          local_68 = (HINSTANCE__ *)local_188;
          local_88 = (HINSTANCE__ *)
                     CONCAT26(uStack_17a,CONCAT24(uStack_17c,CONCAT22(uStack_17e,uStack_180)));
          FUN_18011fd80(local_88,CONCAT26(uStack_172,
                                          CONCAT24(uStack_174,
                                                   CONCAT22(uStack_176,
                                                            CONCAT11(uStack_177,local_178)))));
          if (local_68 != (HINSTANCE__ *)0x0) {
            thunk_FUN_1802919a0(local_88,local_68,1);
          }
          local_68 = (HINSTANCE__ *)CONCAT44(uStack_2cc,uStack_2d0);
          FUN_18011acb0(&local_1b0,local_68,local_2c8,&local_310);
          local_69 = 1;
          uVar51 = 0x27;
          FUN_18011fd80(&DAT_1804d8ce7);
          local_69 = 1;
          uVar29 = FUN_180292190(&local_268);
          puVar52 = local_1a0;
          pHVar55 = pHStack_1a8;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uVar29;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (uVar51 & 0xffffffff) / 1000000;
          local_2f8[0] = auVar4 * ZEXT816(1000) + auVar6;
          local_69 = 1;
          FUN_18011aad0(&local_188,pHStack_1a8,local_1a0);
          pHVar9 = (HMODULE)CONCAT26(uStack_17a,CONCAT24(uStack_17c,CONCAT22(uStack_17e,uStack_180))
                                    );
          lVar31 = CONCAT26(uStack_172,
                            CONCAT24(uStack_174,CONCAT22(uStack_176,CONCAT11(uStack_177,local_178)))
                           );
          lVar37 = lVar31 * 0x40;
          pHVar1 = pHVar9 + lVar31 * 0x10;
          local_178 = (byte)local_188;
          uStack_177 = (undefined1)((ulonglong)local_188 >> 8);
          uStack_176 = (undefined2)((ulonglong)local_188 >> 0x10);
          uStack_174 = (undefined2)((ulonglong)local_188 >> 0x20);
          uStack_172 = (undefined2)((ulonglong)local_188 >> 0x30);
          uStack_170 = SUB81(pHVar1,0);
          uStack_16f = (undefined1)((ulonglong)pHVar1 >> 8);
          uStack_16e = (undefined1)((ulonglong)pHVar1 >> 0x10);
          uStack_16d = (undefined1)((ulonglong)pHVar1 >> 0x18);
          iStack_16c = (int)((ulonglong)pHVar1 >> 0x20);
          pHVar12 = pHVar9;
          local_188 = (undefined **)pHVar9;
          while (lVar31 != 0) {
            if (*(longlong *)pHVar12 != 0) {
              thunk_FUN_1802919a0(*(longlong *)(pHVar12 + 2),*(longlong *)pHVar12,1);
            }
            lVar37 = lVar37 + -0x40;
            pHVar9 = pHVar1;
            pHVar12 = pHVar12 + 0x10;
            lVar31 = lVar37;
          }
          uStack_180 = SUB82(pHVar9,0);
          uStack_17e = (undefined2)((ulonglong)pHVar9 >> 0x10);
          uStack_17c = (undefined2)((ulonglong)pHVar9 >> 0x20);
          uStack_17a = (undefined2)((ulonglong)pHVar9 >> 0x30);
          FUN_180056220(&local_188);
          local_318 = local_2c8;
          local_69 = 1;
          FUN_18011aad0(&local_188,pHVar55,puVar52);
          uVar29 = CONCAT26(uStack_172,
                            CONCAT24(uStack_174,CONCAT22(uStack_176,CONCAT11(uStack_177,local_178)))
                           );
          if (uVar29 == 0) {
            puVar52 = (undefined1 *)0x0;
          }
          else {
            lVar31 = CONCAT26(uStack_17a,CONCAT24(uStack_17c,CONCAT22(uStack_17e,uStack_180)));
            if (uVar29 < 4) {
              uVar51 = 0;
              puVar52 = (undefined1 *)0x0;
            }
            else {
              pbVar56 = (byte *)(lVar31 + 0xf8);
              uVar51 = 0;
              puVar52 = (undefined1 *)0x0;
              do {
                puVar52 = puVar52 + (ulonglong)*pbVar56 +
                                    (ulonglong)pbVar56[-0x40] + (ulonglong)pbVar56[-0x80] +
                                    (ulonglong)pbVar56[-0xc0];
                uVar51 = uVar51 + 4;
                pbVar56 = pbVar56 + 0x100;
              } while ((uVar29 & 0xfffffffffffffffc) != uVar51);
              if ((local_178 & 3) == 0) goto LAB_1800eca87;
            }
            uVar29 = 0;
            do {
              puVar52 = puVar52 + *(byte *)(lVar31 + uVar51 * 0x40 + 0x38 + uVar29);
              uVar29 = uVar29 + 0x40;
            } while ((CONCAT11(uStack_177,local_178) & 3) << 6 != uVar29);
          }
LAB_1800eca87:
          local_340 = puVar52;
          FUN_180053cf0(&local_188);
          uStack_2a0 = local_1a0;
          uStack_2b0 = local_1b0;
          local_2a8 = pHStack_1a8;
          local_2b8 = (HINSTANCE__ *)((ulonglong)local_2b8 & 0xffffffffffff0000);
          local_69 = 0;
          FUN_180049730(&local_188,&local_2b8);
          if ((HMODULE)local_188 != (HMODULE)0x0) {
            uStack_250 = CONCAT22(uStack_17e,uStack_180);
            uStack_248 = CONCAT22(uStack_176,CONCAT11(uStack_177,local_178));
            uStack_240 = CONCAT13(uStack_16d,CONCAT12(uStack_16e,CONCAT11(uStack_16f,uStack_170)));
            uStack_23c = (undefined1)iStack_16c;
            uStack_23b = (undefined1)((uint)iStack_16c >> 8);
            uStack_23a = (undefined2)((uint)iStack_16c >> 0x10);
            uStack_24c = (undefined1)uStack_17c;
            uStack_24b = (undefined1)((ushort)uStack_17c >> 8);
            uStack_24a = uStack_17a;
            uStack_244 = (undefined1)uStack_174;
            uStack_243 = (undefined1)((ushort)uStack_174 >> 8);
            uStack_242 = uStack_172;
            local_238 = uStack_168;
          }
          local_258.unused._1_3_ = 0;
          local_258.unused._0_1_ = (HMODULE)local_188 != (HMODULE)0x0;
          uStack_254 = 0;
          uStack_253 = 0;
          uStack_252 = 0;
          FUN_180056ba0(&local_258);
          if (puVar52 == local_2c8) {
            local_188 = &local_318;
            uStack_180 = 0x9200;
            uStack_17e = 0x802b;
            uStack_17c = 1;
            uStack_17a = 0;
            local_178 = (byte)local_2f8;
            uStack_177 = (undefined1)((ulonglong)local_2f8 >> 8);
            uStack_176 = (undefined2)((ulonglong)local_2f8 >> 0x10);
            uStack_174 = (undefined2)((ulonglong)local_2f8 >> 0x20);
            uStack_172 = (undefined2)((ulonglong)local_2f8 >> 0x30);
            uStack_170 = 0x60;
            uStack_16f = 0x6f;
            uStack_16e = 0x2b;
            uStack_16d = 0x80;
            iStack_16c = 1;
            local_69 = 0;
            FUN_1802aab50(&local_258,&DAT_1804d8d95,&local_188);
            local_88 = (HINSTANCE__ *)
                       CONCAT26(uStack_252,
                                CONCAT15(uStack_253,CONCAT14(uStack_254,local_258.unused)));
            local_78 = (HINSTANCE__ *)
                       CONCAT26(uStack_24a,CONCAT15(uStack_24b,CONCAT14(uStack_24c,uStack_250)));
            FUN_1800e8390(1,local_78,
                          CONCAT26(uStack_242,CONCAT15(uStack_243,CONCAT14(uStack_244,uStack_248))))
            ;
          }
          else {
            local_188 = &local_340;
            uStack_180 = 0x9200;
            uStack_17e = 0x802b;
            uStack_17c = 1;
            uStack_17a = 0;
            local_178 = (byte)&local_318;
            uStack_177 = (undefined1)((ulonglong)&local_318 >> 8);
            uStack_176 = (undefined2)((ulonglong)&local_318 >> 0x10);
            uStack_174 = (undefined2)((ulonglong)&local_318 >> 0x20);
            uStack_172 = (undefined2)((ulonglong)&local_318 >> 0x30);
            uStack_170 = 0;
            uStack_16f = 0x92;
            uStack_16e = 0x2b;
            uStack_16d = 0x80;
            iStack_16c = 1;
            uStack_168 = local_2f8;
            uStack_160 = &LAB_1802b6f60;
            local_69 = 0;
            FUN_1802aab50(&local_258,&DAT_1804d8d0e,&local_188);
            local_88 = (HINSTANCE__ *)
                       CONCAT26(uStack_252,
                                CONCAT15(uStack_253,CONCAT14(uStack_254,local_258.unused)));
            local_78 = (HINSTANCE__ *)
                       CONCAT26(uStack_24a,CONCAT15(uStack_24b,CONCAT14(uStack_24c,uStack_250)));
            FUN_1800e8390(2,local_78,
                          CONCAT26(uStack_242,CONCAT15(uStack_243,CONCAT14(uStack_244,uStack_248))))
            ;
          }
          if (local_88 != (HINSTANCE__ *)0x0) {
            thunk_FUN_1802919a0(local_78,local_88,1);
          }
          if (CONCAT44(uStack_2d4,local_2d8) == 0) {
            return;
          }
          lVar31 = CONCAT44(uStack_2d4,local_2d8) << 4;
          pHVar55 = local_68;
          goto LAB_1800ec7a1;
        }
      }
      local_2b8 = (HINSTANCE__ *)&DAT_1804e12a0;
      uStack_2b0 = (HINSTANCE__ *)&DAT_1804d8a40;
      FUN_18011acb0(&local_188,8,0,&local_2b8);
      uVar18 = uStack_17e;
      uVar17 = uStack_180;
      uStack_242 = CONCAT11(uStack_177,local_178);
      uStack_168._0_4_ = CONCAT22(uStack_176,uStack_242);
      uVar10 = CONCAT24(uStack_174,(uint)uStack_168);
      uStack_240 = (uint)((uint6)uVar10 >> 0x10);
      uStack_23c = (undefined1)uStack_172;
      uStack_23b = (undefined1)((ushort)uStack_172 >> 8);
      uVar8 = CONCAT24(uStack_17c,CONCAT22(uStack_17e,uStack_180));
      uStack_252 = SUB82(local_188,0);
      uStack_250 = (uint)((ulonglong)local_188 >> 0x10);
      uStack_24c = (undefined1)((ulonglong)local_188 >> 0x30);
      uStack_24b = (undefined1)((ulonglong)local_188 >> 0x38);
      uStack_24a = uStack_180;
      uStack_248 = (uint)((uint6)uVar8 >> 0x10);
      uStack_244 = (undefined1)uStack_17a;
      uStack_243 = (undefined1)((ushort)uStack_17a >> 8);
      uStack_180 = 0;
      uStack_17a = CONCAT11(uStack_253,uStack_254);
      uStack_172 = (undefined2)((ulonglong)local_188 >> 0x30);
      uStack_17e = (undefined2)local_258.unused;
      uStack_17c = (undefined2)((uint)local_258.unused >> 0x10);
      local_178 = (byte)local_188;
      uStack_177 = (undefined1)((ulonglong)local_188 >> 8);
      uStack_176 = (undefined2)((ulonglong)local_188 >> 0x10);
      uStack_174 = (undefined2)((ulonglong)local_188 >> 0x20);
      uStack_170 = (undefined1)uVar17;
      uStack_16f = (undefined1)((ushort)uVar17 >> 8);
      uStack_16e = (undefined1)uVar18;
      uStack_16d = (undefined1)((ushort)uVar18 >> 8);
      iStack_16c = (int)(CONCAT17(uStack_243,CONCAT16(uStack_244,uVar8)) >> 0x20);
      uStack_168._4_4_ = (uint)(CONCAT17(uStack_23b,CONCAT16(uStack_23c,uVar10)) >> 0x20);
      local_188 = (undefined **)0x1;
      if (DAT_1805ea230 != 0) {
        FUN_180443905(&local_188);
      }
      if ((char)local_188 == '\0') {
        return;
      }
      lVar31 = CONCAT26(uStack_172,
                        CONCAT24(uStack_174,CONCAT22(uStack_176,CONCAT11(uStack_177,local_178))));
      pHVar55 = (HINSTANCE__ *)
                CONCAT44(iStack_16c,
                         CONCAT13(uStack_16d,CONCAT12(uStack_16e,CONCAT11(uStack_16f,uStack_170))));
      if (CONCAT44(uStack_168._4_4_,(uint)uStack_168) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001800ec774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_1805200a8 + *(int *)(&DAT_1805200a8 + *(longlong *)pHVar55 * 4)))();
        return;
      }
    }
  }
  else {
    FUN_1800e8390(2,&DAT_1804d8dcc,0x3a);
    local_2b8 = (HINSTANCE__ *)&DAT_1804e12a0;
    uStack_2b0 = (HINSTANCE__ *)&DAT_1804d8a40;
    FUN_18011acb0(&local_188,8,0,&local_2b8);
    uVar18 = uStack_17e;
    uVar17 = uStack_180;
    uStack_242 = CONCAT11(uStack_177,local_178);
    uStack_168._0_4_ = CONCAT22(uStack_176,uStack_242);
    uVar10 = CONCAT24(uStack_174,(uint)uStack_168);
    uStack_240 = (uint)((uint6)uVar10 >> 0x10);
    uStack_23c = (undefined1)uStack_172;
    uStack_23b = (undefined1)((ushort)uStack_172 >> 8);
    uVar8 = CONCAT24(uStack_17c,CONCAT22(uStack_17e,uStack_180));
    uStack_252 = SUB82(local_188,0);
    uStack_250 = (uint)((ulonglong)local_188 >> 0x10);
    uStack_24c = (undefined1)((ulonglong)local_188 >> 0x30);
    uStack_24b = (undefined1)((ulonglong)local_188 >> 0x38);
    uStack_24a = uStack_180;
    uStack_248 = (uint)((uint6)uVar8 >> 0x10);
    uStack_244 = (undefined1)uStack_17a;
    uStack_243 = (undefined1)((ushort)uStack_17a >> 8);
    uStack_180 = 0;
    uStack_17a = CONCAT11(uStack_253,uStack_254);
    uStack_172 = (undefined2)((ulonglong)local_188 >> 0x30);
    uStack_17e = (undefined2)local_258.unused;
    uStack_17c = (undefined2)((uint)local_258.unused >> 0x10);
    local_178 = (byte)local_188;
    uStack_177 = (undefined1)((ulonglong)local_188 >> 8);
    uStack_176 = (undefined2)((ulonglong)local_188 >> 0x10);
    uStack_174 = (undefined2)((ulonglong)local_188 >> 0x20);
    uStack_170 = (undefined1)uVar17;
    uStack_16f = (undefined1)((ushort)uVar17 >> 8);
    uStack_16e = (undefined1)uVar18;
    uStack_16d = (undefined1)((ushort)uVar18 >> 8);
    iStack_16c = (int)(CONCAT17(uStack_243,CONCAT16(uStack_244,uVar8)) >> 0x20);
    uStack_168._4_4_ = (uint)(CONCAT17(uStack_23b,CONCAT16(uStack_23c,uVar10)) >> 0x20);
    local_188 = (undefined **)0x1;
    if (DAT_1805ea230 != 0) {
      FUN_180443905(&local_188);
    }
    if ((char)local_188 == '\0') {
      return;
    }
    lVar31 = CONCAT26(uStack_172,
                      CONCAT24(uStack_174,CONCAT22(uStack_176,CONCAT11(uStack_177,local_178))));
    pHVar55 = (HINSTANCE__ *)
              CONCAT44(iStack_16c,
                       CONCAT13(uStack_16d,CONCAT12(uStack_16e,CONCAT11(uStack_16f,uStack_170))));
    if (CONCAT44(uStack_168._4_4_,(uint)uStack_168) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001800ebd48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_180520088 + *(int *)(&DAT_180520088 + *(longlong *)pHVar55 * 4)))();
      return;
    }
  }
  if (lVar31 == 0) {
    return;
  }
  lVar31 = lVar31 * 0x38;
LAB_1800ec7a1:
  thunk_FUN_1802919a0(pHVar55,lVar31,8);
  return;
}




/* ===== sub_1802223e0  NOFUNC ===== */
// no function


/* ===== sub_180224f40  NOFUNC ===== */
// no function
