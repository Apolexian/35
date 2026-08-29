

/* ===== 1801e2500  FUN_1801e2500 ===== */

void FUN_1801e2500(LPCVOID param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  longlong lVar3;
  SIZE_T SVar4;
  longlong lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [8];
  SIZE_T SStack_40;
  undefined1 auStack_38 [16];
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  if (DAT_1806085e0 == '\0') {
    return;
  }
  if (DAT_1805ea290 != 0) {
    FUN_180443e1b();
  }
  lVar3 = FUN_180292190(&DAT_1805ea280);
  pcVar2 = DAT_180607e20;
  if ((param_2 & 0xffffffff) / 1000000 + lVar3 * 1000 < DAT_1806085e8) {
    return;
  }
  if ((param_1 != (LPCVOID)0x0) && (DAT_180607e20 != (code *)0x0)) {
    auStack_38 = (undefined1  [16])0x0;
    _auStack_48 = (undefined1  [16])0x0;
    auStack_58 = (undefined1  [16])0x0;
    SVar4 = VirtualQuery(param_1,(PMEMORY_BASIC_INFORMATION)auStack_58,0x30);
    if ((SVar4 != 0) &&
       (((auStack_38._0_4_ == 0x1000 && (param_1 < (LPCVOID)0xffffffffffffffe8)) &&
        ((auStack_38 & (undefined1  [16])0x10100000000) == (undefined1  [16])0x0)))) {
      if (((((longlong)param_1 + 0x18U <= SStack_40 + auStack_58._0_8_) &&
           (*(longlong *)((longlong)param_1 + 0x10) != 0)) &&
          (lVar3 = (*pcVar2)(param_1,DAT_180607db8), lVar3 != 0)) &&
         (0xffc2f6ff < *(uint *)(lVar3 + 0x10) - 0x3d0901)) {
        auStack_58._8_8_ = lVar3 + (ulonglong)*(uint *)(lVar3 + 0x10) * 2 + 0x14;
        auStack_58._0_8_ = lVar3 + 0x14;
        auVar1._14_2_ = 0;
        auVar1._0_14_ = stack0xffffffffffffffba;
        _auStack_48 = auVar1 << 0x10;
        FUN_180229060(&lStack_78,auStack_58);
        goto joined_r0x0001801e2629;
      }
    }
  }
  lStack_78 = 0;
  uStack_70 = 1;
  uStack_68 = 0;
joined_r0x0001801e2629:
  if (5 < DAT_1806085d0) {
    if (lStack_78 != 0) {
      thunk_FUN_1802919a0(uStack_70,lStack_78,1);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001801e2640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_180520908 + *(int *)(&DAT_180520908 + (ulonglong)DAT_1806085d0 * 4)))();
  return;
}




/* ===== 1801e2100  FUN_1801e2100 ===== */

void FUN_1801e2100(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  int iStack_50;
  short sStack_4c;
  char cStack_4a;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar2 = 0xceeb3a78;
  uVar4 = 0x9b3861dd;
  uVar6 = 0;
LAB_1801e2140:
  while (0x425611fc < (int)uVar4) {
    if (uVar4 == 0x7ccb5de2) {
      uVar2 = 0xaaead174 - uVar2;
      uVar6 = 0xbed5ba37;
      uVar4 = 0xc21ee7d5;
    }
    else {
      if (uVar4 != 0x7e69c48f) {
        if (uVar4 == 0x425611fd) {
          lVar5 = (longlong)&DAT_18051b0f0 - (ulonglong)(uVar2 & 0xffff);
          uStack_98 = CONCAT44((int)((ulonglong)lVar5 >> 0x20),0xceeb3a78);
          plVar3 = (longlong *)FUN_180096060(lVar5,0xceeb3a78);
          cVar1 = DAT_1806085e0;
          uStack_98 = *plVar3 + 0x604f4888c1f54da8;
          lStack_90 = plVar3[1] + 0x236f6184a29f88c7;
          lStack_88 = plVar3[2] + 0x540ee02824af434b;
          lStack_80 = plVar3[3] + -0x3b67ad957680de73;
          lStack_78 = plVar3[4] + -0x4a585032eb842b00;
          lStack_70 = plVar3[5] + 0xc1ee1f54b9bd3a2;
          lStack_68 = plVar3[6] + -0x58c3b19c2bdaeabb;
          lStack_60 = plVar3[7] + 0x64b60747f0f71a7b;
          lStack_58 = plVar3[8] + -0x43db3495d077e798;
          iStack_50 = (int)plVar3[9] + -0x73855ff2;
          sStack_4c = *(short *)((longlong)plVar3 + 0x4c) + -0x75ad;
          cStack_4a = *(char *)((longlong)plVar3 + 0x4e) + '\x1a';
          LOCK();
          DAT_1806085e0 = 0;
          UNLOCK();
          if (cVar1 != '\0') {
            FUN_18011efa0("followers.enabled",0x11,0);
            FUN_1800e8390(1,&uStack_98,0x4f);
          }
          if (DAT_1806085b0 != (code *)0x0) {
            (*DAT_1806085b0)(param_1,param_2);
          }
          return;
        }
        goto LAB_1801e21b4;
      }
      uVar2 = uVar2 ^ 0x32092637;
      uVar6 = 0x3c3fd572;
      uVar4 = 0x425611fd;
    }
  }
  if (uVar4 == 0x9b3861dd) {
    uVar2 = ~uVar2;
    uVar6 = 0x2f05f306;
  }
  else {
    if (uVar4 == 0xb43d92db) {
      uVar2 = -uVar2;
      uVar6 = 0xc8f6cf39;
      uVar4 = 0x7ccb5de2;
      goto LAB_1801e2140;
    }
    if (uVar4 == 0xc21ee7d5) {
      uVar2 = uVar2 ^ uVar2 >> 5;
      uVar6 = 0xbc77235a;
      uVar4 = 0x7e69c48f;
      goto LAB_1801e2140;
    }
  }
LAB_1801e21b4:
  uVar4 = uVar4 ^ uVar6;
  goto LAB_1801e2140;
}




/* ===== 1801e2350  FUN_1801e2350 ===== */

void FUN_1801e2350(undefined8 param_1,undefined8 param_2)

{
  longlong lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  longlong *plStack_48;
  code *pcStack_40;
  longlong lStack_38;
  undefined8 uStack_30;
  longlong lStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  if (DAT_1806085e0 != '\0') {
    LOCK();
    UNLOCK();
    lStack_38 = DAT_1806085f0 + 1;
    plStack_48 = &lStack_38;
    pcStack_40 = FUN_1802b9200;
    DAT_1806085f0 = DAT_1806085f0 + 1;
    FUN_1802aab50(&lStack_60,&DAT_18051b140,&plStack_48);
    lStack_28 = lStack_60;
    uStack_30 = uStack_58;
    FUN_1800e8390(1,uStack_58,uStack_50);
    if (lStack_28 != 0) {
      thunk_FUN_1802919a0(uStack_30,lStack_28,1);
    }
  }
  if (DAT_1806085b8 != (code *)0x0) {
    (*DAT_1806085b8)(param_1,param_2);
  }
  return;
}




/* ===== 180256c60  FUN_180256c60 ===== */

/* WARNING: Removing unreachable block (ram,0x000180257053) */
/* WARNING: Removing unreachable block (ram,0x000180257211) */
/* WARNING: Removing unreachable block (ram,0x000180257100) */
/* WARNING: Removing unreachable block (ram,0x000180257226) */
/* WARNING: Removing unreachable block (ram,0x00018025710d) */
/* WARNING: Removing unreachable block (ram,0x000180257318) */
/* WARNING: Removing unreachable block (ram,0x000180257428) */
/* WARNING: Removing unreachable block (ram,0x00018025733c) */
/* WARNING: Removing unreachable block (ram,0x000180257437) */
/* WARNING: Removing unreachable block (ram,0x000180257349) */
/* WARNING: Removing unreachable block (ram,0x0001802578f8) */
/* WARNING: Removing unreachable block (ram,0x000180257938) */
/* WARNING: Removing unreachable block (ram,0x000180257952) */
/* WARNING: Removing unreachable block (ram,0x000180257974) */
/* WARNING: Removing unreachable block (ram,0x000180257982) */
/* WARNING: Removing unreachable block (ram,0x000180257996) */
/* WARNING: Removing unreachable block (ram,0x00018025799d) */
/* WARNING: Removing unreachable block (ram,0x0001802579b8) */
/* WARNING: Removing unreachable block (ram,0x0001802579c6) */
/* WARNING: Removing unreachable block (ram,0x00018025738d) */
/* WARNING: Removing unreachable block (ram,0x00018025743c) */
/* WARNING: Removing unreachable block (ram,0x000180257122) */
/* WARNING: Removing unreachable block (ram,0x0001802573ac) */
/* WARNING: Removing unreachable block (ram,0x000180257141) */
/* WARNING: Removing unreachable block (ram,0x000180257449) */
/* WARNING: Removing unreachable block (ram,0x00018025744d) */
/* WARNING: Removing unreachable block (ram,0x000180257a47) */
/* WARNING: Removing unreachable block (ram,0x00018025745b) */
/* WARNING: Removing unreachable block (ram,0x000180257a1c) */

void FUN_180256c60(char ****param_1,char *****param_2,undefined4 param_3)

