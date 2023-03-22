// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top___024root.h"

VL_ATTR_COLD void Vmycpu_top___024root___eval_static(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vmycpu_top___024root___eval_initial__TOP(Vmycpu_top___024root* vlSelf);

VL_ATTR_COLD void Vmycpu_top___024root___eval_initial(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___eval_initial\n"); );
    // Body
    Vmycpu_top___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigrprev__TOP__aclk = vlSelf->aclk;
}

VL_ATTR_COLD void Vmycpu_top___024root___eval_initial__TOP(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__decorderExcCode_up[0U] 
        = (0xfU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__decorderExcCode_up
           [0U]);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__decorderExcCode_up[1U] 
        = (0xfU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__decorderExcCode_up
           [1U]);
    vlSelf->mycpu_top__DOT__u_Main__DOT__DMMU_Index_o 
        = (0xffffffe0U & vlSelf->mycpu_top__DOT__u_Main__DOT__DMMU_Index_o);
    vlSelf->mycpu_top__DOT__u_Main__DOT__DMMU_Index_o 
        = (0x80000000U | vlSelf->mycpu_top__DOT__u_Main__DOT__DMMU_Index_o);
}

VL_ATTR_COLD void Vmycpu_top___024root___eval_final(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vmycpu_top___024root___eval_triggers__stl(Vmycpu_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmycpu_top___024root___dump_triggers__stl(Vmycpu_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vmycpu_top___024root___eval_stl(Vmycpu_top___024root* vlSelf);

VL_ATTR_COLD void Vmycpu_top___024root___eval_settle(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vmycpu_top___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vmycpu_top___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/hgh/cpu/cpuref/mycpu/mycpu_top.v", 3, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vmycpu_top___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmycpu_top___024root___dump_triggers__stl(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmycpu_top___024root___stl_sequent__TOP__1(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___stl_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__ID_allowin_w_o;
    mycpu_top__DOT__u_Main__DOT__ID_allowin_w_o = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__MEM_forwardMode_w_o;
    mycpu_top__DOT__u_Main__DOT__MEM_forwardMode_w_o = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__PREMEM_forwardMode_w_o;
    mycpu_top__DOT__u_Main__DOT__PREMEM_forwardMode_w_o = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__ready;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__ready = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__valid_out;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__valid_out = 0;
    CData/*1:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_ha76478e6__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_ha76478e6__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf6c6d942__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf6c6d942__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h280da603__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h280da603__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h8d4fa09b__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h8d4fa09b__0 = 0;
    SData/*9:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h0ee4e8e8__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h0ee4e8e8__0 = 0;
    CData/*4:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h08e8c74b__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h08e8c74b__0 = 0;
    CData/*1:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h7c0de452__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h7c0de452__0 = 0;
    VlWide<6>/*165:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha6b0f486__0;
    VL_ZERO_W(166, mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha6b0f486__0);
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h9a06d6e3__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h9a06d6e3__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h43936eca__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h43936eca__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha7d7716a__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha7d7716a__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_MEM__DOT____VdfgTmp_h57ecb1a5__0;
    mycpu_top__DOT__u_Main__DOT__u_MEM__DOT____VdfgTmp_h57ecb1a5__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__pre_valid;
    mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__pre_valid = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__BSC_correctTake_w_o;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__BSC_correctTake_w_o = 0;
    CData/*7:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_repairAction_w_o;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_repairAction_w_o = 0;
    CData/*3:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__firstValidBit;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__firstValidBit = 0;
    IData/*31:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__firstBranchInst;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__firstBranchInst = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_hffe4f6df__0;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_hffe4f6df__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_hffbf6f80__0;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_hffbf6f80__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_hffbb4775__0;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_hffbb4775__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h5452d3f1__0;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h5452d3f1__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h54128866__0;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h54128866__0 = 0;
    VlWide<4>/*109:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h96cd2526__0;
    VL_ZERO_W(110, mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h96cd2526__0);
    VlWide<4>/*109:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h413b3b9e__0;
    VL_ZERO_W(110, mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h413b3b9e__0);
    VlWide<4>/*109:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h9147dd97__0;
    VL_ZERO_W(110, mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h9147dd97__0);
    VlWide<4>/*109:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_hd7f7fec5__0;
    VL_ZERO_W(110, mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_hd7f7fec5__0);
    VlWide<4>/*109:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_he756e32b__0;
    VL_ZERO_W(110, mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_he756e32b__0);
    VlWide<4>/*109:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h85d8a9ee__0;
    VL_ZERO_W(110, mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h85d8a9ee__0);
    VlWide<4>/*109:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h3e996166__0;
    VL_ZERO_W(110, mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h3e996166__0);
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_h7c474841__0;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_h7c474841__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_h020966c0__0;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_h020966c0__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_h40f69812__0;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_h40f69812__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_hed933301__0;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_hed933301__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_heddd41c6__0;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_heddd41c6__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_heddc22ab__0;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_heddc22ab__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_hed973b3c__0;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_hed973b3c__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_h7c5d4f22__0;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_h7c5d4f22__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_Compressor__DOT____VdfgTmp_h34f4bc99__0;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_Compressor__DOT____VdfgTmp_h34f4bc99__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_Compressor__DOT____VdfgTmp_h30733988__0;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_Compressor__DOT____VdfgTmp_h30733988__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h950b0a8d__0;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h950b0a8d__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h803e3be6__0;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h803e3be6__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h51e93d14__0;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h51e93d14__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_hcab7a376__0;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_hcab7a376__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h302ebe31__0;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h302ebe31__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_he4fd78b0__0;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_he4fd78b0__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h2c70d0d4__0;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h2c70d0d4__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h9077d39b__0;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h9077d39b__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h69f1a94a__0;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h69f1a94a__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_hd2c5f6b1__0;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_hd2c5f6b1__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h3fe4b6fd__0;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h3fe4b6fd__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h41e64b47__0;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h41e64b47__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h00ab3053__0;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h00ab3053__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_hd5b602d8__0;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_hd5b602d8__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_hd5c6f60a__0;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_hd5c6f60a__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h96fb8cf6__0;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h96fb8cf6__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h0be58052__0;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h0be58052__0 = 0;
    IData/*31:0*/ mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__aluso;
    mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__aluso = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__predictHit;
    mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__predictHit = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ALU_u__DOT__u_adder__DOT__cout;
    mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ALU_u__DOT__u_adder__DOT__cout = 0;
    IData/*31:0*/ mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ALU_u__DOT__u_adder__DOT__add_sub_res;
    mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ALU_u__DOT__u_adder__DOT__add_sub_res = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__overflow;
    mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__overflow = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ALU_u__DOT__u_adder__DOT__cout;
    mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ALU_u__DOT__u_adder__DOT__cout = 0;
    IData/*31:0*/ mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ALU_u__DOT__u_adder__DOT__add_sub_res;
    mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ALU_u__DOT__u_adder__DOT__add_sub_res = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__ready;
    mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__ready = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT____VdfgTmp_h18f03704__0;
    mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT____VdfgTmp_h18f03704__0 = 0;
    CData/*0:0*/ __VdfgTmp_hfb0b5afa__0;
    __VdfgTmp_hfb0b5afa__0 = 0;
    CData/*0:0*/ __VdfgTmp_h064de08b__0;
    __VdfgTmp_h064de08b__0 = 0;
    CData/*0:0*/ __VdfgTmp_hcad2a531__0;
    __VdfgTmp_hcad2a531__0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_ha33fb1cb__0;
    VlWide<3>/*95:0*/ __Vtemp_h1a39634b__0;
    // Body
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__decorderExcCode_up[0U] 
        = ((0x17U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__decorderExcCode_up
            [0U]) | (8U & ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2) 
                             << 3U) & ((((((0x3ffffff8U 
                                            & ((((((~ 
                                                    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [0U]) 
                                                   & (~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [0U] 
                                                       >> 2U))) 
                                                  & (~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [0U] 
                                                      >> 3U))) 
                                                 & (~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [0U] 
                                                     >> 4U))) 
                                                << 3U) 
                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [0U] 
                                                  >> 2U))) 
                                           | (0xfffffff8U 
                                              & ((((((~ 
                                                      vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [0U]) 
                                                     << 3U) 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [0U] 
                                                       << 1U)) 
                                                   & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [0U]) 
                                                  & ((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [0U] 
                                                       >> 4U)) 
                                                     << 3U)) 
                                                 & ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [0U] 
                                                      >> 5U)) 
                                                    << 3U)))) 
                                          | (0xfffffff8U 
                                             & (((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [0U] 
                                                    << 3U) 
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [0U] 
                                                      << 1U)) 
                                                  & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [0U]) 
                                                 & ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [0U] 
                                                      >> 4U)) 
                                                    << 3U)) 
                                                & ((~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [0U] 
                                                     >> 5U)) 
                                                   << 3U)))) 
                                         | (0x3ffffff8U 
                                            & ((((((~ 
                                                    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [0U]) 
                                                   & (~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [0U] 
                                                       >> 2U))) 
                                                  & (~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [0U] 
                                                      >> 3U))) 
                                                 << 3U) 
                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [0U] 
                                                   >> 1U)) 
                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [0U] 
                                                  >> 2U)))) 
                                        | (0x3ffffff8U 
                                           & (((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [0U] 
                                                  & (~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [0U] 
                                                      >> 2U))) 
                                                 & (~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [0U] 
                                                     >> 3U))) 
                                                << 3U) 
                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [0U] 
                                                  >> 1U)) 
                                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                 [0U] 
                                                 >> 2U)))) 
                                       | (0x3ffffff8U 
                                          & ((((((~ 
                                                  vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [0U]) 
                                                 << 3U) 
                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [0U] 
                                                   << 1U)) 
                                               & ((~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [0U] 
                                                    >> 3U)) 
                                                  << 3U)) 
                                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                 [0U] 
                                                 >> 1U)) 
                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                [0U] 
                                                >> 2U))))) 
                           | (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2)) 
                               << 3U) & ((0xfff8U & 
                                          (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_1) 
                                            << 3U) 
                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                              [0U] 
                                              >> 0x10U))) 
                                         | (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_1)) 
                                             << 3U) 
                                            & ((((((((((((((((((((((((((((((0x38U 
                                                                            & (((((((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x1aU)) 
                                                                                & (~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x1bU))) 
                                                                                & (~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x1cU))) 
                                                                                << 3U) 
                                                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x1aU)) 
                                                                                & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x1eU)) 
                                                                                << 3U)) 
                                                                               & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x1fU)) 
                                                                                << 3U))) 
                                                                           | (0x18U 
                                                                              & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x17U) 
                                                                                & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x1bU)) 
                                                                                << 3U)) 
                                                                                & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x1dU)) 
                                                                                << 3U)) 
                                                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x1bU)) 
                                                                                & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x1fU)) 
                                                                                << 3U)))) 
                                                                          | (0x18U 
                                                                             & (((((((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x1aU)) 
                                                                                << 3U) 
                                                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x18U)) 
                                                                                & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x1dU)) 
                                                                                << 3U)) 
                                                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x1bU)) 
                                                                                & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x1fU)) 
                                                                                << 3U)))) 
                                                                         | (0x18U 
                                                                            & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x17U) 
                                                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x18U)) 
                                                                                & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x1dU)) 
                                                                                << 3U)) 
                                                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x1bU)) 
                                                                               & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x1fU)) 
                                                                                << 3U)))) 
                                                                        | (8U 
                                                                           & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x17U) 
                                                                                & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x1bU)) 
                                                                                << 3U)) 
                                                                                & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x1dU)) 
                                                                                << 3U)) 
                                                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x1bU)) 
                                                                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x1cU)))) 
                                                                       | (8U 
                                                                          & (((((((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x1aU)) 
                                                                                << 3U) 
                                                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x18U)) 
                                                                                & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                               & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x1dU)) 
                                                                                << 3U)) 
                                                                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x1bU)) 
                                                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x1cU)))) 
                                                                      | (8U 
                                                                         & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x17U) 
                                                                                & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x1bU)) 
                                                                                << 3U)) 
                                                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x19U)) 
                                                                              & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x1dU)) 
                                                                                << 3U)) 
                                                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x1bU)) 
                                                                            & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                               [0U] 
                                                                               >> 0x1cU)))) 
                                                                     | (8U 
                                                                        & (((((((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x1aU)) 
                                                                                << 3U) 
                                                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x18U)) 
                                                                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x19U)) 
                                                                             & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x1dU)) 
                                                                                << 3U)) 
                                                                            & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                               [0U] 
                                                                               >> 0x1bU)) 
                                                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                              [0U] 
                                                                              >> 0x1cU)))) 
                                                                    | (8U 
                                                                       & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                               [0U] 
                                                                               >> 0x17U) 
                                                                              & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x1bU)) 
                                                                                << 3U)) 
                                                                             & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                            & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                               [0U] 
                                                                               >> 0x1aU)) 
                                                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                              [0U] 
                                                                              >> 0x1bU)) 
                                                                          & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                             [0U] 
                                                                             >> 0x1cU)))) 
                                                                   | (8U 
                                                                      & (((((((~ 
                                                                               (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x1aU)) 
                                                                              << 3U) 
                                                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x18U)) 
                                                                            & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x1cU)) 
                                                                               << 3U)) 
                                                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                              [0U] 
                                                                              >> 0x1aU)) 
                                                                          & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                             [0U] 
                                                                             >> 0x1bU)) 
                                                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                            [0U] 
                                                                            >> 0x1cU)))) 
                                                                  | (8U 
                                                                     & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                             [0U] 
                                                                             >> 0x17U) 
                                                                            & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x1bU)) 
                                                                               << 3U)) 
                                                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                              [0U] 
                                                                              >> 0x19U)) 
                                                                          & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                             [0U] 
                                                                             >> 0x1aU)) 
                                                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                            [0U] 
                                                                            >> 0x1bU)) 
                                                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                           [0U] 
                                                                           >> 0x1cU)))) 
                                                                 | (8U 
                                                                    & (((((((~ 
                                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                              [0U] 
                                                                              >> 0x1aU)) 
                                                                            << 3U) 
                                                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                              [0U] 
                                                                              >> 0x18U)) 
                                                                          & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                             [0U] 
                                                                             >> 0x19U)) 
                                                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                            [0U] 
                                                                            >> 0x1aU)) 
                                                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                           [0U] 
                                                                           >> 0x1bU)) 
                                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                          [0U] 
                                                                          >> 0x1cU)))) 
                                                                | (0x18U 
                                                                   & (((((((~ 
                                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                             [0U] 
                                                                             >> 0x1aU)) 
                                                                           & (~ 
                                                                              (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                               [0U] 
                                                                               >> 0x1bU))) 
                                                                          & (~ 
                                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                              [0U] 
                                                                              >> 0x1cU))) 
                                                                         << 3U) 
                                                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                           [0U] 
                                                                           >> 0x1aU)) 
                                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                          [0U] 
                                                                          >> 0x1bU)) 
                                                                      & ((~ 
                                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                           [0U] 
                                                                           >> 0x1fU)) 
                                                                         << 3U)))) 
                                                               | (0x18U 
                                                                  & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                          [0U] 
                                                                          >> 0x17U) 
                                                                         & ((~ 
                                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                              [0U] 
                                                                              >> 0x1bU)) 
                                                                            << 3U)) 
                                                                        & ((~ 
                                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                             [0U] 
                                                                             >> 0x1cU)) 
                                                                           << 3U)) 
                                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                          [0U] 
                                                                          >> 0x1aU)) 
                                                                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                         [0U] 
                                                                         >> 0x1bU)) 
                                                                     & ((~ 
                                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                          [0U] 
                                                                          >> 0x1fU)) 
                                                                        << 3U)))) 
                                                              | (0x18U 
                                                                 & (((((((~ 
                                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                           [0U] 
                                                                           >> 0x1aU)) 
                                                                         << 3U) 
                                                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                           [0U] 
                                                                           >> 0x18U)) 
                                                                       & ((~ 
                                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                            [0U] 
                                                                            >> 0x1cU)) 
                                                                          << 3U)) 
                                                                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                         [0U] 
                                                                         >> 0x1aU)) 
                                                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                        [0U] 
                                                                        >> 0x1bU)) 
                                                                    & ((~ 
                                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                         [0U] 
                                                                         >> 0x1fU)) 
                                                                       << 3U)))) 
                                                             | (0x18U 
                                                                & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                        [0U] 
                                                                        >> 0x17U) 
                                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                          [0U] 
                                                                          >> 0x18U)) 
                                                                      & ((~ 
                                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                           [0U] 
                                                                           >> 0x1cU)) 
                                                                         << 3U)) 
                                                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                        [0U] 
                                                                        >> 0x1aU)) 
                                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                       [0U] 
                                                                       >> 0x1bU)) 
                                                                   & ((~ 
                                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                        [0U] 
                                                                        >> 0x1fU)) 
                                                                      << 3U)))) 
                                                            | (0x18U 
                                                               & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                       [0U] 
                                                                       >> 0x17U) 
                                                                      & ((~ 
                                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                           [0U] 
                                                                           >> 0x1bU)) 
                                                                         << 3U)) 
                                                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                        [0U] 
                                                                        >> 0x19U)) 
                                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                       [0U] 
                                                                       >> 0x1aU)) 
                                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                      [0U] 
                                                                      >> 0x1bU)) 
                                                                  & ((~ 
                                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                       [0U] 
                                                                       >> 0x1fU)) 
                                                                     << 3U)))) 
                                                           | (0x18U 
                                                              & (((((((~ 
                                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                        [0U] 
                                                                        >> 0x1aU)) 
                                                                      << 3U) 
                                                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                        [0U] 
                                                                        >> 0x18U)) 
                                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                       [0U] 
                                                                       >> 0x19U)) 
                                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                      [0U] 
                                                                      >> 0x1aU)) 
                                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                     [0U] 
                                                                     >> 0x1bU)) 
                                                                 & ((~ 
                                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                      [0U] 
                                                                      >> 0x1fU)) 
                                                                    << 3U)))) 
                                                          | (0x18U 
                                                             & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                     [0U] 
                                                                     >> 0x17U) 
                                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                       [0U] 
                                                                       >> 0x18U)) 
                                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                      [0U] 
                                                                      >> 0x19U)) 
                                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                     [0U] 
                                                                     >> 0x1aU)) 
                                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                    [0U] 
                                                                    >> 0x1bU)) 
                                                                & ((~ 
                                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                     [0U] 
                                                                     >> 0x1fU)) 
                                                                   << 3U)))) 
                                                         | (8U 
                                                            & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                    [0U] 
                                                                    >> 0x17U) 
                                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                      [0U] 
                                                                      >> 0x18U)) 
                                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                     [0U] 
                                                                     >> 0x19U)) 
                                                                 & ((~ 
                                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                      [0U] 
                                                                      >> 0x1dU)) 
                                                                    << 3U)) 
                                                                & ((~ 
                                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                     [0U] 
                                                                     >> 0x1eU)) 
                                                                   << 3U)) 
                                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                  [0U] 
                                                                  >> 0x1cU)))) 
                                                        | (8U 
                                                           & (((((((~ 
                                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                     [0U] 
                                                                     >> 0x1aU)) 
                                                                   & (~ 
                                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                       [0U] 
                                                                       >> 0x1bU))) 
                                                                  << 3U) 
                                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                    [0U] 
                                                                    >> 0x19U)) 
                                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                   [0U] 
                                                                   >> 0x1aU)) 
                                                               & ((~ 
                                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                    [0U] 
                                                                    >> 0x1eU)) 
                                                                  << 3U)) 
                                                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                 [0U] 
                                                                 >> 0x1cU)))) 
                                                       | (8U 
                                                          & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                  [0U] 
                                                                  >> 0x17U) 
                                                                 & ((~ 
                                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                      [0U] 
                                                                      >> 0x1bU)) 
                                                                    << 3U)) 
                                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                   [0U] 
                                                                   >> 0x19U)) 
                                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                  [0U] 
                                                                  >> 0x1aU)) 
                                                              & ((~ 
                                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                   [0U] 
                                                                   >> 0x1eU)) 
                                                                 << 3U)) 
                                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [0U] 
                                                                >> 0x1cU)))) 
                                                      | (8U 
                                                         & (((((((~ 
                                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                   [0U] 
                                                                   >> 0x1aU)) 
                                                                 & (~ 
                                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                     [0U] 
                                                                     >> 0x1bU))) 
                                                                << 3U) 
                                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                  [0U] 
                                                                  >> 0x19U)) 
                                                              & ((~ 
                                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                   [0U] 
                                                                   >> 0x1dU)) 
                                                                 << 3U)) 
                                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [0U] 
                                                                >> 0x1bU)) 
                                                            & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [0U] 
                                                               >> 0x1cU)))) 
                                                     | (8U 
                                                        & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [0U] 
                                                                >> 0x17U) 
                                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                  [0U] 
                                                                  >> 0x18U)) 
                                                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                 [0U] 
                                                                 >> 0x19U)) 
                                                             & ((~ 
                                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                  [0U] 
                                                                  >> 0x1dU)) 
                                                                << 3U)) 
                                                            & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [0U] 
                                                               >> 0x1bU)) 
                                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [0U] 
                                                              >> 0x1cU)))) 
                                                    | (8U 
                                                       & (((((((~ 
                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                 [0U] 
                                                                 >> 0x1aU)) 
                                                               & (~ 
                                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                   [0U] 
                                                                   >> 0x1bU))) 
                                                              << 3U) 
                                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [0U] 
                                                                >> 0x19U)) 
                                                            & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [0U] 
                                                               >> 0x1aU)) 
                                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [0U] 
                                                              >> 0x1bU)) 
                                                          & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [0U] 
                                                             >> 0x1cU)))) 
                                                   | (8U 
                                                      & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [0U] 
                                                              >> 0x17U) 
                                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [0U] 
                                                                >> 0x18U)) 
                                                            & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [0U] 
                                                               >> 0x19U)) 
                                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [0U] 
                                                              >> 0x1aU)) 
                                                          & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [0U] 
                                                             >> 0x1bU)) 
                                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                            [0U] 
                                                            >> 0x1cU)))) 
                                                  | (8U 
                                                     & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [0U] 
                                                             >> 0x17U) 
                                                            & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [0U] 
                                                               >> 0x18U)) 
                                                           & ((~ 
                                                               (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [0U] 
                                                                >> 0x1cU)) 
                                                              << 3U)) 
                                                          & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [0U] 
                                                             >> 0x1aU)) 
                                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                            [0U] 
                                                            >> 0x1bU)) 
                                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                           [0U] 
                                                           >> 0x1cU)))) 
                                                 | (0x18U 
                                                    & (((((((~ 
                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [0U] 
                                                              >> 0x1aU)) 
                                                            & (~ 
                                                               (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [0U] 
                                                                >> 0x1bU))) 
                                                           << 3U) 
                                                          & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [0U] 
                                                             >> 0x19U)) 
                                                         & ((~ 
                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [0U] 
                                                              >> 0x1dU)) 
                                                            << 3U)) 
                                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                           [0U] 
                                                           >> 0x1bU)) 
                                                       & ((~ 
                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                            [0U] 
                                                            >> 0x1fU)) 
                                                          << 3U)))) 
                                                | (0x18U 
                                                   & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                           [0U] 
                                                           >> 0x17U) 
                                                          & ((~ 
                                                              (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [0U] 
                                                               >> 0x1bU)) 
                                                             << 3U)) 
                                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                            [0U] 
                                                            >> 0x19U)) 
                                                        & ((~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [0U] 
                                                             >> 0x1dU)) 
                                                           << 3U)) 
                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                          [0U] 
                                                          >> 0x1bU)) 
                                                      & ((~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                           [0U] 
                                                           >> 0x1fU)) 
                                                         << 3U)))) 
                                               | (0x18U 
                                                  & (((((((~ 
                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                            [0U] 
                                                            >> 0x1aU)) 
                                                          << 3U) 
                                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                            [0U] 
                                                            >> 0x18U)) 
                                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                           [0U] 
                                                           >> 0x19U)) 
                                                       & ((~ 
                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                            [0U] 
                                                            >> 0x1dU)) 
                                                          << 3U)) 
                                                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                         [0U] 
                                                         >> 0x1bU)) 
                                                     & ((~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                          [0U] 
                                                          >> 0x1fU)) 
                                                        << 3U))))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__trapKind_up[0U] 
        = ((0xdU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__trapKind_up
            [0U]) | ((0xfffffffeU & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2) 
                                      << 1U) & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                [0U] 
                                                & ((~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [0U] 
                                                     >> 2U)) 
                                                   << 1U)))) 
                     | (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2)) 
                         & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_1) 
                            & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                  [0U] >> 0x12U)))) 
                        << 1U)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__trapKind_up[0U] 
        = ((0xbU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__trapKind_up
            [0U]) | ((0xfffffffcU & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2) 
                                      << 2U) & ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                 [0U] 
                                                 << 1U) 
                                                & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                [0U]))) 
                     | (0xfffcU & (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2)) 
                                    << 2U) & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_1) 
                                               << 2U) 
                                              & ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [0U] 
                                                  >> 0xfU) 
                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [0U] 
                                                    >> 0x10U)))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__trapKind_up[0U] 
        = ((7U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__trapKind_up
            [0U]) | ((0xfffffff8U & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2) 
                                      << 3U) & (((~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [0U] 
                                                   >> 1U)) 
                                                 << 3U) 
                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [0U] 
                                                   << 1U)))) 
                     | (0x1fff8U & (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2)) 
                                     << 3U) & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_1) 
                                                << 3U) 
                                               & (((~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [0U] 
                                                     >> 0x11U)) 
                                                   << 3U) 
                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [0U] 
                                                     >> 0xfU)))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__oprand0_sel_up[0U] 
        = ((5U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__oprand0_sel_up
            [0U]) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2) 
                      & (((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                              [0U] >> 2U)) & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                 [0U] 
                                                 >> 3U))) 
                         & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                               [0U] >> 5U)))) << 1U));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__oprand0_sel_up[0U] 
        = ((6U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__oprand0_sel_up
            [0U]) | (1U & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2) 
                            & (((((((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                        [0U] >> 2U)) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                          [0U] >> 3U))) 
                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                      [0U] >> 5U)) 
                                  | (((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                       [0U] >> 2U) 
                                      & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                            [0U] >> 3U))) 
                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                        [0U] >> 5U))) 
                                 | (((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                         [0U] >> 2U)) 
                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                        [0U] >> 3U)) 
                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                       [0U] >> 5U))) 
                                | (((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                        [0U] >> 2U)) 
                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                       [0U] >> 3U)) 
                                   & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                         [0U] >> 5U)))) 
                               | (((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                    [0U] >> 2U) & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [0U] 
                                                    >> 3U))) 
                                  & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                        [0U] >> 5U))))) 
                           | ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2)) 
                              & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_1) 
                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                     [0U] >> 0x13U)) 
                                 | ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_1)) 
                                    & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_0) 
                                        & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                              [0U] 
                                              >> 0x19U))) 
                                       | ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_0)) 
                                          & ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                [0U] 
                                                >> 0x1dU) 
                                               & (~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [0U] 
                                                   >> 0x1fU))) 
                                              | ((~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [0U] 
                                                   >> 0x1dU)) 
                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [0U] 
                                                    >> 0x1fU))) 
                                             | ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                 [0U] 
                                                 >> 0x1dU) 
                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [0U] 
                                                   >> 0x1fU)))))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up[0U] 
        = ((0x3ffdU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up
            [0U]) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2) 
                      & (((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                           [0U] & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                      [0U] >> 3U))) 
                          & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                [0U] >> 4U))) & (~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [0U] 
                                                  >> 5U)))) 
                     << 1U));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up[0U] 
        = ((0x3ffbU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up
            [0U]) | (0xfffffffcU & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2) 
                                     << 2U) & (((((
                                                   (~ 
                                                    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [0U]) 
                                                   << 2U) 
                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [0U] 
                                                     << 1U)) 
                                                 & ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [0U] 
                                                      >> 3U)) 
                                                    << 2U)) 
                                                & ((~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [0U] 
                                                     >> 4U)) 
                                                   << 2U)) 
                                               & ((~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [0U] 
                                                    >> 5U)) 
                                                  << 2U)))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up[0U] 
        = ((0x3ff7U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up
            [0U]) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2) 
                      & ((((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                               [0U] >> 1U)) & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [0U] 
                                                  >> 3U))) 
                          & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                [0U] >> 4U))) & (~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [0U] 
                                                  >> 5U)))) 
                     << 3U));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up[0U] 
        = ((0x3f7fU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up
            [0U]) | (0xffffff80U & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2) 
                                     << 7U) & ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [0U] 
                                                  << 7U) 
                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [0U] 
                                                    << 6U)) 
                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [0U] 
                                                   << 5U)) 
                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [0U] 
                                                  << 2U)))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up[0U] 
        = ((0x2fffU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up
            [0U]) | (0xfffff000U & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2) 
                                     << 0xcU) & (((
                                                   (((~ 
                                                      vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [0U]) 
                                                     << 0xcU) 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [0U] 
                                                       << 0xbU)) 
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [0U] 
                                                      << 9U)) 
                                                  & ((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [0U] 
                                                       >> 4U)) 
                                                     << 0xcU)) 
                                                 & ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [0U] 
                                                      >> 5U)) 
                                                    << 0xcU)))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up[0U] 
        = ((0x1fffU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up
            [0U]) | (0xffffe000U & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2) 
                                     << 0xdU) & (((
                                                   ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [0U] 
                                                     << 0xdU) 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [0U] 
                                                       << 0xcU)) 
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [0U] 
                                                      << 0xaU)) 
                                                  & ((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [0U] 
                                                       >> 4U)) 
                                                     << 0xdU)) 
                                                 & ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [0U] 
                                                      >> 5U)) 
                                                    << 0xdU)))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up[0U] 
        = ((0x3fbfU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up
            [0U]) | (0x40U & ((0xffffffc0U & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2) 
                                               << 6U) 
                                              & ((((((~ 
                                                      vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [0U]) 
                                                     << 6U) 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [0U] 
                                                       << 5U)) 
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [0U] 
                                                      << 4U)) 
                                                  & ((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [0U] 
                                                       >> 4U)) 
                                                     << 6U)) 
                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [0U] 
                                                    << 1U)))) 
                              | (0x1c0U & (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2)) 
                                            << 6U) 
                                           & (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_0)) 
                                               << 6U) 
                                              & ((((((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [0U] 
                                                       >> 0x1aU)) 
                                                     << 6U) 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [0U] 
                                                       >> 0x15U)) 
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [0U] 
                                                      >> 0x16U)) 
                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [0U] 
                                                     >> 0x17U)) 
                                                 & ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [0U] 
                                                      >> 0x1fU)) 
                                                    << 6U))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up[0U] 
        = ((0x3effU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up
            [0U]) | (0x100U & ((0xffffff00U & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2) 
                                                << 8U) 
                                               & (((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [0U] 
                                                    & (~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                        [0U] 
                                                        >> 1U))) 
                                                   << 8U) 
                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [0U] 
                                                     << 6U)))) 
                               | (0x700U & (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2)) 
                                             << 8U) 
                                            & (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_0)) 
                                                << 8U) 
                                               & ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [0U] 
                                                     >> 0x12U) 
                                                    & ((~ 
                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                         [0U] 
                                                         >> 0x1bU)) 
                                                       << 8U)) 
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [0U] 
                                                      >> 0x14U)) 
                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [0U] 
                                                     >> 0x15U))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up[0U] 
        = ((0x3dffU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up
            [0U]) | (0x200U & ((0xfffffe00U & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2) 
                                                << 9U) 
                                               & ((((((~ 
                                                       vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [0U]) 
                                                      & (~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                          [0U] 
                                                          >> 1U))) 
                                                     << 9U) 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [0U] 
                                                       << 7U)) 
                                                   & ((~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                        [0U] 
                                                        >> 4U)) 
                                                      << 9U)) 
                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [0U] 
                                                     << 4U)))) 
                               | (0xe00U & (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2)) 
                                             << 9U) 
                                            & (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_0)) 
                                                << 9U) 
                                               & (((((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [0U] 
                                                       >> 0x1aU)) 
                                                     & (~ 
                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                         [0U] 
                                                         >> 0x1bU))) 
                                                    << 9U) 
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [0U] 
                                                      >> 0x13U)) 
                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [0U] 
                                                     >> 0x14U))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up[0U] 
        = ((0x3bffU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up
            [0U]) | ((0xfffffc00U & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2) 
                                      << 0xaU) & ((
                                                   (((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                        [0U] 
                                                        << 9U) 
                                                       & ((~ 
                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                            [0U] 
                                                            >> 2U)) 
                                                          << 0xaU)) 
                                                      & ((~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                           [0U] 
                                                           >> 3U)) 
                                                         << 0xaU)) 
                                                     & ((~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                          [0U] 
                                                          >> 4U)) 
                                                        << 0xaU)) 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [0U] 
                                                       << 5U)) 
                                                   | ((((((~ 
                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                            [0U] 
                                                            >> 1U)) 
                                                          << 0xaU) 
                                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                            [0U] 
                                                            << 8U)) 
                                                        & ((~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [0U] 
                                                             >> 3U)) 
                                                           << 0xaU)) 
                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                          [0U] 
                                                          << 6U)) 
                                                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                         [0U] 
                                                         << 5U))) 
                                                  | (((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                         [0U] 
                                                         << 9U) 
                                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                           [0U] 
                                                           << 8U)) 
                                                       & ((~ 
                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                            [0U] 
                                                            >> 3U)) 
                                                          << 0xaU)) 
                                                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                         [0U] 
                                                         << 6U)) 
                                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                        [0U] 
                                                        << 5U))))) 
                     | (0xfffc00U & (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2)) 
                                      << 0xaU) & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_1) 
                                                   << 0xaU) 
                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [0U] 
                                                     >> 8U))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up[0U] 
        = ((0x3fefU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up
            [0U]) | (0x10U & ((0x7ffffff0U & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2) 
                                               << 4U) 
                                              & (((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [0U] 
                                                   << 4U) 
                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [0U] 
                                                     << 1U)) 
                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [0U] 
                                                    >> 1U)))) 
                              | (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2)) 
                                  << 4U) & ((0x1fff0U 
                                             & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_1) 
                                                 << 4U) 
                                                & ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [0U] 
                                                    >> 0xcU) 
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [0U] 
                                                      >> 0xfU)))) 
                                            | (0x70U 
                                               & (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_1)) 
                                                   << 4U) 
                                                  & (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_0)) 
                                                      << 4U) 
                                                     & (((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                            [0U] 
                                                            >> 0x16U) 
                                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [0U] 
                                                              >> 0x17U)) 
                                                          & ((~ 
                                                              (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [0U] 
                                                               >> 0x1cU)) 
                                                             << 4U)) 
                                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                            [0U] 
                                                            >> 0x19U)) 
                                                        & ((~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [0U] 
                                                             >> 0x1fU)) 
                                                           << 4U))))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up[0U] 
        = ((0x3fdfU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up
            [0U]) | (0x20U & ((0xffffffe0U & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2) 
                                               << 5U) 
                                              & ((((((((~ 
                                                        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                        [0U]) 
                                                       & (~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                           [0U] 
                                                           >> 2U))) 
                                                      << 5U) 
                                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                        [0U] 
                                                        << 2U)) 
                                                    & ((~ 
                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                         [0U] 
                                                         >> 4U)) 
                                                       << 5U)) 
                                                   & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [0U]) 
                                                  | ((((((~ 
                                                          vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                          [0U]) 
                                                         & (~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [0U] 
                                                             >> 2U))) 
                                                        & (~ 
                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                            [0U] 
                                                            >> 3U))) 
                                                       << 5U) 
                                                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                         [0U] 
                                                         << 1U)) 
                                                     & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [0U])) 
                                                 | (((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                        [0U] 
                                                        & (~ 
                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                            [0U] 
                                                            >> 2U))) 
                                                       & (~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                           [0U] 
                                                           >> 3U))) 
                                                      << 5U) 
                                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                        [0U] 
                                                        << 1U)) 
                                                    & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [0U])))) 
                              | (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2)) 
                                  << 5U) & ((0x3ffe0U 
                                             & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_1) 
                                                 << 5U) 
                                                & ((((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [0U] 
                                                       >> 0x10U)) 
                                                     & (~ 
                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                         [0U] 
                                                         >> 0x12U))) 
                                                    << 5U) 
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [0U] 
                                                      >> 0xeU)))) 
                                            | (0xe0U 
                                               & (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_1)) 
                                                   << 5U) 
                                                  & (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_0)) 
                                                      << 5U) 
                                                     & ((((((~ 
                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [0U] 
                                                              >> 0x1aU)) 
                                                            << 5U) 
                                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [0U] 
                                                              >> 0x16U)) 
                                                          & ((~ 
                                                              (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [0U] 
                                                               >> 0x1cU)) 
                                                             << 5U)) 
                                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                            [0U] 
                                                            >> 0x18U)) 
                                                        & ((~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [0U] 
                                                             >> 0x1fU)) 
                                                           << 5U))))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up[0U] 
        = ((0x37ffU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up
            [0U]) | (0x800U & ((0xfffff800U & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2) 
                                                << 0xbU) 
                                               & (((((((~ 
                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                         [0U] 
                                                         >> 1U)) 
                                                       & (~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                           [0U] 
                                                           >> 2U))) 
                                                      & (~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                          [0U] 
                                                          >> 3U))) 
                                                     & (~ 
                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                         [0U] 
                                                         >> 4U))) 
                                                    << 0xbU) 
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [0U] 
                                                      << 6U)) 
                                                  | ((((((~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                           [0U] 
                                                           >> 1U)) 
                                                         & (~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [0U] 
                                                             >> 2U))) 
                                                        << 0xbU) 
                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                          [0U] 
                                                          << 8U)) 
                                                      & ((~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                           [0U] 
                                                           >> 4U)) 
                                                         << 0xbU)) 
                                                     & ((~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                          [0U] 
                                                          >> 5U)) 
                                                        << 0xbU))))) 
                               | (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2)) 
                                   << 0xbU) & ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_1) 
                                                 & (~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [0U] 
                                                     >> 0x13U))) 
                                                << 0xbU) 
                                               | (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_1)) 
                                                   << 0xbU) 
                                                  & ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_0) 
                                                       & (~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                           [0U] 
                                                           >> 0x19U))) 
                                                      << 0xbU) 
                                                     | (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_0)) 
                                                         << 0xbU) 
                                                        & (((((((((((0x3800U 
                                                                     & (((((~ 
                                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                             [0U] 
                                                                             >> 0x1bU)) 
                                                                           & (~ 
                                                                              (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                               [0U] 
                                                                               >> 0x1cU))) 
                                                                          << 0xbU) 
                                                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                            [0U] 
                                                                            >> 0x12U)) 
                                                                        & ((~ 
                                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                             [0U] 
                                                                             >> 0x1fU)) 
                                                                           << 0xbU))) 
                                                                    | (0x7800U 
                                                                       & (((((~ 
                                                                              (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                               [0U] 
                                                                               >> 0x1bU)) 
                                                                             << 0xbU) 
                                                                            & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                               [0U] 
                                                                               >> 0x11U)) 
                                                                           & ((~ 
                                                                               (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [0U] 
                                                                                >> 0x1dU)) 
                                                                              << 0xbU)) 
                                                                          & ((~ 
                                                                              (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                               [0U] 
                                                                               >> 0x1fU)) 
                                                                             << 0xbU)))) 
                                                                   | (0x7800U 
                                                                      & ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                            [0U] 
                                                                            >> 0x10U) 
                                                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                              [0U] 
                                                                              >> 0x11U)) 
                                                                          & ((~ 
                                                                              (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                               [0U] 
                                                                               >> 0x1dU)) 
                                                                             << 0xbU)) 
                                                                         & ((~ 
                                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                              [0U] 
                                                                              >> 0x1fU)) 
                                                                            << 0xbU)))) 
                                                                  | (0xf800U 
                                                                     & ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                           [0U] 
                                                                           >> 0x10U) 
                                                                          & ((~ 
                                                                              (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                               [0U] 
                                                                               >> 0x1cU)) 
                                                                             << 0xbU)) 
                                                                         & ((~ 
                                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                              [0U] 
                                                                              >> 0x1dU)) 
                                                                            << 0xbU)) 
                                                                        & ((~ 
                                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                             [0U] 
                                                                             >> 0x1fU)) 
                                                                           << 0xbU)))) 
                                                                 | (0x800U 
                                                                    & (((((~ 
                                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                            [0U] 
                                                                            >> 0x1bU)) 
                                                                          & (~ 
                                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                              [0U] 
                                                                              >> 0x1cU))) 
                                                                         & (~ 
                                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                             [0U] 
                                                                             >> 0x1dU))) 
                                                                        << 0xbU) 
                                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                          [0U] 
                                                                          >> 0x14U)))) 
                                                                | (0x800U 
                                                                   & (((((~ 
                                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                           [0U] 
                                                                           >> 0x1bU)) 
                                                                         << 0xbU) 
                                                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                           [0U] 
                                                                           >> 0x11U)) 
                                                                       & ((~ 
                                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                            [0U] 
                                                                            >> 0x1dU)) 
                                                                          << 0xbU)) 
                                                                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                         [0U] 
                                                                         >> 0x14U)))) 
                                                               | (0x800U 
                                                                  & ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                        [0U] 
                                                                        >> 0x10U) 
                                                                       & ((~ 
                                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                            [0U] 
                                                                            >> 0x1cU)) 
                                                                          << 0xbU)) 
                                                                      & ((~ 
                                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                           [0U] 
                                                                           >> 0x1dU)) 
                                                                         << 0xbU)) 
                                                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                        [0U] 
                                                                        >> 0x14U)))) 
                                                              | (0x800U 
                                                                 & ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                       [0U] 
                                                                       >> 0x10U) 
                                                                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                         [0U] 
                                                                         >> 0x11U)) 
                                                                     & ((~ 
                                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                          [0U] 
                                                                          >> 0x1dU)) 
                                                                        << 0xbU)) 
                                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                       [0U] 
                                                                       >> 0x14U)))) 
                                                             | (0x800U 
                                                                & (((((~ 
                                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                        [0U] 
                                                                        >> 0x1bU)) 
                                                                      & (~ 
                                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                          [0U] 
                                                                          >> 0x1cU))) 
                                                                     << 0xbU) 
                                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                       [0U] 
                                                                       >> 0x12U)) 
                                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                      [0U] 
                                                                      >> 0x14U)))) 
                                                            | (0x800U 
                                                               & ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                     [0U] 
                                                                     >> 0x10U) 
                                                                    & ((~ 
                                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                         [0U] 
                                                                         >> 0x1cU)) 
                                                                       << 0xbU)) 
                                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                      [0U] 
                                                                      >> 0x12U)) 
                                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                     [0U] 
                                                                     >> 0x14U)))) 
                                                           | (0x800U 
                                                              & ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                    [0U] 
                                                                    >> 0x10U) 
                                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                      [0U] 
                                                                      >> 0x11U)) 
                                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                     [0U] 
                                                                     >> 0x12U)) 
                                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                    [0U] 
                                                                    >> 0x14U))))))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__ID_down_writeCp0_o 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_3) 
           & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                      >> 0x37U)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__oprand1_sel_up[1U] 
        = ((6U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__oprand1_sel_up
            [1U]) | (1U & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_3) 
                            & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                  [1U] >> 0x19U))) 
                           | ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_3)) 
                              & (((((((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                          [1U] >> 0x1aU)) 
                                      & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                            [1U] >> 0x1bU))) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                           [1U] >> 0x1cU))) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                          [1U] >> 0x1dU))) 
                                   & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                         [1U] >> 0x1eU))) 
                                  & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                        [1U] >> 0x1fU))) 
                                 | ((((((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                            [1U] >> 0x1aU)) 
                                        & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                              [1U] 
                                              >> 0x1bU))) 
                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                          [1U] >> 0x1cU)) 
                                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                         [1U] >> 0x1dU)) 
                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                        [1U] >> 0x1eU)) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                          [1U] >> 0x1fU))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__oprand0_sel_up[1U] 
        = ((3U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__oprand0_sel_up
            [1U]) | (4U & ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_4) 
                             & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                   [1U] >> 0x13U))) 
                            << 2U) | (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_4)) 
                                       << 2U) & (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_3)) 
                                                  << 2U) 
                                                 & ((0x3cU 
                                                     & ((((((~ 
                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [1U] 
                                                              >> 0x1bU)) 
                                                            << 2U) 
                                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [1U] 
                                                              >> 0x1aU)) 
                                                          & ((~ 
                                                              (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [1U] 
                                                               >> 0x1dU)) 
                                                             << 2U)) 
                                                         & ((~ 
                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [1U] 
                                                              >> 0x1fU)) 
                                                            << 2U)) 
                                                        | ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [1U] 
                                                              >> 0x19U) 
                                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [1U] 
                                                                >> 0x1aU)) 
                                                            & ((~ 
                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                 [1U] 
                                                                 >> 0x1dU)) 
                                                               << 2U)) 
                                                           & ((~ 
                                                               (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [1U] 
                                                                >> 0x1fU)) 
                                                              << 2U)))) 
                                                    | (0x7cU 
                                                       & ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [1U] 
                                                             >> 0x19U) 
                                                            & ((~ 
                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                 [1U] 
                                                                 >> 0x1cU)) 
                                                               << 2U)) 
                                                           & ((~ 
                                                               (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [1U] 
                                                                >> 0x1dU)) 
                                                              << 2U)) 
                                                          & ((~ 
                                                              (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [1U] 
                                                               >> 0x1fU)) 
                                                             << 2U)))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__oprand1_sel_up[1U] 
        = ((5U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__oprand1_sel_up
            [1U]) | (2U & ((0x3ffeU & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_4) 
                                        << 1U) & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [1U] 
                                                  >> 0x12U))) 
                           | (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_4)) 
                               << 1U) & (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_3)) 
                                          << 1U) & 
                                         (((((0xeU 
                                              & (((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [1U] 
                                                   >> 0x1cU) 
                                                  & ((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [1U] 
                                                       >> 0x1eU)) 
                                                     << 1U)) 
                                                 & ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [1U] 
                                                      >> 0x1fU)) 
                                                    << 1U))) 
                                             | (2U 
                                                & ((((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [1U] 
                                                       >> 0x1dU)) 
                                                     & (~ 
                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                         [1U] 
                                                         >> 0x1eU))) 
                                                    << 1U) 
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [1U] 
                                                      >> 0x1eU)))) 
                                            | (2U & 
                                               (((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [1U] 
                                                  >> 0x1cU) 
                                                 & ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [1U] 
                                                      >> 0x1eU)) 
                                                    << 1U)) 
                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [1U] 
                                                   >> 0x1eU)))) 
                                           | (2U & 
                                              ((((~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [1U] 
                                                   >> 0x1dU)) 
                                                 << 1U) 
                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [1U] 
                                                   >> 0x1dU)) 
                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [1U] 
                                                  >> 0x1eU)))) 
                                          | (2U & (
                                                   ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [1U] 
                                                     >> 0x1cU) 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [1U] 
                                                       >> 0x1dU)) 
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [1U] 
                                                      >> 0x1eU)))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__oprand1_sel_up[1U] 
        = ((3U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__oprand1_sel_up
            [1U]) | (4U & ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_4) 
                             & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                   [1U] >> 0x13U))) 
                            << 2U) | (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_4)) 
                                       << 2U) & (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_3)) 
                                                  << 2U) 
                                                 & ((0x3cU 
                                                     & ((((((~ 
                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [1U] 
                                                              >> 0x1bU)) 
                                                            << 2U) 
                                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [1U] 
                                                              >> 0x1aU)) 
                                                          & ((~ 
                                                              (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [1U] 
                                                               >> 0x1dU)) 
                                                             << 2U)) 
                                                         & ((~ 
                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [1U] 
                                                              >> 0x1fU)) 
                                                            << 2U)) 
                                                        | ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [1U] 
                                                              >> 0x19U) 
                                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [1U] 
                                                                >> 0x1aU)) 
                                                            & ((~ 
                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                 [1U] 
                                                                 >> 0x1dU)) 
                                                               << 2U)) 
                                                           & ((~ 
                                                               (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [1U] 
                                                                >> 0x1fU)) 
                                                              << 2U)))) 
                                                    | (0x7cU 
                                                       & ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [1U] 
                                                             >> 0x19U) 
                                                            & ((~ 
                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                 [1U] 
                                                                 >> 0x1cU)) 
                                                               << 2U)) 
                                                           & ((~ 
                                                               (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [1U] 
                                                                >> 0x1dU)) 
                                                              << 2U)) 
                                                          & ((~ 
                                                              (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [1U] 
                                                               >> 0x1fU)) 
                                                             << 2U)))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up[1U] 
        = ((0x3ffeU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up
            [1U]) | (1U & ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_3)) 
                           & (((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                  [1U] >> 0x1aU) & 
                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                  [1U] >> 0x1bU)) & 
                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                 [1U] >> 0x1cU)) & 
                               (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                [1U] >> 0x1dU)) & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [1U] 
                                                    >> 0x1fU))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h569b65f1__0 
        = ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2)) 
           & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__temp_2_3) 
              & (IData)((0ULL == (0x2200000000ULL & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i)))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__exceptionSel_up[1U] 
        = ((1U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__exceptionSel_up
            [1U]) | (2U & ((0xffffffeU & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2) 
                                           << 1U) & 
                                          ((((((~ vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                [1U]) 
                                               & (~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [1U] 
                                                   >> 2U))) 
                                              & (~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [1U] 
                                                  >> 3U))) 
                                             & (~ (
                                                   vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [1U] 
                                                   >> 4U))) 
                                            << 1U) 
                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                              [1U] 
                                              >> 4U)))) 
                           | (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2)) 
                               & (((((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                         [1U] >> 0x1aU)) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                           [1U] >> 0x1bU))) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                          [1U] >> 0x1cU))) 
                                   & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                         [1U] >> 0x1eU))) 
                                  & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                        [1U] >> 0x1fU)))) 
                              << 1U))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__ID_down_hasException_o 
        = (1U & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_hasException_p_r_i) 
                  >> 1U) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2) 
                             & ((~ (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                                            >> 0x21U))) 
                                & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hafc7fffa__0))) 
                            | ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2)) 
                               & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h6e16e375__0)))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__exceptionSel_up[1U] 
        = ((2U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__exceptionSel_up
            [1U]) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2) 
                      & ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                          [1U] >> 4U) & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                         [1U] >> 5U))) 
                     | ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2)) 
                        & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_1) 
                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                              [1U] >> 0x13U)))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__ID_down_mduOperator_o 
        = ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__temp_2_3) 
             & (IData)((0x2000000000ULL == (0x2100000000ULL 
                                            & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i)))) 
            << 8U) | ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__temp_2_3) 
                        & (IData)((0x2100000000ULL 
                                   == (0x2100000000ULL 
                                       & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i)))) 
                       << 7U) | ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__temp_2_3) 
                                   & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                                              >> 0x21U))) 
                                  << 6U) | ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__temp_2_3) 
                                              & (IData)(
                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                                                         >> 0x22U))) 
                                             << 5U) 
                                            | ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__temp_2_3) 
                                                 & (IData)(
                                                           (0ULL 
                                                            == 
                                                            (0x2600000000ULL 
                                                             & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i)))) 
                                                << 4U) 
                                               | ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2) 
                                                    & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hd0eb4e79__0) 
                                                       & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hb2e44229__0))) 
                                                   << 3U) 
                                                  | ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2) 
                                                       & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hfd36d646__0) 
                                                          & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hb2e44229__0))) 
                                                      << 2U) 
                                                     | (((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2) 
                                                           & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h1745ca6f__0) 
                                                              & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hb2e44229__0))) 
                                                          | ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2)) 
                                                             & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__temp_2_3) 
                                                                & (IData)(
                                                                          (0x100000000ULL 
                                                                           == 
                                                                           (0x2100000000ULL 
                                                                            & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i)))))) 
                                                         << 1U) 
                                                        | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2) 
                                                            & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hfc6ec919__0) 
                                                               & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hb2e44229__0))) 
                                                           | ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2)) 
                                                              & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__temp_2_3) 
                                                                 & (IData)(
                                                                           (0ULL 
                                                                            == 
                                                                            (0x2100000000ULL 
                                                                             & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i))))))))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__trapKind_up[1U] 
        = ((0xeU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__trapKind_up
            [1U]) | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2) 
                     & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                            [1U] >> 1U)) & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                               [1U] 
                                               >> 2U)))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__decorderExcCode_up[1U] 
        = ((0x1eU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__decorderExcCode_up
            [1U]) | (1U & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2) 
                            & (((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                     [1U] & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                             [1U] >> 2U)) 
                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                       [1U] >> 3U)) 
                                   & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                         [1U] >> 4U))) 
                                  & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                        [1U] >> 5U))) 
                                 | (((((~ vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                        [1U]) & (~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [1U] 
                                                  >> 2U))) 
                                      & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                            [1U] >> 3U))) 
                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                        [1U] >> 4U)) 
                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                       [1U] >> 5U))) 
                                | ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                      [1U] & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                 [1U] 
                                                 >> 2U))) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                           [1U] >> 3U))) 
                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                       [1U] >> 4U)) 
                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                      [1U] >> 5U))) 
                               | (((((~ vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                      [1U]) & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                               [1U] 
                                               >> 2U)) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                          [1U] >> 3U))) 
                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                      [1U] >> 4U)) 
                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                     [1U] >> 5U)))) 
                           | ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2)) 
                              & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_1) 
                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                     [1U] >> 0x13U)) 
                                 | ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_1)) 
                                    & (((((((((((~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [1U] 
                                                  >> 0x1aU)) 
                                                & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [1U] 
                                                    >> 0x1bU))) 
                                               & (~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [1U] 
                                                   >> 0x1cU))) 
                                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                 [1U] 
                                                 >> 0x1dU)) 
                                             & (~ (
                                                   vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [1U] 
                                                   >> 0x1eU))) 
                                            & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                               [1U] 
                                               >> 0x1fU)) 
                                           | ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [1U] 
                                                   >> 0x1aU) 
                                                  & (~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [1U] 
                                                      >> 0x1bU))) 
                                                 & (~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [1U] 
                                                     >> 0x1cU))) 
                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [1U] 
                                                   >> 0x1dU)) 
                                               & (~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [1U] 
                                                   >> 0x1eU))) 
                                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                 [1U] 
                                                 >> 0x1fU))) 
                                          | ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [1U] 
                                                  >> 0x1aU) 
                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [1U] 
                                                    >> 0x1bU)) 
                                                & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [1U] 
                                                    >> 0x1cU))) 
                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [1U] 
                                                  >> 0x1dU)) 
                                              & (~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [1U] 
                                                  >> 0x1eU))) 
                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                [1U] 
                                                >> 0x1fU))) 
                                         | ((((((~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [1U] 
                                                  >> 0x1aU)) 
                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [1U] 
                                                   >> 0x1bU)) 
                                               & (~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [1U] 
                                                   >> 0x1cU))) 
                                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                 [1U] 
                                                 >> 0x1dU)) 
                                             & (~ (
                                                   vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [1U] 
                                                   >> 0x1eU))) 
                                            & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                               [1U] 
                                               >> 0x1fU))) 
                                        | ((((((~ (
                                                   vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [1U] 
                                                   >> 0x1aU)) 
                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [1U] 
                                                  >> 0x1bU)) 
                                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                 [1U] 
                                                 >> 0x1cU)) 
                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                [1U] 
                                                >> 0x1dU)) 
                                            & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [1U] 
                                                  >> 0x1eU))) 
                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                              [1U] 
                                              >> 0x1fU))) 
                                       | ((((((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [1U] 
                                                  >> 0x1aU)) 
                                              & (~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [1U] 
                                                  >> 0x1bU))) 
                                             & (~ (
                                                   vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [1U] 
                                                   >> 0x1cU))) 
                                            & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                               [1U] 
                                               >> 0x1dU)) 
                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                              [1U] 
                                              >> 0x1eU)) 
                                          & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                             [1U] >> 0x1fU)))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__decorderExcCode_up[1U] 
        = ((0x1bU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__decorderExcCode_up
            [1U]) | (4U & ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2) 
                             << 2U) & ((((0x1ffffffcU 
                                          & ((((((~ 
                                                  vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [1U]) 
                                                 & (~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [1U] 
                                                     >> 2U))) 
                                                & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [1U] 
                                                    >> 3U))) 
                                               & (~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [1U] 
                                                   >> 4U))) 
                                              << 2U) 
                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                [1U] 
                                                >> 3U))) 
                                         | (0x1ffffffcU 
                                            & ((((((~ 
                                                    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [1U]) 
                                                   & (~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [1U] 
                                                       >> 2U))) 
                                                  & (~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [1U] 
                                                      >> 3U))) 
                                                 << 2U) 
                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [1U] 
                                                   >> 2U)) 
                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [1U] 
                                                  >> 3U)))) 
                                        | (0x1ffffffcU 
                                           & (((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [1U] 
                                                  & (~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [1U] 
                                                      >> 2U))) 
                                                 & (~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [1U] 
                                                     >> 3U))) 
                                                << 2U) 
                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [1U] 
                                                  >> 2U)) 
                                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                 [1U] 
                                                 >> 3U)))) 
                                       | (0x1ffffffcU 
                                          & ((((((~ 
                                                  vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [1U]) 
                                                 << 2U) 
                                                & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                [1U]) 
                                               & ((~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [1U] 
                                                    >> 3U)) 
                                                  << 2U)) 
                                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                 [1U] 
                                                 >> 2U)) 
                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                [1U] 
                                                >> 3U))))) 
                           | (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2)) 
                               << 2U) & ((0x7ffcU & 
                                          (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_1) 
                                            << 2U) 
                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                              [1U] 
                                              >> 0x11U))) 
                                         | (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_1)) 
                                             << 2U) 
                                            & (((((((((((((((0x1cU 
                                                             & (((((((~ 
                                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                       [1U] 
                                                                       >> 0x1aU)) 
                                                                     & (~ 
                                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                         [1U] 
                                                                         >> 0x1bU))) 
                                                                    & (~ 
                                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                        [1U] 
                                                                        >> 0x1cU))) 
                                                                   << 2U) 
                                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                     [1U] 
                                                                     >> 0x1bU)) 
                                                                 & ((~ 
                                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                      [1U] 
                                                                      >> 0x1eU)) 
                                                                    << 2U)) 
                                                                & ((~ 
                                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                     [1U] 
                                                                     >> 0x1fU)) 
                                                                   << 2U))) 
                                                            | (4U 
                                                               & (((((((~ 
                                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                         [1U] 
                                                                         >> 0x1aU)) 
                                                                       & (~ 
                                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                           [1U] 
                                                                           >> 0x1bU))) 
                                                                      & (~ 
                                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                          [1U] 
                                                                          >> 0x1cU))) 
                                                                     & (~ 
                                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                         [1U] 
                                                                         >> 0x1dU))) 
                                                                    & (~ 
                                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                        [1U] 
                                                                        >> 0x1eU))) 
                                                                   << 2U) 
                                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                     [1U] 
                                                                     >> 0x1dU)))) 
                                                           | (4U 
                                                              & (((((((~ 
                                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                        [1U] 
                                                                        >> 0x1aU)) 
                                                                      & (~ 
                                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                          [1U] 
                                                                          >> 0x1bU))) 
                                                                     << 2U) 
                                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                       [1U] 
                                                                       >> 0x1aU)) 
                                                                   & ((~ 
                                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                        [1U] 
                                                                        >> 0x1dU)) 
                                                                      << 2U)) 
                                                                  & ((~ 
                                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                       [1U] 
                                                                       >> 0x1eU)) 
                                                                     << 2U)) 
                                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                    [1U] 
                                                                    >> 0x1dU)))) 
                                                          | (4U 
                                                             & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                     [1U] 
                                                                     >> 0x18U) 
                                                                    & ((~ 
                                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                         [1U] 
                                                                         >> 0x1bU)) 
                                                                       << 2U)) 
                                                                   & ((~ 
                                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                        [1U] 
                                                                        >> 0x1cU)) 
                                                                      << 2U)) 
                                                                  & ((~ 
                                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                       [1U] 
                                                                       >> 0x1dU)) 
                                                                     << 2U)) 
                                                                 & ((~ 
                                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                      [1U] 
                                                                      >> 0x1eU)) 
                                                                    << 2U)) 
                                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                   [1U] 
                                                                   >> 0x1dU)))) 
                                                         | (4U 
                                                            & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                    [1U] 
                                                                    >> 0x18U) 
                                                                   & ((~ 
                                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                        [1U] 
                                                                        >> 0x1bU)) 
                                                                      << 2U)) 
                                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                     [1U] 
                                                                     >> 0x1aU)) 
                                                                 & ((~ 
                                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                      [1U] 
                                                                      >> 0x1dU)) 
                                                                    << 2U)) 
                                                                & ((~ 
                                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                     [1U] 
                                                                     >> 0x1eU)) 
                                                                   << 2U)) 
                                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                  [1U] 
                                                                  >> 0x1dU)))) 
                                                        | (4U 
                                                           & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                   [1U] 
                                                                   >> 0x18U) 
                                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                     [1U] 
                                                                     >> 0x19U)) 
                                                                 & ((~ 
                                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                      [1U] 
                                                                      >> 0x1cU)) 
                                                                    << 2U)) 
                                                                & ((~ 
                                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                     [1U] 
                                                                     >> 0x1dU)) 
                                                                   << 2U)) 
                                                               & ((~ 
                                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                    [1U] 
                                                                    >> 0x1eU)) 
                                                                  << 2U)) 
                                                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                 [1U] 
                                                                 >> 0x1dU)))) 
                                                       | (4U 
                                                          & (((((((~ 
                                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                    [1U] 
                                                                    >> 0x1aU)) 
                                                                  << 2U) 
                                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                    [1U] 
                                                                    >> 0x19U)) 
                                                                & ((~ 
                                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                     [1U] 
                                                                     >> 0x1cU)) 
                                                                   << 2U)) 
                                                               & ((~ 
                                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                    [1U] 
                                                                    >> 0x1dU)) 
                                                                  << 2U)) 
                                                              & ((~ 
                                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                   [1U] 
                                                                   >> 0x1eU)) 
                                                                 << 2U)) 
                                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [1U] 
                                                                >> 0x1dU)))) 
                                                      | (4U 
                                                         & (((((((~ 
                                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                   [1U] 
                                                                   >> 0x1aU)) 
                                                                 << 2U) 
                                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                   [1U] 
                                                                   >> 0x19U)) 
                                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                  [1U] 
                                                                  >> 0x1aU)) 
                                                              & ((~ 
                                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                   [1U] 
                                                                   >> 0x1dU)) 
                                                                 << 2U)) 
                                                             & ((~ 
                                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                  [1U] 
                                                                  >> 0x1eU)) 
                                                                << 2U)) 
                                                            & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [1U] 
                                                               >> 0x1dU)))) 
                                                     | (4U 
                                                        & (((((((~ 
                                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                  [1U] 
                                                                  >> 0x1aU)) 
                                                                & (~ 
                                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                    [1U] 
                                                                    >> 0x1bU))) 
                                                               & (~ 
                                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                   [1U] 
                                                                   >> 0x1cU))) 
                                                              << 2U) 
                                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [1U] 
                                                                >> 0x1bU)) 
                                                            & ((~ 
                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                 [1U] 
                                                                 >> 0x1eU)) 
                                                               << 2U)) 
                                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [1U] 
                                                              >> 0x1dU)))) 
                                                    | (4U 
                                                       & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [1U] 
                                                               >> 0x18U) 
                                                              & ((~ 
                                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                   [1U] 
                                                                   >> 0x1bU)) 
                                                                 << 2U)) 
                                                             & ((~ 
                                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                  [1U] 
                                                                  >> 0x1cU)) 
                                                                << 2U)) 
                                                            & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [1U] 
                                                               >> 0x1bU)) 
                                                           & ((~ 
                                                               (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [1U] 
                                                                >> 0x1eU)) 
                                                              << 2U)) 
                                                          & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [1U] 
                                                             >> 0x1dU)))) 
                                                   | (4U 
                                                      & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [1U] 
                                                              >> 0x18U) 
                                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [1U] 
                                                                >> 0x19U)) 
                                                            & ((~ 
                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                 [1U] 
                                                                 >> 0x1cU)) 
                                                               << 2U)) 
                                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [1U] 
                                                              >> 0x1bU)) 
                                                          & ((~ 
                                                              (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [1U] 
                                                               >> 0x1eU)) 
                                                             << 2U)) 
                                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                            [1U] 
                                                            >> 0x1dU)))) 
                                                  | (4U 
                                                     & (((((((~ 
                                                              (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [1U] 
                                                               >> 0x1aU)) 
                                                             << 2U) 
                                                            & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [1U] 
                                                               >> 0x19U)) 
                                                           & ((~ 
                                                               (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [1U] 
                                                                >> 0x1cU)) 
                                                              << 2U)) 
                                                          & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [1U] 
                                                             >> 0x1bU)) 
                                                         & ((~ 
                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [1U] 
                                                              >> 0x1eU)) 
                                                            << 2U)) 
                                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                           [1U] 
                                                           >> 0x1dU)))) 
                                                 | (4U 
                                                    & (((((((~ 
                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [1U] 
                                                              >> 0x1aU)) 
                                                            << 2U) 
                                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [1U] 
                                                              >> 0x19U)) 
                                                          & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [1U] 
                                                             >> 0x1aU)) 
                                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                            [1U] 
                                                            >> 0x1bU)) 
                                                        & ((~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [1U] 
                                                             >> 0x1eU)) 
                                                           << 2U)) 
                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                          [1U] 
                                                          >> 0x1dU)))) 
                                                | (4U 
                                                   & (((((((~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [1U] 
                                                             >> 0x1aU)) 
                                                           & (~ 
                                                              (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [1U] 
                                                               >> 0x1bU))) 
                                                          & (~ 
                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [1U] 
                                                              >> 0x1cU))) 
                                                         & (~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [1U] 
                                                             >> 0x1dU))) 
                                                        << 2U) 
                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                          [1U] 
                                                          >> 0x1cU)) 
                                                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                         [1U] 
                                                         >> 0x1dU)))) 
                                               | (4U 
                                                  & (((((((~ 
                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                            [1U] 
                                                            >> 0x1aU)) 
                                                          & (~ 
                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [1U] 
                                                              >> 0x1bU))) 
                                                         & (~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [1U] 
                                                             >> 0x1cU))) 
                                                        << 2U) 
                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                          [1U] 
                                                          >> 0x1bU)) 
                                                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                         [1U] 
                                                         >> 0x1cU)) 
                                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                        [1U] 
                                                        >> 0x1dU))))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__decorderExcCode_up[1U] 
        = ((0x17U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__decorderExcCode_up
            [1U]) | (8U & ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2) 
                             << 3U) & ((((((0x3ffffff8U 
                                            & ((((((~ 
                                                    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [1U]) 
                                                   & (~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [1U] 
                                                       >> 2U))) 
                                                  & (~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [1U] 
                                                      >> 3U))) 
                                                 & (~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [1U] 
                                                     >> 4U))) 
                                                << 3U) 
                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [1U] 
                                                  >> 2U))) 
                                           | (0xfffffff8U 
                                              & ((((((~ 
                                                      vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [1U]) 
                                                     << 3U) 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [1U] 
                                                       << 1U)) 
                                                   & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [1U]) 
                                                  & ((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [1U] 
                                                       >> 4U)) 
                                                     << 3U)) 
                                                 & ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [1U] 
                                                      >> 5U)) 
                                                    << 3U)))) 
                                          | (0xfffffff8U 
                                             & (((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [1U] 
                                                    << 3U) 
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [1U] 
                                                      << 1U)) 
                                                  & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [1U]) 
                                                 & ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [1U] 
                                                      >> 4U)) 
                                                    << 3U)) 
                                                & ((~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [1U] 
                                                     >> 5U)) 
                                                   << 3U)))) 
                                         | (0x3ffffff8U 
                                            & ((((((~ 
                                                    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [1U]) 
                                                   & (~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [1U] 
                                                       >> 2U))) 
                                                  & (~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [1U] 
                                                      >> 3U))) 
                                                 << 3U) 
                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [1U] 
                                                   >> 1U)) 
                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [1U] 
                                                  >> 2U)))) 
                                        | (0x3ffffff8U 
                                           & (((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [1U] 
                                                  & (~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [1U] 
                                                      >> 2U))) 
                                                 & (~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [1U] 
                                                     >> 3U))) 
                                                << 3U) 
                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [1U] 
                                                  >> 1U)) 
                                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                 [1U] 
                                                 >> 2U)))) 
                                       | (0x3ffffff8U 
                                          & ((((((~ 
                                                  vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [1U]) 
                                                 << 3U) 
                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [1U] 
                                                   << 1U)) 
                                               & ((~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [1U] 
                                                    >> 3U)) 
                                                  << 3U)) 
                                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                 [1U] 
                                                 >> 1U)) 
                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                [1U] 
                                                >> 2U))))) 
                           | (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2)) 
                               << 3U) & ((0xfff8U & 
                                          (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_1) 
                                            << 3U) 
                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                              [1U] 
                                              >> 0x10U))) 
                                         | (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_1)) 
                                             << 3U) 
                                            & ((((((((((((((((((((((((((((((0x38U 
                                                                            & (((((((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x1aU)) 
                                                                                & (~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x1bU))) 
                                                                                & (~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x1cU))) 
                                                                                << 3U) 
                                                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x1aU)) 
                                                                                & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x1eU)) 
                                                                                << 3U)) 
                                                                               & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x1fU)) 
                                                                                << 3U))) 
                                                                           | (0x18U 
                                                                              & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x17U) 
                                                                                & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x1bU)) 
                                                                                << 3U)) 
                                                                                & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x1dU)) 
                                                                                << 3U)) 
                                                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x1bU)) 
                                                                                & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x1fU)) 
                                                                                << 3U)))) 
                                                                          | (0x18U 
                                                                             & (((((((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x1aU)) 
                                                                                << 3U) 
                                                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x18U)) 
                                                                                & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x1dU)) 
                                                                                << 3U)) 
                                                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x1bU)) 
                                                                                & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x1fU)) 
                                                                                << 3U)))) 
                                                                         | (0x18U 
                                                                            & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x17U) 
                                                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x18U)) 
                                                                                & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x1dU)) 
                                                                                << 3U)) 
                                                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x1bU)) 
                                                                               & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x1fU)) 
                                                                                << 3U)))) 
                                                                        | (8U 
                                                                           & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x17U) 
                                                                                & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x1bU)) 
                                                                                << 3U)) 
                                                                                & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x1dU)) 
                                                                                << 3U)) 
                                                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x1bU)) 
                                                                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x1cU)))) 
                                                                       | (8U 
                                                                          & (((((((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x1aU)) 
                                                                                << 3U) 
                                                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x18U)) 
                                                                                & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                               & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x1dU)) 
                                                                                << 3U)) 
                                                                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x1bU)) 
                                                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x1cU)))) 
                                                                      | (8U 
                                                                         & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x17U) 
                                                                                & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x1bU)) 
                                                                                << 3U)) 
                                                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x19U)) 
                                                                              & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x1dU)) 
                                                                                << 3U)) 
                                                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x1bU)) 
                                                                            & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                               [1U] 
                                                                               >> 0x1cU)))) 
                                                                     | (8U 
                                                                        & (((((((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x1aU)) 
                                                                                << 3U) 
                                                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x18U)) 
                                                                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x19U)) 
                                                                             & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x1dU)) 
                                                                                << 3U)) 
                                                                            & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                               [1U] 
                                                                               >> 0x1bU)) 
                                                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                              [1U] 
                                                                              >> 0x1cU)))) 
                                                                    | (8U 
                                                                       & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                               [1U] 
                                                                               >> 0x17U) 
                                                                              & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x1bU)) 
                                                                                << 3U)) 
                                                                             & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                            & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                               [1U] 
                                                                               >> 0x1aU)) 
                                                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                              [1U] 
                                                                              >> 0x1bU)) 
                                                                          & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                             [1U] 
                                                                             >> 0x1cU)))) 
                                                                   | (8U 
                                                                      & (((((((~ 
                                                                               (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x1aU)) 
                                                                              << 3U) 
                                                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x18U)) 
                                                                            & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x1cU)) 
                                                                               << 3U)) 
                                                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                              [1U] 
                                                                              >> 0x1aU)) 
                                                                          & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                             [1U] 
                                                                             >> 0x1bU)) 
                                                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                            [1U] 
                                                                            >> 0x1cU)))) 
                                                                  | (8U 
                                                                     & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                             [1U] 
                                                                             >> 0x17U) 
                                                                            & ((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x1bU)) 
                                                                               << 3U)) 
                                                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                              [1U] 
                                                                              >> 0x19U)) 
                                                                          & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                             [1U] 
                                                                             >> 0x1aU)) 
                                                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                            [1U] 
                                                                            >> 0x1bU)) 
                                                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                           [1U] 
                                                                           >> 0x1cU)))) 
                                                                 | (8U 
                                                                    & (((((((~ 
                                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                              [1U] 
                                                                              >> 0x1aU)) 
                                                                            << 3U) 
                                                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                              [1U] 
                                                                              >> 0x18U)) 
                                                                          & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                             [1U] 
                                                                             >> 0x19U)) 
                                                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                            [1U] 
                                                                            >> 0x1aU)) 
                                                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                           [1U] 
                                                                           >> 0x1bU)) 
                                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                          [1U] 
                                                                          >> 0x1cU)))) 
                                                                | (0x18U 
                                                                   & (((((((~ 
                                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                             [1U] 
                                                                             >> 0x1aU)) 
                                                                           & (~ 
                                                                              (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                               [1U] 
                                                                               >> 0x1bU))) 
                                                                          & (~ 
                                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                              [1U] 
                                                                              >> 0x1cU))) 
                                                                         << 3U) 
                                                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                           [1U] 
                                                                           >> 0x1aU)) 
                                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                          [1U] 
                                                                          >> 0x1bU)) 
                                                                      & ((~ 
                                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                           [1U] 
                                                                           >> 0x1fU)) 
                                                                         << 3U)))) 
                                                               | (0x18U 
                                                                  & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                          [1U] 
                                                                          >> 0x17U) 
                                                                         & ((~ 
                                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                              [1U] 
                                                                              >> 0x1bU)) 
                                                                            << 3U)) 
                                                                        & ((~ 
                                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                             [1U] 
                                                                             >> 0x1cU)) 
                                                                           << 3U)) 
                                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                          [1U] 
                                                                          >> 0x1aU)) 
                                                                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                         [1U] 
                                                                         >> 0x1bU)) 
                                                                     & ((~ 
                                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                          [1U] 
                                                                          >> 0x1fU)) 
                                                                        << 3U)))) 
                                                              | (0x18U 
                                                                 & (((((((~ 
                                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                           [1U] 
                                                                           >> 0x1aU)) 
                                                                         << 3U) 
                                                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                           [1U] 
                                                                           >> 0x18U)) 
                                                                       & ((~ 
                                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                            [1U] 
                                                                            >> 0x1cU)) 
                                                                          << 3U)) 
                                                                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                         [1U] 
                                                                         >> 0x1aU)) 
                                                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                        [1U] 
                                                                        >> 0x1bU)) 
                                                                    & ((~ 
                                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                         [1U] 
                                                                         >> 0x1fU)) 
                                                                       << 3U)))) 
                                                             | (0x18U 
                                                                & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                        [1U] 
                                                                        >> 0x17U) 
                                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                          [1U] 
                                                                          >> 0x18U)) 
                                                                      & ((~ 
                                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                           [1U] 
                                                                           >> 0x1cU)) 
                                                                         << 3U)) 
                                                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                        [1U] 
                                                                        >> 0x1aU)) 
                                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                       [1U] 
                                                                       >> 0x1bU)) 
                                                                   & ((~ 
                                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                        [1U] 
                                                                        >> 0x1fU)) 
                                                                      << 3U)))) 
                                                            | (0x18U 
                                                               & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                       [1U] 
                                                                       >> 0x17U) 
                                                                      & ((~ 
                                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                           [1U] 
                                                                           >> 0x1bU)) 
                                                                         << 3U)) 
                                                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                        [1U] 
                                                                        >> 0x19U)) 
                                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                       [1U] 
                                                                       >> 0x1aU)) 
                                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                      [1U] 
                                                                      >> 0x1bU)) 
                                                                  & ((~ 
                                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                       [1U] 
                                                                       >> 0x1fU)) 
                                                                     << 3U)))) 
                                                           | (0x18U 
                                                              & (((((((~ 
                                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                        [1U] 
                                                                        >> 0x1aU)) 
                                                                      << 3U) 
                                                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                        [1U] 
                                                                        >> 0x18U)) 
                                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                       [1U] 
                                                                       >> 0x19U)) 
                                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                      [1U] 
                                                                      >> 0x1aU)) 
                                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                     [1U] 
                                                                     >> 0x1bU)) 
                                                                 & ((~ 
                                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                      [1U] 
                                                                      >> 0x1fU)) 
                                                                    << 3U)))) 
                                                          | (0x18U 
                                                             & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                     [1U] 
                                                                     >> 0x17U) 
                                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                       [1U] 
                                                                       >> 0x18U)) 
                                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                      [1U] 
                                                                      >> 0x19U)) 
                                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                     [1U] 
                                                                     >> 0x1aU)) 
                                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                    [1U] 
                                                                    >> 0x1bU)) 
                                                                & ((~ 
                                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                     [1U] 
                                                                     >> 0x1fU)) 
                                                                   << 3U)))) 
                                                         | (8U 
                                                            & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                    [1U] 
                                                                    >> 0x17U) 
                                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                      [1U] 
                                                                      >> 0x18U)) 
                                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                     [1U] 
                                                                     >> 0x19U)) 
                                                                 & ((~ 
                                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                      [1U] 
                                                                      >> 0x1dU)) 
                                                                    << 3U)) 
                                                                & ((~ 
                                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                     [1U] 
                                                                     >> 0x1eU)) 
                                                                   << 3U)) 
                                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                  [1U] 
                                                                  >> 0x1cU)))) 
                                                        | (8U 
                                                           & (((((((~ 
                                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                     [1U] 
                                                                     >> 0x1aU)) 
                                                                   & (~ 
                                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                       [1U] 
                                                                       >> 0x1bU))) 
                                                                  << 3U) 
                                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                    [1U] 
                                                                    >> 0x19U)) 
                                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                   [1U] 
                                                                   >> 0x1aU)) 
                                                               & ((~ 
                                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                    [1U] 
                                                                    >> 0x1eU)) 
                                                                  << 3U)) 
                                                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                 [1U] 
                                                                 >> 0x1cU)))) 
                                                       | (8U 
                                                          & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                  [1U] 
                                                                  >> 0x17U) 
                                                                 & ((~ 
                                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                      [1U] 
                                                                      >> 0x1bU)) 
                                                                    << 3U)) 
                                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                   [1U] 
                                                                   >> 0x19U)) 
                                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                  [1U] 
                                                                  >> 0x1aU)) 
                                                              & ((~ 
                                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                   [1U] 
                                                                   >> 0x1eU)) 
                                                                 << 3U)) 
                                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [1U] 
                                                                >> 0x1cU)))) 
                                                      | (8U 
                                                         & (((((((~ 
                                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                   [1U] 
                                                                   >> 0x1aU)) 
                                                                 & (~ 
                                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                     [1U] 
                                                                     >> 0x1bU))) 
                                                                << 3U) 
                                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                  [1U] 
                                                                  >> 0x19U)) 
                                                              & ((~ 
                                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                   [1U] 
                                                                   >> 0x1dU)) 
                                                                 << 3U)) 
                                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [1U] 
                                                                >> 0x1bU)) 
                                                            & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [1U] 
                                                               >> 0x1cU)))) 
                                                     | (8U 
                                                        & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [1U] 
                                                                >> 0x17U) 
                                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                  [1U] 
                                                                  >> 0x18U)) 
                                                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                 [1U] 
                                                                 >> 0x19U)) 
                                                             & ((~ 
                                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                  [1U] 
                                                                  >> 0x1dU)) 
                                                                << 3U)) 
                                                            & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [1U] 
                                                               >> 0x1bU)) 
                                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [1U] 
                                                              >> 0x1cU)))) 
                                                    | (8U 
                                                       & (((((((~ 
                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                 [1U] 
                                                                 >> 0x1aU)) 
                                                               & (~ 
                                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                   [1U] 
                                                                   >> 0x1bU))) 
                                                              << 3U) 
                                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [1U] 
                                                                >> 0x19U)) 
                                                            & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [1U] 
                                                               >> 0x1aU)) 
                                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [1U] 
                                                              >> 0x1bU)) 
                                                          & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [1U] 
                                                             >> 0x1cU)))) 
                                                   | (8U 
                                                      & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [1U] 
                                                              >> 0x17U) 
                                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [1U] 
                                                                >> 0x18U)) 
                                                            & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [1U] 
                                                               >> 0x19U)) 
                                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [1U] 
                                                              >> 0x1aU)) 
                                                          & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [1U] 
                                                             >> 0x1bU)) 
                                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                            [1U] 
                                                            >> 0x1cU)))) 
                                                  | (8U 
                                                     & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [1U] 
                                                             >> 0x17U) 
                                                            & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [1U] 
                                                               >> 0x18U)) 
                                                           & ((~ 
                                                               (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [1U] 
                                                                >> 0x1cU)) 
                                                              << 3U)) 
                                                          & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [1U] 
                                                             >> 0x1aU)) 
                                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                            [1U] 
                                                            >> 0x1bU)) 
                                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                           [1U] 
                                                           >> 0x1cU)))) 
                                                 | (0x18U 
                                                    & (((((((~ 
                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [1U] 
                                                              >> 0x1aU)) 
                                                            & (~ 
                                                               (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [1U] 
                                                                >> 0x1bU))) 
                                                           << 3U) 
                                                          & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [1U] 
                                                             >> 0x19U)) 
                                                         & ((~ 
                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [1U] 
                                                              >> 0x1dU)) 
                                                            << 3U)) 
                                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                           [1U] 
                                                           >> 0x1bU)) 
                                                       & ((~ 
                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                            [1U] 
                                                            >> 0x1fU)) 
                                                          << 3U)))) 
                                                | (0x18U 
                                                   & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                           [1U] 
                                                           >> 0x17U) 
                                                          & ((~ 
                                                              (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [1U] 
                                                               >> 0x1bU)) 
                                                             << 3U)) 
                                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                            [1U] 
                                                            >> 0x19U)) 
                                                        & ((~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [1U] 
                                                             >> 0x1dU)) 
                                                           << 3U)) 
                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                          [1U] 
                                                          >> 0x1bU)) 
                                                      & ((~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                           [1U] 
                                                           >> 0x1fU)) 
                                                         << 3U)))) 
                                               | (0x18U 
                                                  & (((((((~ 
                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                            [1U] 
                                                            >> 0x1aU)) 
                                                          << 3U) 
                                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                            [1U] 
                                                            >> 0x18U)) 
                                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                           [1U] 
                                                           >> 0x19U)) 
                                                       & ((~ 
                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                            [1U] 
                                                            >> 0x1dU)) 
                                                          << 3U)) 
                                                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                         [1U] 
                                                         >> 0x1bU)) 
                                                     & ((~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                          [1U] 
                                                          >> 0x1fU)) 
                                                        << 3U))))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__trapKind_up[1U] 
        = ((0xdU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__trapKind_up
            [1U]) | ((0xfffffffeU & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2) 
                                      << 1U) & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                [1U] 
                                                & ((~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [1U] 
                                                     >> 2U)) 
                                                   << 1U)))) 
                     | (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2)) 
                         & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_1) 
                            & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                  [1U] >> 0x12U)))) 
                        << 1U)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__trapKind_up[1U] 
        = ((0xbU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__trapKind_up
            [1U]) | ((0xfffffffcU & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2) 
                                      << 2U) & ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                 [1U] 
                                                 << 1U) 
                                                & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                [1U]))) 
                     | (0xfffcU & (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2)) 
                                    << 2U) & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_1) 
                                               << 2U) 
                                              & ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [1U] 
                                                  >> 0xfU) 
                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [1U] 
                                                    >> 0x10U)))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__trapKind_up[1U] 
        = ((7U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__trapKind_up
            [1U]) | ((0xfffffff8U & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2) 
                                      << 3U) & (((~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [1U] 
                                                   >> 1U)) 
                                                 << 3U) 
                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [1U] 
                                                   << 1U)))) 
                     | (0x1fff8U & (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2)) 
                                     << 3U) & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_1) 
                                                << 3U) 
                                               & (((~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [1U] 
                                                     >> 0x11U)) 
                                                   << 3U) 
                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [1U] 
                                                     >> 0xfU)))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__oprand0_sel_up[1U] 
        = ((5U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__oprand0_sel_up
            [1U]) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2) 
                      & (((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                              [1U] >> 2U)) & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                 [1U] 
                                                 >> 3U))) 
                         & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                               [1U] >> 5U)))) << 1U));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__oprand0_sel_up[1U] 
        = ((6U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__oprand0_sel_up
            [1U]) | (1U & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2) 
                            & (((((((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                        [1U] >> 2U)) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                          [1U] >> 3U))) 
                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                      [1U] >> 5U)) 
                                  | (((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                       [1U] >> 2U) 
                                      & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                            [1U] >> 3U))) 
                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                        [1U] >> 5U))) 
                                 | (((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                         [1U] >> 2U)) 
                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                        [1U] >> 3U)) 
                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                       [1U] >> 5U))) 
                                | (((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                        [1U] >> 2U)) 
                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                       [1U] >> 3U)) 
                                   & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                         [1U] >> 5U)))) 
                               | (((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                    [1U] >> 2U) & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [1U] 
                                                    >> 3U))) 
                                  & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                        [1U] >> 5U))))) 
                           | ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2)) 
                              & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_1) 
                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                     [1U] >> 0x13U)) 
                                 | ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_1)) 
                                    & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_0) 
                                        & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                              [1U] 
                                              >> 0x19U))) 
                                       | ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_0)) 
                                          & ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                [1U] 
                                                >> 0x1dU) 
                                               & (~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [1U] 
                                                   >> 0x1fU))) 
                                              | ((~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [1U] 
                                                   >> 0x1dU)) 
                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [1U] 
                                                    >> 0x1fU))) 
                                             | ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                 [1U] 
                                                 >> 0x1dU) 
                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [1U] 
                                                   >> 0x1fU)))))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up[1U] 
        = ((0x3ffdU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up
            [1U]) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2) 
                      & (((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                           [1U] & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                      [1U] >> 3U))) 
                          & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                [1U] >> 4U))) & (~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [1U] 
                                                  >> 5U)))) 
                     << 1U));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up[1U] 
        = ((0x3ffbU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up
            [1U]) | (0xfffffffcU & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2) 
                                     << 2U) & (((((
                                                   (~ 
                                                    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [1U]) 
                                                   << 2U) 
                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [1U] 
                                                     << 1U)) 
                                                 & ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [1U] 
                                                      >> 3U)) 
                                                    << 2U)) 
                                                & ((~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [1U] 
                                                     >> 4U)) 
                                                   << 2U)) 
                                               & ((~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [1U] 
                                                    >> 5U)) 
                                                  << 2U)))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up[1U] 
        = ((0x3ff7U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up
            [1U]) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2) 
                      & ((((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                               [1U] >> 1U)) & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [1U] 
                                                  >> 3U))) 
                          & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                [1U] >> 4U))) & (~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [1U] 
                                                  >> 5U)))) 
                     << 3U));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up[1U] 
        = ((0x3f7fU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up
            [1U]) | (0xffffff80U & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2) 
                                     << 7U) & ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [1U] 
                                                  << 7U) 
                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [1U] 
                                                    << 6U)) 
                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [1U] 
                                                   << 5U)) 
                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [1U] 
                                                  << 2U)))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up[1U] 
        = ((0x2fffU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up
            [1U]) | (0xfffff000U & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2) 
                                     << 0xcU) & (((
                                                   (((~ 
                                                      vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [1U]) 
                                                     << 0xcU) 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [1U] 
                                                       << 0xbU)) 
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [1U] 
                                                      << 9U)) 
                                                  & ((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [1U] 
                                                       >> 4U)) 
                                                     << 0xcU)) 
                                                 & ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [1U] 
                                                      >> 5U)) 
                                                    << 0xcU)))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up[1U] 
        = ((0x1fffU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up
            [1U]) | (0xffffe000U & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2) 
                                     << 0xdU) & (((
                                                   ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [1U] 
                                                     << 0xdU) 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [1U] 
                                                       << 0xcU)) 
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [1U] 
                                                      << 0xaU)) 
                                                  & ((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [1U] 
                                                       >> 4U)) 
                                                     << 0xdU)) 
                                                 & ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [1U] 
                                                      >> 5U)) 
                                                    << 0xdU)))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up[1U] 
        = ((0x3fbfU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up
            [1U]) | (0x40U & ((0xffffffc0U & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2) 
                                               << 6U) 
                                              & ((((((~ 
                                                      vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [1U]) 
                                                     << 6U) 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [1U] 
                                                       << 5U)) 
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [1U] 
                                                      << 4U)) 
                                                  & ((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [1U] 
                                                       >> 4U)) 
                                                     << 6U)) 
                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [1U] 
                                                    << 1U)))) 
                              | (0x1c0U & (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2)) 
                                            << 6U) 
                                           & (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_0)) 
                                               << 6U) 
                                              & ((((((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [1U] 
                                                       >> 0x1aU)) 
                                                     << 6U) 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [1U] 
                                                       >> 0x15U)) 
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [1U] 
                                                      >> 0x16U)) 
                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [1U] 
                                                     >> 0x17U)) 
                                                 & ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [1U] 
                                                      >> 0x1fU)) 
                                                    << 6U))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up[1U] 
        = ((0x3effU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up
            [1U]) | (0x100U & ((0xffffff00U & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2) 
                                                << 8U) 
                                               & (((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [1U] 
                                                    & (~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                        [1U] 
                                                        >> 1U))) 
                                                   << 8U) 
                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [1U] 
                                                     << 6U)))) 
                               | (0x700U & (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2)) 
                                             << 8U) 
                                            & (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_0)) 
                                                << 8U) 
                                               & ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [1U] 
                                                     >> 0x12U) 
                                                    & ((~ 
                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                         [1U] 
                                                         >> 0x1bU)) 
                                                       << 8U)) 
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [1U] 
                                                      >> 0x14U)) 
                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [1U] 
                                                     >> 0x15U))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up[1U] 
        = ((0x3dffU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up
            [1U]) | (0x200U & ((0xfffffe00U & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2) 
                                                << 9U) 
                                               & ((((((~ 
                                                       vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [1U]) 
                                                      & (~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                          [1U] 
                                                          >> 1U))) 
                                                     << 9U) 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [1U] 
                                                       << 7U)) 
                                                   & ((~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                        [1U] 
                                                        >> 4U)) 
                                                      << 9U)) 
                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [1U] 
                                                     << 4U)))) 
                               | (0xe00U & (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2)) 
                                             << 9U) 
                                            & (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_0)) 
                                                << 9U) 
                                               & (((((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [1U] 
                                                       >> 0x1aU)) 
                                                     & (~ 
                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                         [1U] 
                                                         >> 0x1bU))) 
                                                    << 9U) 
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [1U] 
                                                      >> 0x13U)) 
                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [1U] 
                                                     >> 0x14U))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up[1U] 
        = ((0x3bffU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up
            [1U]) | ((0xfffffc00U & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2) 
                                      << 0xaU) & ((
                                                   (((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                        [1U] 
                                                        << 9U) 
                                                       & ((~ 
                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                            [1U] 
                                                            >> 2U)) 
                                                          << 0xaU)) 
                                                      & ((~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                           [1U] 
                                                           >> 3U)) 
                                                         << 0xaU)) 
                                                     & ((~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                          [1U] 
                                                          >> 4U)) 
                                                        << 0xaU)) 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [1U] 
                                                       << 5U)) 
                                                   | ((((((~ 
                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                            [1U] 
                                                            >> 1U)) 
                                                          << 0xaU) 
                                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                            [1U] 
                                                            << 8U)) 
                                                        & ((~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [1U] 
                                                             >> 3U)) 
                                                           << 0xaU)) 
                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                          [1U] 
                                                          << 6U)) 
                                                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                         [1U] 
                                                         << 5U))) 
                                                  | (((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                         [1U] 
                                                         << 9U) 
                                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                           [1U] 
                                                           << 8U)) 
                                                       & ((~ 
                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                            [1U] 
                                                            >> 3U)) 
                                                          << 0xaU)) 
                                                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                         [1U] 
                                                         << 6U)) 
                                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                        [1U] 
                                                        << 5U))))) 
                     | (0xfffc00U & (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2)) 
                                      << 0xaU) & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_1) 
                                                   << 0xaU) 
                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [1U] 
                                                     >> 8U))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up[1U] 
        = ((0x3fefU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up
            [1U]) | (0x10U & ((0x7ffffff0U & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2) 
                                               << 4U) 
                                              & (((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [1U] 
                                                   << 4U) 
                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [1U] 
                                                     << 1U)) 
                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [1U] 
                                                    >> 1U)))) 
                              | (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2)) 
                                  << 4U) & ((0x1fff0U 
                                             & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_1) 
                                                 << 4U) 
                                                & ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [1U] 
                                                    >> 0xcU) 
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [1U] 
                                                      >> 0xfU)))) 
                                            | (0x70U 
                                               & (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_1)) 
                                                   << 4U) 
                                                  & (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_0)) 
                                                      << 4U) 
                                                     & (((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                            [1U] 
                                                            >> 0x16U) 
                                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [1U] 
                                                              >> 0x17U)) 
                                                          & ((~ 
                                                              (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [1U] 
                                                               >> 0x1cU)) 
                                                             << 4U)) 
                                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                            [1U] 
                                                            >> 0x19U)) 
                                                        & ((~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [1U] 
                                                             >> 0x1fU)) 
                                                           << 4U))))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up[1U] 
        = ((0x3fdfU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up
            [1U]) | (0x20U & ((0xffffffe0U & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2) 
                                               << 5U) 
                                              & ((((((((~ 
                                                        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                        [1U]) 
                                                       & (~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                           [1U] 
                                                           >> 2U))) 
                                                      << 5U) 
                                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                        [1U] 
                                                        << 2U)) 
                                                    & ((~ 
                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                         [1U] 
                                                         >> 4U)) 
                                                       << 5U)) 
                                                   & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [1U]) 
                                                  | ((((((~ 
                                                          vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                          [1U]) 
                                                         & (~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [1U] 
                                                             >> 2U))) 
                                                        & (~ 
                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                            [1U] 
                                                            >> 3U))) 
                                                       << 5U) 
                                                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                         [1U] 
                                                         << 1U)) 
                                                     & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [1U])) 
                                                 | (((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                        [1U] 
                                                        & (~ 
                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                            [1U] 
                                                            >> 2U))) 
                                                       & (~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                           [1U] 
                                                           >> 3U))) 
                                                      << 5U) 
                                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                        [1U] 
                                                        << 1U)) 
                                                    & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [1U])))) 
                              | (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2)) 
                                  << 5U) & ((0x3ffe0U 
                                             & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_1) 
                                                 << 5U) 
                                                & ((((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [1U] 
                                                       >> 0x10U)) 
                                                     & (~ 
                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                         [1U] 
                                                         >> 0x12U))) 
                                                    << 5U) 
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [1U] 
                                                      >> 0xeU)))) 
                                            | (0xe0U 
                                               & (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_1)) 
                                                   << 5U) 
                                                  & (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_0)) 
                                                      << 5U) 
                                                     & ((((((~ 
                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [1U] 
                                                              >> 0x1aU)) 
                                                            << 5U) 
                                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [1U] 
                                                              >> 0x16U)) 
                                                          & ((~ 
                                                              (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [1U] 
                                                               >> 0x1cU)) 
                                                             << 5U)) 
                                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                            [1U] 
                                                            >> 0x18U)) 
                                                        & ((~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [1U] 
                                                             >> 0x1fU)) 
                                                           << 5U))))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up[1U] 
        = ((0x37ffU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up
            [1U]) | (0x800U & ((0xfffff800U & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2) 
                                                << 0xbU) 
                                               & (((((((~ 
                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                         [1U] 
                                                         >> 1U)) 
                                                       & (~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                           [1U] 
                                                           >> 2U))) 
                                                      & (~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                          [1U] 
                                                          >> 3U))) 
                                                     & (~ 
                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                         [1U] 
                                                         >> 4U))) 
                                                    << 0xbU) 
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [1U] 
                                                      << 6U)) 
                                                  | ((((((~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                           [1U] 
                                                           >> 1U)) 
                                                         & (~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [1U] 
                                                             >> 2U))) 
                                                        << 0xbU) 
                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                          [1U] 
                                                          << 8U)) 
                                                      & ((~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                           [1U] 
                                                           >> 4U)) 
                                                         << 0xbU)) 
                                                     & ((~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                          [1U] 
                                                          >> 5U)) 
                                                        << 0xbU))))) 
                               | (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2)) 
                                   << 0xbU) & ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_1) 
                                                 & (~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [1U] 
                                                     >> 0x13U))) 
                                                << 0xbU) 
                                               | (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_1)) 
                                                   << 0xbU) 
                                                  & ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_0) 
                                                       & (~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                           [1U] 
                                                           >> 0x19U))) 
                                                      << 0xbU) 
                                                     | (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_0)) 
                                                         << 0xbU) 
                                                        & (((((((((((0x3800U 
                                                                     & (((((~ 
                                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                             [1U] 
                                                                             >> 0x1bU)) 
                                                                           & (~ 
                                                                              (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                               [1U] 
                                                                               >> 0x1cU))) 
                                                                          << 0xbU) 
                                                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                            [1U] 
                                                                            >> 0x12U)) 
                                                                        & ((~ 
                                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                             [1U] 
                                                                             >> 0x1fU)) 
                                                                           << 0xbU))) 
                                                                    | (0x7800U 
                                                                       & (((((~ 
                                                                              (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                               [1U] 
                                                                               >> 0x1bU)) 
                                                                             << 0xbU) 
                                                                            & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                               [1U] 
                                                                               >> 0x11U)) 
                                                                           & ((~ 
                                                                               (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                                [1U] 
                                                                                >> 0x1dU)) 
                                                                              << 0xbU)) 
                                                                          & ((~ 
                                                                              (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                               [1U] 
                                                                               >> 0x1fU)) 
                                                                             << 0xbU)))) 
                                                                   | (0x7800U 
                                                                      & ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                            [1U] 
                                                                            >> 0x10U) 
                                                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                              [1U] 
                                                                              >> 0x11U)) 
                                                                          & ((~ 
                                                                              (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                               [1U] 
                                                                               >> 0x1dU)) 
                                                                             << 0xbU)) 
                                                                         & ((~ 
                                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                              [1U] 
                                                                              >> 0x1fU)) 
                                                                            << 0xbU)))) 
                                                                  | (0xf800U 
                                                                     & ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                           [1U] 
                                                                           >> 0x10U) 
                                                                          & ((~ 
                                                                              (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                               [1U] 
                                                                               >> 0x1cU)) 
                                                                             << 0xbU)) 
                                                                         & ((~ 
                                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                              [1U] 
                                                                              >> 0x1dU)) 
                                                                            << 0xbU)) 
                                                                        & ((~ 
                                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                             [1U] 
                                                                             >> 0x1fU)) 
                                                                           << 0xbU)))) 
                                                                 | (0x800U 
                                                                    & (((((~ 
                                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                            [1U] 
                                                                            >> 0x1bU)) 
                                                                          & (~ 
                                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                              [1U] 
                                                                              >> 0x1cU))) 
                                                                         & (~ 
                                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                             [1U] 
                                                                             >> 0x1dU))) 
                                                                        << 0xbU) 
                                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                          [1U] 
                                                                          >> 0x14U)))) 
                                                                | (0x800U 
                                                                   & (((((~ 
                                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                           [1U] 
                                                                           >> 0x1bU)) 
                                                                         << 0xbU) 
                                                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                           [1U] 
                                                                           >> 0x11U)) 
                                                                       & ((~ 
                                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                            [1U] 
                                                                            >> 0x1dU)) 
                                                                          << 0xbU)) 
                                                                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                         [1U] 
                                                                         >> 0x14U)))) 
                                                               | (0x800U 
                                                                  & ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                        [1U] 
                                                                        >> 0x10U) 
                                                                       & ((~ 
                                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                            [1U] 
                                                                            >> 0x1cU)) 
                                                                          << 0xbU)) 
                                                                      & ((~ 
                                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                           [1U] 
                                                                           >> 0x1dU)) 
                                                                         << 0xbU)) 
                                                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                        [1U] 
                                                                        >> 0x14U)))) 
                                                              | (0x800U 
                                                                 & ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                       [1U] 
                                                                       >> 0x10U) 
                                                                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                         [1U] 
                                                                         >> 0x11U)) 
                                                                     & ((~ 
                                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                          [1U] 
                                                                          >> 0x1dU)) 
                                                                        << 0xbU)) 
                                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                       [1U] 
                                                                       >> 0x14U)))) 
                                                             | (0x800U 
                                                                & (((((~ 
                                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                        [1U] 
                                                                        >> 0x1bU)) 
                                                                      & (~ 
                                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                          [1U] 
                                                                          >> 0x1cU))) 
                                                                     << 0xbU) 
                                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                       [1U] 
                                                                       >> 0x12U)) 
                                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                      [1U] 
                                                                      >> 0x14U)))) 
                                                            | (0x800U 
                                                               & ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                     [1U] 
                                                                     >> 0x10U) 
                                                                    & ((~ 
                                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                         [1U] 
                                                                         >> 0x1cU)) 
                                                                       << 0xbU)) 
                                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                      [1U] 
                                                                      >> 0x12U)) 
                                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                     [1U] 
                                                                     >> 0x14U)))) 
                                                           | (0x800U 
                                                              & ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                    [1U] 
                                                                    >> 0x10U) 
                                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                      [1U] 
                                                                      >> 0x11U)) 
                                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                     [1U] 
                                                                     >> 0x12U)) 
                                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                    [1U] 
                                                                    >> 0x14U))))))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h81060927__0 
        = (0x1fU & ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h0d1c9145__0) 
                      | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h0b466653__0) 
                         | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hce1a820f__0) 
                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                                >> 0x1fU)) | ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                                                  >> 0x1fU)) 
                                              & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hce1a820f__0)))))
                      ? ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                          << 0x10U) | (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                                       >> 0x10U)) : 
                     ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                       << 0x15U) | (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                                    >> 0xbU))) | (- (IData)(
                                                            (1U 
                                                             & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__0__KET____DOT__temp___05F4) 
                                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                                                                    >> 0x14U)) 
                                                                | ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__0__KET____DOT__temp___05F4)) 
                                                                   & (IData)(
                                                                             (0x8000000U 
                                                                              == 
                                                                              (0xa8000000U 
                                                                               & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U]))))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hd8e2229b__0 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hfded45a1__0) 
           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
              >> 0x1fU));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h9b80efbc__0 
        = (((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                >> 0x1fU)) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hfded45a1__0)) 
           | (((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                   >> 0x1fU)) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hddf2301e__0)) 
              | (((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                      >> 0x1fU)) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hcb972f4a__0)) 
                 | (((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                         >> 0x1fU)) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h2f01c093__0)) 
                    | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h493a513a__0) 
                        & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb63957a8__0)) 
                       | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h7f6c215a__0) 
                           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h0d1c9145__0)) 
                          | ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                                 >> 0x1fU)) & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h56d7d3d7__0) 
                                               | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h2f0da4fa__0)))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h0f2057d6__0 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h513117f0__0) 
           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
              >> 0x1fU));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__0__KET____DOT__temp___05F0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
               >> 0x1fU)) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h513117f0__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h98cf59f1__0 
        = (0x1fU & ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h54aa4cc2__0) 
                      | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h10c0b07c__0) 
                         | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha714eec1__0) 
                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                                >> 0x1fU)) | ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                                                  >> 0x1fU)) 
                                              & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha714eec1__0)))))
                      ? ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                          << 0x10U) | (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                                       >> 0x10U)) : 
                     ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                       << 0x15U) | (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                                    >> 0xbU))) | (- (IData)(
                                                            (1U 
                                                             & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__1__KET____DOT__temp___05F4) 
                                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                                                                    >> 0x14U)) 
                                                                | ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__1__KET____DOT__temp___05F4)) 
                                                                   & (IData)(
                                                                             (0x8000000U 
                                                                              == 
                                                                              (0xa8000000U 
                                                                               & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U]))))))))));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h9a06d6e3__0 
        = (((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                >> 0x1fU)) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h92f007fc__0)) 
           | (((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                   >> 0x1fU)) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb63980f0__0)) 
              | (((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                      >> 0x1fU)) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hfe482ebb__0)) 
                 | (((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                         >> 0x1fU)) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h1ad92a94__0)) 
                    | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h662b37ee__0) 
                        & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h8e21ca34__0)) 
                       | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h5ec9a396__0) 
                           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h54aa4cc2__0)) 
                          | ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                                 >> 0x1fU)) & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h1be481c2__0) 
                                               | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h4a3919b5__0)))))))));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha7d7716a__0 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h92f007fc__0) 
           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
              >> 0x1fU));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h43936eca__0 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h69b15f42__0) 
           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
              >> 0x1fU));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__1__KET____DOT__temp___05F0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
               >> 0x1fU)) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h69b15f42__0));
    mycpu_top__DOT__u_Main__DOT__u_MEM__DOT____VdfgTmp_h57ecb1a5__0 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__hasData) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__ready));
    vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_allowin_w_o 
        = (1U & ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__hasData)) 
                 | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__ready)));
    mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ALU_u__DOT__u_adder__DOT__add_sub_res 
        = (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT____Vcellinp__ALU_u__scr0 
           + (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ALU_u__DOT__u_adder__DOT__data_b 
              + (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ALU_u__DOT__u_adder__DOT____VdfgTmp_hd2aefce6__0)));
    mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ALU_u__DOT__u_adder__DOT__cout 
        = (1U & (((~ ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_aluOprator_r_i) 
                      >> 4U)) & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ALU_u__DOT__u_adder__DOT__data_b 
                                 >> 0x1fU)) + (((~ 
                                                 ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_aluOprator_r_i) 
                                                  >> 4U)) 
                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT____Vcellinp__ALU_u__scr0 
                                                   >> 0x1fU)) 
                                               + (IData)(
                                                         (1ULL 
                                                          & (((QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT____Vcellinp__ALU_u__scr0)) 
                                                              + 
                                                              ((QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ALU_u__DOT__u_adder__DOT__data_b)) 
                                                               + (QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ALU_u__DOT__u_adder__DOT____VdfgTmp_hd2aefce6__0)))) 
                                                             >> 0x20U))))));
    mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ALU_u__DOT__u_adder__DOT__add_sub_res 
        = (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT____Vcellinp__ALU_u__scr0 
           + (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ALU_u__DOT__u_adder__DOT__data_b 
              + (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ALU_u__DOT__u_adder__DOT____VdfgTmp_hd2aefce6__0)));
    mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ALU_u__DOT__u_adder__DOT__cout 
        = (1U & (((~ ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_aluOprator_r_i) 
                      >> 4U)) & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ALU_u__DOT__u_adder__DOT__data_b 
                                 >> 0x1fU)) + (((~ 
                                                 ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_aluOprator_r_i) 
                                                  >> 4U)) 
                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT____Vcellinp__ALU_u__scr0 
                                                   >> 0x1fU)) 
                                               + (IData)(
                                                         (1ULL 
                                                          & (((QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT____Vcellinp__ALU_u__scr0)) 
                                                              + 
                                                              ((QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ALU_u__DOT__u_adder__DOT__data_b)) 
                                                               + (QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ALU_u__DOT__u_adder__DOT____VdfgTmp_hd2aefce6__0)))) 
                                                             >> 0x20U))))));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_hed933301__0 
        = (1U & ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel
                  [3U] & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_predTake_p_o) 
                          >> 3U)) | (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel
                                     [3U] >> 1U)));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_hed973b3c__0 
        = (1U & ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel
                  [2U] & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_predTake_p_o) 
                          >> 2U)) | (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel
                                     [2U] >> 1U)));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_heddc22ab__0 
        = (1U & ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel
                  [1U] & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_predTake_p_o) 
                          >> 1U)) | (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel
                                     [1U] >> 1U)));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_heddd41c6__0 
        = (1U & ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel
                  [0U] & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_predTake_p_o)) 
                 | (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel
                    [0U] >> 1U)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__BTB_needDelaySlot_o 
        = ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__PCR_needDelaySlot_o)) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__needDelaySlot));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__firstValidBit 
        = (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__needDelaySlot) 
            << 3U) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h99804cb6__0) 
                       << 2U) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h00616ab3__0) 
                                  << 1U) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h7c474841__0))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__oprand_sel[0U][1U] 
        = vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__oprand1_sel_up
        [0U];
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__oprand_sel[1U][1U] 
        = vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__oprand1_sel_up
        [1U];
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__oprand_sel[0U][0U] 
        = vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__oprand0_sel_up
        [0U];
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__oprand_sel[1U][0U] 
        = vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__oprand0_sel_up
        [1U];
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__instMode[0U] 
        = ((2U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__instMode
            [0U]) | (1U & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__0__KET____DOT__temp___05F0) 
                            & ((((((((((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                            [0U] & 
                                            (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                [0U] 
                                                >> 2U))) 
                                           & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                 [0U] 
                                                 >> 3U))) 
                                          & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                [0U] 
                                                >> 4U))) 
                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                            [0U] >> 5U)) 
                                        | (((((~ vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                               [0U]) 
                                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                 [0U] 
                                                 >> 2U)) 
                                             & (~ (
                                                   vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                   [0U] 
                                                   >> 3U))) 
                                            & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                  [0U] 
                                                  >> 4U))) 
                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                              [0U] 
                                              >> 5U))) 
                                       | ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                             [0U] & 
                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                              [0U] 
                                              >> 2U)) 
                                            & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                  [0U] 
                                                  >> 3U))) 
                                           & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                 [0U] 
                                                 >> 4U))) 
                                          & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                             [0U] >> 5U))) 
                                      | (((((~ vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                             [0U]) 
                                            & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                  [0U] 
                                                  >> 2U))) 
                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                              [0U] 
                                              >> 3U)) 
                                          & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                [0U] 
                                                >> 4U))) 
                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                            [0U] >> 5U))) 
                                     | ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                           [0U] & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                    [0U] 
                                                    >> 2U))) 
                                          & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                             [0U] >> 3U)) 
                                         & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                               [0U] 
                                               >> 4U))) 
                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                           [0U] >> 5U))) 
                                    | ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                          [0U] & (~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                   [0U] 
                                                   >> 2U))) 
                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                            [0U] >> 3U)) 
                                        & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                              [0U] 
                                              >> 4U))) 
                                       & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                             [0U] >> 5U)))) 
                                   | (((((~ vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                          [0U]) & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                    [0U] 
                                                    >> 2U))) 
                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                           [0U] >> 3U)) 
                                       & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                             [0U] >> 4U))) 
                                      & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                            [0U] >> 5U)))) 
                                  | (((((~ vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                         [0U]) & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                  [0U] 
                                                  >> 2U)) 
                                       & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                             [0U] >> 3U))) 
                                      & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                            [0U] >> 4U))) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                           [0U] >> 5U)))) 
                                 | ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                       [0U] & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                               [0U] 
                                               >> 2U)) 
                                      & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                            [0U] >> 3U))) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                           [0U] >> 4U))) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                          [0U] >> 5U)))) 
                                | (((((~ vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                       [0U]) & (~ (
                                                   vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                   [0U] 
                                                   >> 2U))) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                           [0U] >> 3U))) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                          [0U] >> 4U))) 
                                   & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                         [0U] >> 5U)))) 
                               | ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                     [0U] & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                [0U] 
                                                >> 2U))) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                          [0U] >> 3U))) 
                                   & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                         [0U] >> 4U))) 
                                  & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                        [0U] >> 5U))))) 
                           | ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__0__KET____DOT__temp___05F0)) 
                              & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__0__KET____DOT__temp___05F2) 
                                  & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                        [0U] >> 0x13U))) 
                                 | ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__0__KET____DOT__temp___05F2)) 
                                    & (((((((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                 [0U] 
                                                 >> 0x1aU) 
                                                & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                    [0U] 
                                                    >> 0x1bU))) 
                                               & (~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                   [0U] 
                                                   >> 0x1cU))) 
                                              & (~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                  [0U] 
                                                  >> 0x1eU))) 
                                             & (~ (
                                                   vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                   [0U] 
                                                   >> 0x1fU))) 
                                            | (((((~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                    [0U] 
                                                    >> 0x1aU)) 
                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                     [0U] 
                                                     >> 0x1bU)) 
                                                 & (~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                     [0U] 
                                                     >> 0x1cU))) 
                                                & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                    [0U] 
                                                    >> 0x1eU))) 
                                               & (~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                   [0U] 
                                                   >> 0x1fU)))) 
                                           | (((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                  [0U] 
                                                  >> 0x1aU) 
                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                    [0U] 
                                                    >> 0x1bU)) 
                                                & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                    [0U] 
                                                    >> 0x1cU))) 
                                               & (~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                   [0U] 
                                                   >> 0x1eU))) 
                                              & (~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                  [0U] 
                                                  >> 0x1fU)))) 
                                          | (((((~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                  [0U] 
                                                  >> 0x1aU)) 
                                                & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                    [0U] 
                                                    >> 0x1bU))) 
                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                  [0U] 
                                                  >> 0x1cU)) 
                                              & (~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                  [0U] 
                                                  >> 0x1eU))) 
                                             & (~ (
                                                   vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                   [0U] 
                                                   >> 0x1fU)))) 
                                         | (((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                [0U] 
                                                >> 0x1aU) 
                                               & (~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                   [0U] 
                                                   >> 0x1bU))) 
                                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                 [0U] 
                                                 >> 0x1cU)) 
                                             & (~ (
                                                   vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                   [0U] 
                                                   >> 0x1eU))) 
                                            & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                  [0U] 
                                                  >> 0x1fU)))) 
                                        | (((((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                  [0U] 
                                                  >> 0x1aU)) 
                                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                 [0U] 
                                                 >> 0x1bU)) 
                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                [0U] 
                                                >> 0x1cU)) 
                                            & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                  [0U] 
                                                  >> 0x1eU))) 
                                           & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                 [0U] 
                                                 >> 0x1fU)))) 
                                       | (((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                              [0U] 
                                              >> 0x1aU) 
                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                [0U] 
                                                >> 0x1bU)) 
                                            & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                               [0U] 
                                               >> 0x1cU)) 
                                           & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                 [0U] 
                                                 >> 0x1eU))) 
                                          & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                [0U] 
                                                >> 0x1fU))))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__instMode[0U] 
        = ((1U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__instMode
            [0U]) | (2U & ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__0__KET____DOT__temp___05F0) 
                             << 1U) & (((((((((((((
                                                   (((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                       [0U] 
                                                       >> 1U)) 
                                                     & (~ 
                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                         [0U] 
                                                         >> 2U))) 
                                                    & (~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                        [0U] 
                                                        >> 3U))) 
                                                   & (~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                       [0U] 
                                                       >> 4U))) 
                                                  << 1U) 
                                                 | (0xfffffffeU 
                                                    & (((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                         [0U] 
                                                         & ((~ 
                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                              [0U] 
                                                              >> 2U)) 
                                                            << 1U)) 
                                                        & ((~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                             [0U] 
                                                             >> 3U)) 
                                                           << 1U)) 
                                                       & ((~ 
                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                            [0U] 
                                                            >> 4U)) 
                                                          << 1U)))) 
                                                | (0x7ffffffeU 
                                                   & (((((~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                           [0U] 
                                                           >> 1U)) 
                                                         << 1U) 
                                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                           [0U] 
                                                           >> 1U)) 
                                                       & ((~ 
                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                            [0U] 
                                                            >> 3U)) 
                                                          << 1U)) 
                                                      & ((~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                           [0U] 
                                                           >> 4U)) 
                                                         << 1U)))) 
                                               | (0x7ffffffeU 
                                                  & (((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                       [0U] 
                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                          [0U] 
                                                          >> 1U)) 
                                                      & ((~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                           [0U] 
                                                           >> 3U)) 
                                                         << 1U)) 
                                                     & ((~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                          [0U] 
                                                          >> 4U)) 
                                                        << 1U)))) 
                                              | (0x3ffffffeU 
                                                 & (((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                      [0U] 
                                                      & ((~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                           [0U] 
                                                           >> 2U)) 
                                                         << 1U)) 
                                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                        [0U] 
                                                        >> 2U)) 
                                                    & ((~ 
                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                         [0U] 
                                                         >> 4U)) 
                                                       << 1U)))) 
                                             | (0x1ffffffeU 
                                                & (((((~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                        [0U] 
                                                        >> 1U)) 
                                                      & (~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                          [0U] 
                                                          >> 2U))) 
                                                     << 1U) 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                       [0U] 
                                                       >> 2U)) 
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                      [0U] 
                                                      >> 3U)))) 
                                            | (0x1ffffffeU 
                                               & (((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                    [0U] 
                                                    & ((~ 
                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                         [0U] 
                                                         >> 2U)) 
                                                       << 1U)) 
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                      [0U] 
                                                      >> 2U)) 
                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                     [0U] 
                                                     >> 3U)))) 
                                           | (0x1ffffffeU 
                                              & (((((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                      [0U] 
                                                      >> 1U)) 
                                                    & (~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                        [0U] 
                                                        >> 2U))) 
                                                   & (~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                       [0U] 
                                                       >> 3U))) 
                                                  << 1U) 
                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                    [0U] 
                                                    >> 3U)))) 
                                          | (0x1ffffffeU 
                                             & (((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                  [0U] 
                                                  & ((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                       [0U] 
                                                       >> 2U)) 
                                                     << 1U)) 
                                                 & ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                      [0U] 
                                                      >> 3U)) 
                                                    << 1U)) 
                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                   [0U] 
                                                   >> 3U)))) 
                                         | (0x3ffffffeU 
                                            & (((((~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                    [0U] 
                                                    >> 1U)) 
                                                  << 1U) 
                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                    [0U] 
                                                    >> 1U)) 
                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                   [0U] 
                                                   >> 2U)) 
                                               & ((~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                    [0U] 
                                                    >> 4U)) 
                                                  << 1U)))) 
                                        | (0x1ffffffeU 
                                           & (((((~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                   [0U] 
                                                   >> 1U)) 
                                                 << 1U) 
                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                   [0U] 
                                                   >> 1U)) 
                                               & ((~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                    [0U] 
                                                    >> 3U)) 
                                                  << 1U)) 
                                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                 [0U] 
                                                 >> 3U)))) 
                                       | (0x1ffffffeU 
                                          & (((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                               [0U] 
                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                  [0U] 
                                                  >> 1U)) 
                                              & ((~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                   [0U] 
                                                   >> 3U)) 
                                                 << 1U)) 
                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                [0U] 
                                                >> 3U))))) 
                           | (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__0__KET____DOT__temp___05F0)) 
                               << 1U) & ((0x3ffeU & 
                                          (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__0__KET____DOT__temp___05F2) 
                                            << 1U) 
                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                              [0U] 
                                              >> 0x12U))) 
                                         | (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__0__KET____DOT__temp___05F2)) 
                                             << 1U) 
                                            & (((((((0xeU 
                                                     & (((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                          [0U] 
                                                          >> 0x1cU) 
                                                         & ((~ 
                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                              [0U] 
                                                              >> 0x1eU)) 
                                                            << 1U)) 
                                                        & ((~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                             [0U] 
                                                             >> 0x1fU)) 
                                                           << 1U))) 
                                                    | (6U 
                                                       & (((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                            [0U] 
                                                            >> 0x1cU) 
                                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                              [0U] 
                                                              >> 0x1dU)) 
                                                          & ((~ 
                                                              (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                               [0U] 
                                                               >> 0x1fU)) 
                                                             << 1U)))) 
                                                   | (2U 
                                                      & ((((~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                             [0U] 
                                                             >> 0x1dU)) 
                                                           & (~ 
                                                              (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                               [0U] 
                                                               >> 0x1eU))) 
                                                          << 1U) 
                                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                            [0U] 
                                                            >> 0x1eU)))) 
                                                  | (2U 
                                                     & (((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                          [0U] 
                                                          >> 0x1cU) 
                                                         & ((~ 
                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                              [0U] 
                                                              >> 0x1eU)) 
                                                            << 1U)) 
                                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                           [0U] 
                                                           >> 0x1eU)))) 
                                                 | (2U 
                                                    & ((((~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                           [0U] 
                                                           >> 0x1dU)) 
                                                         << 1U) 
                                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                           [0U] 
                                                           >> 0x1dU)) 
                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                          [0U] 
                                                          >> 0x1eU)))) 
                                                | (2U 
                                                   & (((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                        [0U] 
                                                        >> 0x1cU) 
                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                          [0U] 
                                                          >> 0x1dU)) 
                                                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                         [0U] 
                                                         >> 0x1eU)))) 
                                               | (6U 
                                                  & ((((~ 
                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                         [0U] 
                                                         >> 0x1dU)) 
                                                       << 1U) 
                                                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                         [0U] 
                                                         >> 0x1dU)) 
                                                     & ((~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                          [0U] 
                                                          >> 0x1fU)) 
                                                        << 1U))))))))));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h280da603__0 
        = (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__0__KET____DOT__temp___05F0) 
            & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_habf7f129__0) 
                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                   >> 5U)) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h0083ac2e__0) 
                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                                  >> 5U)) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hc845c7be__0) 
                                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                                                 >> 5U)) 
                                             | (((~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                                                   >> 5U)) 
                                                 & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hc845c7be__0)) 
                                                | (((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                                                      >> 5U)) 
                                                    & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_habf7f129__0)) 
                                                   | (((~ 
                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                                                         >> 5U)) 
                                                       & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h0083ac2e__0)) 
                                                      | ((IData)(
                                                                 ((8U 
                                                                   == 
                                                                   (0xaU 
                                                                    & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U])) 
                                                                  & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha3d54812__0))) 
                                                         | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha5d6c34d__0) 
                                                             & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha3d54812__0)) 
                                                            | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hc48499de__0) 
                                                                | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h6d906edd__0)) 
                                                               & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h022fd69a__0))))))))))) 
           | ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__0__KET____DOT__temp___05F0)) 
              & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__0__KET____DOT__temp___05F1) 
                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                     >> 0x17U)) | ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__0__KET____DOT__temp___05F1)) 
                                   & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__0__KET____DOT__temp___05F3) 
                                      | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h3ed14f69__0) 
                                         | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb66685d8__0) 
                                            | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h61b07b8c__0) 
                                               | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf3e28ff6__0) 
                                                  | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hd8e2229b__0) 
                                                     | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hc0190d78__0) 
                                                        | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h70a699d4__0) 
                                                           | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h05d0205b__0) 
                                                              | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf45ceedf__0) 
                                                                 | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hd6cbc546__0)))))))))))))));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h8d4fa09b__0 
        = (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__0__KET____DOT__temp___05F0) 
            & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h926343be__0) 
                & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h75dca3a1__0)) 
               | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf2b7c392__0) 
                   & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h75dca3a1__0)) 
                  | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h1f528a5c__0) 
                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                         >> 5U)) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h5bbadc13__0) 
                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                                        >> 5U)) | (
                                                   ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h6964710a__0) 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                                                       >> 5U)) 
                                                   | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hbd0cf5bd__0) 
                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                                                          >> 5U)) 
                                                      | (((~ 
                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                                                            >> 5U)) 
                                                          & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hbd0cf5bd__0)) 
                                                         | (((~ 
                                                              (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                                                               >> 5U)) 
                                                             & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h6964710a__0)) 
                                                            | (((~ 
                                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                                                                  >> 5U)) 
                                                                & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h1f528a5c__0)) 
                                                               | (((~ 
                                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                                                                     >> 5U)) 
                                                                   & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h5bbadc13__0)) 
                                                                  | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h06f719c1__0) 
                                                                      & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha3d54812__0)) 
                                                                     | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb30f954a__0) 
                                                                         & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha3d54812__0)) 
                                                                        | (((~ 
                                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                                                                              >> 5U)) 
                                                                            & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h31b94968__0)) 
                                                                           | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h926343be__0) 
                                                                               & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h022fd69a__0)) 
                                                                              | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h31b94968__0) 
                                                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                                                                                >> 5U)) 
                                                                                | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h50e190eb__0) 
                                                                                & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h022fd69a__0)))))))))))))))))) 
           | ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__0__KET____DOT__temp___05F0)) 
              & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h9b80efbc__0) 
                 | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__0__KET____DOT__temp___05F3) 
                    | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h3ed14f69__0) 
                       | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb66685d8__0) 
                          | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h6c0adfc7__0) 
                              & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h0a374724__0)) 
                             | (((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                                     >> 0x1fU)) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h44c7ceb6__0)) 
                                | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__0__KET____DOT__temp___05F4) 
                                   | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h0f2057d6__0) 
                                      | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h04ba1cc4__0) 
                                         | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h0a3bf3b1__0) 
                                            | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_he941b43b__0) 
                                               | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h011785a5__0) 
                                                  | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h61b07b8c__0) 
                                                     | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf3e28ff6__0) 
                                                        | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hd8e2229b__0) 
                                                           | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hc0190d78__0) 
                                                              | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h70a699d4__0) 
                                                                 | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h05d0205b__0) 
                                                                    | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf45ceedf__0) 
                                                                       | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hda0b1be3__0) 
                                                                          | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hd6cbc546__0) 
                                                                             | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h2f0da4fa__0) 
                                                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                                                                                >> 0x1fU)))))))))))))))))))))))));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf6c6d942__0 
        = (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__0__KET____DOT__temp___05F0) 
            & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h054e529d__0) 
                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                   >> 5U)) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h84867858__0) 
                               & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hed3f0af1__0)) 
                              | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb19de015__0) 
                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                                     >> 5U)) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hed6f9162__0) 
                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                                                    >> 5U)) 
                                                | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h2182808f__0) 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                                                       >> 5U)) 
                                                   | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hdf92d8a4__0) 
                                                       & ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                                                           >> 2U) 
                                                          & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hed3f0af1__0))) 
                                                      | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf0632857__0) 
                                                          & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                                                             >> 5U)) 
                                                         | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hde2548fc__0) 
                                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                                                                >> 5U)) 
                                                            | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h5bfce17d__0) 
                                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                                                                   >> 5U)) 
                                                               | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hfd9d8f12__0) 
                                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                                                                      >> 5U)) 
                                                                  | (((~ 
                                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                                                                        >> 5U)) 
                                                                      & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hfd9d8f12__0)) 
                                                                     | (((~ 
                                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                                                                           >> 5U)) 
                                                                         & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h5bfce17d__0)) 
                                                                        | (((~ 
                                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                                                                              >> 5U)) 
                                                                            & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h2182808f__0)) 
                                                                           | (((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                                                                                >> 5U)) 
                                                                               & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf0632857__0)) 
                                                                              | (((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                                                                                >> 5U)) 
                                                                                & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hde2548fc__0)) 
                                                                                | (((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                                                                                >> 5U)) 
                                                                                & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h054e529d__0)) 
                                                                                | (((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                                                                                >> 5U)) 
                                                                                & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb19de015__0)) 
                                                                                | (((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                                                                                >> 5U)) 
                                                                                & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hed6f9162__0)) 
                                                                                | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h6acd382a__0) 
                                                                                & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha3d54812__0)) 
                                                                                | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hbe9eaaa2__0) 
                                                                                & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha3d54812__0)) 
                                                                                | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h84867858__0) 
                                                                                & (IData)(
                                                                                (8U 
                                                                                == 
                                                                                (0x38U 
                                                                                & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U]))))))))))))))))))))))))) 
           | ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__0__KET____DOT__temp___05F0)) 
              & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__0__KET____DOT__temp___05F3) 
                  & ((IData)((0x20U == (0x22U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U]))) 
                     | (IData)((2U == (0x22U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U]))))) 
                 | ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__0__KET____DOT__temp___05F3)) 
                    & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__0__KET____DOT__temp___05F2) 
                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                           >> 0x14U)) | ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__0__KET____DOT__temp___05F2)) 
                                         & (((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x2800000U 
                                                          & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U])))) 
                                             & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__0__KET____DOT__temp___05F1)) 
                                            | ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__0__KET____DOT__temp___05F1)) 
                                               & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h9b80efbc__0) 
                                                  | (((~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                                                        >> 0x1fU)) 
                                                      & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h5931cc7c__0)) 
                                                     | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h0f2057d6__0) 
                                                        | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h04ba1cc4__0) 
                                                           | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h0a3bf3b1__0) 
                                                              | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_he941b43b__0) 
                                                                 | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h011785a5__0) 
                                                                    | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h61b07b8c__0) 
                                                                       | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf3e28ff6__0) 
                                                                          | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hda0b1be3__0))))))))))))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__instMode[1U] 
        = ((2U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__instMode
            [1U]) | (1U & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__1__KET____DOT__temp___05F0) 
                            & ((((((((((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                            [1U] & 
                                            (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                [1U] 
                                                >> 2U))) 
                                           & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                 [1U] 
                                                 >> 3U))) 
                                          & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                [1U] 
                                                >> 4U))) 
                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                            [1U] >> 5U)) 
                                        | (((((~ vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                               [1U]) 
                                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                 [1U] 
                                                 >> 2U)) 
                                             & (~ (
                                                   vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                   [1U] 
                                                   >> 3U))) 
                                            & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                  [1U] 
                                                  >> 4U))) 
                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                              [1U] 
                                              >> 5U))) 
                                       | ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                             [1U] & 
                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                              [1U] 
                                              >> 2U)) 
                                            & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                  [1U] 
                                                  >> 3U))) 
                                           & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                 [1U] 
                                                 >> 4U))) 
                                          & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                             [1U] >> 5U))) 
                                      | (((((~ vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                             [1U]) 
                                            & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                  [1U] 
                                                  >> 2U))) 
                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                              [1U] 
                                              >> 3U)) 
                                          & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                [1U] 
                                                >> 4U))) 
                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                            [1U] >> 5U))) 
                                     | ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                           [1U] & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                    [1U] 
                                                    >> 2U))) 
                                          & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                             [1U] >> 3U)) 
                                         & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                               [1U] 
                                               >> 4U))) 
                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                           [1U] >> 5U))) 
                                    | ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                          [1U] & (~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                   [1U] 
                                                   >> 2U))) 
                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                            [1U] >> 3U)) 
                                        & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                              [1U] 
                                              >> 4U))) 
                                       & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                             [1U] >> 5U)))) 
                                   | (((((~ vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                          [1U]) & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                    [1U] 
                                                    >> 2U))) 
                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                           [1U] >> 3U)) 
                                       & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                             [1U] >> 4U))) 
                                      & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                            [1U] >> 5U)))) 
                                  | (((((~ vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                         [1U]) & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                  [1U] 
                                                  >> 2U)) 
                                       & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                             [1U] >> 3U))) 
                                      & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                            [1U] >> 4U))) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                           [1U] >> 5U)))) 
                                 | ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                       [1U] & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                               [1U] 
                                               >> 2U)) 
                                      & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                            [1U] >> 3U))) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                           [1U] >> 4U))) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                          [1U] >> 5U)))) 
                                | (((((~ vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                       [1U]) & (~ (
                                                   vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                   [1U] 
                                                   >> 2U))) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                           [1U] >> 3U))) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                          [1U] >> 4U))) 
                                   & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                         [1U] >> 5U)))) 
                               | ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                     [1U] & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                [1U] 
                                                >> 2U))) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                          [1U] >> 3U))) 
                                   & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                         [1U] >> 4U))) 
                                  & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                        [1U] >> 5U))))) 
                           | ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__1__KET____DOT__temp___05F0)) 
                              & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__1__KET____DOT__temp___05F2) 
                                  & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                        [1U] >> 0x13U))) 
                                 | ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__1__KET____DOT__temp___05F2)) 
                                    & (((((((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                 [1U] 
                                                 >> 0x1aU) 
                                                & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                    [1U] 
                                                    >> 0x1bU))) 
                                               & (~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                   [1U] 
                                                   >> 0x1cU))) 
                                              & (~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                  [1U] 
                                                  >> 0x1eU))) 
                                             & (~ (
                                                   vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                   [1U] 
                                                   >> 0x1fU))) 
                                            | (((((~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                    [1U] 
                                                    >> 0x1aU)) 
                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                     [1U] 
                                                     >> 0x1bU)) 
                                                 & (~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                     [1U] 
                                                     >> 0x1cU))) 
                                                & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                    [1U] 
                                                    >> 0x1eU))) 
                                               & (~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                   [1U] 
                                                   >> 0x1fU)))) 
                                           | (((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                  [1U] 
                                                  >> 0x1aU) 
                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                    [1U] 
                                                    >> 0x1bU)) 
                                                & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                    [1U] 
                                                    >> 0x1cU))) 
                                               & (~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                   [1U] 
                                                   >> 0x1eU))) 
                                              & (~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                  [1U] 
                                                  >> 0x1fU)))) 
                                          | (((((~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                  [1U] 
                                                  >> 0x1aU)) 
                                                & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                    [1U] 
                                                    >> 0x1bU))) 
                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                  [1U] 
                                                  >> 0x1cU)) 
                                              & (~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                  [1U] 
                                                  >> 0x1eU))) 
                                             & (~ (
                                                   vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                   [1U] 
                                                   >> 0x1fU)))) 
                                         | (((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                [1U] 
                                                >> 0x1aU) 
                                               & (~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                   [1U] 
                                                   >> 0x1bU))) 
                                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                 [1U] 
                                                 >> 0x1cU)) 
                                             & (~ (
                                                   vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                   [1U] 
                                                   >> 0x1eU))) 
                                            & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                  [1U] 
                                                  >> 0x1fU)))) 
                                        | (((((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                  [1U] 
                                                  >> 0x1aU)) 
                                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                 [1U] 
                                                 >> 0x1bU)) 
                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                [1U] 
                                                >> 0x1cU)) 
                                            & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                  [1U] 
                                                  >> 0x1eU))) 
                                           & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                 [1U] 
                                                 >> 0x1fU)))) 
                                       | (((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                              [1U] 
                                              >> 0x1aU) 
                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                [1U] 
                                                >> 0x1bU)) 
                                            & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                               [1U] 
                                               >> 0x1cU)) 
                                           & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                 [1U] 
                                                 >> 0x1eU))) 
                                          & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                [1U] 
                                                >> 0x1fU))))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__instMode[1U] 
        = ((1U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__instMode
            [1U]) | (2U & ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__1__KET____DOT__temp___05F0) 
                             << 1U) & (((((((((((((
                                                   (((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                       [1U] 
                                                       >> 1U)) 
                                                     & (~ 
                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                         [1U] 
                                                         >> 2U))) 
                                                    & (~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                        [1U] 
                                                        >> 3U))) 
                                                   & (~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                       [1U] 
                                                       >> 4U))) 
                                                  << 1U) 
                                                 | (0xfffffffeU 
                                                    & (((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                         [1U] 
                                                         & ((~ 
                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                              [1U] 
                                                              >> 2U)) 
                                                            << 1U)) 
                                                        & ((~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                             [1U] 
                                                             >> 3U)) 
                                                           << 1U)) 
                                                       & ((~ 
                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                            [1U] 
                                                            >> 4U)) 
                                                          << 1U)))) 
                                                | (0x7ffffffeU 
                                                   & (((((~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                           [1U] 
                                                           >> 1U)) 
                                                         << 1U) 
                                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                           [1U] 
                                                           >> 1U)) 
                                                       & ((~ 
                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                            [1U] 
                                                            >> 3U)) 
                                                          << 1U)) 
                                                      & ((~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                           [1U] 
                                                           >> 4U)) 
                                                         << 1U)))) 
                                               | (0x7ffffffeU 
                                                  & (((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                       [1U] 
                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                          [1U] 
                                                          >> 1U)) 
                                                      & ((~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                           [1U] 
                                                           >> 3U)) 
                                                         << 1U)) 
                                                     & ((~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                          [1U] 
                                                          >> 4U)) 
                                                        << 1U)))) 
                                              | (0x3ffffffeU 
                                                 & (((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                      [1U] 
                                                      & ((~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                           [1U] 
                                                           >> 2U)) 
                                                         << 1U)) 
                                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                        [1U] 
                                                        >> 2U)) 
                                                    & ((~ 
                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                         [1U] 
                                                         >> 4U)) 
                                                       << 1U)))) 
                                             | (0x1ffffffeU 
                                                & (((((~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                        [1U] 
                                                        >> 1U)) 
                                                      & (~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                          [1U] 
                                                          >> 2U))) 
                                                     << 1U) 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                       [1U] 
                                                       >> 2U)) 
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                      [1U] 
                                                      >> 3U)))) 
                                            | (0x1ffffffeU 
                                               & (((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                    [1U] 
                                                    & ((~ 
                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                         [1U] 
                                                         >> 2U)) 
                                                       << 1U)) 
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                      [1U] 
                                                      >> 2U)) 
                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                     [1U] 
                                                     >> 3U)))) 
                                           | (0x1ffffffeU 
                                              & (((((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                      [1U] 
                                                      >> 1U)) 
                                                    & (~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                        [1U] 
                                                        >> 2U))) 
                                                   & (~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                       [1U] 
                                                       >> 3U))) 
                                                  << 1U) 
                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                    [1U] 
                                                    >> 3U)))) 
                                          | (0x1ffffffeU 
                                             & (((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                  [1U] 
                                                  & ((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                       [1U] 
                                                       >> 2U)) 
                                                     << 1U)) 
                                                 & ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                      [1U] 
                                                      >> 3U)) 
                                                    << 1U)) 
                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                   [1U] 
                                                   >> 3U)))) 
                                         | (0x3ffffffeU 
                                            & (((((~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                    [1U] 
                                                    >> 1U)) 
                                                  << 1U) 
                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                    [1U] 
                                                    >> 1U)) 
                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                   [1U] 
                                                   >> 2U)) 
                                               & ((~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                    [1U] 
                                                    >> 4U)) 
                                                  << 1U)))) 
                                        | (0x1ffffffeU 
                                           & (((((~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                   [1U] 
                                                   >> 1U)) 
                                                 << 1U) 
                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                   [1U] 
                                                   >> 1U)) 
                                               & ((~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                    [1U] 
                                                    >> 3U)) 
                                                  << 1U)) 
                                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                 [1U] 
                                                 >> 3U)))) 
                                       | (0x1ffffffeU 
                                          & (((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                               [1U] 
                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                  [1U] 
                                                  >> 1U)) 
                                              & ((~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                   [1U] 
                                                   >> 3U)) 
                                                 << 1U)) 
                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                [1U] 
                                                >> 3U))))) 
                           | (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__1__KET____DOT__temp___05F0)) 
                               << 1U) & ((0x3ffeU & 
                                          (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__1__KET____DOT__temp___05F2) 
                                            << 1U) 
                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                              [1U] 
                                              >> 0x12U))) 
                                         | (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__1__KET____DOT__temp___05F2)) 
                                             << 1U) 
                                            & (((((((0xeU 
                                                     & (((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                          [1U] 
                                                          >> 0x1cU) 
                                                         & ((~ 
                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                              [1U] 
                                                              >> 0x1eU)) 
                                                            << 1U)) 
                                                        & ((~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                             [1U] 
                                                             >> 0x1fU)) 
                                                           << 1U))) 
                                                    | (6U 
                                                       & (((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                            [1U] 
                                                            >> 0x1cU) 
                                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                              [1U] 
                                                              >> 0x1dU)) 
                                                          & ((~ 
                                                              (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                               [1U] 
                                                               >> 0x1fU)) 
                                                             << 1U)))) 
                                                   | (2U 
                                                      & ((((~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                             [1U] 
                                                             >> 0x1dU)) 
                                                           & (~ 
                                                              (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                               [1U] 
                                                               >> 0x1eU))) 
                                                          << 1U) 
                                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                            [1U] 
                                                            >> 0x1eU)))) 
                                                  | (2U 
                                                     & (((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                          [1U] 
                                                          >> 0x1cU) 
                                                         & ((~ 
                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                              [1U] 
                                                              >> 0x1eU)) 
                                                            << 1U)) 
                                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                           [1U] 
                                                           >> 0x1eU)))) 
                                                 | (2U 
                                                    & ((((~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                           [1U] 
                                                           >> 0x1dU)) 
                                                         << 1U) 
                                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                           [1U] 
                                                           >> 0x1dU)) 
                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                          [1U] 
                                                          >> 0x1eU)))) 
                                                | (2U 
                                                   & (((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                        [1U] 
                                                        >> 0x1cU) 
                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                          [1U] 
                                                          >> 0x1dU)) 
                                                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                         [1U] 
                                                         >> 0x1eU)))) 
                                               | (6U 
                                                  & ((((~ 
                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                         [1U] 
                                                         >> 0x1dU)) 
                                                       << 1U) 
                                                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                         [1U] 
                                                         >> 0x1dU)) 
                                                     & ((~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst
                                                          [1U] 
                                                          >> 0x1fU)) 
                                                        << 1U))))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h6edd518f__0 
        = (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__1__KET____DOT__temp___05F0) 
            & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h6682524e__0) 
                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                   >> 5U)) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h0921d919__0) 
                               & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hfa2553f2__0)) 
                              | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h9304bd71__0) 
                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                                     >> 5U)) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb931fc0d__0) 
                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                                                    >> 5U)) 
                                                | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h6700724b__0) 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                                                       >> 5U)) 
                                                   | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h483837e4__0) 
                                                       & ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                                                           >> 2U) 
                                                          & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hfa2553f2__0))) 
                                                      | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hea4f50f4__0) 
                                                          & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                                                             >> 5U)) 
                                                         | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hda8347b9__0) 
                                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                                                                >> 5U)) 
                                                            | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hda6cd53a__0) 
                                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                                                                   >> 5U)) 
                                                               | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb778b3ea__0) 
                                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                                                                      >> 5U)) 
                                                                  | (((~ 
                                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                                                                        >> 5U)) 
                                                                      & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb778b3ea__0)) 
                                                                     | (((~ 
                                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                                                                           >> 5U)) 
                                                                         & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hda6cd53a__0)) 
                                                                        | (((~ 
                                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                                                                              >> 5U)) 
                                                                            & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h6700724b__0)) 
                                                                           | (((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                                                                                >> 5U)) 
                                                                               & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hea4f50f4__0)) 
                                                                              | (((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                                                                                >> 5U)) 
                                                                                & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hda8347b9__0)) 
                                                                                | (((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                                                                                >> 5U)) 
                                                                                & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h6682524e__0)) 
                                                                                | (((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                                                                                >> 5U)) 
                                                                                & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h9304bd71__0)) 
                                                                                | (((~ 
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                                                                                >> 5U)) 
                                                                                & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb931fc0d__0)) 
                                                                                | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_he3742997__0) 
                                                                                & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h78edc999__0)) 
                                                                                | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb5f6bc5e__0) 
                                                                                & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h78edc999__0)) 
                                                                                | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h0921d919__0) 
                                                                                & (IData)(
                                                                                (8U 
                                                                                == 
                                                                                (0x38U 
                                                                                & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U]))))))))))))))))))))))))) 
           | ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__1__KET____DOT__temp___05F0)) 
              & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__1__KET____DOT__temp___05F3) 
                  & ((IData)((0x20U == (0x22U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U]))) 
                     | (IData)((2U == (0x22U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U]))))) 
                 | ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__1__KET____DOT__temp___05F3)) 
                    & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__1__KET____DOT__temp___05F2) 
                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                           >> 0x14U)) | ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__1__KET____DOT__temp___05F2)) 
                                         & (((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x2800000U 
                                                          & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U])))) 
                                             & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__1__KET____DOT__temp___05F1)) 
                                            | ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__1__KET____DOT__temp___05F1)) 
                                               & ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h9a06d6e3__0) 
                                                  | (((~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                                                        >> 0x1fU)) 
                                                      & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h30286939__0)) 
                                                     | ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h43936eca__0) 
                                                        | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h7cc82e19__0) 
                                                           | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h35f25981__0) 
                                                              | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hd8878281__0) 
                                                                 | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h30f5a730__0) 
                                                                    | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h7ee79cc2__0) 
                                                                       | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h46aac094__0) 
                                                                          | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hc76762b7__0))))))))))))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h80792cea__0 
        = (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__1__KET____DOT__temp___05F0) 
            & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h03f0e69d__0) 
                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                   >> 5U)) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hfa6ba428__0) 
                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                                  >> 5U)) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h24167555__0) 
                                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                                                 >> 5U)) 
                                             | (((~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                                                   >> 5U)) 
                                                 & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h24167555__0)) 
                                                | (((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                                                      >> 5U)) 
                                                    & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h03f0e69d__0)) 
                                                   | (((~ 
                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                                                         >> 5U)) 
                                                       & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hfa6ba428__0)) 
                                                      | ((IData)(
                                                                 ((8U 
                                                                   == 
                                                                   (0xaU 
                                                                    & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U])) 
                                                                  & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h78edc999__0))) 
                                                         | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h25080482__0) 
                                                             & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h78edc999__0)) 
                                                            | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h462294ca__0) 
                                                                | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h4e9bd335__0)) 
                                                               & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h10dc5f6d__0))))))))))) 
           | ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__1__KET____DOT__temp___05F0)) 
              & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__1__KET____DOT__temp___05F1) 
                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                     >> 0x17U)) | ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__1__KET____DOT__temp___05F1)) 
                                   & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__1__KET____DOT__temp___05F3) 
                                      | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h5e17f97e__0) 
                                         | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h911bea95__0) 
                                            | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h7ee79cc2__0) 
                                               | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h46aac094__0) 
                                                  | ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha7d7716a__0) 
                                                     | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_he5aa8fb3__0) 
                                                        | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h500870ec__0) 
                                                           | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h0f8cbc59__0) 
                                                              | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h16845a6a__0) 
                                                                 | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb704c67d__0)))))))))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h9442b32d__0 
        = (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__1__KET____DOT__temp___05F0) 
            & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h8c0ff0cb__0) 
                & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h4e0d7082__0)) 
               | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf1c3146d__0) 
                   & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h4e0d7082__0)) 
                  | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hdaa77755__0) 
                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                         >> 5U)) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h023e85a8__0) 
                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                                        >> 5U)) | (
                                                   ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hd9de282f__0) 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                                                       >> 5U)) 
                                                   | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h727d9513__0) 
                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                                                          >> 5U)) 
                                                      | (((~ 
                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                                                            >> 5U)) 
                                                          & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h727d9513__0)) 
                                                         | (((~ 
                                                              (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                                                               >> 5U)) 
                                                             & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hd9de282f__0)) 
                                                            | (((~ 
                                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                                                                  >> 5U)) 
                                                                & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hdaa77755__0)) 
                                                               | (((~ 
                                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                                                                     >> 5U)) 
                                                                   & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h023e85a8__0)) 
                                                                  | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h70504f38__0) 
                                                                      & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h78edc999__0)) 
                                                                     | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hd6ade43c__0) 
                                                                         & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h78edc999__0)) 
                                                                        | (((~ 
                                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                                                                              >> 5U)) 
                                                                            & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hfc74eb28__0)) 
                                                                           | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h8c0ff0cb__0) 
                                                                               & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h10dc5f6d__0)) 
                                                                              | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hfc74eb28__0) 
                                                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                                                                                >> 5U)) 
                                                                                | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h6f570682__0) 
                                                                                & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h10dc5f6d__0)))))))))))))))))) 
           | ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__1__KET____DOT__temp___05F0)) 
              & ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h9a06d6e3__0) 
                 | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__1__KET____DOT__temp___05F3) 
                    | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h5e17f97e__0) 
                       | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h911bea95__0) 
                          | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h5be28400__0) 
                              & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h1299a1b1__0)) 
                             | (((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                                     >> 0x1fU)) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h0ef7c669__0)) 
                                | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__1__KET____DOT__temp___05F4) 
                                   | ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h43936eca__0) 
                                      | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h7cc82e19__0) 
                                         | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h35f25981__0) 
                                            | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hd8878281__0) 
                                               | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h30f5a730__0) 
                                                  | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h7ee79cc2__0) 
                                                     | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h46aac094__0) 
                                                        | ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha7d7716a__0) 
                                                           | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_he5aa8fb3__0) 
                                                              | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h500870ec__0) 
                                                                 | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h0f8cbc59__0) 
                                                                    | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h16845a6a__0) 
                                                                       | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hc76762b7__0) 
                                                                          | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb704c67d__0) 
                                                                             | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h4a3919b5__0) 
                                                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                                                                                >> 0x1fU)))))))))))))))))))))))));
    mycpu_top__DOT__u_Main__DOT__MEM_forwardMode_w_o 
        = ((~ ((~ ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_loadSel_r_i) 
                   >> 4U)) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_memReq_r_i))) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_MEM__DOT____VdfgTmp_h57ecb1a5__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__REEXE_valid_w_o 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_allowin_w_o) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_REEXE__DOT__hasData));
    vlSelf->mycpu_top__DOT__data_req = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_memReq_r_i) 
                                        & ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_hasRisk_w_o)) 
                                           & ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_hasException_r_i)) 
                                              & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_allowin_w_o))));
    mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__aluso 
        = (((- (IData)((1U & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_aluOprator_r_i) 
                               >> 0xbU) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ALU_u__DOT__u_adder__DOT____VdfgTmp_hd2aefce6__0))))) 
            & (((- (IData)((IData)((0U != (0xc00U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_aluOprator_r_i)))))) 
                & mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ALU_u__DOT__u_adder__DOT__add_sub_res) 
               | (1U & (((- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_aluOprator_r_i) 
                                           >> 5U)))) 
                         & (IData)(mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ALU_u__DOT__u_adder__DOT__cout)) 
                        | ((- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_aluOprator_r_i) 
                                             >> 4U)))) 
                           & (~ (IData)(mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ALU_u__DOT__u_adder__DOT__cout))))))) 
           | (((- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_aluOprator_r_i) 
                                 >> 9U)))) & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT____Vcellinp__ALU_u__scr0 
                                              & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT____Vcellinp__ALU_u__scr1)) 
              | (((- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_aluOprator_r_i) 
                                    >> 8U)))) & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ALU_u__DOT__or_res) 
                 | (((~ vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ALU_u__DOT__or_res) 
                     & (- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_aluOprator_r_i) 
                                         >> 7U))))) 
                    | (((- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_aluOprator_r_i) 
                                          >> 6U)))) 
                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT____Vcellinp__ALU_u__scr0 
                           ^ vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT____Vcellinp__ALU_u__scr1)) 
                       | (((- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_aluOprator_r_i) 
                                             >> 3U)))) 
                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT____Vcellinp__ALU_u__scr1 
                              << (0x1fU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT____Vcellinp__ALU_u__scr0))) 
                          | (((- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_aluOprator_r_i) 
                                                >> 2U)))) 
                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT____Vcellinp__ALU_u__scr1 
                                 >> (0x1fU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT____Vcellinp__ALU_u__scr0))) 
                             | (((- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_aluOprator_r_i) 
                                                   >> 1U)))) 
                                 & VL_SHIFTRS_III(32,32,5, vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT____Vcellinp__ALU_u__scr1, 
                                                  (0x1fU 
                                                   & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT____Vcellinp__ALU_u__scr0))) 
                                | ((- (IData)((1U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_aluOprator_r_i)))) 
                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT____Vcellinp__ALU_u__scr1 
                                      << 0x10U))))))))));
    mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__overflow 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ALU_u__DOT__u_adder__DOT__cout) 
           ^ (mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ALU_u__DOT__u_adder__DOT__add_sub_res 
              >> 0x1fU));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_hd7f7fec5__0[0U] 
        = (IData)((((QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_predDest_p_o[3U])) 
                    << 1U) | (QData)((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_hed933301__0))));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_hd7f7fec5__0[1U] 
        = (IData)(((((QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_predDest_p_o[3U])) 
                     << 1U) | (QData)((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_hed933301__0))) 
                   >> 0x20U));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_hd7f7fec5__0[2U] 
        = (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__inst_p[3U] 
           << 0xeU);
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_hd7f7fec5__0[3U] 
        = (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__inst_p[3U] 
           >> 0x12U);
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h9147dd97__0[0U] 
        = (IData)((((QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_predDest_p_o[2U])) 
                    << 1U) | (QData)((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_hed973b3c__0))));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h9147dd97__0[1U] 
        = (IData)(((((QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_predDest_p_o[2U])) 
                     << 1U) | (QData)((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_hed973b3c__0))) 
                   >> 0x20U));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h9147dd97__0[2U] 
        = (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__inst_p[2U] 
           << 0xeU);
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h9147dd97__0[3U] 
        = (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__inst_p[2U] 
           >> 0x12U);
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_h40f69812__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_hed973b3c__0) 
           & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_originEnable_o) 
              >> 2U));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h413b3b9e__0[0U] 
        = (IData)((((QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_predDest_p_o[1U])) 
                    << 1U) | (QData)((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_heddc22ab__0))));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h413b3b9e__0[1U] 
        = (IData)(((((QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_predDest_p_o[1U])) 
                     << 1U) | (QData)((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_heddc22ab__0))) 
                   >> 0x20U));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h413b3b9e__0[2U] 
        = (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__inst_p[1U] 
           << 0xeU);
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h413b3b9e__0[3U] 
        = (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__inst_p[1U] 
           >> 0x12U);
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_h7c5d4f22__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_heddc22ab__0) 
           & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_originEnable_o) 
              >> 1U));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h96cd2526__0[0U] 
        = (IData)((((QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_predDest_p_o[0U])) 
                    << 1U) | (QData)((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_heddd41c6__0))));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h96cd2526__0[1U] 
        = (IData)(((((QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_predDest_p_o[0U])) 
                     << 1U) | (QData)((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_heddd41c6__0))) 
                   >> 0x20U));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h96cd2526__0[2U] 
        = (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__inst_p[0U] 
           << 0xeU);
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h96cd2526__0[3U] 
        = (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__inst_p[0U] 
           >> 0x12U);
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_h7c474841__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_heddd41c6__0) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_originEnable_o));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__BTB_validDest_o 
        = (((- (IData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h7c474841__0))) 
            & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h2a155fb0__0) 
           | (((- (IData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h00616ab3__0))) 
               & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h2b682062__0) 
              | (((- (IData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h99804cb6__0))) 
                  & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h2be6a8b5__0) 
                 | (((- (IData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__needDelaySlot))) 
                     & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h24613937__0) 
                    | ((- (IData)((1U & (~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__firstValidBit))))))) 
                       & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h52796ce4__0)
                           ? vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__BTB_fifthVAddr_o
                           : (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__BTB_fifthVAddr_o 
                              - (IData)(0xcU))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb3a348b1__0 
        = (((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h280da603__0) 
            << 1U) | (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h8d4fa09b__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hffd0d0cd__0 
        = ((0x3e0U & (((- (IData)((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h280da603__0))) 
                       << 5U) & ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                                  << 0x15U) | (0x1fffe0U 
                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                                                  >> 0xbU))))) 
           | (0x1fU & ((- (IData)((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h8d4fa09b__0))) 
                       & ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                           << 0xbU) | (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                                       >> 0x15U)))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h6b56dff3__0 
        = ((- (IData)((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf6c6d942__0))) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h81060927__0));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h08e8c74b__0 
        = ((- (IData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h6edd518f__0))) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h98cf59f1__0));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h7c0de452__0 
        = (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h80792cea__0) 
            << 1U) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h9442b32d__0));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h0ee4e8e8__0 
        = ((0x3e0U & (((- (IData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h80792cea__0))) 
                       << 5U) & ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                                  << 0x15U) | (0x1fffe0U 
                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                                                  >> 0xbU))))) 
           | (0x1fU & ((- (IData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h9442b32d__0))) 
                       & ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                           << 0xbU) | (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                                       >> 0x15U)))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__IS_issueMode_o 
        = ((2U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__IQ_supplyValid))
            ? ((1U & (((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf6c6d942__0) 
                       & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h9442b32d__0) 
                           & ((0x1fU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                                        >> 0x15U)) 
                              == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h81060927__0))) 
                          | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h80792cea__0) 
                             & ((0x1fU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                                          >> 0x10U)) 
                                == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h81060927__0))))) 
                      | ((~ (IData)((0U != (2U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__instMode
                                            [1U])))) 
                         | ((~ (IData)((0U != (1U & 
                                               vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__instMode
                                               [0U])))) 
                            | (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[3U] 
                               >> 1U))))) ? 1U : 3U)
            : ((1U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__IQ_supplyValid))
                ? ((0U != (2U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__instMode
                           [0U])) ? 1U : 0U) : 0U));
    vlSelf->mycpu_top__DOT__data_index_ok = ((0xfU 
                                              != (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat)) 
                                             & ((IData)(vlSelf->mycpu_top__DOT__data_req) 
                                                & ((~ (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_req)) 
                                                   | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_data_ok))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_up_aluRes_o 
        = ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_repairAction_r_i) 
             >> 7U) & (0U != (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_writeNum_r_i)))
            ? ((IData)(8U) + vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_VAddr_r_i)
            : mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__aluso);
    vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_up_corrDest_o 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_up_corrTake_o)
            ? mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__aluso
            : ((((IData)(1U) + (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_VAddr_r_i 
                                >> 3U)) << 3U) | (7U 
                                                  & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_VAddr_r_i)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_aluRes_o 
        = (((- (IData)((1U & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_aluOprator_r_i) 
                               >> 0xbU) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ALU_u__DOT__u_adder__DOT____VdfgTmp_hd2aefce6__0))))) 
            & (((- (IData)((IData)((0U != (0xc00U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_aluOprator_r_i)))))) 
                & mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ALU_u__DOT__u_adder__DOT__add_sub_res) 
               | (1U & (((- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_aluOprator_r_i) 
                                           >> 5U)))) 
                         & ((mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ALU_u__DOT__u_adder__DOT__add_sub_res 
                             >> 0x1fU) ^ (IData)(mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__overflow))) 
                        | ((- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_aluOprator_r_i) 
                                             >> 4U)))) 
                           & (~ (IData)(mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ALU_u__DOT__u_adder__DOT__cout))))))) 
           | (((- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_aluOprator_r_i) 
                                 >> 9U)))) & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT____Vcellinp__ALU_u__scr0 
                                              & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT____Vcellinp__ALU_u__scr1)) 
              | (((- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_aluOprator_r_i) 
                                    >> 8U)))) & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ALU_u__DOT__or_res) 
                 | (((~ vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ALU_u__DOT__or_res) 
                     & (- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_aluOprator_r_i) 
                                         >> 7U))))) 
                    | (((- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_aluOprator_r_i) 
                                          >> 6U)))) 
                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT____Vcellinp__ALU_u__scr0 
                           ^ vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT____Vcellinp__ALU_u__scr1)) 
                       | (((- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_aluOprator_r_i) 
                                             >> 3U)))) 
                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT____Vcellinp__ALU_u__scr1 
                              << (0x1fU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT____Vcellinp__ALU_u__scr0))) 
                          | (((- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_aluOprator_r_i) 
                                                >> 2U)))) 
                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT____Vcellinp__ALU_u__scr1 
                                 >> (0x1fU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT____Vcellinp__ALU_u__scr0))) 
                             | (((- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_aluOprator_r_i) 
                                                   >> 1U)))) 
                                 & VL_SHIFTRS_III(32,32,5, vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT____Vcellinp__ALU_u__scr1, 
                                                  (0x1fU 
                                                   & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT____Vcellinp__ALU_u__scr0))) 
                                | ((- (IData)((1U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_aluOprator_r_i)))) 
                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT____Vcellinp__ALU_u__scr1 
                                      << 0x10U))))))))));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_hffe4f6df__0 
        = ((~ (IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_h7c474841__0)) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_h7c5d4f22__0));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_h020966c0__0 
        = (1U & ((~ (IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_h7c474841__0)) 
                 & (~ (IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_h7c5d4f22__0))));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha6b0f486__0[0U] 
        = (((IData)((0x1fffffffffffULL & (((QData)((IData)(
                                                           vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[4U])) 
                                           << 0x1eU) 
                                          | ((QData)((IData)(
                                                             vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[3U])) 
                                             >> 2U)))) 
            << 0x18U) | ((0x800000U & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[3U] 
                                       << 0x16U)) | 
                         ((0x7c0000U & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[4U] 
                                        << 3U)) | (
                                                   (0x20000U 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[4U] 
                                                       >> 3U)) 
                                                   | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hffd0d0cd__0) 
                                                       << 7U) 
                                                      | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h6b56dff3__0) 
                                                          << 2U) 
                                                         | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb3a348b1__0)))))));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha6b0f486__0[1U] 
        = (((IData)((0x1fffffffffffULL & (((QData)((IData)(
                                                           vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[4U])) 
                                           << 0x1eU) 
                                          | ((QData)((IData)(
                                                             vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[3U])) 
                                             >> 2U)))) 
            >> 8U) | ((IData)(((0x1fffffffffffULL & 
                                (((QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[4U])) 
                                  << 0x1eU) | ((QData)((IData)(
                                                               vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[3U])) 
                                               >> 2U))) 
                               >> 0x20U)) << 0x18U));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha6b0f486__0[2U] 
        = ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[2U] 
            << 6U) | ((0x20U & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[3U] 
                                << 5U)) | ((IData)(
                                                   ((0x1fffffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[4U])) 
                                                         << 0x1eU) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[3U])) 
                                                           >> 2U))) 
                                                    >> 0x20U)) 
                                           >> 8U)));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha6b0f486__0[3U] 
        = ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[2U] 
            >> 0x1aU) | ((IData)((((QData)((IData)(
                                                   vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[0U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U])))) 
                         << 6U));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha6b0f486__0[4U] 
        = (((IData)((((QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[0U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U])))) 
            >> 0x1aU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[0U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U]))) 
                                  >> 0x20U)) << 6U));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha6b0f486__0[5U] 
        = ((IData)(((((QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[0U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U]))) 
                    >> 0x20U)) >> 0x1aU);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf25c7c1d__0[0U] 
        = (((IData)((0x1fffffffffffULL & (((QData)((IData)(
                                                           vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[4U])) 
                                           << 0x1eU) 
                                          | ((QData)((IData)(
                                                             vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[3U])) 
                                             >> 2U)))) 
            << 0x18U) | ((0x800000U & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[3U] 
                                       << 0x16U)) | 
                         ((0x7c0000U & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[4U] 
                                        << 3U)) | (
                                                   (0x20000U 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[4U] 
                                                       >> 3U)) 
                                                   | (((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h0ee4e8e8__0) 
                                                       << 7U) 
                                                      | (((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h08e8c74b__0) 
                                                          << 2U) 
                                                         | (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h7c0de452__0)))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf25c7c1d__0[1U] 
        = (((IData)((0x1fffffffffffULL & (((QData)((IData)(
                                                           vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[4U])) 
                                           << 0x1eU) 
                                          | ((QData)((IData)(
                                                             vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[3U])) 
                                             >> 2U)))) 
            >> 8U) | ((IData)(((0x1fffffffffffULL & 
                                (((QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[4U])) 
                                  << 0x1eU) | ((QData)((IData)(
                                                               vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[3U])) 
                                               >> 2U))) 
                               >> 0x20U)) << 0x18U));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf25c7c1d__0[2U] 
        = ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[2U] 
            << 6U) | ((0x20U & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[3U] 
                                << 5U)) | ((IData)(
                                                   ((0x1fffffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[4U])) 
                                                         << 0x1eU) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[3U])) 
                                                           >> 2U))) 
                                                    >> 0x20U)) 
                                           >> 8U)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf25c7c1d__0[3U] 
        = ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[2U] 
            >> 0x1aU) | ((IData)((((QData)((IData)(
                                                   vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[0U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U])))) 
                         << 6U));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf25c7c1d__0[4U] 
        = (((IData)((((QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[0U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U])))) 
            >> 0x1aU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[0U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U]))) 
                                  >> 0x20U)) << 6U));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf25c7c1d__0[5U] 
        = ((IData)(((((QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[0U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U]))) 
                    >> 0x20U)) >> 0x1aU);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_DataMemoryManagementUnit__DOT____VdfgTmp_h9dac7050__0 
        = ((IData)(vlSelf->mycpu_top__DOT__data_index_ok) 
           & (IData)(vlSelf->mycpu_top__DOT__data_req));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_index 
        = (0x7fU & ((0xfU == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat))
                     ? (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__reset_counter)
                     : ((4U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat))
                         ? (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_index)
                         : ((5U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat))
                             ? (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_index)
                             : (((IData)(vlSelf->mycpu_top__DOT__data_index_ok) 
                                 & (1U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat)))
                                 ? (vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_aluRes_r_i 
                                    >> 5U) : (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_index))))));
    mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__ready 
        = (1U & (~ (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_memReq_r_i) 
                     & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_hasRisk_w_o)) 
                    | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_isTLBInst_r_i) 
                        & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_hasRisk_w_o)) 
                       | ((~ (IData)(vlSelf->mycpu_top__DOT__data_index_ok)) 
                          & ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_hasException_r_i)) 
                             & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_memReq_r_i)))))));
    mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__predictHit 
        = (1U & ((~ ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_up_corrTake_o) 
                     | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_predTake_r_i))) 
                 | ((vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_up_corrDest_o 
                     == vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_predDest_r_i) 
                    & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_up_corrTake_o) 
                       & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_predTake_r_i)))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_hasException_o 
        = (1U & (((2U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_exceptionSel_r_i))
                   ? (IData)(mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__overflow)
                   : ((1U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_exceptionSel_r_i))
                       ? ((8U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_trapKind_r_i))
                           ? (~ (IData)((0U != vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_aluRes_o)))
                           : ((2U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_trapKind_r_i))
                               ? vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_aluRes_o
                               : (~ ((1U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_trapKind_r_i))
                                      ? vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_aluRes_o
                                      : (~ (IData)(
                                                   (0U 
                                                    != vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_aluRes_o)))))))
                       : ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_memWR_r_i)
                           ? (((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_storeMode_r_i) 
                                 >> 1U) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__alignCheck)) 
                               | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_storeMode_r_i) 
                                   >> 2U) & (0U != (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__alignCheck)))) 
                              & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_memReq_r_i))
                           : ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_memWR_r_i)) 
                              & ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT____VdfgTmp_hfe30ddba__0) 
                                   & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__alignCheck)) 
                                  | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_loadMode_r_i) 
                                      >> 4U) & (0U 
                                                != (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__alignCheck)))) 
                                 & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_memReq_r_i)))))) 
                 | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_hasException_r_i)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_exceptBadVAddr_w_o 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_hasException_r_i)
            ? vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_VAddr_r_i
            : vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_aluRes_o);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__actualEnable 
        = (((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_h7c474841__0)
             ? 3U : ((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_hffe4f6df__0)
                      ? 7U : 0xfU)) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_originEnable_o));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_hffbf6f80__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_h020966c0__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_h40f69812__0));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_hffbb4775__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_h020966c0__0) 
           & ((~ (IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_h40f69812__0)) 
              & ((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_hed933301__0) 
                 & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_originEnable_o) 
                    >> 3U))));
    if ((1U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__IS_issueMode_o))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hbe18c8f9__0[0U] 
            = mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha6b0f486__0[0U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hbe18c8f9__0[1U] 
            = mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha6b0f486__0[1U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hbe18c8f9__0[2U] 
            = mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha6b0f486__0[2U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hbe18c8f9__0[3U] 
            = mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha6b0f486__0[3U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hbe18c8f9__0[4U] 
            = mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha6b0f486__0[4U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hbe18c8f9__0[5U] 
            = mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha6b0f486__0[5U];
    } else {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hbe18c8f9__0[0U] 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf25c7c1d__0[0U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hbe18c8f9__0[1U] 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf25c7c1d__0[1U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hbe18c8f9__0[2U] 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf25c7c1d__0[2U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hbe18c8f9__0[3U] 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf25c7c1d__0[3U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hbe18c8f9__0[4U] 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf25c7c1d__0[4U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hbe18c8f9__0[5U] 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf25c7c1d__0[5U];
    }
    vlSelf->mycpu_top__DOT__u_Main__DOT__data_tlbReq_o 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_DataMemoryManagementUnit__DOT____VdfgTmp_h9dac7050__0) 
           | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_search_w_o));
    vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_allowin_w_o 
        = (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__hasData)) 
            | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__ready)) 
           & (((IData)(mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__ready) 
               | (~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__hasData))) 
              & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_allowin_w_o)));
    mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT____VdfgTmp_h18f03704__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__ready) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__hasData));
    vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_up_branchRisk_o 
        = ((~ (IData)(mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__predictHit)) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_branchRisk_r_i));
    __Vtemp_ha33fb1cb__0[2U] = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_hasRisk_w_o)
                                 ? (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_hasException_w_o) 
                                     << 8U) | ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_isInterrupt_w_o)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_hasException_r_i)
                                                   ? (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_ExcCode_r_i)
                                                   : 
                                                  ((- (IData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_DataMemoryManagementUnit__DOT__mapReq))) 
                                                   & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_DataMemoryManagementUnit__DOT__mapWR)
                                                       ? 2U
                                                       : 3U)))) 
                                                << 3U) 
                                               | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_isDelaySlot_r_i) 
                                                   << 2U) 
                                                  | ((IData)(
                                                             ((((QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_VAddr_r_i)) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_exceptBadVAddr_r_i))) 
                                                              >> 0x20U)) 
                                                     >> 0x1eU))))
                                 : (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_hasException_r_i) 
                                     << 8U) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_ExcCode_r_i) 
                                                << 3U) 
                                               | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_isDelaySlot_r_i) 
                                                   << 2U) 
                                                  | ((IData)(
                                                             ((((QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_VAddr_r_i)) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_exceptBadVAddr_r_i))) 
                                                              >> 0x20U)) 
                                                     >> 0x1eU)))));
    if (vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_hasRisk_w_o) {
        if (vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_hasRisk_w_o) {
            __Vtemp_h1a39634b__0[1U] = (((IData)((((QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_VAddr_r_i)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_exceptBadVAddr_r_i)))) 
                                         >> 0x1eU) 
                                        | ((IData)(
                                                   ((((QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_VAddr_r_i)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_exceptBadVAddr_r_i))) 
                                                    >> 0x20U)) 
                                           << 2U));
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__selectedInfo[0U] 
                = (((IData)((((QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_VAddr_r_i)) 
                              << 0x20U) | (QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_exceptBadVAddr_r_i)))) 
                    << 2U) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_nonBlockMark_r_i) 
                               << 1U) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_eret_r_i)));
        } else {
            __Vtemp_h1a39634b__0[1U] = (((IData)((((QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_VAddr_r_i)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_exceptBadVAddr_r_i)))) 
                                         >> 0x1eU) 
                                        | ((IData)(
                                                   ((((QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_VAddr_r_i)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_exceptBadVAddr_r_i))) 
                                                    >> 0x20U)) 
                                           << 2U));
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__selectedInfo[0U] 
                = (((IData)((((QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_VAddr_r_i)) 
                              << 0x20U) | (QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_exceptBadVAddr_r_i)))) 
                    << 2U) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_nonBlockMark_r_i) 
                               << 1U) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_eret_r_i)));
        }
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__selectedInfo[1U] 
            = __Vtemp_h1a39634b__0[1U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__selectedInfo[2U] 
            = __Vtemp_ha33fb1cb__0[2U];
    } else {
        __Vtemp_h1a39634b__0[1U] = (((IData)((((QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_VAddr_r_i)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_exceptBadVAddr_w_o)))) 
                                     >> 0x1eU) | ((IData)(
                                                          ((((QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_VAddr_r_i)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_exceptBadVAddr_w_o))) 
                                                           >> 0x20U)) 
                                                  << 2U));
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__selectedInfo[0U] 
            = (((IData)((((QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_VAddr_r_i)) 
                          << 0x20U) | (QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_exceptBadVAddr_w_o)))) 
                << 2U) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__HiLo_busy) 
                           << 1U) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_eret_r_i)));
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__selectedInfo[1U] 
            = __Vtemp_h1a39634b__0[1U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__selectedInfo[2U] 
            = (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_hasExceprion_w_o) 
                << 8U) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_ExcCode_r_i) 
                           << 3U) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_isDelaySlot_r_i) 
                                      << 2U) | ((IData)(
                                                        ((((QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_VAddr_r_i)) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_exceptBadVAddr_w_o))) 
                                                         >> 0x20U)) 
                                                >> 0x1eU))));
    }
    vlSelf->mycpu_top__DOT__u_Main__DOT__IF_valid_o 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_valid_o) 
           & (0U != (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__actualEnable)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_Compressor__DOT____VdfgTmp_hefe5f881__0 
        = ((1U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__actualEnable)) 
           | ((2U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__actualEnable)) 
              | ((4U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__actualEnable)) 
                 | (8U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__actualEnable)))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_Compressor__DOT____VdfgTmp_h48e5f017__0 
        = ((3U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__actualEnable)) 
           | ((5U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__actualEnable)) 
              | ((9U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__actualEnable)) 
                 | ((6U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__actualEnable)) 
                    | ((0xaU == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__actualEnable)) 
                       | (0xcU == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__actualEnable)))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_Compressor__DOT____VdfgTmp_h3e94583a__0 
        = ((7U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__actualEnable)) 
           | ((0xbU == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__actualEnable)) 
              | ((0xdU == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__actualEnable)) 
                 | (0xeU == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__actualEnable)))));
    __VdfgTmp_hfb0b5afa__0 = (IData)((0xcU == (0xcU 
                                               & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__actualEnable))));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_Compressor__DOT____VdfgTmp_h34f4bc99__0 
        = (IData)((3U == (3U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__actualEnable))));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_Compressor__DOT____VdfgTmp_h30733988__0 
        = (IData)((6U == (6U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__actualEnable))));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h5452d3f1__0 
        = (IData)((2U == (3U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__actualEnable))));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h54128866__0 
        = (IData)((4U == (7U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__actualEnable))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__BSC_needDelaySlot_w_o 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_hffbb4775__0) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_hf06d4339__0));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__firstValidBit 
        = (((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_hffbb4775__0) 
            << 3U) | (((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_hffbf6f80__0) 
                       << 2U) | (((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_hffe4f6df__0) 
                                  << 1U) | (IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_h7c474841__0))));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__firstBranchInst 
        = (((- (IData)((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_h7c474841__0))) 
            & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__inst_p[0U]) 
           | (((- (IData)((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_hffe4f6df__0))) 
               & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__inst_p[1U]) 
              | (((- (IData)((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_hffbf6f80__0))) 
                  & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__inst_p[2U]) 
                 | ((- (IData)((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_hffbb4775__0))) 
                    & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__inst_p[3U]))));
    mycpu_top__DOT__u_Main__DOT__PREMEM_forwardMode_w_o 
        = ((~ ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_memReq_r_i) 
               | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_readCp0_r_i))) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT____VdfgTmp_h18f03704__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__isExceptionInNormal 
        = ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Status_exl)) 
           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__selectedInfo[2U] 
              >> 8U));
    vlSelf->mycpu_top__DOT__u_Main__DOT__IF_instEnable_o 
        = (0xfU & ((1U & (- (IData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_Compressor__DOT____VdfgTmp_hefe5f881__0)))) 
                   | ((3U & (- (IData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_Compressor__DOT____VdfgTmp_h48e5f017__0)))) 
                      | ((7U & (- (IData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_Compressor__DOT____VdfgTmp_h3e94583a__0)))) 
                         | (- (IData)((0xfU == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__actualEnable))))))));
    if (mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_Compressor__DOT____VdfgTmp_h34f4bc99__0) {
        __VdfgTmp_h064de08b__0 = (1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__actualEnable) 
                                        >> 2U));
        mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h85d8a9ee__0[0U] 
            = mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h413b3b9e__0[0U];
        mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h85d8a9ee__0[1U] 
            = mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h413b3b9e__0[1U];
        mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h85d8a9ee__0[2U] 
            = mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h413b3b9e__0[2U];
        mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h85d8a9ee__0[3U] 
            = mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h413b3b9e__0[3U];
    } else {
        __VdfgTmp_h064de08b__0 = 0U;
        if (((~ (IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_Compressor__DOT____VdfgTmp_h34f4bc99__0)) 
             & (IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_Compressor__DOT____VdfgTmp_h30733988__0))) {
            mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h85d8a9ee__0[0U] 
                = mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h9147dd97__0[0U];
            mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h85d8a9ee__0[1U] 
                = mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h9147dd97__0[1U];
            mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h85d8a9ee__0[2U] 
                = mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h9147dd97__0[2U];
            mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h85d8a9ee__0[3U] 
                = mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h9147dd97__0[3U];
        } else if (((~ (IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_Compressor__DOT____VdfgTmp_h34f4bc99__0)) 
                    & ((~ (IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_Compressor__DOT____VdfgTmp_h30733988__0)) 
                       & (IData)(__VdfgTmp_hfb0b5afa__0)))) {
            mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h85d8a9ee__0[0U] 
                = mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_hd7f7fec5__0[0U];
            mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h85d8a9ee__0[1U] 
                = mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_hd7f7fec5__0[1U];
            mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h85d8a9ee__0[2U] 
                = mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_hd7f7fec5__0[2U];
            mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h85d8a9ee__0[3U] 
                = mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_hd7f7fec5__0[3U];
        } else {
            mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h85d8a9ee__0[0U] = 0U;
            mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h85d8a9ee__0[1U] = 0U;
            mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h85d8a9ee__0[2U] = 0U;
            mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h85d8a9ee__0[3U] = 0U;
        }
    }
    __VdfgTmp_hcad2a531__0 = ((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_Compressor__DOT____VdfgTmp_h30733988__0) 
                              & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__actualEnable) 
                                 >> 3U));
    if ((1U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__actualEnable))) {
        mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_he756e32b__0[0U] 
            = mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h96cd2526__0[0U];
        mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_he756e32b__0[1U] 
            = mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h96cd2526__0[1U];
        mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_he756e32b__0[2U] 
            = mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h96cd2526__0[2U];
        mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_he756e32b__0[3U] 
            = mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h96cd2526__0[3U];
        mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_ha76478e6__0 = 0U;
    } else if (mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h5452d3f1__0) {
        mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_he756e32b__0[0U] 
            = mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h413b3b9e__0[0U];
        mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_he756e32b__0[1U] 
            = mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h413b3b9e__0[1U];
        mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_he756e32b__0[2U] 
            = mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h413b3b9e__0[2U];
        mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_he756e32b__0[3U] 
            = mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h413b3b9e__0[3U];
        mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_ha76478e6__0 = 1U;
    } else if (mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h54128866__0) {
        mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_he756e32b__0[0U] 
            = mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h9147dd97__0[0U];
        mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_he756e32b__0[1U] 
            = mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h9147dd97__0[1U];
        mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_he756e32b__0[2U] 
            = mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h9147dd97__0[2U];
        mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_he756e32b__0[3U] 
            = mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h9147dd97__0[3U];
        mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_ha76478e6__0 = 2U;
    } else {
        if ((8U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__actualEnable))) {
            mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_he756e32b__0[0U] 
                = mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_hd7f7fec5__0[0U];
            mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_he756e32b__0[1U] 
                = mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_hd7f7fec5__0[1U];
            mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_he756e32b__0[2U] 
                = mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_hd7f7fec5__0[2U];
            mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_he756e32b__0[3U] 
                = mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_hd7f7fec5__0[3U];
        } else {
            mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_he756e32b__0[0U] = 0U;
            mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_he756e32b__0[1U] = 0U;
            mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_he756e32b__0[2U] = 0U;
            mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_he756e32b__0[3U] = 0U;
        }
        mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_ha76478e6__0 = 3U;
    }
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__BSC_correctTake_w_o 
        = (0U != ((((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_hed933301__0) 
                    << 3U) | (((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_hed973b3c__0) 
                               << 2U) | (((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_heddc22ab__0) 
                                          << 1U) | (IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_heddd41c6__0)))) 
                  & (IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__firstValidBit)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__BSC_correctDest_w_o 
        = (((- (IData)((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_h7c474841__0))) 
            & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_predDest_p_o[0U]) 
           | (((- (IData)((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_hffe4f6df__0))) 
               & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_predDest_p_o[1U]) 
              | (((- (IData)((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_hffbf6f80__0))) 
                  & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_predDest_p_o[2U]) 
                 | (((- (IData)((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_hffbb4775__0))) 
                     & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_predDest_p_o[3U]) 
                    | ((- (IData)((1U & (~ (IData)(
                                                   (0U 
                                                    != (IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__firstValidBit))))))) 
                       & ((8U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_originEnable_o))
                           ? vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_BTBfifthVAddr_o
                           : (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_BTBfifthVAddr_o 
                              - (IData)(0xcU))))))));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_hd2c5f6b1__0 
        = (IData)((0x8000000U == (0xc000000U & mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__firstBranchInst)));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_hd5b602d8__0 
        = (IData)((0U == (0xc000000U & mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__firstBranchInst)));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h96fb8cf6__0 
        = (IData)((0xc000000U == (0xc000000U & mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__firstBranchInst)));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h0be58052__0 
        = (1U & ((~ (mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__firstBranchInst 
                     >> 0x11U)) & (~ (IData)((0U != 
                                              (0xc0000U 
                                               & mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__firstBranchInst))))));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_hd5c6f60a__0 
        = (IData)((0x4000000U == (0xc000000U & mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__firstBranchInst)));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_he4fd78b0__0 
        = (1U & ((~ (mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__firstBranchInst 
                     >> 0x1dU)) & (~ (IData)((0U != 
                                              (0xc0000000U 
                                               & mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__firstBranchInst))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_excOccur_w_o 
        = (1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__isExceptionInNormal) 
                 | (vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__selectedInfo[0U] 
                    | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__writeK0))));
    if (__VdfgTmp_h064de08b__0) {
        mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h3e996166__0[0U] 
            = mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h9147dd97__0[0U];
        mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h3e996166__0[1U] 
            = mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h9147dd97__0[1U];
        mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h3e996166__0[2U] 
            = mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h9147dd97__0[2U];
        mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h3e996166__0[3U] 
            = mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h9147dd97__0[3U];
    } else if (((~ (IData)(__VdfgTmp_h064de08b__0)) 
                & (IData)(__VdfgTmp_hcad2a531__0))) {
        mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h3e996166__0[0U] 
            = mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_hd7f7fec5__0[0U];
        mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h3e996166__0[1U] 
            = mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_hd7f7fec5__0[1U];
        mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h3e996166__0[2U] 
            = mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_hd7f7fec5__0[2U];
        mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h3e996166__0[3U] 
            = mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_hd7f7fec5__0[3U];
    } else {
        mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h3e996166__0[0U] = 0U;
        mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h3e996166__0[1U] = 0U;
        mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h3e996166__0[2U] = 0U;
        mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h3e996166__0[3U] = 0U;
    }
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo[0U][0U] 
        = ((0xfffffff0U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_VAddr_o) 
           | (((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_ha76478e6__0) 
               << 2U) | (3U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_VAddr_o)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo[0U][1U] 
        = (IData)((((QData)((IData)(((mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_he756e32b__0[1U] 
                                      << 0x1fU) | (
                                                   mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_he756e32b__0[0U] 
                                                   >> 1U)))) 
                    << 0x20U) | (QData)((IData)(((mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_he756e32b__0[3U] 
                                                  << 0x12U) 
                                                 | (mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_he756e32b__0[2U] 
                                                    >> 0xeU))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo[0U][2U] 
        = (IData)(((((QData)((IData)(((mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_he756e32b__0[1U] 
                                       << 0x1fU) | 
                                      (mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_he756e32b__0[0U] 
                                       >> 1U)))) << 0x20U) 
                    | (QData)((IData)(((mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_he756e32b__0[3U] 
                                        << 0x12U) | 
                                       (mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_he756e32b__0[2U] 
                                        >> 0xeU))))) 
                   >> 0x20U));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo[0U][3U] 
        = (((IData)((0x1fffffffffffULL & (((QData)((IData)(
                                                           mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_he756e32b__0[2U])) 
                                           << 0x1fU) 
                                          | ((QData)((IData)(
                                                             mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_he756e32b__0[1U])) 
                                             >> 1U)))) 
            << 2U) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_hasException_o) 
                       << 1U) | (1U & mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_he756e32b__0[0U])));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo[0U][4U] 
        = (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_isRefill_o) 
            << 0x14U) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_ExcCode_o) 
                          << 0xfU) | (((IData)((0x1fffffffffffULL 
                                                & (((QData)((IData)(
                                                                    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_he756e32b__0[2U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_he756e32b__0[1U])) 
                                                      >> 1U)))) 
                                       >> 0x1eU) | 
                                      ((IData)(((0x1fffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_he756e32b__0[2U])) 
                                                     << 0x1fU) 
                                                    | ((QData)((IData)(
                                                                       mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_he756e32b__0[1U])) 
                                                       >> 1U))) 
                                                >> 0x20U)) 
                                       << 2U))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo[0U][5U] = 0U;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo[1U][0U] 
        = ((0xfffffff0U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_VAddr_o) 
           | ((0xcU & (((IData)(1U) + (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_ha76478e6__0)) 
                       << 2U)) | (3U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_VAddr_o)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo[1U][1U] 
        = (IData)((((QData)((IData)(((mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h85d8a9ee__0[1U] 
                                      << 0x1fU) | (
                                                   mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h85d8a9ee__0[0U] 
                                                   >> 1U)))) 
                    << 0x20U) | (QData)((IData)(((mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h85d8a9ee__0[3U] 
                                                  << 0x12U) 
                                                 | (mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h85d8a9ee__0[2U] 
                                                    >> 0xeU))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo[1U][2U] 
        = (IData)(((((QData)((IData)(((mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h85d8a9ee__0[1U] 
                                       << 0x1fU) | 
                                      (mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h85d8a9ee__0[0U] 
                                       >> 1U)))) << 0x20U) 
                    | (QData)((IData)(((mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h85d8a9ee__0[3U] 
                                        << 0x12U) | 
                                       (mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h85d8a9ee__0[2U] 
                                        >> 0xeU))))) 
                   >> 0x20U));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo[1U][3U] 
        = (((IData)((0x1fffffffffffULL & (((QData)((IData)(
                                                           mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h85d8a9ee__0[2U])) 
                                           << 0x1fU) 
                                          | ((QData)((IData)(
                                                             mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h85d8a9ee__0[1U])) 
                                             >> 1U)))) 
            << 2U) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_hasException_o) 
                       << 1U) | (1U & mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h85d8a9ee__0[0U])));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo[1U][4U] 
        = (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_isRefill_o) 
            << 0x14U) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_ExcCode_o) 
                          << 0xfU) | (((IData)((0x1fffffffffffULL 
                                                & (((QData)((IData)(
                                                                    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h85d8a9ee__0[2U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h85d8a9ee__0[1U])) 
                                                      >> 1U)))) 
                                       >> 0x1eU) | 
                                      ((IData)(((0x1fffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h85d8a9ee__0[2U])) 
                                                     << 0x1fU) 
                                                    | ((QData)((IData)(
                                                                       mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h85d8a9ee__0[1U])) 
                                                       >> 1U))) 
                                                >> 0x20U)) 
                                       << 2U))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo[1U][5U] = 0U;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo[3U][0U] 
        = ((0xfffffff0U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_VAddr_o) 
           | ((0xcU & (((IData)(3U) + (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_ha76478e6__0)) 
                       << 2U)) | (3U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_VAddr_o)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo[3U][1U] 
        = (IData)((((QData)((IData)(((0xfU == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__actualEnable))
                                      ? vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_predDest_p_o[3U]
                                      : 0U))) << 0x20U) 
                   | (QData)((IData)(((0xfU == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__actualEnable))
                                       ? vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__inst_p[3U]
                                       : 0U)))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo[3U][2U] 
        = (IData)(((((QData)((IData)(((0xfU == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__actualEnable))
                                       ? vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_predDest_p_o[3U]
                                       : 0U))) << 0x20U) 
                    | (QData)((IData)(((0xfU == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__actualEnable))
                                        ? vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__inst_p[3U]
                                        : 0U)))) >> 0x20U));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo[3U][3U] 
        = (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_hasException_o) 
            << 1U) | ((0xfU == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__actualEnable)) 
                      & (IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__BranchFourToOne_u__DOT____VdfgTmp_hed933301__0)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo[3U][4U] 
        = (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_isRefill_o) 
            << 0x14U) | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_ExcCode_o) 
                         << 0xfU));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo[3U][5U] = 0U;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__BSC_isDiffRes_w_o 
        = ((~ (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_BTBInstEnable_o) 
                == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__actualEnable)) 
               & ((~ ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_BTBValidTake_o) 
                      | (IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__BSC_correctTake_w_o))) 
                  | ((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__BSC_correctTake_w_o) 
                     & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_BTBValidTake_o) 
                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_BTBValidDest_o 
                           == vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__BSC_correctDest_w_o)))))) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_hf06d4339__0));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h69f1a94a__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_hd2c5f6b1__0) 
           & (mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__firstBranchInst 
              >> 0x1cU));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h302ebe31__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_hd5b602d8__0) 
           & (mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__firstBranchInst 
              >> 0x1cU));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h9077d39b__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h96fb8cf6__0) 
           & (mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__firstBranchInst 
              >> 0x1cU));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h41e64b47__0 
        = ((~ (mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__firstBranchInst 
               >> 0x1cU)) & (IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h96fb8cf6__0));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h51e93d14__0 
        = ((mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__firstBranchInst 
            >> 0x10U) & (IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h0be58052__0));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_hcab7a376__0 
        = ((~ (mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__firstBranchInst 
               >> 0x10U)) & (IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h0be58052__0));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h2c70d0d4__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_hd5c6f60a__0) 
           & (mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__firstBranchInst 
              >> 0x1cU));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h00ab3053__0 
        = ((~ (mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__firstBranchInst 
               >> 0x1cU)) & (IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_hd5c6f60a__0));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h3fe4b6fd__0 
        = ((~ (mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__firstBranchInst 
               >> 0x1cU)) & (IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_he4fd78b0__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__needFlush 
        = ((IData)(vlSelf->__VdfgTmp_he8465266__0) 
           & ((~ ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_hasException_w_o) 
                  | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_eret_r_i))) 
              & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_excOccur_w_o)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__needFlush 
        = ((IData)(vlSelf->__VdfgTmp_he8465266__0) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_excOccur_w_o));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needFlush 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_hasRisk_w_o) 
           & ((~ ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_eret_r_i) 
                  | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_hasException_r_i))) 
              & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_excOccur_w_o)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__exceptionClean 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_hasRisk_w_o) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_excOccur_w_o));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__needClear 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_excOccur_w_o) 
           | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__SBA_flush_w_o));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__cancel 
        = (((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__selectedInfo[0U] 
                >> 1U)) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_excOccur_w_o)) 
           | ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__EXE_down_nonBlockDS_r_i)) 
              & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__SBA_flush_w_o)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo[2U][0U] 
        = ((0xfffffff0U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_VAddr_o) 
           | ((0xcU & (((IData)(2U) + (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_ha76478e6__0)) 
                       << 2U)) | (3U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_VAddr_o)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo[2U][1U] 
        = (IData)((((QData)((IData)(((mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h3e996166__0[1U] 
                                      << 0x1fU) | (
                                                   mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h3e996166__0[0U] 
                                                   >> 1U)))) 
                    << 0x20U) | (QData)((IData)(((mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h3e996166__0[3U] 
                                                  << 0x12U) 
                                                 | (mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h3e996166__0[2U] 
                                                    >> 0xeU))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo[2U][2U] 
        = (IData)(((((QData)((IData)(((mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h3e996166__0[1U] 
                                       << 0x1fU) | 
                                      (mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h3e996166__0[0U] 
                                       >> 1U)))) << 0x20U) 
                    | (QData)((IData)(((mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h3e996166__0[3U] 
                                        << 0x12U) | 
                                       (mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h3e996166__0[2U] 
                                        >> 0xeU))))) 
                   >> 0x20U));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo[2U][3U] 
        = (((IData)((0x1fffffffffffULL & (((QData)((IData)(
                                                           mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h3e996166__0[2U])) 
                                           << 0x1fU) 
                                          | ((QData)((IData)(
                                                             mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h3e996166__0[1U])) 
                                             >> 1U)))) 
            << 2U) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_hasException_o) 
                       << 1U) | (1U & mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h3e996166__0[0U])));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo[2U][4U] 
        = (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_isRefill_o) 
            << 0x14U) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_ExcCode_o) 
                          << 0xfU) | (((IData)((0x1fffffffffffULL 
                                                & (((QData)((IData)(
                                                                    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h3e996166__0[2U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h3e996166__0[1U])) 
                                                      >> 1U)))) 
                                       >> 0x1eU) | 
                                      ((IData)(((0x1fffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h3e996166__0[2U])) 
                                                     << 0x1fU) 
                                                    | ((QData)((IData)(
                                                                       mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_h3e996166__0[1U])) 
                                                       >> 1U))) 
                                                >> 0x20U)) 
                                       << 2U))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo[2U][5U] = 0U;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__DSP_needDelaySlot_o 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__BSC_isDiffRes_w_o)
            ? (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__BSC_needDelaySlot_w_o)
            : (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__BTB_needDelaySlot_o));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h803e3be6__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h00ab3053__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_he4fd78b0__0));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h950b0a8d__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_hd5b602d8__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h3fe4b6fd__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_valid_w_o 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_MEM__DOT____VdfgTmp_h57ecb1a5__0) 
           & ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__needFlush)) 
              & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_allowin_w_o)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__SBA_valid_w_o 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__hasData) 
           & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__ready) 
              & ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__needFlush)) 
                 & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_allowin_w_o))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_valid_w_o 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT____VdfgTmp_h18f03704__0) 
           & ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needFlush)) 
              & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_allowin_w_o)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_SecondCacheTrace__DOT__needCancel 
        = (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__BSC_isDiffRes_w_o) 
            & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_valid_o)) 
           | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__needClear));
    vlSelf->mycpu_top__DOT__inst_req = ((~ ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__needClear)) 
                                            & (5U <= (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__IQ_number_w)))) 
                                        & (IData)(vlSelf->aresetn));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MduReq 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__isMduWrite) 
           & ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__isAccepted)) 
              & (~ ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__cancel) 
                    | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_hasRisk_w_o) 
                       | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__EXE_up_branchRisk_r_i))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT__now_RepairAction_m 
        = ((7U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT__now_RepairAction_m)) 
           | ((((((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h950b0a8d__0) 
                  & (8U == (0xeU & mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__firstBranchInst))) 
                 & (~ (IData)((0U != (0x30U & mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__firstBranchInst))))) 
                << 7U) | (((~ (IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h950b0a8d__0)) 
                           << 7U) & ((((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h803e3be6__0) 
                                       << 7U) & (((
                                                   (~ 
                                                    (mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__firstBranchInst 
                                                     >> 0x14U)) 
                                                   & (IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h51e93d14__0)) 
                                                  << 7U) 
                                                 | ((((~ 
                                                       (mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__firstBranchInst 
                                                        >> 0x14U)) 
                                                      & (IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_hcab7a376__0)) 
                                                     << 7U) 
                                                    | (0x7ff80U 
                                                       & ((((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h51e93d14__0) 
                                                            | (IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_hcab7a376__0)) 
                                                           << 7U) 
                                                          & (mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__firstBranchInst 
                                                             >> 0xdU)))))) 
                                     | (((~ (IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h803e3be6__0)) 
                                         & (((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h302ebe31__0) 
                                             & (IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_he4fd78b0__0)) 
                                            | (((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h2c70d0d4__0) 
                                                & (IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_he4fd78b0__0)) 
                                               | (((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h9077d39b__0) 
                                                   & (IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_he4fd78b0__0)) 
                                                  | (((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h69f1a94a__0) 
                                                      & (IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_he4fd78b0__0)) 
                                                     | (((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_hd2c5f6b1__0) 
                                                         & (IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h3fe4b6fd__0)) 
                                                        | ((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h41e64b47__0) 
                                                           & (IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_he4fd78b0__0)))))))) 
                                        << 7U)))) | 
              ((((~ (IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h950b0a8d__0)) 
                 & ((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h302ebe31__0) 
                    | ((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h2c70d0d4__0) 
                       | ((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h9077d39b__0) 
                          | ((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h69f1a94a__0) 
                             | (IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h00ab3053__0)))))) 
                << 5U) | ((((~ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__firstBranchInst) 
                            & (IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h950b0a8d__0)) 
                           << 4U) | ((((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h950b0a8d__0) 
                                       & mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__firstBranchInst) 
                                      << 3U) | (((~ (IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h950b0a8d__0)) 
                                                 << 3U) 
                                                & ((0x7ff8U 
                                                    & (((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h803e3be6__0) 
                                                        << 3U) 
                                                       & (mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__firstBranchInst 
                                                          >> 0x11U))) 
                                                   | (((~ (IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h803e3be6__0)) 
                                                       & (IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT____VdfgTmp_h41e64b47__0)) 
                                                      << 3U))))))));
    if (vlSelf->mycpu_top__DOT__u_Main__DOT__SBA_flush_w_o) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_erroVAddr_w_o 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__EXE_up_VAddr_r_i;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_correctTake_w_o 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__EXE_up_corrTake_r_i;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_correctDest_w_o 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__EXE_up_corrDest_r_i;
        mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_repairAction_w_o 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__EXE_up_repairAction_r_i;
    } else {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_erroVAddr_w_o 
            = ((0xfffffff0U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_VAddr_o) 
               | ((0xcU & ((4U & ((- (IData)((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_hffe4f6df__0))) 
                                  << 2U)) | ((8U & 
                                              ((- (IData)((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_hffbf6f80__0))) 
                                               << 2U)) 
                                             | ((- (IData)((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_hffbb4775__0))) 
                                                << 2U)))) 
                  | (3U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_VAddr_o)));
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_correctTake_w_o 
            = mycpu_top__DOT__u_Main__DOT__u_IF__DOT__BSC_correctTake_w_o;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_correctDest_w_o 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__BSC_correctDest_w_o;
        mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_repairAction_w_o 
            = (2U | ((0xe0U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT__now_RepairAction_m)) 
                     | ((((0x1fU == (0x1fU & (mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__firstBranchInst 
                                              >> 0x15U)))
                           ? (3U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT__now_RepairAction_m) 
                                    >> 3U)) : 0U) << 3U) 
                        | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__BSC_isDiffRes_w_o))));
    }
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_REEXE__DOT__needClear 
        = ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__SBA_valid_w_o)) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_allowin_w_o));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_REEXE__DOT__needUpdata 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_allowin_w_o) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__SBA_valid_w_o));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__needUpdata 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_allowin_w_o) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_valid_w_o));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__needClear 
        = (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_valid_w_o)) 
            & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_allowin_w_o)) 
           | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__needFlush));
    vlSelf->mycpu_top__DOT__inst_index_ok = ((0xfU 
                                              != (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat)) 
                                             & ((0U 
                                                 != (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat)) 
                                                & ((IData)(vlSelf->mycpu_top__DOT__inst_req) 
                                                   & ((~ (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_req)) 
                                                      | (IData)(vlSelf->mycpu_top__DOT__inst_data_ok)))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__div_oprand_ok 
        = (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT____VdfgTmp_heda64e59__0) 
            & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MduReq)) 
           & ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__have_data)) 
              | (0x20U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__timer))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__mulReq 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT____VdfgTmp_hedee5323__0) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MduReq));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_PCRegister__DOT__ok_to_change 
        = (((IData)(vlSelf->mycpu_top__DOT__inst_req) 
            & (IData)(vlSelf->mycpu_top__DOT__inst_index_ok)) 
           | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_excOccur_w_o) 
              | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__BSC_isDiffRes_w_o) 
                 | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__SBA_flush_w_o))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__mulOprand_ok 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__mulReq) 
           & ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__start)) 
              | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__mulr_data_ok)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT____VdfgTmp_hc866c387__0 
        = (IData)((0x81U == (0x81U & (IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_repairAction_w_o))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MDU_Oprand_ok 
        = (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT____VdfgTmp_heda64e59__0)
             ? (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__div_oprand_ok)
             : (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT____VdfgTmp_hedee5323__0) 
                 | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__isAccumlate))
                 ? (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__mulOprand_ok)
                 : (0U != (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_writeHiLo_r_i)))) 
           & ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__HiLo_busy)) 
              & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MduReq)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__0__KET____DOT__wen 
        = (IData)(((0U == (0xcU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_erroVAddr_w_o)) 
                   & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT____VdfgTmp_hc866c387__0)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__1__KET____DOT__wen 
        = (IData)(((4U == (0xcU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_erroVAddr_w_o)) 
                   & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT____VdfgTmp_hc866c387__0)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__2__KET____DOT__wen 
        = (IData)(((8U == (0xcU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_erroVAddr_w_o)) 
                   & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT____VdfgTmp_hc866c387__0)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__3__KET____DOT__wen 
        = (IData)(((0xcU == (0xcU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_erroVAddr_w_o)) 
                   & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT____VdfgTmp_hc866c387__0)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MDU_data_ok 
        = ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__cancel)) 
           & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT____VdfgTmp_h3f83ab14__0) 
              | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MDU_Oprand_ok) 
                 & (0U != (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_writeHiLo_r_i)))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ready 
        = (1U & (~ (((~ ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MDU_Oprand_ok) 
                         | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__isAccepted))) 
                     & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__isMduWrite)) 
                    | (((0U != (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_readHiLo_r_i)) 
                        & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__HiLo_busy)) 
                       | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__isMduWrite) 
                           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_hasRisk_w_o)) 
                          | ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_mduOperator_r_i) 
                               >> 6U) & ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__isAccepted)) 
                                         | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__HiLo_busy))) 
                             | ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__cl_data_ok)) 
                                & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__clReq))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_allowin_w_o 
        = (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ready) 
            | (~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__hasData))) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_allowin_w_o));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT____VdfgTmp_h15bf95e2__0 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ready) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__hasData));
    vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_up_valid_w_o 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__hasData) 
           & ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__exceptionClean)) 
              & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_allowin_w_o)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__pre_valid 
        = ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__SBA_flush_w_o)) 
           & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT____VdfgTmp_h15bf95e2__0) 
              & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_allowin_w_o) 
                 & ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_excOccur_w_o)) 
                    | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__is_pc_save)))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_forwardMode_w_o 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT____VdfgTmp_h15bf95e2__0) 
           & ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_memReq_r_i)) 
              & (~ (IData)((((0U != (0x180U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_mduOperator_r_i))) 
                             | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_readCp0_r_i)) 
                            | (0U != (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_readHiLo_r_i)))))));
    mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__pre_valid 
        = ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__SBA_flush_w_o)) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_up_valid_w_o));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needUpdata 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_allowin_w_o) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__pre_valid));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needClear 
        = (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__pre_valid)) 
            & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_allowin_w_o)) 
           | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needFlush));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__forwardReady[0U][0U] 
        = (1U | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_forwardMode_w_o) 
                  << 6U) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__hasData) 
                             << 5U) | (((IData)(mycpu_top__DOT__u_Main__DOT__PREMEM_forwardMode_w_o) 
                                        << 4U) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__SBA_forwardMode_w_o) 
                                                   << 3U) 
                                                  | (((IData)(mycpu_top__DOT__u_Main__DOT__MEM_forwardMode_w_o) 
                                                      << 2U) 
                                                     | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_REEXE__DOT__hasData) 
                                                        << 1U)))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__forwardReady[0U][1U] 
        = (1U | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_forwardMode_w_o) 
                  << 6U) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__hasData) 
                             << 5U) | (((IData)(mycpu_top__DOT__u_Main__DOT__PREMEM_forwardMode_w_o) 
                                        << 4U) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__SBA_forwardMode_w_o) 
                                                   << 3U) 
                                                  | (((IData)(mycpu_top__DOT__u_Main__DOT__MEM_forwardMode_w_o) 
                                                      << 2U) 
                                                     | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_REEXE__DOT__hasData) 
                                                        << 1U)))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__forwardReady[1U][0U] 
        = (1U | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_forwardMode_w_o) 
                  << 6U) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__hasData) 
                             << 5U) | (((IData)(mycpu_top__DOT__u_Main__DOT__PREMEM_forwardMode_w_o) 
                                        << 4U) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__SBA_forwardMode_w_o) 
                                                   << 3U) 
                                                  | (((IData)(mycpu_top__DOT__u_Main__DOT__MEM_forwardMode_w_o) 
                                                      << 2U) 
                                                     | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_REEXE__DOT__hasData) 
                                                        << 1U)))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__forwardReady[1U][1U] 
        = (1U | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_forwardMode_w_o) 
                  << 6U) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__hasData) 
                             << 5U) | (((IData)(mycpu_top__DOT__u_Main__DOT__PREMEM_forwardMode_w_o) 
                                        << 4U) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__SBA_forwardMode_w_o) 
                                                   << 3U) 
                                                  | (((IData)(mycpu_top__DOT__u_Main__DOT__MEM_forwardMode_w_o) 
                                                      << 2U) 
                                                     | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_REEXE__DOT__hasData) 
                                                        << 1U)))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__needUpdata 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_allowin_w_o) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__pre_valid));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__needClear 
        = (((~ (IData)(mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__pre_valid)) 
            & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_allowin_w_o)) 
           | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__needFlush));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__forwardSel[0U][0U] 
        = (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__forwardWhich
           [0U][0U] & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__forwardReady
           [0U][0U]);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__forwardSel[0U][1U] 
        = (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__forwardWhich
           [0U][1U] & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__forwardReady
           [0U][1U]);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__forwardSel[1U][0U] 
        = (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__forwardWhich
           [1U][0U] & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__forwardReady
           [1U][0U]);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__forwardSel[1U][1U] 
        = (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__forwardWhich
           [1U][1U] & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__forwardReady
           [1U][1U]);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__WAR_conflict_up[0U][0U] 
        = (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__needRead
           [0U][0U] & (~ (IData)((0U != vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__forwardSel
                                  [0U][0U]))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__WAR_conflict_up[0U][1U] 
        = (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__needRead
           [0U][1U] & (~ (IData)((0U != vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__forwardSel
                                  [0U][1U]))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__WAR_conflict_up[1U][0U] 
        = (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__needRead
           [1U][0U] & (~ (IData)((0U != vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__forwardSel
                                  [1U][0U]))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__WAR_conflict_up[1U][1U] 
        = (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__needRead
           [1U][1U] & (~ (IData)((0U != vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__forwardSel
                                  [1U][1U]))));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__ready = 
        (1U & (~ ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__WAR_conflict_up
                     [0U][0U] | vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__WAR_conflict_up
                     [1U][0U]) | vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__WAR_conflict_up
                    [0U][1U]) | vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__WAR_conflict_up
                   [1U][1U]) | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_isDangerous_r_i) 
                                | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_isDangerous_r_i) 
                                   | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_isDangerous_r_i) 
                                      | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_isDangerous_r_i)))))));
    mycpu_top__DOT__u_Main__DOT__ID_allowin_w_o = (1U 
                                                   & ((~ (IData)(
                                                                 (0U 
                                                                  != (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_issueMode_r_i)))) 
                                                      | ((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__ready) 
                                                         & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_allowin_w_o))));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__valid_out 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__ready) 
           & ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__needClear)) 
              & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_allowin_w_o)));
    if (mycpu_top__DOT__u_Main__DOT__ID_allowin_w_o) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__needUpdata 
            = (0U != (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__IS_issueMode_o));
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__IS_upDateMode_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__IS_issueMode_o;
    } else {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__needUpdata = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__IS_upDateMode_i = 0U;
    }
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__needClear 
        = (((~ (IData)((0U != (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__IS_issueMode_o)))) 
            & (IData)(mycpu_top__DOT__u_Main__DOT__ID_allowin_w_o)) 
           | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__needClear));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__nextNumber 
        = (0x1fU & ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__IQ_number_w) 
                      + ((- (IData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__IF_valid_o))) 
                         & ((8U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__IF_instEnable_o))
                             ? 4U : ((4U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__IF_instEnable_o))
                                      ? 3U : ((2U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__IF_instEnable_o))
                                               ? 2U
                                               : ((1U 
                                                   & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__IF_instEnable_o))
                                                   ? 1U
                                                   : 0U)))))) 
                     - ((IData)(mycpu_top__DOT__u_Main__DOT__ID_allowin_w_o) 
                        & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__IS_issueMode_o))) 
                    - ((IData)(mycpu_top__DOT__u_Main__DOT__ID_allowin_w_o) 
                       & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__IS_issueMode_o) 
                          >> 1U))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__ID_up_valid_w_o 
        = (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_issueMode_r_i) 
            >> 1U) & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__valid_out));
    vlSelf->mycpu_top__DOT__u_Main__DOT__ID_down_valid_w_o 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_issueMode_r_i) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__valid_out));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__needUpdata 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_allowin_w_o) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__ID_up_valid_w_o));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__needClear 
        = (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__ID_up_valid_w_o)) 
            & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_allowin_w_o)) 
           | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__SBA_flush_w_o) 
              | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__exceptionClean)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__needUpdata 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_allowin_w_o) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__ID_down_valid_w_o));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__needClear 
        = (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__ID_down_valid_w_o)) 
            & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_allowin_w_o)) 
           | (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__is_pc_save)) 
               & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_excOccur_w_o)) 
              | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__SBA_flush_w_o)));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmycpu_top___024root___dump_triggers__ico(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmycpu_top___024root___dump_triggers__act(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge aclk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmycpu_top___024root___dump_triggers__nba(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge aclk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmycpu_top___024root___ctor_var_reset(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->ext_int = VL_RAND_RESET_I(6);
    vlSelf->aclk = VL_RAND_RESET_I(1);
    vlSelf->aresetn = VL_RAND_RESET_I(1);
    vlSelf->arid = VL_RAND_RESET_I(4);
    vlSelf->araddr = VL_RAND_RESET_I(32);
    vlSelf->arlen = VL_RAND_RESET_I(4);
    vlSelf->arsize = VL_RAND_RESET_I(3);
    vlSelf->arburst = VL_RAND_RESET_I(2);
    vlSelf->arlock = VL_RAND_RESET_I(2);
    vlSelf->arcache = VL_RAND_RESET_I(4);
    vlSelf->arprot = VL_RAND_RESET_I(3);
    vlSelf->arvalid = VL_RAND_RESET_I(1);
    vlSelf->arready = VL_RAND_RESET_I(1);
    vlSelf->rid = VL_RAND_RESET_I(4);
    vlSelf->rdata = VL_RAND_RESET_I(32);
    vlSelf->rresp = VL_RAND_RESET_I(2);
    vlSelf->rlast = VL_RAND_RESET_I(1);
    vlSelf->rvalid = VL_RAND_RESET_I(1);
    vlSelf->rready = VL_RAND_RESET_I(1);
    vlSelf->awid = VL_RAND_RESET_I(4);
    vlSelf->awaddr = VL_RAND_RESET_I(32);
    vlSelf->awlen = VL_RAND_RESET_I(4);
    vlSelf->awsize = VL_RAND_RESET_I(3);
    vlSelf->awburst = VL_RAND_RESET_I(2);
    vlSelf->awlock = VL_RAND_RESET_I(2);
    vlSelf->awcache = VL_RAND_RESET_I(4);
    vlSelf->awprot = VL_RAND_RESET_I(3);
    vlSelf->awvalid = VL_RAND_RESET_I(1);
    vlSelf->awready = VL_RAND_RESET_I(1);
    vlSelf->wid = VL_RAND_RESET_I(4);
    vlSelf->wdata = VL_RAND_RESET_I(32);
    vlSelf->wstrb = VL_RAND_RESET_I(4);
    vlSelf->wlast = VL_RAND_RESET_I(1);
    vlSelf->wvalid = VL_RAND_RESET_I(1);
    vlSelf->wready = VL_RAND_RESET_I(1);
    vlSelf->bid = VL_RAND_RESET_I(4);
    vlSelf->bresp = VL_RAND_RESET_I(2);
    vlSelf->bvalid = VL_RAND_RESET_I(1);
    vlSelf->bready = VL_RAND_RESET_I(1);
    vlSelf->debug_wb_pc = VL_RAND_RESET_I(32);
    vlSelf->debug_wb_rf_wen = VL_RAND_RESET_I(4);
    vlSelf->debug_wb_rf_wnum = VL_RAND_RESET_I(5);
    vlSelf->debug_wb_rf_wdata = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__inst_index_ok = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__inst_data_ok = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__data_index_ok = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__inst_req = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__inst_tag = VL_RAND_RESET_I(20);
    vlSelf->mycpu_top__DOT__inst_hasException = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__inst_unCache = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__data_req = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__data_tag = VL_RAND_RESET_I(20);
    vlSelf->mycpu_top__DOT__data_unCache = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__data_hasException = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__debug_wb_pc0 = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__debug_wb_pc1 = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__debug_wb_rf_wen0 = VL_RAND_RESET_I(4);
    vlSelf->mycpu_top__DOT__debug_wb_rf_wen1 = VL_RAND_RESET_I(4);
    vlSelf->mycpu_top__DOT__debug_wb_rf_wnum0 = VL_RAND_RESET_I(5);
    vlSelf->mycpu_top__DOT__debug_wb_rf_wnum1 = VL_RAND_RESET_I(5);
    vlSelf->mycpu_top__DOT__debug_wb_rf_wdata0 = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__debug_wb_rf_wdata1 = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__ID_down_valid_w_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__ID_up_valid_w_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__ID_up_readData_o = VL_RAND_RESET_Q(64);
    vlSelf->mycpu_top__DOT__u_Main__DOT__ID_up_branchRisk_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__ID_down_mduOperator_o = VL_RAND_RESET_I(9);
    vlSelf->mycpu_top__DOT__u_Main__DOT__ID_down_hasException_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__ID_down_writeCp0_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__ID_down_isCacheInst_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__data_tlbReq_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__DMMU_TLBPwrite_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__DMMU_TLBRwrite_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__DMMU_Index_o = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__IS_issueMode_o = VL_RAND_RESET_I(2);
    vlSelf->mycpu_top__DOT__u_Main__DOT__WB_forwardData_w_o = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__WB_finalRes_w_o = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__WB_writeEnable_w_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_Status_w_o = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_Cause_w_o = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_excOccur_w_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_Index_w_o = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_exceptSeg_w_o = VL_RAND_RESET_I(4);
    vlSelf->mycpu_top__DOT__u_Main__DOT__REEXE_valid_w_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_hasRisk_w_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_allowin_w_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_valid_w_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_hasException_w_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_isInterrupt_w_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_finalRes_o = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__PBA_writeEnable_w_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__SBA_valid_w_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__SBA_forwardMode_w_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__SBA_flush_w_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__IF_valid_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__IF_instEnable_o = VL_RAND_RESET_I(4);
    vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_up_valid_w_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_up_aluRes_o = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_up_corrDest_o = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_up_corrTake_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_up_branchRisk_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_forwardMode_w_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_allowin_w_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_hasExceprion_w_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_exceptBadVAddr_w_o = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_aluRes_o = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_mulRes_o = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_hasException_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_memEnable_o = VL_RAND_RESET_I(4);
    vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_hasRisk_w_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_allowin_w_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_valid_w_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_search_w_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_preliminaryRes_o = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__needClear = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__needUpdata = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_issueMode_r_i = VL_RAND_RESET_I(2);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i = VL_RAND_RESET_Q(64);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_VAddr_p_r_i = VL_RAND_RESET_Q(64);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_predDest_p_r_i = VL_RAND_RESET_Q(64);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_hasException_p_r_i = VL_RAND_RESET_I(2);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_predTake_p_r_i = VL_RAND_RESET_I(2);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_ExcCode_p_r_i = VL_RAND_RESET_I(10);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_regReadNum_p_r_i = VL_RAND_RESET_I(20);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_needRead_p_r_i = VL_RAND_RESET_I(4);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_regWriteNum_p_r_i = VL_RAND_RESET_I(10);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum[__Vi0][__Vi1] = VL_RAND_RESET_I(5);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__needRead[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT____Vcellout__ImmExtender_up__extendedRes = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__oprand_sel[__Vi0][__Vi1] = VL_RAND_RESET_I(3);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__forwardReady[__Vi0][__Vi1] = VL_RAND_RESET_I(7);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__forwardWhich[__Vi0][__Vi1] = VL_RAND_RESET_I(7);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__forwardSel[__Vi0][__Vi1] = VL_RAND_RESET_I(7);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__WAR_conflict_up[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__WAW_coflict = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 31; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__readNum[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__hasForward[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__writeData[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__writeEnable = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__writeNum[__Vi0] = VL_RAND_RESET_I(5);
    }
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT____Vlvbound_h6f5264cf__0 = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT____Vlvbound_h6f4d11f8__0 = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT____Vlvbound_h6f4d11f8__1 = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT____Vlvbound_h6f5264cf__1 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__oprand0_sel_up[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__oprand1_sel_up[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__decorderExcCode_up[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__extendAction_up[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up[__Vi0] = VL_RAND_RESET_I(14);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__exceptionSel_up[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__trapKind_up[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__temp_2_3 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_0 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_1 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_0 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_1 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_3 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_4 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h1dffa6d3__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h0066a336__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_haf0e1199__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h2647a248__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h648e5e68__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h0a49da51__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h9b4d2d04__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h1f3d011e__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hdb0d3f0f__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hafc7fffa__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h2329f798__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h07d6f23d__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hc0f5feed__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hd0eb4e79__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hb2e44229__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hfd36d646__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h1745ca6f__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hfc6ec919__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h85ab9c61__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h569b65f1__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h940593f0__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h37a5b348__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h6f325372__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h85d3b635__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h359adfeb__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_ha094bdb8__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hf4959896__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hcbd1fb4a__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hea640af0__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h33b5084e__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h2c1313c8__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h56120487__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h03f81cc8__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hc11ec478__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hfd1fc749__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hff260753__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hfefbb480__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h8bd045d8__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h33561494__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h4ed98483__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hf89e3a1a__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h8bdcd435__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hef9ed262__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h6e16e375__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_DataMemoryManagementUnit__DOT__unmapTag = VL_RAND_RESET_I(20);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_DataMemoryManagementUnit__DOT__isKseg0 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_DataMemoryManagementUnit__DOT__isKseg1 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_DataMemoryManagementUnit__DOT__isOther = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_DataMemoryManagementUnit__DOT__kseg0UnCache = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_DataMemoryManagementUnit__DOT__mapReq = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_DataMemoryManagementUnit__DOT__mapWR = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_DataMemoryManagementUnit__DOT____VdfgTmp_h9dac7050__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__IQ_supplyValid = VL_RAND_RESET_I(2);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__IQ_number_w = VL_RAND_RESET_I(5);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__IS_upDateMode_i = VL_RAND_RESET_I(2);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__head = VL_RAND_RESET_I(5);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__tail = VL_RAND_RESET_I(5);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__needClear = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(181, vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(181, vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo[__Vi0]);
    }
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__nextNumber = VL_RAND_RESET_I(5);
    VL_ZERO_RESET_W(181, vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0);
    VL_ZERO_RESET_W(181, vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__instMode[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__0__KET____DOT__temp___05F0 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__0__KET____DOT__temp___05F1 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__0__KET____DOT__temp___05F2 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__0__KET____DOT__temp___05F3 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__0__KET____DOT__temp___05F4 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__1__KET____DOT__temp___05F0 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__1__KET____DOT__temp___05F1 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__1__KET____DOT__temp___05F2 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__1__KET____DOT__temp___05F3 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__1__KET____DOT__temp___05F4 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h9442b32d__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h81060927__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h80792cea__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hffd0d0cd__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb3a348b1__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h6b56dff3__0 = 0;
    VL_ZERO_RESET_W(166, vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hbe18c8f9__0);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h6edd518f__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h98cf59f1__0 = 0;
    VL_ZERO_RESET_W(166, vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf25c7c1d__0);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h054e529d__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h84867858__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hed3f0af1__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb19de015__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hed6f9162__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h2182808f__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hdf92d8a4__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf0632857__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hde2548fc__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h5bfce17d__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hfd9d8f12__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h6acd382a__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha3d54812__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hbe9eaaa2__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h9b80efbc__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h5931cc7c__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h0f2057d6__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h04ba1cc4__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h0a3bf3b1__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_he941b43b__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h011785a5__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h61b07b8c__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf3e28ff6__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hda0b1be3__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h6682524e__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h0921d919__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hfa2553f2__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h9304bd71__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb931fc0d__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h6700724b__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h483837e4__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hea4f50f4__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hda8347b9__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hda6cd53a__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb778b3ea__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_he3742997__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h78edc999__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb5f6bc5e__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h30286939__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h7cc82e19__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h35f25981__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hd8878281__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h30f5a730__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h7ee79cc2__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h46aac094__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hc76762b7__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h926343be__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h75dca3a1__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf2b7c392__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h1f528a5c__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h5bbadc13__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h6964710a__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hbd0cf5bd__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h06f719c1__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb30f954a__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h31b94968__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h022fd69a__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h50e190eb__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h3ed14f69__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb66685d8__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h6c0adfc7__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h0a374724__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h44c7ceb6__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hd8e2229b__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hc0190d78__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h70a699d4__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h05d0205b__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf45ceedf__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hd6cbc546__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h2f0da4fa__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h8c0ff0cb__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h4e0d7082__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf1c3146d__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hdaa77755__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h023e85a8__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hd9de282f__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h727d9513__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h70504f38__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hd6ade43c__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hfc74eb28__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h10dc5f6d__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h6f570682__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h5e17f97e__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h911bea95__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h5be28400__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h1299a1b1__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h0ef7c669__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_he5aa8fb3__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h500870ec__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h0f8cbc59__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h16845a6a__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb704c67d__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h4a3919b5__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h0d1c9145__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h0b466653__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hce1a820f__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h54aa4cc2__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h10c0b07c__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha714eec1__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_habf7f129__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h0083ac2e__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hc845c7be__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha5d6c34d__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hc48499de__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h6d906edd__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h03f0e69d__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hfa6ba428__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h24167555__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h25080482__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h462294ca__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h4e9bd335__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h513117f0__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h493a513a__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h69b15f42__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h662b37ee__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb63957a8__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hfded45a1__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hddf2301e__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hcb972f4a__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h2f01c093__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h7f6c215a__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h56d7d3d7__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h8e21ca34__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h92f007fc__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb63980f0__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hfe482ebb__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h1ad92a94__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h5ec9a396__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h1be481c2__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_writeNum_r_i = VL_RAND_RESET_I(5);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_exceptionRisk_r_i = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_memReq_r_i = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_VAddr_r_i = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_isDangerous_r_i = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_finalRes_r_i = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_rtData_r_i = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_alignCheck_r_i = VL_RAND_RESET_I(2);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_loadSel_r_i = VL_RAND_RESET_I(11);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__hasData = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__commit = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__is_int_inst = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(73, vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__selectedInfo);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__isExceptionInNormal = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Status_exl = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Status_im = VL_RAND_RESET_I(8);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Status_ie = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Cause_bd = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Cause_ti = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Cause_ip = VL_RAND_RESET_I(8);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Cause_exccode = VL_RAND_RESET_I(5);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__epc = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__badVaddr = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__count = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__tick = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__compare = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Index_p = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Index_index = VL_RAND_RESET_I(5);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__entryLo0 = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__entryLo1 = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__entryHi = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Config_k0 = VL_RAND_RESET_I(3);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__writeK0 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__cp0_changed = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__changed_pc = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_REEXE__DOT__needClear = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_REEXE__DOT__needUpdata = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_REEXE__DOT__SBA_writeNum_r_i = VL_RAND_RESET_I(5);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_REEXE__DOT__SBA_VAddr_r_i = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_REEXE__DOT__SBA_aluRes_r_i = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_REEXE__DOT__hasData = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__needClear = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__needUpdata = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_writeNum_r_i = VL_RAND_RESET_I(5);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_VAddr_r_i = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_isDelaySlot_r_i = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_isDangerous_r_i = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_alignCheck_r_i = VL_RAND_RESET_I(2);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_loadSel_r_i = VL_RAND_RESET_I(11);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_memReq_r_i = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_preliminaryRes_r_i = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_nonBlockMark_r_i = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_rtData_r_i = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_ExcCode_r_i = VL_RAND_RESET_I(5);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_hasException_r_i = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_exceptBadVAddr_r_i = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_eret_r_i = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_exceptionRisk_r_i = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_positionCp0_r_i = VL_RAND_RESET_I(8);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_readCp0_r_i = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_writeCp0_r_i = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__hasData = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__ready = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__needFlush = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__REEXE_writeNum_r_i = VL_RAND_RESET_I(5);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__REEXE_VAddr_r_i = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__REEXE_regData_r_i = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__hasData = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__commit = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__had_branch_flush = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__needClear = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__needUpdata = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__EXE_up_writeNum_r_i = VL_RAND_RESET_I(5);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__EXE_up_VAddr_r_i = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__EXE_up_aluRes_r_i = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__EXE_up_corrDest_r_i = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__EXE_up_corrTake_r_i = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__EXE_up_repairAction_r_i = VL_RAND_RESET_I(8);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__EXE_up_branchRisk_r_i = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__EXE_down_nonBlockDS_r_i = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__hasData = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__ready = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__needFlush = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__BSC_correctDest_w_o = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__BSC_isDiffRes_w_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__BSC_needDelaySlot_w_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__BTB_fifthVAddr_o = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__BTB_predTake_p_o = VL_RAND_RESET_I(4);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__BTB_validDest_o = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__BTB_needDelaySlot_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__PCR_needDelaySlot_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__PCR_VAddr_o = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__PCR_instEnable_o = VL_RAND_RESET_I(4);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__DSP_needDelaySlot_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_allowin_w_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_valid_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_predDest_p_o);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_predTake_p_o = VL_RAND_RESET_I(4);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_BTBInstEnable_o = VL_RAND_RESET_I(4);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_BTBfifthVAddr_o = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_needDelaySlot_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_BTBValidDest_o = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_BTBValidTake_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_originEnable_o = VL_RAND_RESET_I(4);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_VAddr_o = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_hasException_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_ExcCode_o = VL_RAND_RESET_I(5);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_isRefill_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_erroVAddr_w_o = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_correctTake_w_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_correctDest_w_o = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_predDest_p_o);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_predTake_p_o = VL_RAND_RESET_I(4);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_BTBInstEnable_o = VL_RAND_RESET_I(4);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_BTBfifthVAddr_o = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_needDelaySlot_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_BTBValidDest_o = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_BTBValidTake_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_originEnable_o = VL_RAND_RESET_I(4);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_VAddr_o = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_hasException_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_ExcCode_o = VL_RAND_RESET_I(5);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_isCanceled_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__actualEnable = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(128, vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__inst_p);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_hf06d4339__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__isJRInst[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__isRsFull[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_Compressor__DOT____VdfgTmp_hefe5f881__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_Compressor__DOT____VdfgTmp_h48e5f017__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_Compressor__DOT____VdfgTmp_h3e94583a__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__RepairDecorder_u__DOT__now_RepairAction_m = VL_RAND_RESET_I(8);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_MemoryManagementUnit__DOT__unmapTag = VL_RAND_RESET_I(20);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_MemoryManagementUnit__DOT__isKseg0 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_MemoryManagementUnit__DOT__isOther = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_MemoryManagementUnit__DOT__kseg0UnCache = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__firstValidBit = VL_RAND_RESET_I(4);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__needDelaySlot = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__0__KET____DOT__btbReg[__Vi0] = VL_RAND_RESET_I(30);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__0__KET____DOT__btbTag[__Vi0] = VL_RAND_RESET_I(8);
    }
    VL_RAND_RESET_W(256, vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__0__KET____DOT__btbValid);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__0__KET____DOT__wen = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__1__KET____DOT__btbReg[__Vi0] = VL_RAND_RESET_I(30);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__1__KET____DOT__btbTag[__Vi0] = VL_RAND_RESET_I(8);
    }
    VL_RAND_RESET_W(256, vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__1__KET____DOT__btbValid);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__1__KET____DOT__wen = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__2__KET____DOT__btbReg[__Vi0] = VL_RAND_RESET_I(30);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__2__KET____DOT__btbTag[__Vi0] = VL_RAND_RESET_I(8);
    }
    VL_RAND_RESET_W(256, vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__2__KET____DOT__btbValid);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__2__KET____DOT__wen = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__3__KET____DOT__btbReg[__Vi0] = VL_RAND_RESET_I(30);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__3__KET____DOT__btbTag[__Vi0] = VL_RAND_RESET_I(8);
    }
    VL_RAND_RESET_W(256, vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__3__KET____DOT__btbValid);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__3__KET____DOT__wen = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT____VdfgTmp_hc866c387__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h52796ce4__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h7c474841__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h00616ab3__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h99804cb6__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h2a155fb0__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h2b682062__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h2be6a8b5__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h24613937__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_PCRegister__DOT__nextNotAlignedPC = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_PCRegister__DOT__temp_enable = VL_RAND_RESET_I(4);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_PCRegister__DOT__ok_to_change = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_SecondCacheTrace__DOT__SCT_isCanceled_o = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_SecondCacheTrace__DOT__hasData = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_SecondCacheTrace__DOT__needCancel = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_FirstCacheTrace__DOT__hasData = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_FirstCacheTrace__DOT__ready_go = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__needClear = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__needUpdata = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_VAddr_r_i = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_writeNum_r_i = VL_RAND_RESET_I(5);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_readData_r_i = VL_RAND_RESET_Q(64);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_oprand0_r_i = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_oprand0IsReg_r_i = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_oprand1IsReg_r_i = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_forwardSel0_r_i = VL_RAND_RESET_I(7);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_oprand1_r_i = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_forwardSel1_r_i = VL_RAND_RESET_I(7);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_aluOprator_r_i = VL_RAND_RESET_I(14);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_branchRisk_r_i = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_branchKind_r_i = VL_RAND_RESET_I(6);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_repairAction_r_i = VL_RAND_RESET_I(8);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_predDest_r_i = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_predTake_r_i = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__EXE_up_aluRes_r_i = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__EXE_down_aluRes_r_i = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__SBA_aluRes_r_i = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__REEXE_regData_r_i = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__PREMEM_preliminaryRes_r_i = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__hasData = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__exceptionClean = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT____Vcellinp__ALU_u__scr1 = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT____Vcellinp__ALU_u__scr0 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_forwardSel_up[__Vi0] = VL_RAND_RESET_I(7);
    }
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__genblk2__BRA__0__KET____DOT__wb_savedData = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__genblk2__BRA__0__KET____DOT__useSavedWb = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__genblk2__BRA__1__KET____DOT__wb_savedData = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__genblk2__BRA__1__KET____DOT__useSavedWb = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT____VdfgTmp_hf18ea45d__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT____VdfgTmp_h6d3044db__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ALU_u__DOT__or_res = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ALU_u__DOT__u_adder__DOT__data_b = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ALU_u__DOT__u_adder__DOT____VdfgTmp_hd2aefce6__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MduReq = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__mulr_data_ok = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__cancel = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__needClear = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__needUpdata = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_writeNum_r_i = VL_RAND_RESET_I(5);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_readData_r_i = VL_RAND_RESET_Q(64);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_isDelaySlot_r_i = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_isDangerous_r_i = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_VAddr_r_i = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_oprand0_r_i = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_oprand0IsReg_r_i = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_oprand1IsReg_r_i = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_forwardSel0_r_i = VL_RAND_RESET_I(7);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_oprand1_r_i = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_forwardSel1_r_i = VL_RAND_RESET_I(7);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_aluOprator_r_i = VL_RAND_RESET_I(14);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_mduOperator_r_i = VL_RAND_RESET_I(9);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_readHiLo_r_i = VL_RAND_RESET_I(2);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_writeHiLo_r_i = VL_RAND_RESET_I(2);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_ExcCode_r_i = VL_RAND_RESET_I(5);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_exceptionSel_r_i = VL_RAND_RESET_I(2);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_hasException_r_i = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_eret_r_i = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_positionCp0_r_i = VL_RAND_RESET_I(8);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_readCp0_r_i = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_writeCp0_r_i = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_trapKind_r_i = VL_RAND_RESET_I(4);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_memReq_r_i = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_memWR_r_i = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_memAtom_r_i = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_loadMode_r_i = VL_RAND_RESET_I(7);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_storeMode_r_i = VL_RAND_RESET_I(5);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_isTLBInst_r_i = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_TLBInstOperator_r_i = VL_RAND_RESET_I(4);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__EXE_up_aluRes_r_i = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__EXE_down_aluRes_r_i = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__SBA_aluRes_r_i = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__REEXE_regData_r_i = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__PREMEM_preliminaryRes_r_i = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__hasData = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ready = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__is_pc_save = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT____Vcellinp__ALU_u__scr1 = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT____Vcellinp__ALU_u__scr0 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_forwardSel_up[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__updataRegFile_up[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__alignCheck = VL_RAND_RESET_I(2);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__HiLo_busy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__regHiLo[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MDU_writeEnable = VL_RAND_RESET_I(2);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MDU_Oprand_ok = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MDU_data_ok = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MDU_writeData[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__isMduWrite = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__isAccepted = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__clReq = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__clRes = VL_RAND_RESET_I(5);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__position = VL_RAND_RESET_I(5);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__cl_data_ok = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__genblk2__BRA__0__KET____DOT__wb_savedData = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__genblk2__BRA__0__KET____DOT__useSavedWb = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__genblk2__BRA__1__KET____DOT__wb_savedData = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__genblk2__BRA__1__KET____DOT__useSavedWb = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT____VdfgTmp_h15bf95e2__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT____VdfgTmp_hfe30ddba__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT____VdfgTmp_he83d2f02__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT____VdfgTmp_he965824d__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT____VdfgTmp_he80de16b__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ALU_u__DOT__or_res = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ALU_u__DOT__u_adder__DOT__data_b = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ALU_u__DOT__u_adder__DOT____VdfgTmp_hd2aefce6__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__mulReq = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__isAccumlate = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__mulOprand_ok = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__mulRes = VL_RAND_RESET_Q(64);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__divident_i = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__divisor_i = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__div_oprand_ok = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__quotient_o = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__reminder_o = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT____VdfgTmp_heda64e59__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT____VdfgTmp_hedee5323__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT____VdfgTmp_h3f83ab14__0 = 0;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__crFlag = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__timer = VL_RAND_RESET_I(4);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT____Vcellinp__Multiplier_u__B = VL_RAND_RESET_Q(33);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT____Vcellinp__Multiplier_u__A = VL_RAND_RESET_Q(33);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__upBound = VL_RAND_RESET_I(4);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__isAccumlate_r = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__add_sub_op_r = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__multiRes = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__adderRes = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__savedCin = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(66, vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__Multiplier_u__DOT__seg1);
    VL_RAND_RESET_W(66, vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__Multiplier_u__DOT__seg0);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__adder_u__DOT__add_sub_res = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__y_sign = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__timer = VL_RAND_RESET_I(6);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__divisor = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__quotient_iter = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__minuend = VL_RAND_RESET_Q(64);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__reminder_sign = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__reminder_sign_r = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__quotient_sign_r = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__quotient_temp = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__minuend_back = VL_RAND_RESET_Q(64);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__have_data = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needClear = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needUpdata = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_writeNum_r_i = VL_RAND_RESET_I(5);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_isDelaySlot_r_i = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_isDangerous_r_i = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_VAddr_r_i = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_aluRes_r_i = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_mduRes_r_i = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_clRes_r_i = VL_RAND_RESET_I(5);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_mulRes_r_i = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_mathResSel_r_i = VL_RAND_RESET_I(4);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_nonBlockMark_r_i = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_up_branchRisk_r_i = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_ExcCode_r_i = VL_RAND_RESET_I(5);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_hasException_r_i = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_exceptionRisk_r_i = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_exceptBadVAddr_r_i = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_eret_r_i = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_positionCp0_r_i = VL_RAND_RESET_I(8);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_readCp0_r_i = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_writeCp0_r_i = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_memReq_r_i = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_memWR_r_i = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_memEnable_r_i = VL_RAND_RESET_I(4);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_memAtom_r_i = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_storeData_r_i = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_loadSel_r_i = VL_RAND_RESET_I(11);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_isTLBInst_r_i = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_TLBInstOperator_r_i = VL_RAND_RESET_I(4);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__LLbit = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__hasData = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needFlush = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__pre_valid = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__ok_to_do_tlbInst = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__size = VL_RAND_RESET_I(3);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT____VdfgTmp_hf5108738__0 = 0;
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__inst_top_arvalid = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__inst_top_arready = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__data_top_arvalid = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__data_top_arready = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__data_top_rvalid = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__inst_cache_araddr = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__inst_cache_rvalid = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__inst_uca_req = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__inst_uca_addr_ok = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__inst_uca_data_ok = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__inst_uncache_rvalid = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sta_req = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sta_index = VL_RAND_RESET_I(7);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sta_offset = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_req = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_index = VL_RAND_RESET_I(7);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_offset = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tag = VL_RAND_RESET_I(20);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_hasException = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_unCache = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_uca_addr_ok = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat = VL_RAND_RESET_I(4);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__reset_counter = VL_RAND_RESET_I(7);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_counter = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_buf_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_tag = VL_RAND_RESET_I(20);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_index = VL_RAND_RESET_I(7);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__way = VL_RAND_RESET_I(4);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__hit_way = VL_RAND_RESET_I(4);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__hit_run = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_index = VL_RAND_RESET_I(7);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_back[__Vi0] = VL_RAND_RESET_I(21);
    }
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_index = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(256, vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_wdata);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata[__Vi0]);
    }
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sta_hit_way = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(128, vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_back_data);
    VL_RAND_RESET_W(128, vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sta_hit_run_data);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__Inst_TagV_TP__tagwen = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__Inst_TagV_TP__tagwen = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__Inst_TagV_TP__tagwen = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__Inst_TagV_TP__tagwen = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__Inst_Data_TP__wen = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__Inst_Data_TP__wen = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__Inst_Data_TP__wen = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__Inst_Data_TP__wen = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_h381d158a__0 = 0;
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_h3f7273e8__0 = 0;
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_h65ec07f2__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__0__KET____DOT__Inst_TagV_TP__DOT__tag_ram[__Vi0] = VL_RAND_RESET_I(20);
    }
    VL_RAND_RESET_W(128, vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__0__KET____DOT__Inst_TagV_TP__DOT__v_ram);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__0__KET____DOT__Inst_TagV_TP__DOT__tagv_res = VL_RAND_RESET_I(21);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__1__KET____DOT__Inst_TagV_TP__DOT__tag_ram[__Vi0] = VL_RAND_RESET_I(20);
    }
    VL_RAND_RESET_W(128, vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__1__KET____DOT__Inst_TagV_TP__DOT__v_ram);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__1__KET____DOT__Inst_TagV_TP__DOT__tagv_res = VL_RAND_RESET_I(21);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__2__KET____DOT__Inst_TagV_TP__DOT__tag_ram[__Vi0] = VL_RAND_RESET_I(20);
    }
    VL_RAND_RESET_W(128, vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__2__KET____DOT__Inst_TagV_TP__DOT__v_ram);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__2__KET____DOT__Inst_TagV_TP__DOT__tagv_res = VL_RAND_RESET_I(21);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__3__KET____DOT__Inst_TagV_TP__DOT__tag_ram[__Vi0] = VL_RAND_RESET_I(20);
    }
    VL_RAND_RESET_W(128, vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__3__KET____DOT__Inst_TagV_TP__DOT__v_ram);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__3__KET____DOT__Inst_TagV_TP__DOT__tagv_res = VL_RAND_RESET_I(21);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__last_req = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__last_addr = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__last_arvalid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__buf_rdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__buf_valid = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__fill_counter = VL_RAND_RESET_I(3);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_mux__DOT__axi_ic_iu__DOT____VdfgTmp_he0abe4c6__0 = 0;
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__data_cache_rvalid = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__data_uca_req = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__data_uca_addr_ok = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__data_uca_data_ok = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__data_uncache_wready = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_req = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_wr = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_size = VL_RAND_RESET_I(2);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_index = VL_RAND_RESET_I(7);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_offset = VL_RAND_RESET_I(5);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_wstrb = VL_RAND_RESET_I(4);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_wdata = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_req = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_wr = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_size = VL_RAND_RESET_I(2);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_index = VL_RAND_RESET_I(7);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_offset = VL_RAND_RESET_I(5);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tag = VL_RAND_RESET_I(20);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_hasException = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_unCache = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_wstrb = VL_RAND_RESET_I(4);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_wdata = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back[__Vi0] = VL_RAND_RESET_I(21);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[__Vi0]);
    }
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_uca_addr_ok = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_raw_col = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_raw_wstrb = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_raw_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat = VL_RAND_RESET_I(4);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__reset_counter = VL_RAND_RESET_I(7);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_counter = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_buf_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__way = VL_RAND_RESET_I(4);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__hit_way = VL_RAND_RESET_I(4);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__hit_run = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_index = VL_RAND_RESET_I(7);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_wdata = VL_RAND_RESET_I(20);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_back[__Vi0] = VL_RAND_RESET_I(21);
    }
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rindex = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(256, vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_wdata);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__dirty[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__dirty_loc = VL_RAND_RESET_I(3);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__hit_write = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__write_wstrb = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_stat = VL_RAND_RESET_I(4);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_addr = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_counter = VL_RAND_RESET_I(3);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__ok_send_arv = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__uca_ok = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__uca_data = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_miss = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_back_data = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_hit_way = VL_RAND_RESET_I(4);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_hit_run_data = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_data_ok = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__Data_TagV_TP__tagwen = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__Data_TagV_TP__tagwen = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__Data_TagV_TP__tagwen = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__Data_TagV_TP__tagwen = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__Data_Data_TP__wen = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__Data_Data_TP__wen = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__Data_Data_TP__wen = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__Data_Data_TP__wen = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hf6d406ff__0 = 0;
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hff2dba59__0 = 0;
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hbcee2671__0 = 0;
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hdbf3ff4e__0 = 0;
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h68fa2eee__0 = 0;
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h077415b1__0 = 0;
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h8df67b7c__0 = 0;
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h6053820f__0 = 0;
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hb0774e16__0 = 0;
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_ha774a041__0 = 0;
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h9253e7f8__0 = 0;
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h4d0fc773__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__0__KET____DOT__Data_TagV_TP__DOT__tag_ram[__Vi0] = VL_RAND_RESET_I(20);
    }
    VL_RAND_RESET_W(128, vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__0__KET____DOT__Data_TagV_TP__DOT__v_ram);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__0__KET____DOT__Data_TagV_TP__DOT__tagv_res = VL_RAND_RESET_I(21);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__1__KET____DOT__Data_TagV_TP__DOT__tag_ram[__Vi0] = VL_RAND_RESET_I(20);
    }
    VL_RAND_RESET_W(128, vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__1__KET____DOT__Data_TagV_TP__DOT__v_ram);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__1__KET____DOT__Data_TagV_TP__DOT__tagv_res = VL_RAND_RESET_I(21);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__2__KET____DOT__Data_TagV_TP__DOT__tag_ram[__Vi0] = VL_RAND_RESET_I(20);
    }
    VL_RAND_RESET_W(128, vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__2__KET____DOT__Data_TagV_TP__DOT__v_ram);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__2__KET____DOT__Data_TagV_TP__DOT__tagv_res = VL_RAND_RESET_I(21);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__3__KET____DOT__Data_TagV_TP__DOT__tag_ram[__Vi0] = VL_RAND_RESET_I(20);
    }
    VL_RAND_RESET_W(128, vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__3__KET____DOT__Data_TagV_TP__DOT__v_ram);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__3__KET____DOT__Data_TagV_TP__DOT__tagv_res = VL_RAND_RESET_I(21);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_req = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_size = VL_RAND_RESET_I(2);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_op = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_addr = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_wdata = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_wstrb = VL_RAND_RESET_I(4);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_arvalid = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_awvalid = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_wvalid = VL_RAND_RESET_I(1);
    vlSelf->__VdfgTmp_he8465266__0 = 0;
    vlSelf->__Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_index = VL_RAND_RESET_I(7);
    vlSelf->__Vtrigrprev__TOP__aclk = VL_RAND_RESET_I(1);
}
