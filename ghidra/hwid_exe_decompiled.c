

/* ===== 14000149b  FUN_14000149b ===== */

/* WARNING: Removing unreachable block (ram,0x0001400015a9) */
/* WARNING: Removing unreachable block (ram,0x0001400015d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000149b(void)

{
  uint uVar1;
  undefined4 *puVar2;
  code *pcVar3;
  size_t dwBytes;
  BOOL BVar4;
  ulonglong uVar5;
  HGLOBAL hMem;
  LPVOID _Dst;
  HANDLE pvVar6;
  ulonglong ***pppuVar7;
  ulonglong *puVar8;
  longlong lVar9;
  ulonglong **_Size;
  undefined1 (*pauVar10) [16];
  ulonglong **ppuVar11;
  ulonglong **ppuVar12;
  ulonglong uVar13;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  ulonglong **ppuStack_218;
  undefined4 **ppuStack_210;
  ulonglong uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  ulonglong uStack_1e0;
  undefined1 auStack_1d8 [8];
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  ulonglong uStack_1c0;
  ulonglong uStack_1b8;
  ulonglong uStack_1b0;
  ulonglong uStack_1a8;
  ulonglong uStack_1a0;
  ulonglong uStack_198;
  undefined8 uStack_190;
  ulonglong **ppuStack_188;
  code *pcStack_180;
  undefined4 *puStack_178;
  code *pcStack_170;
  undefined4 *puStack_168;
  undefined8 uStack_160;
  undefined4 *puStack_158;
  code *pcStack_150;
  undefined4 *puStack_148;
  code *pcStack_140;
  ulonglong uStack_128;
  byte bStack_120;
  ulonglong uStack_118;
  ulonglong **ppuStack_110;
  longlong lStack_108;
  undefined8 uStack_100;
  longlong lStack_f8;
  ulonglong auStack_f0 [2];
  undefined1 uStack_e0;
  undefined8 uStack_df;
  undefined8 uStack_d7;
  undefined8 uStack_cf;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined8 uStack_b8;
  byte bStack_b0;
  ulonglong *puStack_a8;
  ulonglong *puStack_a0;
  ulonglong uStack_98;
  undefined8 uStack_90;
  ulonglong uStack_80;
  ulonglong *puStack_78;
  ulonglong *puStack_70;
  undefined1 (*pauStack_68) [16];
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  lStack_108 = _DAT_14001b588;
  uStack_100 = _UNK_14001b590;
  uStack_118 = _DAT_14001b578;
  ppuStack_110 = _UNK_14001b580;
  lStack_f8 = 0;
  uStack_df = 0;
  uStack_d7 = 0;
  uStack_cf = 0;
  uStack_c7 = 0;
  uStack_c0 = 0;
  uStack_bf = 0;
  uStack_b8 = 0;
  auStack_f0[0] = _DAT_14001b418;
  auStack_f0[1] = _UNK_14001b420;
  uStack_e0 = 0x32;
  bStack_b0 = 0x11;
  FUN_140002884();
  puStack_70 = (ulonglong *)thunk_FUN_140005a20(0x60,8);
  if ((ulonglong **)puStack_70 == (ulonglong **)0x0) {
    FUN_14001a3b1(8,0x60);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  FUN_1400021d4(&uStack_1c0,0x14001b515,0x1f,0x14001b534,0xb);
  FUN_14000209f(&uStack_1a8);
  FUN_1400021d4((ulonglong *)&puStack_a8,0x14001b53f,0x2c,0x14001b56b,9);
  puVar2 = (undefined4 *)cpuid_basic_info(0);
  uStack_1d0 = *puVar2;
  uStack_1cc = puVar2[1];
  uStack_1c4 = puVar2[2];
  uStack_1c8 = puVar2[3];
  ppuStack_188 = (ulonglong **)&uStack_1cc;
  puStack_168 = &uStack_1c8;
  puStack_178 = &uStack_1c4;
  puVar2 = (undefined4 *)cpuid_Version_info(1);
  uStack_228 = *puVar2;
  uStack_224 = puVar2[1];
  uStack_21c = puVar2[2];
  uStack_220 = puVar2[3];
  puStack_148 = &uStack_21c;
  pcStack_180 = FUN_1400186f0;
  pcStack_170 = FUN_1400186f0;
  uStack_160 = FUN_1400186f0;
  puStack_158 = &uStack_228;
  pcStack_150 = FUN_1400186f0;
  pcStack_140 = FUN_1400186f0;
  FUN_140014440((ulonglong *)&ppuStack_218,(ushort *)&DAT_14001b429,(ulonglong)&ppuStack_188);
  puStack_70[2] = uStack_1b0;
  *puStack_70 = uStack_1c0;
  puStack_70[1] = uStack_1b8;
  puStack_70[5] = uStack_198;
  puStack_70[3] = uStack_1a8;
  puStack_70[4] = uStack_1a0;
  puStack_70[6] = (ulonglong)puStack_a8;
  puStack_70[7] = (ulonglong)puStack_a0;
  puStack_70[8] = uStack_98;
  puStack_70[9] = (ulonglong)ppuStack_218;
  puStack_70[10] = (ulonglong)ppuStack_210;
  puStack_70[0xb] = uStack_208;
  pcStack_170 = (code *)(puStack_70 + 0xc);
  ppuStack_188 = (ulonglong **)puStack_70;
  puStack_178 = (undefined4 *)0x4;
  lVar9 = 0x18;
  ppuVar12 = (ulonglong **)puStack_70;
  do {
    ppuVar11 = ppuVar12 + 3;
    uStack_80 = (ulonglong)*ppuVar12;
    pauVar10 = (undefined1 (*) [16])ppuVar12[1];
    ppuVar12 = (ulonglong **)ppuVar12[2];
    uVar5 = (ulonglong)bStack_b0;
    ppuStack_218 = ppuVar12;
    puStack_78 = (ulonglong *)ppuVar11;
    pauStack_68 = pauVar10;
    if (uVar5 < 0x38) {
      *(ulonglong ***)((longlong)auStack_f0 + uVar5) = ppuVar12;
      uVar13 = uVar5 + 8;
    }
    else {
      memcpy(*(undefined1 (*) [16])auStack_f0 + uVar5,&ppuStack_218,0x40 - uVar5);
      lStack_f8 = lStack_f8 + 1;
      FUN_1400028b9((undefined1 (*) [16])&uStack_118,(undefined1 (*) [16])auStack_f0,1);
      uVar13 = uVar5 - 0x38;
      memcpy((undefined1 (*) [16])auStack_f0,
             auStack_1d8 + (uVar13 & 0x7fffffffffffffc0) + (0x40 - uVar5) + -0x40,uVar13);
      pauVar10 = pauStack_68;
      ppuVar11 = (ulonglong **)puStack_78;
    }
    bStack_b0 = (byte)uVar13;
    _Size = (ulonglong **)(0x40 - uVar13);
    if (ppuVar12 < _Size) {
      memcpy(*(undefined1 (*) [16])auStack_f0 + uVar13,pauVar10,(size_t)ppuVar12);
      uVar13 = (longlong)ppuVar12 + uVar13;
      ppuVar12 = ppuVar11;
    }
    else {
      if (uVar13 != 0) {
        memcpy(*(undefined1 (*) [16])auStack_f0 + uVar13,pauVar10,(size_t)_Size);
        lStack_f8 = lStack_f8 + 1;
        FUN_1400028b9((undefined1 (*) [16])&uStack_118,(undefined1 (*) [16])auStack_f0,1);
        pauVar10 = (undefined1 (*) [16])((longlong)_Size + (longlong)pauStack_68);
        ppuVar12 = (ulonglong **)((longlong)ppuVar12 - (longlong)_Size);
      }
      uVar5 = (ulonglong)ppuVar12 >> 6;
      if (uVar5 != 0) {
        lStack_f8 = lStack_f8 + uVar5;
        FUN_1400028b9((undefined1 (*) [16])&uStack_118,pauVar10,uVar5);
      }
      uVar13 = (ulonglong)((uint)ppuVar12 & 0x3f);
      memcpy((undefined1 (*) [16])auStack_f0,*pauVar10 + ((ulonglong)ppuVar12 & 0x7fffffffffffffc0),
             uVar13);
      ppuVar12 = (ulonglong **)puStack_78;
    }
    bStack_b0 = (byte)uVar13;
    if ((ulonglong *)uStack_80 != (ulonglong *)0x0) {
      thunk_FUN_140005a80(pauStack_68,uStack_80,1);
    }
    lVar9 = lVar9 + 0x18;
  } while (lVar9 != 0x78);
  pcStack_180 = (code *)(puStack_70 + 0xc);
  FUN_140001403(&ppuStack_188);
  puVar8 = &uStack_118;
  pppuVar7 = &ppuStack_188;
  for (lVar9 = 0xe; lVar9 != 0; lVar9 = lVar9 + -1) {
    *pppuVar7 = (ulonglong **)*puVar8;
    puVar8 = puVar8 + 1;
    pppuVar7 = pppuVar7 + 1;
  }
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  pauVar10 = (undefined1 (*) [16])&uStack_160;
  uStack_98 = 0;
  uStack_90 = 0;
  puStack_a8 = (ulonglong *)0x0;
  puStack_a0 = (ulonglong *)0x0;
  uVar13 = (ulonglong)bStack_120;
  uVar5 = (longlong)puStack_168 << 9;
  uVar5 = uVar5 >> 0x38 | (uVar5 & 0xff000000000000) >> 0x28 | (uVar5 & 0xff0000000000) >> 0x18 |
          (uVar5 & 0xff00000000) >> 8 | (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18 |
          (((uint)bStack_120 * 8 | uVar5) & 0xff00) << 0x28 |
          (ulonglong)((uint)bStack_120 * 8) << 0x38;
  *(undefined1 *)((longlong)&uStack_160 + uVar13) = 0x80;
  if ((bStack_120 == 0x3f) ||
     (memset((void *)((longlong)&uStack_160 + uVar13 + 1),0,uVar13 ^ 0x3f),
     (~bStack_120 & 0x38) == 0)) {
    FUN_1400028b9((undefined1 (*) [16])&ppuStack_188,pauVar10,1);
    pauVar10 = (undefined1 (*) [16])&ppuStack_218;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_208 = 0;
    uStack_200 = 0;
    ppuStack_218 = (ulonglong **)0x0;
    ppuStack_210 = (undefined4 **)0x0;
    uStack_1e8 = 0;
    uStack_1e0 = uVar5;
    uVar5 = uStack_128;
  }
  uStack_128 = uVar5;
  FUN_1400028b9((undefined1 (*) [16])&ppuStack_188,pauVar10,1);
  bStack_120 = 0;
  lVar9 = 0;
  do {
    uVar1 = *(uint *)((longlong)&ppuStack_188 + lVar9 * 4);
    *(uint *)((longlong)&puStack_a8 + lVar9 * 4) =
         uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    lVar9 = lVar9 + 1;
  } while (lVar9 != 8);
  ppuStack_210 = &puStack_168;
  ppuStack_188 = (ulonglong **)puStack_a8;
  pcStack_180 = (code *)puStack_a0;
  puStack_178 = (undefined4 *)uStack_98;
  pcStack_170 = (code *)uStack_90;
  uStack_208 = 0x10;
  ppuStack_218 = (ulonglong **)&ppuStack_188;
  FUN_140001f94(&puStack_a8,(longlong *)&ppuStack_218);
  FUN_140008b40((ushort *)&DAT_14001b44f,0x53);
  FUN_140008b40((ushort *)&DAT_14001b478,0x41);
  FUN_140008b40((ushort *)&DAT_14001b44f,0x53);
  FUN_140008b40((ushort *)&DAT_14001b498,3);
  pcStack_180 = (code *)&DAT_140001488;
  ppuStack_188 = &puStack_a8;
  FUN_140008b40((ushort *)&DAT_14001b499,(ulonglong)&ppuStack_188);
  FUN_140008b40((ushort *)&DAT_14001b498,3);
  pcStack_180 = (code *)(uStack_98 + (longlong)puStack_a0);
  ppuStack_188 = (ulonglong **)puStack_a0;
  puStack_178 = (undefined4 *)((ulonglong)puStack_178 & 0xffffffffffff0000);
  pcStack_170 = (code *)CONCAT44(pcStack_170._4_4_,1);
  FUN_14000248f(&uStack_118,&ppuStack_188);
  BVar4 = OpenClipboard((HWND)0x0);
  if (BVar4 != 0) {
    EmptyClipboard();
    dwBytes = lStack_108 * 2;
    hMem = GlobalAlloc(2,dwBytes);
    if ((hMem != (HGLOBAL)0x0) &&
       (_Dst = GlobalLock(hMem), ppuVar12 = ppuStack_110, _Dst != (LPVOID)0x0)) {
      memcpy(_Dst,ppuStack_110,dwBytes);
      GlobalUnlock(hMem);
      pvVar6 = SetClipboardData(0xd,hMem);
      CloseClipboard();
      if (uStack_118 != 0) {
        thunk_FUN_140005a80(ppuVar12,uStack_118 * 2,2);
      }
      if (pvVar6 != (HANDLE)0x0) {
        FUN_140008b40((ushort *)"(copied to clipboard)\n",0x2d);
      }
      goto LAB_140001b0d;
    }
    CloseClipboard();
  }
  if (uStack_118 != 0) {
    thunk_FUN_140005a80(ppuStack_110,uStack_118 * 2,2);
  }
LAB_140001b0d:
  FUN_140008b40((ushort *)&DAT_14001b498,3);
  FUN_140008b40((ushort *)
                "Send this to whoever is setting up your license, then close this window.\n",0x93);
  FUN_140008b40((ushort *)&DAT_14001b498,3);
  FUN_140008b40((ushort *)"Press Enter to exit...",0x2d);
  ppuStack_188 = (ulonglong **)FUN_140008c30();
  uStack_118 = FUN_14000c810(&ppuStack_188);
  if (uStack_118 != 0) {
    FUN_140001e7f(&uStack_118);
  }
  ppuStack_188 = (ulonglong **)0x0;
  pcStack_180 = (code *)0x1;
  puStack_178 = (undefined4 *)0x0;
  ppuStack_218 = (ulonglong **)FUN_140008b00();
  pppuVar7 = &ppuStack_188;
  uStack_118 = FUN_140006470(&ppuStack_218,(ulonglong *)pppuVar7);
  ppuStack_110 = (ulonglong **)pppuVar7;
  if (uStack_118 != 0) {
    FUN_140001e7f((ulonglong *)&ppuStack_110);
  }
  if (ppuStack_188 != (ulonglong **)0x0) {
    thunk_FUN_140005a80(pcStack_180,ppuStack_188,1);
  }
  if ((ulonglong **)puStack_a8 != (ulonglong **)0x0) {
    thunk_FUN_140005a80(puStack_a0,puStack_a8,1);
  }
  return;
}




/* ===== 140018864  __scrt_common_main_seh ===== */