{
  int iVar1;
  char ****ppppcVar2;
  char ****ppppcVar3;
  char ****ppppcVar4;
  code *pcVar5;
  float fVar6;
  undefined *puVar7;
  byte bVar8;
  byte bVar9;
  char cVar10;
  undefined8 uVar11;
  longlong lVar12;
  char *****pppppcVar13;
  char *****pppppcVar14;
  char *****pppppcVar15;
  uint uVar16;
  ulonglong uVar17;
  bool bVar18;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  char ****ppppcStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  char ****ppppcStack_130;
  undefined4 uStack_128;
  char ****ppppcStack_120;
  char ****ppppcStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  char ****ppppcStack_108;
  char ***pppcStack_100;
  char ****ppppcStack_f8;
  char ****ppppcStack_f0;
  char ****ppppcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  char ****ppppcStack_a8;
  undefined *puStack_a0;
  char ****ppppcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  char ****ppppcStack_80;
  char ****ppppcStack_78;
  undefined *puStack_70;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  pppcStack_100 = (char ***)param_1;
  if (DAT_1805f1028 != 0) {
    FUN_1804504d0("DirectX 11 trampolines uninitialized",0x24,
                  &PTR_s_vendor_hudhook_0_6_5_src_hooks_d_18053f508);
    goto LAB_180257acb;
  }
  uVar17 = (ulonglong)param_2 & 0xffffffff;
  if (DAT_180608b08 != '\0') {
    bVar9 = DAT_180608b18;
    pppppcVar15 = param_2;
    if (DAT_180608ce0 != 2) {
      pppppcVar14 = (char *****)&pppcStack_100;
      FUN_18044b740(&ppppcStack_f8);
      bVar9 = DAT_180608b18;
      pppppcVar15 = pppppcVar14;
      if ((char)ppppcStack_f8 != '\0') {
        ppppcStack_130 = ppppcStack_f0;
        uStack_128 = ppppcStack_e8._0_4_;
LAB_180257464:
        if (*(ulonglong *)PTR_DAT_1805f18c0 < 5) {
          uVar16 = (uint)DAT_1805f1070;
          pppppcVar14 = (char *****)(ulonglong)uVar16;
          if (1 < uVar16 - 1) {
            if (uVar16 != 0) {
              uVar16 = FUN_18044b9c0(&PTR_DAT_1805f1060);
              pppppcVar14 = (char *****)(ulonglong)uVar16;
              if ((char)uVar16 != '\0') goto LAB_180257495;
            }
            goto LAB_1802575a4;
          }
LAB_180257495:
          cVar10 = FUN_18025f490(PTR_DAT_1805f1060);
          if (cVar10 == '\0') goto LAB_1802575a4;
          puStack_e0 = PTR_DAT_1805f1060 + 0x30;
          ppppcStack_80 = (char ****)&ppppcStack_130;
          ppppcStack_78 = (char ****)&LAB_180265900;
          ppppcStack_120 = (char ****)&DAT_18053f129;
          ppppcStack_118 = (char ****)&ppppcStack_80;
          ppppcStack_a8 = (char ****)&ppppcStack_120;
          puStack_a0 = &DAT_18053ee60;
          ppppcStack_f8 = (char ****)0x1;
          ppppcStack_f0 = (char ****)&ppppcStack_a8;
          ppppcStack_e8 = (char ****)0x1;
          pppppcVar15 = &ppppcStack_f8;
          FUN_18025f7c0();
          puVar7 = PTR_DAT_1805f1060;
          param_2 = pppppcVar15;
          if ((*PTR_DAT_1805f18b8 == '\0') && (*(longlong *)PTR_DAT_1805f1828 != 0)) {
            uStack_90 = *(char ******)(PTR_DAT_1805f1060 + 0x20);
            uStack_88 = *(undefined8 *)(PTR_DAT_1805f1060 + 0x28);
            ppppcStack_98 = (char ****)0x1;
            pppppcVar14 = (char *****)FUN_18025f720();
            param_2 = &ppppcStack_98;
            cVar10 = (*(code *)pppppcVar15[3])(pppppcVar14);
            if (cVar10 != '\0') {
              FUN_18025f640(puVar7,pppppcVar14,pppppcVar15,&ppppcStack_98,&ppppcStack_f8);
              param_2 = pppppcVar14;
            }
          }
        }
        else {
LAB_1802575a4:
          puVar7 = PTR_DAT_1805f1060;
          param_2 = pppppcVar14;
          if ((*PTR_DAT_1805f18b8 == '\0') && (*(longlong *)PTR_DAT_1805f1828 != 0)) {
            uStack_148 = *(undefined4 *)(PTR_DAT_1805f1060 + 0x20);
            uStack_144 = *(undefined4 *)(PTR_DAT_1805f1060 + 0x24);
            uStack_140 = *(undefined4 *)(PTR_DAT_1805f1060 + 0x28);
            uStack_13c = *(undefined4 *)(PTR_DAT_1805f1060 + 0x2c);
            ppppcStack_150 = (char ****)0x1;
            pppppcVar15 = (char *****)FUN_18025f720();
            param_2 = &ppppcStack_150;
            cVar10 = (*(code *)pppppcVar14[3])(pppppcVar15);
            if (cVar10 != '\0') {
              puStack_e0 = PTR_DAT_1805f1060 + 0x30;
              ppppcStack_80 = (char ****)&ppppcStack_130;
              ppppcStack_78 = (char ****)&LAB_180265900;
              ppppcStack_120 = (char ****)&DAT_18053f129;
              ppppcStack_118 = (char ****)&ppppcStack_80;
              ppppcStack_a8 = (char ****)&ppppcStack_120;
              puStack_a0 = &DAT_18053ee60;
              ppppcStack_f8 = (char ****)0x1;
              ppppcStack_f0 = (char ****)&ppppcStack_a8;
              ppppcStack_e8 = (char ****)0x1;
              uStack_88 = CONCAT44(uStack_13c,uStack_140);
              ppppcStack_98 = ppppcStack_150;
              uStack_90 = (char *****)CONCAT44(uStack_144,uStack_148);
              FUN_18025f640(puVar7,pppppcVar15,pppppcVar14,&ppppcStack_98,&ppppcStack_f8);
              param_2 = pppppcVar15;
            }
          }
        }
        if ((char *****)ppppcStack_130 != (char *****)0x0) {
          FUN_1802654f0(&ppppcStack_130);
        }
        goto LAB_1802575c7;
      }
    }
    do {
      pppppcVar14 = DAT_180608cc8;
      if ((bVar9 & 1) != 0) {
        if (*(ulonglong *)PTR_DAT_1805f18c0 < 5) {
          uVar16 = (uint)DAT_1805f10a0;
          pppppcVar15 = (char *****)(ulonglong)uVar16;
          if (uVar16 - 1 < 2) {
LAB_18025717a:
            cVar10 = FUN_18025f490(PTR_DAT_1805f1090);
            if (cVar10 != '\0') {
              puStack_e0 = PTR_DAT_1805f1090 + 0x30;
              ppppcStack_80 = (char ****)0x18053f13a;
              ppppcStack_78 = (char ****)0x2f;
              ppppcStack_a8 = (char ****)&ppppcStack_80;
              puStack_a0 = &DAT_18053ee60;
              ppppcStack_f8 = (char ****)0x1;
              ppppcStack_f0 = (char ****)&ppppcStack_a8;
              ppppcStack_e8 = (char ****)0x1;
              pppppcVar15 = &ppppcStack_f8;
              FUN_18025f7c0();
              puVar7 = PTR_DAT_1805f1090;
              pppppcVar14 = pppppcVar15;
              if ((*PTR_DAT_1805f18b8 == '\0') && (*(longlong *)PTR_DAT_1805f1828 != 0)) {
                uStack_90 = *(char ******)(PTR_DAT_1805f1090 + 0x20);
                uStack_88 = *(undefined8 *)(PTR_DAT_1805f1090 + 0x28);
                ppppcStack_98 = (char ****)0x1;
                pppppcVar13 = (char *****)FUN_18025f720();
                pppppcVar14 = &ppppcStack_98;
                cVar10 = (*(code *)pppppcVar15[3])(pppppcVar13);
                if (cVar10 != '\0') {
                  FUN_18025f640(puVar7,pppppcVar13,pppppcVar15,&ppppcStack_98,&ppppcStack_f8);
                  pppppcVar14 = pppppcVar13;
                }
              }
              ppppcStack_130 = (char ****)(char *****)0x0;
              uStack_128 = 0xffffffff;
              goto LAB_180257464;
            }
          }
          else if (uVar16 != 0) {
            uVar16 = FUN_18044b9c0(&PTR_DAT_1805f1090);
            pppppcVar15 = (char *****)(ulonglong)uVar16;
            if ((char)uVar16 != '\0') goto LAB_18025717a;
          }
        }
        puVar7 = PTR_DAT_1805f1090;
        pppppcVar14 = pppppcVar15;
        if ((*PTR_DAT_1805f18b8 == '\0') && (*(longlong *)PTR_DAT_1805f1828 != 0)) {
          ppppcStack_118 = *(char *****)(PTR_DAT_1805f1090 + 0x20);
          uStack_110 = *(undefined4 *)(PTR_DAT_1805f1090 + 0x28);
          uStack_10c = *(undefined4 *)(PTR_DAT_1805f1090 + 0x2c);
          ppppcStack_120 = (char ****)0x1;
          pppppcVar13 = (char *****)FUN_18025f720();
          pppppcVar14 = &ppppcStack_120;
          cVar10 = (*(code *)pppppcVar15[3])(pppppcVar13);
          if (cVar10 != '\0') {
            puStack_e0 = PTR_DAT_1805f1090 + 0x30;
            ppppcStack_98 = (char ****)0x18053f13a;
            uStack_90 = (char *****)0x2f;
            ppppcStack_80 = (char ****)&ppppcStack_98;
            ppppcStack_78 = (char ****)&DAT_18053ee60;
            ppppcStack_f8 = (char ****)0x1;
            ppppcStack_f0 = (char ****)&ppppcStack_80;
            ppppcStack_e8 = (char ****)0x1;
            FUN_18025f640(puVar7,pppppcVar13,pppppcVar15,&ppppcStack_120,&ppppcStack_f8);
            pppppcVar14 = pppppcVar13;
          }
        }
        ppppcStack_130 = (char ****)(char *****)0x0;
        uStack_128 = 0xffffffff;
        goto LAB_180257464;
      }
      LOCK();
      bVar18 = bVar9 != DAT_180608b18;
      bVar8 = bVar9 | 1;
      if (bVar18) {
        bVar8 = DAT_180608b18;
        bVar9 = DAT_180608b18;
      }
      DAT_180608b18 = bVar8;
      UNLOCK();
    } while (bVar18);
    DAT_180608cc0 = 0;
    DAT_180608cc8 = (char *****)0x8000000000000000;
    ppppcStack_80 = (char ****)pppppcVar14;
    ppppcStack_78 = (char ****)DAT_180608cd0;
    puStack_70 = (undefined *)0x0;
    uStack_61 = 1;
    FUN_180254890(&ppppcStack_80,&DAT_180608b20);
    puStack_e0 = puStack_70;
    fVar6 = DAT_180453580;
    uStack_134 = SUB84(param_2,0);
    puStack_70 = (undefined *)0x0;
    pppppcVar14 = (char *****)(ppppcStack_78 + (longlong)puStack_e0 * 4);
    uStack_d8 = 0;
    pppppcVar15 = (char *****)ppppcStack_78;
    uStack_138 = param_3;
    ppppcStack_f0 = (char ****)pppppcVar14;
    ppppcStack_e8 = (char ****)&ppppcStack_80;
    if (puStack_e0 != (undefined *)0x0) {
      do {
        ppppcStack_108 = (char ****)(pppppcVar15 + 4);
        ppppcVar2 = *pppppcVar15;
        ppppcVar3 = pppppcVar15[1];
        ppppcVar4 = pppppcVar15[2];
        iVar1 = *(int *)(pppppcVar15 + 3);
        uVar11 = thunk_FUN_18043b470(&DAT_180608c28);
        if (iVar1 - 0x200U < 0xf) {
          uVar16 = (uint)ppppcVar3;
          switch(iVar1) {
          case 0x200:
            FUN_180262060(uVar11,CONCAT44((float)((int)(uint)ppppcVar4 >> 0x10),
                                          (float)(int)(short)ppppcVar4));
            break;
          default:
            FUN_1802620a0(uVar11,0,1);
            break;
          case 0x202:
            FUN_1802620a0(uVar11,0,0);
            break;
          case 0x204:
          case 0x206:
            FUN_1802620a0(uVar11,1,1);
            break;
          case 0x205:
            FUN_1802620a0(uVar11,1,0);
            break;
          case 0x207:
          case 0x209:
            FUN_1802620a0(uVar11,2,1);
            break;
          case 0x208:
            FUN_1802620a0(uVar11,2,0);
            break;
          case 0x20a:
            FUN_180262080(uVar11,(ulonglong)(uint)((float)((int)uVar16 >> 0x10) / fVar6) << 0x20);
            break;
          case 0x20b:
          case 0x20d:
            FUN_1802620a0(uVar11,'\x04' - ((uVar16 & 0xffff0000) == 0x10000),1);
            break;
          case 0x20c:
            FUN_1802620a0(uVar11,'\x04' - ((uVar16 & 0xffff0000) == 0x10000),0);
            break;
          case 0x20e:
            FUN_180262080(uVar11,(float)((int)uVar16 >> 0x10) / fVar6);
          }
        }
        else {
          switch(iVar1) {
          case 0xff:
            FUN_180258a80(uVar11,ppppcVar3,ppppcVar4);
            break;
          case 0x100:
          case 0x101:
          case 0x104:
          case 0x105:
            if (ppppcVar3 < (char ****)0x100) {
              FUN_1802587a0(uVar11,iVar1,ppppcVar3,ppppcVar4);
            }
            break;
          case 0x102:
            FUN_180261f90(uVar11,(ulonglong)ppppcVar3 & 0xff);
            break;
          case 0x103:
            break;
          default:
            if (iVar1 == 5) {
              lVar12 = thunk_FUN_18043b470(&DAT_180608c28);
              *(float *)(lVar12 + 8) = (float)((uint)ppppcVar4 & 0xffff);
              *(float *)(lVar12 + 0xc) = (float)((uint)((ulonglong)ppppcVar4 >> 0x10) & 0xffff);
            }
          }
        }
        (**(code **)(DAT_180608ca8 + 0x30))(DAT_180608ca0,ppppcVar2,iVar1,ppppcVar3,ppppcVar4);
        pppppcVar15 = (char *****)ppppcStack_108;
      } while ((char *****)ppppcStack_108 != pppppcVar14);
    }
    uStack_88 = puStack_70;
    ppppcStack_98 = ppppcStack_80;
    uStack_90 = (char *****)ppppcStack_78;
    if (DAT_180608cc0 != 2) {
      FUN_18044b690(&DAT_180608cc0,&ppppcStack_98);
    }
    ppppcStack_f0 = (char ****)uStack_90;
    ppppcStack_e8 = (char ****)uStack_88;
    ppppcStack_f8 = ppppcStack_98;
    FUN_180450530(&DAT_180540218,0x18,&ppppcStack_f8,&PTR_LAB_18053eaa8,
                  &PTR_s_vendor_hudhook_0_6_5_src_rendere_180540230);
LAB_180257acb:
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
LAB_1802575c7:
  if (*(longlong *)PTR_DAT_1805f18c0 == 0) {
    uVar16 = (uint)DAT_1805f1088;
    param_2 = (char *****)(ulonglong)uVar16;
    if (uVar16 - 1 < 2) {
LAB_1802576cd:
      cVar10 = FUN_18025f490(PTR_s__1805f1078);
      if (cVar10 != '\0') {
        puStack_e0 = PTR_s__1805f1078 + 0x30;
        ppppcStack_80 = (char ****)0x18053f4b8;
        ppppcStack_78 = (char ****)0x4f;
        ppppcStack_120 = (char ****)&ppppcStack_80;
        ppppcStack_118 = (char ****)&DAT_18053ee60;
        ppppcStack_f8 = (char ****)0x1;
        ppppcStack_f0 = (char ****)&ppppcStack_120;
        ppppcStack_e8 = (char ****)0x1;
        pppppcVar15 = &ppppcStack_f8;
        FUN_18025f7c0();
        puVar7 = PTR_s__1805f1078;
        if ((*PTR_DAT_1805f18b8 == '\0') && (4 < *(ulonglong *)PTR_DAT_1805f1828)) {
          uStack_90 = *(char ******)(PTR_s__1805f1078 + 0x20);
          uStack_88 = *(undefined8 *)(PTR_s__1805f1078 + 0x28);
          ppppcStack_98 = (char ****)&DAT_00000005;
          uVar11 = FUN_18025f720();
          cVar10 = (*(code *)pppppcVar15[3])(uVar11,&ppppcStack_98);
          if (cVar10 != '\0') {
            FUN_18025f640(puVar7,uVar11,pppppcVar15,&ppppcStack_98,&ppppcStack_f8);
          }
        }
        goto LAB_1802577bc;
      }
    }
    else if (uVar16 != 0) {
      uVar16 = FUN_18044b9c0(&PTR_s__1805f1078);
      param_2 = (char *****)(ulonglong)uVar16;
      if ((char)uVar16 != '\0') goto LAB_1802576cd;
    }
  }
  puVar7 = PTR_s__1805f1078;
  if ((*PTR_DAT_1805f18b8 == '\0') && (4 < *(ulonglong *)PTR_DAT_1805f1828)) {
    uStack_160 = *(undefined4 *)(PTR_s__1805f1078 + 0x20);
    uStack_15c = *(undefined4 *)(PTR_s__1805f1078 + 0x24);
    uStack_158 = *(undefined4 *)(PTR_s__1805f1078 + 0x28);
    uStack_154 = *(undefined4 *)(PTR_s__1805f1078 + 0x2c);
    uStack_168 = 5;
    uVar11 = FUN_18025f720();
    cVar10 = (*(code *)param_2[3])(uVar11,&uStack_168);
    if (cVar10 != '\0') {
      puStack_e0 = PTR_s__1805f1078 + 0x30;
      ppppcStack_98 = (char ****)0x18053f4b8;
      uStack_90 = (char *****)0x4f;
      ppppcStack_80 = (char ****)&ppppcStack_98;
      ppppcStack_78 = (char ****)&DAT_18053ee60;
      ppppcStack_f8 = (char ****)0x1;
      ppppcStack_f0 = (char ****)&ppppcStack_80;
      ppppcStack_e8 = (char ****)0x1;
      FUN_18025f640(puVar7,uVar11,param_2,&uStack_168,&ppppcStack_f8);
    }
  }
LAB_1802577bc:
  (*DAT_1805f1020)(pppcStack_100,uVar17,param_3);
  return;
}




/* ===== 180259570  FUN_180259570 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_180259570(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  longlong ****pppplVar3;
  longlong ***ppplVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *****ppppplVar10;
  longlong *****ppppplVar11;
  longlong *****ppppplVar12;
  longlong *****ppppplVar13;
  char *pcVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  longlong *****ppppplVar18;
  longlong *****ppppplVar19;
  longlong *****ppppplVar20;
  ulonglong in_stack_fffffffffffffd30;
  longlong ****pppplStack_290;
  undefined8 local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  longlong ****local_278;
  longlong lStack_270;
  undefined8 local_268;
  longlong ****pppplStack_260;
  undefined8 local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  longlong ***local_248;
  longlong lStack_240;
  undefined8 local_238;
  longlong ****pppplStack_230;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  longlong ****local_218;
  longlong ****pppplStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  char *local_1f8;
  longlong lStack_1f0;
  undefined8 uStack_1e8;
  longlong ****pppplStack_1e0;
  char *pcStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  longlong local_1c0;
  undefined8 uStack_1b8;
  longlong ****pppplStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  longlong ***local_198;
  longlong lStack_190;
  undefined8 local_188;
  longlong ****pppplStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  longlong ****local_110;
  longlong ****pppplStack_108;
  longlong ****local_100;
  longlong ****pppplStack_f8;
  longlong ****local_f0;
  longlong ****pppplStack_e8;
  longlong ****local_e0;
  longlong ****local_d8;
  longlong ****local_d0;
  longlong ****local_c8;
  longlong ****local_c0;
  longlong ****local_b8;
  longlong ****local_b0;
  longlong ****local_a8;
  longlong ****local_a0;
  longlong ****local_98;
  longlong ****local_90;
  longlong ****local_88;
  longlong ****local_80;
  longlong ****pppplStack_78;
  ulonglong local_70;
  longlong ****pppplStack_68;
  longlong ***local_60;
  undefined1 local_52;
  undefined1 local_51;
  longlong ****local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_60 = (longlong ***)FUN_1802654d0(param_2);
  FUN_180264900(&local_218,&local_60);
  if ((int)local_218 == 1) {
    param_1[1] = pppplStack_210;
    *(undefined4 *)(param_1 + 2) = (undefined4)local_208;
    *param_1 = 0x8000000000000000;
    goto LAB_180259821;
  }
  local_b0 = pppplStack_210;
  local_248 = (longlong ***)0x1388;
  local_80 = (longlong ****)CONCAT44(local_80._4_4_,1);
  local_218 = &local_60;
  pppplStack_210 = &local_248;
  local_208 = &local_80;
  FUN_180256810(&local_110,&local_218);
  pppplVar3 = pppplStack_108;
  if ((char)local_110 == '\0') {
    local_278 = pppplStack_108;
    FUN_1800658a0();
    lVar6 = thunk_FUN_180291940(100000,4);
    if (lVar6 == 0) {
      FUN_18045031b(4,100000);
      goto LAB_18025a39b;
    }
    pppplStack_290 = pppplVar3;
    local_288 = 5000;
    uStack_280 = 1;
    local_248 = (longlong ***)0x2710;
    local_50 = (longlong ****)CONCAT44(local_50._4_4_,2);
    local_218 = &local_60;
    pppplStack_210 = &local_248;
    local_208 = &local_50;
    FUN_180256610(&local_110,&local_218);
    pppplVar3 = pppplStack_108;
    if ((char)local_110 == '\0') {
      local_80 = pppplStack_108;
      FUN_1800658a0();
      lVar7 = thunk_FUN_180291940(20000,2);
      if (lVar7 == 0) {
        FUN_18045031b(2,20000);
        goto LAB_18025a39b;
      }
      local_278 = (longlong ****)0x2710;
      local_268 = 0;
      pppplStack_260 = pppplVar3;
      local_258 = 10000;
      uStack_250 = 2;
      local_80 = (longlong ****)0x1;
      local_a8 = (longlong ****)CONCAT44(local_a8._4_4_,4);
      local_208 = &local_a8;
      ppppplVar12 = &local_218;
      lStack_270 = lVar7;
      local_218 = &local_60;
      pppplStack_210 = (longlong ****)&local_80;
      FUN_180256710(&local_110,ppppplVar12);
      pppplVar3 = pppplStack_108;
      if ((char)local_110 == '\0') {
        local_50 = pppplStack_108;
        FUN_1800658a0();
        lVar7 = thunk_FUN_180291940(0x40,4);
        if (lVar7 == 0) {
          FUN_18045031b(4,0x40);
          goto LAB_18025a39b;
        }
        local_248 = (longlong ***)0x1;
        local_238 = 0;
        pppplStack_230 = pppplVar3;
        local_228 = 1;
        uStack_220 = 4;
        local_50 = (longlong ****)0x0;
        local_80 = (longlong ****)0x0;
        in_stack_fffffffffffffd30 = in_stack_fffffffffffffd30 & 0xffffffff00000000;
        uVar16 = 0x264;
        lStack_240 = lVar7;
        iVar5 = D3DCompile("\n        cbuffer vertex_buffer: register(b0) {\n            float4x4 projection;\n        };\n\n        struct VS_INPUT {\n          float2 pos: POSITION;\n          float4 col: COLOR0;\n          float2 uv: TEXCOORD0;\n        };\n\n        struct PS_INPUT {\n          float4 pos: SV_POSITION;\n          float4 col: COLOR0;\n          float2 uv: TEXCOORD0;\n        };\n\n        PS_INPUT main(VS_INPUT input) {\n          PS_INPUT output;\n          output.pos = mul(projection, float4(input.pos.xy, 0.0f, 1.0f));\n          output.col = input.col;\n          output.uv = input.uv.xy;\n          return output;\n        }\n        "
                           ,0x264,0,0,0,"main","vs_4_0",in_stack_fffffffffffffd30,0,&local_50,
                           &local_80);
        pppplVar3 = local_50;
        local_90 = (longlong ****)CONCAT44(local_90._4_4_,iVar5);
        if (iVar5 < 0) {
          local_218 = (longlong ****)FUN_180265500(iVar5);
          pppplVar3 = local_80;
          pppplStack_210 = (longlong ****)CONCAT44(pppplStack_210._4_4_,uVar16);
          local_88 = local_218;
          if ((longlong *****)local_80 == (longlong *****)0x0) {
            FUN_180450510(&PTR_s_vendor_hudhook_0_6_5_src_util_rs_18053f0d8);
          }
          else {
            if ((longlong *****)local_50 != (longlong *****)0x0) {
              FUN_1802654f0(&local_50);
            }
            local_218 = local_88;
            local_208 = (longlong *****)pppplVar3;
            uVar17 = 0x17;
            pppplStack_210._0_4_ = uVar16;
            local_218 = (longlong ****)FUN_1802523c0("Compiling vertex shader",0x17,&local_218);
            pppplStack_210 = (longlong ****)CONCAT44(pppplStack_210._4_4_,uVar17);
            FUN_180450530("D3DCompile",10,&local_218,&PTR_LAB_18053eac8,
                          &PTR_s_vendor_hudhook_0_6_5_src_rendere_18053fcd0);
          }
          goto LAB_18025a39b;
        }
        if ((longlong *****)local_50 == (longlong *****)0x0) {
          FUN_180450510(&PTR_s_vendor_hudhook_0_6_5_src_util_rs_18053f0c0);
          goto LAB_18025a39b;
        }
        if ((longlong *****)local_80 != (longlong *****)0x0) {
          local_51 = 0;
          FUN_1802654f0(&local_80);
        }
        local_98 = pppplVar3;
        local_50 = (longlong ****)0x0;
        local_80 = (longlong ****)0x0;
        uVar16 = 0x181;
        iVar5 = D3DCompile("\n        struct PS_INPUT {\n          float4 pos: SV_POSITION;\n          float4 col: COLOR0;\n          float2 uv: TEXCOORD0;\n        };\n\n        Texture2D texture0: register(t0);\n        SamplerState sampler0: register(s0);\n\n        float4 main(PS_INPUT input): SV_Target {\n          float4 col = input.col * texture0.Sample(sampler0, input.uv);\n          return col;\n        }\n        "
                           ,0x181,0,0,0,"main","ps_4_0",
                           in_stack_fffffffffffffd30 & 0xffffffff00000000,0,&local_50,&local_80);
        pppplVar3 = local_50;
        if (iVar5 < 0) {
          local_90 = (longlong ****)CONCAT44(local_90._4_4_,iVar5);
          local_218 = (longlong ****)FUN_180265500(iVar5);
          pppplVar3 = local_80;
          pppplStack_210 = (longlong ****)CONCAT44(pppplStack_210._4_4_,uVar16);
          local_88 = local_218;
          if ((longlong *****)local_80 == (longlong *****)0x0) {
            FUN_180450510(&PTR_s_vendor_hudhook_0_6_5_src_util_rs_18053f0d8);
          }
          else {
            if ((longlong *****)local_50 != (longlong *****)0x0) {
              FUN_1802654f0(&local_50);
            }
            local_218 = local_88;
            local_208 = (longlong *****)pppplVar3;
            uVar17 = 0x16;
            pppplStack_210._0_4_ = uVar16;
            local_218 = (longlong ****)FUN_1802523c0("Compiling pixel shader",0x16,&local_218);
            pppplStack_210 = (longlong ****)CONCAT44(pppplStack_210._4_4_,uVar17);
            FUN_180450530("D3DCompile",10,&local_218,&PTR_LAB_18053eac8,
                          &PTR_s_vendor_hudhook_0_6_5_src_rendere_18053fd00);
          }
          goto LAB_18025a39b;
        }
        if ((longlong *****)local_50 == (longlong *****)0x0) {
          local_90 = (longlong ****)CONCAT44(local_90._4_4_,iVar5);
          FUN_180450510(&PTR_s_vendor_hudhook_0_6_5_src_util_rs_18053f0c0);
          goto LAB_18025a39b;
        }
        if ((longlong *****)local_80 != (longlong *****)0x0) {
          local_52 = 0;
          FUN_1802654f0(&local_80);
        }
        local_a0 = pppplVar3;
        local_218 = (longlong ****)0x0;
        uVar8 = FUN_1802651f0(&local_98);
        uVar9 = FUN_180265200(&local_98);
        ppplVar4 = local_60;
        iVar5 = (*(code *)(*local_60)[0xc])(local_60,uVar8,uVar9,0,ppppplVar12);
        uVar15 = (uint)uVar8;
        if (iVar5 < 0) {
          ppppplVar10 = (longlong *****)FUN_180265500(iVar5);
          ppppplVar18 = (longlong *****)(ulonglong)uVar15;
          ppppplVar13 = ppppplVar12;
          if ((longlong *****)local_218 != (longlong *****)0x0) {
            FUN_1802654f0(&local_218);
          }
LAB_180259e98:
          FUN_1802654f0(&local_a0);
          ppppplVar19 = (longlong *****)0x0;
          ppppplVar20 = ppppplVar18;
        }
        else {
          if ((longlong *****)local_218 == (longlong *****)0x0) {
            FUN_180450510(&PTR_s_vendor_hudhook_0_6_5_src_util_rs_18053efd8);
            goto LAB_18025a39b;
          }
          local_b8 = local_218;
          local_218 = (longlong ****)0x0;
          uVar8 = FUN_1802651f0(&local_a0);
          uVar9 = FUN_180265200(&local_a0);
          iVar5 = (*(code *)(*ppplVar4)[0xf])(ppplVar4,uVar8,uVar9,0,ppppplVar12);
          uVar15 = (uint)uVar8;
          if (iVar5 < 0) {
            ppppplVar11 = (longlong *****)FUN_180265500(iVar5);
            ppppplVar18 = (longlong *****)(ulonglong)uVar15;
            if ((longlong *****)local_218 != (longlong *****)0x0) {
              FUN_1802654f0(&local_218);
            }
LAB_180259e8b:
            FUN_1802654f0(&local_b8);
            ppppplVar13 = ppppplVar12;
            ppppplVar10 = ppppplVar11;
            goto LAB_180259e98;
          }
          if ((longlong *****)local_218 == (longlong *****)0x0) {
            FUN_180450510(&PTR_s_vendor_hudhook_0_6_5_src_util_rs_18053efd8);
            goto LAB_18025a39b;
          }
          local_c0 = local_218;
          local_50 = (longlong ****)0x0;
          uVar8 = FUN_1802651f0(&local_98);
          uVar9 = FUN_180265200(&local_98);
          local_218 = (longlong ****)0x18053ff8a;
          pppplStack_210 = (longlong ****)0x1000000000;
          local_208 = (longlong *****)0x0;
          uStack_200 = (longlong *****)0x0;
          local_1f8 = "COLOR";
          lStack_1f0 = _DAT_18053e320;
          uStack_1e8 = _UNK_18053e328;
          pppplStack_1e0 = (longlong ****)0x0;
          pcStack_1d8 = "TEXCOORD";
          uStack_1d0 = CONCAT44(_UNK_18053e334,_DAT_18053e330);
          uStack_1c8 = (longlong *****)CONCAT44(_UNK_18053e33c,_UNK_18053e338);
          local_1c0 = 0;
          ppppplVar12 = &local_80;
          FUN_1802647f0(ppppplVar12,&local_60,&local_218,3,uVar8,uVar9,1,&local_50);
          ppppplVar11 = (longlong *****)pppplStack_78;
          if ((int)local_80 == 1) {
            ppppplVar18 = (longlong *****)(local_70 & 0xffffffff);
            if ((longlong *****)local_50 != (longlong *****)0x0) {
              FUN_1802654f0(&local_50);
            }
LAB_180259e7e:
            FUN_1802654f0(&local_c0);
            goto LAB_180259e8b;
          }
          if ((longlong *****)local_50 == (longlong *****)0x0) {
            FUN_180450510(&PTR_s_vendor_hudhook_0_6_5_src_util_rs_18053efd8);
            goto LAB_18025a39b;
          }
          local_c8 = local_50;
          local_80 = (longlong ****)0x0;
          FUN_1802648a0(&local_218,&local_60,&DAT_18053ffa4,1,ppppplVar12);
          ppppplVar11 = (longlong *****)pppplStack_210;
          if ((int)local_218 == 1) {
            ppppplVar18 = (longlong *****)((ulonglong)local_208 & 0xffffffff);
            if ((longlong *****)local_80 != (longlong *****)0x0) {
              FUN_1802654f0(&local_80);
            }
LAB_180259e71:
            FUN_1802654f0(&local_c8);
            goto LAB_180259e7e;
          }
          if ((longlong *****)local_80 == (longlong *****)0x0) {
            FUN_180450510(&PTR_s_vendor_hudhook_0_6_5_src_util_rs_18053efd8);
            goto LAB_18025a39b;
          }
          local_d0 = local_80;
          local_50 = (longlong ****)0x0;
          local_120 = 0;
          uStack_118 = 0;
          local_130 = 0;
          uStack_128 = 0;
          local_140 = 0;
          uStack_138 = 0;
          local_150 = 0;
          uStack_148 = 0;
          local_160 = 0;
          uStack_158 = 0;
          uStack_170 = 0;
          uStack_168 = 0;
          pppplStack_180 = (longlong ****)0x0;
          local_178 = 0;
          lStack_190 = 0;
          local_188 = 0;
          uStack_1a0 = 0;
          local_198 = (longlong ***)0x0;
          pppplStack_1b0 = (longlong ****)0x0;
          local_1a8 = 0;
          local_1c0 = 0;
          uStack_1b8 = 0;
          uStack_1d0 = 0;
          uStack_1c8 = (longlong *****)0x0;
          pppplStack_1e0 = (longlong ****)0x0;
          pcStack_1d8 = (char *)0x0;
          lStack_1f0 = 0;
          uStack_1e8 = 0;
          local_218 = (longlong ****)_DAT_18053e340;
          pppplStack_210 = (longlong ****)_UNK_18053e348;
          local_208 = (longlong *****)CONCAT44(_UNK_18053e354,_DAT_18053e350);
          uStack_200 = (longlong *****)CONCAT44(_UNK_18053e35c,_UNK_18053e358);
          local_1f8 = (char *)CONCAT35(local_1f8._5_3_,0xf00000001);
          FUN_180264790(&local_80,&local_60,&local_218,1,&local_50);
          ppppplVar11 = (longlong *****)pppplStack_78;
          if ((int)local_80 == 1) {
            ppppplVar18 = (longlong *****)(local_70 & 0xffffffff);
            if ((longlong *****)local_50 != (longlong *****)0x0) {
              FUN_1802654f0(&local_50);
            }
LAB_180259e64:
            FUN_1802654f0(&local_d0);
            goto LAB_180259e71;
          }
          if ((longlong *****)local_50 == (longlong *****)0x0) {
            FUN_180450510(&PTR_s_vendor_hudhook_0_6_5_src_util_rs_18053efd8);
            goto LAB_18025a39b;
          }
          local_d8 = local_50;
          local_50 = (longlong ****)0x0;
          local_218 = (longlong ****)0x100000003;
          pppplStack_210 = (longlong ****)0x0;
          local_208 = (longlong *****)0x0;
          uStack_200 = (longlong *****)DAT_180451b60;
          local_1f8 = (char *)0x0;
          FUN_180264950(&local_80,&local_60,&local_218,1,&local_50);
          ppppplVar11 = (longlong *****)pppplStack_78;
          if ((int)local_80 == 1) {
            ppppplVar18 = (longlong *****)(local_70 & 0xffffffff);
            if ((longlong *****)local_50 != (longlong *****)0x0) {
              FUN_1802654f0(&local_50);
            }
LAB_180259e57:
            FUN_1802654f0(&local_d8);
            goto LAB_180259e64;
          }
          if ((longlong *****)local_50 == (longlong *****)0x0) {
            FUN_180450510(&PTR_s_vendor_hudhook_0_6_5_src_util_rs_18053efd8);
            goto LAB_18025a39b;
          }
          local_90 = local_50;
          local_a8 = local_50;
          FUN_180256510(&local_218,&local_60);
          ppppplVar19 = (longlong *****)local_b8;
          ppppplVar10 = (longlong *****)local_c0;
          ppppplVar18 = (longlong *****)local_c8;
          ppppplVar20 = (longlong *****)local_d0;
          ppppplVar13 = (longlong *****)local_d8;
          ppppplVar11 = (longlong *****)pppplStack_210;
          if ((int)local_218 == 1) {
            ppppplVar18 = (longlong *****)((ulonglong)local_208 & 0xffffffff);
            FUN_1802654f0(&local_a8);
            goto LAB_180259e57;
          }
          local_88 = pppplStack_210;
          FUN_1802654f0(&local_a0);
        }
        FUN_1802654f0(&local_98);
        if (ppppplVar19 != (longlong *****)0x0) {
          pppplStack_e8 = local_88;
          local_e0 = local_90;
          local_110 = (longlong ****)ppppplVar19;
          pppplStack_108 = (longlong ****)ppppplVar10;
          local_100 = (longlong ****)ppppplVar18;
          pppplStack_f8 = (longlong ****)ppppplVar20;
          local_f0 = (longlong ****)ppppplVar13;
          ppppplVar12 = (longlong *****)FUN_1802654d0(&local_60);
          local_218 = (longlong ****)ppppplVar12;
          FUN_1800658a0();
          ppppplVar13 = (longlong *****)thunk_FUN_180291940(0xc0,8);
          if (ppppplVar13 == (longlong *****)0x0) {
            FUN_18045031b(8,0xc0);
          }
          else {
            local_80 = (longlong ****)&DAT_00000008;
            local_70 = 0;
            local_218 = (longlong ****)0x8000000000000000;
            pppplStack_78 = (longlong ****)ppppplVar13;
            pppplStack_68 = (longlong ****)ppppplVar12;
            FUN_1802554b0(param_3,&local_218);
            lVar7 = thunk_FUN_18043b470(param_3);
            *(byte *)(lVar7 + 4) = *(byte *)(lVar7 + 4) | 8;
            FUN_1800658a0();
            pcVar14 = (char *)thunk_FUN_180291940(0x12,1);
            uVar2 = s_hudhook_dx11_0_6_5_180540188._12_4_;
            uVar17 = s_hudhook_dx11_0_6_5_180540188._8_4_;
            uVar16 = s_hudhook_dx11_0_6_5_180540188._4_4_;
            if (pcVar14 != (char *)0x0) {
              *(undefined4 *)pcVar14 = s_hudhook_dx11_0_6_5_180540188._0_4_;
              *(undefined4 *)(pcVar14 + 4) = uVar16;
              *(undefined4 *)(pcVar14 + 8) = uVar17;
              *(undefined4 *)(pcVar14 + 0xc) = uVar2;
              pcVar14[0x10] = '.';
              pcVar14[0x11] = '5';
              local_218 = (longlong ****)0x12;
              local_208 = (longlong *****)0x12;
              pppplStack_210 = (longlong ****)pcVar14;
              FUN_180255660(param_3,&local_218);
              ppplVar4 = local_60;
              pppplVar3 = local_b0;
              param_1[0x1e] = local_e0;
              param_1[0x1c] = local_f0;
              param_1[0x1d] = pppplStack_e8;
              param_1[0x1a] = local_100;
              param_1[0x1b] = pppplStack_f8;
              param_1[0x18] = local_110;
              param_1[0x19] = pppplStack_108;
              local_218 = local_80;
              pppplStack_210 = pppplStack_78;
              local_208 = (longlong *****)local_70;
              uStack_200 = (longlong *****)pppplStack_68;
              uStack_1d0 = CONCAT44(uStack_27c,uStack_280);
              local_1f8 = (char *)0x1388;
              uStack_1e8 = 0;
              pppplStack_1e0 = pppplStack_290;
              pcStack_1d8 = (char *)local_288;
              uStack_1a0 = CONCAT44(uStack_24c,uStack_250);
              local_1a8 = local_258;
              uStack_1b8 = local_268;
              pppplStack_1b0 = pppplStack_260;
              uStack_1c8 = (longlong *****)local_278;
              local_1c0 = lStack_270;
              uStack_170 = CONCAT44(uStack_21c,uStack_220);
              local_178 = local_228;
              local_188 = local_238;
              pppplStack_180 = pppplStack_230;
              local_198 = local_248;
              lStack_190 = lStack_240;
              lStack_1f0 = lVar6;
              memcpy(param_1,&local_218,0xb0);
              param_1[0x16] = ppplVar4;
              param_1[0x17] = pppplVar3;
              return param_1;
            }
            FUN_18045031b(1,0x12);
          }
LAB_18025a39b:
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        param_1[1] = ppppplVar10;
        *(int *)(param_1 + 2) = (int)ppppplVar18;
        *param_1 = 0x8000000000000000;
        FUN_1802654f0(&pppplStack_230);
        if ((longlong ****)local_248 != (longlong ****)0x0) {
          thunk_FUN_1802919a0(lStack_240,(longlong)local_248 << 6,4);
        }
      }
      else {
        param_1[1] = pppplStack_108;
        *(undefined4 *)(param_1 + 2) = local_100._0_4_;
        *param_1 = 0x8000000000000000;
      }
      FUN_1802654f0(&pppplStack_260);
      if ((longlong *****)local_278 != (longlong *****)0x0) {
        thunk_FUN_1802919a0(lStack_270,(longlong)local_278 * 2,2);
      }
    }
    else {
      param_1[1] = pppplStack_108;
      *(undefined4 *)(param_1 + 2) = local_100._0_4_;
      *param_1 = 0x8000000000000000;
    }
    FUN_1802654f0(&pppplStack_290);
    thunk_FUN_1802919a0(lVar6,100000,4);
  }
  else {
    param_1[1] = pppplStack_108;
    *(undefined4 *)(param_1 + 2) = local_100._0_4_;
    *param_1 = 0x8000000000000000;
  }
  FUN_1802654f0(&local_b0);
LAB_180259821:
  FUN_1802654f0(&local_60);
  return param_1;
}




/* ===== 18025d900  FUN_18025d900 ===== */

/* WARNING: Removing unreachable block (ram,0x00018025da57) */

undefined8 FUN_18025d900(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  BOOL BVar8;
  longlong lVar9;
  LONG_PTR LVar10;
  void *pvVar11;
  longlong *plVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  uint uVar15;
  LPRECT lpRect;
  longlong *plVar16;
  HWND hWnd;
  undefined4 uVar17;
  undefined *puVar18;
  bool bVar19;
  undefined8 in_stack_fffffffffffff820;
  longlong *local_790;
  longlong *local_778;
  undefined4 local_770;
  undefined4 local_76c;
  void *local_768;
  undefined8 *local_760;
  longlong local_758;
  longlong *local_750;
  undefined8 uStack_748;
  undefined4 local_740;
  undefined4 local_73c;
  longlong *local_730;
  undefined *local_728;
  undefined8 local_720;
  HWND local_718;
  undefined8 local_710;
  undefined8 uStack_708;
  undefined8 local_700;
  undefined8 uStack_6f8;
  undefined8 local_6f0;
  undefined8 uStack_6e8;
  undefined8 local_6e0;
  undefined8 uStack_6d8;
  undefined8 local_6d0;
  undefined8 uStack_6c8;
  undefined8 local_6c0;
  undefined8 uStack_6b8;
  undefined8 local_6b0;
  undefined8 uStack_6a8;
  undefined8 local_6a0;
  undefined8 local_698;
  undefined4 local_690;
  undefined4 uStack_68c;
  undefined4 uStack_688;
  undefined4 uStack_684;
  longlong *local_680;
  longlong *plStack_678;
  undefined8 local_670;
  undefined *puStack_668;
  undefined8 local_660;
  undefined8 uStack_658;
  HWND local_650;
  undefined8 uStack_648;
  undefined8 local_640;
  undefined8 local_600;
  undefined8 uStack_5f8;
  undefined2 local_580;
  undefined8 local_578;
  undefined8 local_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 local_550;
  undefined1 local_548;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined1 local_4f0;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined *local_3c0;
  undefined8 local_3b8;
  undefined1 local_3b0 [224];
  undefined8 ******local_2d0;
  longlong *local_2c8;
  undefined4 local_2c0;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  longlong *local_178;
  longlong *local_170;
  undefined4 local_168;
  undefined1 local_164 [228];
  longlong **local_80;
  undefined8 local_70;
  
  uVar17 = (undefined4)((ulonglong)in_stack_fffffffffffff820 >> 0x20);
  local_80 = &local_778;
  local_70 = 0xfffffffffffffffe;
  puVar1 = *(undefined8 **)*param_1;
  *(undefined8 *)*param_1 = 0;
  local_650 = (HWND)0x0;
  uStack_648 = 0;
  local_660 = 0;
  uStack_658 = 0;
  local_670 = 0;
  puStack_668 = (undefined *)0x0;
  local_680 = (longlong *)0x0;
  plStack_678 = (longlong *)0x0;
  local_640 = 0;
  FUN_180264650(&local_2d0,puVar1,&local_680);
  hWnd = local_650;
  if ((int)local_2d0 == 1) {
    local_790 = local_2c8;
LAB_18025d9ae:
    plVar12 = (longlong *)param_1[2];
    lVar4 = *plVar12;
    uVar14 = local_2c0;
    goto joined_r0x00018025daa6;
  }
  FUN_180263190(&local_440);
  plVar12 = (longlong *)*puVar1;
  local_2d0 = (undefined8 *******)0x0;
  uVar14 = 0x80540634;
  iVar7 = (**(code **)(*plVar12 + 0x38))(plVar12,&DAT_180540634,&local_2d0);
  if (iVar7 < 0) {
    local_790 = (longlong *)FUN_180265500(iVar7);
  }
  else if ((undefined8 *******)local_2d0 == (undefined8 *******)0x0) {
    uVar14 = 0;
    local_790 = (longlong *)0x0;
  }
  else {
    local_3c8 = (undefined8 *******)local_2d0;
    FUN_180259570(&local_680,&local_3c8,&local_440);
    plVar16 = plStack_678;
    plVar12 = local_680;
    uVar14 = (undefined4)local_670;
    pvVar11 = (void *)((longlong)&local_670 + 4);
    memcpy(local_164,pvVar11,0xe4);
    local_178 = plVar12;
    local_170 = plVar16;
    local_168 = uVar14;
    FUN_1802654f0(&local_3c8);
    puVar1 = DAT_180608af8;
    lVar4 = DAT_180608af0;
    DAT_180608af0 = 0;
    DAT_180608b00 = 0;
    if (lVar4 != 0) {
      local_6a0 = local_3d0;
      local_6b0 = local_3e0;
      uStack_6a8 = uStack_3d8;
      local_6c0 = local_3f0;
      uStack_6b8 = uStack_3e8;
      local_6d0 = local_400;
      uStack_6c8 = uStack_3f8;
      local_6e0 = local_410;
      uStack_6d8 = uStack_408;
      local_6f0 = local_420;
      uStack_6e8 = uStack_418;
      local_700 = local_430;
      uStack_6f8 = uStack_428;
      local_710 = local_440;
      uStack_708 = uStack_438;
      memcpy(&local_3c8,&local_178,0xf8);
      local_750 = (longlong *)0x0;
      uStack_748._0_4_ = 0;
      uStack_748._4_4_ = 0;
      lpRect = (LPRECT)&local_750;
      BVar8 = GetClientRect(hWnd,lpRect);
      uVar13 = uStack_748;
      plVar12 = local_750;
      uVar14 = SUB84(lpRect,0);
      if (BVar8 == 0) {
        local_680 = (longlong *)FUN_180265530();
        plStack_678 = (longlong *)CONCAT44(plStack_678._4_4_,uVar14);
        FUN_180450530("called `Result::unwrap()` on an `Err` value",0x2b,&local_680,
                      &PTR_LAB_18053eac8,&PTR_s_vendor_hudhook_0_6_5_src_util_rs_18053f0f0);
LAB_18025e480:
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar9 = thunk_FUN_18043b470(&local_710);
      *(ulonglong *)(lVar9 + 8) =
           CONCAT44((float)(SUB84(uVar13,4) - (int)((ulonglong)plVar12 >> 0x20)),
                    (float)((int)uVar13 - (int)plVar12));
      local_680 = &local_3c8;
      (*(code *)puVar1[3])(lVar4,&local_710,&local_680,&DAT_180540248);
      lVar9 = FUN_180263100(&local_710);
      FUN_180262720(&local_750,lVar9);
      FUN_180259030(&local_680,&local_3c8,local_750,local_740,CONCAT44(uVar17,local_73c));
      plVar12 = plStack_678;
      if ((int)local_680 != 1) {
        *(longlong **)(lVar9 + 8) = plStack_678;
        LVar10 = SetWindowLongPtrA(hWnd,-4,0x18025b270);
        local_500 = 1;
        local_4f8 = 1;
        local_4f0 = 0;
        local_580 = 0;
        local_578 = 0;
        local_680 = (longlong *)0x0;
        plStack_678 = (longlong *)0x0;
        local_600 = 0;
        uStack_5f8 = 0;
        local_570 = 8;
        local_568 = 0;
        uStack_560 = 0;
        local_558 = 8;
        local_550 = 0;
        local_548 = 1;
        FUN_1800658a0();
        pvVar11 = (void *)thunk_FUN_180291940(0x200,0x80);
        if (pvVar11 == (void *)0x0) {
          FUN_180450301(0x80,0x200);
        }
        else {
          memcpy(pvVar11,&local_680,0x200);
          FUN_1800658a0();
          plVar12 = (longlong *)thunk_FUN_180291940(0x30,8);
          local_768 = pvVar11;
          if (plVar12 == (longlong *)0x0) {
            FUN_180450301(8,0x30);
          }
          else {
            *plVar12 = 1;
            plVar12[1] = 1;
            plVar12[2] = 1;
            plVar12[3] = (longlong)pvVar11;
            plVar12[4] = LVar10;
            *(undefined1 *)(plVar12 + 5) = 0;
            local_778 = plVar12;
            local_750 = plVar12;
            if (DAT_1805f1568 != 2) {
              FUN_18044b960();
            }
            LOCK();
            bVar19 = DAT_1805f1530 == '\0';
            if (bVar19) {
              DAT_1805f1530 = '\x01';
            }
            UNLOCK();
            if (!bVar19) {
              FUN_18044bf30(&DAT_1805f1530);
            }
            LOCK();
            lVar9 = *local_778;
            *local_778 = *local_778 + 1;
            UNLOCK();
            if (*local_778 != 0 && SCARRY8(lVar9,1) == *local_778 < 0) {
              local_680 = (longlong *)FUN_18025d1e0(&DAT_1805f1538,hWnd);
              if (local_680 != (longlong *)0x0) {
                LOCK();
                *local_680 = *local_680 + -1;
                UNLOCK();
                if (*local_680 == 0) {
                  FUN_180255410();
                }
              }
              LOCK();
              bVar19 = DAT_1805f1530 == '\x01';
              if (bVar19) {
                DAT_1805f1530 = '\0';
              }
              UNLOCK();
              if (!bVar19) {
                FUN_18044bc50(&DAT_1805f1530,0);
              }
              plVar12 = local_778;
              LOCK();
              lVar9 = *local_778;
              *local_778 = *local_778 + 1;
              UNLOCK();
              if (*local_778 != 0 && SCARRY8(lVar9,1) == *local_778 < 0) {
                local_180 = local_6a0;
                local_190 = local_6b0;
                uStack_188 = uStack_6a8;
                local_1a0 = local_6c0;
                uStack_198 = uStack_6b8;
                local_1b0 = local_6d0;
                uStack_1a8 = uStack_6c8;
                local_1c0 = local_6e0;
                uStack_1b8 = uStack_6d8;
                local_1d0 = local_6f0;
                uStack_1c8 = uStack_6e8;
                local_1e0 = local_700;
                uStack_1d8 = uStack_6f8;
                local_1f0 = local_710;
                uStack_1e8 = uStack_708;
                local_76c = (undefined4)local_3c8;
                uVar17 = local_3c8._4_4_;
                memcpy(&local_2d0,local_3b0,0xe0);
                LOCK();
                *plVar12 = *plVar12 + -1;
                UNLOCK();
                if (*plVar12 == 0) {
                  FUN_180255410(&local_750);
                }
                memcpy(&local_680,&local_2d0,0x158);
                plVar16 = (longlong *)param_1[1];
                plVar2 = (longlong *)*plVar16;
                uVar13 = local_3b8;
                puVar18 = local_3c0;
                if (*plVar2 != 0) {
                  local_770 = uVar17;
                  local_728 = local_3c0;
                  local_720 = local_3b8;
                  local_718 = hWnd;
                  local_730 = plVar16;
                  FUN_180252fb0(plVar2 + 0x23);
                  FUN_180253ab0(plVar2 + 4);
                  local_758 = plVar2[0x32];
                  local_760 = (undefined8 *)plVar2[0x33];
                  if ((code *)*local_760 != (code *)0x0) {
                    (*(code *)*local_760)(local_758);
                  }
                  if (local_760[1] != 0) {
                    thunk_FUN_1802919a0(local_758,local_760[1],local_760[2]);
                  }
                  FUN_180254300(plVar2[2],plVar2[3]);
                  plVar12 = (longlong *)plVar2[0x34];
                  LOCK();
                  *plVar12 = *plVar12 + -1;
                  UNLOCK();
                  if (*plVar12 == 0) {
                    FUN_180255410(plVar2 + 0x34);
                  }
                  hWnd = local_718;
                  uVar13 = local_720;
                  puVar18 = local_728;
                  plVar16 = local_730;
                  uVar17 = local_770;
                  plVar12 = local_778;
                  if (0 < plVar2[0x37]) {
                    thunk_FUN_1802919a0(plVar2[0x38],plVar2[0x37] << 5,8);
                  }
                }
                puVar3 = (undefined8 *)*plVar16;
                *puVar3 = 1;
                puVar3[1] = 0;
                puVar3[2] = 1;
                puVar3[3] = local_768;
                *(undefined4 *)(puVar3 + 4) = local_76c;
                *(undefined4 *)((longlong)puVar3 + 0x24) = uVar17;
                puVar3[5] = puVar18;
                puVar3[6] = uVar13;
                memcpy(puVar3 + 7,&local_680,0x158);
                puVar3[0x32] = lVar4;
                puVar3[0x33] = puVar1;
                puVar3[0x34] = plVar12;
                puVar3[0x35] = hWnd;
                puVar3[0x36] = 2;
                puVar3[0x37] = 0;
                puVar3[0x38] = 8;
                puVar3[0x39] = 0;
                return 1;
              }
            }
          }
        }
        goto LAB_18025e480;
      }
      uVar17 = (undefined4)local_670;
      FUN_180253ab0(&local_3c8);
      FUN_180252fb0(&local_710);
      local_680 = plVar12;
      plStack_678 = (longlong *)CONCAT44(plStack_678._4_4_,uVar17);
      if (DAT_180608b00 == 2) {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)(lVar4);
        }
        if (puVar1[1] != 0) {
          thunk_FUN_1802919a0(lVar4,puVar1[1],puVar1[2]);
        }
      }
      else {
        FUN_18044b850(lVar4);
      }
      local_790 = local_680;
      local_2c0 = plStack_678._0_4_;
      goto LAB_18025d9ae;
    }
    if (*(ulonglong *)PTR_DAT_1805f18c0 < 5) {
      uVar15 = (uint)DAT_1805f1040;
      pvVar11 = (void *)(ulonglong)uVar15;
      if (1 < uVar15 - 1) {
        if (uVar15 != 0) {
          uVar15 = FUN_18044b9c0(&PTR_DAT_1805f1030);
          pvVar11 = (void *)(ulonglong)uVar15;
          if ((char)uVar15 != '\0') goto LAB_18025ddb5;
        }
        goto LAB_18025e29a;
      }
LAB_18025ddb5:
      cVar6 = FUN_18025f490(PTR_DAT_1805f1030);
      if (cVar6 == '\0') goto LAB_18025e29a;
      puStack_668 = PTR_DAT_1805f1030 + 0x30;
      local_2d0 = (undefined8 ******)&DAT_18053f10a;
      local_2c8 = (longlong *)0x3f;
      local_3c0 = &DAT_18053ee60;
      local_680 = (longlong *)0x1;
      local_670 = 1;
      plStack_678 = &local_3c8;
      local_3c8 = &local_2d0;
      FUN_180256920(&local_680);
    }
    else {
LAB_18025e29a:
      puVar18 = PTR_DAT_1805f1030;
      if ((*PTR_DAT_1805f18b8 == '\0') && (*(longlong *)PTR_DAT_1805f1828 != 0)) {
        local_690 = *(undefined4 *)(PTR_DAT_1805f1030 + 0x20);
        uStack_68c = *(undefined4 *)(PTR_DAT_1805f1030 + 0x24);
        uStack_688 = *(undefined4 *)(PTR_DAT_1805f1030 + 0x28);
        uStack_684 = *(undefined4 *)(PTR_DAT_1805f1030 + 0x2c);
        local_698 = 1;
        uVar13 = FUN_18025f720();
        cVar6 = (**(code **)((longlong)pvVar11 + 0x18))(uVar13,&local_698);
        if (cVar6 != '\0') {
          puStack_668 = PTR_DAT_1805f1030 + 0x30;
          local_2d0 = (undefined8 ******)&DAT_18053f10a;
          local_2c8 = (longlong *)0x3f;
          local_3c0 = &DAT_18053ee60;
          local_680 = (longlong *)0x1;
          local_670 = 1;
          plStack_678 = &local_3c8;
          local_3c8 = &local_2d0;
          FUN_18025f640(puVar18,uVar13,pvVar11,&local_698,&local_680);
        }
      }
    }
    FUN_180253ab0(&local_178);
    uVar14 = 0xffffffff;
    local_790 = (longlong *)0x0;
  }
  FUN_180252fb0(&local_440);
  plVar12 = (longlong *)param_1[2];
  lVar4 = *plVar12;
joined_r0x00018025daa6:
  if ((lVar4 != 0) && (plVar12[1] != 0)) {
    FUN_1802654f0(plVar12 + 1);
  }
  *plVar12 = 1;
  plVar12[1] = (longlong)local_790;
  *(undefined4 *)(plVar12 + 2) = uVar14;
  return 0;
}




