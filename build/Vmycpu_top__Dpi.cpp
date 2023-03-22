// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
// Verilator compiles this file in when DPI functions are used.
// If you have multiple Verilated designs with the same DPI exported
// function names, you will get multiple definition link errors from here.
// This is an unfortunate result of the DPI specification.
// To solve this, either
//    1. Call Vmycpu_top::{export_function} instead,
//       and do not even bother to compile this file
// or 2. Compile all __Dpi.cpp files in the same compiler run,
//       and #ifdefs already inserted here will sort everything out.

#include "Vmycpu_top__Dpi.h"
#include "Vmycpu_top.h"

#ifndef VL_DPIDECL_commit0_
#define VL_DPIDECL_commit0_
svBit commit0() {
    // DPI export at /home/hgh/cpu/cpuref/mycpu/core/Main//PrimaryBranchAmend.v:125:18
    return Vmycpu_top::commit0();
}
#endif

#ifndef VL_DPIDECL_commit1_
#define VL_DPIDECL_commit1_
svBit commit1() {
    // DPI export at /home/hgh/cpu/cpuref/mycpu/core/Main//WriteBack.v:215:18
    return Vmycpu_top::commit1();
}
#endif

#ifndef VL_DPIDECL_commitPC0_
#define VL_DPIDECL_commitPC0_
int commitPC0() {
    // DPI export at /home/hgh/cpu/cpuref/mycpu/core/Main//PrimaryBranchAmend.v:129:18
    return Vmycpu_top::commitPC0();
}
#endif

#ifndef VL_DPIDECL_commitPC1_
#define VL_DPIDECL_commitPC1_
int commitPC1() {
    // DPI export at /home/hgh/cpu/cpuref/mycpu/core/Main//WriteBack.v:220:18
    return Vmycpu_top::commitPC1();
}
#endif

#ifndef VL_DPIDECL_commitWDATA0_
#define VL_DPIDECL_commitWDATA0_
int commitWDATA0() {
    // DPI export at /home/hgh/cpu/cpuref/mycpu/core/Main//PrimaryBranchAmend.v:143:18
    return Vmycpu_top::commitWDATA0();
}
#endif

#ifndef VL_DPIDECL_commitWDATA1_
#define VL_DPIDECL_commitWDATA1_
int commitWDATA1() {
    // DPI export at /home/hgh/cpu/cpuref/mycpu/core/Main//WriteBack.v:235:18
    return Vmycpu_top::commitWDATA1();
}
#endif

#ifndef VL_DPIDECL_commitWEN0_
#define VL_DPIDECL_commitWEN0_
svBitVecVal commitWEN0() {
    // DPI export at /home/hgh/cpu/cpuref/mycpu/core/Main//PrimaryBranchAmend.v:133:23
    return Vmycpu_top::commitWEN0();
}
#endif

#ifndef VL_DPIDECL_commitWEN1_
#define VL_DPIDECL_commitWEN1_
svBitVecVal commitWEN1() {
    // DPI export at /home/hgh/cpu/cpuref/mycpu/core/Main//WriteBack.v:225:23
    return Vmycpu_top::commitWEN1();
}
#endif

#ifndef VL_DPIDECL_commitWNUM0_
#define VL_DPIDECL_commitWNUM0_
svBitVecVal commitWNUM0() {
    // DPI export at /home/hgh/cpu/cpuref/mycpu/core/Main//PrimaryBranchAmend.v:138:23
    return Vmycpu_top::commitWNUM0();
}
#endif

#ifndef VL_DPIDECL_commitWNUM1_
#define VL_DPIDECL_commitWNUM1_
svBitVecVal commitWNUM1() {
    // DPI export at /home/hgh/cpu/cpuref/mycpu/core/Main//WriteBack.v:230:23
    return Vmycpu_top::commitWNUM1();
}
#endif

#ifndef VL_DPIDECL_cp0_change_
#define VL_DPIDECL_cp0_change_
svBit cp0_change() {
    // DPI export at /home/hgh/cpu/cpuref/mycpu/core/Main//PrimaryExceptionProcessor.v:477:18
    return Vmycpu_top::cp0_change();
}
#endif

#ifndef VL_DPIDECL_cp0_change_pc_
#define VL_DPIDECL_cp0_change_pc_
int cp0_change_pc() {
    // DPI export at /home/hgh/cpu/cpuref/mycpu/core/Main//PrimaryExceptionProcessor.v:473:18
    return Vmycpu_top::cp0_change_pc();
}
#endif

#ifndef VL_DPIDECL_get_cp0_value_
#define VL_DPIDECL_get_cp0_value_
int get_cp0_value(char pos) {
    // DPI export at /home/hgh/cpu/cpuref/mycpu/core/Main//PrimaryExceptionProcessor.v:481:18
    return Vmycpu_top::get_cp0_value(pos);
}
#endif

#ifndef VL_DPIDECL_get_regfile_
#define VL_DPIDECL_get_regfile_
int get_regfile(char num) {
    // DPI export at /home/hgh/cpu/cpuref/mycpu/core/Main/components/ID//RegFile.v:115:18
    return Vmycpu_top::get_regfile(num);
}
#endif

#ifndef VL_DPIDECL_is_interrupt_
#define VL_DPIDECL_is_interrupt_
svBit is_interrupt() {
    // DPI export at /home/hgh/cpu/cpuref/mycpu/core/Main//WriteBack.v:240:18
    return Vmycpu_top::is_interrupt();
}
#endif