/* Library Function - Single Match
    int __cdecl __scrt_common_main_seh(void)
   
   Library: Visual Studio 2019 Release */

int __cdecl __scrt_common_main_seh(void)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint *puVar6;
  ulonglong uVar7;
  undefined8 unaff_RBX;
  undefined8 in_R9;
  undefined1 uVar8;
  
  iVar2 = (int)unaff_RBX;
  uVar3 = FUN_140018ac8(1);
  if ((char)uVar3 == '\0') {
    FUN_140018df0(7);
  }
  else {
    bVar1 = false;
    uVar8 = 0;
    uVar3 = __scrt_acquire_startup_lock();
    iVar2 = (int)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),(char)uVar3);
    if (DAT_140024288 != 1) {
      if (DAT_140024288 == 0) {
        DAT_140024288 = 1;
        iVar2 = _initterm_e(&DAT_14001b378,&DAT_14001b390);
        if (iVar2 != 0) {
          return 0xff;
        }
        _initterm(&DAT_14001b360,&DAT_14001b370);
        DAT_140024288 = 2;
      }
      else {
        bVar1 = true;
        uVar8 = 1;
      }
      __scrt_release_startup_lock((char)uVar3);
      plVar4 = (longlong *)FUN_140018dd8();
      if ((*plVar4 != 0) && (uVar5 = FUN_140018b90((longlong)plVar4), (char)uVar5 != '\0')) {
        (*(code *)PTR__guard_dispatch_icall_14001b338)(0,2,0,in_R9,uVar8);
      }
      plVar4 = (longlong *)FUN_140018de0();
      if ((*plVar4 != 0) && (uVar5 = FUN_140018b90((longlong)plVar4), (char)uVar5 != '\0')) {
        _register_thread_local_exe_atexit_callback(*plVar4);
      }
      _get_initial_narrow_environment();
      __p___argv();
      puVar6 = (uint *)__p___argc();
      uVar7 = (ulonglong)*puVar6;
      iVar2 = FUN_140001f60();
      uVar5 = FUN_140018f40();
      if ((char)uVar5 != '\0') {
        if (!bVar1) {
          _cexit();
        }
        __scrt_uninitialize_crt(CONCAT71((int7)(uVar7 >> 8),1),'\0');
        return iVar2;
      }
      goto LAB_1400189d0;
    }
  }
  FUN_140018df0(7);
