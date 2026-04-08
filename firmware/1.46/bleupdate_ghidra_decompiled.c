/* EQ3 CC-RT-BLE v1.46 bleupdate.bin - Ghidra Decompilation */
/* Base: 0x002007F0, ARM Cortex-M3 Thumb-2 */
/* ROM symbols from BCM20736 SDK */

/* ---- bleprofile_gpio_cfg @ 002007f0 ---- */

/* WARNING: Control flow encountered bad instruction data */

void bleprofile_gpio_cfg(void)

{
  int unaff_r4;
  int unaff_r6;
  
  *(char *)((unaff_r6 - unaff_r4 >> 0x10) + 8) = (char)((uint)(unaff_r6 - unaff_r4) >> 0x10);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ---- FUN_00200982 @ 00200982 ---- */

/* WARNING: Removing unreachable block (ram,0x002009b6) */

void FUN_00200982(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint unaff_r7;
  char in_OV;
  
  iVar2 = unaff_r7 << 2;
  uVar3 = 0;
  do {
    iVar1 = unaff_r7 * 8;
    uVar3 = uVar3 >> 0xb;
    *(int *)iVar1 = iVar1;
    *(undefined4 *)(iVar1 + 4) = param_2;
    *(undefined4 *)(iVar1 + 8) = 0xf0;
    *(uint *)(iVar1 + 0xc) = unaff_r7 >> 0x13;
    *(int *)(iVar1 + 0x10) = iVar2;
    *(uint *)(iVar1 + 0x14) = unaff_r7;
    while (uVar3 = *(uint *)(uVar3 + unaff_r7), unaff_r7 >> 0x13 != 0 && in_OV == '\0') {
      in_OV = SBORROW4(uVar3,3);
      uVar3 = uVar3 - 3;
      param_2 = 0;
      unaff_r7 = 0;
    }
  } while( true );
}



/* ---- FUN_00200bf0 @ 00200bf0 ---- */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00200bf0(uint param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint unaff_r4;
  uint unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  char in_OV;
  
  *(char *)(unaff_r6 + 3) = (char)unaff_r5;
  puVar1 = (uint *)(param_1 >> (unaff_r6 & 0xff));
  *(short *)(unaff_r6 + 6) = (short)puVar1;
  puVar3 = (uint *)(unaff_r6 << 3);
  do {
    puVar4 = (uint *)((int)puVar1 * 0x200);
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    puVar2 = (uint *)(unaff_r4 * 0x20);
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    *puVar2 = unaff_r5;
    puVar2[1] = unaff_r6;
    puVar1 = puVar2 + 2;
    *(undefined2 *)(unaff_r6 + 6) = 0xe0;
    *puVar3 = (uint)puVar1;
    puVar3[1] = unaff_r5;
    puVar3 = (uint *)(unaff_r6 << 7);
    puVar2[6] = (uint)puVar3;
  } while ((int)puVar3 < 0 != (bool)in_OV);
  *puVar1 = unaff_r5;
  puVar2[3] = unaff_r6;
  puVar2[4] = (uint)(puVar2 + 4);
  puVar2[5] = (uint)puVar3;
  puVar2[6] = unaff_r4;
  puVar2[7] = unaff_r5;
  puVar2[8] = unaff_r6;
  puVar2[9] = unaff_r7;
  *(uint **)(unaff_r4 + 0x14) = puVar3;
  *puVar4 = unaff_r4;
  puVar4[1] = unaff_r5;
  puVar4[2] = unaff_r6;
  *(uint **)(unaff_r6 + 0x10) = puVar3;
  puVar2[8] = (uint)puVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ---- enableSavingAssert @ 00200c0c ---- */

/* WARNING: Control flow encountered bad instruction data */

void enableSavingAssert(int *param_1,undefined4 *param_2,int *param_3)

{
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  char in_OV;
  int *piVar1;
  
  while( true ) {
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    *param_1 = unaff_r5;
    param_1[1] = unaff_r6;
    piVar1 = param_1 + 2;
    *(undefined2 *)(unaff_r6 + 6) = 0xe0;
    *param_2 = piVar1;
    param_2[1] = unaff_r5;
    param_2 = (undefined4 *)(unaff_r6 << 7);
    param_1[6] = (int)param_2;
    if ((int)param_2 < 0 == (bool)in_OV) break;
    param_3 = (int *)((int)piVar1 * 0x200);
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    param_1 = (int *)(unaff_r4 << 5);
  }
  *piVar1 = unaff_r5;
  param_1[3] = unaff_r6;
  param_1[4] = (int)(param_1 + 4);
  param_1[5] = (int)param_2;
  param_1[6] = unaff_r4;
  param_1[7] = unaff_r5;
  param_1[8] = unaff_r6;
  param_1[9] = unaff_r7;
  *(undefined4 **)(unaff_r4 + 0x14) = param_2;
  *param_3 = unaff_r4;
  param_3[1] = unaff_r5;
  param_3[2] = unaff_r6;
  *(undefined4 **)(unaff_r6 + 0x10) = param_2;
  param_1[8] = (int)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ---- FUN_00200d0a @ 00200d0a ---- */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00200d0a(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  
  *(int *)param_1 = param_1;
  *(int *)(param_1 + 4) = unaff_r4 << 4;
  *(int *)(param_1 + 8) = param_4;
  *(undefined4 *)(param_1 + 0xc) = unaff_r5;
  *(undefined4 *)(param_1 + 0x10) = unaff_r6;
  *(undefined4 *)(param_1 + 0x14) = unaff_r7;
  *(int *)param_1 = param_1;
  DAT_0000013f = (char)*(undefined4 *)(param_4 + 0x10);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ---- paRampCtrlBLE_test @ 00201120 ---- */

/* WARNING: Control flow encountered bad instruction data */

void paRampCtrlBLE_test(void)

{
  uint uVar1;
  int unaff_r4;
  int unaff_r6;
  int unaff_r7;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (!in_ZR && in_NG == in_OV) {
    *(short *)(unaff_r4 + 10) = (short)DAT_00201500;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = (uint)(unaff_r7 + unaff_r6) >> 9;
  *(char *)(unaff_r4 + 1) = (char)uVar1;
  *(char *)(uVar1 + 1) = (char)unaff_r7;
  uVar1 = (uint)(unaff_r7 + unaff_r6) >> 0xe;
  *(undefined2 *)((uVar1 >> (uVar1 & 0x1f) | uVar1 << 0x20 - (uVar1 & 0x1f)) + 6) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ---- agcCtrl9BLE @ 00201184 ---- */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void agcCtrl9BLE(void)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  uint unaff_r7;
  undefined4 in_cr0;
  
  iVar3 = unaff_r7 * 0x80;
  coprocessor_store(0,in_cr0,0xffffffd3);
  *(undefined1 *)(unaff_r7 + 1) = 0;
  *(undefined1 *)(iVar3 + 1) = 0x40;
  _DAT_000000c8 = 6;
  puVar2 = (undefined1 *)(uint)_NMI;
  _DAT_000000c0 = unaff_r7 << 2;
  _DAT_000000c4 = iVar3;
  *puVar2 = 0xcc;
  *puVar2 = 0xcc;
  piVar1 = *(int **)((0U >> ((unaff_r7 & 3) << 6)) + 8);
  *piVar1 = unaff_r7 << 2;
  piVar1[1] = iVar3;
  piVar1[2] = 0;
  piVar1 = (int *)(unaff_r7 * 0x40000);
  *piVar1 = unaff_r7 << 6;
  piVar1[1] = 0;
  piVar1[2] = iVar3;
  piVar1[3] = 0;
  uRam00000002 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ---- lmulp_minConnIntervalsToListen @ 002015dc ---- */

/* WARNING: Control flow encountered bad instruction data */

void lmulp_minConnIntervalsToListen(void)

{
  code *pcVar1;
  int in_r3;
  undefined2 unaff_r6;
  
  *(undefined2 *)((in_r3 >> 3) + 0x12) = unaff_r6;
  if (in_r3 >> 3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xf6,0x2015f0);
    (*pcVar1)();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ---- FUN_002018a0 @ 002018a0 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002018a0(void)

{
  undefined *puVar1;
  
  func_0x00044b1a(DAT_00201960,DAT_00201964);
  FUN_00201b20();
  *PTR_enable_optimized_sfi_read_00201968 = 1;
  *PTR_bFwRssiActive_0020196c = 0;
  _DAT_00600214 = 0xf01;
  *(undefined4 *)PTR_paRampCtrlBLE_test_00201970 = 0x882f;
  *(undefined4 *)PTR_paRampCtrlBLE_00201974 = 0x882f;
  *(undefined4 *)PTR_pwrRampCtrlBLE_test_00201978 = 0x8214;
  *(undefined4 *)lesmp_info = 0x8214;
  *(undefined4 *)PTR_btrf_regfdBLE_00201980 = 0xc78;
  *(undefined4 *)PTR_btrf_reg86BLE_00201984 = 0x9555;
  _DAT_0032007c = _DAT_0032007c & 0xfffdffff;
  if ((_DAT_00390040 & 1) != 0) {
    func_0x00026f6e(0);
    _DAT_006000e0 = _DAT_006000e0 & 0xffffff7f;
    _DAT_00390040 = _DAT_00390040 & 0xfffffffc;
    func_0x00026dfa(0x32);
  }
  *PTR_enableSavingAssert_00201988 = 0;
  FUN_00200d0a();
  FUN_00201c58();
  *(undefined **)PTR_CFA_PostVSInitFunct_00201990 = PTR_s_create___0020198c;
  *(undefined4 *)PTR_idle_saveThreadxAvailMem_00201998 = DAT_00201994;
  *DAT_002019a0 = PTR_s__Check_successful_0020199c;
  *(undefined4 *)PTR_pmu_lpoCalibrationRestartStatus_002019a4 = 2;
  lmulp_minConnIntervalsToListen();
  puVar1 = PTR_virtualFunctions_002019ac;
  *(undefined **)(PTR_virtualFunctions_002019ac + 0x164) = PTR_s_uart_initialization___002019a8;
  *(undefined **)(puVar1 + 0x2c) = PTR_s_Notification_sent_to_smartphone_t_002019b0;
  *(undefined4 *)(puVar1 + 0x140) = DAT_002019b4;
  return;
}



/* ---- FUN_002019b8 @ 002019b8 ---- */

/* WARNING: Control flow encountered bad instruction data */

void FUN_002019b8(undefined4 param_1,undefined4 param_2,int *param_3,undefined2 param_4)

{
  int *piVar1;
  int *piVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  bool bVar3;
  
  bVar3 = SCARRY4(DAT_002019c8,0x80);
  piVar1 = (int *)(DAT_002019c8 + 0x80);
  piVar2 = DAT_002019c4;
  while( true ) {
    *(undefined2 *)(unaff_r6 + 6) = param_4;
    *piVar2 = (int)piVar1;
    piVar2[1] = unaff_r5;
    piVar2 = (int *)(unaff_r6 << 7);
    piVar1[4] = (int)piVar2;
    if ((int)piVar2 < 0 == bVar3) break;
    param_3 = (int *)((int)piVar1 << 9);
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    piVar1 = (int *)(unaff_r4 * 0x20);
    param_4 = 0xe0;
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    *piVar1 = unaff_r5;
    piVar1[1] = unaff_r6;
    piVar1 = piVar1 + 2;
  }
  *piVar1 = unaff_r5;
  piVar1[1] = unaff_r6;
  piVar1[2] = (int)(piVar1 + 2);
  piVar1[3] = (int)piVar2;
  piVar1[4] = unaff_r4;
  piVar1[5] = unaff_r5;
  piVar1[6] = unaff_r6;
  piVar1[7] = unaff_r7;
  *(int **)(unaff_r4 + 0x14) = piVar2;
  *param_3 = unaff_r4;
  param_3[1] = unaff_r5;
  param_3[2] = unaff_r6;
  *(int **)(unaff_r6 + 0x10) = piVar2;
  piVar1[6] = (int)piVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ---- FUN_002019cc @ 002019cc ---- */

/* WARNING: Control flow encountered bad instruction data */

void FUN_002019cc(undefined4 param_1,undefined4 param_2,int *param_3,undefined2 param_4)

{
  int *piVar1;
  int *piVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  bool bVar3;
  
  bVar3 = SCARRY4(DAT_002019dc,0x8a);
  piVar1 = (int *)(DAT_002019dc + 0x8a);
  piVar2 = DAT_002019d8;
  while( true ) {
    *(undefined2 *)(unaff_r6 + 6) = param_4;
    *piVar2 = (int)piVar1;
    piVar2[1] = unaff_r5;
    piVar2 = (int *)(unaff_r6 << 7);
    piVar1[4] = (int)piVar2;
    if ((int)piVar2 < 0 == bVar3) break;
    param_3 = (int *)((int)piVar1 << 9);
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    piVar1 = (int *)(unaff_r4 * 0x20);
    param_4 = 0xe0;
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    *piVar1 = unaff_r5;
    piVar1[1] = unaff_r6;
    piVar1 = piVar1 + 2;
  }
  *piVar1 = unaff_r5;
  piVar1[1] = unaff_r6;
  piVar1[2] = (int)(piVar1 + 2);
  piVar1[3] = (int)piVar2;
  piVar1[4] = unaff_r4;
  piVar1[5] = unaff_r5;
  piVar1[6] = unaff_r6;
  piVar1[7] = unaff_r7;
  *(int **)(unaff_r4 + 0x14) = piVar2;
  *param_3 = unaff_r4;
  param_3[1] = unaff_r5;
  param_3[2] = unaff_r6;
  *(int **)(unaff_r6 + 0x10) = piVar2;
  piVar1[6] = (int)piVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ---- FUN_002019e0 @ 002019e0 ---- */

/* WARNING: Control flow encountered bad instruction data */

void FUN_002019e0(undefined4 param_1,undefined4 param_2,int *param_3,undefined2 param_4)

{
  int *piVar1;
  int *piVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  char in_OV;
  
  piVar1 = (int *)(DAT_002019f0 + 0x25e);
  piVar2 = DAT_002019ec;
  while( true ) {
    *(undefined2 *)(unaff_r6 + 6) = param_4;
    *piVar2 = (int)piVar1;
    piVar2[1] = unaff_r5;
    piVar2 = (int *)(unaff_r6 << 7);
    piVar1[4] = (int)piVar2;
    if ((int)piVar2 < 0 == (bool)in_OV) break;
    param_3 = (int *)((int)piVar1 << 9);
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    piVar1 = (int *)(unaff_r4 * 0x20);
    param_4 = 0xe0;
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    *piVar1 = unaff_r5;
    piVar1[1] = unaff_r6;
    piVar1 = piVar1 + 2;
  }
  *piVar1 = unaff_r5;
  piVar1[1] = unaff_r6;
  piVar1[2] = (int)(piVar1 + 2);
  piVar1[3] = (int)piVar2;
  piVar1[4] = unaff_r4;
  piVar1[5] = unaff_r5;
  piVar1[6] = unaff_r6;
  piVar1[7] = unaff_r7;
  *(int **)(unaff_r4 + 0x14) = piVar2;
  *param_3 = unaff_r4;
  param_3[1] = unaff_r5;
  param_3[2] = unaff_r6;
  *(int **)(unaff_r6 + 0x10) = piVar2;
  piVar1[6] = (int)piVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ---- FUN_002019f4 @ 002019f4 ---- */

/* WARNING: Control flow encountered bad instruction data */

void FUN_002019f4(undefined4 param_1,undefined4 param_2,int *param_3,undefined2 param_4)

{
  int *piVar1;
  int *piVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  bool bVar3;
  
  bVar3 = SCARRY4(DAT_00201a04,0x4a);
  piVar1 = (int *)(DAT_00201a04 + 0x4a);
  piVar2 = DAT_00201a00;
  while( true ) {
    *(undefined2 *)(unaff_r6 + 6) = param_4;
    *piVar2 = (int)piVar1;
    piVar2[1] = unaff_r5;
    piVar2 = (int *)(unaff_r6 << 7);
    piVar1[4] = (int)piVar2;
    if ((int)piVar2 < 0 == bVar3) break;
    param_3 = (int *)((int)piVar1 << 9);
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    piVar1 = (int *)(unaff_r4 * 0x20);
    param_4 = 0xe0;
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    *piVar1 = unaff_r5;
    piVar1[1] = unaff_r6;
    piVar1 = piVar1 + 2;
  }
  *piVar1 = unaff_r5;
  piVar1[1] = unaff_r6;
  piVar1[2] = (int)(piVar1 + 2);
  piVar1[3] = (int)piVar2;
  piVar1[4] = unaff_r4;
  piVar1[5] = unaff_r5;
  piVar1[6] = unaff_r6;
  piVar1[7] = unaff_r7;
  *(int **)(unaff_r4 + 0x14) = piVar2;
  *param_3 = unaff_r4;
  param_3[1] = unaff_r5;
  param_3[2] = unaff_r6;
  *(int **)(unaff_r6 + 0x10) = piVar2;
  piVar1[6] = (int)piVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ---- FUN_00201a08 @ 00201a08 ---- */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00201a08(undefined4 param_1,undefined4 param_2,int *param_3,undefined2 param_4)

{
  int *piVar1;
  int *piVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  bool bVar3;
  
  bVar3 = SCARRY4(DAT_00201a64,0x5c);
  piVar1 = (int *)(DAT_00201a64 + 0x5c);
  piVar2 = DAT_00201a60;
  while( true ) {
    *(undefined2 *)(unaff_r6 + 6) = param_4;
    *piVar2 = (int)piVar1;
    piVar2[1] = unaff_r5;
    piVar2 = (int *)(unaff_r6 << 7);
    piVar1[4] = (int)piVar2;
    if ((int)piVar2 < 0 == bVar3) break;
    param_3 = (int *)((int)piVar1 << 9);
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    piVar1 = (int *)(unaff_r4 * 0x20);
    param_4 = 0xe0;
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    *piVar1 = unaff_r5;
    piVar1[1] = unaff_r6;
    piVar1 = piVar1 + 2;
  }
  *piVar1 = unaff_r5;
  piVar1[1] = unaff_r6;
  piVar1[2] = (int)(piVar1 + 2);
  piVar1[3] = (int)piVar2;
  piVar1[4] = unaff_r4;
  piVar1[5] = unaff_r5;
  piVar1[6] = unaff_r6;
  piVar1[7] = unaff_r7;
  *(int **)(unaff_r4 + 0x14) = piVar2;
  *param_3 = unaff_r4;
  param_3[1] = unaff_r5;
  param_3[2] = unaff_r6;
  *(int **)(unaff_r6 + 0x10) = piVar2;
  piVar1[6] = (int)piVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ---- FUN_00201a12 @ 00201a12 ---- */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00201a12(undefined4 param_1,undefined4 param_2,int *param_3,undefined2 param_4)

{
  int *piVar1;
  int *piVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  bool bVar3;
  
  bVar3 = SCARRY4(DAT_00201a6c,0x2e);
  piVar1 = (int *)(DAT_00201a6c + 0x2e);
  piVar2 = DAT_00201a68;
  while( true ) {
    *(undefined2 *)(unaff_r6 + 6) = param_4;
    *piVar2 = (int)piVar1;
    piVar2[1] = unaff_r5;
    piVar2 = (int *)(unaff_r6 << 7);
    piVar1[4] = (int)piVar2;
    if ((int)piVar2 < 0 == bVar3) break;
    param_3 = (int *)((int)piVar1 << 9);
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    piVar1 = (int *)(unaff_r4 * 0x20);
    param_4 = 0xe0;
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    *piVar1 = unaff_r5;
    piVar1[1] = unaff_r6;
    piVar1 = piVar1 + 2;
  }
  *piVar1 = unaff_r5;
  piVar1[1] = unaff_r6;
  piVar1[2] = (int)(piVar1 + 2);
  piVar1[3] = (int)piVar2;
  piVar1[4] = unaff_r4;
  piVar1[5] = unaff_r5;
  piVar1[6] = unaff_r6;
  piVar1[7] = unaff_r7;
  *(int **)(unaff_r4 + 0x14) = piVar2;
  *param_3 = unaff_r4;
  param_3[1] = unaff_r5;
  param_3[2] = unaff_r6;
  *(int **)(unaff_r6 + 0x10) = piVar2;
  piVar1[6] = (int)piVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ---- FUN_00201a1c @ 00201a1c ---- */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00201a1c(undefined4 param_1,undefined4 param_2,int *param_3,undefined2 param_4)

{
  int *piVar1;
  int *piVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  char in_OV;
  
  piVar1 = DAT_00201a74;
  piVar2 = DAT_00201a70;
  while( true ) {
    *(undefined2 *)(unaff_r6 + 6) = param_4;
    *piVar2 = (int)piVar1;
    piVar2[1] = unaff_r5;
    piVar2 = (int *)(unaff_r6 << 7);
    piVar1[4] = (int)piVar2;
    if ((int)piVar2 < 0 == (bool)in_OV) break;
    param_3 = (int *)((int)piVar1 << 9);
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    piVar1 = (int *)(unaff_r4 * 0x20);
    param_4 = 0xe0;
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    *piVar1 = unaff_r5;
    piVar1[1] = unaff_r6;
    piVar1 = piVar1 + 2;
  }
  *piVar1 = unaff_r5;
  piVar1[1] = unaff_r6;
  piVar1[2] = (int)(piVar1 + 2);
  piVar1[3] = (int)piVar2;
  piVar1[4] = unaff_r4;
  piVar1[5] = unaff_r5;
  piVar1[6] = unaff_r6;
  piVar1[7] = unaff_r7;
  *(int **)(unaff_r4 + 0x14) = piVar2;
  *param_3 = unaff_r4;
  param_3[1] = unaff_r5;
  param_3[2] = unaff_r6;
  *(int **)(unaff_r6 + 0x10) = piVar2;
  piVar1[6] = (int)piVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ---- FUN_00201a24 @ 00201a24 ---- */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00201a24(undefined4 param_1,undefined4 param_2,int *param_3,undefined2 param_4)

{
  int *piVar1;
  int *piVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  bool bVar3;
  
  bVar3 = SCARRY4(DAT_00201a7c,2);
  piVar1 = (int *)(DAT_00201a7c + 2);
  piVar2 = leatt_info;
  while( true ) {
    *(undefined2 *)(unaff_r6 + 6) = param_4;
    *piVar2 = (int)piVar1;
    piVar2[1] = unaff_r5;
    piVar2 = (int *)(unaff_r6 << 7);
    piVar1[4] = (int)piVar2;
    if ((int)piVar2 < 0 == bVar3) break;
    param_3 = (int *)((int)piVar1 << 9);
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    piVar1 = (int *)(unaff_r4 * 0x20);
    param_4 = 0xe0;
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    *piVar1 = unaff_r5;
    piVar1[1] = unaff_r6;
    piVar1 = piVar1 + 2;
  }
  *piVar1 = unaff_r5;
  piVar1[1] = unaff_r6;
  piVar1[2] = (int)(piVar1 + 2);
  piVar1[3] = (int)piVar2;
  piVar1[4] = unaff_r4;
  piVar1[5] = unaff_r5;
  piVar1[6] = unaff_r6;
  piVar1[7] = unaff_r7;
  *(int **)(unaff_r4 + 0x14) = piVar2;
  *param_3 = unaff_r4;
  param_3[1] = unaff_r5;
  param_3[2] = unaff_r6;
  *(int **)(unaff_r6 + 0x10) = piVar2;
  piVar1[6] = (int)piVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ---- FUN_00201a2e @ 00201a2e ---- */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00201a2e(undefined4 param_1,undefined4 param_2,int *param_3,undefined2 param_4)

{
  int *piVar1;
  int *piVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  char in_OV;
  
  piVar1 = legattdb_gattWriteCallback;
  piVar2 = DAT_00201a80;
  while( true ) {
    *(undefined2 *)(unaff_r6 + 6) = param_4;
    *piVar2 = (int)piVar1;
    piVar2[1] = unaff_r5;
    piVar2 = (int *)(unaff_r6 << 7);
    piVar1[4] = (int)piVar2;
    if ((int)piVar2 < 0 == (bool)in_OV) break;
    param_3 = (int *)((int)piVar1 << 9);
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    piVar1 = (int *)(unaff_r4 * 0x20);
    param_4 = 0xe0;
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    *piVar1 = unaff_r5;
    piVar1[1] = unaff_r6;
    piVar1 = piVar1 + 2;
  }
  *piVar1 = unaff_r5;
  piVar1[1] = unaff_r6;
  piVar1[2] = (int)(piVar1 + 2);
  piVar1[3] = (int)piVar2;
  piVar1[4] = unaff_r4;
  piVar1[5] = unaff_r5;
  piVar1[6] = unaff_r6;
  piVar1[7] = unaff_r7;
  *(int **)(unaff_r4 + 0x14) = piVar2;
  *param_3 = unaff_r4;
  param_3[1] = unaff_r5;
  param_3[2] = unaff_r6;
  *(int **)(unaff_r6 + 0x10) = piVar2;
  piVar1[6] = (int)piVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ---- FUN_00201a36 @ 00201a36 ---- */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00201a36(undefined4 param_1,undefined4 param_2,int *param_3,undefined2 param_4)

{
  int *piVar1;
  int *piVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  bool bVar3;
  
  bVar3 = SCARRY4(DAT_00201a8c,0x32);
  piVar1 = (int *)(DAT_00201a8c + 0x32);
  piVar2 = DAT_00201a88;
  while( true ) {
    *(undefined2 *)(unaff_r6 + 6) = param_4;
    *piVar2 = (int)piVar1;
    piVar2[1] = unaff_r5;
    piVar2 = (int *)(unaff_r6 << 7);
    piVar1[4] = (int)piVar2;
    if ((int)piVar2 < 0 == bVar3) break;
    param_3 = (int *)((int)piVar1 << 9);
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    piVar1 = (int *)(unaff_r4 * 0x20);
    param_4 = 0xe0;
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    *piVar1 = unaff_r5;
    piVar1[1] = unaff_r6;
    piVar1 = piVar1 + 2;
  }
  *piVar1 = unaff_r5;
  piVar1[1] = unaff_r6;
  piVar1[2] = (int)(piVar1 + 2);
  piVar1[3] = (int)piVar2;
  piVar1[4] = unaff_r4;
  piVar1[5] = unaff_r5;
  piVar1[6] = unaff_r6;
  piVar1[7] = unaff_r7;
  *(int **)(unaff_r4 + 0x14) = piVar2;
  *param_3 = unaff_r4;
  param_3[1] = unaff_r5;
  param_3[2] = unaff_r6;
  *(int **)(unaff_r6 + 0x10) = piVar2;
  piVar1[6] = (int)piVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ---- FUN_00201a40 @ 00201a40 ---- */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00201a40(undefined4 param_1,undefined4 param_2,int *param_3,undefined2 param_4)

{
  int *piVar1;
  int *piVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  bool bVar3;
  
  bVar3 = SCARRY4(DAT_00201a94,2);
  piVar1 = (int *)(DAT_00201a94 + 2);
  piVar2 = DAT_00201a90;
  while( true ) {
    *(undefined2 *)(unaff_r6 + 6) = param_4;
    *piVar2 = (int)piVar1;
    piVar2[1] = unaff_r5;
    piVar2 = (int *)(unaff_r6 << 7);
    piVar1[4] = (int)piVar2;
    if ((int)piVar2 < 0 == bVar3) break;
    param_3 = (int *)((int)piVar1 << 9);
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    piVar1 = (int *)(unaff_r4 * 0x20);
    param_4 = 0xe0;
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    *piVar1 = unaff_r5;
    piVar1[1] = unaff_r6;
    piVar1 = piVar1 + 2;
  }
  *piVar1 = unaff_r5;
  piVar1[1] = unaff_r6;
  piVar1[2] = (int)(piVar1 + 2);
  piVar1[3] = (int)piVar2;
  piVar1[4] = unaff_r4;
  piVar1[5] = unaff_r5;
  piVar1[6] = unaff_r6;
  piVar1[7] = unaff_r7;
  *(int **)(unaff_r4 + 0x14) = piVar2;
  *param_3 = unaff_r4;
  param_3[1] = unaff_r5;
  param_3[2] = unaff_r6;
  *(int **)(unaff_r6 + 0x10) = piVar2;
  piVar1[6] = (int)piVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ---- FUN_00201a4a @ 00201a4a ---- */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00201a4a(undefined4 param_1,undefined4 param_2,int *param_3,undefined2 param_4)

{
  int *piVar1;
  int *piVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  bool bVar3;
  
  bVar3 = SCARRY4(DAT_00201a9c,0x28);
  piVar1 = (int *)(DAT_00201a9c + 0x28);
  piVar2 = bleprofile_GPIO_config;
  while( true ) {
    *(undefined2 *)(unaff_r6 + 6) = param_4;
    *piVar2 = (int)piVar1;
    piVar2[1] = unaff_r5;
    piVar2 = (int *)(unaff_r6 << 7);
    piVar1[4] = (int)piVar2;
    if ((int)piVar2 < 0 == bVar3) break;
    param_3 = (int *)((int)piVar1 << 9);
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    piVar1 = (int *)(unaff_r4 * 0x20);
    param_4 = 0xe0;
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    *piVar1 = unaff_r5;
    piVar1[1] = unaff_r6;
    piVar1 = piVar1 + 2;
  }
  *piVar1 = unaff_r5;
  piVar1[1] = unaff_r6;
  piVar1[2] = (int)(piVar1 + 2);
  piVar1[3] = (int)piVar2;
  piVar1[4] = unaff_r4;
  piVar1[5] = unaff_r5;
  piVar1[6] = unaff_r6;
  piVar1[7] = unaff_r7;
  *(int **)(unaff_r4 + 0x14) = piVar2;
  *param_3 = unaff_r4;
  param_3[1] = unaff_r5;
  param_3[2] = unaff_r6;
  *(int **)(unaff_r6 + 0x10) = piVar2;
  piVar1[6] = (int)piVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ---- FUN_00201a54 @ 00201a54 ---- */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00201a54(undefined4 param_1,undefined4 param_2,int *param_3,undefined2 param_4)

{
  int *piVar1;
  int *piVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  bool bVar3;
  
  bVar3 = SCARRY4(DAT_00201aa4,2);
  piVar1 = (int *)(DAT_00201aa4 + 2);
  piVar2 = DAT_00201aa0;
  while( true ) {
    *(undefined2 *)(unaff_r6 + 6) = param_4;
    *piVar2 = (int)piVar1;
    piVar2[1] = unaff_r5;
    piVar2 = (int *)(unaff_r6 << 7);
    piVar1[4] = (int)piVar2;
    if ((int)piVar2 < 0 == bVar3) break;
    param_3 = (int *)((int)piVar1 << 9);
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    piVar1 = (int *)(unaff_r4 * 0x20);
    param_4 = 0xe0;
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    *piVar1 = unaff_r5;
    piVar1[1] = unaff_r6;
    piVar1 = piVar1 + 2;
  }
  *piVar1 = unaff_r5;
  piVar1[1] = unaff_r6;
  piVar1[2] = (int)(piVar1 + 2);
  piVar1[3] = (int)piVar2;
  piVar1[4] = unaff_r4;
  piVar1[5] = unaff_r5;
  piVar1[6] = unaff_r6;
  piVar1[7] = unaff_r7;
  *(int **)(unaff_r4 + 0x14) = piVar2;
  *param_3 = unaff_r4;
  param_3[1] = unaff_r5;
  param_3[2] = unaff_r6;
  *(int **)(unaff_r6 + 0x10) = piVar2;
  piVar1[6] = (int)piVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ---- FUN_00201aa8 @ 00201aa8 ---- */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00201aa8(undefined4 param_1,undefined4 param_2,int *param_3,undefined2 param_4)

{
  int *piVar1;
  int *piVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  char in_OV;
  
  piVar1 = DAT_00201ac8;
  piVar2 = DAT_00201ac4;
  while( true ) {
    *(undefined2 *)(unaff_r6 + 6) = param_4;
    *piVar2 = (int)piVar1;
    piVar2[1] = unaff_r5;
    piVar2 = (int *)(unaff_r6 << 7);
    piVar1[4] = (int)piVar2;
    if ((int)piVar2 < 0 == (bool)in_OV) break;
    param_3 = (int *)((int)piVar1 << 9);
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    piVar1 = (int *)(unaff_r4 * 0x20);
    param_4 = 0xe0;
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    *piVar1 = unaff_r5;
    piVar1[1] = unaff_r6;
    piVar1 = piVar1 + 2;
  }
  *piVar1 = unaff_r5;
  piVar1[1] = unaff_r6;
  piVar1[2] = (int)(piVar1 + 2);
  piVar1[3] = (int)piVar2;
  piVar1[4] = unaff_r4;
  piVar1[5] = unaff_r5;
  piVar1[6] = unaff_r6;
  piVar1[7] = unaff_r7;
  *(int **)(unaff_r4 + 0x14) = piVar2;
  *param_3 = unaff_r4;
  param_3[1] = unaff_r5;
  param_3[2] = unaff_r6;
  *(int **)(unaff_r6 + 0x10) = piVar2;
  piVar1[6] = (int)piVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ---- FUN_00201ab0 @ 00201ab0 ---- */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00201ab0(undefined4 param_1,undefined4 param_2,int *param_3,undefined2 param_4)

{
  int *piVar1;
  int *piVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  bool bVar3;
  
  bVar3 = SCARRY4(DAT_00201ad0,0x28);
  piVar1 = (int *)(DAT_00201ad0 + 0x28);
  piVar2 = DAT_00201acc;
  while( true ) {
    *(undefined2 *)(unaff_r6 + 6) = param_4;
    *piVar2 = (int)piVar1;
    piVar2[1] = unaff_r5;
    piVar2 = (int *)(unaff_r6 << 7);
    piVar1[4] = (int)piVar2;
    if ((int)piVar2 < 0 == bVar3) break;
    param_3 = (int *)((int)piVar1 << 9);
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    piVar1 = (int *)(unaff_r4 * 0x20);
    param_4 = 0xe0;
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    *piVar1 = unaff_r5;
    piVar1[1] = unaff_r6;
    piVar1 = piVar1 + 2;
  }
  *piVar1 = unaff_r5;
  piVar1[1] = unaff_r6;
  piVar1[2] = (int)(piVar1 + 2);
  piVar1[3] = (int)piVar2;
  piVar1[4] = unaff_r4;
  piVar1[5] = unaff_r5;
  piVar1[6] = unaff_r6;
  piVar1[7] = unaff_r7;
  *(int **)(unaff_r4 + 0x14) = piVar2;
  *param_3 = unaff_r4;
  param_3[1] = unaff_r5;
  param_3[2] = unaff_r6;
  *(int **)(unaff_r6 + 0x10) = piVar2;
  piVar1[6] = (int)piVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ---- FUN_00201aba @ 00201aba ---- */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00201aba(undefined4 param_1,undefined4 param_2,int *param_3,undefined2 param_4)

{
  int *piVar1;
  int *piVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  bool bVar3;
  
  bVar3 = SCARRY4(DAT_00201ad8,2);
  piVar1 = (int *)(DAT_00201ad8 + 2);
  piVar2 = DAT_00201ad4;
  while( true ) {
    *(undefined2 *)(unaff_r6 + 6) = param_4;
    *piVar2 = (int)piVar1;
    piVar2[1] = unaff_r5;
    piVar2 = (int *)(unaff_r6 << 7);
    piVar1[4] = (int)piVar2;
    if ((int)piVar2 < 0 == bVar3) break;
    param_3 = (int *)((int)piVar1 << 9);
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    piVar1 = (int *)(unaff_r4 * 0x20);
    param_4 = 0xe0;
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    *piVar1 = unaff_r5;
    piVar1[1] = unaff_r6;
    piVar1 = piVar1 + 2;
  }
  *piVar1 = unaff_r5;
  piVar1[1] = unaff_r6;
  piVar1[2] = (int)(piVar1 + 2);
  piVar1[3] = (int)piVar2;
  piVar1[4] = unaff_r4;
  piVar1[5] = unaff_r5;
  piVar1[6] = unaff_r6;
  piVar1[7] = unaff_r7;
  *(int **)(unaff_r4 + 0x14) = piVar2;
  *param_3 = unaff_r4;
  param_3[1] = unaff_r5;
  param_3[2] = unaff_r6;
  *(int **)(unaff_r6 + 0x10) = piVar2;
  piVar1[6] = (int)piVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ---- FUN_00201adc @ 00201adc ---- */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00201adc(undefined4 param_1,undefined4 param_2,int *param_3,undefined2 param_4)

{
  int *piVar1;
  int *piVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  char in_OV;
  
  piVar1 = DAT_00201afc;
  piVar2 = DAT_00201af8;
  while( true ) {
    *(undefined2 *)(unaff_r6 + 6) = param_4;
    *piVar2 = (int)piVar1;
    piVar2[1] = unaff_r5;
    piVar2 = (int *)(unaff_r6 << 7);
    piVar1[4] = (int)piVar2;
    if ((int)piVar2 < 0 == (bool)in_OV) break;
    param_3 = (int *)((int)piVar1 << 9);
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    piVar1 = (int *)(unaff_r4 * 0x20);
    param_4 = 0xe0;
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    *piVar1 = unaff_r5;
    piVar1[1] = unaff_r6;
    piVar1 = piVar1 + 2;
  }
  *piVar1 = unaff_r5;
  piVar1[1] = unaff_r6;
  piVar1[2] = (int)(piVar1 + 2);
  piVar1[3] = (int)piVar2;
  piVar1[4] = unaff_r4;
  piVar1[5] = unaff_r5;
  piVar1[6] = unaff_r6;
  piVar1[7] = unaff_r7;
  *(int **)(unaff_r4 + 0x14) = piVar2;
  *param_3 = unaff_r4;
  param_3[1] = unaff_r5;
  param_3[2] = unaff_r6;
  *(int **)(unaff_r6 + 0x10) = piVar2;
  piVar1[6] = (int)piVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ---- FUN_00201ae4 @ 00201ae4 ---- */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00201ae4(undefined4 param_1,undefined4 param_2,int *param_3,undefined2 param_4)

{
  int *piVar1;
  int *piVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  char in_OV;
  
  piVar1 = DAT_00201b04;
  piVar2 = DAT_00201b00;
  while( true ) {
    *(undefined2 *)(unaff_r6 + 6) = param_4;
    *piVar2 = (int)piVar1;
    piVar2[1] = unaff_r5;
    piVar2 = (int *)(unaff_r6 << 7);
    piVar1[4] = (int)piVar2;
    if ((int)piVar2 < 0 == (bool)in_OV) break;
    param_3 = (int *)((int)piVar1 << 9);
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    piVar1 = (int *)(unaff_r4 * 0x20);
    param_4 = 0xe0;
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    *piVar1 = unaff_r5;
    piVar1[1] = unaff_r6;
    piVar1 = piVar1 + 2;
  }
  *piVar1 = unaff_r5;
  piVar1[1] = unaff_r6;
  piVar1[2] = (int)(piVar1 + 2);
  piVar1[3] = (int)piVar2;
  piVar1[4] = unaff_r4;
  piVar1[5] = unaff_r5;
  piVar1[6] = unaff_r6;
  piVar1[7] = unaff_r7;
  *(int **)(unaff_r4 + 0x14) = piVar2;
  *param_3 = unaff_r4;
  param_3[1] = unaff_r5;
  param_3[2] = unaff_r6;
  *(int **)(unaff_r6 + 0x10) = piVar2;
  piVar1[6] = (int)piVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ---- FUN_00201aec @ 00201aec ---- */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00201aec(undefined4 param_1,undefined4 param_2,int *param_3,undefined2 param_4)

{
  int *piVar1;
  int *piVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  bool bVar3;
  
  bVar3 = SCARRY4(DAT_00201b0c,2);
  piVar1 = (int *)(DAT_00201b0c + 2);
  piVar2 = bleprofile_scanrsp_data;
  while( true ) {
    *(undefined2 *)(unaff_r6 + 6) = param_4;
    *piVar2 = (int)piVar1;
    piVar2[1] = unaff_r5;
    piVar2 = (int *)(unaff_r6 << 7);
    piVar1[4] = (int)piVar2;
    if ((int)piVar2 < 0 == bVar3) break;
    param_3 = (int *)((int)piVar1 << 9);
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    piVar1 = (int *)(unaff_r4 * 0x20);
    param_4 = 0xe0;
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    *piVar1 = unaff_r5;
    piVar1[1] = unaff_r6;
    piVar1 = piVar1 + 2;
  }
  *piVar1 = unaff_r5;
  piVar1[1] = unaff_r6;
  piVar1[2] = (int)(piVar1 + 2);
  piVar1[3] = (int)piVar2;
  piVar1[4] = unaff_r4;
  piVar1[5] = unaff_r5;
  piVar1[6] = unaff_r6;
  piVar1[7] = unaff_r7;
  *(int **)(unaff_r4 + 0x14) = piVar2;
  *param_3 = unaff_r4;
  param_3[1] = unaff_r5;
  param_3[2] = unaff_r6;
  *(int **)(unaff_r6 + 0x10) = piVar2;
  piVar1[6] = (int)piVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ---- FUN_00201b10 @ 00201b10 ---- */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00201b10(undefined4 param_1,undefined4 param_2,int *param_3,undefined2 param_4)

{
  int *piVar1;
  int *piVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  char in_OV;
  
  piVar1 = DAT_00201b1c;
  piVar2 = DAT_00201b18;
  while( true ) {
    *(undefined2 *)(unaff_r6 + 6) = param_4;
    *piVar2 = (int)piVar1;
    piVar2[1] = unaff_r5;
    piVar2 = (int *)(unaff_r6 << 7);
    piVar1[4] = (int)piVar2;
    if ((int)piVar2 < 0 == (bool)in_OV) break;
    param_3 = (int *)((int)piVar1 << 9);
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    piVar1 = (int *)(unaff_r4 * 0x20);
    param_4 = 0xe0;
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    *piVar1 = unaff_r5;
    piVar1[1] = unaff_r6;
    piVar1 = piVar1 + 2;
  }
  *piVar1 = unaff_r5;
  piVar1[1] = unaff_r6;
  piVar1[2] = (int)(piVar1 + 2);
  piVar1[3] = (int)piVar2;
  piVar1[4] = unaff_r4;
  piVar1[5] = unaff_r5;
  piVar1[6] = unaff_r6;
  piVar1[7] = unaff_r7;
  *(int **)(unaff_r4 + 0x14) = piVar2;
  *param_3 = unaff_r4;
  param_3[1] = unaff_r5;
  param_3[2] = unaff_r6;
  *(int **)(unaff_r6 + 0x10) = piVar2;
  piVar1[6] = (int)piVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ---- FUN_00201b20 @ 00201b20 ---- */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00201b20(void)

{
  char cVar1;
  
  cVar1 = FUN_00201b46();
  *DAT_00201bc4 = cVar1;
  if ((cVar1 == '\x01') && (*DAT_00201bc8 >> 0x18 != 1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



/* ---- FUN_00201b46 @ 00201b46 ---- */

undefined4 FUN_00201b46(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = 0x100;
  iVar2 = 0x100;
  uVar1 = func_0x0001b7dc(1,0xf);
  func_0x0001b698(1,0xf,0x400,0);
  do {
    bVar4 = iVar2 != 0;
    iVar2 = iVar2 + -1;
  } while (bVar4);
  iVar2 = func_0x0001b8e6(1,0xf);
  func_0x0001b698(1,0xf,uVar1,0);
  if (iVar2 == 0) {
    uVar1 = func_0x0001b7dc(1,0xe);
    func_0x0001b698(1,0xe,0x400,0);
    do {
      bVar4 = iVar3 != 0;
      iVar3 = iVar3 + -1;
    } while (bVar4);
    iVar2 = func_0x0001b8e6(1,0xe);
    func_0x0001b698(1,0xe,uVar1,0);
    if (iVar2 == 0) {
      uVar1 = 2;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ---- FUN_00201bcc @ 00201bcc ---- */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00201bcc(undefined4 param_1,undefined4 param_2,int *param_3,undefined2 param_4)

{
  int *piVar1;
  int *piVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  bool bVar3;
  
  bVar3 = SCARRY4(DAT_00201be4,0x14);
  piVar1 = (int *)(DAT_00201be4 + 0x14);
  piVar2 = DAT_00201be0;
  while( true ) {
    *(undefined2 *)(unaff_r6 + 6) = param_4;
    *piVar2 = (int)piVar1;
    piVar2[1] = unaff_r5;
    piVar2 = (int *)(unaff_r6 << 7);
    piVar1[4] = (int)piVar2;
    if ((int)piVar2 < 0 == bVar3) break;
    param_3 = (int *)((int)piVar1 << 9);
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    piVar1 = (int *)(unaff_r4 * 0x20);
    param_4 = 0xe0;
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    *piVar1 = unaff_r5;
    piVar1[1] = unaff_r6;
    piVar1 = piVar1 + 2;
  }
  *piVar1 = unaff_r5;
  piVar1[1] = unaff_r6;
  piVar1[2] = (int)(piVar1 + 2);
  piVar1[3] = (int)piVar2;
  piVar1[4] = unaff_r4;
  piVar1[5] = unaff_r5;
  piVar1[6] = unaff_r6;
  piVar1[7] = unaff_r7;
  *(int **)(unaff_r4 + 0x14) = piVar2;
  *param_3 = unaff_r4;
  param_3[1] = unaff_r5;
  param_3[2] = unaff_r6;
  *(int **)(unaff_r6 + 0x10) = piVar2;
  piVar1[6] = (int)piVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ---- FUN_00201bd6 @ 00201bd6 ---- */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00201bd6(undefined4 param_1,undefined4 param_2,int *param_3,undefined2 param_4)

{
  int *piVar1;
  int *piVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  bool bVar3;
  
  bVar3 = SCARRY4(DAT_00201bec,0x70);
  piVar1 = (int *)(DAT_00201bec + 0x70);
  piVar2 = DAT_00201be8;
  while( true ) {
    *(undefined2 *)(unaff_r6 + 6) = param_4;
    *piVar2 = (int)piVar1;
    piVar2[1] = unaff_r5;
    piVar2 = (int *)(unaff_r6 << 7);
    piVar1[4] = (int)piVar2;
    if ((int)piVar2 < 0 == bVar3) break;
    param_3 = (int *)((int)piVar1 << 9);
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    piVar1 = (int *)(unaff_r4 * 0x20);
    param_4 = 0xe0;
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    *piVar1 = unaff_r5;
    piVar1[1] = unaff_r6;
    piVar1 = piVar1 + 2;
  }
  *piVar1 = unaff_r5;
  piVar1[1] = unaff_r6;
  piVar1[2] = (int)(piVar1 + 2);
  piVar1[3] = (int)piVar2;
  piVar1[4] = unaff_r4;
  piVar1[5] = unaff_r5;
  piVar1[6] = unaff_r6;
  piVar1[7] = unaff_r7;
  *(int **)(unaff_r4 + 0x14) = piVar2;
  *param_3 = unaff_r4;
  param_3[1] = unaff_r5;
  param_3[2] = unaff_r6;
  *(int **)(unaff_r6 + 0x10) = piVar2;
  piVar1[6] = (int)piVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ---- FUN_00201bf0 @ 00201bf0 ---- */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00201bf0(undefined4 param_1,undefined4 param_2,int *param_3,undefined2 param_4)

{
  int *piVar1;
  int *piVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  char in_OV;
  
  piVar1 = DAT_00201c18;
  piVar2 = adcState;
  while( true ) {
    *(undefined2 *)(unaff_r6 + 6) = param_4;
    *piVar2 = (int)piVar1;
    piVar2[1] = unaff_r5;
    piVar2 = (int *)(unaff_r6 << 7);
    piVar1[4] = (int)piVar2;
    if ((int)piVar2 < 0 == (bool)in_OV) break;
    param_3 = (int *)((int)piVar1 << 9);
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    piVar1 = (int *)(unaff_r4 * 0x20);
    param_4 = 0xe0;
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    *piVar1 = unaff_r5;
    piVar1[1] = unaff_r6;
    piVar1 = piVar1 + 2;
  }
  *piVar1 = unaff_r5;
  piVar1[1] = unaff_r6;
  piVar1[2] = (int)(piVar1 + 2);
  piVar1[3] = (int)piVar2;
  piVar1[4] = unaff_r4;
  piVar1[5] = unaff_r5;
  piVar1[6] = unaff_r6;
  piVar1[7] = unaff_r7;
  *(int **)(unaff_r4 + 0x14) = piVar2;
  *param_3 = unaff_r4;
  param_3[1] = unaff_r5;
  param_3[2] = unaff_r6;
  *(int **)(unaff_r6 + 0x10) = piVar2;
  piVar1[6] = (int)piVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ---- FUN_00201bf8 @ 00201bf8 ---- */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00201bf8(undefined4 param_1,undefined4 param_2,int *param_3,undefined2 param_4)

{
  int *piVar1;
  int *piVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  char in_OV;
  
  piVar1 = DAT_00201c20;
  piVar2 = DAT_00201c1c;
  while( true ) {
    *(undefined2 *)(unaff_r6 + 6) = param_4;
    *piVar2 = (int)piVar1;
    piVar2[1] = unaff_r5;
    piVar2 = (int *)(unaff_r6 << 7);
    piVar1[4] = (int)piVar2;
    if ((int)piVar2 < 0 == (bool)in_OV) break;
    param_3 = (int *)((int)piVar1 << 9);
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    piVar1 = (int *)(unaff_r4 * 0x20);
    param_4 = 0xe0;
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    *piVar1 = unaff_r5;
    piVar1[1] = unaff_r6;
    piVar1 = piVar1 + 2;
  }
  *piVar1 = unaff_r5;
  piVar1[1] = unaff_r6;
  piVar1[2] = (int)(piVar1 + 2);
  piVar1[3] = (int)piVar2;
  piVar1[4] = unaff_r4;
  piVar1[5] = unaff_r5;
  piVar1[6] = unaff_r6;
  piVar1[7] = unaff_r7;
  *(int **)(unaff_r4 + 0x14) = piVar2;
  *param_3 = unaff_r4;
  param_3[1] = unaff_r5;
  param_3[2] = unaff_r6;
  *(int **)(unaff_r6 + 0x10) = piVar2;
  piVar1[6] = (int)piVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ---- FUN_00201c00 @ 00201c00 ---- */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00201c00(undefined4 param_1,undefined4 param_2,int *param_3,undefined2 param_4)

{
  int *piVar1;
  int *piVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  char in_OV;
  
  piVar1 = DAT_00201c28;
  piVar2 = CONFIG_vsInfo;
  while( true ) {
    *(undefined2 *)(unaff_r6 + 6) = param_4;
    *piVar2 = (int)piVar1;
    piVar2[1] = unaff_r5;
    piVar2 = (int *)(unaff_r6 << 7);
    piVar1[4] = (int)piVar2;
    if ((int)piVar2 < 0 == (bool)in_OV) break;
    param_3 = (int *)((int)piVar1 << 9);
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    piVar1 = (int *)(unaff_r4 * 0x20);
    param_4 = 0xe0;
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    *piVar1 = unaff_r5;
    piVar1[1] = unaff_r6;
    piVar1 = piVar1 + 2;
  }
  *piVar1 = unaff_r5;
  piVar1[1] = unaff_r6;
  piVar1[2] = (int)(piVar1 + 2);
  piVar1[3] = (int)piVar2;
  piVar1[4] = unaff_r4;
  piVar1[5] = unaff_r5;
  piVar1[6] = unaff_r6;
  piVar1[7] = unaff_r7;
  *(int **)(unaff_r4 + 0x14) = piVar2;
  *param_3 = unaff_r4;
  param_3[1] = unaff_r5;
  param_3[2] = unaff_r6;
  *(int **)(unaff_r6 + 0x10) = piVar2;
  piVar1[6] = (int)piVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ---- FUN_00201c08 @ 00201c08 ---- */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00201c08(undefined4 param_1,undefined4 param_2,int *param_3,undefined2 param_4)

{
  int *piVar1;
  int *piVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  bool bVar3;
  
  bVar3 = SCARRY4(DAT_00201c30,0x48);
  piVar1 = (int *)(DAT_00201c30 + 0x48);
  piVar2 = DAT_00201c2c;
  while( true ) {
    *(undefined2 *)(unaff_r6 + 6) = param_4;
    *piVar2 = (int)piVar1;
    piVar2[1] = unaff_r5;
    piVar2 = (int *)(unaff_r6 << 7);
    piVar1[4] = (int)piVar2;
    if ((int)piVar2 < 0 == bVar3) break;
    param_3 = (int *)((int)piVar1 << 9);
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    piVar1 = (int *)(unaff_r4 * 0x20);
    param_4 = 0xe0;
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    *piVar1 = unaff_r5;
    piVar1[1] = unaff_r6;
    piVar1 = piVar1 + 2;
  }
  *piVar1 = unaff_r5;
  piVar1[1] = unaff_r6;
  piVar1[2] = (int)(piVar1 + 2);
  piVar1[3] = (int)piVar2;
  piVar1[4] = unaff_r4;
  piVar1[5] = unaff_r5;
  piVar1[6] = unaff_r6;
  piVar1[7] = unaff_r7;
  *(int **)(unaff_r4 + 0x14) = piVar2;
  *param_3 = unaff_r4;
  param_3[1] = unaff_r5;
  param_3[2] = unaff_r6;
  *(int **)(unaff_r6 + 0x10) = piVar2;
  piVar1[6] = (int)piVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ---- FUN_00201c34 @ 00201c34 ---- */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00201c34(undefined4 param_1,undefined4 param_2,int *param_3,undefined2 param_4)

{
  int *piVar1;
  int *piVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  bool bVar3;
  
  bVar3 = SCARRY4(DAT_00201c44,2);
  piVar1 = (int *)(DAT_00201c44 + 2);
  piVar2 = DAT_00201c40;
  while( true ) {
    *(undefined2 *)(unaff_r6 + 6) = param_4;
    *piVar2 = (int)piVar1;
    piVar2[1] = unaff_r5;
    piVar2 = (int *)(unaff_r6 << 7);
    piVar1[4] = (int)piVar2;
    if ((int)piVar2 < 0 == bVar3) break;
    param_3 = (int *)((int)piVar1 << 9);
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    piVar1 = (int *)(unaff_r4 * 0x20);
    param_4 = 0xe0;
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    *piVar1 = unaff_r5;
    piVar1[1] = unaff_r6;
    piVar1 = piVar1 + 2;
  }
  *piVar1 = unaff_r5;
  piVar1[1] = unaff_r6;
  piVar1[2] = (int)(piVar1 + 2);
  piVar1[3] = (int)piVar2;
  piVar1[4] = unaff_r4;
  piVar1[5] = unaff_r5;
  piVar1[6] = unaff_r6;
  piVar1[7] = unaff_r7;
  *(int **)(unaff_r4 + 0x14) = piVar2;
  *param_3 = unaff_r4;
  param_3[1] = unaff_r5;
  param_3[2] = unaff_r6;
  *(int **)(unaff_r6 + 0x10) = piVar2;
  piVar1[6] = (int)piVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ---- FUN_00201c58 @ 00201c58 ---- */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00201c58(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  char in_OV;
  
  FUN_002019b8();
  FUN_002019cc();
  FUN_002019e0();
  FUN_002019f4();
  FUN_00201a08();
  FUN_00201a12();
  FUN_00201a1c();
  FUN_00201a24();
  FUN_00201a2e();
  FUN_00201a36();
  FUN_00201a40();
  FUN_00201a4a();
  FUN_00201a54();
  FUN_00201aa8();
  FUN_00201ab0();
  FUN_00201aba();
  FUN_00201adc();
  FUN_00201ae4();
  FUN_00201aec();
  FUN_00201b10();
  FUN_00201bcc();
  FUN_00201bd6();
  FUN_00201bf0();
  FUN_00201bf8();
  FUN_00201c00();
  FUN_00201c08();
  FUN_00201c34();
  piVar1 = DAT_00201c54;
  piVar2 = DAT_00201c50;
  while( true ) {
    *(short *)(unaff_r6 + 6) = (short)param_4;
    *piVar2 = (int)piVar1;
    piVar2[1] = unaff_r5;
    piVar2 = (int *)(unaff_r6 << 7);
    piVar1[4] = (int)piVar2;
    if ((int)piVar2 < 0 == (bool)in_OV) break;
    param_3 = (int *)((int)piVar1 << 9);
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    piVar1 = (int *)(unaff_r4 * 0x20);
    param_4 = 0xe0;
    *(short *)(unaff_r6 + 6) = (short)unaff_r4;
    *piVar1 = unaff_r5;
    piVar1[1] = unaff_r6;
    piVar1 = piVar1 + 2;
  }
  *piVar1 = unaff_r5;
  piVar1[1] = unaff_r6;
  piVar1[2] = (int)(piVar1 + 2);
  piVar1[3] = (int)piVar2;
  piVar1[4] = unaff_r4;
  piVar1[5] = unaff_r5;
  piVar1[6] = unaff_r6;
  piVar1[7] = unaff_r7;
  *(int **)(unaff_r4 + 0x14) = piVar2;
  *param_3 = unaff_r4;
  param_3[1] = unaff_r5;
  param_3[2] = unaff_r6;
  *(int **)(unaff_r6 + 0x10) = piVar2;
  piVar1[6] = (int)piVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ---- FUN_002024a6 @ 002024a6 ---- */

/* WARNING: Control flow encountered bad instruction data */

void FUN_002024a6(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ---- FUN_00202518 @ 00202518 ---- */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00202518(void)

{
  undefined2 unaff_r5;
  int unaff_r6;
  
  *(undefined2 *)(unaff_r6 + 0x36) = unaff_r5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ---- FUN_00202638 @ 00202638 ---- */

/* WARNING: Removing unreachable block (ram,0x00202046) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00202638(void)

{
  uint unaff_r4;
  uint unaff_r6;
  
  *(short *)(unaff_r6 + 6) = (short)unaff_r4;
  _DAT_00000076 = 0x76;
  return CONCAT44(unaff_r4 >> 0xc,unaff_r6 >> 0x13);
}



/* ---- FUN_00202db2 @ 00202db2 ---- */

undefined8 FUN_00202db2(undefined4 param_1,uint param_2)

{
  uint unaff_r4;
  int unaff_r6;
  
  *(short *)((unaff_r6 >> 0x17) + 6) = (short)unaff_r4;
  software_interrupt(0x42);
  *(short *)(unaff_r4 + 0x118) = (short)(param_2 >> 1);
  return CONCAT44(param_1,(int)(unaff_r4 >> 0xc) >> 1);
}



/* ---- FUN_00202e76 @ 00202e76 ---- */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00202e76(void)

{
  undefined2 in_r3;
  int unaff_r4;
  
  *(undefined2 *)(unaff_r4 + 0x20) = in_r3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ---- FUN_00202f64 @ 00202f64 ---- */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00202f64(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ---- FUN_00203374 @ 00203374 ---- */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00203374(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  int unaff_r7;
  
  *(undefined4 *)(unaff_r7 + 0x34) = 0xf8;
  *(undefined1 *)(unaff_r7 + 2) = param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ---- FUN_002034e0 @ 002034e0 ---- */

/* WARNING: Control flow encountered bad instruction data */

void FUN_002034e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ---- FUN_00203654 @ 00203654 ---- */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00203654(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ---- FUN_00203662 @ 00203662 ---- */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00203662(undefined4 param_1,undefined4 param_2,int param_3)

{
  int unaff_r4;
  undefined4 unaff_r5;
  int unaff_r7;
  
  do {
    unaff_r4 = unaff_r4 + -0xf8;
  } while (!SBORROW4(param_3 << 0x1b,0x7a));
  _DAT_20000014 = unaff_r7 << 3;
  _DAT_20000008 = (undefined1 *)(unaff_r4 * 0x1000000);
  _DAT_20000010 = (uint)*(ushort *)(unaff_r7 + 0x12);
  _DAT_20000000 = 0x19;
  uRam00000002 = 0;
  _DAT_20000004 = param_3;
  _DAT_2000000c = unaff_r5;
  *_DAT_20000008 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ---- FUN_002039bc @ 002039bc ---- */

/* WARNING: Control flow encountered bad instruction data */

void FUN_002039bc(char param_1)

{
  uint uVar1;
  char unaff_r5;
  byte bVar2;
  
  bVar2 = param_1 + -4 + unaff_r5;
  uVar1 = (uint)&stack0x000003bc >> ((uint)&stack0x000003bc & 0xff);
  *(byte *)(bVar2 + 0x1b) = bVar2;
  *(short *)(uVar1 * 0x20000 + 6) = (short)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



