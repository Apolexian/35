

/* ===== 180001029  FUN_180001000 ===== */

void FUN_180001000(HMODULE param_1,int param_2)

{
  uint uVar1;
  DWORD DVar2;
  BOOL BVar3;
  undefined1 (*pauVar4) [16];
  HMODULE pHVar5;
  FARPROC pFVar6;
  undefined4 *lpAddress;
  char *TimerQueue;
  char *pcVar7;
  code *pcVar8;
  undefined *puVar9;
  PDWORD lpflOldProtect;
  undefined1 auStackY_178 [32];
  uint local_138 [4];
  char local_128 [272];
  ulonglong local_18;
  
  local_18 = DAT_180025000 ^ (ulonglong)auStackY_178;
  if (param_2 != 1) goto LAB_1800012e3;
  DisableThreadLibraryCalls(param_1);
  GetModuleFileNameA(param_1,&DAT_180025b00,0x104);
  pauVar4 = FUN_180002ea0((undefined1 (*) [16])&DAT_180025b00,0x5c);
  if (pauVar4 != (undefined1 (*) [16])0x0) {
    (*pauVar4)[1] = 0;
  }
  puVar9 = &DAT_180025b00;
  pcVar7 = "%sheaven_platform.log";
  FUN_180001f80(local_128,0x104,0x180019ad0,&DAT_180025b00);
  DAT_180025af0 = FUN_180005db0(local_128,"a");
  if (DAT_180025af0 != 0) {
    puVar9 = (undefined *)0x0;
    pcVar7 = (char *)0x4;
    FUN_180005ee4(DAT_180025af0,0,4,0);
  }
  DVar2 = GetCurrentProcessId();
  FUN_180001ab0(0x180019af0,(ulonglong)DVar2,pcVar7,puVar9);
  pHVar5 = GetModuleHandleA("ntdll.dll");
  pFVar6 = GetProcAddress(pHVar5,"NtCreateUserProcess");
  lpflOldProtect = (PDWORD)0x40;
  pcVar8 = (code *)0x3000;
  lpAddress = (undefined4 *)VirtualAlloc((LPVOID)0x0,0x40,0x3000,0x40);
  if (lpAddress == (undefined4 *)0x0) {
LAB_180001207:
    DAT_180025c08 = (undefined4 *)0x0;
  }
  else {
    if ((((*pFVar6 != (FARPROC)0x4c) || (pFVar6[1] != (FARPROC)0x8b)) ||
        (pFVar6[2] != (FARPROC)0xd1)) || (pFVar6[3] != (FARPROC)0xb8)) {
      lpflOldProtect = (PDWORD)(ulonglong)(byte)pFVar6[1];
      FUN_180001ab0(0x1800193f0,"NtCreateUserProcess",(ulonglong)(byte)*pFVar6,lpflOldProtect);
      pcVar8 = (code *)0x8000;
      VirtualFree(lpAddress,0,0x8000);
      goto LAB_180001207;
    }
    uVar1 = *(uint *)(pFVar6 + 4);
    FUN_180001ab0(0x180019428,"NtCreateUserProcess",(ulonglong)uVar1,lpflOldProtect);
    lpflOldProtect = local_138;
    *lpAddress = 0xb8d18b4c;
    lpAddress[1] = uVar1;
    pcVar8 = (code *)0x40;
    *(undefined2 *)(lpAddress + 2) = 0x50f;
    *(undefined1 *)((longlong)lpAddress + 10) = 0xc3;
    DAT_180025c08 = lpAddress;
    BVar3 = VirtualProtect(pFVar6,0xc,0x40,lpflOldProtect);
    if (BVar3 != 0) {
      *(undefined2 *)pFVar6 = 0xb848;
      *(undefined1 **)(pFVar6 + 2) = &LAB_180001440;
      lpflOldProtect = local_138;
      *(undefined2 *)(pFVar6 + 10) = 0xe0ff;
      pcVar8 = (code *)(ulonglong)local_138[0];
      VirtualProtect(pFVar6,0xc,local_138[0],lpflOldProtect);
      FUN_180001ab0(0x180019450,"NtCreateUserProcess",pcVar8,lpflOldProtect);
    }
  }
  pHVar5 = GetModuleHandleA("kernel32.dll");
  pcVar7 = "IsDebuggerPresent";
  pFVar6 = GetProcAddress(pHVar5,"IsDebuggerPresent");
  if (pFVar6 != (FARPROC)0x0) {
    VirtualProtect(pFVar6,4,0x40,local_138);
    pcVar8 = (code *)(ulonglong)local_138[0];
    lpflOldProtect = local_138;
    pcVar7 = (char *)0x4;
    *(undefined2 *)pFVar6 = 0xc031;
    pFVar6[2] = (code)0xc3;
    VirtualProtect(pFVar6,4,local_138[0],lpflOldProtect);
  }
  if (ProcessEnvironmentBlock != (void *)0x0) {
    *(undefined1 *)((longlong)ProcessEnvironmentBlock + 2) = 0;
  }
  TimerQueue = (char *)CreateTimerQueue();
  DAT_180025c20 = TimerQueue;
  if (TimerQueue != (char *)0x0) {
    pcVar8 = FUN_1800016c0;
    lpflOldProtect = (PDWORD)0x0;
    CreateTimerQueueTimer((PHANDLE)&DAT_180025c28,TimerQueue,FUN_1800016c0,(PVOID)0x0,1000,100,0);
    pcVar7 = TimerQueue;
  }
  FUN_180001ab0(0x180019b48,pcVar7,pcVar8,lpflOldProtect);
LAB_1800012e3:
  FUN_1800020f0(local_18 ^ (ulonglong)auStackY_178);
  return;
}