/* ===== 1800efeb0  FUN_1800efeb0 ===== */

/* WARNING: Removing unreachable block (ram,0x0001800f00cf) */
/* WARNING: Removing unreachable block (ram,0x0001800f00d7) */
/* WARNING: Removing unreachable block (ram,0x0001800f00ef) */
/* WARNING: Removing unreachable block (ram,0x0001800f00f6) */
/* WARNING: Removing unreachable block (ram,0x0001800f0103) */
/* WARNING: Removing unreachable block (ram,0x0001800f0107) */
/* WARNING: Removing unreachable block (ram,0x0001800f010d) */
/* WARNING: Removing unreachable block (ram,0x0001800f0111) */
/* WARNING: Removing unreachable block (ram,0x0001800f011a) */
/* WARNING: Removing unreachable block (ram,0x0001800f0153) */
/* WARNING: Removing unreachable block (ram,0x0001800f015b) */
/* WARNING: Removing unreachable block (ram,0x0001800f0172) */
/* WARNING: Removing unreachable block (ram,0x0001800f036c) */
/* WARNING: Removing unreachable block (ram,0x0001800f017d) */
/* WARNING: Removing unreachable block (ram,0x0001800f018e) */
/* WARNING: Removing unreachable block (ram,0x0001800f0193) */
/* WARNING: Removing unreachable block (ram,0x0001800f0197) */
/* WARNING: Removing unreachable block (ram,0x0001800f0140) */
/* WARNING: Removing unreachable block (ram,0x0001800f014d) */
/* WARNING: Removing unreachable block (ram,0x0001800f036f) */
/* WARNING: Removing unreachable block (ram,0x0001800f037f) */

