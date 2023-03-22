// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top___024root.h"

void Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__get_regfile_TOP(Vmycpu_top__Syms* __restrict vlSymsp, CData/*7:0*/ num, IData/*31:0*/ &get_regfile__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__get_regfile_TOP\n"); );
    // Init
    // Body
    get_regfile__Vfuncrtn = ((0x1eU >= (0x1fU & ((IData)(num) 
                                                 - (IData)(1U))))
                              ? vlSymsp->TOP.mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile
                             [(0x1fU & ((IData)(num) 
                                        - (IData)(1U)))]
                              : 0U);
}

void Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__commit1_TOP(Vmycpu_top__Syms* __restrict vlSymsp, CData/*0:0*/ &commit1__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__commit1_TOP\n"); );
    // Init
    // Body
    commit1__Vfuncrtn = vlSymsp->TOP.mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__commit;
}

void Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__commitPC1_TOP(Vmycpu_top__Syms* __restrict vlSymsp, IData/*31:0*/ &commitPC1__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__commitPC1_TOP\n"); );
    // Init
    // Body
    commitPC1__Vfuncrtn = vlSymsp->TOP.mycpu_top__DOT__debug_wb_pc1;
}

void Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__commitWEN1_TOP(Vmycpu_top__Syms* __restrict vlSymsp, CData/*3:0*/ &commitWEN1__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__commitWEN1_TOP\n"); );
    // Init
    // Body
    commitWEN1__Vfuncrtn = vlSymsp->TOP.mycpu_top__DOT__debug_wb_rf_wen1;
}

void Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__commitWNUM1_TOP(Vmycpu_top__Syms* __restrict vlSymsp, CData/*4:0*/ &commitWNUM1__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__commitWNUM1_TOP\n"); );
    // Init
    // Body
    commitWNUM1__Vfuncrtn = vlSymsp->TOP.mycpu_top__DOT__debug_wb_rf_wnum1;
}

void Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__commitWDATA1_TOP(Vmycpu_top__Syms* __restrict vlSymsp, IData/*31:0*/ &commitWDATA1__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__commitWDATA1_TOP\n"); );
    // Init
    // Body
    commitWDATA1__Vfuncrtn = vlSymsp->TOP.mycpu_top__DOT__debug_wb_rf_wdata1;
}

void Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__is_interrupt_TOP(Vmycpu_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_interrupt__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__is_interrupt_TOP\n"); );
    // Init
    // Body
    is_interrupt__Vfuncrtn = vlSymsp->TOP.mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__is_int_inst;
}

void Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__cp0_change_pc_TOP(Vmycpu_top__Syms* __restrict vlSymsp, IData/*31:0*/ &cp0_change_pc__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__cp0_change_pc_TOP\n"); );
    // Init
    // Body
    cp0_change_pc__Vfuncrtn = vlSymsp->TOP.mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__changed_pc;
}

void Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__cp0_change_TOP(Vmycpu_top__Syms* __restrict vlSymsp, CData/*0:0*/ &cp0_change__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__cp0_change_TOP\n"); );
    // Init
    // Body
    cp0_change__Vfuncrtn = vlSymsp->TOP.mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__cp0_changed;
}

void Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__get_cp0_value_TOP(Vmycpu_top__Syms* __restrict vlSymsp, CData/*7:0*/ pos, IData/*31:0*/ &get_cp0_value__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__get_cp0_value_TOP\n"); );
    // Init
    // Body
    get_cp0_value__Vfuncrtn = ((0x60U == (IData)(pos))
                                ? vlSymsp->TOP.mycpu_top__DOT__u_Main__DOT__CP0_Status_w_o
                                : ((0x68U == (IData)(pos))
                                    ? vlSymsp->TOP.mycpu_top__DOT__u_Main__DOT__CP0_Cause_w_o
                                    : ((0x70U == (IData)(pos))
                                        ? vlSymsp->TOP.mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__epc
                                        : ((0x40U == (IData)(pos))
                                            ? vlSymsp->TOP.mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__badVaddr
                                            : ((0x48U 
                                                == (IData)(pos))
                                                ? vlSymsp->TOP.mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__count
                                                : (
                                                   (0x58U 
                                                    == (IData)(pos))
                                                    ? vlSymsp->TOP.mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__compare
                                                    : 
                                                   ((0U 
                                                     == (IData)(pos))
                                                     ? vlSymsp->TOP.mycpu_top__DOT__u_Main__DOT__CP0_Index_w_o
                                                     : 
                                                    ((0x10U 
                                                      == (IData)(pos))
                                                      ? vlSymsp->TOP.mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__entryLo0
                                                      : 
                                                     ((0x18U 
                                                       == (IData)(pos))
                                                       ? vlSymsp->TOP.mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__entryLo1
                                                       : 
                                                      ((0x50U 
                                                        == (IData)(pos))
                                                        ? vlSymsp->TOP.mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__entryHi
                                                        : 
                                                       ((0x80U 
                                                         == (IData)(pos))
                                                         ? 
                                                        (0x80000080U 
                                                         | (IData)(vlSymsp->TOP.mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Config_k0))
                                                         : 
                                                        ((0x81U 
                                                          == (IData)(pos))
                                                          ? 0xc0201200U
                                                          : 0x12345678U))))))))))));
}

void Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__commit0_TOP(Vmycpu_top__Syms* __restrict vlSymsp, CData/*0:0*/ &commit0__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__commit0_TOP\n"); );
    // Init
    // Body
    commit0__Vfuncrtn = vlSymsp->TOP.mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__commit;
}

void Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__commitPC0_TOP(Vmycpu_top__Syms* __restrict vlSymsp, IData/*31:0*/ &commitPC0__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__commitPC0_TOP\n"); );
    // Init
    // Body
    commitPC0__Vfuncrtn = vlSymsp->TOP.mycpu_top__DOT__debug_wb_pc0;
}

void Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__commitWEN0_TOP(Vmycpu_top__Syms* __restrict vlSymsp, CData/*3:0*/ &commitWEN0__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__commitWEN0_TOP\n"); );
    // Init
    // Body
    commitWEN0__Vfuncrtn = vlSymsp->TOP.mycpu_top__DOT__debug_wb_rf_wen0;
}

void Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__commitWNUM0_TOP(Vmycpu_top__Syms* __restrict vlSymsp, CData/*4:0*/ &commitWNUM0__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__commitWNUM0_TOP\n"); );
    // Init
    // Body
    commitWNUM0__Vfuncrtn = vlSymsp->TOP.mycpu_top__DOT__debug_wb_rf_wnum0;
}

void Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__commitWDATA0_TOP(Vmycpu_top__Syms* __restrict vlSymsp, IData/*31:0*/ &commitWDATA0__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root____Vdpiexp_mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__commitWDATA0_TOP\n"); );
    // Init
    // Body
    commitWDATA0__Vfuncrtn = vlSymsp->TOP.mycpu_top__DOT__debug_wb_rf_wdata0;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmycpu_top___024root___dump_triggers__ico(Vmycpu_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vmycpu_top___024root___eval_triggers__ico(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmycpu_top___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmycpu_top___024root___dump_triggers__act(Vmycpu_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vmycpu_top___024root___eval_triggers__act(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->aclk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__aclk)));
    vlSelf->__Vtrigrprev__TOP__aclk = vlSelf->aclk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmycpu_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vmycpu_top___024root___nba_sequent__TOP__3(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___nba_sequent__TOP__3\n"); );
    // Init
    VlWide<8>/*255:0*/ mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_hf0e156a2__0;
    VL_ZERO_W(256, mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_hf0e156a2__0);
    VlWide<8>/*255:0*/ mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h4ab56c97__0;
    VL_ZERO_W(256, mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h4ab56c97__0);
    QData/*53:0*/ mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_mux__DOT__axi_dc_du__DOT____VdfgTmp_he0abe4c6__0;
    mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_mux__DOT__axi_dc_du__DOT____VdfgTmp_he0abe4c6__0 = 0;
    QData/*49:0*/ mycpu_top__DOT__u_cache_top__DOT__u_axi_2to1_arbiter__DOT____VdfgTmp_h65533c38__0;
    mycpu_top__DOT__u_cache_top__DOT__u_axi_2to1_arbiter__DOT____VdfgTmp_h65533c38__0 = 0;
    // Body
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__Inst_Data_TP__wen 
        = (- (IData)(((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__way) 
                      & (4U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat)))));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata[0U][0U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__0__KET____DOT__Inst_Data_TP.rdata[0U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata[0U][1U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__0__KET____DOT__Inst_Data_TP.rdata[1U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata[0U][2U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__0__KET____DOT__Inst_Data_TP.rdata[2U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata[0U][3U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__0__KET____DOT__Inst_Data_TP.rdata[3U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata[0U][4U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__0__KET____DOT__Inst_Data_TP.rdata[4U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata[0U][5U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__0__KET____DOT__Inst_Data_TP.rdata[5U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata[0U][6U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__0__KET____DOT__Inst_Data_TP.rdata[6U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata[0U][7U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__0__KET____DOT__Inst_Data_TP.rdata[7U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__Inst_Data_TP__wen 
        = (- (IData)((((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__way) 
                       >> 1U) & (4U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat)))));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata[1U][0U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__1__KET____DOT__Inst_Data_TP.rdata[0U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata[1U][1U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__1__KET____DOT__Inst_Data_TP.rdata[1U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata[1U][2U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__1__KET____DOT__Inst_Data_TP.rdata[2U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata[1U][3U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__1__KET____DOT__Inst_Data_TP.rdata[3U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata[1U][4U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__1__KET____DOT__Inst_Data_TP.rdata[4U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata[1U][5U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__1__KET____DOT__Inst_Data_TP.rdata[5U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata[1U][6U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__1__KET____DOT__Inst_Data_TP.rdata[6U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata[1U][7U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__1__KET____DOT__Inst_Data_TP.rdata[7U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__Inst_Data_TP__wen 
        = (- (IData)((((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__way) 
                       >> 2U) & (4U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat)))));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata[2U][0U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__2__KET____DOT__Inst_Data_TP.rdata[0U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata[2U][1U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__2__KET____DOT__Inst_Data_TP.rdata[1U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata[2U][2U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__2__KET____DOT__Inst_Data_TP.rdata[2U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata[2U][3U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__2__KET____DOT__Inst_Data_TP.rdata[3U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata[2U][4U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__2__KET____DOT__Inst_Data_TP.rdata[4U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata[2U][5U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__2__KET____DOT__Inst_Data_TP.rdata[5U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata[2U][6U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__2__KET____DOT__Inst_Data_TP.rdata[6U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata[2U][7U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__2__KET____DOT__Inst_Data_TP.rdata[7U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__Inst_Data_TP__wen 
        = (- (IData)((((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__way) 
                       >> 3U) & (4U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat)))));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_wdata[0U] 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_buf_data
        [0U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_wdata[1U] 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_buf_data
        [1U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_wdata[2U] 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_buf_data
        [2U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_wdata[3U] 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_buf_data
        [3U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_wdata[4U] 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_buf_data
        [4U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_wdata[5U] 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_buf_data
        [5U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_wdata[6U] 
        = (IData)((((QData)((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_buf_data
                                    [7U])) << 0x20U) 
                   | (QData)((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_buf_data
                                     [6U]))));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_wdata[7U] 
        = (IData)(((((QData)((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_buf_data
                                     [7U])) << 0x20U) 
                    | (QData)((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_buf_data
                                      [6U]))) >> 0x20U));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_index 
        = (0x7fU & ((4U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat))
                     ? (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_index)
                     : ((1U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat))
                         ? (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_PCRegister__DOT__nextNotAlignedPC 
                            >> 5U) : ((0U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat))
                                       ? (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sta_index)
                                       : (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_index)))));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata[3U][0U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__3__KET____DOT__Inst_Data_TP.rdata[0U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata[3U][1U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__3__KET____DOT__Inst_Data_TP.rdata[1U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata[3U][2U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__3__KET____DOT__Inst_Data_TP.rdata[2U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata[3U][3U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__3__KET____DOT__Inst_Data_TP.rdata[3U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata[3U][4U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__3__KET____DOT__Inst_Data_TP.rdata[4U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata[3U][5U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__3__KET____DOT__Inst_Data_TP.rdata[5U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata[3U][6U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__3__KET____DOT__Inst_Data_TP.rdata[6U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata[3U][7U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__3__KET____DOT__Inst_Data_TP.rdata[7U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__Data_Data_TP__wen 
        = (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h68fa2eee__0 
           | vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h077415b1__0);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata[0U][0U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__0__KET____DOT__Data_Data_TP.rdata[0U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata[0U][1U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__0__KET____DOT__Data_Data_TP.rdata[1U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata[0U][2U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__0__KET____DOT__Data_Data_TP.rdata[2U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata[0U][3U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__0__KET____DOT__Data_Data_TP.rdata[3U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata[0U][4U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__0__KET____DOT__Data_Data_TP.rdata[4U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata[0U][5U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__0__KET____DOT__Data_Data_TP.rdata[5U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata[0U][6U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__0__KET____DOT__Data_Data_TP.rdata[6U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata[0U][7U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__0__KET____DOT__Data_Data_TP.rdata[7U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__Data_Data_TP__wen 
        = (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h8df67b7c__0 
           | vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h6053820f__0);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata[1U][0U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__1__KET____DOT__Data_Data_TP.rdata[0U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata[1U][1U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__1__KET____DOT__Data_Data_TP.rdata[1U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata[1U][2U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__1__KET____DOT__Data_Data_TP.rdata[2U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata[1U][3U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__1__KET____DOT__Data_Data_TP.rdata[3U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata[1U][4U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__1__KET____DOT__Data_Data_TP.rdata[4U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata[1U][5U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__1__KET____DOT__Data_Data_TP.rdata[5U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata[1U][6U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__1__KET____DOT__Data_Data_TP.rdata[6U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata[1U][7U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__1__KET____DOT__Data_Data_TP.rdata[7U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__Data_Data_TP__wen 
        = (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hb0774e16__0 
           | vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_ha774a041__0);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata[2U][0U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__2__KET____DOT__Data_Data_TP.rdata[0U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata[2U][1U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__2__KET____DOT__Data_Data_TP.rdata[1U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata[2U][2U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__2__KET____DOT__Data_Data_TP.rdata[2U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata[2U][3U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__2__KET____DOT__Data_Data_TP.rdata[3U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata[2U][4U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__2__KET____DOT__Data_Data_TP.rdata[4U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata[2U][5U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__2__KET____DOT__Data_Data_TP.rdata[5U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata[2U][6U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__2__KET____DOT__Data_Data_TP.rdata[6U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata[2U][7U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__2__KET____DOT__Data_Data_TP.rdata[7U];
    if ((4U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat))) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_wdata[0U] 
            = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_buf_data
            [0U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_wdata[1U] 
            = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_buf_data
            [1U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_wdata[2U] 
            = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_buf_data
            [2U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_wdata[3U] 
            = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_buf_data
            [3U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_wdata[4U] 
            = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_buf_data
            [4U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_wdata[5U] 
            = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_buf_data
            [5U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_wdata[6U] 
            = (IData)((((QData)((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_buf_data
                                        [7U])) << 0x20U) 
                       | (QData)((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_buf_data
                                         [6U]))));
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_wdata[7U] 
            = (IData)(((((QData)((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_buf_data
                                         [7U])) << 0x20U) 
                        | (QData)((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_buf_data
                                          [6U]))) >> 0x20U));
    } else {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_wdata[0U] 
            = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_wdata;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_wdata[1U] 
            = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_wdata;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_wdata[2U] 
            = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_wdata;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_wdata[3U] 
            = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_wdata;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_wdata[4U] 
            = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_wdata;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_wdata[5U] 
            = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_wdata;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_wdata[6U] 
            = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_wdata;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_wdata[7U] 
            = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_wdata;
    }
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__Data_Data_TP__wen 
        = (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h9253e7f8__0 
           | vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h4d0fc773__0);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_index 
        = vlSelf->__Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_index;
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata[3U][0U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__3__KET____DOT__Data_Data_TP.rdata[0U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata[3U][1U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__3__KET____DOT__Data_Data_TP.rdata[1U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata[3U][2U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__3__KET____DOT__Data_Data_TP.rdata[2U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata[3U][3U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__3__KET____DOT__Data_Data_TP.rdata[3U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata[3U][4U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__3__KET____DOT__Data_Data_TP.rdata[4U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata[3U][5U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__3__KET____DOT__Data_Data_TP.rdata[5U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata[3U][6U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__3__KET____DOT__Data_Data_TP.rdata[6U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata[3U][7U] 
        = vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__3__KET____DOT__Data_Data_TP.rdata[7U];
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_index 
        = ((0xfU == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat))
            ? (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__reset_counter)
            : (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_index));
    mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_hf0e156a2__0[0U] 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
        [((((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_h3f7273e8__0) 
            | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_h381d158a__0)) 
           << 1U) | ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_h65ec07f2__0) 
                     | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_h381d158a__0)))][0U];
    mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_hf0e156a2__0[1U] 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
        [((((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_h3f7273e8__0) 
            | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_h381d158a__0)) 
           << 1U) | ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_h65ec07f2__0) 
                     | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_h381d158a__0)))][1U];
    mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_hf0e156a2__0[2U] 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
        [((((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_h3f7273e8__0) 
            | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_h381d158a__0)) 
           << 1U) | ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_h65ec07f2__0) 
                     | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_h381d158a__0)))][2U];
    mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_hf0e156a2__0[3U] 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
        [((((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_h3f7273e8__0) 
            | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_h381d158a__0)) 
           << 1U) | ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_h65ec07f2__0) 
                     | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_h381d158a__0)))][3U];
    mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_hf0e156a2__0[4U] 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
        [((((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_h3f7273e8__0) 
            | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_h381d158a__0)) 
           << 1U) | ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_h65ec07f2__0) 
                     | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_h381d158a__0)))][4U];
    mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_hf0e156a2__0[5U] 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
        [((((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_h3f7273e8__0) 
            | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_h381d158a__0)) 
           << 1U) | ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_h65ec07f2__0) 
                     | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_h381d158a__0)))][5U];
    mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_hf0e156a2__0[6U] 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
        [((((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_h3f7273e8__0) 
            | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_h381d158a__0)) 
           << 1U) | ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_h65ec07f2__0) 
                     | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_h381d158a__0)))][6U];
    mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_hf0e156a2__0[7U] 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
        [((((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_h3f7273e8__0) 
            | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_h381d158a__0)) 
           << 1U) | ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_h65ec07f2__0) 
                     | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_h381d158a__0)))][7U];
    mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_mux__DOT__axi_dc_du__DOT____VdfgTmp_he0abe4c6__0 
        = ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__ok_send_arv)
            ? (0x1d400ULL | ((QData)((IData)(((vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tag 
                                               << 0xcU) 
                                              | (((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_index) 
                                                  << 5U) 
                                                 | (0x1cU 
                                                    & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_offset)))))) 
                             << 0x12U)) : (0x8000000000000ULL 
                                           | (((QData)((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_addr)) 
                                               << 0x12U) 
                                              | (QData)((IData)(
                                                                ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_size) 
                                                                 << 0xbU))))));
    mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h4ab56c97__0[0U] 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
        [((((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hbcee2671__0) 
            | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hff2dba59__0)) 
           << 1U) | ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hdbf3ff4e__0) 
                     | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hff2dba59__0)))][0U];
    mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h4ab56c97__0[1U] 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
        [((((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hbcee2671__0) 
            | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hff2dba59__0)) 
           << 1U) | ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hdbf3ff4e__0) 
                     | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hff2dba59__0)))][1U];
    mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h4ab56c97__0[2U] 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
        [((((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hbcee2671__0) 
            | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hff2dba59__0)) 
           << 1U) | ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hdbf3ff4e__0) 
                     | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hff2dba59__0)))][2U];
    mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h4ab56c97__0[3U] 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
        [((((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hbcee2671__0) 
            | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hff2dba59__0)) 
           << 1U) | ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hdbf3ff4e__0) 
                     | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hff2dba59__0)))][3U];
    mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h4ab56c97__0[4U] 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
        [((((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hbcee2671__0) 
            | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hff2dba59__0)) 
           << 1U) | ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hdbf3ff4e__0) 
                     | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hff2dba59__0)))][4U];
    mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h4ab56c97__0[5U] 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
        [((((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hbcee2671__0) 
            | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hff2dba59__0)) 
           << 1U) | ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hdbf3ff4e__0) 
                     | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hff2dba59__0)))][5U];
    mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h4ab56c97__0[6U] 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
        [((((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hbcee2671__0) 
            | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hff2dba59__0)) 
           << 1U) | ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hdbf3ff4e__0) 
                     | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hff2dba59__0)))][6U];
    mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h4ab56c97__0[7U] 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
        [((((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hbcee2671__0) 
            | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hff2dba59__0)) 
           << 1U) | ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hdbf3ff4e__0) 
                     | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hff2dba59__0)))][7U];
    if ((0U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat))) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rindex 
            = (0x7fU & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_index));
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_hit_run_data 
            = (((- (IData)((0U == (7U & ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_offset) 
                                         >> 2U))))) 
                & mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h4ab56c97__0[0U]) 
               | (((- (IData)((1U == (7U & ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_offset) 
                                            >> 2U))))) 
                   & mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h4ab56c97__0[1U]) 
                  | (((- (IData)((2U == (7U & ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_offset) 
                                               >> 2U))))) 
                      & mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h4ab56c97__0[2U]) 
                     | (((- (IData)((3U == (7U & ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_offset) 
                                                  >> 2U))))) 
                         & mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h4ab56c97__0[3U]) 
                        | (((- (IData)((4U == (7U & 
                                               ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_offset) 
                                                >> 2U))))) 
                            & mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h4ab56c97__0[4U]) 
                           | (((- (IData)((5U == (7U 
                                                  & ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_offset) 
                                                     >> 2U))))) 
                               & mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h4ab56c97__0[5U]) 
                              | (((- (IData)((6U == 
                                              (7U & 
                                               ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_offset) 
                                                >> 2U))))) 
                                  & mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h4ab56c97__0[6U]) 
                                 | ((- (IData)((7U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_offset) 
                                                    >> 2U))))) 
                                    & mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h4ab56c97__0[7U]))))))));
    } else {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rindex 
            = (0x7fU & ((1U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat))
                         ? (vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_aluRes_r_i 
                            >> 5U) : (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_index)));
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_hit_run_data 
            = (((- (IData)((0U == (7U & ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_offset) 
                                         >> 2U))))) 
                & mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h4ab56c97__0[0U]) 
               | (((- (IData)((1U == (7U & ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_offset) 
                                            >> 2U))))) 
                   & mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h4ab56c97__0[1U]) 
                  | (((- (IData)((2U == (7U & ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_offset) 
                                               >> 2U))))) 
                      & mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h4ab56c97__0[2U]) 
                     | (((- (IData)((3U == (7U & ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_offset) 
                                                  >> 2U))))) 
                         & mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h4ab56c97__0[3U]) 
                        | (((- (IData)((4U == (7U & 
                                               ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_offset) 
                                                >> 2U))))) 
                            & mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h4ab56c97__0[4U]) 
                           | (((- (IData)((5U == (7U 
                                                  & ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_offset) 
                                                     >> 2U))))) 
                               & mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h4ab56c97__0[5U]) 
                              | (((- (IData)((6U == 
                                              (7U & 
                                               ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_offset) 
                                                >> 2U))))) 
                                  & mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h4ab56c97__0[6U]) 
                                 | ((- (IData)((7U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_offset) 
                                                    >> 2U))))) 
                                    & mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h4ab56c97__0[7U]))))))));
    }
    if ((0U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat))) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sta_hit_run_data[0U] 
            = (((- (IData)((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_offset))))) 
                & mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_hf0e156a2__0[0U]) 
               | ((- (IData)((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_offset))) 
                  & mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_hf0e156a2__0[4U]));
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sta_hit_run_data[1U] 
            = (((- (IData)((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_offset))))) 
                & mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_hf0e156a2__0[1U]) 
               | ((- (IData)((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_offset))) 
                  & mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_hf0e156a2__0[5U]));
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sta_hit_run_data[2U] 
            = (((- (IData)((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_offset))))) 
                & mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_hf0e156a2__0[2U]) 
               | ((- (IData)((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_offset))) 
                  & mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_hf0e156a2__0[6U]));
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sta_hit_run_data[3U] 
            = (((- (IData)((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_offset))))) 
                & mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_hf0e156a2__0[3U]) 
               | ((- (IData)((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_offset))) 
                  & mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_hf0e156a2__0[7U]));
    } else {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sta_hit_run_data[0U] 
            = (((- (IData)((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sta_offset))))) 
                & mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_hf0e156a2__0[0U]) 
               | ((- (IData)((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sta_offset))) 
                  & mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_hf0e156a2__0[4U]));
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sta_hit_run_data[1U] 
            = (((- (IData)((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sta_offset))))) 
                & mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_hf0e156a2__0[1U]) 
               | ((- (IData)((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sta_offset))) 
                  & mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_hf0e156a2__0[5U]));
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sta_hit_run_data[2U] 
            = (((- (IData)((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sta_offset))))) 
                & mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_hf0e156a2__0[2U]) 
               | ((- (IData)((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sta_offset))) 
                  & mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_hf0e156a2__0[6U]));
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sta_hit_run_data[3U] 
            = (((- (IData)((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sta_offset))))) 
                & mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_hf0e156a2__0[3U]) 
               | ((- (IData)((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sta_offset))) 
                  & mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_hf0e156a2__0[7U]));
    }
    if (vlSelf->mycpu_top__DOT__u_cache_top__DOT__inst_top_arvalid) {
        vlSelf->arid = (0xfU & (IData)((vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_mux__DOT__axi_ic_iu__DOT____VdfgTmp_he0abe4c6__0 
                                        >> 0x32U)));
        mycpu_top__DOT__u_cache_top__DOT__u_axi_2to1_arbiter__DOT____VdfgTmp_h65533c38__0 
            = (0x3ffffffffffffULL & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_mux__DOT__axi_ic_iu__DOT____VdfgTmp_he0abe4c6__0);
    } else {
        vlSelf->arid = (0xfU & (4U | (IData)((mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_mux__DOT__axi_dc_du__DOT____VdfgTmp_he0abe4c6__0 
                                              >> 0x32U))));
        mycpu_top__DOT__u_cache_top__DOT__u_axi_2to1_arbiter__DOT____VdfgTmp_h65533c38__0 
            = (0x3ffffffffffffULL & mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_mux__DOT__axi_dc_du__DOT____VdfgTmp_he0abe4c6__0);
    }
    vlSelf->araddr = (IData)((mycpu_top__DOT__u_cache_top__DOT__u_axi_2to1_arbiter__DOT____VdfgTmp_h65533c38__0 
                              >> 0x12U));
    vlSelf->arlen = (0xfU & (IData)((mycpu_top__DOT__u_cache_top__DOT__u_axi_2to1_arbiter__DOT____VdfgTmp_h65533c38__0 
                                     >> 0xeU)));
    vlSelf->arsize = (7U & (IData)((mycpu_top__DOT__u_cache_top__DOT__u_axi_2to1_arbiter__DOT____VdfgTmp_h65533c38__0 
                                    >> 0xbU)));
    vlSelf->arburst = (3U & (IData)((mycpu_top__DOT__u_cache_top__DOT__u_axi_2to1_arbiter__DOT____VdfgTmp_h65533c38__0 
                                     >> 9U)));
    vlSelf->arlock = (3U & (IData)((mycpu_top__DOT__u_cache_top__DOT__u_axi_2to1_arbiter__DOT____VdfgTmp_h65533c38__0 
                                    >> 7U)));
    vlSelf->arcache = (0xfU & (IData)((mycpu_top__DOT__u_cache_top__DOT__u_axi_2to1_arbiter__DOT____VdfgTmp_h65533c38__0 
                                       >> 3U)));
    vlSelf->arprot = (7U & (IData)(mycpu_top__DOT__u_cache_top__DOT__u_axi_2to1_arbiter__DOT____VdfgTmp_h65533c38__0));
}

void Vmycpu_top___024root___nba_sequent__TOP__0(Vmycpu_top___024root* vlSelf);
void Vmycpu_top___024root___nba_sequent__TOP__1(Vmycpu_top___024root* vlSelf);
void Vmycpu_top___024root___nba_sequent__TOP__2(Vmycpu_top___024root* vlSelf);
void Vmycpu_top_inst_data_tp___nba_sequent__TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__0__KET____DOT__Inst_Data_TP__0(Vmycpu_top_inst_data_tp* vlSelf);
void Vmycpu_top_inst_data_tp___nba_sequent__TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__1__KET____DOT__Inst_Data_TP__0(Vmycpu_top_inst_data_tp* vlSelf);
void Vmycpu_top_inst_data_tp___nba_sequent__TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__2__KET____DOT__Inst_Data_TP__0(Vmycpu_top_inst_data_tp* vlSelf);
void Vmycpu_top_inst_data_tp___nba_sequent__TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__3__KET____DOT__Inst_Data_TP__0(Vmycpu_top_inst_data_tp* vlSelf);
void Vmycpu_top_data_data_tp___nba_sequent__TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__0__KET____DOT__Data_Data_TP__0(Vmycpu_top_data_data_tp* vlSelf);
void Vmycpu_top_data_data_tp___nba_sequent__TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__1__KET____DOT__Data_Data_TP__0(Vmycpu_top_data_data_tp* vlSelf);
void Vmycpu_top_data_data_tp___nba_sequent__TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__2__KET____DOT__Data_Data_TP__0(Vmycpu_top_data_data_tp* vlSelf);
void Vmycpu_top_data_data_tp___nba_sequent__TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__3__KET____DOT__Data_Data_TP__0(Vmycpu_top_data_data_tp* vlSelf);
void Vmycpu_top___024root___nba_sequent__TOP__4(Vmycpu_top___024root* vlSelf);

void Vmycpu_top___024root___eval_nba(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vmycpu_top___024root___nba_sequent__TOP__0(vlSelf);
        Vmycpu_top___024root___nba_sequent__TOP__1(vlSelf);
        Vmycpu_top___024root___nba_sequent__TOP__2(vlSelf);
        Vmycpu_top_inst_data_tp___nba_sequent__TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__0__KET____DOT__Inst_Data_TP__0((&vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__0__KET____DOT__Inst_Data_TP));
        Vmycpu_top_inst_data_tp___nba_sequent__TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__1__KET____DOT__Inst_Data_TP__0((&vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__1__KET____DOT__Inst_Data_TP));
        Vmycpu_top_inst_data_tp___nba_sequent__TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__2__KET____DOT__Inst_Data_TP__0((&vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__2__KET____DOT__Inst_Data_TP));
        Vmycpu_top_inst_data_tp___nba_sequent__TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__3__KET____DOT__Inst_Data_TP__0((&vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk2__BRA__3__KET____DOT__Inst_Data_TP));
        Vmycpu_top_data_data_tp___nba_sequent__TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__0__KET____DOT__Data_Data_TP__0((&vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__0__KET____DOT__Data_Data_TP));
        Vmycpu_top_data_data_tp___nba_sequent__TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__1__KET____DOT__Data_Data_TP__0((&vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__1__KET____DOT__Data_Data_TP));
        Vmycpu_top_data_data_tp___nba_sequent__TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__2__KET____DOT__Data_Data_TP__0((&vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__2__KET____DOT__Data_Data_TP));
        Vmycpu_top_data_data_tp___nba_sequent__TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__3__KET____DOT__Data_Data_TP__0((&vlSymsp->TOP__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk2__BRA__3__KET____DOT__Data_Data_TP));
        Vmycpu_top___024root___nba_sequent__TOP__3(vlSelf);
        Vmycpu_top___024root___nba_sequent__TOP__4(vlSelf);
    }
}