LAB_1400189d0:
                    /* WARNING: Subroutine does not return */
  exit(iVar2);
}




/* ===== 140001000  FUN_140001000 ===== */

void FUN_140001000(longlong *param_1,ulonglong *param_2)

{
  ulonglong _Size;
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *local_80;
  undefined1 *local_78;
  ulonglong local_70;
  void *local_68;
  ulonglong local_60;
  longlong local_58;
  void *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar2 = *param_1;
  uVar1 = param_1[1] - lVar2;
  if ((ulonglong)param_1[2] <= (ulonglong)(param_1[1] - lVar2)) {
    uVar1 = param_1[2];
  }
  if (uVar1 != 0) {
    uVar3 = param_2[2];
    do {
      local_80 = &local_58;
      local_78 = &LAB_140001358;
      local_58 = lVar2;
      FUN_140014440(&local_70,(ushort *)&DAT_14001b3e0,(ulonglong)&local_80);
      _Size = local_60;
      local_50 = local_68;
      if (*param_2 - uVar3 < local_60) {
        FUN_14001951e(param_2,uVar3,local_60,(void *)0x1,1);
        uVar3 = param_2[2];
LAB_14000108f:
        memcpy((void *)(param_2[1] + uVar3),local_50,_Size);
      }
      else if (local_60 != 0) goto LAB_14000108f;
      uVar3 = uVar3 + _Size;
      param_2[2] = uVar3;
      if (local_70 != 0) {
        thunk_FUN_140005a80(local_50,local_70,1);
      }
      lVar2 = lVar2 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}




/* ===== 140001f60  FUN_140001f60 ===== */

void FUN_140001f60(void)

{
  code *local_8;
  
  local_8 = FUN_14000149b;
  FUN_140007500(&local_8,0x14001b3e8);
  return;
}