/* ===== 1800016c0  FUN_1800016c0 ===== */

void FUN_1800016c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  DWORD DVar2;
  HMODULE pHVar3;
  HMODULE pHVar4;
  HANDLE hObject;
  char *pcVar5;
  char *pcVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 auStackY_168 [32];
  longlong local_138 [2];
  char local_128 [272];
  ulonglong local_18;
  
  local_18 = DAT_180025000 ^ (ulonglong)auStackY_168;
  pcVar6 = (char *)0x0;
  local_138[0] = 0;
  EnumWindows(FUN_1800013a0,(LPARAM)local_138);
  DAT_180025af8 = DAT_180025af8 + 1;
  if (local_138[0] == 0) {
    if (0x707 < (int)DAT_180025af8) {
      DVar2 = GetCurrentProcessId();
      FUN_180001ab0(0x180019a80,(ulonglong)DVar2,param_3,param_4);
      if (DAT_180025c28 != (char *)0x0) {
        DeleteTimerQueueTimer(DAT_180025c20,DAT_180025c28,(HANDLE)0x0);
        DAT_180025c28 = (char *)0x0;
      }
    }
    goto LAB_1800018de;
  }
  LOCK();
  bVar8 = DAT_180025afc == 0;
  if (bVar8) {
    DAT_180025afc = 1;
  }
  UNLOCK();
  if (!bVar8) goto LAB_1800018de;
  DVar2 = GetCurrentProcessId();
  pcVar7 = (code *)(ulonglong)DVar2;
  FUN_180001ab0(0x1800198f0,(ulonglong)DAT_180025af8,pcVar7,param_4);
  pcVar5 = DAT_180025c28;
  if (DAT_180025c28 != (char *)0x0) {
    pcVar7 = (code *)0x0;
    DeleteTimerQueueTimer(DAT_180025c20,DAT_180025c28,(HANDLE)0x0);
    DAT_180025c28 = (char *)0x0;
  }
  pHVar3 = (HMODULE)FUN_180001910();
  pHVar4 = pHVar3;
  if (pHVar3 == (HMODULE)0x0) {
    strcpy_s(local_128,0x104,&DAT_180025b00);
    FUN_180005830(local_128,0x104,0x180019920);
    pHVar4 = LoadLibraryA(local_128);
    pcVar5 = "FAILED";
    if (pHVar4 != (HMODULE)0x0) {
      pcVar5 = "OK";
    }
    pcVar7 = (code *)pHVar4;
    FUN_180001ab0(0x180019938,pcVar5,pHVar4,param_4);
  }
  if (pHVar4 == (HMODULE)0x0) {
LAB_180001875:
    FUN_180001ab0(0x1800199f8,pcVar5,pcVar7,param_4);
  }
  else if (pHVar3 == (HMODULE)0x0) {
    if (pHVar4 == (HMODULE)0x0) goto LAB_180001875;
  }
  else {
    uVar1 = *(uint *)((longlong)&pHVar4[10].unused + (longlong)pHVar4[0xf].unused);
    if (uVar1 != 0) {
      pcVar6 = (char *)((longlong)&pHVar4->unused + (ulonglong)uVar1);
      pcVar5 = pcVar6;
      FUN_180001ab0(0x180019970,pcVar6,pcVar7,param_4);
    }
    if (pcVar6 != (char *)0x0) {
      DAT_180025c10 = pcVar6;
      DAT_180025c18 = pHVar4;
      FUN_180001ab0(0x1800199a0,pcVar5,pcVar7,param_4);
      param_4 = 0;
      pcVar7 = FUN_180001310;
      pcVar5 = (char *)0x800000;
      hObject = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0x800000,FUN_180001310,(LPVOID)0x0,0,
                             (LPDWORD)0x0);
      if (hObject == (HANDLE)0x0) {
        DVar2 = GetLastError();
        pcVar5 = (char *)(ulonglong)DVar2;
        FUN_180001ab0(0x1800199d8,pcVar5,pcVar7,param_4);
      }
      else {
        CloseHandle(hObject);
      }
    }
  }
  FUN_180001ab0(0x180019a58,pcVar5,pcVar7,param_4);