void FUN_1800efeb0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar10;
  uint uVar11;
  longlong *plVar12;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_b8;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_88;
  longlong lStack_80;
  longlong *plStack_78;
  longlong lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  longlong *plStack_58;
  char cStack_49;
  undefined8 uStack_48;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uStack_48 = 0xfffffffffffffffe;
  cVar2 = FUN_1800e8880(param_1,param_2,"race_horse_data",0xf);
  cVar3 = FUN_1800e8880(param_1,param_2,"available_continue_num",0x16);
  uVar8 = DAT_1806079e8;
  iVar7 = (int)DAT_1806079e8;
  uStack_68 = param_1;
  uStack_60 = param_2;
  if (cVar2 == '\0') {
    if (cVar3 == '\0') {
      return;
    }
    LOCK();
    DAT_1806079e8 = DAT_1806079e8 + 1;
    UNLOCK();
    if (DAT_1805ea290 != 0) {
      FUN_180443e1b();
    }
    iVar5 = (int)(uVar8 / 0x30);
    uVar8 = (ulonglong)(uint)(iVar5 * 0x10);
    uVar11 = (iVar7 + iVar5 * -0x30) * 8;
    lVar4 = FUN_180292190(&DAT_1805ea280);
    *(ulonglong *)(&DAT_180607568 + uVar11) = (uVar8 & 0xffffffff) / 1000000 + lVar4 * 1000;
    *(undefined8 *)(&DAT_1806076e8 + uVar11) = 9;
    *(char **)(&DAT_180607868 + uVar11) = "race:rmpv";
    FUN_180081e20(&uStack_a8,&uStack_68,0x400);
    if (CONCAT44(uStack_a4,uStack_a8) == -0x7ffffffffffffff5) goto LAB_1800f0258;
    uStack_b8 = uStack_88;
    uStack_d8 = uStack_a8;
    uStack_d4 = uStack_a4;
    uStack_d0 = uStack_a0;
    uStack_cc = uStack_9c;
LAB_1800f02a3:
    uVar6 = 0x804d8f9c;
    lVar4 = FUN_1800f0580(&uStack_d8,"available_continue_num",0x16);
    if (lVar4 == 1) {
      DAT_1805ea27c = uVar6;
    }
  }
  else {
    LOCK();
    DAT_1806079e8 = DAT_1806079e8 + 1;
    UNLOCK();
    if (DAT_1805ea290 != 0) {
      FUN_180443e1b();
    }
    iVar5 = (int)(uVar8 / 0x30);
    uVar8 = (ulonglong)(uint)(iVar5 * 0x10);
    uVar11 = (iVar7 + iVar5 * -0x30) * 8;
    lVar4 = FUN_180292190(&DAT_1805ea280);
    *(ulonglong *)(&DAT_180607568 + uVar11) = (uVar8 & 0xffffffff) / 1000000 + lVar4 * 1000;
    *(undefined8 *)(&DAT_1806076e8 + uVar11) = 9;
    *(char **)(&DAT_180607868 + uVar11) = "race:rmpv";
    FUN_180081e20(&uStack_a8,&uStack_68,0x400);
    if (CONCAT44(uStack_a4,uStack_a8) == -0x7ffffffffffffff5) {
LAB_1800f0258:
      if (uStack_a0 < 2) {
        FUN_18005c5a0(CONCAT44(uStack_94,uStack_98));
      }
      goto LAB_1800f02ce;
    }
    uStack_b8 = uStack_88;
    uStack_d8 = uStack_a8;
    uStack_d4 = uStack_a4;
    uStack_d0 = uStack_a0;
    uStack_cc = uStack_9c;
    lStack_80 = 0;
    plStack_78 = (longlong *)&DAT_00000008;
    lStack_70 = 0;
    cStack_49 = cVar3;
    FUN_1800f0410(&uStack_a8,&lStack_80);
    cVar2 = cStack_49;
    plStack_58 = plStack_78;
    if (lStack_70 != 0) {
      plVar10 = plStack_78;
      do {
        if (plVar10[1] != 0) {
          plVar12 = (longlong *)*plVar10;
          plVar1 = plVar12 + plVar10[1] * 5;
          do {
            if ((*plVar12 == -0x7ffffffffffffff7) && (plVar12[3] != 0)) {
              lVar4 = 0;
              do {
                lVar4 = lVar4 + 0x50;
              } while (plVar12[3] * 0x50 != lVar4);
            }
            plVar12 = plVar12 + 5;
          } while (plVar12 != plVar1);
        }
        plVar10 = plVar10 + 2;
      } while (plVar10 != plStack_78 + lStack_70 * 2);
    }
    if (lStack_80 != 0) {
      thunk_FUN_1802919a0(plStack_78,lStack_80 << 4,8);
    }
    if (cVar2 != '\0') goto LAB_1800f02a3;
  }
  FUN_18005be00(&uStack_d8);
