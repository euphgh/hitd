// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VMYCPU_TOP__DPI_H_
#define VERILATED_VMYCPU_TOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI EXPORTS
    // DPI export at /home/hgh/cpu/cpuref/mycpu/core/Main//PrimaryBranchAmend.v:125:18
    extern svBit commit0();
    // DPI export at /home/hgh/cpu/cpuref/mycpu/core/Main//WriteBack.v:215:18
    extern svBit commit1();
    // DPI export at /home/hgh/cpu/cpuref/mycpu/core/Main//PrimaryBranchAmend.v:129:18
    extern int commitPC0();
    // DPI export at /home/hgh/cpu/cpuref/mycpu/core/Main//WriteBack.v:220:18
    extern int commitPC1();
    // DPI export at /home/hgh/cpu/cpuref/mycpu/core/Main//PrimaryBranchAmend.v:143:18
    extern int commitWDATA0();
    // DPI export at /home/hgh/cpu/cpuref/mycpu/core/Main//WriteBack.v:235:18
    extern int commitWDATA1();
    // DPI export at /home/hgh/cpu/cpuref/mycpu/core/Main//PrimaryBranchAmend.v:133:23
    extern svBitVecVal commitWEN0();
    // DPI export at /home/hgh/cpu/cpuref/mycpu/core/Main//WriteBack.v:225:23
    extern svBitVecVal commitWEN1();
    // DPI export at /home/hgh/cpu/cpuref/mycpu/core/Main//PrimaryBranchAmend.v:138:23
    extern svBitVecVal commitWNUM0();
    // DPI export at /home/hgh/cpu/cpuref/mycpu/core/Main//WriteBack.v:230:23
    extern svBitVecVal commitWNUM1();
    // DPI export at /home/hgh/cpu/cpuref/mycpu/core/Main//PrimaryExceptionProcessor.v:477:18
    extern svBit cp0_change();
    // DPI export at /home/hgh/cpu/cpuref/mycpu/core/Main//PrimaryExceptionProcessor.v:473:18
    extern int cp0_change_pc();
    // DPI export at /home/hgh/cpu/cpuref/mycpu/core/Main//PrimaryExceptionProcessor.v:481:18
    extern int get_cp0_value(char pos);
    // DPI export at /home/hgh/cpu/cpuref/mycpu/core/Main/components/ID//RegFile.v:115:18
    extern int get_regfile(char num);
    // DPI export at /home/hgh/cpu/cpuref/mycpu/core/Main//WriteBack.v:240:18
    extern svBit is_interrupt();

#ifdef __cplusplus
}
#endif

#endif  // guard
