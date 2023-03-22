// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top.h"
#include "Vmycpu_top___024root.h"
#include "Vmycpu_top_inst_data_tp.h"
#include "Vmycpu_top_data_data_tp.h"

void Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__get_regfile_TOP(Vmycpu_top__Syms* __restrict vlSymsp, CData/*7:0*/ num, IData/*31:0*/ &get_regfile__Vfuncrtn);
void Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__commit0_TOP(Vmycpu_top__Syms* __restrict vlSymsp, CData/*0:0*/ &commit0__Vfuncrtn);
void Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__commitPC0_TOP(Vmycpu_top__Syms* __restrict vlSymsp, IData/*31:0*/ &commitPC0__Vfuncrtn);
void Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__commitWDATA0_TOP(Vmycpu_top__Syms* __restrict vlSymsp, IData/*31:0*/ &commitWDATA0__Vfuncrtn);
void Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__commitWEN0_TOP(Vmycpu_top__Syms* __restrict vlSymsp, CData/*3:0*/ &commitWEN0__Vfuncrtn);
void Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__commitWNUM0_TOP(Vmycpu_top__Syms* __restrict vlSymsp, CData/*4:0*/ &commitWNUM0__Vfuncrtn);
void Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__cp0_change_TOP(Vmycpu_top__Syms* __restrict vlSymsp, CData/*0:0*/ &cp0_change__Vfuncrtn);
void Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__cp0_change_pc_TOP(Vmycpu_top__Syms* __restrict vlSymsp, IData/*31:0*/ &cp0_change_pc__Vfuncrtn);
void Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__get_cp0_value_TOP(Vmycpu_top__Syms* __restrict vlSymsp, CData/*7:0*/ pos, IData/*31:0*/ &get_cp0_value__Vfuncrtn);
void Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__commit1_TOP(Vmycpu_top__Syms* __restrict vlSymsp, CData/*0:0*/ &commit1__Vfuncrtn);
void Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__commitPC1_TOP(Vmycpu_top__Syms* __restrict vlSymsp, IData/*31:0*/ &commitPC1__Vfuncrtn);
void Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__commitWDATA1_TOP(Vmycpu_top__Syms* __restrict vlSymsp, IData/*31:0*/ &commitWDATA1__Vfuncrtn);
void Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__commitWEN1_TOP(Vmycpu_top__Syms* __restrict vlSymsp, CData/*3:0*/ &commitWEN1__Vfuncrtn);
void Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__commitWNUM1_TOP(Vmycpu_top__Syms* __restrict vlSymsp, CData/*4:0*/ &commitWNUM1__Vfuncrtn);
void Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__is_interrupt_TOP(Vmycpu_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_interrupt__Vfuncrtn);

// FUNCTIONS
Vmycpu_top__Syms::~Vmycpu_top__Syms()
{
}

