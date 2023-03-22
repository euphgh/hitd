// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "Vmycpu_top.h"
#include "Vmycpu_top__Syms.h"
#include "verilated_dpi.h"


int Vmycpu_top::get_regfile(char num) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root::get_regfile\n"); );
    // Init
    CData/*7:0*/ num__Vcvt;
    num__Vcvt = 0;
    IData/*31:0*/ get_regfile__Vfuncrtn__Vcvt;
    get_regfile__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_regfile");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vmycpu_top__Vcb_get_regfile_t __Vcb = (Vmycpu_top__Vcb_get_regfile_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    num__Vcvt = (0xffU & num);
    (*__Vcb)((Vmycpu_top__Syms*)(__Vscopep->symsp()), num__Vcvt, get_regfile__Vfuncrtn__Vcvt);
    int get_regfile__Vfuncrtn;
    for (size_t get_regfile__Vfuncrtn__Vidx = 0; get_regfile__Vfuncrtn__Vidx < 1; ++get_regfile__Vfuncrtn__Vidx) get_regfile__Vfuncrtn = get_regfile__Vfuncrtn__Vcvt;
    return get_regfile__Vfuncrtn;
}

svBit Vmycpu_top::commit1() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root::commit1\n"); );
    // Init
    CData/*0:0*/ commit1__Vfuncrtn__Vcvt;
    commit1__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("commit1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vmycpu_top__Vcb_commit1_t __Vcb = (Vmycpu_top__Vcb_commit1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vmycpu_top__Syms*)(__Vscopep->symsp()), commit1__Vfuncrtn__Vcvt);
    svBit commit1__Vfuncrtn;
    for (size_t commit1__Vfuncrtn__Vidx = 0; commit1__Vfuncrtn__Vidx < 1; ++commit1__Vfuncrtn__Vidx) commit1__Vfuncrtn = commit1__Vfuncrtn__Vcvt;
    return commit1__Vfuncrtn;
}

int Vmycpu_top::commitPC1() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root::commitPC1\n"); );
    // Init
    IData/*31:0*/ commitPC1__Vfuncrtn__Vcvt;
    commitPC1__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("commitPC1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vmycpu_top__Vcb_commitPC1_t __Vcb = (Vmycpu_top__Vcb_commitPC1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vmycpu_top__Syms*)(__Vscopep->symsp()), commitPC1__Vfuncrtn__Vcvt);
    int commitPC1__Vfuncrtn;
    for (size_t commitPC1__Vfuncrtn__Vidx = 0; commitPC1__Vfuncrtn__Vidx < 1; ++commitPC1__Vfuncrtn__Vidx) commitPC1__Vfuncrtn = commitPC1__Vfuncrtn__Vcvt;
    return commitPC1__Vfuncrtn;
}

svBitVecVal Vmycpu_top::commitWEN1() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root::commitWEN1\n"); );
    // Init
    CData/*3:0*/ commitWEN1__Vfuncrtn__Vcvt;
    commitWEN1__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("commitWEN1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vmycpu_top__Vcb_commitWEN1_t __Vcb = (Vmycpu_top__Vcb_commitWEN1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vmycpu_top__Syms*)(__Vscopep->symsp()), commitWEN1__Vfuncrtn__Vcvt);
    svBitVecVal commitWEN1__Vfuncrtn[1];
    for (size_t commitWEN1__Vfuncrtn__Vidx = 0; commitWEN1__Vfuncrtn__Vidx < 1; ++commitWEN1__Vfuncrtn__Vidx) VL_SET_SVBV_I(4, commitWEN1__Vfuncrtn + 1 * commitWEN1__Vfuncrtn__Vidx, commitWEN1__Vfuncrtn__Vcvt);
    return commitWEN1__Vfuncrtn[0];
}

svBitVecVal Vmycpu_top::commitWNUM1() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root::commitWNUM1\n"); );
    // Init
    CData/*4:0*/ commitWNUM1__Vfuncrtn__Vcvt;
    commitWNUM1__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("commitWNUM1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vmycpu_top__Vcb_commitWNUM1_t __Vcb = (Vmycpu_top__Vcb_commitWNUM1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vmycpu_top__Syms*)(__Vscopep->symsp()), commitWNUM1__Vfuncrtn__Vcvt);
    svBitVecVal commitWNUM1__Vfuncrtn[1];
    for (size_t commitWNUM1__Vfuncrtn__Vidx = 0; commitWNUM1__Vfuncrtn__Vidx < 1; ++commitWNUM1__Vfuncrtn__Vidx) VL_SET_SVBV_I(5, commitWNUM1__Vfuncrtn + 1 * commitWNUM1__Vfuncrtn__Vidx, commitWNUM1__Vfuncrtn__Vcvt);
    return commitWNUM1__Vfuncrtn[0];
}