LAB_1800018de:
  FUN_1800020f0(local_18 ^ (ulonglong)auStackY_168);
  return;
}




/* ===== 180001c38  FUN_180001b20 ===== */

undefined8 * FUN_180001b20(ushort *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  BOOLEAN BVar4;
  DWORD DVar5;
  undefined8 *lpAddress;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  HMODULE hModule;
  FARPROC pFVar9;
  char *pcVar10;
  ushort uVar11;
  ushort uVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  PDWORD pDVar15;
  undefined8 *puVar16;
  PDWORD lpflOldProtect;
  longlong lVar17;
  uint *puVar18;
  LPCSTR lpLibFileName;
  DWORD local_res10 [2];
  uint *local_res18;
  
  if ((uint)param_2 < 0x40) {
    FUN_180001ab0(0x180019570,param_2,param_3,param_4);
    return (undefined8 *)0x0;
  }
  if (*param_1 != 0x5a4d) {
    FUN_180001ab0(0x180019590,(ulonglong)*param_1,param_3,param_4);
    return (undefined8 *)0x0;
  }
  puVar18 = (uint *)((longlong)*(int *)(param_1 + 0x1e) + (longlong)param_1);
  uVar1 = *puVar18;
  local_res18 = puVar18;
  if (uVar1 != 0x4550) {
    FUN_180001ab0(0x1800195b0,(ulonglong)uVar1,param_3,param_4);
    return (undefined8 *)0x0;
  }
  if ((short)puVar18[6] != 0x20b) {
    FUN_180001ab0(0x1800195d0,(ulonglong)uVar1,param_3,param_4);
    return (undefined8 *)0x0;
  }
  lpflOldProtect = (PDWORD)0x40;
  uVar1 = puVar18[0x14];
  lpAddress = (undefined8 *)VirtualAlloc(*(LPVOID *)(puVar18 + 0xc),(ulonglong)uVar1,0x3000,0x40);
  if (lpAddress == (undefined8 *)0x0) {
    lpflOldProtect = (PDWORD)0x40;
    lpAddress = (undefined8 *)VirtualAlloc((LPVOID)0x0,(ulonglong)uVar1,0x3000,0x40);
    if (lpAddress == (undefined8 *)0x0) {
      DVar5 = GetLastError();
      FUN_180001ab0(0x1800195e8,(ulonglong)uVar1,(ulonglong)DVar5,lpflOldProtect);
      return (undefined8 *)0x0;
    }
  }
  FUN_180001ab0(0x180019610,lpAddress,(ulonglong)uVar1,lpflOldProtect);
  uVar7 = (ulonglong)puVar18[0x15];
  FUN_180017be0(lpAddress,(undefined8 *)param_1,uVar7);
  uVar11 = (ushort)puVar18[5];
  uVar12 = 0;
  if (*(short *)((longlong)puVar18 + 6) != 0) {
    do {
      uVar6 = (ulonglong)uVar12;
      uVar1 = *(uint *)((longlong)puVar18 + uVar6 * 0x28 + (ulonglong)uVar11 + 0x28);
      if (uVar1 != 0) {
        uVar2 = *(uint *)((longlong)puVar18 + uVar6 * 0x28 + (ulonglong)uVar11 + 0x2c);
        lpflOldProtect = (PDWORD)(ulonglong)uVar2;
        if ((uint)param_2 < uVar2 + uVar1) {
          FUN_180001ab0(0x180019638,(ulonglong)uVar12,uVar7,lpflOldProtect);
          VirtualFree(lpAddress,0,0x8000);
          return (undefined8 *)0x0;
        }
        uVar7 = (ulonglong)uVar1;
        FUN_180017be0((undefined8 *)
                      ((ulonglong)
                       *(uint *)((longlong)puVar18 + uVar6 * 0x28 + (ulonglong)uVar11 + 0x24) +
                      (longlong)lpAddress),
                      (undefined8 *)((longlong)param_1 + (longlong)lpflOldProtect),uVar7);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < *(ushort *)((longlong)puVar18 + 6));
  }
  lVar17 = (longlong)lpAddress - *(longlong *)(puVar18 + 0xc);
  if ((lVar17 != 0) && (puVar18[0x2d] != 0)) {
    lpflOldProtect = (PDWORD)((ulonglong)puVar18[0x2c] + (longlong)lpAddress);
    DVar5 = *lpflOldProtect;
    while (DVar5 != 0) {
      uVar1 = lpflOldProtect[1];
      if (uVar1 < 8) break;
      pDVar15 = lpflOldProtect + 2;
      uVar7 = (ulonglong)uVar1 - 8 >> 1;
      if ((int)uVar7 != 0) {
        uVar7 = uVar7 & 0xffffffff;
        do {
          uVar11 = (ushort)*pDVar15 >> 0xc;
          plVar8 = (longlong *)
                   ((longlong)lpAddress +
                   (ulonglong)*lpflOldProtect + (ulonglong)((ushort)*pDVar15 & 0xfff));
          if (uVar11 == 10) {
            *plVar8 = *plVar8 + lVar17;
          }
          else if (uVar11 == 3) {
            *(int *)plVar8 = (int)*plVar8 + (int)lVar17;
          }
          pDVar15 = (PDWORD)((longlong)pDVar15 + 2);
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      lpflOldProtect = (PDWORD)((longlong)lpflOldProtect + (ulonglong)uVar1);
      DVar5 = *lpflOldProtect;
    }
  }
  if (puVar18[0x25] != 0) {
    uVar1 = ((uint *)((ulonglong)puVar18[0x24] + (longlong)lpAddress))[3];
    puVar3 = (uint *)((ulonglong)puVar18[0x24] + (longlong)lpAddress);
    while (uVar1 != 0) {
      lpLibFileName = (LPCSTR)((ulonglong)puVar3[3] + (longlong)lpAddress);
      hModule = LoadLibraryA(lpLibFileName);
      if (hModule == (HMODULE)0x0) {
        DVar5 = GetLastError();
        FUN_180001ab0(0x180019668,lpLibFileName,(ulonglong)DVar5,lpflOldProtect);
      }
      else {
        puVar14 = (ulonglong *)((ulonglong)puVar3[4] + (longlong)lpAddress);
        puVar13 = (ulonglong *)((longlong)lpAddress + (ulonglong)*puVar3);
        if (*puVar3 == 0) {
          puVar13 = puVar14;
        }
        uVar7 = *puVar13;
        while (uVar7 != 0) {
          if ((longlong)uVar7 < 0) {
            pFVar9 = GetProcAddress(hModule,(LPCSTR)(uVar7 & 0xffff));
          }
          else {
            pFVar9 = GetProcAddress(hModule,(LPCSTR)((longlong)lpAddress + uVar7 + 2));
            if (pFVar9 == (FARPROC)0x0) {
              FUN_180001ab0(0x180019690,lpLibFileName,(longlong)lpAddress + uVar7 + 2,lpflOldProtect
                           );
            }
          }
          puVar13 = puVar13 + 1;
          *puVar14 = (ulonglong)pFVar9;
          puVar14 = puVar14 + 1;
          uVar7 = *puVar13;
        }
      }
      uVar1 = puVar3[8];
      puVar18 = local_res18;
      puVar3 = puVar3 + 5;
    }
  }
  uVar12 = 0;
  uVar11 = (ushort)puVar18[5];
  if (*(short *)((longlong)puVar18 + 6) != 0) {
    do {
      uVar7 = (ulonglong)uVar12;
      uVar1 = *(uint *)((longlong)puVar18 + uVar7 * 0x28 + (ulonglong)uVar11 + 0x20);
      if ((uVar1 != 0) ||
         (uVar1 = *(uint *)((longlong)puVar18 + uVar7 * 0x28 + (ulonglong)uVar11 + 0x28), uVar1 != 0
         )) {
        uVar2 = *(uint *)((longlong)puVar18 + uVar7 * 0x28 + (ulonglong)uVar11 + 0x3c);
        if ((uVar2 >> 0x1d & 1) == 0) {
          DVar5 = 2;
          if ((int)uVar2 < 0) {
            DVar5 = 4;
          }
        }
        else {
          DVar5 = ((int)uVar2 >> 0x1f & 0x20U) + 0x20;
        }
        lpflOldProtect = local_res10;
        VirtualProtect((LPVOID)((ulonglong)
                                *(uint *)((longlong)puVar18 +
                                         uVar7 * 0x28 + (ulonglong)uVar11 + 0x24) +
                               (longlong)lpAddress),(ulonglong)uVar1,DVar5,lpflOldProtect);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < *(ushort *)((longlong)puVar18 + 6));
  }
  if (puVar18[0x29] != 0) {
    uVar7 = (ulonglong)puVar18[0x29] / 0xc;
    puVar16 = lpAddress;
    BVar4 = RtlAddFunctionTable((PRUNTIME_FUNCTION)((ulonglong)puVar18[0x28] + (longlong)lpAddress),
                                (DWORD)uVar7,(DWORD64)lpAddress);
    if (BVar4 == '\0') {
      DVar5 = GetLastError();
      uVar7 = (ulonglong)DVar5;
      pcVar10 = "[pcl] Warning: RtlAddFunctionTable failed: %lu\n";
    }
    else {
      pcVar10 = "[pcl] Exception table registered (%lu entries)\n";
    }
    FUN_180001ab0((longlong)pcVar10,uVar7,puVar16,lpflOldProtect);
  }
  return lpAddress;
}




/* ===== 180001d88  FUN_180001b20 ===== */

undefined8 * FUN_180001b20(ushort *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  BOOLEAN BVar4;
  DWORD DVar5;
  undefined8 *lpAddress;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  HMODULE hModule;
  FARPROC pFVar9;
  char *pcVar10;
  ushort uVar11;
  ushort uVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  PDWORD pDVar15;
  undefined8 *puVar16;
  PDWORD lpflOldProtect;
  longlong lVar17;
  uint *puVar18;
  LPCSTR lpLibFileName;
  DWORD local_res10 [2];
  uint *local_res18;
  
  if ((uint)param_2 < 0x40) {
    FUN_180001ab0(0x180019570,param_2,param_3,param_4);
    return (undefined8 *)0x0;
  }
  if (*param_1 != 0x5a4d) {
    FUN_180001ab0(0x180019590,(ulonglong)*param_1,param_3,param_4);
    return (undefined8 *)0x0;
  }
  puVar18 = (uint *)((longlong)*(int *)(param_1 + 0x1e) + (longlong)param_1);
  uVar1 = *puVar18;
  local_res18 = puVar18;
  if (uVar1 != 0x4550) {
    FUN_180001ab0(0x1800195b0,(ulonglong)uVar1,param_3,param_4);
    return (undefined8 *)0x0;
  }
  if ((short)puVar18[6] != 0x20b) {
    FUN_180001ab0(0x1800195d0,(ulonglong)uVar1,param_3,param_4);
    return (undefined8 *)0x0;
  }
  lpflOldProtect = (PDWORD)0x40;
  uVar1 = puVar18[0x14];
  lpAddress = (undefined8 *)VirtualAlloc(*(LPVOID *)(puVar18 + 0xc),(ulonglong)uVar1,0x3000,0x40);
  if (lpAddress == (undefined8 *)0x0) {
    lpflOldProtect = (PDWORD)0x40;
    lpAddress = (undefined8 *)VirtualAlloc((LPVOID)0x0,(ulonglong)uVar1,0x3000,0x40);
    if (lpAddress == (undefined8 *)0x0) {
      DVar5 = GetLastError();
      FUN_180001ab0(0x1800195e8,(ulonglong)uVar1,(ulonglong)DVar5,lpflOldProtect);
      return (undefined8 *)0x0;
    }
  }
  FUN_180001ab0(0x180019610,lpAddress,(ulonglong)uVar1,lpflOldProtect);
  uVar7 = (ulonglong)puVar18[0x15];
  FUN_180017be0(lpAddress,(undefined8 *)param_1,uVar7);
  uVar11 = (ushort)puVar18[5];
  uVar12 = 0;
  if (*(short *)((longlong)puVar18 + 6) != 0) {
    do {
      uVar6 = (ulonglong)uVar12;
      uVar1 = *(uint *)((longlong)puVar18 + uVar6 * 0x28 + (ulonglong)uVar11 + 0x28);
      if (uVar1 != 0) {
        uVar2 = *(uint *)((longlong)puVar18 + uVar6 * 0x28 + (ulonglong)uVar11 + 0x2c);
        lpflOldProtect = (PDWORD)(ulonglong)uVar2;
        if ((uint)param_2 < uVar2 + uVar1) {
          FUN_180001ab0(0x180019638,(ulonglong)uVar12,uVar7,lpflOldProtect);
          VirtualFree(lpAddress,0,0x8000);
          return (undefined8 *)0x0;
        }
        uVar7 = (ulonglong)uVar1;
        FUN_180017be0((undefined8 *)
                      ((ulonglong)
                       *(uint *)((longlong)puVar18 + uVar6 * 0x28 + (ulonglong)uVar11 + 0x24) +
                      (longlong)lpAddress),
                      (undefined8 *)((longlong)param_1 + (longlong)lpflOldProtect),uVar7);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < *(ushort *)((longlong)puVar18 + 6));
  }
  lVar17 = (longlong)lpAddress - *(longlong *)(puVar18 + 0xc);
  if ((lVar17 != 0) && (puVar18[0x2d] != 0)) {
    lpflOldProtect = (PDWORD)((ulonglong)puVar18[0x2c] + (longlong)lpAddress);
    DVar5 = *lpflOldProtect;
    while (DVar5 != 0) {
      uVar1 = lpflOldProtect[1];
      if (uVar1 < 8) break;
      pDVar15 = lpflOldProtect + 2;
      uVar7 = (ulonglong)uVar1 - 8 >> 1;
      if ((int)uVar7 != 0) {
        uVar7 = uVar7 & 0xffffffff;
        do {
          uVar11 = (ushort)*pDVar15 >> 0xc;
          plVar8 = (longlong *)
                   ((longlong)lpAddress +
                   (ulonglong)*lpflOldProtect + (ulonglong)((ushort)*pDVar15 & 0xfff));
          if (uVar11 == 10) {
            *plVar8 = *plVar8 + lVar17;
          }
          else if (uVar11 == 3) {
            *(int *)plVar8 = (int)*plVar8 + (int)lVar17;
          }
          pDVar15 = (PDWORD)((longlong)pDVar15 + 2);
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      lpflOldProtect = (PDWORD)((longlong)lpflOldProtect + (ulonglong)uVar1);
      DVar5 = *lpflOldProtect;
    }
  }
  if (puVar18[0x25] != 0) {
    uVar1 = ((uint *)((ulonglong)puVar18[0x24] + (longlong)lpAddress))[3];
    puVar3 = (uint *)((ulonglong)puVar18[0x24] + (longlong)lpAddress);
    while (uVar1 != 0) {
      lpLibFileName = (LPCSTR)((ulonglong)puVar3[3] + (longlong)lpAddress);
      hModule = LoadLibraryA(lpLibFileName);
      if (hModule == (HMODULE)0x0) {
        DVar5 = GetLastError();
        FUN_180001ab0(0x180019668,lpLibFileName,(ulonglong)DVar5,lpflOldProtect);
      }
      else {
        puVar14 = (ulonglong *)((ulonglong)puVar3[4] + (longlong)lpAddress);
        puVar13 = (ulonglong *)((longlong)lpAddress + (ulonglong)*puVar3);
        if (*puVar3 == 0) {
          puVar13 = puVar14;
        }
        uVar7 = *puVar13;
        while (uVar7 != 0) {
          if ((longlong)uVar7 < 0) {
            pFVar9 = GetProcAddress(hModule,(LPCSTR)(uVar7 & 0xffff));
          }
          else {
            pFVar9 = GetProcAddress(hModule,(LPCSTR)((longlong)lpAddress + uVar7 + 2));
            if (pFVar9 == (FARPROC)0x0) {
              FUN_180001ab0(0x180019690,lpLibFileName,(longlong)lpAddress + uVar7 + 2,lpflOldProtect
                           );
            }
          }
          puVar13 = puVar13 + 1;
          *puVar14 = (ulonglong)pFVar9;
          puVar14 = puVar14 + 1;
          uVar7 = *puVar13;
        }
      }
      uVar1 = puVar3[8];
      puVar18 = local_res18;
      puVar3 = puVar3 + 5;
    }
  }
  uVar12 = 0;
  uVar11 = (ushort)puVar18[5];
  if (*(short *)((longlong)puVar18 + 6) != 0) {
    do {
      uVar7 = (ulonglong)uVar12;
      uVar1 = *(uint *)((longlong)puVar18 + uVar7 * 0x28 + (ulonglong)uVar11 + 0x20);
      if ((uVar1 != 0) ||
         (uVar1 = *(uint *)((longlong)puVar18 + uVar7 * 0x28 + (ulonglong)uVar11 + 0x28), uVar1 != 0
         )) {
        uVar2 = *(uint *)((longlong)puVar18 + uVar7 * 0x28 + (ulonglong)uVar11 + 0x3c);
        if ((uVar2 >> 0x1d & 1) == 0) {
          DVar5 = 2;
          if ((int)uVar2 < 0) {
            DVar5 = 4;
          }
        }
        else {
          DVar5 = ((int)uVar2 >> 0x1f & 0x20U) + 0x20;
        }
        lpflOldProtect = local_res10;
        VirtualProtect((LPVOID)((ulonglong)
                                *(uint *)((longlong)puVar18 +
                                         uVar7 * 0x28 + (ulonglong)uVar11 + 0x24) +
                               (longlong)lpAddress),(ulonglong)uVar1,DVar5,lpflOldProtect);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < *(ushort *)((longlong)puVar18 + 6));
  }
  if (puVar18[0x29] != 0) {
    uVar7 = (ulonglong)puVar18[0x29] / 0xc;
    puVar16 = lpAddress;
    BVar4 = RtlAddFunctionTable((PRUNTIME_FUNCTION)((ulonglong)puVar18[0x28] + (longlong)lpAddress),
                                (DWORD)uVar7,(DWORD64)lpAddress);
    if (BVar4 == '\0') {
      DVar5 = GetLastError();
      uVar7 = (ulonglong)DVar5;
      pcVar10 = "[pcl] Warning: RtlAddFunctionTable failed: %lu\n";
    }
    else {
      pcVar10 = "[pcl] Exception table registered (%lu entries)\n";
    }
    FUN_180001ab0((longlong)pcVar10,uVar7,puVar16,lpflOldProtect);
  }
  return lpAddress;
}




/* ===== 180001e74  FUN_180001b20 ===== */

undefined8 * FUN_180001b20(ushort *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  BOOLEAN BVar4;
  DWORD DVar5;
  undefined8 *lpAddress;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  HMODULE hModule;
  FARPROC pFVar9;
  char *pcVar10;
  ushort uVar11;
  ushort uVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  PDWORD pDVar15;
  undefined8 *puVar16;
  PDWORD lpflOldProtect;
  longlong lVar17;
  uint *puVar18;
  LPCSTR lpLibFileName;
  DWORD local_res10 [2];
  uint *local_res18;
  
  if ((uint)param_2 < 0x40) {
    FUN_180001ab0(0x180019570,param_2,param_3,param_4);
    return (undefined8 *)0x0;
  }
  if (*param_1 != 0x5a4d) {
    FUN_180001ab0(0x180019590,(ulonglong)*param_1,param_3,param_4);
    return (undefined8 *)0x0;
  }
  puVar18 = (uint *)((longlong)*(int *)(param_1 + 0x1e) + (longlong)param_1);
  uVar1 = *puVar18;
  local_res18 = puVar18;
  if (uVar1 != 0x4550) {
    FUN_180001ab0(0x1800195b0,(ulonglong)uVar1,param_3,param_4);
    return (undefined8 *)0x0;
  }
  if ((short)puVar18[6] != 0x20b) {
    FUN_180001ab0(0x1800195d0,(ulonglong)uVar1,param_3,param_4);
    return (undefined8 *)0x0;
  }
  lpflOldProtect = (PDWORD)0x40;
  uVar1 = puVar18[0x14];
  lpAddress = (undefined8 *)VirtualAlloc(*(LPVOID *)(puVar18 + 0xc),(ulonglong)uVar1,0x3000,0x40);
  if (lpAddress == (undefined8 *)0x0) {
    lpflOldProtect = (PDWORD)0x40;
    lpAddress = (undefined8 *)VirtualAlloc((LPVOID)0x0,(ulonglong)uVar1,0x3000,0x40);
    if (lpAddress == (undefined8 *)0x0) {
      DVar5 = GetLastError();
      FUN_180001ab0(0x1800195e8,(ulonglong)uVar1,(ulonglong)DVar5,lpflOldProtect);
      return (undefined8 *)0x0;
    }
  }
  FUN_180001ab0(0x180019610,lpAddress,(ulonglong)uVar1,lpflOldProtect);
  uVar7 = (ulonglong)puVar18[0x15];
  FUN_180017be0(lpAddress,(undefined8 *)param_1,uVar7);
  uVar11 = (ushort)puVar18[5];
  uVar12 = 0;
  if (*(short *)((longlong)puVar18 + 6) != 0) {
    do {
      uVar6 = (ulonglong)uVar12;
      uVar1 = *(uint *)((longlong)puVar18 + uVar6 * 0x28 + (ulonglong)uVar11 + 0x28);
      if (uVar1 != 0) {
        uVar2 = *(uint *)((longlong)puVar18 + uVar6 * 0x28 + (ulonglong)uVar11 + 0x2c);
        lpflOldProtect = (PDWORD)(ulonglong)uVar2;
        if ((uint)param_2 < uVar2 + uVar1) {
          FUN_180001ab0(0x180019638,(ulonglong)uVar12,uVar7,lpflOldProtect);
          VirtualFree(lpAddress,0,0x8000);
          return (undefined8 *)0x0;
        }
        uVar7 = (ulonglong)uVar1;
        FUN_180017be0((undefined8 *)
                      ((ulonglong)
                       *(uint *)((longlong)puVar18 + uVar6 * 0x28 + (ulonglong)uVar11 + 0x24) +
                      (longlong)lpAddress),
                      (undefined8 *)((longlong)param_1 + (longlong)lpflOldProtect),uVar7);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < *(ushort *)((longlong)puVar18 + 6));
  }
  lVar17 = (longlong)lpAddress - *(longlong *)(puVar18 + 0xc);
  if ((lVar17 != 0) && (puVar18[0x2d] != 0)) {
    lpflOldProtect = (PDWORD)((ulonglong)puVar18[0x2c] + (longlong)lpAddress);
    DVar5 = *lpflOldProtect;
    while (DVar5 != 0) {
      uVar1 = lpflOldProtect[1];
      if (uVar1 < 8) break;
      pDVar15 = lpflOldProtect + 2;
      uVar7 = (ulonglong)uVar1 - 8 >> 1;
      if ((int)uVar7 != 0) {
        uVar7 = uVar7 & 0xffffffff;
        do {
          uVar11 = (ushort)*pDVar15 >> 0xc;
          plVar8 = (longlong *)
                   ((longlong)lpAddress +
                   (ulonglong)*lpflOldProtect + (ulonglong)((ushort)*pDVar15 & 0xfff));
          if (uVar11 == 10) {
            *plVar8 = *plVar8 + lVar17;
          }
          else if (uVar11 == 3) {
            *(int *)plVar8 = (int)*plVar8 + (int)lVar17;
          }
          pDVar15 = (PDWORD)((longlong)pDVar15 + 2);
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      lpflOldProtect = (PDWORD)((longlong)lpflOldProtect + (ulonglong)uVar1);
      DVar5 = *lpflOldProtect;
    }
  }
  if (puVar18[0x25] != 0) {
    uVar1 = ((uint *)((ulonglong)puVar18[0x24] + (longlong)lpAddress))[3];
    puVar3 = (uint *)((ulonglong)puVar18[0x24] + (longlong)lpAddress);
    while (uVar1 != 0) {
      lpLibFileName = (LPCSTR)((ulonglong)puVar3[3] + (longlong)lpAddress);
      hModule = LoadLibraryA(lpLibFileName);
      if (hModule == (HMODULE)0x0) {
        DVar5 = GetLastError();
        FUN_180001ab0(0x180019668,lpLibFileName,(ulonglong)DVar5,lpflOldProtect);
      }
      else {
        puVar14 = (ulonglong *)((ulonglong)puVar3[4] + (longlong)lpAddress);
        puVar13 = (ulonglong *)((longlong)lpAddress + (ulonglong)*puVar3);
        if (*puVar3 == 0) {
          puVar13 = puVar14;
        }
        uVar7 = *puVar13;
        while (uVar7 != 0) {
          if ((longlong)uVar7 < 0) {
            pFVar9 = GetProcAddress(hModule,(LPCSTR)(uVar7 & 0xffff));
          }
          else {
            pFVar9 = GetProcAddress(hModule,(LPCSTR)((longlong)lpAddress + uVar7 + 2));
            if (pFVar9 == (FARPROC)0x0) {
              FUN_180001ab0(0x180019690,lpLibFileName,(longlong)lpAddress + uVar7 + 2,lpflOldProtect
                           );
            }
          }
          puVar13 = puVar13 + 1;
          *puVar14 = (ulonglong)pFVar9;
          puVar14 = puVar14 + 1;
          uVar7 = *puVar13;
        }
      }
      uVar1 = puVar3[8];
      puVar18 = local_res18;
      puVar3 = puVar3 + 5;
    }
  }
  uVar12 = 0;
  uVar11 = (ushort)puVar18[5];
  if (*(short *)((longlong)puVar18 + 6) != 0) {
    do {
      uVar7 = (ulonglong)uVar12;
      uVar1 = *(uint *)((longlong)puVar18 + uVar7 * 0x28 + (ulonglong)uVar11 + 0x20);
      if ((uVar1 != 0) ||
         (uVar1 = *(uint *)((longlong)puVar18 + uVar7 * 0x28 + (ulonglong)uVar11 + 0x28), uVar1 != 0
         )) {
        uVar2 = *(uint *)((longlong)puVar18 + uVar7 * 0x28 + (ulonglong)uVar11 + 0x3c);
        if ((uVar2 >> 0x1d & 1) == 0) {
          DVar5 = 2;
          if ((int)uVar2 < 0) {
            DVar5 = 4;
          }
        }
        else {
          DVar5 = ((int)uVar2 >> 0x1f & 0x20U) + 0x20;
        }
        lpflOldProtect = local_res10;
        VirtualProtect((LPVOID)((ulonglong)
                                *(uint *)((longlong)puVar18 +
                                         uVar7 * 0x28 + (ulonglong)uVar11 + 0x24) +
                               (longlong)lpAddress),(ulonglong)uVar1,DVar5,lpflOldProtect);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < *(ushort *)((longlong)puVar18 + 6));
  }
  if (puVar18[0x29] != 0) {
    uVar7 = (ulonglong)puVar18[0x29] / 0xc;
    puVar16 = lpAddress;
    BVar4 = RtlAddFunctionTable((PRUNTIME_FUNCTION)((ulonglong)puVar18[0x28] + (longlong)lpAddress),
                                (DWORD)uVar7,(DWORD64)lpAddress);
    if (BVar4 == '\0') {
      DVar5 = GetLastError();
      uVar7 = (ulonglong)DVar5;
      pcVar10 = "[pcl] Warning: RtlAddFunctionTable failed: %lu\n";
    }
    else {
      pcVar10 = "[pcl] Exception table registered (%lu entries)\n";
    }
    FUN_180001ab0((longlong)pcVar10,uVar7,puVar16,lpflOldProtect);
  }
  return lpAddress;
}