Vmycpu_top__Syms::Vmycpu_top__Syms(VerilatedContext* contextp, const char* namep, Vmycpu_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__0__KET____DOT__Data_Data_TP{this, Verilated::catName(namep, "mycpu_top.u_cache_top.u_data_top.u_dcache_tp.genblk2[0].Data_Data_TP")}
    , TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__1__KET____DOT__Data_Data_TP{this, Verilated::catName(namep, "mycpu_top.u_cache_top.u_data_top.u_dcache_tp.genblk2[1].Data_Data_TP")}
    , TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__2__KET____DOT__Data_Data_TP{this, Verilated::catName(namep, "mycpu_top.u_cache_top.u_data_top.u_dcache_tp.genblk2[2].Data_Data_TP")}
    , TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__3__KET____DOT__Data_Data_TP{this, Verilated::catName(namep, "mycpu_top.u_cache_top.u_data_top.u_dcache_tp.genblk2[3].Data_Data_TP")}
    , TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__0__KET____DOT__Inst_Data_TP{this, Verilated::catName(namep, "mycpu_top.u_cache_top.u_inst_top.u_icache_tp.genblk2[0].Inst_Data_TP")}
    , TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__1__KET____DOT__Inst_Data_TP{this, Verilated::catName(namep, "mycpu_top.u_cache_top.u_inst_top.u_icache_tp.genblk2[1].Inst_Data_TP")}
    , TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__2__KET____DOT__Inst_Data_TP{this, Verilated::catName(namep, "mycpu_top.u_cache_top.u_inst_top.u_icache_tp.genblk2[2].Inst_Data_TP")}
    , TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__3__KET____DOT__Inst_Data_TP{this, Verilated::catName(namep, "mycpu_top.u_cache_top.u_inst_top.u_icache_tp.genblk2[3].Inst_Data_TP")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__0__KET____DOT__Data_Data_TP = &TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__0__KET____DOT__Data_Data_TP;
    TOP.__PVT__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__1__KET____DOT__Data_Data_TP = &TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__1__KET____DOT__Data_Data_TP;
    TOP.__PVT__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__2__KET____DOT__Data_Data_TP = &TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__2__KET____DOT__Data_Data_TP;
    TOP.__PVT__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__3__KET____DOT__Data_Data_TP = &TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__3__KET____DOT__Data_Data_TP;
    TOP.__PVT__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__0__KET____DOT__Inst_Data_TP = &TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__0__KET____DOT__Inst_Data_TP;
    TOP.__PVT__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__1__KET____DOT__Inst_Data_TP = &TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__1__KET____DOT__Inst_Data_TP;
    TOP.__PVT__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__2__KET____DOT__Inst_Data_TP = &TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__2__KET____DOT__Inst_Data_TP;
    TOP.__PVT__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__3__KET____DOT__Inst_Data_TP = &TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__3__KET____DOT__Inst_Data_TP;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__0__KET____DOT__Data_Data_TP.__Vconfigure(true);
    TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__1__KET____DOT__Data_Data_TP.__Vconfigure(false);
    TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__2__KET____DOT__Data_Data_TP.__Vconfigure(false);
    TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__3__KET____DOT__Data_Data_TP.__Vconfigure(false);
    TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__0__KET____DOT__Inst_Data_TP.__Vconfigure(true);
    TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__1__KET____DOT__Inst_Data_TP.__Vconfigure(false);
    TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__2__KET____DOT__Inst_Data_TP.__Vconfigure(false);
    TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__3__KET____DOT__Inst_Data_TP.__Vconfigure(false);
    // Setup scopes
    __Vscope_mycpu_top__u_Main__u_ID__RegFile_u.configure(this, name(), "mycpu_top.u_Main.u_ID.RegFile_u", "RegFile_u", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_mycpu_top__u_Main__u_PrimaryBranchAmend.configure(this, name(), "mycpu_top.u_Main.u_PrimaryBranchAmend", "u_PrimaryBranchAmend", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_mycpu_top__u_Main__u_PrimaryExceptionProcessor.configure(this, name(), "mycpu_top.u_Main.u_PrimaryExceptionProcessor", "u_PrimaryExceptionProcessor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_mycpu_top__u_Main__u_WriteBack.configure(this, name(), "mycpu_top.u_Main.u_WriteBack", "u_WriteBack", -9, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_mycpu_top__u_Main__u_ID__RegFile_u.exportInsert(__Vfinal, "get_regfile", (void*)(&Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__get_regfile_TOP));
        __Vscope_mycpu_top__u_Main__u_PrimaryBranchAmend.exportInsert(__Vfinal, "commit0", (void*)(&Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__commit0_TOP));
        __Vscope_mycpu_top__u_Main__u_PrimaryBranchAmend.exportInsert(__Vfinal, "commitPC0", (void*)(&Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__commitPC0_TOP));
        __Vscope_mycpu_top__u_Main__u_PrimaryBranchAmend.exportInsert(__Vfinal, "commitWDATA0", (void*)(&Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__commitWDATA0_TOP));
        __Vscope_mycpu_top__u_Main__u_PrimaryBranchAmend.exportInsert(__Vfinal, "commitWEN0", (void*)(&Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__commitWEN0_TOP));
        __Vscope_mycpu_top__u_Main__u_PrimaryBranchAmend.exportInsert(__Vfinal, "commitWNUM0", (void*)(&Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__commitWNUM0_TOP));
        __Vscope_mycpu_top__u_Main__u_PrimaryExceptionProcessor.exportInsert(__Vfinal, "cp0_change", (void*)(&Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__cp0_change_TOP));
        __Vscope_mycpu_top__u_Main__u_PrimaryExceptionProcessor.exportInsert(__Vfinal, "cp0_change_pc", (void*)(&Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__cp0_change_pc_TOP));
        __Vscope_mycpu_top__u_Main__u_PrimaryExceptionProcessor.exportInsert(__Vfinal, "get_cp0_value", (void*)(&Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__get_cp0_value_TOP));
        __Vscope_mycpu_top__u_Main__u_WriteBack.exportInsert(__Vfinal, "commit1", (void*)(&Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__commit1_TOP));
        __Vscope_mycpu_top__u_Main__u_WriteBack.exportInsert(__Vfinal, "commitPC1", (void*)(&Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__commitPC1_TOP));
        __Vscope_mycpu_top__u_Main__u_WriteBack.exportInsert(__Vfinal, "commitWDATA1", (void*)(&Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__commitWDATA1_TOP));
        __Vscope_mycpu_top__u_Main__u_WriteBack.exportInsert(__Vfinal, "commitWEN1", (void*)(&Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__commitWEN1_TOP));
        __Vscope_mycpu_top__u_Main__u_WriteBack.exportInsert(__Vfinal, "commitWNUM1", (void*)(&Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__commitWNUM1_TOP));
        __Vscope_mycpu_top__u_Main__u_WriteBack.exportInsert(__Vfinal, "is_interrupt", (void*)(&Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__is_interrupt_TOP));
    }
}
