// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMYCPU_TOP__SYMS_H_
#define VERILATED_VMYCPU_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vmycpu_top.h"

// INCLUDE MODULE CLASSES
#include "Vmycpu_top___024root.h"
#include "Vmycpu_top_inst_data_tp.h"
#include "Vmycpu_top_data_data_tp.h"

// DPI TYPES for DPI Export callbacks (Internal use)
using Vmycpu_top__Vcb_commit0_t = void (*) (Vmycpu_top__Syms* __restrict vlSymsp, CData/*0:0*/ &commit0__Vfuncrtn);
using Vmycpu_top__Vcb_commit1_t = void (*) (Vmycpu_top__Syms* __restrict vlSymsp, CData/*0:0*/ &commit1__Vfuncrtn);
using Vmycpu_top__Vcb_commitPC0_t = void (*) (Vmycpu_top__Syms* __restrict vlSymsp, IData/*31:0*/ &commitPC0__Vfuncrtn);
using Vmycpu_top__Vcb_commitPC1_t = void (*) (Vmycpu_top__Syms* __restrict vlSymsp, IData/*31:0*/ &commitPC1__Vfuncrtn);
using Vmycpu_top__Vcb_commitWDATA0_t = void (*) (Vmycpu_top__Syms* __restrict vlSymsp, IData/*31:0*/ &commitWDATA0__Vfuncrtn);
using Vmycpu_top__Vcb_commitWDATA1_t = void (*) (Vmycpu_top__Syms* __restrict vlSymsp, IData/*31:0*/ &commitWDATA1__Vfuncrtn);
using Vmycpu_top__Vcb_commitWEN0_t = void (*) (Vmycpu_top__Syms* __restrict vlSymsp, CData/*3:0*/ &commitWEN0__Vfuncrtn);
using Vmycpu_top__Vcb_commitWEN1_t = void (*) (Vmycpu_top__Syms* __restrict vlSymsp, CData/*3:0*/ &commitWEN1__Vfuncrtn);
using Vmycpu_top__Vcb_commitWNUM0_t = void (*) (Vmycpu_top__Syms* __restrict vlSymsp, CData/*4:0*/ &commitWNUM0__Vfuncrtn);
using Vmycpu_top__Vcb_commitWNUM1_t = void (*) (Vmycpu_top__Syms* __restrict vlSymsp, CData/*4:0*/ &commitWNUM1__Vfuncrtn);
using Vmycpu_top__Vcb_cp0_change_pc_t = void (*) (Vmycpu_top__Syms* __restrict vlSymsp, IData/*31:0*/ &cp0_change_pc__Vfuncrtn);
using Vmycpu_top__Vcb_cp0_change_t = void (*) (Vmycpu_top__Syms* __restrict vlSymsp, CData/*0:0*/ &cp0_change__Vfuncrtn);
using Vmycpu_top__Vcb_get_cp0_value_t = void (*) (Vmycpu_top__Syms* __restrict vlSymsp, CData/*7:0*/ pos, IData/*31:0*/ &get_cp0_value__Vfuncrtn);
using Vmycpu_top__Vcb_get_regfile_t = void (*) (Vmycpu_top__Syms* __restrict vlSymsp, CData/*7:0*/ num, IData/*31:0*/ &get_regfile__Vfuncrtn);
using Vmycpu_top__Vcb_is_interrupt_t = void (*) (Vmycpu_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_interrupt__Vfuncrtn);

// SYMS CLASS (contains all model state)
class Vmycpu_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vmycpu_top* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vmycpu_top___024root           TOP;
    Vmycpu_top_data_data_tp        TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__0__KET____DOT__Data_Data_TP;
    Vmycpu_top_data_data_tp        TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__1__KET____DOT__Data_Data_TP;
    Vmycpu_top_data_data_tp        TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__2__KET____DOT__Data_Data_TP;
    Vmycpu_top_data_data_tp        TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__3__KET____DOT__Data_Data_TP;
    Vmycpu_top_inst_data_tp        TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__0__KET____DOT__Inst_Data_TP;
    Vmycpu_top_inst_data_tp        TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__1__KET____DOT__Inst_Data_TP;
    Vmycpu_top_inst_data_tp        TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__2__KET____DOT__Inst_Data_TP;
    Vmycpu_top_inst_data_tp        TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__3__KET____DOT__Inst_Data_TP;

    // SCOPE NAMES
    VerilatedScope __Vscope_mycpu_top__u_Main__u_ID__RegFile_u;
    VerilatedScope __Vscope_mycpu_top__u_Main__u_PrimaryBranchAmend;
    VerilatedScope __Vscope_mycpu_top__u_Main__u_PrimaryExceptionProcessor;
    VerilatedScope __Vscope_mycpu_top__u_Main__u_WriteBack;

    // CONSTRUCTORS
    Vmycpu_top__Syms(VerilatedContext* contextp, const char* namep, Vmycpu_top* modelp);
    ~Vmycpu_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