LAB_1800f02ce:
  uVar8 = DAT_1806079e8;
  LOCK();
  DAT_1806079e8 = DAT_1806079e8 + 1;
  UNLOCK();
  if (DAT_1805ea290 != 0) {
    FUN_180443e1b();
  }
  iVar7 = (int)(uVar8 / 0x30);
  uVar9 = (ulonglong)(uint)(iVar7 * 0x10);
  uVar11 = ((int)uVar8 + iVar7 * -0x30) * 8;
  lVar4 = FUN_180292190(&DAT_1805ea280);
  *(ulonglong *)(&DAT_180607568 + uVar11) = (uVar9 & 0xffffffff) / 1000000 + lVar4 * 1000;
  *(undefined8 *)(&DAT_1806076e8 + uVar11) = 0xe;
  *(char **)(&DAT_180607868 + uVar11) = "race:rmpv:done";
  return;
}




/* ===== 18002a680  FUN_18002a680 ===== */

void FUN_18002a680(longlong param_1,ulonglong *******param_2)

{
  longlong lVar1;
  ulonglong *****pppppuVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulonglong ******ppppppuVar8;
  undefined8 *puVar9;
  ulonglong ******ppppppuVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  char *pcVar14;
  longlong lVar15;
  ulonglong ******ppppppuVar16;
  uint uVar17;
  ulonglong uVar19;
  ulonglong ******ppppppuVar20;
  uint uVar21;
  ulonglong *******pppppppuVar22;
  ulonglong *******pppppppuVar23;
  bool bVar24;
  ulonglong *****local_158;
  undefined4 local_150;
  ulonglong ******local_148;
  longlong local_140;
  ulonglong ******local_138;
  ulonglong ******ppppppuStack_130;
  ulonglong ******ppppppuStack_128;
  undefined8 uStack_120;
  ulonglong ******local_118;
  ulonglong ******local_108;
  ulonglong ******ppppppuStack_100;
  ulonglong ******ppppppuStack_f8;
  ulonglong ******ppppppuStack_f0;
  byte local_e8;
  undefined4 local_e7;
  uint3 uStack_e3;
  ulonglong ******local_d8;
  ulonglong ******ppppppuStack_d0;
  ulonglong ******local_c8;
  ulonglong ******ppppppuStack_c0;
  undefined8 local_b8;
  ulonglong *****local_a8;
  uint uStack_a0;
  undefined4 uStack_9c;
  ulonglong *****local_98;
  ulonglong *****pppppuStack_90;
  ulonglong *****local_88;
  ulonglong *****pppppuStack_80;
  undefined8 local_70;
  ulonglong *****local_68;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  ulonglong ******local_58;
  undefined1 local_49;
  undefined8 local_48;
  ulonglong *******pppppppuVar18;
  
  local_48 = 0xfffffffffffffffe;
  local_148 = (ulonglong ******)(param_2 + 0x20);
  local_140 = param_1;
  local_58 = (ulonglong ******)param_2;
LAB_18002a6c0:
  if (local_140 == 0) {
    uStack_a0 = 1000000000;
    local_c8 = (ulonglong ******)0x0;
    ppppppuStack_c0 = (ulonglong ******)0x0;
    local_d8 = (ulonglong ******)0x0;
    ppppppuStack_d0 = (ulonglong ******)0x0;
    local_b8 = 0;
LAB_18002aa1a:
    pppppppuVar23 = (ulonglong *******)local_58;
    uVar6 = 0;
LAB_18002aa34:
    while( true ) {
      uVar21 = uVar6;
      uVar6 = uStack_a0;
      pppppuVar2 = local_a8;
      ppppppuVar8 = *pppppppuVar23;
      uVar19 = (longlong)pppppppuVar23[0x32] - 1U & (ulonglong)ppppppuVar8;
      ppppppuVar20 = (ulonglong ******)pppppppuVar23[0x33][uVar19 * 3 + 2];
      if ((ulonglong ******)((longlong)ppppppuVar8 + 1U) != ppppppuVar20) break;
      if (pppppppuVar23[0x30] <= (ulonglong ******)(uVar19 + 1)) {
        ppppppuVar20 = (ulonglong ******)
                       ((-(longlong)pppppppuVar23[0x31] & (ulonglong)ppppppuVar8) +
                       (longlong)pppppppuVar23[0x31]);
      }
      LOCK();
      ppppppuVar10 = *pppppppuVar23;
      if (ppppppuVar8 == ppppppuVar10) {
        *pppppppuVar23 = ppppppuVar20;
      }
      UNLOCK();
      if (ppppppuVar8 == ppppppuVar10) {
        local_d8 = pppppppuVar23[0x33] + uVar19 * 3;
        ppppppuStack_d0 = (ulonglong ******)((longlong)ppppppuVar8 + (longlong)pppppppuVar23[0x31]);
        local_70 = (ulonglong ******)*local_d8;
        local_68 = (ulonglong *****)((ulonglong *******)local_d8)[1];
        ((ulonglong *******)local_d8)[2] = ppppppuStack_d0;
        FUN_180001e40(local_148);
        pppppuStack_90 = local_68;
        ppppppuVar8 = local_70;
        pppppppuVar23 = (ulonglong *******)local_58;
        ppppppuVar20 = (ulonglong ******)pppppuStack_90;
        goto LAB_18002b3eb;
      }
      uVar17 = 6;
      if (uVar21 < 6) {
        uVar17 = uVar21;
      }
      uVar6 = 1;
      if (uVar21 != 0) {
        uVar17 = uVar17 * uVar17;
        uVar6 = uVar17 & 5;
        if (7 < uVar17) {
          uVar17 = uVar17 & 0x38;
          do {
            uVar17 = uVar17 - 8;
          } while (uVar17 != 0);
          if (uVar6 == 0) goto LAB_18002aa30;
        }
        do {
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
LAB_18002aa30:
        uVar6 = uVar21 + 1;
      }
    }
    if (ppppppuVar20 != ppppppuVar8) {
      if (uVar21 < 7) {
        if (uVar21 != 0) {
          uVar17 = uVar21 * uVar21;
          uVar6 = uVar17 & 5;
          if (7 < uVar17) {
            uVar17 = uVar17 & 0x38;
            do {
              uVar17 = uVar17 - 8;
            } while (uVar17 != 0);
            if (uVar6 == 0) goto LAB_18002abce;
          }
          do {
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
      }
      else {
        SwitchToThread();
      }
LAB_18002abce:
      pppppppuVar23 = (ulonglong *******)local_58;
      uVar6 = uVar21 + 1;
      goto LAB_18002aa34;
    }
    LOCK();
    UNLOCK();
    ppppppuVar20 = pppppppuVar23[0x32];
    if ((ulonglong ******)(~(ulonglong)ppppppuVar20 & (ulonglong)pppppppuVar23[0x10]) != ppppppuVar8
       ) {
      uVar17 = 6;
      if (uVar21 < 6) {
        uVar17 = uVar21;
      }
      uVar6 = 1;
      if (uVar21 != 0) {
        uVar17 = uVar17 * uVar17;
        uVar6 = uVar17 & 5;
        if (7 < uVar17) {
          uVar17 = uVar17 & 0x38;
          do {
            uVar17 = uVar17 - 8;
          } while (uVar17 != 0);
          if (uVar6 == 0) goto LAB_18002aa30;
        }
        do {
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
        goto LAB_18002aa30;
      }
      goto LAB_18002aa34;
    }
    if (((ulonglong)ppppppuVar20 & (ulonglong)pppppppuVar23[0x10]) != 0) goto LAB_18002b433;
    if (uStack_a0 != 1000000000) {
      ppppppuVar8 = (ulonglong ******)FUN_180291ff0();
      pppppppuVar23 = (ulonglong *******)local_58;
      if (ppppppuVar8 == (ulonglong ******)pppppuVar2) {
        if (uVar6 <= (uint)ppppppuVar20) goto LAB_18002b4b8;
      }
      else if (pppppuVar2 <= ppppppuVar8) goto LAB_18002b4b8;
    }
    local_138 = (ulonglong ******)&local_d8;
    ppppppuStack_128 = &local_a8;
    ppppppuStack_130 = (ulonglong ******)pppppppuVar23;
    puVar9 = (undefined8 *)FUN_1802917d0();
    if ((*(char *)(puVar9 + 1) == '\x01') ||
       (puVar9 = (undefined8 *)FUN_1804416d0(puVar9,0), puVar9 != (undefined8 *)0x0)) {
      ppppppuVar8 = (ulonglong ******)*puVar9;
      *puVar9 = 0;
      if (ppppppuVar8 == (ulonglong ******)0x0) {
        local_88 = (ulonglong *****)FUN_18044ea90();
        local_138 = (ulonglong ******)0x0;
        local_108 = (ulonglong ******)&local_d8;
        ppppppuStack_100 = local_58;
        ppppppuStack_f8 = &local_a8;
        FUN_18003b940(&local_108,&local_88);
        LOCK();
        *local_88 = (ulonglong ****)((longlong)*local_88 + -1);
        UNLOCK();
        if ((ulonglong *****)*local_88 == (ulonglong *****)0x0) {
          FUN_180255370(&local_88);
        }
      }
      else {
        ppppppuVar8[3] = (ulonglong *****)0x0;
        ppppppuVar8[4] = (ulonglong *****)0x0;
        local_138 = (ulonglong ******)0x0;
        local_108 = (ulonglong ******)&local_d8;
        ppppppuStack_100 = ppppppuStack_130;
        ppppppuStack_f8 = ppppppuStack_128;
        local_59 = 1;
        local_88 = (ulonglong *****)ppppppuVar8;
        FUN_18003b940(&local_108,&local_88);
        local_108 = (ulonglong ******)*puVar9;
        *puVar9 = ppppppuVar8;
        if ((ulonglong *******)local_108 != (ulonglong *******)0x0) {
          LOCK();
          *local_108 = (ulonglong *****)((longlong)*local_108 - 1);
          UNLOCK();
          if ((ulonglong ******)*local_108 == (ulonglong ******)0x0) {
            local_59 = 0;
            FUN_180255370(&local_108);
          }
        }
      }
    }
    else {
      FUN_180441d20(&local_138);
    }
    goto LAB_18002aa1a;
  }
  if (local_140 == 1) {
    uStack_a0 = 1000000000;
    local_c8 = (ulonglong ******)0x0;
    ppppppuStack_c0 = (ulonglong ******)0x0;
    local_d8 = (ulonglong ******)0x0;
    ppppppuStack_d0 = (ulonglong ******)0x0;
    local_b8 = 0;
LAB_18002a6f8:
    pppppppuVar23 = (ulonglong *******)local_58;
    uVar6 = 0;
LAB_18002a711:
    while( true ) {
      uVar21 = uVar6;
      uVar6 = uStack_a0;
      pppppuVar2 = local_a8;
      ppppppuVar8 = *pppppppuVar23;
      pppppppuVar22 = (ulonglong *******)pppppppuVar23[1];
      uVar17 = (uint)((ulonglong)ppppppuVar8 >> 1) & 0x1f;
      pppppppuVar18 = (ulonglong *******)(ulonglong)uVar17;
      if (pppppppuVar18 != (ulonglong *******)0x1f) break;
      if (uVar21 < 7) {
        if (uVar21 != 0) {
          uVar17 = uVar21 * uVar21;
          uVar6 = uVar17 & 5;
          if (7 < uVar17) {
            uVar17 = uVar17 & 0x38;
            do {
              uVar17 = uVar17 - 8;
            } while (uVar17 != 0);
            if (uVar6 == 0) goto LAB_18002a706;
          }
          do {
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
      }
      else {
        SwitchToThread();
      }
LAB_18002a706:
      pppppppuVar23 = (ulonglong *******)local_58;
      uVar6 = uVar21 + 1;
    }
    ppppppuVar20 = (ulonglong ******)((longlong)ppppppuVar8 + 2);
    if (((ulonglong)ppppppuVar8 & 1) == 0) {
      LOCK();
      UNLOCK();
      ppppppuVar10 = pppppppuVar23[0x10];
      if ((ulonglong)ppppppuVar8 >> 1 == (ulonglong)ppppppuVar10 >> 1) goto LAB_18002a880;
      ppppppuVar20 = (ulonglong ******)
                     ((ulonglong)ppppppuVar20 |
                     (ulonglong)(0x3f < ((ulonglong)ppppppuVar10 ^ (ulonglong)ppppppuVar8)));
    }
    if (pppppppuVar22 == (ulonglong *******)0x0) {
      if (uVar21 < 7) {
        if (uVar21 != 0) {
          uVar17 = uVar21 * uVar21;
          uVar6 = uVar17 & 5;
          if (7 < uVar17) {
            uVar17 = uVar17 & 0x38;
            do {
              uVar17 = uVar17 - 8;
            } while (uVar17 != 0);
            if (uVar6 == 0) goto LAB_18002a706;
          }
          do {
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
      }
      else {
        SwitchToThread();
      }
      goto LAB_18002a706;
    }
    LOCK();
    ppppppuVar10 = *pppppppuVar23;
    if (ppppppuVar8 == ppppppuVar10) {
      *pppppppuVar23 = ppppppuVar20;
    }
    UNLOCK();
    if (ppppppuVar8 == ppppppuVar10) {
      if (uVar17 != 0x1e) goto LAB_18002afc6;
      ppppppuVar8 = *pppppppuVar22;
      if (ppppppuVar8 != (ulonglong ******)0x0) goto LAB_18002afa1;
      uVar6 = 0;
      uVar21 = 0;
      goto LAB_18002b31f;
    }
    uVar17 = 6;
    if (uVar21 < 6) {
      uVar17 = uVar21;
    }
    uVar6 = 1;
    if (uVar21 != 0) {
      uVar17 = uVar17 * uVar17;
      uVar6 = uVar17 & 5;
      if (uVar17 < 8) goto code_r0x00018002a812;
      uVar17 = uVar17 & 0x38;
      do {
        uVar17 = uVar17 - 8;
      } while (uVar17 != 0);
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
code_r0x00018002a812:
      }
      uVar6 = uVar21 + 1;
    }
    goto LAB_18002a711;
  }
  local_150 = 1000000000;
  ppppppuStack_128 = (ulonglong ******)0x0;
  uStack_120 = 0;
  local_138 = (ulonglong ******)0x0;
  ppppppuStack_130 = (ulonglong ******)0x0;
  local_118 = (ulonglong ******)0x0;
  LOCK();
  cVar5 = *(char *)local_58;
  if (cVar5 == '\0') {
    *(char *)local_58 = '\x01';
  }
  UNLOCK();
  if (cVar5 != '\0') {
    FUN_18044ee10(local_58);
  }
  if ((*(ulonglong *)PTR_DAT_1806073e0 & 0x7fffffffffffffff) == 0) {
    uVar6 = 0;
    cVar5 = *(char *)((longlong)local_58 + 1);
    pppppppuVar23 = (ulonglong *******)local_d8;
    local_d8 = local_58;
  }
  else {
    uVar6 = FUN_18044f9d0();
    uVar6 = uVar6 ^ 1;
    cVar5 = *(char *)((longlong)local_58 + 1);
    pppppppuVar23 = (ulonglong *******)local_d8;
    local_d8 = local_58;
  }
  local_58 = local_d8;
  if (cVar5 != '\0') {
    uVar19 = (ulonglong)ppppppuStack_d0 >> 8;
    ppppppuStack_d0 = (ulonglong ******)CONCAT71((int7)uVar19,(char)uVar6);
    FUN_180450530("called `Result::unwrap()` on an `Err` value",0x2b,&local_d8,&PTR_FUN_1804572d0,
                  &PTR_s__rustc_ac68faa20c58cbccd01ee7208_180455980);
    goto LAB_18002b6f7;
  }
  ppppppuVar8 = ((ulonglong *******)local_d8)[3];
  uVar19 = (ulonglong)local_70 >> 0x20;
  local_70 = (ulonglong ******)CONCAT44((int)uVar19,uVar6);
  if (ppppppuVar8 != (ulonglong ******)0x0) {
    local_49 = 1;
    local_d8 = (ulonglong ******)pppppppuVar23;
    lVar13 = FUN_1802917f0();
    pppppppuVar22 = (ulonglong *******)local_58;
    ppppppuVar10 = local_70;
    ppppppuVar20 = (ulonglong ******)local_58[2];
    lVar15 = 0;
    ppppppuVar16 = (ulonglong ******)0x0;
    do {
      lVar1 = *(longlong *)((longlong)ppppppuVar20 + lVar15);
      if (*(longlong *)(lVar1 + 0x28) != lVar13) {
        LOCK();
        bVar24 = *(longlong *)(lVar1 + 0x18) == 0;
        if (bVar24) {
          *(longlong *)(lVar1 + 0x18) = *(longlong *)((longlong)ppppppuVar20 + lVar15 + 8);
        }
        UNLOCK();
        if (bVar24) {
          lVar13 = *(longlong *)((longlong)ppppppuVar20 + lVar15 + 0x10);
          if (lVar13 != 0) {
            *(longlong *)(lVar1 + 0x20) = lVar13;
          }
          lVar13 = *(longlong *)(lVar1 + 0x10);
          LOCK();
          pcVar14 = (char *)(lVar13 + 0x28);
          cVar5 = *pcVar14;
          *pcVar14 = '\x01';
          UNLOCK();
          if (cVar5 == -1) {
            WakeByAddressSingle(lVar13 + 0x28);
          }
          ppppppuVar8 = pppppppuVar22[3];
          if (ppppppuVar16 <= ppppppuVar8 && (longlong)ppppppuVar8 - (longlong)ppppppuVar16 != 0) {
            ppppppuVar20 = pppppppuVar22[2];
            pppppppuVar23 = *(ulonglong ********)((longlong)ppppppuVar20 + lVar15);
            puVar9 = (undefined8 *)((longlong)ppppppuVar20 + lVar15 + 8);
            local_108 = (ulonglong ******)*puVar9;
            ppppppuStack_100 = (ulonglong ******)puVar9[1];
            memmove((void *)((longlong)ppppppuVar20 + lVar15),
                    (void *)((longlong)ppppppuVar20 + lVar15 + 0x18),
                    ((longlong)ppppppuVar8 - (longlong)ppppppuVar16) * 0x18 - 0x18);
            ppppppuVar8 = (ulonglong ******)((longlong)ppppppuVar8 - 1);
            pppppppuVar22[3] = ppppppuVar8;
            if (pppppppuVar23 != (ulonglong *******)0x0) {
              ppppppuStack_d0 = local_108;
              local_118 = ppppppuStack_100;
              local_c8 = ppppppuStack_100;
              local_d8 = (ulonglong ******)pppppppuVar23;
              if ((((char)ppppppuVar10 == '\0') &&
                  ((*(ulonglong *)PTR_DAT_1806073e0 & 0x7fffffffffffffff) != 0)) &&
                 (cVar5 = FUN_18044f9d0(), pppppppuVar22 = (ulonglong *******)local_58,
                 cVar5 == '\0')) {
                *(char *)((longlong)local_58 + 1) = '\x01';
              }
              LOCK();
              cVar5 = *(char *)pppppppuVar22;
              *(char *)pppppppuVar22 = '\0';
              UNLOCK();
              if (cVar5 == '\x02') {
                WakeByAddressSingle(local_58);
              }
              ppppppuVar20 = local_118;
              if ((ulonglong *******)local_118 == (ulonglong *******)0x0) {
                pppppuStack_90 = (ulonglong *****)CONCAT71(pppppuStack_90._1_7_,1);
                local_98 = (ulonglong *****)0x0;
                LOCK();
                *local_d8 = (ulonglong *****)((longlong)*local_d8 - 1);
                ppppppuVar10 = (ulonglong ******)*local_d8;
                UNLOCK();
                ppppppuVar8 = (ulonglong ******)local_98;
                goto joined_r0x00018002b37c;
              }
              if (*(char *)((longlong)local_118 + 0x11) != '\0') {
                ppppppuVar8 = (ulonglong ******)*local_118;
                ppppppuVar16 = (ulonglong ******)local_118[1];
                *local_118 = (ulonglong *****)0x0;
                if (ppppppuVar8 != (ulonglong ******)0x0) {
                  *(char *)(local_118 + 2) = '\x01';
                  goto LAB_18002b3b6;
                }
                FUN_180450510(&PTR_s__rustc_ac68faa20c58cbccd01ee7208_180455968);
                goto LAB_18002b6f7;
              }
              if (*(char *)(local_118 + 2) != '\0') goto LAB_18002b38c;
              uVar21 = 0;
              uVar6 = 0;
              goto LAB_18002b46d;
            }
          }
          local_49 = 1;
          FUN_180450364(ppppppuVar16,ppppppuVar8,&PTR_s__rustc_ac68faa20c58cbccd01ee7208_180453dc8);
          goto LAB_18002b6f7;
        }
      }
      ppppppuVar16 = (ulonglong ******)((longlong)ppppppuVar16 + 1);
      lVar15 = lVar15 + 0x18;
      pppppppuVar23 = (ulonglong *******)local_d8;
      uVar6 = (uint)local_70;
    } while ((longlong)ppppppuVar8 * 0x18 != lVar15);
  }
  local_d8 = (ulonglong ******)pppppppuVar23;
  if (*(char *)(local_58 + 0xd) == '\0') {
    local_108 = (ulonglong ******)&local_138;
    ppppppuStack_100 = &local_158;
    ppppppuStack_f8 = local_58;
    ppppppuStack_f0 = local_58;
    local_e8 = (byte)uVar6;
    plVar11 = (longlong *)FUN_1802917d0();
    if (((char)plVar11[1] == '\x01') ||
       (plVar11 = (longlong *)FUN_1804416d0(plVar11,0), plVar11 != (longlong *)0x0)) {
      pppppuVar2 = (ulonglong *****)*plVar11;
      *plVar11 = 0;
      if (pppppuVar2 == (ulonglong *****)0x0) {
        local_a8 = (ulonglong *****)FUN_18044ea90();
        local_e8 = 2;
        local_d8 = (ulonglong ******)&local_138;
        ppppppuStack_d0 = &local_158;
        local_c8 = local_58;
        ppppppuStack_c0 = local_58;
        local_b8 = CONCAT71(local_b8._1_7_,(char)local_70);
        local_68 = local_a8;
        FUN_180037ee0(&local_88,&local_d8,&local_a8);
        LOCK();
        *local_68 = (ulonglong ****)((longlong)*local_68 + -1);
        UNLOCK();
        if ((ulonglong *****)*local_68 == (ulonglong *****)0x0) {
          FUN_180255370(&local_a8);
        }
      }
      else {
        pppppuVar2[3] = (ulonglong ****)0x0;
        pppppuVar2[4] = (ulonglong ****)0x0;
        local_e8 = 2;
        local_c8 = ppppppuStack_f8;
        ppppppuStack_c0 = ppppppuStack_f0;
        local_d8 = local_108;
        ppppppuStack_d0 = ppppppuStack_100;
        local_b8 = CONCAT44((uint)uStack_e3 << 8,(uint)local_70) & 0xffffffff000000ff;
        local_b8._0_5_ = CONCAT41(local_e7,(undefined1)local_b8);
        local_5b = 1;
        local_98 = pppppuVar2;
        FUN_180037ee0(&local_a8,&local_d8,&local_98);
        local_d8 = (ulonglong ******)*plVar11;
        *plVar11 = (longlong)pppppuVar2;
        if ((ulonglong *******)local_d8 != (ulonglong *******)0x0) {
          LOCK();
          *local_d8 = (ulonglong *****)((longlong)*local_d8 - 1);
          UNLOCK();
          if ((ulonglong ******)*local_d8 == (ulonglong ******)0x0) {
            FUN_180255370(&local_d8);
          }
        }
        pppppuStack_80 = (ulonglong *****)CONCAT44(uStack_9c,uStack_a0);
        local_88 = local_a8;
      }
      local_98 = local_88;
      pppppuStack_90 = pppppuStack_80;
    }
    else {
      FUN_180441dd0(&local_98,&local_108);
    }
    ppppppuVar10 = ppppppuStack_f0;
    ppppppuVar8 = (ulonglong ******)local_98;
    pppppppuVar23 = (ulonglong *******)local_58;
    ppppppuVar20 = (ulonglong ******)pppppuStack_90;
    if (local_e8 != 2) {
      if (((local_e8 & 1) == 0) && ((*(ulonglong *)PTR_DAT_1806073e0 & 0x7fffffffffffffff) != 0)) {
        local_49 = 0;
        cVar5 = FUN_18044f9d0();
        if (cVar5 == '\0') {
          *(char *)((longlong)ppppppuVar10 + 1) = '\x01';
        }
      }
      LOCK();
      cVar5 = *(char *)ppppppuVar10;
      *(char *)ppppppuVar10 = '\0';
      UNLOCK();
      ppppppuVar8 = (ulonglong ******)local_98;
      pppppppuVar23 = (ulonglong *******)local_58;
      ppppppuVar20 = (ulonglong ******)pppppuStack_90;
      if (cVar5 == '\x02') {
        local_49 = 0;
        WakeByAddressSingle(ppppppuVar10);
        ppppppuVar8 = (ulonglong ******)local_98;
        pppppppuVar23 = (ulonglong *******)local_58;
        ppppppuVar20 = (ulonglong ******)pppppuStack_90;
      }
    }
  }
  else {
    pppppuStack_90 = (ulonglong *****)CONCAT71(pppppuStack_90._1_7_,1);
    local_98 = (ulonglong *****)0x0;
    if ((((byte)uVar6 == 0) && ((*(ulonglong *)PTR_DAT_1806073e0 & 0x7fffffffffffffff) != 0)) &&
       (cVar5 = FUN_18044f9d0(), cVar5 == '\0')) {
      *(char *)((longlong)local_58 + 1) = '\x01';
    }
    LOCK();
    cVar5 = *(char *)local_58;
    *(char *)local_58 = '\0';
    UNLOCK();
    ppppppuVar8 = (ulonglong ******)local_98;
    pppppppuVar23 = (ulonglong *******)local_58;
    ppppppuVar20 = (ulonglong ******)pppppuStack_90;
    if (cVar5 == '\x02') {
      WakeByAddressSingle(local_58);
      ppppppuVar8 = (ulonglong ******)local_98;
      pppppppuVar23 = (ulonglong *******)local_58;
      ppppppuVar20 = (ulonglong ******)pppppuStack_90;
    }
  }
  goto LAB_18002b3eb;
LAB_18002a880:
  if (((ulonglong)ppppppuVar10 & 1) != 0) goto LAB_18002b433;
  if (uStack_a0 != 1000000000) {
    ppppppuVar8 = (ulonglong ******)FUN_180291ff0();
    pppppppuVar23 = (ulonglong *******)local_58;
    if (ppppppuVar8 == (ulonglong ******)pppppuVar2) {
      if (uVar6 <= (uint)ppppppuVar10) goto LAB_18002b4b8;
    }
    else if (pppppuVar2 <= ppppppuVar8) goto LAB_18002b4b8;
  }
  local_138 = (ulonglong ******)&local_d8;
  ppppppuStack_128 = &local_a8;
  ppppppuStack_130 = (ulonglong ******)pppppppuVar23;
  puVar9 = (undefined8 *)FUN_1802917d0();
  if ((*(char *)(puVar9 + 1) == '\x01') ||
     (puVar9 = (undefined8 *)FUN_1804416d0(puVar9,0), puVar9 != (undefined8 *)0x0)) {
    ppppppuVar8 = (ulonglong ******)*puVar9;
    *puVar9 = 0;
    if (ppppppuVar8 == (ulonglong ******)0x0) {
      local_88 = (ulonglong *****)FUN_18044ea90();
      local_138 = (ulonglong ******)0x0;
      local_108 = (ulonglong ******)&local_d8;
      ppppppuStack_100 = local_58;
      ppppppuStack_f8 = &local_a8;
      FUN_180037be0(&local_108,&local_88);
      LOCK();
      *local_88 = (ulonglong ****)((longlong)*local_88 + -1);
      UNLOCK();
      if ((ulonglong *****)*local_88 == (ulonglong *****)0x0) {
        FUN_180255370(&local_88);
      }
    }
    else {
      ppppppuVar8[3] = (ulonglong *****)0x0;
      ppppppuVar8[4] = (ulonglong *****)0x0;
      local_138 = (ulonglong ******)0x0;
      local_108 = (ulonglong ******)&local_d8;
      ppppppuStack_100 = ppppppuStack_130;
      ppppppuStack_f8 = ppppppuStack_128;
      local_5a = 1;
      local_88 = (ulonglong *****)ppppppuVar8;
      FUN_180037be0(&local_108,&local_88);
      local_108 = (ulonglong ******)*puVar9;
      *puVar9 = ppppppuVar8;
      if ((ulonglong *******)local_108 != (ulonglong *******)0x0) {
        LOCK();
        *local_108 = (ulonglong *****)((longlong)*local_108 - 1);
        UNLOCK();
        if ((ulonglong ******)*local_108 == (ulonglong ******)0x0) {
          local_5a = 0;
          FUN_180255370(&local_108);
        }
      }
    }
  }
  else {
    FUN_180441af0(&local_138);
  }
  goto LAB_18002a6f8;
LAB_18002b433:
  pppppuStack_90 = (ulonglong *****)CONCAT71(pppppuStack_90._1_7_,1);
  ppppppuVar8 = (ulonglong ******)0x0;
  ppppppuVar20 = (ulonglong ******)pppppuStack_90;
  goto LAB_18002b3eb;
LAB_18002b4b8:
  pppppuStack_90 = (ulonglong *****)((ulonglong)pppppuStack_90 & 0xffffffffffffff00);
  ppppppuVar8 = (ulonglong ******)0x0;
  pppppppuVar23 = (ulonglong *******)local_58;
  ppppppuVar20 = (ulonglong ******)pppppuStack_90;
  goto LAB_18002b3eb;
LAB_18002b31f:
  do {
    if (uVar21 < 7) {
      if (uVar21 != 0) {
        uVar7 = uVar6 & 7;
        if (6 < uVar6 - 1) {
          uVar12 = uVar6 & 0xfffffff8;
          do {
            uVar12 = uVar12 - 8;
          } while (uVar12 != 0);
          if (uVar7 == 0) goto LAB_18002b306;
        }
        do {
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
    else {
      SwitchToThread();
    }
LAB_18002b306:
    iVar4 = uVar21 * 2;
    uVar21 = uVar21 + 1;
    ppppppuVar8 = *pppppppuVar22;
    uVar6 = uVar6 + iVar4 + 1;
  } while (ppppppuVar8 == (ulonglong ******)0x0);
LAB_18002afa1:
  pppppuVar2 = *ppppppuVar8;
  local_58[1] = (ulonglong *****)ppppppuVar8;
  *local_58 = (ulonglong *****)
              (((ulonglong)ppppppuVar20 & 0xfffffffffffffffe) +
               (ulonglong)(pppppuVar2 != (ulonglong *****)0x0) + 2);
LAB_18002afc6:
  local_c8 = (ulonglong ******)pppppppuVar22;
  ppppppuStack_c0 = (ulonglong ******)pppppppuVar18;
  if (((ulonglong)pppppppuVar22[(longlong)pppppppuVar18 * 3 + 3] & 1) == 0) {
    uVar6 = 0;
    uVar21 = 0;
    do {
      if (uVar21 < 7) {
        if (uVar21 != 0) {
          uVar7 = uVar6 & 7;
          if (6 < uVar6 - 1) {
            uVar12 = uVar6 & 0xfffffff8;
            do {
              uVar12 = uVar12 - 8;
            } while (uVar12 != 0);
            if (uVar7 == 0) goto LAB_18002aff6;
          }
          do {
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
      }
      else {
        SwitchToThread();
      }
LAB_18002aff6:
      iVar4 = uVar21 * 2;
      uVar21 = uVar21 + 1;
      uVar6 = uVar6 + iVar4 + 1;
    } while (((ulonglong)pppppppuVar22[(longlong)pppppppuVar18 * 3 + 3] & 1) == 0);
  }
  pppppppuVar23 = (ulonglong *******)local_58;
  ppppppuVar8 = pppppppuVar22[(longlong)pppppppuVar18 * 3 + 1];
  ppppppuVar20 = pppppppuVar22[(longlong)pppppppuVar18 * 3 + 2];
  pcVar14 = (char *)((longlong)pppppppuVar18 + 1);
  if (pcVar14 == (char *)0x1f) {
    lVar13 = 0;
    do {
      if (((ulonglong)pppppppuVar22[lVar13 * 3 + 3] & 2) == 0) {
        ppppppuVar10 = pppppppuVar22[lVar13 * 3 + 3];
        do {
          LOCK();
          ppppppuVar16 = pppppppuVar22[lVar13 * 3 + 3];
          bVar24 = ppppppuVar10 == ppppppuVar16;
          if (bVar24) {
            pppppppuVar22[lVar13 * 3 + 3] = (ulonglong ******)((ulonglong)ppppppuVar10 | 4);
            ppppppuVar16 = ppppppuVar10;
          }
          UNLOCK();
          ppppppuVar10 = ppppppuVar16;
        } while (!bVar24);
        if (((ulonglong)ppppppuVar16 & 2) == 0) goto LAB_18002b3eb;
      }
      if (((ulonglong)pppppppuVar22[lVar13 * 3 + 6] & 2) == 0) {
        ppppppuVar10 = pppppppuVar22[lVar13 * 3 + 6];
        do {
          LOCK();
          ppppppuVar16 = pppppppuVar22[lVar13 * 3 + 6];
          bVar24 = ppppppuVar10 == ppppppuVar16;
          if (bVar24) {
            pppppppuVar22[lVar13 * 3 + 6] = (ulonglong ******)((ulonglong)ppppppuVar10 | 4);
            ppppppuVar16 = ppppppuVar10;
          }
          UNLOCK();
          ppppppuVar10 = ppppppuVar16;
        } while (!bVar24);
        if (((ulonglong)ppppppuVar16 & 2) == 0) goto LAB_18002b3eb;
      }
      lVar13 = lVar13 + 2;
    } while (lVar13 != 0x1e);
  }
  else {
    ppppppuVar10 = pppppppuVar22[(longlong)pppppppuVar18 * 3 + 3];
    do {
      LOCK();
      ppppppuVar16 = pppppppuVar22[(longlong)pppppppuVar18 * 3 + 3];
      bVar24 = ppppppuVar10 == ppppppuVar16;
      if (bVar24) {
        pppppppuVar22[(longlong)pppppppuVar18 * 3 + 3] =
             (ulonglong ******)((ulonglong)ppppppuVar10 | 2);
        ppppppuVar16 = ppppppuVar10;
      }
      UNLOCK();
      ppppppuVar10 = ppppppuVar16;
    } while (!bVar24);
    if (((ulonglong)ppppppuVar16 & 4) == 0) goto LAB_18002b3eb;
    if (uVar17 < 0x1d) {
      do {
        if (((ulonglong)pppppppuVar22[(longlong)pcVar14 * 3 + 3] & 2) == 0) {
          ppppppuVar10 = pppppppuVar22[(longlong)pcVar14 * 3 + 3];
          do {
            LOCK();
            ppppppuVar16 = pppppppuVar22[(longlong)pcVar14 * 3 + 3];
            bVar24 = ppppppuVar10 == ppppppuVar16;
            if (bVar24) {
              pppppppuVar22[(longlong)pcVar14 * 3 + 3] =
                   (ulonglong ******)((ulonglong)ppppppuVar10 | 4);
              ppppppuVar16 = ppppppuVar10;
            }
            UNLOCK();
            ppppppuVar10 = ppppppuVar16;
          } while (!bVar24);
          if (((ulonglong)ppppppuVar16 & 2) == 0) goto LAB_18002b3eb;
        }
        pcVar14 = pcVar14 + 1;
      } while (pcVar14 != (char *)0x1e);
    }
  }
  thunk_FUN_1802919a0(pppppppuVar22,0x2f0,8);
  goto LAB_18002b3eb;
LAB_18002b46d:
  do {
    if (uVar6 < 7) {
      if (uVar6 != 0) {
        uVar17 = uVar21 & 7;
        if (6 < uVar21 - 1) {
          uVar7 = uVar21 & 0xfffffff8;
          do {
            uVar7 = uVar7 - 8;
          } while (uVar7 != 0);
          if (uVar17 == 0) goto LAB_18002b456;
        }
        do {
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
    }
    else {
      SwitchToThread();
    }
LAB_18002b456:
    iVar4 = uVar6 * 2;
    uVar6 = uVar6 + 1;
    uVar21 = uVar21 + iVar4 + 1;
  } while (*(char *)(ppppppuVar20 + 2) == '\0');
LAB_18002b38c:
  ppppppuVar8 = (ulonglong ******)*ppppppuVar20;
  ppppppuVar16 = (ulonglong ******)ppppppuVar20[1];
  *ppppppuVar20 = (ulonglong *****)0x0;
  if (ppppppuVar8 == (ulonglong ******)0x0) {
    FUN_180450510(&PTR_s__rustc_ac68faa20c58cbccd01ee7208_180455950);
LAB_18002b6f7:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  thunk_FUN_1802919a0(ppppppuVar20,0x18,8);
LAB_18002b3b6:
  LOCK();
  *local_d8 = (ulonglong *****)((longlong)*local_d8 - 1);
  ppppppuVar10 = (ulonglong ******)*local_d8;
  UNLOCK();
  pppppuStack_90 = (ulonglong *****)ppppppuVar16;
joined_r0x00018002b37c:
  pppppppuVar23 = (ulonglong *******)local_58;
  local_98 = (ulonglong *****)ppppppuVar8;
  ppppppuVar20 = (ulonglong ******)pppppuStack_90;
  if (ppppppuVar10 == (ulonglong ******)0x0) {
    local_49 = 0;
    FUN_180255370(&local_d8);
    ppppppuVar8 = (ulonglong ******)local_98;
    pppppppuVar23 = (ulonglong *******)local_58;
    ppppppuVar20 = (ulonglong ******)pppppuStack_90;
  }
LAB_18002b3eb:
  pppppuStack_90 = (ulonglong *****)ppppppuVar20;
  if (ppppppuVar8 == (ulonglong ******)0x0) {
    FUN_180054f60(local_140,pppppppuVar23);
    return;
  }
  local_68 = pppppuStack_90;
  local_70 = ppppppuVar8;
  (*(code *)pppppuStack_90[3])();
  if ((ulonglong *****)local_68[1] != (ulonglong *****)0x0) {
    thunk_FUN_1802919a0(local_70,local_68[1],local_68[2]);
  }
  goto LAB_18002a6c0;
}




/* ===== 1801d7e10  FUN_1801d7e10 ===== */

void FUN_1801d7e10(undefined8 *param_1,ulonglong param_2,longlong param_3,ulonglong param_4,
                  undefined8 param_5,longlong *param_6)

{
  undefined1 auVar1 [16];
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 (*pauVar8) [16];
  undefined *puVar9;
  char cVar10;
  ushort uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  size_t sVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  ulonglong *puVar23;
  byte bVar24;
  bool bVar25;
  byte bVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 unaff_XMM7_Ba;
  undefined1 unaff_XMM7_Bb;
  undefined1 unaff_XMM7_Bc;
  undefined1 unaff_XMM7_Bd;
  undefined1 unaff_XMM7_Be;
  undefined1 unaff_XMM7_Bf;
  undefined1 unaff_XMM7_Bg;
  undefined1 unaff_XMM7_Bh;
  undefined1 unaff_XMM7_Bi;
  undefined1 unaff_XMM7_Bj;
  undefined1 unaff_XMM7_Bk;
  undefined1 unaff_XMM7_Bl;
  undefined1 unaff_XMM7_Bm;
  undefined1 unaff_XMM7_Bn;
  undefined1 unaff_XMM7_Bo;
  undefined1 unaff_XMM7_Bp;
  undefined1 auVar29 [16];
  longlong lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 *local_168;
  ulonglong local_160;
  longlong local_158;
  longlong *plStack_110;
  code *pcStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  undefined8 uStack_f0;
  longlong lStack_e0;
  longlong lStack_d8;
  undefined8 uStack_d0;
  longlong lStack_c8;
  longlong local_c0;
  ulonglong local_b8;
  undefined8 *local_b0;
  size_t local_a8;
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined1 local_81;
  undefined8 local_80;
  
  local_80 = 0xfffffffffffffffe;
  if ((-1 < param_3) && (DAT_180608550 < 6000)) {
    if (DAT_1805eb590 != 0) {
      local_81 = 1;
      FUN_180443550();
    }
    LOCK();
    bVar25 = DAT_1805eb558 == '\0';
    if (bVar25) {
      DAT_1805eb558 = '\x01';
    }
    UNLOCK();
    if (!bVar25) {
      local_81 = 1;
      FUN_18044ee10(&DAT_1805eb558);
    }
    puVar9 = PTR_DAT_1806073e0;
    if ((*(ulonglong *)PTR_DAT_1806073e0 & 0x7fffffffffffffff) == 0) {
      uVar14 = 0;
    }
    else {
      local_81 = 1;
      uVar14 = FUN_18044f9d0();
      uVar14 = uVar14 ^ 1;
    }
    if (DAT_1805eb559 == '\0') {
      uVar15 = (ulonglong)local_90 >> 0x20;
      local_90 = CONCAT44((int)uVar15,uVar14);
      local_168 = param_1;
      local_160 = param_2;
      local_158 = param_3;
      local_b8 = param_4;
      local_b0 = param_1;
      local_a8 = param_2;
      uVar15 = FUN_1800654d0(DAT_1805eb580,DAT_1805eb588,&local_168);
      if (DAT_1805eb570 == 0) {
        FUN_180447750(&DAT_1805eb560,1,&DAT_1805eb580,1);
      }
      pauVar8 = DAT_1805eb560;
      bVar24 = (byte)(uVar15 >> 0x38);
      bVar26 = bVar24 >> 1;
      auVar27 = ZEXT216(CONCAT11(bVar26,bVar26));
      auVar27 = pshuflw(auVar27,auVar27,0);
      lVar17 = 0;
      iVar3 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                               CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                     CONCAT13(unaff_XMM7_Bd,
                              CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
      iVar4 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                               CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                     CONCAT13(unaff_XMM7_Bh,
                              CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
      iVar5 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                               CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                     CONCAT13(unaff_XMM7_Bl,
                              CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
      iVar6 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                               CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                     CONCAT13(unaff_XMM7_Bp,
                              CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
      lVar19 = 0;
      uVar21 = DAT_1805eb568;
      do {
        uVar15 = uVar15 & uVar21;
        auVar1 = *(undefined1 (*) [16])(*pauVar8 + uVar15);
        auVar28[0] = -(auVar1[0] == auVar27[0]);
        auVar28[1] = -(auVar1[1] == auVar27[1]);
        auVar28[2] = -(auVar1[2] == auVar27[2]);
        auVar28[3] = -(auVar1[3] == auVar27[3]);
        auVar28[4] = -(auVar1[4] == auVar27[4]);
        auVar28[5] = -(auVar1[5] == auVar27[5]);
        auVar28[6] = -(auVar1[6] == auVar27[6]);
        auVar28[7] = -(auVar1[7] == auVar27[7]);
        auVar28[8] = -(auVar1[8] == auVar27[0]);
        auVar28[9] = -(auVar1[9] == auVar27[1]);
        auVar28[10] = -(auVar1[10] == auVar27[2]);
        auVar28[0xb] = -(auVar1[0xb] == auVar27[3]);
        auVar28[0xc] = -(auVar1[0xc] == auVar27[4]);
        auVar28[0xd] = -(auVar1[0xd] == auVar27[5]);
        bVar26 = auVar1[0xf];
        auVar28[0xe] = -(auVar1[0xe] == auVar27[6]);
        auVar28[0xf] = -(bVar26 == auVar27[7]);
        uVar11 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe | (ushort)(auVar28[0xf] >> 7) << 0xf
        ;
        uVar14 = (uint)uVar11;
        puVar23 = (ulonglong *)PTR_DAT_1806073e0;
        lVar7 = local_c0;
        lVar20 = local_98;
        while (local_98 = lVar19, local_c0 = lVar17, PTR_DAT_1806073e0 = (undefined *)puVar23,
              uVar11 != 0) {
          uVar13 = 0;
          for (uVar2 = uVar14; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
            uVar13 = uVar13 + 1;
          }
          uVar16 = uVar13 + uVar15 & uVar21;
          local_a0 = uVar21;
          if (((local_a8 == *(size_t *)((longlong)pauVar8 + uVar16 * -0x18 + -0x10)) &&
              (iVar12 = memcmp(local_b0,*(void **)((longlong)pauVar8 + uVar16 * -0x18 + -0x18),
                               local_a8), iVar12 == 0)) &&
             (param_3 == *(longlong *)((longlong)pauVar8 + uVar16 * -0x18 + -8))) {
            bVar25 = false;
            puVar23 = (ulonglong *)PTR_DAT_1806073e0;
            goto LAB_1801d8138;
          }
          uVar11 = (ushort)(uVar14 - 1) & (ushort)uVar14;
          uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar11);
          lVar17 = local_c0;
          lVar19 = local_98;
          uVar21 = local_a0;
          puVar23 = (ulonglong *)PTR_DAT_1806073e0;
          lVar7 = local_c0;
          lVar20 = local_98;
        }
        if (local_c0 == 1) {
LAB_1801d80a2:
          auVar29[0] = -(auVar1[0] == (char)iVar3);
          auVar29[1] = -(auVar1[1] == (char)((uint)iVar3 >> 8));
          auVar29[2] = -(auVar1[2] == (char)((uint)iVar3 >> 0x10));
          auVar29[3] = -(auVar1[3] == (char)((uint)iVar3 >> 0x18));
          auVar29[4] = -(auVar1[4] == (char)iVar4);
          auVar29[5] = -(auVar1[5] == (char)((uint)iVar4 >> 8));
          auVar29[6] = -(auVar1[6] == (char)((uint)iVar4 >> 0x10));
          auVar29[7] = -(auVar1[7] == (byte)((uint)iVar4 >> 0x18));
          auVar29[8] = -(auVar1[8] == (char)iVar5);
          auVar29[9] = -(auVar1[9] == (char)((uint)iVar5 >> 8));
          auVar29[10] = -(auVar1[10] == (char)((uint)iVar5 >> 0x10));
          auVar29[0xb] = -(auVar1[0xb] == (char)((uint)iVar5 >> 0x18));
          auVar29[0xc] = -(auVar1[0xc] == (char)iVar6);
          auVar29[0xd] = -(auVar1[0xd] == (char)((uint)iVar6 >> 8));
          auVar29[0xe] = -(auVar1[0xe] == (char)((uint)iVar6 >> 0x10));
          bVar25 = bVar26 == (byte)((uint)iVar6 >> 0x18);
          auVar29[0xf] = -bVar25;
          if ((((((((((((((((auVar29 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                           (auVar29 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          (auVar29 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                         (auVar29 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar29 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar29 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar29 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar29 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar29 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar29 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar29 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar29 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar29 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar29 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar29 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar25)
          goto LAB_1801d80d4;
          lVar17 = 1;
        }
        else {
          uVar11 = (ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1
                   | (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe | (ushort)(bVar26 >> 7) << 0xf;
          uVar14 = (uint)uVar11;
          if (uVar11 != 0) {
            uVar13 = 0;
            for (; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
              uVar13 = uVar13 + 1;
            }
            param_1 = (undefined8 *)(uVar13 + uVar15 & uVar21);
            goto LAB_1801d80a2;
          }
          lVar17 = 0;
        }
        uVar15 = uVar15 + local_98 + 0x10;
        lVar19 = local_98 + 0x10;
        local_c0 = lVar7;
        local_98 = lVar20;
      } while( true );
    }
    if (((char)uVar14 == '\0') && ((*(ulonglong *)puVar9 & 0x7fffffffffffffff) != 0)) {
      local_81 = 1;
      cVar10 = FUN_18044f9d0();
      if (cVar10 == '\0') {
        DAT_1805eb559 = '\x01';
      }
    }
    cVar10 = DAT_1805eb558;
    LOCK();
    DAT_1805eb558 = '\0';
    UNLOCK();
    if (cVar10 == '\x02') {
      local_81 = 1;
      WakeByAddressSingle(&DAT_1805eb558);
    }
  }
LAB_1801d8347:
  lVar17 = *param_6;
  if (lVar17 == 0) {
    return;
  }
LAB_1801d8356:
  thunk_FUN_1802919a0(param_6[1],lVar17,1);
  return;
LAB_1801d80d4:
  bVar26 = (*pauVar8)[(longlong)param_1];
  if (-1 < (char)bVar26) {
    auVar27 = *pauVar8;
    uVar14 = 0;
    for (uVar13 = (uint)(ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar27[0xf] >> 7) << 0xf); (uVar13 & 1) == 0;
        uVar13 = uVar13 >> 1 | 0x80000000) {
      uVar14 = uVar14 + 1;
    }
    param_1 = (undefined8 *)(ulonglong)uVar14;
    bVar26 = (*pauVar8)[(longlong)param_1];
  }
  bVar24 = bVar24 >> 1;
  (*pauVar8)[(longlong)param_1] = bVar24;
  pauVar8[1][(ulonglong)(param_1 + -2) & uVar21] = bVar24;
  DAT_1805eb570 = DAT_1805eb570 - (ulonglong)(bVar26 & 1);
  lRam00000001805eb578 = lRam00000001805eb578 - DAT_180451ad8;
  *(longlong *)((longlong)pauVar8 + (longlong)param_1 * -0x18 + -8) = local_158;
  puVar22 = (undefined8 *)((longlong)pauVar8 + (longlong)param_1 * -0x18 + -0x18);
  *puVar22 = local_168;
  puVar22[1] = local_160;
  bVar25 = true;
  local_c0 = lVar7;
  local_98 = lVar20;
LAB_1801d8138:
  sVar18 = local_a8;
  puVar22 = local_b0;
  uVar15 = local_b8;
  if (((char)local_90 == '\0') && ((*puVar23 & 0x7fffffffffffffff) != 0)) {
    local_81 = 1;
    cVar10 = FUN_18044f9d0();
    if (cVar10 == '\0') {
      DAT_1805eb559 = '\x01';
    }
  }
  cVar10 = DAT_1805eb558;
  LOCK();
  DAT_1805eb558 = '\0';
  UNLOCK();
  if (cVar10 == '\x02') {
    local_81 = 1;
    WakeByAddressSingle(&DAT_1805eb558);
  }
  if (bVar25) {
    local_81 = 1;
    lStack_c8 = param_3;
    FUN_1801d8a50(&local_168);
    local_a0 = local_160;
    FUN_180292cc0(&lStack_188,local_160,local_158,puVar22,sVar18);
    local_90 = uStack_180;
    plStack_110 = &lStack_c8;
    pcStack_108 = FUN_1802b9380;
    FUN_1802aab50(&lStack_e0,&DAT_18051a639,&plStack_110);
    local_98 = lStack_d8;
    FUN_180292cc0(&lStack_100,local_90,uStack_178,lStack_d8,uStack_d0);
    if (lStack_e0 != 0) {
      thunk_FUN_1802919a0(local_98,lStack_e0,1);
    }
    if (lStack_188 != 0) {
      thunk_FUN_1802919a0(local_90,lStack_188,1);
    }
    if (local_168 != (undefined8 *)0x0) {
      thunk_FUN_1802919a0(local_a0,local_168,1);
    }
    local_90 = lStack_f8;
    FUN_1802986f0(&local_168,lStack_f8,uStack_f0);
    if ((int)local_168 == 2) {
      FUN_18005c5a0(local_160);
      if (lStack_100 != 0) {
        thunk_FUN_1802919a0(local_90,lStack_100,1);
      }
      if (DAT_1805eb5b8 != 0) {
        local_81 = 1;
        FUN_180443808();
      }
      LOCK();
      bVar25 = DAT_1805eb598 == '\0';
      if (bVar25) {
        DAT_1805eb598 = '\x01';
      }
      UNLOCK();
      if (!bVar25) {
        local_81 = 1;
        FUN_18044ee10();
      }
      if ((*puVar23 & 0x7fffffffffffffff) == 0) {
        uVar14 = 0;
        if (DAT_1805eb599 != '\0') goto LAB_1801d82ed;
LAB_1801d8471:
        lVar19 = DAT_1805eb5b0;
        local_a0 = CONCAT44(local_a0._4_4_,uVar14);
        local_90 = *param_6;
        local_98 = param_6[1];
        lVar17 = param_6[2];
        if (DAT_1805eb5b0 == DAT_1805eb5a0) {
          FUN_180444640(&DAT_1805eb5a0);
        }
        lVar7 = DAT_1805eb5a8;
        lVar20 = lVar19 * 0x40;
        *(longlong *)(DAT_1805eb5a8 + lVar20) = local_90;
        *(longlong *)(lVar7 + 8 + lVar20) = local_98;
        *(longlong *)(lVar7 + 0x10 + lVar20) = lVar17;
        *(undefined8 **)(lVar7 + 0x18 + lVar20) = puVar22;
        *(size_t *)(lVar7 + 0x20 + lVar20) = sVar18;
        *(ulonglong *)(lVar7 + 0x28 + lVar20) = uVar15;
        *(undefined8 *)(lVar7 + 0x30 + lVar20) = param_5;
        *(longlong *)(lVar7 + 0x38 + lVar20) = param_3;
        DAT_1805eb5b0 = lVar19 + 1;
        if (((char)local_a0 == '\0') &&
           ((*(ulonglong *)PTR_DAT_1806073e0 & 0x7fffffffffffffff) != 0)) {
          local_81 = 0;
          cVar10 = FUN_18044f9d0();
          if (cVar10 == '\0') {
            DAT_1805eb599 = '\x01';
          }
        }
        cVar10 = DAT_1805eb598;
        uVar15 = 0;
        LOCK();
        DAT_1805eb598 = '\0';
        UNLOCK();
        if (cVar10 != '\x02') goto LAB_1801d8535;
        local_81 = 0;
        WakeByAddressSingle(&DAT_1805eb598);
        uVar15 = 0;
        LOCK();
        UNLOCK();
      }
      else {
        local_81 = 1;
        uVar14 = FUN_18044f9d0();
        uVar14 = uVar14 ^ 1;
        if (DAT_1805eb599 == '\0') goto LAB_1801d8471;
LAB_1801d82ed:
        if (((char)uVar14 == '\0') && ((*puVar23 & 0x7fffffffffffffff) != 0)) {
          local_81 = 1;
          cVar10 = FUN_18044f9d0();
          if (cVar10 == '\0') {
            DAT_1805eb599 = '\x01';
          }
        }
        cVar10 = DAT_1805eb598;
        LOCK();
        DAT_1805eb598 = '\0';
        UNLOCK();
        uVar15 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
        if (cVar10 == '\x02') {
          local_81 = 1;
          WakeByAddressSingle(&DAT_1805eb598);
        }
LAB_1801d8535:
        LOCK();
        UNLOCK();
      }
      bVar25 = DAT_180608558 == '\0';
      DAT_180608558 = '\x01';
      if (bVar25) {
        DAT_180608558 = '\x01';
        if (DAT_1805ea270 != 0) {
          local_81 = (char)uVar15;
          FUN_180443d11();
        }
        puVar22 = &DAT_1804d8eb8;
        local_81 = (char)uVar15;
        sVar18 = FUN_180035b00(1);
        if (sVar18 != 0) {
          local_b8 = CONCAT44(local_b8._4_4_,(int)uVar15);
          local_b0 = puVar22;
          local_a8 = sVar18;
          if ((code *)*puVar22 != (code *)0x0) {
            (*(code *)*puVar22)(sVar18);
          }
          uVar15 = local_b8 & 0xffffffff;
          if (local_b0[1] != 0) {
            thunk_FUN_1802919a0(local_a8,local_b0[1],local_b0[2]);
          }
        }
      }
      lVar17 = *param_6;
      if (((byte)uVar15 & lVar17 != 0) != 1) {
        return;
      }
      goto LAB_1801d8356;
    }
    if (lStack_100 != 0) {
      thunk_FUN_1802919a0(local_90,lStack_100,1);
    }
  }
  goto LAB_1801d8347;
}




/* ===== 180182340  FUN_180182340 ===== */

longlong FUN_180182340(longlong param_1,ulonglong param_2)

{
  size_t _Size;
  code *pcVar1;
  undefined *puVar2;
  char cVar3;
  longlong lVar4;
  void *_Dst;
  size_t *psVar5;
  ulonglong uVar6;
  undefined **ppuVar7;
  bool bVar8;
  
  uVar6 = param_2;
  if (DAT_1805ea290 != 0) {
    FUN_180443e1b();
  }
  lVar4 = FUN_180292190(&DAT_1805ea280);
  uVar6 = (uVar6 & 0xffffffff) / 1000000;
  DAT_1806084e0 = uVar6 + lVar4 * 1000 + (ulonglong)(lVar4 * 1000 + uVar6 == 0);
  if (param_1 == 0) goto LAB_18018251c;
  if (DAT_1805ea200 != 0) {
    FUN_18044395f();
  }
  LOCK();
  bVar8 = DAT_1805ea1e0 == '\0';
  if (bVar8) {
    DAT_1805ea1e0 = '\x01';
  }
  UNLOCK();
  if (!bVar8) {
    FUN_18044ee10(&DAT_1805ea1e0);
  }
  puVar2 = PTR_DAT_1806073e0;
  if ((*(ulonglong *)PTR_DAT_1806073e0 & 0x7fffffffffffffff) == 0) {
    if (DAT_1805ea1e1 == '\0') {
      bVar8 = DAT_1805ea1f8 == 0;
LAB_180182424:
      if (((*(ulonglong *)puVar2 & 0x7fffffffffffffff) != 0) &&
         (cVar3 = FUN_18044f9d0(), cVar3 == '\0')) {
        DAT_1805ea1e1 = '\x01';
      }
LAB_180182433:
      cVar3 = DAT_1805ea1e0;
      LOCK();
      DAT_1805ea1e0 = '\0';
      UNLOCK();
      if (cVar3 == '\x02') {
        WakeByAddressSingle(&DAT_1805ea1e0);
      }
      if ((!bVar8) && (_Size = *(size_t *)(param_1 + 0x18), 0xfffffffffcdfffff < _Size - 0x3200001))
      {
        FUN_1800658a0();
        _Dst = (void *)thunk_FUN_180291940(_Size,1);
        if (_Dst == (void *)0x0) {
          FUN_18045031b(1,_Size);
        }
        else {
          memcpy(_Dst,(void *)(param_1 + 0x20),_Size);
          if (DAT_1805ea270 != 0) {
            FUN_180443d11();
          }
          FUN_1800658a0();
          psVar5 = (size_t *)thunk_FUN_180291940(0x18,8);
          if (psVar5 != (size_t *)0x0) {
            *psVar5 = _Size;
            psVar5[1] = (size_t)_Dst;
            psVar5[2] = _Size;
            ppuVar7 = &PTR_FUN_1804d8ef8;
            lVar4 = FUN_180035b00(psVar5);
            if (lVar4 != 0) {
              if ((code *)*ppuVar7 != (code *)0x0) {
                (*(code *)*ppuVar7)(lVar4);
              }
              if (ppuVar7[1] != (undefined *)0x0) {
                thunk_FUN_1802919a0(lVar4,ppuVar7[1],ppuVar7[2]);
              }
            }
            goto LAB_18018251c;
          }
          FUN_180450301(8,0x18);
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      goto LAB_18018251c;
    }
LAB_1801823e8:
    if (((*(ulonglong *)puVar2 & 0x7fffffffffffffff) != 0) &&
       (cVar3 = FUN_18044f9d0(), cVar3 == '\0')) {
      DAT_1805ea1e1 = '\x01';
    }
  }
  else {
    cVar3 = FUN_18044f9d0();
    if (DAT_1805ea1e1 == '\0') {
      bVar8 = DAT_1805ea1f8 == 0;
      if (cVar3 != '\0') goto LAB_180182424;
      goto LAB_180182433;
    }
    if (cVar3 != '\0') goto LAB_1801823e8;
  }
  cVar3 = DAT_1805ea1e0;
  LOCK();
  DAT_1805ea1e0 = '\0';
  UNLOCK();
  if (cVar3 == '\x02') {
    WakeByAddressSingle(&DAT_1805ea1e0);
  }
LAB_18018251c:
  if (DAT_1806084e8 == (code *)0x0) {
    return param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x000180182538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar4 = (*DAT_1806084e8)(param_1,param_2);
  return lVar4;
}




/* ===== 1800d1280  FUN_1800d1280 ===== */

void FUN_1800d1280(undefined8 param_1,longlong param_2)

{
  FUN_180058f80(*(undefined8 *)(param_2 + 0x478),&DAT_18051b200);
  return;
}