int Vmycpu_top::commitWDATA1() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root::commitWDATA1\n"); );
    // Init
    IData/*31:0*/ commitWDATA1__Vfuncrtn__Vcvt;
    commitWDATA1__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("commitWDATA1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vmycpu_top__Vcb_commitWDATA1_t __Vcb = (Vmycpu_top__Vcb_commitWDATA1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vmycpu_top__Syms*)(__Vscopep->symsp()), commitWDATA1__Vfuncrtn__Vcvt);
    int commitWDATA1__Vfuncrtn;
    for (size_t commitWDATA1__Vfuncrtn__Vidx = 0; commitWDATA1__Vfuncrtn__Vidx < 1; ++commitWDATA1__Vfuncrtn__Vidx) commitWDATA1__Vfuncrtn = commitWDATA1__Vfuncrtn__Vcvt;
    return commitWDATA1__Vfuncrtn;
}

svBit Vmycpu_top::is_interrupt() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root::is_interrupt\n"); );
    // Init
    CData/*0:0*/ is_interrupt__Vfuncrtn__Vcvt;
    is_interrupt__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("is_interrupt");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vmycpu_top__Vcb_is_interrupt_t __Vcb = (Vmycpu_top__Vcb_is_interrupt_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vmycpu_top__Syms*)(__Vscopep->symsp()), is_interrupt__Vfuncrtn__Vcvt);
    svBit is_interrupt__Vfuncrtn;
    for (size_t is_interrupt__Vfuncrtn__Vidx = 0; is_interrupt__Vfuncrtn__Vidx < 1; ++is_interrupt__Vfuncrtn__Vidx) is_interrupt__Vfuncrtn = is_interrupt__Vfuncrtn__Vcvt;
    return is_interrupt__Vfuncrtn;
}

int Vmycpu_top::cp0_change_pc() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root::cp0_change_pc\n"); );
    // Init
    IData/*31:0*/ cp0_change_pc__Vfuncrtn__Vcvt;
    cp0_change_pc__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("cp0_change_pc");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vmycpu_top__Vcb_cp0_change_pc_t __Vcb = (Vmycpu_top__Vcb_cp0_change_pc_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vmycpu_top__Syms*)(__Vscopep->symsp()), cp0_change_pc__Vfuncrtn__Vcvt);
    int cp0_change_pc__Vfuncrtn;
    for (size_t cp0_change_pc__Vfuncrtn__Vidx = 0; cp0_change_pc__Vfuncrtn__Vidx < 1; ++cp0_change_pc__Vfuncrtn__Vidx) cp0_change_pc__Vfuncrtn = cp0_change_pc__Vfuncrtn__Vcvt;
    return cp0_change_pc__Vfuncrtn;
}

svBit Vmycpu_top::cp0_change() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root::cp0_change\n"); );
    // Init
    CData/*0:0*/ cp0_change__Vfuncrtn__Vcvt;
    cp0_change__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("cp0_change");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vmycpu_top__Vcb_cp0_change_t __Vcb = (Vmycpu_top__Vcb_cp0_change_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vmycpu_top__Syms*)(__Vscopep->symsp()), cp0_change__Vfuncrtn__Vcvt);
    svBit cp0_change__Vfuncrtn;
    for (size_t cp0_change__Vfuncrtn__Vidx = 0; cp0_change__Vfuncrtn__Vidx < 1; ++cp0_change__Vfuncrtn__Vidx) cp0_change__Vfuncrtn = cp0_change__Vfuncrtn__Vcvt;
    return cp0_change__Vfuncrtn;
}

int Vmycpu_top::get_cp0_value(char pos) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root::get_cp0_value\n"); );
    // Init
    CData/*7:0*/ pos__Vcvt;
    pos__Vcvt = 0;
    IData/*31:0*/ get_cp0_value__Vfuncrtn__Vcvt;
    get_cp0_value__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_cp0_value");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vmycpu_top__Vcb_get_cp0_value_t __Vcb = (Vmycpu_top__Vcb_get_cp0_value_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    pos__Vcvt = (0xffU & pos);
    (*__Vcb)((Vmycpu_top__Syms*)(__Vscopep->symsp()), pos__Vcvt, get_cp0_value__Vfuncrtn__Vcvt);
    int get_cp0_value__Vfuncrtn;
    for (size_t get_cp0_value__Vfuncrtn__Vidx = 0; get_cp0_value__Vfuncrtn__Vidx < 1; ++get_cp0_value__Vfuncrtn__Vidx) get_cp0_value__Vfuncrtn = get_cp0_value__Vfuncrtn__Vcvt;
    return get_cp0_value__Vfuncrtn;
}

svBit Vmycpu_top::commit0() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root::commit0\n"); );
    // Init
    CData/*0:0*/ commit0__Vfuncrtn__Vcvt;
    commit0__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("commit0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vmycpu_top__Vcb_commit0_t __Vcb = (Vmycpu_top__Vcb_commit0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vmycpu_top__Syms*)(__Vscopep->symsp()), commit0__Vfuncrtn__Vcvt);
    svBit commit0__Vfuncrtn;
    for (size_t commit0__Vfuncrtn__Vidx = 0; commit0__Vfuncrtn__Vidx < 1; ++commit0__Vfuncrtn__Vidx) commit0__Vfuncrtn = commit0__Vfuncrtn__Vcvt;
    return commit0__Vfuncrtn;
}

int Vmycpu_top::commitPC0() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root::commitPC0\n"); );
    // Init
    IData/*31:0*/ commitPC0__Vfuncrtn__Vcvt;
    commitPC0__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("commitPC0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vmycpu_top__Vcb_commitPC0_t __Vcb = (Vmycpu_top__Vcb_commitPC0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vmycpu_top__Syms*)(__Vscopep->symsp()), commitPC0__Vfuncrtn__Vcvt);
    int commitPC0__Vfuncrtn;
    for (size_t commitPC0__Vfuncrtn__Vidx = 0; commitPC0__Vfuncrtn__Vidx < 1; ++commitPC0__Vfuncrtn__Vidx) commitPC0__Vfuncrtn = commitPC0__Vfuncrtn__Vcvt;
    return commitPC0__Vfuncrtn;
}

svBitVecVal Vmycpu_top::commitWEN0() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root::commitWEN0\n"); );
    // Init
    CData/*3:0*/ commitWEN0__Vfuncrtn__Vcvt;
    commitWEN0__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("commitWEN0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vmycpu_top__Vcb_commitWEN0_t __Vcb = (Vmycpu_top__Vcb_commitWEN0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vmycpu_top__Syms*)(__Vscopep->symsp()), commitWEN0__Vfuncrtn__Vcvt);
    svBitVecVal commitWEN0__Vfuncrtn[1];
    for (size_t commitWEN0__Vfuncrtn__Vidx = 0; commitWEN0__Vfuncrtn__Vidx < 1; ++commitWEN0__Vfuncrtn__Vidx) VL_SET_SVBV_I(4, commitWEN0__Vfuncrtn + 1 * commitWEN0__Vfuncrtn__Vidx, commitWEN0__Vfuncrtn__Vcvt);
    return commitWEN0__Vfuncrtn[0];
}

svBitVecVal Vmycpu_top::commitWNUM0() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root::commitWNUM0\n"); );
    // Init
    CData/*4:0*/ commitWNUM0__Vfuncrtn__Vcvt;
    commitWNUM0__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("commitWNUM0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vmycpu_top__Vcb_commitWNUM0_t __Vcb = (Vmycpu_top__Vcb_commitWNUM0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vmycpu_top__Syms*)(__Vscopep->symsp()), commitWNUM0__Vfuncrtn__Vcvt);
    svBitVecVal commitWNUM0__Vfuncrtn[1];
    for (size_t commitWNUM0__Vfuncrtn__Vidx = 0; commitWNUM0__Vfuncrtn__Vidx < 1; ++commitWNUM0__Vfuncrtn__Vidx) VL_SET_SVBV_I(5, commitWNUM0__Vfuncrtn + 1 * commitWNUM0__Vfuncrtn__Vidx, commitWNUM0__Vfuncrtn__Vcvt);
    return commitWNUM0__Vfuncrtn[0];
}

int Vmycpu_top::commitWDATA0() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root::commitWDATA0\n"); );
    // Init
    IData/*31:0*/ commitWDATA0__Vfuncrtn__Vcvt;
    commitWDATA0__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("commitWDATA0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vmycpu_top__Vcb_commitWDATA0_t __Vcb = (Vmycpu_top__Vcb_commitWDATA0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vmycpu_top__Syms*)(__Vscopep->symsp()), commitWDATA0__Vfuncrtn__Vcvt);
    int commitWDATA0__Vfuncrtn;
    for (size_t commitWDATA0__Vfuncrtn__Vidx = 0; commitWDATA0__Vfuncrtn__Vidx < 1; ++commitWDATA0__Vfuncrtn__Vidx) commitWDATA0__Vfuncrtn = commitWDATA0__Vfuncrtn__Vcvt;
    return commitWDATA0__Vfuncrtn;
}
