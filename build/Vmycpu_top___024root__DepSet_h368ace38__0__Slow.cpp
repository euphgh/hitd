// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmycpu_top___024root___dump_triggers__stl(Vmycpu_top___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmycpu_top___024root___eval_triggers__stl(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmycpu_top___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vmycpu_top___024root___stl_sequent__TOP__0(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___stl_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ mycpu_top__DOT__data_rdata;
    mycpu_top__DOT__data_rdata = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_3;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_3 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_4;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_4 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hcec3c834__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hcec3c834__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hc2e9df91__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hc2e9df91__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_ha7833c56__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_ha7833c56__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h251c8d32__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h251c8d32__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h393a2266__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h393a2266__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h5280fd99__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h5280fd99__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h79b22941__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h79b22941__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h24ce65c0__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h24ce65c0__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h0921cbb3__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h0921cbb3__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h0528b0ae__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h0528b0ae__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h24a83fa1__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h24a83fa1__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hb28be266__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hb28be266__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h7660f3c5__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h7660f3c5__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h09e1bdb7__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h09e1bdb7__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h82451ab9__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h82451ab9__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h10ebbef4__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h10ebbef4__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h1b54b9e8__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h1b54b9e8__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_ha701db5f__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_ha701db5f__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h6cd1d5c1__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h6cd1d5c1__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h7ca81ed0__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h7ca81ed0__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h890c71d0__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h890c71d0__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h77a98698__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h77a98698__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hd9433986__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hd9433986__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hc87b876a__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hc87b876a__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hb3233a0f__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hb3233a0f__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h234504bc__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h234504bc__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hb43496c6__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hb43496c6__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h72436f12__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h72436f12__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h7ce500d6__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h7ce500d6__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h6da380dd__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h6da380dd__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hd8757bf8__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hd8757bf8__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h0a658c78__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h0a658c78__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h05959c5d__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h05959c5d__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h8a6ec0f0__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h8a6ec0f0__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_heeba4413__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_heeba4413__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hb67f0d8d__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hb67f0d8d__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h5c553896__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h5c553896__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hae2810fa__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hae2810fa__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hbd36779d__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hbd36779d__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hb94d6dcf__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hb94d6dcf__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hf6d10583__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hf6d10583__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h83209bf5__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h83209bf5__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h8d320ccd__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h8d320ccd__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hb66b3991__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hb66b3991__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hd4059e60__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hd4059e60__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h5716c7f6__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h5716c7f6__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hf012ca80__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hf012ca80__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hee235b88__0;
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hee235b88__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h564a7919__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h564a7919__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hcf822cbf__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hcf822cbf__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h244c62d2__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h244c62d2__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha108cfa5__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha108cfa5__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h4b8bd1fe__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h4b8bd1fe__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h724e8175__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h724e8175__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hd0ab33ad__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hd0ab33ad__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hc44f26bc__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hc44f26bc__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hfd0a5637__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hfd0a5637__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hc371a6b6__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hc371a6b6__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hceb8dc60__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hceb8dc60__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h6e645c84__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h6e645c84__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h9eb4b5eb__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h9eb4b5eb__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h6488fdb0__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h6488fdb0__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb19ecac8__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb19ecac8__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb5619a15__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb5619a15__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h4edbaf67__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h4edbaf67__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h769eaeec__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h769eaeec__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h1e81b120__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h1e81b120__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha738a093__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha738a093__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hff1ab896__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hff1ab896__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h87d21bf8__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h87d21bf8__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h10646167__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h10646167__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hcb930240__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hcb930240__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hd592c80b__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hd592c80b__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hc1abcfb8__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hc1abcfb8__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha27d0374__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha27d0374__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf093ce41__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf093ce41__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h75850dfd__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h75850dfd__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h7436f760__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h7436f760__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h280ac462__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h280ac462__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h7bd68717__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h7bd68717__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h1dc89079__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h1dc89079__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha4671a3b__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha4671a3b__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hfc3378fc__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hfc3378fc__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha5731aee__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha5731aee__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hbc3713a9__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hbc3713a9__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h57732f0f__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h57732f0f__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hd1595329__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hd1595329__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h4c3950eb__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h4c3950eb__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf90d2b74__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf90d2b74__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h90625e43__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h90625e43__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h2a5c33a9__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h2a5c33a9__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h7628166e__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h7628166e__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h3b1dba2d__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h3b1dba2d__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h66e998e2__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h66e998e2__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h5fb10c29__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h5fb10c29__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h33036c05__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h33036c05__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h01ff5cae__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h01ff5cae__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_heb0cf660__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_heb0cf660__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hbc2b0b10__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hbc2b0b10__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hbdf419e9__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hbdf419e9__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h935dc71e__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h935dc71e__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hd5ace64e__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hd5ace64e__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h7c968ba3__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h7c968ba3__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h4e008f50__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h4e008f50__0 = 0;
    IData/*31:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__PCR_lastVAddr_o;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__PCR_lastVAddr_o = 0;
    IData/*31:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT____VdfgTmp_h8dd29e80__0;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT____VdfgTmp_h8dd29e80__0 = 0;
    IData/*31:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT____VdfgTmp_hddbd0299__0;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT____VdfgTmp_hddbd0299__0 = 0;
    IData/*31:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT____VdfgTmp_hf6a71238__0;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT____VdfgTmp_hf6a71238__0 = 0;
    IData/*31:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT____VdfgTmp_hd7683b01__0;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT____VdfgTmp_hd7683b01__0 = 0;
    IData/*31:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT____VdfgTmp_he0e21672__0;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT____VdfgTmp_he0e21672__0 = 0;
    IData/*31:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT____VdfgTmp_h68c645d6__0;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT____VdfgTmp_h68c645d6__0 = 0;
    IData/*31:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT____VdfgTmp_hcedc22ac__0;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT____VdfgTmp_hcedc22ac__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h020966c0__0;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h020966c0__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h40f69812__0;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h40f69812__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_hed933301__0;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_hed933301__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_heddd41c6__0;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_heddd41c6__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_heddc22ab__0;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_heddc22ab__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_hed973b3c__0;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_hed973b3c__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h7c5d4f22__0;
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h7c5d4f22__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__beq_take;
    mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__beq_take = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__bgt_take;
    mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__bgt_take = 0;
    IData/*31:0*/ mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__add_a;
    mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__add_a = 0;
    IData/*31:0*/ mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__add_b;
    mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__add_b = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__cin_i;
    mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__cin_i = 0;
    QData/*32:0*/ mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__u_try_div_ans__DOT__diff;
    mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__u_try_div_ans__DOT__diff = 0;
    CData/*0:0*/ mycpu_top__DOT__u_cache_top__DOT__inst_top_rvalid;
    mycpu_top__DOT__u_cache_top__DOT__inst_top_rvalid = 0;
    VlWide<8>/*255:0*/ mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_hf0e156a2__0;
    VL_ZERO_W(256, mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_hf0e156a2__0);
    QData/*53:0*/ mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_mux__DOT____VdfgTmp_h601c0c5f__0;
    mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_mux__DOT____VdfgTmp_h601c0c5f__0 = 0;
    QData/*40:0*/ mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_mux__DOT____VdfgTmp_h5b400afc__0;
    mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_mux__DOT____VdfgTmp_h5b400afc__0 = 0;
    QData/*53:0*/ mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_mux__DOT__axi_dc_du__DOT____VdfgTmp_he0abe4c6__0;
    mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_mux__DOT__axi_dc_du__DOT____VdfgTmp_he0abe4c6__0 = 0;
    QData/*49:0*/ mycpu_top__DOT__u_cache_top__DOT__u_axi_2to1_arbiter__DOT____VdfgTmp_h65533c38__0;
    mycpu_top__DOT__u_cache_top__DOT__u_axi_2to1_arbiter__DOT____VdfgTmp_h65533c38__0 = 0;
    IData/*31:0*/ __VdfgTmp_hf635047b__0;
    __VdfgTmp_hf635047b__0 = 0;
    IData/*31:0*/ __VdfgTmp_h0d946138__0;
    __VdfgTmp_h0d946138__0 = 0;
    IData/*31:0*/ __VdfgTmp_h1803ce03__0;
    __VdfgTmp_h1803ce03__0 = 0;
    IData/*31:0*/ __VdfgTmp_h1b0bcfea__0;
    __VdfgTmp_h1b0bcfea__0 = 0;
    // Body
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__dirty_loc 
        = (((IData)((0U != (0xcU & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__way)))) 
            << 1U) | (IData)((0U != (0xaU & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__way)))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__size 
        = (7U & ((1U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_memEnable_r_i)) 
                 + ((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_memEnable_r_i) 
                           >> 1U)) + ((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_memEnable_r_i) 
                                             >> 2U)) 
                                      + (1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_memEnable_r_i) 
                                               >> 3U))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h2329f798__0 
        = (IData)((0x200000000000000ULL == (0x200001000000000ULL 
                                            & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h85ab9c61__0 
        = (IData)((0x1000000000ULL == (0x3800000000ULL 
                                       & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hfd1fc749__0 
        = (IData)((0ULL == (0x6000000000000000ULL & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i)));
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
    vlSelf->awvalid = ((2U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_stat)) 
                       | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_awvalid));
    vlSelf->wvalid = ((4U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_stat)) 
                      | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_wvalid));
    vlSelf->bready = (1U & (((IData)(vlSelf->bid) >> 1U) 
                            | (5U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_stat))));
    vlSelf->mycpu_top__DOT__inst_hasException = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_MemoryManagementUnit__DOT__isOther) 
                                                 | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_hasException_o));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__writeData[0U] 
        = vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__REEXE_regData_r_i;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_forwardSel_up[0U] 
        = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_forwardSel0_r_i;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_forwardSel_up[1U] 
        = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_forwardSel1_r_i;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_forwardSel_up[0U] 
        = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_forwardSel0_r_i;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_forwardSel_up[1U] 
        = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_forwardSel1_r_i;
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__Inst_Data_TP__wen 
        = (- (IData)(((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__way) 
                      & (4U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat)))));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__Inst_Data_TP__wen 
        = (- (IData)((((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__way) 
                       >> 1U) & (4U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat)))));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__Inst_Data_TP__wen 
        = (- (IData)((((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__way) 
                       >> 2U) & (4U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat)))));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__Inst_Data_TP__wen 
        = (- (IData)((((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__way) 
                       >> 3U) & (4U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat)))));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__Inst_TagV_TP__tagwen 
        = ((0xfU == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat)) 
           | ((4U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat)) 
              & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__way)));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__Inst_TagV_TP__tagwen 
        = ((0xfU == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat)) 
           | ((4U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat)) 
              & ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__way) 
                 >> 1U)));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__Inst_TagV_TP__tagwen 
        = ((0xfU == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat)) 
           | ((4U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat)) 
              & ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__way) 
                 >> 2U)));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__Inst_TagV_TP__tagwen 
        = ((0xfU == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat)) 
           | ((4U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat)) 
              & ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__way) 
                 >> 3U)));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_wdata 
        = ((- (IData)((4U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat)))) 
           & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tag);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__Data_TagV_TP__tagwen 
        = ((0xfU == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat)) 
           | ((4U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat)) 
              & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__way)));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__Data_TagV_TP__tagwen 
        = ((0xfU == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat)) 
           | ((4U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat)) 
              & ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__way) 
                 >> 1U)));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__Data_TagV_TP__tagwen 
        = ((0xfU == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat)) 
           | ((4U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat)) 
              & ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__way) 
                 >> 2U)));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__Data_TagV_TP__tagwen 
        = ((0xfU == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat)) 
           | ((4U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat)) 
              & ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__way) 
                 >> 3U)));
    vlSelf->rready = (1U & ((4U & (IData)(vlSelf->rid))
                             ? ((5U & ((IData)(vlSelf->rid) 
                                       >> 1U)) | (3U 
                                                  == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat)))
                             : ((5U & ((IData)(vlSelf->rid) 
                                       >> 1U)) | (3U 
                                                  == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat)))));
    vlSelf->mycpu_top__DOT__inst_unCache = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_MemoryManagementUnit__DOT__isOther) 
                                            | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_MemoryManagementUnit__DOT__isKseg0) 
                                               & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_MemoryManagementUnit__DOT__kseg0UnCache)));
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
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__data_uncache_wready 
        = ((4U != (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_stat)) 
           & ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_wvalid) 
              & (IData)(vlSelf->wready)));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_back[0U] 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__0__KET____DOT__Inst_TagV_TP__DOT__tagv_res;
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_back[1U] 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__1__KET____DOT__Inst_TagV_TP__DOT__tagv_res;
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_back[2U] 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__2__KET____DOT__Inst_TagV_TP__DOT__tagv_res;
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_back[3U] 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__3__KET____DOT__Inst_TagV_TP__DOT__tagv_res;
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_back[0U] 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__0__KET____DOT__Data_TagV_TP__DOT__tagv_res;
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_back[1U] 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__1__KET____DOT__Data_TagV_TP__DOT__tagv_res;
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_back[2U] 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__2__KET____DOT__Data_TagV_TP__DOT__tagv_res;
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_back[3U] 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__3__KET____DOT__Data_TagV_TP__DOT__tagv_res;
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rindex 
        = (0x7fU & ((0U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat))
                     ? (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_index)
                     : ((1U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat))
                         ? (vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_aluRes_r_i 
                            >> 5U) : (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_index))));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h1b54b9e8__0 
        = (IData)((0x8000000ULL == (0xc000000ULL & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i)));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_ha701db5f__0 
        = (IData)((0xc000000ULL == (0xc000000ULL & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i)));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h68fa2eee__0 
        = (- (IData)(((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__way) 
                      & (4U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat)))));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h8df67b7c__0 
        = (- (IData)((((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__way) 
                       >> 1U) & (4U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat)))));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hb0774e16__0 
        = (- (IData)((((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__way) 
                       >> 2U) & (4U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat)))));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h9253e7f8__0 
        = (- (IData)((((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__way) 
                       >> 3U) & (4U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat)))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h648e5e68__0 
        = (1U & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                         >> 0x1cU)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hafc7fffa__0 
        = (IData)((0xc00000000ULL == (0xc00000000ULL 
                                      & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_preliminaryRes_o 
        = (((- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_mathResSel_r_i) 
                              >> 3U)))) & vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_aluRes_r_i) 
           | (((- (IData)((1U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_mathResSel_r_i)))) 
               & vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_mulRes_r_i) 
              | (((- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_mathResSel_r_i) 
                                    >> 1U)))) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_clRes_r_i)) 
                 | (((- (IData)(((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_memReq_r_i) 
                                 & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_memAtom_r_i) 
                                    & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_memWR_r_i))))) 
                     & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__LLbit)) 
                    | ((- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_mathResSel_r_i) 
                                         >> 2U)))) 
                       & vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_mduRes_r_i)))));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__inst_uca_req 
        = ((~ (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_hasException)) 
           & ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_unCache) 
              & ((~ (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_uca_addr_ok)) 
                 & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_req))));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__data_uca_req 
        = ((~ (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_hasException)) 
           & ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_unCache) 
              & ((~ (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_uca_addr_ok)) 
                 & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_req))));
    mycpu_top__DOT__u_cache_top__DOT__inst_top_rvalid 
        = ((~ ((IData)(vlSelf->rid) >> 2U)) & (IData)(vlSelf->rvalid));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_index 
        = (0x7fU & ((4U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat))
                     ? (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_index)
                     : ((1U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat))
                         ? (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_PCRegister__DOT__nextNotAlignedPC 
                            >> 5U) : ((0U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat))
                                       ? (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sta_index)
                                       : (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_index)))));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__data_top_arvalid 
        = ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_arvalid) 
           | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__ok_send_arv));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hd0eb4e79__0 
        = (IData)((0x300000000ULL == (0x300000000ULL 
                                      & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hb2e44229__0 
        = (IData)((0x1800000000ULL == (0x1800000000ULL 
                                       & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hfd36d646__0 
        = (IData)((0x200000000ULL == (0x300000000ULL 
                                      & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h1745ca6f__0 
        = (IData)((0x100000000ULL == (0x300000000ULL 
                                      & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hfc6ec919__0 
        = (IData)((0ULL == (0x300000000ULL & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i)));
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
    vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_Index_w_o 
        = (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Index_p) 
            << 0x1fU) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Index_index));
    mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_mux__DOT____VdfgTmp_h5b400afc__0 
        = (((4U != (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_stat)) 
            & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_wvalid))
            ? (0x6000000000ULL | (((QData)((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_wdata)) 
                                   << 5U) | (QData)((IData)(
                                                            (1U 
                                                             | ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_wstrb) 
                                                                << 1U))))))
            : (0x2000000000ULL | (((QData)((IData)(
                                                   vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data
                                                   [vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_counter])) 
                                   << 5U) | (QData)((IData)(
                                                            (0x1eU 
                                                             | (7U 
                                                                == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_counter))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_Status_w_o 
        = (0x400000U | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Status_im) 
                         << 8U) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Status_exl) 
                                    << 1U) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Status_ie))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_Cause_w_o 
        = (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Cause_bd) 
            << 0x1fU) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Cause_ti) 
                          << 0x1eU) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Cause_ip) 
                                        << 8U) | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Cause_exccode) 
                                                  << 2U))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT____VdfgTmp_hfe30ddba__0 
        = (IData)((0U != (0xcU & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_loadMode_r_i))));
    mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_mux__DOT____VdfgTmp_h601c0c5f__0 
        = ((2U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_stat))
            ? (0x400000001d200ULL | ((QData)((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_addr)) 
                                     << 0x12U)) : (0xc000000000000ULL 
                                                   | (((QData)((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_addr)) 
                                                       << 0x12U) 
                                                      | (QData)((IData)(
                                                                        ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_size) 
                                                                         << 0xbU))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__IQ_number_w 
        = (0x1fU & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__tail) 
                    - (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__head)));
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
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__write_wstrb 
        = ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_wstrb) 
           << (0x1cU & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_offset)));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__inst_cache_araddr 
        = ((vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tag 
            << 0xcU) | (((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_index) 
                         << 5U) | ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_offset) 
                                   << 4U)));
    if ((2U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__timer))) {
        mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__add_a 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__regHiLo
            [0U];
        mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__cin_i 
            = (1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__add_sub_op_r)));
        mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__add_b 
            = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__add_sub_op_r)
                ? vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__Multiplier_u__DOT__seg1[0U]
                : (~ vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__Multiplier_u__DOT__seg1[0U]));
    } else {
        mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__add_a 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__regHiLo
            [1U];
        mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__cin_i 
            = (1U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__savedCin));
        mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__add_b 
            = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__add_sub_op_r)
                ? vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__multiRes
                : (~ vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__multiRes));
    }
    mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__u_try_div_ans__DOT__diff 
        = (0x1ffffffffULL & ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__minuend 
                              >> 0x1fU) - (QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__divisor))));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__inst_top_arvalid 
        = ((2U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat)) 
           | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__last_arvalid));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_ha7833c56__0 
        = (IData)((0x8000000000000000ULL == (0xc000000000000000ULL 
                                             & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i)));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h09e1bdb7__0 
        = (IData)((0x4000000ULL == (0xc000000ULL & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i)));
    vlSelf->mycpu_top__DOT__inst_tag = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_MemoryManagementUnit__DOT__isOther)
                                         ? 0U : vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_MemoryManagementUnit__DOT__unmapTag);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__writeNum[0U] 
        = vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__REEXE_writeNum_r_i;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__writeNum[1U] 
        = vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_writeNum_r_i;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__readNum[0U] 
        = (0x1fU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_regReadNum_p_r_i);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__readNum[1U] 
        = (0x1fU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_regReadNum_p_r_i 
                    >> 5U));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__readNum[2U] 
        = (0x1fU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_regReadNum_p_r_i 
                    >> 0xaU));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__readNum[3U] 
        = (0x1fU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_regReadNum_p_r_i 
                    >> 0xfU));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hc11ec478__0 
        = (IData)((0xc00000000000000ULL == (0xc00000000000000ULL 
                                            & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__WB_writeEnable_w_o 
        = ((0U != (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_writeNum_r_i)) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__hasData));
    vlSelf->mycpu_top__DOT__u_Main__DOT__PBA_writeEnable_w_o 
        = ((0U != (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__REEXE_writeNum_r_i)) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__hasData));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hf89e3a1a__0 
        = (IData)((0x800000000000000ULL == (0xc00000000000000ULL 
                                            & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ALU_u__DOT__u_adder__DOT____VdfgTmp_hd2aefce6__0 
        = (IData)((0U != (0x430U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_aluOprator_r_i))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_1 
        = (IData)((0ULL == (0xf800000000000000ULL & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h0a49da51__0 
        = (IData)((0ULL == (0x18000000ULL & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i)));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hcec3c834__0 
        = (IData)((0ULL == (0xe0000000ULL & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hef9ed262__0 
        = (IData)((0x400000000000000ULL == (0xc00000000000000ULL 
                                            & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__needRead[0U][0U] 
        = (1U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_needRead_p_r_i));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__needRead[0U][1U] 
        = (1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_needRead_p_r_i) 
                 >> 1U));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__needRead[1U][0U] 
        = (1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_needRead_p_r_i) 
                 >> 2U));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__needRead[1U][1U] 
        = (1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_needRead_p_r_i) 
                 >> 3U));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__PCR_VAddr_o 
        = (0xfffffff3U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_PCRegister__DOT__nextNotAlignedPC);
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__PCR_lastVAddr_o 
        = ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_PCRegister__DOT__nextNotAlignedPC 
              >> 4U) - (IData)(1U)) << 4U) | (3U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_PCRegister__DOT__nextNotAlignedPC));
    if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__PCR_needDelaySlot_o) {
        __VdfgTmp_hf635047b__0 = (0xcU | ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_PCRegister__DOT__nextNotAlignedPC 
                                             >> 4U) 
                                            - (IData)(1U)) 
                                           << 4U) | 
                                          (3U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_PCRegister__DOT__nextNotAlignedPC)));
        __VdfgTmp_h0d946138__0 = (8U | ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_PCRegister__DOT__nextNotAlignedPC 
                                           >> 4U) - (IData)(1U)) 
                                         << 4U) | (3U 
                                                   & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_PCRegister__DOT__nextNotAlignedPC)));
        __VdfgTmp_h1803ce03__0 = (4U | ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_PCRegister__DOT__nextNotAlignedPC 
                                           >> 4U) - (IData)(1U)) 
                                         << 4U) | (3U 
                                                   & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_PCRegister__DOT__nextNotAlignedPC)));
        __VdfgTmp_h1b0bcfea__0 = mycpu_top__DOT__u_Main__DOT__u_IF__DOT__PCR_lastVAddr_o;
    } else {
        __VdfgTmp_hf635047b__0 = (0xcU | (0xfffffff3U 
                                          & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_PCRegister__DOT__nextNotAlignedPC));
        __VdfgTmp_h0d946138__0 = (8U | (0xfffffff3U 
                                        & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_PCRegister__DOT__nextNotAlignedPC));
        __VdfgTmp_h1803ce03__0 = (4U | (0xfffffff3U 
                                        & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_PCRegister__DOT__nextNotAlignedPC));
        __VdfgTmp_h1b0bcfea__0 = vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__PCR_VAddr_o;
    }
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__PCR_instEnable_o 
        = (((- (IData)((0U == (3U & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_PCRegister__DOT__nextNotAlignedPC 
                                     >> 2U))))) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_PCRegister__DOT__temp_enable)) 
           | ((0xeU & (- (IData)((1U == (3U & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_PCRegister__DOT__nextNotAlignedPC 
                                               >> 2U)))))) 
              | ((0xcU & (- (IData)((2U == (3U & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_PCRegister__DOT__nextNotAlignedPC 
                                                  >> 2U)))))) 
                 | (8U & (- (IData)((3U == (3U & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_PCRegister__DOT__nextNotAlignedPC 
                                                  >> 2U)))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h1dffa6d3__0 
        = (IData)((0ULL == (0xc000000ULL & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hff260753__0 
        = (IData)((0ULL == (0xc00000000000000ULL & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst[0U] 
        = (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst[1U] 
        = (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                   >> 0x20U));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum[0U][0U] 
        = (0x1fU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_regReadNum_p_r_i);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum[0U][1U] 
        = (0x1fU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_regReadNum_p_r_i 
                    >> 5U));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum[1U][0U] 
        = (0x1fU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_regReadNum_p_r_i 
                    >> 0xaU));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum[1U][1U] 
        = (0x1fU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_regReadNum_p_r_i 
                    >> 0xfU));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__clReq 
        = (IData)((0U != (0x180U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_mduOperator_r_i))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__isAccumlate 
        = (IData)((0U != (0x30U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_mduOperator_r_i))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__mulr_data_ok 
        = (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__timer) 
            == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__upBound)) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__start));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__hit_run 
        = ((0U != (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__hit_way)) 
           & ((~ (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_unCache)) 
              & (1U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT____VdfgTmp_heda64e59__0 
        = (IData)((0U != (0xcU & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_mduOperator_r_i))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT____VdfgTmp_hedee5323__0 
        = (IData)((0U != (3U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_mduOperator_r_i))));
    vlSelf->mycpu_top__DOT__data_unCache = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_DataMemoryManagementUnit__DOT__isOther) 
                                            | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_DataMemoryManagementUnit__DOT__isKseg0) 
                                                & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_DataMemoryManagementUnit__DOT__kseg0UnCache)) 
                                               | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_DataMemoryManagementUnit__DOT__isKseg1)));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__data_top_rvalid 
        = (((IData)(vlSelf->rid) >> 2U) & (IData)(vlSelf->rvalid));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__writeK0 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_writeCp0_r_i) 
           & (0x80U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_positionCp0_r_i)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__isMduWrite 
        = ((0U != (0x7fU & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_mduOperator_r_i))) 
           | (0U != (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_writeHiLo_r_i)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[0U] 
        = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue
        [(0xfU & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__head))][0U];
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
        = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue
        [(0xfU & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__head))][1U];
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[2U] 
        = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue
        [(0xfU & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__head))][2U];
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[3U] 
        = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue
        [(0xfU & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__head))][3U];
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[4U] 
        = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue
        [(0xfU & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__head))][4U];
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[5U] 
        = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue
        [(0xfU & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__head))][5U];
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[0U] 
        = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue
        [(0xfU & ((IData)(1U) + (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__head)))][0U];
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
        = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue
        [(0xfU & ((IData)(1U) + (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__head)))][1U];
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[2U] 
        = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue
        [(0xfU & ((IData)(1U) + (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__head)))][2U];
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[3U] 
        = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue
        [(0xfU & ((IData)(1U) + (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__head)))][3U];
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[4U] 
        = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue
        [(0xfU & ((IData)(1U) + (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__head)))][4U];
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[5U] 
        = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue
        [(0xfU & ((IData)(1U) + (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__head)))][5U];
    if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_DataMemoryManagementUnit__DOT__isOther) {
        vlSelf->mycpu_top__DOT__data_tag = 0U;
        vlSelf->mycpu_top__DOT__data_hasException = vlSelf->mycpu_top__DOT__u_Main__DOT__u_DataMemoryManagementUnit__DOT__mapReq;
    } else {
        vlSelf->mycpu_top__DOT__data_tag = vlSelf->mycpu_top__DOT__u_Main__DOT__u_DataMemoryManagementUnit__DOT__unmapTag;
        vlSelf->mycpu_top__DOT__data_hasException = 0U;
    }
    vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_hasExceprion_w_o 
        = ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_isDelaySlot_r_i)) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_hasException_r_i));
    vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_isInterrupt_w_o 
        = ((0U != ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Cause_ip) 
                   & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Status_im))) 
           & ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Status_exl)) 
              & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__hasData)));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__hit_run 
        = ((0U != (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__hit_way)) 
           & ((~ (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_unCache)) 
              & (1U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat))));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__inst_uca_data_ok 
        = ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__buf_valid) 
           & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__last_req));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ALU_u__DOT__u_adder__DOT____VdfgTmp_hd2aefce6__0 
        = (IData)((0U != (0x430U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_aluOprator_r_i))));
    mycpu_top__DOT__data_rdata = ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_unCache)
                                   ? vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__uca_data
                                   : ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_raw_col)
                                       ? ((((8U & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_raw_wstrb))
                                             ? vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_raw_data
                                            [3U] : 
                                            (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_back_data 
                                             >> 0x18U)) 
                                           << 0x18U) 
                                          | ((0xff0000U 
                                              & (((4U 
                                                   & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_raw_wstrb))
                                                   ? 
                                                  vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_raw_data
                                                  [2U]
                                                   : 
                                                  (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_back_data 
                                                   >> 0x10U)) 
                                                 << 0x10U)) 
                                             | ((0xff00U 
                                                 & (((2U 
                                                      & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_raw_wstrb))
                                                      ? 
                                                     vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_raw_data
                                                     [1U]
                                                      : 
                                                     (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_back_data 
                                                      >> 8U)) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & ((1U 
                                                       & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_raw_wstrb))
                                                       ? 
                                                      vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_raw_data
                                                      [0U]
                                                       : vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_back_data)))))
                                       : vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_back_data));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__inst_p[0U] 
        = (((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_unCache)
             ? vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__buf_rdata
            [0U] : vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_back_data[0U]) 
           & (- (IData)((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_hasException_o))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__inst_p[1U] 
        = (((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_unCache)
             ? vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__buf_rdata
            [1U] : vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_back_data[1U]) 
           & (- (IData)((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_hasException_o))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__inst_p[2U] 
        = (((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_unCache)
             ? (IData)((((QData)((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__buf_rdata
                                         [3U])) << 0x20U) 
                        | (QData)((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__buf_rdata
                                          [2U])))) : 
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_back_data[2U]) 
           & (- (IData)((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_hasException_o))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__inst_p[3U] 
        = (((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_unCache)
             ? (IData)(((((QData)((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__buf_rdata
                                          [3U])) << 0x20U) 
                         | (QData)((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__buf_rdata
                                           [2U]))) 
                        >> 0x20U)) : vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_back_data[3U]) 
           & (- (IData)((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_hasException_o))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_haf0e1199__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h1b54b9e8__0) 
           & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                      >> 0x1cU)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h2647a248__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_ha701db5f__0) 
           & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                      >> 0x1cU)));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__inst_cache_rvalid 
        = ((~ (5U & ((IData)(vlSelf->rid) >> 1U))) 
           & (IData)(mycpu_top__DOT__u_cache_top__DOT__inst_top_rvalid));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__inst_uncache_rvalid 
        = (5U & (((IData)(vlSelf->rid) >> 1U) & (IData)(mycpu_top__DOT__u_cache_top__DOT__inst_top_rvalid)));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_index 
        = ((0xfU == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat))
            ? (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__reset_counter)
            : (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_index));
    vlSelf->wid = (0xfU & (IData)((mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_mux__DOT____VdfgTmp_h5b400afc__0 
                                   >> 0x25U)));
    vlSelf->wdata = (IData)((mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_mux__DOT____VdfgTmp_h5b400afc__0 
                             >> 5U));
    vlSelf->wstrb = (0xfU & (IData)((mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_mux__DOT____VdfgTmp_h5b400afc__0 
                                     >> 1U)));
    vlSelf->wlast = (1U & (IData)(mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_mux__DOT____VdfgTmp_h5b400afc__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_finalRes_o 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_readCp0_r_i)
            ? (((- (IData)((0x60U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_positionCp0_r_i)))) 
                & vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_Status_w_o) 
               | (((- (IData)((0x68U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_positionCp0_r_i)))) 
                   & vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_Cause_w_o) 
                  | (((- (IData)((0x70U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_positionCp0_r_i)))) 
                      & vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__epc) 
                     | (((- (IData)((0x40U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_positionCp0_r_i)))) 
                         & vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__badVaddr) 
                        | (((- (IData)((0x48U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_positionCp0_r_i)))) 
                            & vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__count) 
                           | (((- (IData)((0x58U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_positionCp0_r_i)))) 
                               & vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__compare) 
                              | (((- (IData)((0U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_positionCp0_r_i)))) 
                                  & vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_Index_w_o) 
                                 | (((- (IData)((0x10U 
                                                 == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_positionCp0_r_i)))) 
                                     & vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__entryLo0) 
                                    | (((- (IData)(
                                                   (0x18U 
                                                    == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_positionCp0_r_i)))) 
                                        & vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__entryLo1) 
                                       | (((- (IData)(
                                                      (0x50U 
                                                       == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_positionCp0_r_i)))) 
                                           & vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__entryHi) 
                                          | (((- (IData)(
                                                         (0x80U 
                                                          == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_positionCp0_r_i)))) 
                                              & (0x80000080U 
                                                 | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Config_k0))) 
                                             | (0xc0201200U 
                                                & (- (IData)(
                                                             (0x81U 
                                                              == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_positionCp0_r_i))))))))))))))))
            : vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_preliminaryRes_r_i);
    vlSelf->awid = (0xfU & (IData)((mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_mux__DOT____VdfgTmp_h601c0c5f__0 
                                    >> 0x32U)));
    vlSelf->awaddr = (IData)((mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_mux__DOT____VdfgTmp_h601c0c5f__0 
                              >> 0x12U));
    vlSelf->awlen = (0xfU & (IData)((mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_mux__DOT____VdfgTmp_h601c0c5f__0 
                                     >> 0xeU)));
    vlSelf->awsize = (7U & (IData)((mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_mux__DOT____VdfgTmp_h601c0c5f__0 
                                    >> 0xbU)));
    vlSelf->awburst = (3U & (IData)((mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_mux__DOT____VdfgTmp_h601c0c5f__0 
                                     >> 9U)));
    vlSelf->awlock = (3U & (IData)((mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_mux__DOT____VdfgTmp_h601c0c5f__0 
                                    >> 7U)));
    vlSelf->awcache = (0xfU & (IData)((mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_mux__DOT____VdfgTmp_h601c0c5f__0 
                                       >> 3U)));
    vlSelf->awprot = (7U & (IData)(mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_mux__DOT____VdfgTmp_h601c0c5f__0));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_mux__DOT__axi_ic_iu__DOT____VdfgTmp_he0abe4c6__0 
        = ((2U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat))
            ? (0x1d400ULL | ((QData)((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__inst_cache_araddr)) 
                             << 0x12U)) : (0x800000000d200ULL 
                                           | ((QData)((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__last_addr)) 
                                              << 0x12U)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__minuend_back 
        = (((1U & (IData)((mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__u_try_div_ans__DOT__diff 
                           >> 0x20U))) ? vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__minuend
             : ((mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__u_try_div_ans__DOT__diff 
                 << 0x1fU) | (QData)((IData)((0x7fffffffU 
                                              & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__minuend)))))) 
           << 1U);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__quotient_temp 
        = ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__quotient_iter 
            << 1U) + (1U & (~ (IData)((mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__u_try_div_ans__DOT__diff 
                                       >> 0x20U)))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__crFlag 
        = (1U & (IData)((1ULL & (((QData)((IData)(mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__add_a)) 
                                  + ((QData)((IData)(mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__add_b)) 
                                     + (QData)((IData)(mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__cin_i)))) 
                                 >> 0x20U))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__adder_u__DOT__add_sub_res 
        = (mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__add_a 
           + (mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__add_b 
              + (IData)(mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__cin_i)));
    vlSelf->arvalid = ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__inst_top_arvalid) 
                       | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__data_top_arvalid));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__inst_top_arready 
        = ((IData)(vlSelf->arready) & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__inst_top_arvalid));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__data_top_arready 
        = ((~ (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__inst_top_arvalid)) 
           & ((IData)(vlSelf->arready) & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__data_top_arvalid)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h0066a336__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h09e1bdb7__0) 
           & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                      >> 0x1cU)));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h82451ab9__0 
        = ((~ (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                       >> 0x1cU))) & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h09e1bdb7__0));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_h381d158a__0 
        = (((0U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat)) 
            & ((vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tag 
                == (0xfffffU & (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__3__KET____DOT__Inst_TagV_TP__DOT__tagv_res 
                                >> 1U))) & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__3__KET____DOT__Inst_TagV_TP__DOT__tagv_res)) 
           | ((1U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat)) 
              & ((vlSelf->mycpu_top__DOT__inst_tag 
                  == (0xfffffU & (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__3__KET____DOT__Inst_TagV_TP__DOT__tagv_res 
                                  >> 1U))) & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__3__KET____DOT__Inst_TagV_TP__DOT__tagv_res)));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_h3f7273e8__0 
        = (((0U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat)) 
            & ((vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tag 
                == (0xfffffU & (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__2__KET____DOT__Inst_TagV_TP__DOT__tagv_res 
                                >> 1U))) & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__2__KET____DOT__Inst_TagV_TP__DOT__tagv_res)) 
           | ((1U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat)) 
              & ((vlSelf->mycpu_top__DOT__inst_tag 
                  == (0xfffffU & (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__2__KET____DOT__Inst_TagV_TP__DOT__tagv_res 
                                  >> 1U))) & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__2__KET____DOT__Inst_TagV_TP__DOT__tagv_res)));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_h65ec07f2__0 
        = (((0U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat)) 
            & ((vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tag 
                == (0xfffffU & (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__1__KET____DOT__Inst_TagV_TP__DOT__tagv_res 
                                >> 1U))) & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__1__KET____DOT__Inst_TagV_TP__DOT__tagv_res)) 
           | ((1U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat)) 
              & ((vlSelf->mycpu_top__DOT__inst_tag 
                  == (0xfffffU & (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__1__KET____DOT__Inst_TagV_TP__DOT__tagv_res 
                                  >> 1U))) & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__1__KET____DOT__Inst_TagV_TP__DOT__tagv_res)));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT____VdfgTmp_h68c645d6__0 
        = (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__3__KET____DOT__btbReg
           [(0xffU & (__VdfgTmp_hf635047b__0 >> 4U))] 
           << 2U);
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_hed933301__0 
        = ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__3__KET____DOT__btbTag
            [(0xffU & (__VdfgTmp_hf635047b__0 >> 4U))] 
            == (0xffU & (__VdfgTmp_hf635047b__0 >> 0xcU))) 
           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__3__KET____DOT__btbValid[
              (7U & (__VdfgTmp_hf635047b__0 >> 9U))] 
              >> (0x1fU & (__VdfgTmp_hf635047b__0 >> 4U))));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT____VdfgTmp_he0e21672__0 
        = (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__2__KET____DOT__btbReg
           [(0xffU & (__VdfgTmp_h0d946138__0 >> 4U))] 
           << 2U);
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_hed973b3c__0 
        = ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__2__KET____DOT__btbTag
            [(0xffU & (__VdfgTmp_h0d946138__0 >> 4U))] 
            == (0xffU & (__VdfgTmp_h0d946138__0 >> 0xcU))) 
           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__2__KET____DOT__btbValid[
              (7U & (__VdfgTmp_h0d946138__0 >> 9U))] 
              >> (0x1fU & (__VdfgTmp_h0d946138__0 >> 4U))));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hf012ca80__0 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hc11ec478__0) 
           & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                      >> 0x3cU)));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hae2810fa__0 
        = ((~ (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                       >> 0x3cU))) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hc11ec478__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__WAW_coflict 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__PBA_writeEnable_w_o) 
           & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__WB_writeEnable_w_o) 
              & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__REEXE_writeNum_r_i) 
                 == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_writeNum_r_i))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__writeEnable 
        = (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__WB_writeEnable_w_o) 
            << 1U) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__PBA_writeEnable_w_o));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h77a98698__0 
        = ((~ (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                       >> 0x3cU))) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hf89e3a1a__0));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hf6d10583__0 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hf89e3a1a__0) 
           & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                      >> 0x3cU)));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT____VdfgTmp_hf6a71238__0 
        = (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__1__KET____DOT__btbReg
           [(0xffU & (__VdfgTmp_h1803ce03__0 >> 4U))] 
           << 2U);
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_heddc22ab__0 
        = ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__1__KET____DOT__btbTag
            [(0xffU & (__VdfgTmp_h1803ce03__0 >> 4U))] 
            == (0xffU & (__VdfgTmp_h1803ce03__0 >> 0xcU))) 
           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__1__KET____DOT__btbValid[
              (7U & (__VdfgTmp_h1803ce03__0 >> 9U))] 
              >> (0x1fU & (__VdfgTmp_h1803ce03__0 >> 4U))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_1 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h0a49da51__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hcec3c834__0));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hbd36779d__0 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hef9ed262__0) 
           & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                      >> 0x3cU)));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h7ca81ed0__0 
        = ((~ (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                       >> 0x3cU))) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hef9ed262__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h52796ce4__0 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__PCR_needDelaySlot_o) 
           | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__PCR_instEnable_o) 
              >> 3U));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h7660f3c5__0 
        = ((~ (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                       >> 0x1cU))) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h1dffa6d3__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h8bdcd435__0 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hff260753__0) 
           & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                      >> 0x3dU)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h8bd045d8__0 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hff260753__0) 
           & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                      >> 0x3cU)));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h6cd1d5c1__0 
        = ((~ (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                       >> 0x3cU))) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hff260753__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__decorderExcCode_up[0U] 
        = ((0x1dU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__decorderExcCode_up
            [0U]) | (2U & (((((((((((((((((((((((((
                                                   ((6U 
                                                     & ((((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [0U] 
                                                               >> 0x19U) 
                                                              & ((~ 
                                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                   [0U] 
                                                                   >> 0x1bU)) 
                                                                 << 1U)) 
                                                             & ((~ 
                                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                  [0U] 
                                                                  >> 0x1cU)) 
                                                                << 1U)) 
                                                            & ((~ 
                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                 [0U] 
                                                                 >> 0x1dU)) 
                                                               << 1U)) 
                                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [0U] 
                                                              >> 0x1dU)) 
                                                          & ((~ 
                                                              (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [0U] 
                                                               >> 0x1fU)) 
                                                             << 1U)) 
                                                         | (((((((~ 
                                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                   [0U] 
                                                                   >> 0x1aU)) 
                                                                 << 1U) 
                                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                   [0U] 
                                                                   >> 0x1aU)) 
                                                               & ((~ 
                                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                    [0U] 
                                                                    >> 0x1cU)) 
                                                                  << 1U)) 
                                                              & ((~ 
                                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                   [0U] 
                                                                   >> 0x1dU)) 
                                                                 << 1U)) 
                                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [0U] 
                                                                >> 0x1dU)) 
                                                            & ((~ 
                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                 [0U] 
                                                                 >> 0x1fU)) 
                                                               << 1U))) 
                                                        | ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [0U] 
                                                                >> 0x19U) 
                                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                  [0U] 
                                                                  >> 0x1aU)) 
                                                              & ((~ 
                                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                   [0U] 
                                                                   >> 0x1cU)) 
                                                                 << 1U)) 
                                                             & ((~ 
                                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                  [0U] 
                                                                  >> 0x1dU)) 
                                                                << 1U)) 
                                                            & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [0U] 
                                                               >> 0x1dU)) 
                                                           & ((~ 
                                                               (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [0U] 
                                                                >> 0x1fU)) 
                                                              << 1U)))) 
                                                    | (2U 
                                                       & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [0U] 
                                                               >> 0x19U) 
                                                              & ((~ 
                                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                   [0U] 
                                                                   >> 0x1bU)) 
                                                                 << 1U)) 
                                                             & ((~ 
                                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                  [0U] 
                                                                  >> 0x1cU)) 
                                                                << 1U)) 
                                                            & ((~ 
                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                 [0U] 
                                                                 >> 0x1dU)) 
                                                               << 1U)) 
                                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [0U] 
                                                              >> 0x1dU)) 
                                                          & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [0U] 
                                                             >> 0x1eU)))) 
                                                   | (2U 
                                                      & (((((((~ 
                                                               (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [0U] 
                                                                >> 0x1aU)) 
                                                              << 1U) 
                                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [0U] 
                                                                >> 0x1aU)) 
                                                            & ((~ 
                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                 [0U] 
                                                                 >> 0x1cU)) 
                                                               << 1U)) 
                                                           & ((~ 
                                                               (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [0U] 
                                                                >> 0x1dU)) 
                                                              << 1U)) 
                                                          & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [0U] 
                                                             >> 0x1dU)) 
                                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                            [0U] 
                                                            >> 0x1eU)))) 
                                                  | (2U 
                                                     & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [0U] 
                                                             >> 0x19U) 
                                                            & ((~ 
                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                 [0U] 
                                                                 >> 0x1bU)) 
                                                               << 1U)) 
                                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [0U] 
                                                              >> 0x1bU)) 
                                                          & ((~ 
                                                              (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [0U] 
                                                               >> 0x1dU)) 
                                                             << 1U)) 
                                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                            [0U] 
                                                            >> 0x1dU)) 
                                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                           [0U] 
                                                           >> 0x1eU)))) 
                                                 | (2U 
                                                    & (((((((~ 
                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [0U] 
                                                              >> 0x1aU)) 
                                                            << 1U) 
                                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [0U] 
                                                              >> 0x1aU)) 
                                                          & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [0U] 
                                                             >> 0x1bU)) 
                                                         & ((~ 
                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [0U] 
                                                              >> 0x1dU)) 
                                                            << 1U)) 
                                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                           [0U] 
                                                           >> 0x1dU)) 
                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                          [0U] 
                                                          >> 0x1eU)))) 
                                                | (2U 
                                                   & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                           [0U] 
                                                           >> 0x19U) 
                                                          & ((~ 
                                                              (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [0U] 
                                                               >> 0x1bU)) 
                                                             << 1U)) 
                                                         & ((~ 
                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [0U] 
                                                              >> 0x1cU)) 
                                                            << 1U)) 
                                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                           [0U] 
                                                           >> 0x1cU)) 
                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                          [0U] 
                                                          >> 0x1dU)) 
                                                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                         [0U] 
                                                         >> 0x1eU)))) 
                                               | (2U 
                                                  & (((((((~ 
                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                            [0U] 
                                                            >> 0x1aU)) 
                                                          << 1U) 
                                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                            [0U] 
                                                            >> 0x1aU)) 
                                                        & ((~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [0U] 
                                                             >> 0x1cU)) 
                                                           << 1U)) 
                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                          [0U] 
                                                          >> 0x1cU)) 
                                                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                         [0U] 
                                                         >> 0x1dU)) 
                                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                        [0U] 
                                                        >> 0x1eU)))) 
                                              | (2U 
                                                 & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                         [0U] 
                                                         >> 0x19U) 
                                                        & ((~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [0U] 
                                                             >> 0x1bU)) 
                                                           << 1U)) 
                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                          [0U] 
                                                          >> 0x1bU)) 
                                                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                         [0U] 
                                                         >> 0x1cU)) 
                                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                        [0U] 
                                                        >> 0x1dU)) 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [0U] 
                                                       >> 0x1eU)))) 
                                             | (2U 
                                                & (((((((~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                          [0U] 
                                                          >> 0x1aU)) 
                                                        << 1U) 
                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                          [0U] 
                                                          >> 0x1aU)) 
                                                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                         [0U] 
                                                         >> 0x1bU)) 
                                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                        [0U] 
                                                        >> 0x1cU)) 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [0U] 
                                                       >> 0x1dU)) 
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [0U] 
                                                      >> 0x1eU)))) 
                                            | (6U & 
                                               (((((((~ 
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
                                                   << 1U) 
                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [0U] 
                                                     >> 0x1cU)) 
                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [0U] 
                                                    >> 0x1dU)) 
                                                & ((~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [0U] 
                                                     >> 0x1fU)) 
                                                   << 1U)))) 
                                           | (6U & 
                                              ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [0U] 
                                                    >> 0x19U) 
                                                   & ((~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                        [0U] 
                                                        >> 0x1bU)) 
                                                      << 1U)) 
                                                  & ((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [0U] 
                                                       >> 0x1cU)) 
                                                     << 1U)) 
                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [0U] 
                                                    >> 0x1cU)) 
                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [0U] 
                                                   >> 0x1dU)) 
                                               & ((~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [0U] 
                                                    >> 0x1fU)) 
                                                  << 1U)))) 
                                          | (6U & (
                                                   ((((((~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                          [0U] 
                                                          >> 0x1aU)) 
                                                        << 1U) 
                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                          [0U] 
                                                          >> 0x1aU)) 
                                                      & ((~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                           [0U] 
                                                           >> 0x1cU)) 
                                                         << 1U)) 
                                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                        [0U] 
                                                        >> 0x1cU)) 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [0U] 
                                                       >> 0x1dU)) 
                                                   & ((~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                        [0U] 
                                                        >> 0x1fU)) 
                                                      << 1U)))) 
                                         | (6U & ((
                                                   ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [0U] 
                                                       >> 0x19U) 
                                                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                         [0U] 
                                                         >> 0x1aU)) 
                                                     & ((~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                          [0U] 
                                                          >> 0x1cU)) 
                                                        << 1U)) 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [0U] 
                                                       >> 0x1cU)) 
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [0U] 
                                                      >> 0x1dU)) 
                                                  & ((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [0U] 
                                                       >> 0x1fU)) 
                                                     << 1U)))) 
                                        | (6U & (((
                                                   (((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [0U] 
                                                      >> 0x19U) 
                                                     & ((~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                          [0U] 
                                                          >> 0x1bU)) 
                                                        << 1U)) 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [0U] 
                                                       >> 0x1bU)) 
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [0U] 
                                                      >> 0x1cU)) 
                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [0U] 
                                                     >> 0x1dU)) 
                                                 & ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [0U] 
                                                      >> 0x1fU)) 
                                                    << 1U)))) 
                                       | (6U & ((((
                                                   (((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [0U] 
                                                       >> 0x1aU)) 
                                                     << 1U) 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [0U] 
                                                       >> 0x1aU)) 
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [0U] 
                                                      >> 0x1bU)) 
                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [0U] 
                                                     >> 0x1cU)) 
                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [0U] 
                                                    >> 0x1dU)) 
                                                & ((~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [0U] 
                                                     >> 0x1fU)) 
                                                   << 1U)))) 
                                      | (6U & (((((
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [0U] 
                                                    >> 0x19U) 
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [0U] 
                                                      >> 0x1aU)) 
                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [0U] 
                                                     >> 0x1bU)) 
                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [0U] 
                                                    >> 0x1cU)) 
                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [0U] 
                                                   >> 0x1dU)) 
                                               & ((~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [0U] 
                                                    >> 0x1fU)) 
                                                  << 1U)))) 
                                     | (2U & ((((((
                                                   vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [0U] 
                                                   >> 0x19U) 
                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [0U] 
                                                     >> 0x1aU)) 
                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [0U] 
                                                    >> 0x1bU)) 
                                                & ((~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [0U] 
                                                     >> 0x1dU)) 
                                                   << 1U)) 
                                               & ((~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [0U] 
                                                    >> 0x1eU)) 
                                                  << 1U)) 
                                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                 [0U] 
                                                 >> 0x1eU)))) 
                                    | (2U & (((((((~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [0U] 
                                                    >> 0x1aU)) 
                                                  & (~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [0U] 
                                                      >> 0x1bU))) 
                                                 << 1U) 
                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [0U] 
                                                   >> 0x1bU)) 
                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [0U] 
                                                  >> 0x1cU)) 
                                              & ((~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [0U] 
                                                   >> 0x1eU)) 
                                                 << 1U)) 
                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                [0U] 
                                                >> 0x1eU)))) 
                                   | (2U & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                 [0U] 
                                                 >> 0x19U) 
                                                & ((~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [0U] 
                                                     >> 0x1bU)) 
                                                   << 1U)) 
                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [0U] 
                                                  >> 0x1bU)) 
                                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                 [0U] 
                                                 >> 0x1cU)) 
                                             & ((~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [0U] 
                                                  >> 0x1eU)) 
                                                << 1U)) 
                                            & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                               [0U] 
                                               >> 0x1eU)))) 
                                  | (2U & (((((((~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [0U] 
                                                  >> 0x1aU)) 
                                                & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [0U] 
                                                    >> 0x1bU))) 
                                               << 1U) 
                                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                 [0U] 
                                                 >> 0x1bU)) 
                                             & ((~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [0U] 
                                                  >> 0x1dU)) 
                                                << 1U)) 
                                            & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                               [0U] 
                                               >> 0x1dU)) 
                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                              [0U] 
                                              >> 0x1eU)))) 
                                 | (2U & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                               [0U] 
                                               >> 0x19U) 
                                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                 [0U] 
                                                 >> 0x1aU)) 
                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                [0U] 
                                                >> 0x1bU)) 
                                            & ((~ (
                                                   vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [0U] 
                                                   >> 0x1dU)) 
                                               << 1U)) 
                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                              [0U] 
                                              >> 0x1dU)) 
                                          & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                             [0U] >> 0x1eU)))) 
                                | (2U & (((((((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [0U] 
                                                  >> 0x1aU)) 
                                              & (~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [0U] 
                                                  >> 0x1bU))) 
                                             << 1U) 
                                            & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                               [0U] 
                                               >> 0x1bU)) 
                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                              [0U] 
                                              >> 0x1cU)) 
                                          & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                             [0U] >> 0x1dU)) 
                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                            [0U] >> 0x1eU)))) 
                               | (2U & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                             [0U] >> 0x19U) 
                                            & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                               [0U] 
                                               >> 0x1aU)) 
                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                              [0U] 
                                              >> 0x1bU)) 
                                          & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                             [0U] >> 0x1cU)) 
                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                            [0U] >> 0x1dU)) 
                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                           [0U] >> 0x1eU)))) 
                              | (2U & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                            [0U] >> 0x19U) 
                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                              [0U] 
                                              >> 0x1aU)) 
                                          & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                 [0U] 
                                                 >> 0x1cU)) 
                                             << 1U)) 
                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                            [0U] >> 0x1cU)) 
                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                           [0U] >> 0x1dU)) 
                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                          [0U] >> 0x1eU)))) 
                             | (6U & (((((((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                               [0U] 
                                               >> 0x1aU)) 
                                           & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                 [0U] 
                                                 >> 0x1bU))) 
                                          << 1U) & 
                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                          [0U] >> 0x1bU)) 
                                        & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                               [0U] 
                                               >> 0x1dU)) 
                                           << 1U)) 
                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                          [0U] >> 0x1dU)) 
                                      & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                             [0U] >> 0x1fU)) 
                                         << 1U)))) 
                            | (6U & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                          [0U] >> 0x19U) 
                                         & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                [0U] 
                                                >> 0x1bU)) 
                                            << 1U)) 
                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                           [0U] >> 0x1bU)) 
                                       & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                              [0U] 
                                              >> 0x1dU)) 
                                          << 1U)) & 
                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                       [0U] >> 0x1dU)) 
                                     & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                            [0U] >> 0x1fU)) 
                                        << 1U)))) | 
                           (6U & (((((((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                           [0U] >> 0x1aU)) 
                                       << 1U) & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                 [0U] 
                                                 >> 0x1aU)) 
                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                        [0U] >> 0x1bU)) 
                                    & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                           [0U] >> 0x1dU)) 
                                       << 1U)) & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [0U] 
                                                  >> 0x1dU)) 
                                  & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                         [0U] >> 0x1fU)) 
                                     << 1U))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__decorderExcCode_up[1U] 
        = ((0x1dU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__decorderExcCode_up
            [1U]) | (2U & (((((((((((((((((((((((((
                                                   ((6U 
                                                     & ((((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [1U] 
                                                               >> 0x19U) 
                                                              & ((~ 
                                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                   [1U] 
                                                                   >> 0x1bU)) 
                                                                 << 1U)) 
                                                             & ((~ 
                                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                  [1U] 
                                                                  >> 0x1cU)) 
                                                                << 1U)) 
                                                            & ((~ 
                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                 [1U] 
                                                                 >> 0x1dU)) 
                                                               << 1U)) 
                                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [1U] 
                                                              >> 0x1dU)) 
                                                          & ((~ 
                                                              (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [1U] 
                                                               >> 0x1fU)) 
                                                             << 1U)) 
                                                         | (((((((~ 
                                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                   [1U] 
                                                                   >> 0x1aU)) 
                                                                 << 1U) 
                                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                   [1U] 
                                                                   >> 0x1aU)) 
                                                               & ((~ 
                                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                    [1U] 
                                                                    >> 0x1cU)) 
                                                                  << 1U)) 
                                                              & ((~ 
                                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                   [1U] 
                                                                   >> 0x1dU)) 
                                                                 << 1U)) 
                                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [1U] 
                                                                >> 0x1dU)) 
                                                            & ((~ 
                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                 [1U] 
                                                                 >> 0x1fU)) 
                                                               << 1U))) 
                                                        | ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [1U] 
                                                                >> 0x19U) 
                                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                  [1U] 
                                                                  >> 0x1aU)) 
                                                              & ((~ 
                                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                   [1U] 
                                                                   >> 0x1cU)) 
                                                                 << 1U)) 
                                                             & ((~ 
                                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                  [1U] 
                                                                  >> 0x1dU)) 
                                                                << 1U)) 
                                                            & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [1U] 
                                                               >> 0x1dU)) 
                                                           & ((~ 
                                                               (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [1U] 
                                                                >> 0x1fU)) 
                                                              << 1U)))) 
                                                    | (2U 
                                                       & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [1U] 
                                                               >> 0x19U) 
                                                              & ((~ 
                                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                   [1U] 
                                                                   >> 0x1bU)) 
                                                                 << 1U)) 
                                                             & ((~ 
                                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                  [1U] 
                                                                  >> 0x1cU)) 
                                                                << 1U)) 
                                                            & ((~ 
                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                 [1U] 
                                                                 >> 0x1dU)) 
                                                               << 1U)) 
                                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [1U] 
                                                              >> 0x1dU)) 
                                                          & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [1U] 
                                                             >> 0x1eU)))) 
                                                   | (2U 
                                                      & (((((((~ 
                                                               (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [1U] 
                                                                >> 0x1aU)) 
                                                              << 1U) 
                                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [1U] 
                                                                >> 0x1aU)) 
                                                            & ((~ 
                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                 [1U] 
                                                                 >> 0x1cU)) 
                                                               << 1U)) 
                                                           & ((~ 
                                                               (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [1U] 
                                                                >> 0x1dU)) 
                                                              << 1U)) 
                                                          & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [1U] 
                                                             >> 0x1dU)) 
                                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                            [1U] 
                                                            >> 0x1eU)))) 
                                                  | (2U 
                                                     & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [1U] 
                                                             >> 0x19U) 
                                                            & ((~ 
                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                 [1U] 
                                                                 >> 0x1bU)) 
                                                               << 1U)) 
                                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [1U] 
                                                              >> 0x1bU)) 
                                                          & ((~ 
                                                              (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [1U] 
                                                               >> 0x1dU)) 
                                                             << 1U)) 
                                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                            [1U] 
                                                            >> 0x1dU)) 
                                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                           [1U] 
                                                           >> 0x1eU)))) 
                                                 | (2U 
                                                    & (((((((~ 
                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [1U] 
                                                              >> 0x1aU)) 
                                                            << 1U) 
                                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [1U] 
                                                              >> 0x1aU)) 
                                                          & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [1U] 
                                                             >> 0x1bU)) 
                                                         & ((~ 
                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [1U] 
                                                              >> 0x1dU)) 
                                                            << 1U)) 
                                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                           [1U] 
                                                           >> 0x1dU)) 
                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                          [1U] 
                                                          >> 0x1eU)))) 
                                                | (2U 
                                                   & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                           [1U] 
                                                           >> 0x19U) 
                                                          & ((~ 
                                                              (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [1U] 
                                                               >> 0x1bU)) 
                                                             << 1U)) 
                                                         & ((~ 
                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [1U] 
                                                              >> 0x1cU)) 
                                                            << 1U)) 
                                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                           [1U] 
                                                           >> 0x1cU)) 
                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                          [1U] 
                                                          >> 0x1dU)) 
                                                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                         [1U] 
                                                         >> 0x1eU)))) 
                                               | (2U 
                                                  & (((((((~ 
                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                            [1U] 
                                                            >> 0x1aU)) 
                                                          << 1U) 
                                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                            [1U] 
                                                            >> 0x1aU)) 
                                                        & ((~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [1U] 
                                                             >> 0x1cU)) 
                                                           << 1U)) 
                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                          [1U] 
                                                          >> 0x1cU)) 
                                                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                         [1U] 
                                                         >> 0x1dU)) 
                                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                        [1U] 
                                                        >> 0x1eU)))) 
                                              | (2U 
                                                 & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                         [1U] 
                                                         >> 0x19U) 
                                                        & ((~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [1U] 
                                                             >> 0x1bU)) 
                                                           << 1U)) 
                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                          [1U] 
                                                          >> 0x1bU)) 
                                                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                         [1U] 
                                                         >> 0x1cU)) 
                                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                        [1U] 
                                                        >> 0x1dU)) 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [1U] 
                                                       >> 0x1eU)))) 
                                             | (2U 
                                                & (((((((~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                          [1U] 
                                                          >> 0x1aU)) 
                                                        << 1U) 
                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
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
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [1U] 
                                                      >> 0x1eU)))) 
                                            | (6U & 
                                               (((((((~ 
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
                                                   << 1U) 
                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [1U] 
                                                     >> 0x1cU)) 
                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [1U] 
                                                    >> 0x1dU)) 
                                                & ((~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [1U] 
                                                     >> 0x1fU)) 
                                                   << 1U)))) 
                                           | (6U & 
                                              ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [1U] 
                                                    >> 0x19U) 
                                                   & ((~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                        [1U] 
                                                        >> 0x1bU)) 
                                                      << 1U)) 
                                                  & ((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [1U] 
                                                       >> 0x1cU)) 
                                                     << 1U)) 
                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [1U] 
                                                    >> 0x1cU)) 
                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [1U] 
                                                   >> 0x1dU)) 
                                               & ((~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [1U] 
                                                    >> 0x1fU)) 
                                                  << 1U)))) 
                                          | (6U & (
                                                   ((((((~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                          [1U] 
                                                          >> 0x1aU)) 
                                                        << 1U) 
                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                          [1U] 
                                                          >> 0x1aU)) 
                                                      & ((~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                           [1U] 
                                                           >> 0x1cU)) 
                                                         << 1U)) 
                                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                        [1U] 
                                                        >> 0x1cU)) 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [1U] 
                                                       >> 0x1dU)) 
                                                   & ((~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                        [1U] 
                                                        >> 0x1fU)) 
                                                      << 1U)))) 
                                         | (6U & ((
                                                   ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [1U] 
                                                       >> 0x19U) 
                                                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                         [1U] 
                                                         >> 0x1aU)) 
                                                     & ((~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                          [1U] 
                                                          >> 0x1cU)) 
                                                        << 1U)) 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [1U] 
                                                       >> 0x1cU)) 
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [1U] 
                                                      >> 0x1dU)) 
                                                  & ((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [1U] 
                                                       >> 0x1fU)) 
                                                     << 1U)))) 
                                        | (6U & (((
                                                   (((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [1U] 
                                                      >> 0x19U) 
                                                     & ((~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                          [1U] 
                                                          >> 0x1bU)) 
                                                        << 1U)) 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [1U] 
                                                       >> 0x1bU)) 
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [1U] 
                                                      >> 0x1cU)) 
                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [1U] 
                                                     >> 0x1dU)) 
                                                 & ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [1U] 
                                                      >> 0x1fU)) 
                                                    << 1U)))) 
                                       | (6U & ((((
                                                   (((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [1U] 
                                                       >> 0x1aU)) 
                                                     << 1U) 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
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
                                                & ((~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [1U] 
                                                     >> 0x1fU)) 
                                                   << 1U)))) 
                                      | (6U & (((((
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [1U] 
                                                    >> 0x19U) 
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
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
                                               & ((~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [1U] 
                                                    >> 0x1fU)) 
                                                  << 1U)))) 
                                     | (2U & ((((((
                                                   vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [1U] 
                                                   >> 0x19U) 
                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [1U] 
                                                     >> 0x1aU)) 
                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [1U] 
                                                    >> 0x1bU)) 
                                                & ((~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [1U] 
                                                     >> 0x1dU)) 
                                                   << 1U)) 
                                               & ((~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [1U] 
                                                    >> 0x1eU)) 
                                                  << 1U)) 
                                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                 [1U] 
                                                 >> 0x1eU)))) 
                                    | (2U & (((((((~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [1U] 
                                                    >> 0x1aU)) 
                                                  & (~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [1U] 
                                                      >> 0x1bU))) 
                                                 << 1U) 
                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [1U] 
                                                   >> 0x1bU)) 
                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [1U] 
                                                  >> 0x1cU)) 
                                              & ((~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [1U] 
                                                   >> 0x1eU)) 
                                                 << 1U)) 
                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                [1U] 
                                                >> 0x1eU)))) 
                                   | (2U & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                 [1U] 
                                                 >> 0x19U) 
                                                & ((~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [1U] 
                                                     >> 0x1bU)) 
                                                   << 1U)) 
                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [1U] 
                                                  >> 0x1bU)) 
                                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                 [1U] 
                                                 >> 0x1cU)) 
                                             & ((~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [1U] 
                                                  >> 0x1eU)) 
                                                << 1U)) 
                                            & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                               [1U] 
                                               >> 0x1eU)))) 
                                  | (2U & (((((((~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [1U] 
                                                  >> 0x1aU)) 
                                                & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [1U] 
                                                    >> 0x1bU))) 
                                               << 1U) 
                                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                 [1U] 
                                                 >> 0x1bU)) 
                                             & ((~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [1U] 
                                                  >> 0x1dU)) 
                                                << 1U)) 
                                            & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                               [1U] 
                                               >> 0x1dU)) 
                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                              [1U] 
                                              >> 0x1eU)))) 
                                 | (2U & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                               [1U] 
                                               >> 0x19U) 
                                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                 [1U] 
                                                 >> 0x1aU)) 
                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                [1U] 
                                                >> 0x1bU)) 
                                            & ((~ (
                                                   vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [1U] 
                                                   >> 0x1dU)) 
                                               << 1U)) 
                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                              [1U] 
                                              >> 0x1dU)) 
                                          & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                             [1U] >> 0x1eU)))) 
                                | (2U & (((((((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [1U] 
                                                  >> 0x1aU)) 
                                              & (~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [1U] 
                                                  >> 0x1bU))) 
                                             << 1U) 
                                            & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                               [1U] 
                                               >> 0x1bU)) 
                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                              [1U] 
                                              >> 0x1cU)) 
                                          & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                             [1U] >> 0x1dU)) 
                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                            [1U] >> 0x1eU)))) 
                               | (2U & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                             [1U] >> 0x19U) 
                                            & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                               [1U] 
                                               >> 0x1aU)) 
                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                              [1U] 
                                              >> 0x1bU)) 
                                          & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                             [1U] >> 0x1cU)) 
                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                            [1U] >> 0x1dU)) 
                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                           [1U] >> 0x1eU)))) 
                              | (2U & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                            [1U] >> 0x19U) 
                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                              [1U] 
                                              >> 0x1aU)) 
                                          & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                 [1U] 
                                                 >> 0x1cU)) 
                                             << 1U)) 
                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                            [1U] >> 0x1cU)) 
                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                           [1U] >> 0x1dU)) 
                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                          [1U] >> 0x1eU)))) 
                             | (6U & (((((((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                               [1U] 
                                               >> 0x1aU)) 
                                           & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                 [1U] 
                                                 >> 0x1bU))) 
                                          << 1U) & 
                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                          [1U] >> 0x1bU)) 
                                        & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                               [1U] 
                                               >> 0x1dU)) 
                                           << 1U)) 
                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                          [1U] >> 0x1dU)) 
                                      & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                             [1U] >> 0x1fU)) 
                                         << 1U)))) 
                            | (6U & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                          [1U] >> 0x19U) 
                                         & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                [1U] 
                                                >> 0x1bU)) 
                                            << 1U)) 
                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                           [1U] >> 0x1bU)) 
                                       & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                              [1U] 
                                              >> 0x1dU)) 
                                          << 1U)) & 
                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                       [1U] >> 0x1dU)) 
                                     & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                            [1U] >> 0x1fU)) 
                                        << 1U)))) | 
                           (6U & (((((((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                           [1U] >> 0x1aU)) 
                                       << 1U) & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                 [1U] 
                                                 >> 0x1aU)) 
                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                        [1U] >> 0x1bU)) 
                                    & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                           [1U] >> 0x1dU)) 
                                       << 1U)) & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [1U] 
                                                  >> 0x1dU)) 
                                  & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                         [1U] >> 0x1fU)) 
                                     << 1U))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__extendAction_up[0U] 
        = ((6U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__extendAction_up
            [0U]) | (1U & (((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                             [0U] >> 0x1cU) & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                               [0U] 
                                               >> 0x1dU)) 
                           & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                 [0U] >> 0x1fU)))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__extendAction_up[0U] 
        = ((5U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__extendAction_up
            [0U]) | (2U & ((((((((((((0xeU & (((((~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [0U] 
                                                   >> 0x1bU)) 
                                                 & (~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [0U] 
                                                     >> 0x1cU))) 
                                                << 1U) 
                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [0U] 
                                                  >> 0x1cU)) 
                                              & ((~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [0U] 
                                                   >> 0x1fU)) 
                                                 << 1U))) 
                                     | (0xeU & ((((
                                                   vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [0U] 
                                                   >> 0x1aU) 
                                                  & ((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [0U] 
                                                       >> 0x1cU)) 
                                                     << 1U)) 
                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [0U] 
                                                    >> 0x1cU)) 
                                                & ((~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [0U] 
                                                     >> 0x1fU)) 
                                                   << 1U)))) 
                                    | (0x1eU & ((((
                                                   (~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [0U] 
                                                     >> 0x1bU)) 
                                                   << 1U) 
                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [0U] 
                                                     >> 0x1bU)) 
                                                 & ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [0U] 
                                                      >> 0x1dU)) 
                                                    << 1U)) 
                                                & ((~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [0U] 
                                                     >> 0x1fU)) 
                                                   << 1U)))) 
                                   | (0x1eU & ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [0U] 
                                                  >> 0x1aU) 
                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [0U] 
                                                    >> 0x1bU)) 
                                                & ((~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [0U] 
                                                     >> 0x1dU)) 
                                                   << 1U)) 
                                               & ((~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [0U] 
                                                    >> 0x1fU)) 
                                                  << 1U)))) 
                                  | (((((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                            [0U] >> 0x1bU)) 
                                        & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                              [0U] 
                                              >> 0x1cU))) 
                                       & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                             [0U] >> 0x1dU))) 
                                      & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                            [0U] >> 0x1fU))) 
                                     << 1U)) | (2U 
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
                                                    << 1U) 
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [0U] 
                                                      >> 0x1eU)))) 
                                | (2U & (((((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                [0U] 
                                                >> 0x1bU)) 
                                            << 1U) 
                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                              [0U] 
                                              >> 0x1bU)) 
                                          & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                 [0U] 
                                                 >> 0x1dU)) 
                                             << 1U)) 
                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                            [0U] >> 0x1eU)))) 
                               | (2U & ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                           [0U] >> 0x1aU) 
                                          & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                 [0U] 
                                                 >> 0x1cU)) 
                                             << 1U)) 
                                         & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                [0U] 
                                                >> 0x1dU)) 
                                            << 1U)) 
                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                           [0U] >> 0x1eU)))) 
                              | (2U & ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                          [0U] >> 0x1aU) 
                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                            [0U] >> 0x1bU)) 
                                        & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                               [0U] 
                                               >> 0x1dU)) 
                                           << 1U)) 
                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                          [0U] >> 0x1eU)))) 
                             | (2U & (((((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                             [0U] >> 0x1bU)) 
                                         & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                               [0U] 
                                               >> 0x1cU))) 
                                        << 1U) & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [0U] 
                                                  >> 0x1cU)) 
                                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                         [0U] >> 0x1eU)))) 
                            | (2U & ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                        [0U] >> 0x1aU) 
                                       & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                              [0U] 
                                              >> 0x1cU)) 
                                          << 1U)) & 
                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                       [0U] >> 0x1cU)) 
                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                        [0U] >> 0x1eU)))) 
                           | (2U & ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                       [0U] >> 0x1aU) 
                                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                         [0U] >> 0x1bU)) 
                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                        [0U] >> 0x1cU)) 
                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                       [0U] >> 0x1eU))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__extendAction_up[0U] 
        = ((3U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__extendAction_up
            [0U]) | (4U & ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                              [0U] >> 0x19U) & ((~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [0U] 
                                                  >> 0x1cU)) 
                                                << 2U)) 
                            & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                   [0U] >> 0x1dU)) 
                               << 2U)) & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                              [0U] 
                                              >> 0x1fU)) 
                                          << 2U))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__extendAction_up[1U] 
        = ((6U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__extendAction_up
            [1U]) | (1U & (((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                             [1U] >> 0x1cU) & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                               [1U] 
                                               >> 0x1dU)) 
                           & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                 [1U] >> 0x1fU)))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__extendAction_up[1U] 
        = ((5U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__extendAction_up
            [1U]) | (2U & ((((((((((((0xeU & (((((~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [1U] 
                                                   >> 0x1bU)) 
                                                 & (~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [1U] 
                                                     >> 0x1cU))) 
                                                << 1U) 
                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [1U] 
                                                  >> 0x1cU)) 
                                              & ((~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [1U] 
                                                   >> 0x1fU)) 
                                                 << 1U))) 
                                     | (0xeU & ((((
                                                   vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [1U] 
                                                   >> 0x1aU) 
                                                  & ((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [1U] 
                                                       >> 0x1cU)) 
                                                     << 1U)) 
                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [1U] 
                                                    >> 0x1cU)) 
                                                & ((~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [1U] 
                                                     >> 0x1fU)) 
                                                   << 1U)))) 
                                    | (0x1eU & ((((
                                                   (~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [1U] 
                                                     >> 0x1bU)) 
                                                   << 1U) 
                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [1U] 
                                                     >> 0x1bU)) 
                                                 & ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [1U] 
                                                      >> 0x1dU)) 
                                                    << 1U)) 
                                                & ((~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [1U] 
                                                     >> 0x1fU)) 
                                                   << 1U)))) 
                                   | (0x1eU & ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [1U] 
                                                  >> 0x1aU) 
                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [1U] 
                                                    >> 0x1bU)) 
                                                & ((~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [1U] 
                                                     >> 0x1dU)) 
                                                   << 1U)) 
                                               & ((~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [1U] 
                                                    >> 0x1fU)) 
                                                  << 1U)))) 
                                  | (((((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                            [1U] >> 0x1bU)) 
                                        & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                              [1U] 
                                              >> 0x1cU))) 
                                       & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                             [1U] >> 0x1dU))) 
                                      & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                            [1U] >> 0x1fU))) 
                                     << 1U)) | (2U 
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
                                                    << 1U) 
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [1U] 
                                                      >> 0x1eU)))) 
                                | (2U & (((((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                [1U] 
                                                >> 0x1bU)) 
                                            << 1U) 
                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                              [1U] 
                                              >> 0x1bU)) 
                                          & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                 [1U] 
                                                 >> 0x1dU)) 
                                             << 1U)) 
                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                            [1U] >> 0x1eU)))) 
                               | (2U & ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                           [1U] >> 0x1aU) 
                                          & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                 [1U] 
                                                 >> 0x1cU)) 
                                             << 1U)) 
                                         & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                [1U] 
                                                >> 0x1dU)) 
                                            << 1U)) 
                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                           [1U] >> 0x1eU)))) 
                              | (2U & ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                          [1U] >> 0x1aU) 
                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                            [1U] >> 0x1bU)) 
                                        & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                               [1U] 
                                               >> 0x1dU)) 
                                           << 1U)) 
                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                          [1U] >> 0x1eU)))) 
                             | (2U & (((((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                             [1U] >> 0x1bU)) 
                                         & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                               [1U] 
                                               >> 0x1cU))) 
                                        << 1U) & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [1U] 
                                                  >> 0x1cU)) 
                                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                         [1U] >> 0x1eU)))) 
                            | (2U & ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                        [1U] >> 0x1aU) 
                                       & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                              [1U] 
                                              >> 0x1cU)) 
                                          << 1U)) & 
                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                       [1U] >> 0x1cU)) 
                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                        [1U] >> 0x1eU)))) 
                           | (2U & ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                       [1U] >> 0x1aU) 
                                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                         [1U] >> 0x1bU)) 
                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                        [1U] >> 0x1cU)) 
                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                       [1U] >> 0x1eU))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__extendAction_up[1U] 
        = ((3U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__extendAction_up
            [1U]) | (4U & ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                              [1U] >> 0x19U) & ((~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [1U] 
                                                  >> 0x1cU)) 
                                                << 2U)) 
                            & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                   [1U] >> 0x1dU)) 
                               << 2U)) & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                              [1U] 
                                              >> 0x1fU)) 
                                          << 2U))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__forwardWhich[0U][0U] 
        = ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_writeNum_r_i) 
             == vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
             [0U][0U]) & (0U != vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
                          [0U][0U])) ? 0x40U : ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_writeNum_r_i) 
                                                  == 
                                                  vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
                                                  [0U]
                                                  [0U]) 
                                                 & (0U 
                                                    != 
                                                    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
                                                    [0U]
                                                    [0U]))
                                                 ? 0x20U
                                                 : 
                                                ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_writeNum_r_i) 
                                                   == 
                                                   vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
                                                   [0U]
                                                   [0U]) 
                                                  & (0U 
                                                     != 
                                                     vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
                                                     [0U]
                                                     [0U]))
                                                  ? 0x10U
                                                  : 
                                                 ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__EXE_up_writeNum_r_i) 
                                                    == 
                                                    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
                                                    [0U]
                                                    [0U]) 
                                                   & (0U 
                                                      != 
                                                      vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
                                                      [0U]
                                                      [0U]))
                                                   ? 8U
                                                   : 
                                                  ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_writeNum_r_i) 
                                                     == 
                                                     vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
                                                     [0U]
                                                     [0U]) 
                                                    & (0U 
                                                       != 
                                                       vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
                                                       [0U]
                                                       [0U]))
                                                    ? 4U
                                                    : 
                                                   ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_REEXE__DOT__SBA_writeNum_r_i) 
                                                      == 
                                                      vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
                                                      [0U]
                                                      [0U]) 
                                                     & (0U 
                                                        != 
                                                        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
                                                        [0U]
                                                        [0U]))
                                                     ? 2U
                                                     : 1U))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__forwardWhich[0U][1U] 
        = ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_writeNum_r_i) 
             == vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
             [0U][1U]) & (0U != vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
                          [0U][1U])) ? 0x40U : ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_writeNum_r_i) 
                                                  == 
                                                  vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
                                                  [0U]
                                                  [1U]) 
                                                 & (0U 
                                                    != 
                                                    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
                                                    [0U]
                                                    [1U]))
                                                 ? 0x20U
                                                 : 
                                                ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_writeNum_r_i) 
                                                   == 
                                                   vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
                                                   [0U]
                                                   [1U]) 
                                                  & (0U 
                                                     != 
                                                     vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
                                                     [0U]
                                                     [1U]))
                                                  ? 0x10U
                                                  : 
                                                 ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__EXE_up_writeNum_r_i) 
                                                    == 
                                                    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
                                                    [0U]
                                                    [1U]) 
                                                   & (0U 
                                                      != 
                                                      vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
                                                      [0U]
                                                      [1U]))
                                                   ? 8U
                                                   : 
                                                  ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_writeNum_r_i) 
                                                     == 
                                                     vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
                                                     [0U]
                                                     [1U]) 
                                                    & (0U 
                                                       != 
                                                       vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
                                                       [0U]
                                                       [1U]))
                                                    ? 4U
                                                    : 
                                                   ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_REEXE__DOT__SBA_writeNum_r_i) 
                                                      == 
                                                      vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
                                                      [0U]
                                                      [1U]) 
                                                     & (0U 
                                                        != 
                                                        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
                                                        [0U]
                                                        [1U]))
                                                     ? 2U
                                                     : 1U))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__forwardWhich[1U][0U] 
        = ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_writeNum_r_i) 
             == vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
             [1U][0U]) & (0U != vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
                          [1U][0U])) ? 0x40U : ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_writeNum_r_i) 
                                                  == 
                                                  vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
                                                  [1U]
                                                  [0U]) 
                                                 & (0U 
                                                    != 
                                                    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
                                                    [1U]
                                                    [0U]))
                                                 ? 0x20U
                                                 : 
                                                ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_writeNum_r_i) 
                                                   == 
                                                   vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
                                                   [1U]
                                                   [0U]) 
                                                  & (0U 
                                                     != 
                                                     vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
                                                     [1U]
                                                     [0U]))
                                                  ? 0x10U
                                                  : 
                                                 ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__EXE_up_writeNum_r_i) 
                                                    == 
                                                    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
                                                    [1U]
                                                    [0U]) 
                                                   & (0U 
                                                      != 
                                                      vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
                                                      [1U]
                                                      [0U]))
                                                   ? 8U
                                                   : 
                                                  ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_writeNum_r_i) 
                                                     == 
                                                     vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
                                                     [1U]
                                                     [0U]) 
                                                    & (0U 
                                                       != 
                                                       vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
                                                       [1U]
                                                       [0U]))
                                                    ? 4U
                                                    : 
                                                   ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_REEXE__DOT__SBA_writeNum_r_i) 
                                                      == 
                                                      vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
                                                      [1U]
                                                      [0U]) 
                                                     & (0U 
                                                        != 
                                                        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
                                                        [1U]
                                                        [0U]))
                                                     ? 2U
                                                     : 1U))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__forwardWhich[1U][1U] 
        = ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_writeNum_r_i) 
             == vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
             [1U][1U]) & (0U != vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
                          [1U][1U])) ? 0x40U : ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_writeNum_r_i) 
                                                  == 
                                                  vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
                                                  [1U]
                                                  [1U]) 
                                                 & (0U 
                                                    != 
                                                    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
                                                    [1U]
                                                    [1U]))
                                                 ? 0x20U
                                                 : 
                                                ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_writeNum_r_i) 
                                                   == 
                                                   vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
                                                   [1U]
                                                   [1U]) 
                                                  & (0U 
                                                     != 
                                                     vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
                                                     [1U]
                                                     [1U]))
                                                  ? 0x10U
                                                  : 
                                                 ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__EXE_up_writeNum_r_i) 
                                                    == 
                                                    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
                                                    [1U]
                                                    [1U]) 
                                                   & (0U 
                                                      != 
                                                      vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
                                                      [1U]
                                                      [1U]))
                                                   ? 8U
                                                   : 
                                                  ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_writeNum_r_i) 
                                                     == 
                                                     vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
                                                     [1U]
                                                     [1U]) 
                                                    & (0U 
                                                       != 
                                                       vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
                                                       [1U]
                                                       [1U]))
                                                    ? 4U
                                                    : 
                                                   ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_REEXE__DOT__SBA_writeNum_r_i) 
                                                      == 
                                                      vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
                                                      [1U]
                                                      [1U]) 
                                                     & (0U 
                                                        != 
                                                        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__readNum
                                                        [1U]
                                                        [1U]))
                                                     ? 2U
                                                     : 1U))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT____VdfgTmp_h3f83ab14__0 
        = ((0x20U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__timer)) 
           | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__mulr_data_ok));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__hit_write 
        = ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_req) 
           & ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__hit_run) 
              & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_wr)));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_data_ok 
        = ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_req) 
           & ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__hit_run) 
              | ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_hasException) 
                 | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__uca_ok))));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__data_cache_rvalid 
        = ((~ (5U & ((IData)(vlSelf->rid) >> 1U))) 
           & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__data_top_rvalid));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__data_uca_data_ok 
        = ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_req) 
           & ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_op)
               ? (IData)(((3U == (IData)(vlSelf->bid)) 
                          & (IData)(vlSelf->bvalid)))
               : (5U & (IData)(((2U == (0xbU & (IData)(vlSelf->rid))) 
                                & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__data_top_rvalid))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hce1a820f__0 
        = (IData)((0x40000000U == (0x60000000U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U])));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha5d6c34d__0 
        = (IData)((0xaU == (0xaU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U])));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hc48499de__0 
        = (IData)((0U == (0xaU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U])));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h6d906edd__0 
        = (IData)((2U == (0xaU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U])));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h022fd69a__0 
        = (IData)((0x30U == (0x30U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U])));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h50e190eb__0 
        = (IData)(((4U == (0xcU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U])) 
                   & (~ vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U])));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h75dca3a1__0 
        = (IData)((0x20U == (0x30U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U])));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hdf92d8a4__0 
        = (IData)((1U == (3U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U])));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h7436f760__0 
        = (IData)((8U == (0x18U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U])));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst[0U] 
        = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U];
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha3d54812__0 
        = (IData)((0x10U == (0x30U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U])));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hceb8dc60__0 
        = (1U & ((~ vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U]) 
                 & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                       >> 2U))));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hd592c80b__0 
        = (1U & ((~ vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U]) 
                 & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                       >> 1U))));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf093ce41__0 
        = (IData)((3U == (3U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U])));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h0b466653__0 
        = (IData)((0x80000000U == (0xe0000000U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U])));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hcb930240__0 
        = (IData)((0xc0000000U == (0xc0000000U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U])));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h6e645c84__0 
        = (IData)((1U == (5U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U])));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hc1abcfb8__0 
        = (1U & ((~ vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U]) 
                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
                    >> 1U)));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h6488fdb0__0 
        = (IData)((0U == (0x18U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U])));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb63957a8__0 
        = (IData)((0U == (0xc0000000U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U])));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h1e81b120__0 
        = (IData)((0xc000000U == (0xc000000U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U])));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hc44f26bc__0 
        = (IData)((0x4000000U == (0xc000000U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U])));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h4edbaf67__0 
        = (IData)((0x8000000U == (0xc000000U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U])));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hc371a6b6__0 
        = (IData)((0U == (0x60000000U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U])));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb5619a15__0 
        = (IData)((0x20000000U == (0x60000000U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U])));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h4b8bd1fe__0 
        = (IData)((0U == (0xc000000U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U])));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha714eec1__0 
        = (IData)((0x40000000U == (0x60000000U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U])));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h483837e4__0 
        = (IData)((1U == (3U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U])));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h4e008f50__0 
        = (IData)((8U == (0x18U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U])));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hbc2b0b10__0 
        = (1U & ((~ vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U]) 
                 & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                       >> 1U))));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hd5ace64e__0 
        = (IData)((3U == (3U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U])));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h4e0d7082__0 
        = (IData)((0x20U == (0x30U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U])));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__inst[1U] 
        = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U];
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h25080482__0 
        = (IData)((0xaU == (0xaU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U])));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h462294ca__0 
        = (IData)((0U == (0xaU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U])));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h4e9bd335__0 
        = (IData)((2U == (0xaU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U])));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h10dc5f6d__0 
        = (IData)((0x30U == (0x30U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U])));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hbdf419e9__0 
        = (1U & ((~ vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U]) 
                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                    >> 1U)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h6f570682__0 
        = (IData)(((4U == (0xcU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U])) 
                   & (~ vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U])));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h78edc999__0 
        = (IData)((0x10U == (0x30U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U])));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h10c0b07c__0 
        = (IData)((0x80000000U == (0xe0000000U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U])));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h4c3950eb__0 
        = (IData)((0U == (0x18U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U])));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hbc3713a9__0 
        = (1U & ((~ vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U]) 
                 & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
                       >> 2U))));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_heb0cf660__0 
        = (IData)((0xc0000000U == (0xc0000000U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U])));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h57732f0f__0 
        = (IData)((1U == (5U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U])));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h8e21ca34__0 
        = (IData)((0U == (0xc0000000U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U])));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h3b1dba2d__0 
        = (IData)((0xc000000U == (0xc000000U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U])));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha4671a3b__0 
        = (IData)((0x4000000U == (0xc000000U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U])));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h2a5c33a9__0 
        = (IData)((0x8000000U == (0xc000000U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U])));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha5731aee__0 
        = (IData)((0U == (0x60000000U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U])));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h90625e43__0 
        = (IData)((0x20000000U == (0x60000000U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U])));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h280ac462__0 
        = (IData)((0U == (0xc000000U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U])));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hff2dba59__0 
        = (((0U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat)) 
            & ((vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tag 
                == (0xfffffU & (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__3__KET____DOT__Data_TagV_TP__DOT__tagv_res 
                                >> 1U))) & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__3__KET____DOT__Data_TagV_TP__DOT__tagv_res)) 
           | ((1U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat)) 
              & ((vlSelf->mycpu_top__DOT__data_tag 
                  == (0xfffffU & (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__3__KET____DOT__Data_TagV_TP__DOT__tagv_res 
                                  >> 1U))) & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__3__KET____DOT__Data_TagV_TP__DOT__tagv_res)));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hbcee2671__0 
        = (((0U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat)) 
            & ((vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tag 
                == (0xfffffU & (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__2__KET____DOT__Data_TagV_TP__DOT__tagv_res 
                                >> 1U))) & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__2__KET____DOT__Data_TagV_TP__DOT__tagv_res)) 
           | ((1U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat)) 
              & ((vlSelf->mycpu_top__DOT__data_tag 
                  == (0xfffffU & (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__2__KET____DOT__Data_TagV_TP__DOT__tagv_res 
                                  >> 1U))) & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__2__KET____DOT__Data_TagV_TP__DOT__tagv_res)));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hdbf3ff4e__0 
        = (((0U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat)) 
            & ((vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tag 
                == (0xfffffU & (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__1__KET____DOT__Data_TagV_TP__DOT__tagv_res 
                                >> 1U))) & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__1__KET____DOT__Data_TagV_TP__DOT__tagv_res)) 
           | ((1U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat)) 
              & ((vlSelf->mycpu_top__DOT__data_tag 
                  == (0xfffffU & (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__1__KET____DOT__Data_TagV_TP__DOT__tagv_res 
                                  >> 1U))) & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__1__KET____DOT__Data_TagV_TP__DOT__tagv_res)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__is_pc_save 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_hasExceprion_w_o) 
           | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_eret_r_i));
    vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_hasException_w_o 
        = ((IData)(vlSelf->mycpu_top__DOT__data_hasException) 
           | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_hasException_r_i) 
              | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_isInterrupt_w_o)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_hasRisk_w_o 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_exceptionRisk_r_i) 
           | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_isInterrupt_w_o));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__inst_uca_addr_ok 
        = ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__inst_uca_req) 
           & ((~ (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__last_req)) 
              | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__inst_uca_data_ok)));
    vlSelf->mycpu_top__DOT__inst_data_ok = ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_req) 
                                            & ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__hit_run) 
                                               | ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__inst_uca_data_ok) 
                                                  | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_hasException))));
    if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_memReq_r_i) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__writeData[1U] 
            = (((- (IData)((IData)((0U != (3U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_loadSel_r_i)))))) 
                & (((- (IData)((1U & (((0U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_alignCheck_r_i))
                                        ? (mycpu_top__DOT__data_rdata 
                                           >> 7U) : 
                                       ((1U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_alignCheck_r_i))
                                         ? (mycpu_top__DOT__data_rdata 
                                            >> 0xfU)
                                         : ((2U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_alignCheck_r_i))
                                             ? (mycpu_top__DOT__data_rdata 
                                                >> 0x17U)
                                             : (mycpu_top__DOT__data_rdata 
                                                >> 0x1fU)))) 
                                      & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_loadSel_r_i))))) 
                    << 8U) | (0xffU & ((0U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_alignCheck_r_i))
                                        ? mycpu_top__DOT__data_rdata
                                        : ((1U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_alignCheck_r_i))
                                            ? (mycpu_top__DOT__data_rdata 
                                               >> 8U)
                                            : ((2U 
                                                == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_alignCheck_r_i))
                                                ? (mycpu_top__DOT__data_rdata 
                                                   >> 0x10U)
                                                : (mycpu_top__DOT__data_rdata 
                                                   >> 0x18U))))))) 
               | (((- (IData)((IData)((0U != (0xcU 
                                              & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_loadSel_r_i)))))) 
                   & (((- (IData)((1U & (((0U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_alignCheck_r_i))
                                           ? (mycpu_top__DOT__data_rdata 
                                              >> 0xfU)
                                           : (mycpu_top__DOT__data_rdata 
                                              >> 0x1fU)) 
                                         & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_loadSel_r_i) 
                                            >> 2U))))) 
                       << 0x10U) | (0xffffU & ((0U 
                                                == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_alignCheck_r_i))
                                                ? mycpu_top__DOT__data_rdata
                                                : (mycpu_top__DOT__data_rdata 
                                                   >> 0x10U))))) 
                  | (((- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_loadSel_r_i) 
                                        >> 4U)))) & mycpu_top__DOT__data_rdata) 
                     | (((- (IData)((IData)((0U != 
                                             (0x700U 
                                              & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_loadSel_r_i)))))) 
                         & ((0x100U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_loadSel_r_i))
                             ? ((mycpu_top__DOT__data_rdata 
                                 << 0x18U) | (0xffffffU 
                                              & vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_rtData_r_i))
                             : ((0x200U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_loadSel_r_i))
                                 ? ((mycpu_top__DOT__data_rdata 
                                     << 0x10U) | (0xffffU 
                                                  & vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_rtData_r_i))
                                 : ((mycpu_top__DOT__data_rdata 
                                     << 8U) | (0xffU 
                                               & vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_rtData_r_i))))) 
                        | ((- (IData)((IData)((0U != 
                                               (0xe0U 
                                                & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_loadSel_r_i)))))) 
                           & ((0x80U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_loadSel_r_i))
                               ? ((0xffffff00U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_rtData_r_i) 
                                  | (mycpu_top__DOT__data_rdata 
                                     >> 0x18U)) : (
                                                   (0x40U 
                                                    & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_loadSel_r_i))
                                                    ? 
                                                   ((0xffff0000U 
                                                     & vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_rtData_r_i) 
                                                    | (mycpu_top__DOT__data_rdata 
                                                       >> 0x10U))
                                                    : 
                                                   ((0xff000000U 
                                                     & vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_rtData_r_i) 
                                                    | (mycpu_top__DOT__data_rdata 
                                                       >> 8U)))))))));
        vlSelf->mycpu_top__DOT__u_Main__DOT__WB_finalRes_w_o 
            = (((- (IData)((IData)((0U != (3U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_loadSel_r_i)))))) 
                & (((- (IData)((1U & (((0U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_alignCheck_r_i))
                                        ? (mycpu_top__DOT__data_rdata 
                                           >> 7U) : 
                                       ((1U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_alignCheck_r_i))
                                         ? (mycpu_top__DOT__data_rdata 
                                            >> 0xfU)
                                         : ((2U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_alignCheck_r_i))
                                             ? (mycpu_top__DOT__data_rdata 
                                                >> 0x17U)
                                             : (mycpu_top__DOT__data_rdata 
                                                >> 0x1fU)))) 
                                      & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_loadSel_r_i))))) 
                    << 8U) | (0xffU & ((0U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_alignCheck_r_i))
                                        ? mycpu_top__DOT__data_rdata
                                        : ((1U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_alignCheck_r_i))
                                            ? (mycpu_top__DOT__data_rdata 
                                               >> 8U)
                                            : ((2U 
                                                == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_alignCheck_r_i))
                                                ? (mycpu_top__DOT__data_rdata 
                                                   >> 0x10U)
                                                : (mycpu_top__DOT__data_rdata 
                                                   >> 0x18U))))))) 
               | (((- (IData)((IData)((0U != (0xcU 
                                              & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_loadSel_r_i)))))) 
                   & (((- (IData)((1U & (((0U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_alignCheck_r_i))
                                           ? (mycpu_top__DOT__data_rdata 
                                              >> 0xfU)
                                           : (mycpu_top__DOT__data_rdata 
                                              >> 0x1fU)) 
                                         & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_loadSel_r_i) 
                                            >> 2U))))) 
                       << 0x10U) | (0xffffU & ((0U 
                                                == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_alignCheck_r_i))
                                                ? mycpu_top__DOT__data_rdata
                                                : (mycpu_top__DOT__data_rdata 
                                                   >> 0x10U))))) 
                  | (((- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_loadSel_r_i) 
                                        >> 4U)))) & mycpu_top__DOT__data_rdata) 
                     | (((- (IData)((IData)((0U != 
                                             (0x700U 
                                              & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_loadSel_r_i)))))) 
                         & ((0x100U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_loadSel_r_i))
                             ? ((mycpu_top__DOT__data_rdata 
                                 << 0x18U) | (0xffffffU 
                                              & vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_rtData_r_i))
                             : ((0x200U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_loadSel_r_i))
                                 ? ((mycpu_top__DOT__data_rdata 
                                     << 0x10U) | (0xffffU 
                                                  & vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_rtData_r_i))
                                 : ((mycpu_top__DOT__data_rdata 
                                     << 8U) | (0xffU 
                                               & vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_rtData_r_i))))) 
                        | ((- (IData)((IData)((0U != 
                                               (0xe0U 
                                                & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_loadSel_r_i)))))) 
                           & ((0x80U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_loadSel_r_i))
                               ? ((0xffffff00U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_rtData_r_i) 
                                  | (mycpu_top__DOT__data_rdata 
                                     >> 0x18U)) : (
                                                   (0x40U 
                                                    & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_loadSel_r_i))
                                                    ? 
                                                   ((0xffff0000U 
                                                     & vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_rtData_r_i) 
                                                    | (mycpu_top__DOT__data_rdata 
                                                       >> 0x10U))
                                                    : 
                                                   ((0xff000000U 
                                                     & vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_rtData_r_i) 
                                                    | (mycpu_top__DOT__data_rdata 
                                                       >> 8U)))))))));
        vlSelf->mycpu_top__DOT__u_Main__DOT__WB_forwardData_w_o 
            = mycpu_top__DOT__data_rdata;
    } else {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__writeData[1U] 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_finalRes_r_i;
        vlSelf->mycpu_top__DOT__u_Main__DOT__WB_finalRes_w_o 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_finalRes_r_i;
        vlSelf->mycpu_top__DOT__u_Main__DOT__WB_forwardData_w_o 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_finalRes_r_i;
    }
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__isRsFull[0U] 
        = (0x1fU == (0x1fU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__inst_p[0U] 
                              >> 0x15U)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__isRsFull[1U] 
        = (0x1fU == (0x1fU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__inst_p[1U] 
                              >> 0x15U)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__isRsFull[2U] 
        = (0x1fU == (0x1fU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__inst_p[2U] 
                              >> 0x15U)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__isRsFull[3U] 
        = (0x1fU == (0x1fU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__inst_p[3U] 
                              >> 0x15U)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst[0U] 
        = vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__inst_p[0U];
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst[1U] 
        = vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__inst_p[1U];
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst[2U] 
        = vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__inst_p[2U];
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst[3U] 
        = vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__inst_p[3U];
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
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__reminder_o 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__reminder_sign_r)
            ? ((IData)(1U) + (~ (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__minuend_back 
                                         >> 0x20U))))
            : (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__minuend_back 
                       >> 0x20U)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__quotient_o 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__quotient_sign_r)
            ? ((IData)(1U) + (~ vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__quotient_temp))
            : vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__quotient_temp);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__mulRes 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__isAccumlate_r)
            ? (((QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__adder_u__DOT__add_sub_res)) 
                << 0x20U) | (QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__adderRes)))
            : (((QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__Multiplier_u__DOT__seg1[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__Multiplier_u__DOT__seg1[0U]))));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h10ebbef4__0 
        = ((~ (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                       >> 0x1dU))) & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h82451ab9__0));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sta_hit_way 
        = (((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_h381d158a__0) 
            << 3U) | (((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_h3f7273e8__0) 
                       << 2U) | (((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____VdfgTmp_h65ec07f2__0) 
                                  << 1U) | (((0U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat)) 
                                             & ((vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tag 
                                                 == 
                                                 (0xfffffU 
                                                  & (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__0__KET____DOT__Inst_TagV_TP__DOT__tagv_res 
                                                     >> 1U))) 
                                                & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__0__KET____DOT__Inst_TagV_TP__DOT__tagv_res)) 
                                            | ((1U 
                                                == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat)) 
                                               & ((vlSelf->mycpu_top__DOT__inst_tag 
                                                   == 
                                                   (0xfffffU 
                                                    & (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__0__KET____DOT__Inst_TagV_TP__DOT__tagv_res 
                                                       >> 1U))) 
                                                  & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__0__KET____DOT__Inst_TagV_TP__DOT__tagv_res))))));
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
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h40f69812__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_hed973b3c__0) 
           & ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__PCR_needDelaySlot_o)) 
              & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__PCR_instEnable_o) 
                 >> 2U)));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h8a6ec0f0__0 
        = ((~ (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                       >> 0x3dU))) & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hf012ca80__0));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hc2e9df91__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hf012ca80__0) 
           & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                      >> 0x3dU)));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hc87b876a__0 
        = ((~ (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                       >> 0x3dU))) & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hae2810fa__0));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h5716c7f6__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hae2810fa__0) 
           & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                      >> 0x3dU)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__hasForward[0U] 
        = ((2U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__hasForward
            [0U]) | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__writeEnable) 
                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__writeNum
                        [0U] == vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__readNum
                        [0U])));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__hasForward[0U] 
        = ((1U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__hasForward
            [0U]) | (0xfffffffeU & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__writeEnable) 
                                    & ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__writeNum
                                        [1U] == vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__readNum
                                        [0U]) << 1U))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__hasForward[1U] 
        = ((2U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__hasForward
            [1U]) | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__writeEnable) 
                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__writeNum
                        [0U] == vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__readNum
                        [1U])));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__hasForward[1U] 
        = ((1U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__hasForward
            [1U]) | (0xfffffffeU & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__writeEnable) 
                                    & ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__writeNum
                                        [1U] == vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__readNum
                                        [1U]) << 1U))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__hasForward[2U] 
        = ((2U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__hasForward
            [2U]) | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__writeEnable) 
                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__writeNum
                        [0U] == vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__readNum
                        [2U])));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__hasForward[2U] 
        = ((1U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__hasForward
            [2U]) | (0xfffffffeU & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__writeEnable) 
                                    & ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__writeNum
                                        [1U] == vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__readNum
                                        [2U]) << 1U))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__hasForward[3U] 
        = ((2U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__hasForward
            [3U]) | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__writeEnable) 
                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__writeNum
                        [0U] == vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__readNum
                        [3U])));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__hasForward[3U] 
        = ((1U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__hasForward
            [3U]) | (0xfffffffeU & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__writeEnable) 
                                    & ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__writeNum
                                        [1U] == vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__readNum
                                        [3U]) << 1U))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h03f81cc8__0 
        = ((~ (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                       >> 0x3dU))) & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h77a98698__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h4ed98483__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h77a98698__0) 
           & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                      >> 0x3dU)));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h83209bf5__0 
        = ((~ (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                       >> 0x3dU))) & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hf6d10583__0));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hb66b3991__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hf6d10583__0) 
           & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                      >> 0x3dU)));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h7c5d4f22__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_heddc22ab__0) 
           & ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__PCR_needDelaySlot_o)) 
              & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__PCR_instEnable_o) 
                 >> 1U)));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hb94d6dcf__0 
        = ((~ (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                       >> 0x3dU))) & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hbd36779d__0));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hb67f0d8d__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hbd36779d__0) 
           & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                      >> 0x3dU)));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h8d320ccd__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h7ca81ed0__0) 
           & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                      >> 0x3dU)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hfefbb480__0 
        = ((~ (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                       >> 0x3dU))) & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h7ca81ed0__0));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT____VdfgTmp_hddbd0299__0 
        = (8U | (0xfffffff3U & __VdfgTmp_h1b0bcfea__0));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT____VdfgTmp_hd7683b01__0 
        = (0xcU | (0xfffffff3U & __VdfgTmp_h1b0bcfea__0));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT____VdfgTmp_hcedc22ac__0 
        = (4U | ((((IData)(1U) + (__VdfgTmp_h1b0bcfea__0 
                                  >> 4U)) << 4U) | 
                 (3U & __VdfgTmp_h1b0bcfea__0)));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT____VdfgTmp_h8dd29e80__0 
        = (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__0__KET____DOT__btbReg
           [(0xffU & (__VdfgTmp_h1b0bcfea__0 >> 4U))] 
           << 2U);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__BTB_fifthVAddr_o 
        = ((((IData)(1U) + (__VdfgTmp_h1b0bcfea__0 
                            >> 4U)) << 4U) | (3U & __VdfgTmp_h1b0bcfea__0));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_heddd41c6__0 
        = ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__0__KET____DOT__btbTag
            [(0xffU & (__VdfgTmp_h1b0bcfea__0 >> 4U))] 
            == (0xffU & (__VdfgTmp_h1b0bcfea__0 >> 0xcU))) 
           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__0__KET____DOT__btbValid[
              (7U & (__VdfgTmp_h1b0bcfea__0 >> 9U))] 
              >> (0x1fU & (__VdfgTmp_h1b0bcfea__0 >> 4U))));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h24ce65c0__0 
        = ((~ (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                       >> 0x1dU))) & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h7660f3c5__0));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hee235b88__0 
        = ((~ (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                       >> 0x3dU))) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h8bd045d8__0));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_heeba4413__0 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h8bd045d8__0) 
           & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                      >> 0x3dU)));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hd4059e60__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h6cd1d5c1__0) 
           & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                      >> 0x3dU)));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h0921cbb3__0 
        = ((~ (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                       >> 0x3dU))) & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h6cd1d5c1__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT____Vcellout__ImmExtender_up__extendedRes 
        = ((1U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__extendAction_up
            [0U]) ? (0xffffU & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i))
            : ((2U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__extendAction_up
                [0U]) ? (((- (IData)((1U & (IData)(
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                                                    >> 0xfU))))) 
                          << 0x10U) | (0xffffU & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i)))
                : (0x3ffffffU & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MDU_writeEnable 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT____VdfgTmp_h3f83ab14__0)
            ? 3U : ((2U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_writeHiLo_r_i) 
                           << 1U)) | (1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_writeHiLo_r_i)))));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h077415b1__0 
        = ((- (IData)(((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__hit_way) 
                       & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__hit_write)))) 
           & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__write_wstrb);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h6053820f__0 
        = ((- (IData)((((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__hit_way) 
                        >> 1U) & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__hit_write)))) 
           & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__write_wstrb);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_ha774a041__0 
        = ((- (IData)((((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__hit_way) 
                        >> 2U) & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__hit_write)))) 
           & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__write_wstrb);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h4d0fc773__0 
        = ((- (IData)((((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__hit_way) 
                        >> 3U) & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__hit_write)))) 
           & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__write_wstrb);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__data_uca_addr_ok 
        = ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__data_uca_req) 
           & ((~ (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_req)) 
              | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__data_uca_data_ok)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hc845c7be__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
               >> 4U)) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha5d6c34d__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_habf7f129__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
               >> 4U)) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hc48499de__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h0083ac2e__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
               >> 4U)) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h6d906edd__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h1f528a5c__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
               >> 4U)) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h50e190eb__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hed3f0af1__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
               >> 3U)) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h75dca3a1__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h84867858__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
               >> 2U)) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hdf92d8a4__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h926343be__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
               >> 3U)) & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hceb8dc60__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h06f719c1__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hceb8dc60__0) 
           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
              >> 3U));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h6acd382a__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hd592c80b__0) 
           & (IData)((0U == (0xcU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U]))));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h75850dfd__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
               >> 2U)) & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf093ce41__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf2b7c392__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
               >> 3U)) & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h6e645c84__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb30f954a__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h6e645c84__0) 
           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
              >> 3U));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha27d0374__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
               >> 2U)) & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hc1abcfb8__0));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h9eb4b5eb__0 
        = ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
            >> 2U) & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h6488fdb0__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h0d1c9145__0 
        = ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
            >> 0x1dU) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb63957a8__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h0a374724__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
               >> 0x1dU)) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb63957a8__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h6c0adfc7__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h1e81b120__0) 
           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
              >> 0x1cU));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha738a093__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
               >> 0x1cU)) & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h1e81b120__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h7f6c215a__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hc44f26bc__0) 
           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
              >> 0x1cU));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hfd0a5637__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
               >> 0x1cU)) & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hc44f26bc__0));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h769eaeec__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
               >> 0x1cU)) & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h4edbaf67__0));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hff1ab896__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h4edbaf67__0) 
           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
              >> 0x1cU));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hd0ab33ad__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h4b8bd1fe__0) 
           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
              >> 0x1cU));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h724e8175__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
               >> 0x1cU)) & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h4b8bd1fe__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h0921d919__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
               >> 2U)) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h483837e4__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_he3742997__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hbc2b0b10__0) 
           & (IData)((0U == (0xcU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U]))));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h7c968ba3__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
               >> 2U)) & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hd5ace64e__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hfa2553f2__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
               >> 3U)) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h4e0d7082__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h24167555__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
               >> 4U)) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h25080482__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h03f0e69d__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
               >> 4U)) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h462294ca__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hfa6ba428__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
               >> 4U)) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h4e9bd335__0));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h935dc71e__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
               >> 2U)) & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hbdf419e9__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hdaa77755__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
               >> 4U)) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h6f570682__0));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hd1595329__0 
        = ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
            >> 2U) & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h4c3950eb__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h8c0ff0cb__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
               >> 3U)) & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hbc3713a9__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h70504f38__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hbc3713a9__0) 
           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
              >> 3U));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf1c3146d__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
               >> 3U)) & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h57732f0f__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hd6ade43c__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h57732f0f__0) 
           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
              >> 3U));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h54aa4cc2__0 
        = ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
            >> 0x1dU) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h8e21ca34__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h1299a1b1__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
               >> 0x1dU)) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h8e21ca34__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h5be28400__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h3b1dba2d__0) 
           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
              >> 0x1cU));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h66e998e2__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
               >> 0x1cU)) & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h3b1dba2d__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h5ec9a396__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha4671a3b__0) 
           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
              >> 0x1cU));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hfc3378fc__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
               >> 0x1cU)) & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha4671a3b__0));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h7628166e__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
               >> 0x1cU)) & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h2a5c33a9__0));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h5fb10c29__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h2a5c33a9__0) 
           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
              >> 0x1cU));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h1dc89079__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h280ac462__0) 
           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
              >> 0x1cU));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h7bd68717__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
               >> 0x1cU)) & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h280ac462__0));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_hit_way 
        = (((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hff2dba59__0) 
            << 3U) | (((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hbcee2671__0) 
                       << 2U) | (((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hdbf3ff4e__0) 
                                  << 1U) | (((0U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat)) 
                                             & ((vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tag 
                                                 == 
                                                 (0xfffffU 
                                                  & (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__0__KET____DOT__Data_TagV_TP__DOT__tagv_res 
                                                     >> 1U))) 
                                                & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__0__KET____DOT__Data_TagV_TP__DOT__tagv_res)) 
                                            | ((1U 
                                                == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat)) 
                                               & ((vlSelf->mycpu_top__DOT__data_tag 
                                                   == 
                                                   (0xfffffU 
                                                    & (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__0__KET____DOT__Data_TagV_TP__DOT__tagv_res 
                                                       >> 1U))) 
                                                  & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__0__KET____DOT__Data_TagV_TP__DOT__tagv_res))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT____VdfgTmp_hf5108738__0 
        = (1U & ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_exceptionRisk_r_i)) 
                 & (~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_hasRisk_w_o))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__ready 
        = (1U & (~ ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_hasRisk_w_o) 
                    & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__EXE_up_repairAction_r_i) 
                       >> 7U))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__SBA_flush_w_o 
        = (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_hasRisk_w_o)) 
            & (~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__had_branch_flush))) 
           & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__EXE_up_repairAction_r_i) 
              >> 7U));
    vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_hasRisk_w_o 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_exceptionRisk_r_i) 
           | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_up_branchRisk_r_i) 
              | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_hasRisk_w_o)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_allowin_w_o 
        = (1U & ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_SecondCacheTrace__DOT__hasData)) 
                 | (IData)(vlSelf->mycpu_top__DOT__inst_data_ok)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_valid_o 
        = ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_SecondCacheTrace__DOT__SCT_isCanceled_o)) 
           & (IData)(vlSelf->mycpu_top__DOT__inst_data_ok));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__updataRegFile_up[0U] 
        = (((- (IData)((1U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_forwardSel0_r_i)))) 
            & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_readData_r_i)) 
           | (((- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_forwardSel0_r_i) 
                                 >> 3U)))) & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__SBA_aluRes_r_i) 
              | (((- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_forwardSel0_r_i) 
                                    >> 4U)))) & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__PREMEM_preliminaryRes_r_i) 
                 | (((- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_forwardSel0_r_i) 
                                       >> 1U)))) & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__REEXE_regData_r_i) 
                    | (((- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_forwardSel0_r_i) 
                                          >> 2U)))) 
                        & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__genblk2__BRA__0__KET____DOT__useSavedWb)
                            ? vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__genblk2__BRA__0__KET____DOT__wb_savedData
                            : vlSelf->mycpu_top__DOT__u_Main__DOT__WB_forwardData_w_o)) 
                       | (((- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_forwardSel0_r_i) 
                                             >> 5U)))) 
                           & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__EXE_up_aluRes_r_i) 
                          | ((- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_forwardSel0_r_i) 
                                               >> 6U)))) 
                             & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__EXE_down_aluRes_r_i)))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__updataRegFile_up[1U] 
        = (((- (IData)((1U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_forwardSel1_r_i)))) 
            & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_readData_r_i 
                       >> 0x20U))) | (((- (IData)((1U 
                                                   & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_forwardSel1_r_i) 
                                                      >> 3U)))) 
                                       & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__SBA_aluRes_r_i) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_forwardSel1_r_i) 
                                                         >> 4U)))) 
                                          & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__PREMEM_preliminaryRes_r_i) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_forwardSel1_r_i) 
                                                            >> 1U)))) 
                                             & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__REEXE_regData_r_i) 
                                            | (((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_forwardSel1_r_i) 
                                                               >> 2U)))) 
                                                & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__genblk2__BRA__1__KET____DOT__useSavedWb)
                                                    ? vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__genblk2__BRA__1__KET____DOT__wb_savedData
                                                    : vlSelf->mycpu_top__DOT__u_Main__DOT__WB_forwardData_w_o)) 
                                               | (((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_forwardSel1_r_i) 
                                                                  >> 5U)))) 
                                                   & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__EXE_up_aluRes_r_i) 
                                                  | ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_forwardSel1_r_i) 
                                                                    >> 6U)))) 
                                                     & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__EXE_down_aluRes_r_i)))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT____VdfgTmp_h6d3044db__0 
        = (((- (IData)((1U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_forwardSel1_r_i)))) 
            & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_readData_r_i 
                       >> 0x20U))) | (((- (IData)((1U 
                                                   & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_forwardSel1_r_i) 
                                                      >> 3U)))) 
                                       & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__SBA_aluRes_r_i) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_forwardSel1_r_i) 
                                                         >> 4U)))) 
                                          & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__PREMEM_preliminaryRes_r_i) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_forwardSel1_r_i) 
                                                            >> 1U)))) 
                                             & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__REEXE_regData_r_i) 
                                            | (((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_forwardSel1_r_i) 
                                                               >> 2U)))) 
                                                & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__genblk2__BRA__1__KET____DOT__useSavedWb)
                                                    ? vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__genblk2__BRA__1__KET____DOT__wb_savedData
                                                    : vlSelf->mycpu_top__DOT__u_Main__DOT__WB_forwardData_w_o)) 
                                               | (((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_forwardSel1_r_i) 
                                                                  >> 5U)))) 
                                                   & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__EXE_up_aluRes_r_i) 
                                                  | ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_forwardSel1_r_i) 
                                                                    >> 6U)))) 
                                                     & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__EXE_down_aluRes_r_i)))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT____VdfgTmp_hf18ea45d__0 
        = (((- (IData)((1U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_forwardSel0_r_i)))) 
            & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_readData_r_i)) 
           | (((- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_forwardSel0_r_i) 
                                 >> 3U)))) & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__SBA_aluRes_r_i) 
              | (((- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_forwardSel0_r_i) 
                                    >> 4U)))) & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__PREMEM_preliminaryRes_r_i) 
                 | (((- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_forwardSel0_r_i) 
                                       >> 1U)))) & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__REEXE_regData_r_i) 
                    | (((- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_forwardSel0_r_i) 
                                          >> 2U)))) 
                        & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__genblk2__BRA__0__KET____DOT__useSavedWb)
                            ? vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__genblk2__BRA__0__KET____DOT__wb_savedData
                            : vlSelf->mycpu_top__DOT__u_Main__DOT__WB_forwardData_w_o)) 
                       | (((- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_forwardSel0_r_i) 
                                             >> 5U)))) 
                           & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__EXE_up_aluRes_r_i) 
                          | ((- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_forwardSel0_r_i) 
                                               >> 6U)))) 
                             & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__EXE_down_aluRes_r_i)))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__divisor_i 
        = (((- (IData)((1U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_forwardSel1_r_i)))) 
            & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_readData_r_i 
                       >> 0x20U))) | (((- (IData)((1U 
                                                   & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_forwardSel1_r_i) 
                                                      >> 3U)))) 
                                       & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__SBA_aluRes_r_i) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_forwardSel1_r_i) 
                                                         >> 4U)))) 
                                          & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__PREMEM_preliminaryRes_r_i) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_forwardSel1_r_i) 
                                                            >> 1U)))) 
                                             & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__REEXE_regData_r_i) 
                                            | (((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_forwardSel1_r_i) 
                                                               >> 2U)))) 
                                                & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__genblk2__BRA__1__KET____DOT__useSavedWb)
                                                    ? vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__genblk2__BRA__1__KET____DOT__wb_savedData
                                                    : vlSelf->mycpu_top__DOT__u_Main__DOT__WB_forwardData_w_o)) 
                                               | (((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_forwardSel1_r_i) 
                                                                  >> 5U)))) 
                                                   & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__EXE_up_aluRes_r_i) 
                                                  | ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_forwardSel1_r_i) 
                                                                    >> 6U)))) 
                                                     & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__EXE_down_aluRes_r_i)))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__divident_i 
        = (((- (IData)((1U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_forwardSel0_r_i)))) 
            & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_readData_r_i)) 
           | (((- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_forwardSel0_r_i) 
                                 >> 3U)))) & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__SBA_aluRes_r_i) 
              | (((- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_forwardSel0_r_i) 
                                    >> 4U)))) & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__PREMEM_preliminaryRes_r_i) 
                 | (((- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_forwardSel0_r_i) 
                                       >> 1U)))) & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__REEXE_regData_r_i) 
                    | (((- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_forwardSel0_r_i) 
                                          >> 2U)))) 
                        & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__genblk2__BRA__0__KET____DOT__useSavedWb)
                            ? vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__genblk2__BRA__0__KET____DOT__wb_savedData
                            : vlSelf->mycpu_top__DOT__u_Main__DOT__WB_forwardData_w_o)) 
                       | (((- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_forwardSel0_r_i) 
                                             >> 5U)))) 
                           & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__EXE_up_aluRes_r_i) 
                          | ((- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_forwardSel0_r_i) 
                                               >> 6U)))) 
                             & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__EXE_down_aluRes_r_i)))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m[0U] 
        = ((0x1eU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
            [0U]) | (1U & ((((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                  [0U] >> 0x1aU) & 
                                 (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                     [0U] >> 0x1bU))) 
                                & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                      [0U] >> 0x1cU))) 
                               & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                     [0U] >> 0x1dU))) 
                              & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                    [0U] >> 0x1eU))) 
                             & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                   [0U] >> 0x1fU))) 
                            & ((((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                      [0U] >> 0x10U) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [0U] >> 0x11U))) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                          [0U] >> 0x12U))) 
                                   & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                         [0U] >> 0x13U))) 
                                  & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                        [0U] >> 0x14U))) 
                                 | (((((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [0U] >> 0x10U)) 
                                       & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                             [0U] >> 0x11U))) 
                                      & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [0U] >> 0x12U))) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [0U] >> 0x13U))) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                          [0U] >> 0x14U)))) 
                                | (((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                       [0U] >> 0x10U) 
                                      & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [0U] >> 0x11U))) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [0U] >> 0x12U))) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                          [0U] >> 0x13U))) 
                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                      [0U] >> 0x14U))) 
                               | (((((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                         [0U] >> 0x10U)) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [0U] >> 0x11U))) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                          [0U] >> 0x12U))) 
                                   & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                         [0U] >> 0x13U))) 
                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                     [0U] >> 0x14U)))) 
                           | ((~ ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                       [0U] >> 0x1aU) 
                                      & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [0U] >> 0x1bU))) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [0U] >> 0x1cU))) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                          [0U] >> 0x1dU))) 
                                   & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                         [0U] >> 0x1eU))) 
                                  & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                        [0U] >> 0x1fU)))) 
                              & (((((((((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [0U] >> 0x1aU)) 
                                        & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                              [0U] 
                                              >> 0x1bU))) 
                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                          [0U] >> 0x1cU)) 
                                      & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [0U] >> 0x1dU))) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [0U] >> 0x1eU))) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                          [0U] >> 0x1fU))) 
                                   | ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [0U] >> 0x1aU) 
                                          & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                [0U] 
                                                >> 0x1bU))) 
                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [0U] >> 0x1cU)) 
                                        & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                              [0U] 
                                              >> 0x1dU))) 
                                       & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                             [0U] >> 0x1eU))) 
                                      & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [0U] >> 0x1fU)))) 
                                  | ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                          [0U] >> 0x1aU) 
                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [0U] >> 0x1bU)) 
                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [0U] >> 0x1cU)) 
                                       & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                             [0U] >> 0x1dU))) 
                                      & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [0U] >> 0x1eU))) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [0U] >> 0x1fU)))) 
                                 | ((((((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [0U] >> 0x1aU)) 
                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [0U] >> 0x1bU)) 
                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                          [0U] >> 0x1cU)) 
                                      & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [0U] >> 0x1dU))) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [0U] >> 0x1eU))) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                          [0U] >> 0x1fU))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m[0U] 
        = ((0x1dU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
            [0U]) | (2U & ((0x3ffffffeU & ((((((((~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                   [0U] 
                                                   >> 0x1aU)) 
                                                 & (~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                     [0U] 
                                                     >> 0x1bU))) 
                                                & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [0U] 
                                                    >> 0x1cU))) 
                                               & (~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                   [0U] 
                                                   >> 0x1dU))) 
                                              & (~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                  [0U] 
                                                  >> 0x1eU))) 
                                             & (~ (
                                                   vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                   [0U] 
                                                   >> 0x1fU))) 
                                            << 1U) 
                                           & ((((((((~ 
                                                     vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                     [0U]) 
                                                    & (~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [0U] 
                                                        >> 1U))) 
                                                   & (~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [0U] 
                                                       >> 2U))) 
                                                  << 1U) 
                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [0U] 
                                                    >> 2U)) 
                                                & ((~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                     [0U] 
                                                     >> 4U)) 
                                                   << 1U)) 
                                               & ((~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [0U] 
                                                    >> 5U)) 
                                                  << 1U)) 
                                              | ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [0U] 
                                                      & (~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [0U] 
                                                          >> 1U))) 
                                                     & (~ 
                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                         [0U] 
                                                         >> 2U))) 
                                                    << 1U) 
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [0U] 
                                                      >> 2U)) 
                                                  & ((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [0U] 
                                                       >> 4U)) 
                                                     << 1U)) 
                                                 & ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [0U] 
                                                      >> 5U)) 
                                                    << 1U))))) 
                           | (0x3eU & (((~ ((((((~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                  [0U] 
                                                  >> 0x1aU)) 
                                                & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [0U] 
                                                    >> 0x1bU))) 
                                               & (~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                   [0U] 
                                                   >> 0x1cU))) 
                                              & (~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                  [0U] 
                                                  >> 0x1dU))) 
                                             & (~ (
                                                   vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                   [0U] 
                                                   >> 0x1eU))) 
                                            & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                  [0U] 
                                                  >> 0x1fU)))) 
                                        << 1U) & ((
                                                   ((((((~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [0U] 
                                                          >> 0x1aU)) 
                                                        << 1U) 
                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [0U] 
                                                          >> 0x1aU)) 
                                                      & ((~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                           [0U] 
                                                           >> 0x1cU)) 
                                                         << 1U)) 
                                                     & ((~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [0U] 
                                                          >> 0x1dU)) 
                                                        << 1U)) 
                                                    & ((~ 
                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                         [0U] 
                                                         >> 0x1eU)) 
                                                       << 1U)) 
                                                   & ((~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [0U] 
                                                        >> 0x1fU)) 
                                                      << 1U)) 
                                                  | ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [0U] 
                                                          >> 0x19U) 
                                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                            [0U] 
                                                            >> 0x1aU)) 
                                                        & ((~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                             [0U] 
                                                             >> 0x1cU)) 
                                                           << 1U)) 
                                                       & ((~ 
                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                            [0U] 
                                                            >> 0x1dU)) 
                                                          << 1U)) 
                                                      & ((~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                           [0U] 
                                                           >> 0x1eU)) 
                                                         << 1U)) 
                                                     & ((~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [0U] 
                                                          >> 0x1fU)) 
                                                        << 1U))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m[0U] 
        = ((0x1bU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
            [0U]) | (4U & ((0xfcU & (((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [0U] >> 0x18U) 
                                          & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                 [0U] 
                                                 >> 0x1bU)) 
                                             << 2U)) 
                                         & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                [0U] 
                                                >> 0x1cU)) 
                                            << 2U)) 
                                        & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                               [0U] 
                                               >> 0x1dU)) 
                                           << 2U)) 
                                       & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                              [0U] 
                                              >> 0x1eU)) 
                                          << 2U)) & 
                                      ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [0U] >> 0x1fU)) 
                                       << 2U)) & ((0x3fffcU 
                                                   & (((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [0U] 
                                                          >> 0xeU) 
                                                         & ((~ 
                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                              [0U] 
                                                              >> 0x11U)) 
                                                            << 2U)) 
                                                        & ((~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                             [0U] 
                                                             >> 0x12U)) 
                                                           << 2U)) 
                                                       & ((~ 
                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                            [0U] 
                                                            >> 0x13U)) 
                                                          << 2U)) 
                                                      & ((~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                           [0U] 
                                                           >> 0x14U)) 
                                                         << 2U))) 
                                                  | ((((((~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                           [0U] 
                                                           >> 0x10U)) 
                                                         & (~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                             [0U] 
                                                             >> 0x11U))) 
                                                        & (~ 
                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                            [0U] 
                                                            >> 0x12U))) 
                                                       & (~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                           [0U] 
                                                           >> 0x13U))) 
                                                      & (~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [0U] 
                                                          >> 0x14U))) 
                                                     << 2U)))) 
                           | (((~ ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                        [0U] >> 0x1aU) 
                                       & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                             [0U] >> 0x1bU))) 
                                      & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [0U] >> 0x1cU))) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [0U] >> 0x1dU))) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                          [0U] >> 0x1eU))) 
                                   & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                         [0U] >> 0x1fU)))) 
                               << 2U) & ((((((0x3cU 
                                              & (((((((~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [0U] 
                                                        >> 0x1aU)) 
                                                      & (~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [0U] 
                                                          >> 0x1bU))) 
                                                     << 2U) 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [0U] 
                                                       >> 0x1aU)) 
                                                   & ((~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [0U] 
                                                        >> 0x1dU)) 
                                                      << 2U)) 
                                                  & ((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [0U] 
                                                       >> 0x1eU)) 
                                                     << 2U)) 
                                                 & ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [0U] 
                                                      >> 0x1fU)) 
                                                    << 2U))) 
                                             | (0x3cU 
                                                & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [0U] 
                                                        >> 0x18U) 
                                                       & ((~ 
                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                            [0U] 
                                                            >> 0x1bU)) 
                                                          << 2U)) 
                                                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                         [0U] 
                                                         >> 0x1aU)) 
                                                     & ((~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [0U] 
                                                          >> 0x1dU)) 
                                                        << 2U)) 
                                                    & ((~ 
                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                         [0U] 
                                                         >> 0x1eU)) 
                                                       << 2U)) 
                                                   & ((~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [0U] 
                                                        >> 0x1fU)) 
                                                      << 2U)))) 
                                            | (0x3cU 
                                               & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [0U] 
                                                       >> 0x18U) 
                                                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                         [0U] 
                                                         >> 0x19U)) 
                                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [0U] 
                                                        >> 0x1aU)) 
                                                    & ((~ 
                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                         [0U] 
                                                         >> 0x1dU)) 
                                                       << 2U)) 
                                                   & ((~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [0U] 
                                                        >> 0x1eU)) 
                                                      << 2U)) 
                                                  & ((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [0U] 
                                                       >> 0x1fU)) 
                                                     << 2U)))) 
                                           | (0x3cU 
                                              & (((((((~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [0U] 
                                                        >> 0x1aU)) 
                                                      << 2U) 
                                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [0U] 
                                                        >> 0x19U)) 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [0U] 
                                                       >> 0x1aU)) 
                                                   & ((~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [0U] 
                                                        >> 0x1dU)) 
                                                      << 2U)) 
                                                  & ((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [0U] 
                                                       >> 0x1eU)) 
                                                     << 2U)) 
                                                 & ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [0U] 
                                                      >> 0x1fU)) 
                                                    << 2U)))) 
                                          | (0x7cU 
                                             & (((((((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [0U] 
                                                       >> 0x1aU)) 
                                                     << 2U) 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [0U] 
                                                       >> 0x19U)) 
                                                   & ((~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [0U] 
                                                        >> 0x1cU)) 
                                                      << 2U)) 
                                                  & ((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [0U] 
                                                       >> 0x1dU)) 
                                                     << 2U)) 
                                                 & ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [0U] 
                                                      >> 0x1eU)) 
                                                    << 2U)) 
                                                & ((~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                     [0U] 
                                                     >> 0x1fU)) 
                                                   << 2U)))) 
                                         | (0x7cU & 
                                            ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                  [0U] 
                                                  >> 0x18U) 
                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [0U] 
                                                    >> 0x19U)) 
                                                & ((~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                     [0U] 
                                                     >> 0x1cU)) 
                                                   << 2U)) 
                                               & ((~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [0U] 
                                                    >> 0x1dU)) 
                                                  << 2U)) 
                                              & ((~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                   [0U] 
                                                   >> 0x1eU)) 
                                                 << 2U)) 
                                             & ((~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                  [0U] 
                                                  >> 0x1fU)) 
                                                << 2U))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m[0U] 
        = ((0x17U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
            [0U]) | (8U & ((((((((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                     [0U] >> 0x1aU)) 
                                 & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                       [0U] >> 0x1bU))) 
                                & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                      [0U] >> 0x1cU))) 
                               & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                     [0U] >> 0x1dU))) 
                              & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                    [0U] >> 0x1eU))) 
                             & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                   [0U] >> 0x1fU))) 
                            << 3U) & ((((((((~ vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                             [0U]) 
                                            & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                  [0U] 
                                                  >> 1U))) 
                                           & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                 [0U] 
                                                 >> 2U))) 
                                          << 3U) & 
                                         vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                         [0U]) & ((~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [0U] 
                                                    >> 4U)) 
                                                  << 3U)) 
                                       & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                              [0U] 
                                              >> 5U)) 
                                          << 3U)) | 
                                      ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [0U] & 
                                            (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                [0U] 
                                                >> 1U))) 
                                           & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                 [0U] 
                                                 >> 2U))) 
                                          << 3U) & 
                                         vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                         [0U]) & ((~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [0U] 
                                                    >> 4U)) 
                                                  << 3U)) 
                                       & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                              [0U] 
                                              >> 5U)) 
                                          << 3U))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m[0U] 
        = ((0xfU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
            [0U]) | (0x10U & ((0xfffffff0U & ((((((
                                                   ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [0U] 
                                                      >> 0x1aU)) 
                                                    & (~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [0U] 
                                                        >> 0x1bU))) 
                                                   & (~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [0U] 
                                                       >> 0x1cU))) 
                                                  & (~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [0U] 
                                                      >> 0x1dU))) 
                                                 & (~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                     [0U] 
                                                     >> 0x1eU))) 
                                                & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [0U] 
                                                    >> 0x1fU))) 
                                               << 4U) 
                                              & (((((((~ 
                                                       vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [0U]) 
                                                      & (~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [0U] 
                                                          >> 1U))) 
                                                     & (~ 
                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                         [0U] 
                                                         >> 2U))) 
                                                    << 4U) 
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [0U] 
                                                      << 1U)) 
                                                  & ((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [0U] 
                                                       >> 4U)) 
                                                     << 4U)) 
                                                 & ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [0U] 
                                                      >> 5U)) 
                                                    << 4U)))) 
                              | (0x3f0U & (((~ ((((
                                                   ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [0U] 
                                                      >> 0x1aU)) 
                                                    & (~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [0U] 
                                                        >> 0x1bU))) 
                                                   & (~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [0U] 
                                                       >> 0x1cU))) 
                                                  & (~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [0U] 
                                                      >> 0x1dU))) 
                                                 & (~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                     [0U] 
                                                     >> 0x1eU))) 
                                                & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [0U] 
                                                    >> 0x1fU)))) 
                                            << 4U) 
                                           & (((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [0U] 
                                                    >> 0x16U) 
                                                   & ((~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [0U] 
                                                        >> 0x1bU)) 
                                                      << 4U)) 
                                                  & ((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [0U] 
                                                       >> 0x1cU)) 
                                                     << 4U)) 
                                                 & ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [0U] 
                                                      >> 0x1dU)) 
                                                    << 4U)) 
                                                & ((~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                     [0U] 
                                                     >> 0x1eU)) 
                                                   << 4U)) 
                                               & ((~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [0U] 
                                                    >> 0x1fU)) 
                                                  << 4U)) 
                                              & ((0xfff0U 
                                                  & (((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                         [0U] 
                                                         >> 0xcU) 
                                                        & ((~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                             [0U] 
                                                             >> 0x11U)) 
                                                           << 4U)) 
                                                       & ((~ 
                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                            [0U] 
                                                            >> 0x12U)) 
                                                          << 4U)) 
                                                      & ((~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                           [0U] 
                                                           >> 0x13U)) 
                                                         << 4U)) 
                                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [0U] 
                                                        >> 0x10U))) 
                                                 | (0xfff0U 
                                                    & ((((((~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                             [0U] 
                                                             >> 0x10U)) 
                                                           & (~ 
                                                              (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                               [0U] 
                                                               >> 0x11U))) 
                                                          & (~ 
                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                              [0U] 
                                                              >> 0x12U))) 
                                                         & (~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                             [0U] 
                                                             >> 0x13U))) 
                                                        << 4U) 
                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [0U] 
                                                          >> 0x10U))))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m[1U] 
        = ((0x1eU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
            [1U]) | (1U & ((((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                  [1U] >> 0x1aU) & 
                                 (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                     [1U] >> 0x1bU))) 
                                & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                      [1U] >> 0x1cU))) 
                               & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                     [1U] >> 0x1dU))) 
                              & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                    [1U] >> 0x1eU))) 
                             & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                   [1U] >> 0x1fU))) 
                            & ((((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                      [1U] >> 0x10U) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [1U] >> 0x11U))) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                          [1U] >> 0x12U))) 
                                   & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                         [1U] >> 0x13U))) 
                                  & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                        [1U] >> 0x14U))) 
                                 | (((((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [1U] >> 0x10U)) 
                                       & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                             [1U] >> 0x11U))) 
                                      & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [1U] >> 0x12U))) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [1U] >> 0x13U))) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                          [1U] >> 0x14U)))) 
                                | (((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                       [1U] >> 0x10U) 
                                      & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [1U] >> 0x11U))) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [1U] >> 0x12U))) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                          [1U] >> 0x13U))) 
                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                      [1U] >> 0x14U))) 
                               | (((((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                         [1U] >> 0x10U)) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [1U] >> 0x11U))) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                          [1U] >> 0x12U))) 
                                   & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                         [1U] >> 0x13U))) 
                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                     [1U] >> 0x14U)))) 
                           | ((~ ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                       [1U] >> 0x1aU) 
                                      & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [1U] >> 0x1bU))) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [1U] >> 0x1cU))) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                          [1U] >> 0x1dU))) 
                                   & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                         [1U] >> 0x1eU))) 
                                  & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                        [1U] >> 0x1fU)))) 
                              & (((((((((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [1U] >> 0x1aU)) 
                                        & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                              [1U] 
                                              >> 0x1bU))) 
                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                          [1U] >> 0x1cU)) 
                                      & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [1U] >> 0x1dU))) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [1U] >> 0x1eU))) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                          [1U] >> 0x1fU))) 
                                   | ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [1U] >> 0x1aU) 
                                          & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                [1U] 
                                                >> 0x1bU))) 
                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [1U] >> 0x1cU)) 
                                        & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                              [1U] 
                                              >> 0x1dU))) 
                                       & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                             [1U] >> 0x1eU))) 
                                      & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [1U] >> 0x1fU)))) 
                                  | ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                          [1U] >> 0x1aU) 
                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [1U] >> 0x1bU)) 
                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [1U] >> 0x1cU)) 
                                       & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                             [1U] >> 0x1dU))) 
                                      & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [1U] >> 0x1eU))) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [1U] >> 0x1fU)))) 
                                 | ((((((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [1U] >> 0x1aU)) 
                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [1U] >> 0x1bU)) 
                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                          [1U] >> 0x1cU)) 
                                      & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [1U] >> 0x1dU))) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [1U] >> 0x1eU))) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                          [1U] >> 0x1fU))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m[1U] 
        = ((0x1dU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
            [1U]) | (2U & ((0x3ffffffeU & ((((((((~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                   [1U] 
                                                   >> 0x1aU)) 
                                                 & (~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                     [1U] 
                                                     >> 0x1bU))) 
                                                & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [1U] 
                                                    >> 0x1cU))) 
                                               & (~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                   [1U] 
                                                   >> 0x1dU))) 
                                              & (~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                  [1U] 
                                                  >> 0x1eU))) 
                                             & (~ (
                                                   vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                   [1U] 
                                                   >> 0x1fU))) 
                                            << 1U) 
                                           & ((((((((~ 
                                                     vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                     [1U]) 
                                                    & (~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [1U] 
                                                        >> 1U))) 
                                                   & (~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [1U] 
                                                       >> 2U))) 
                                                  << 1U) 
                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [1U] 
                                                    >> 2U)) 
                                                & ((~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                     [1U] 
                                                     >> 4U)) 
                                                   << 1U)) 
                                               & ((~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [1U] 
                                                    >> 5U)) 
                                                  << 1U)) 
                                              | ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [1U] 
                                                      & (~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [1U] 
                                                          >> 1U))) 
                                                     & (~ 
                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                         [1U] 
                                                         >> 2U))) 
                                                    << 1U) 
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [1U] 
                                                      >> 2U)) 
                                                  & ((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [1U] 
                                                       >> 4U)) 
                                                     << 1U)) 
                                                 & ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [1U] 
                                                      >> 5U)) 
                                                    << 1U))))) 
                           | (0x3eU & (((~ ((((((~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                  [1U] 
                                                  >> 0x1aU)) 
                                                & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [1U] 
                                                    >> 0x1bU))) 
                                               & (~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                   [1U] 
                                                   >> 0x1cU))) 
                                              & (~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                  [1U] 
                                                  >> 0x1dU))) 
                                             & (~ (
                                                   vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                   [1U] 
                                                   >> 0x1eU))) 
                                            & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                  [1U] 
                                                  >> 0x1fU)))) 
                                        << 1U) & ((
                                                   ((((((~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [1U] 
                                                          >> 0x1aU)) 
                                                        << 1U) 
                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [1U] 
                                                          >> 0x1aU)) 
                                                      & ((~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                           [1U] 
                                                           >> 0x1cU)) 
                                                         << 1U)) 
                                                     & ((~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [1U] 
                                                          >> 0x1dU)) 
                                                        << 1U)) 
                                                    & ((~ 
                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                         [1U] 
                                                         >> 0x1eU)) 
                                                       << 1U)) 
                                                   & ((~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [1U] 
                                                        >> 0x1fU)) 
                                                      << 1U)) 
                                                  | ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [1U] 
                                                          >> 0x19U) 
                                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                            [1U] 
                                                            >> 0x1aU)) 
                                                        & ((~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                             [1U] 
                                                             >> 0x1cU)) 
                                                           << 1U)) 
                                                       & ((~ 
                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                            [1U] 
                                                            >> 0x1dU)) 
                                                          << 1U)) 
                                                      & ((~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                           [1U] 
                                                           >> 0x1eU)) 
                                                         << 1U)) 
                                                     & ((~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [1U] 
                                                          >> 0x1fU)) 
                                                        << 1U))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m[1U] 
        = ((0x1bU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
            [1U]) | (4U & ((0xfcU & (((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [1U] >> 0x18U) 
                                          & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                 [1U] 
                                                 >> 0x1bU)) 
                                             << 2U)) 
                                         & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                [1U] 
                                                >> 0x1cU)) 
                                            << 2U)) 
                                        & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                               [1U] 
                                               >> 0x1dU)) 
                                           << 2U)) 
                                       & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                              [1U] 
                                              >> 0x1eU)) 
                                          << 2U)) & 
                                      ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [1U] >> 0x1fU)) 
                                       << 2U)) & ((0x3fffcU 
                                                   & (((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [1U] 
                                                          >> 0xeU) 
                                                         & ((~ 
                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                              [1U] 
                                                              >> 0x11U)) 
                                                            << 2U)) 
                                                        & ((~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                             [1U] 
                                                             >> 0x12U)) 
                                                           << 2U)) 
                                                       & ((~ 
                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                            [1U] 
                                                            >> 0x13U)) 
                                                          << 2U)) 
                                                      & ((~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                           [1U] 
                                                           >> 0x14U)) 
                                                         << 2U))) 
                                                  | ((((((~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                           [1U] 
                                                           >> 0x10U)) 
                                                         & (~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                             [1U] 
                                                             >> 0x11U))) 
                                                        & (~ 
                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                            [1U] 
                                                            >> 0x12U))) 
                                                       & (~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                           [1U] 
                                                           >> 0x13U))) 
                                                      & (~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [1U] 
                                                          >> 0x14U))) 
                                                     << 2U)))) 
                           | (((~ ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                        [1U] >> 0x1aU) 
                                       & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                             [1U] >> 0x1bU))) 
                                      & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [1U] >> 0x1cU))) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [1U] >> 0x1dU))) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                          [1U] >> 0x1eU))) 
                                   & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                         [1U] >> 0x1fU)))) 
                               << 2U) & ((((((0x3cU 
                                              & (((((((~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [1U] 
                                                        >> 0x1aU)) 
                                                      & (~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [1U] 
                                                          >> 0x1bU))) 
                                                     << 2U) 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [1U] 
                                                       >> 0x1aU)) 
                                                   & ((~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [1U] 
                                                        >> 0x1dU)) 
                                                      << 2U)) 
                                                  & ((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [1U] 
                                                       >> 0x1eU)) 
                                                     << 2U)) 
                                                 & ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [1U] 
                                                      >> 0x1fU)) 
                                                    << 2U))) 
                                             | (0x3cU 
                                                & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [1U] 
                                                        >> 0x18U) 
                                                       & ((~ 
                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                            [1U] 
                                                            >> 0x1bU)) 
                                                          << 2U)) 
                                                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                         [1U] 
                                                         >> 0x1aU)) 
                                                     & ((~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [1U] 
                                                          >> 0x1dU)) 
                                                        << 2U)) 
                                                    & ((~ 
                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                         [1U] 
                                                         >> 0x1eU)) 
                                                       << 2U)) 
                                                   & ((~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [1U] 
                                                        >> 0x1fU)) 
                                                      << 2U)))) 
                                            | (0x3cU 
                                               & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [1U] 
                                                       >> 0x18U) 
                                                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                         [1U] 
                                                         >> 0x19U)) 
                                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [1U] 
                                                        >> 0x1aU)) 
                                                    & ((~ 
                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                         [1U] 
                                                         >> 0x1dU)) 
                                                       << 2U)) 
                                                   & ((~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [1U] 
                                                        >> 0x1eU)) 
                                                      << 2U)) 
                                                  & ((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [1U] 
                                                       >> 0x1fU)) 
                                                     << 2U)))) 
                                           | (0x3cU 
                                              & (((((((~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [1U] 
                                                        >> 0x1aU)) 
                                                      << 2U) 
                                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [1U] 
                                                        >> 0x19U)) 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [1U] 
                                                       >> 0x1aU)) 
                                                   & ((~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [1U] 
                                                        >> 0x1dU)) 
                                                      << 2U)) 
                                                  & ((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [1U] 
                                                       >> 0x1eU)) 
                                                     << 2U)) 
                                                 & ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [1U] 
                                                      >> 0x1fU)) 
                                                    << 2U)))) 
                                          | (0x7cU 
                                             & (((((((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [1U] 
                                                       >> 0x1aU)) 
                                                     << 2U) 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [1U] 
                                                       >> 0x19U)) 
                                                   & ((~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [1U] 
                                                        >> 0x1cU)) 
                                                      << 2U)) 
                                                  & ((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [1U] 
                                                       >> 0x1dU)) 
                                                     << 2U)) 
                                                 & ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [1U] 
                                                      >> 0x1eU)) 
                                                    << 2U)) 
                                                & ((~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                     [1U] 
                                                     >> 0x1fU)) 
                                                   << 2U)))) 
                                         | (0x7cU & 
                                            ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                  [1U] 
                                                  >> 0x18U) 
                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [1U] 
                                                    >> 0x19U)) 
                                                & ((~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                     [1U] 
                                                     >> 0x1cU)) 
                                                   << 2U)) 
                                               & ((~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [1U] 
                                                    >> 0x1dU)) 
                                                  << 2U)) 
                                              & ((~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                   [1U] 
                                                   >> 0x1eU)) 
                                                 << 2U)) 
                                             & ((~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                  [1U] 
                                                  >> 0x1fU)) 
                                                << 2U))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m[1U] 
        = ((0x17U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
            [1U]) | (8U & ((((((((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                     [1U] >> 0x1aU)) 
                                 & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                       [1U] >> 0x1bU))) 
                                & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                      [1U] >> 0x1cU))) 
                               & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                     [1U] >> 0x1dU))) 
                              & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                    [1U] >> 0x1eU))) 
                             & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                   [1U] >> 0x1fU))) 
                            << 3U) & ((((((((~ vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                             [1U]) 
                                            & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                  [1U] 
                                                  >> 1U))) 
                                           & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                 [1U] 
                                                 >> 2U))) 
                                          << 3U) & 
                                         vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                         [1U]) & ((~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [1U] 
                                                    >> 4U)) 
                                                  << 3U)) 
                                       & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                              [1U] 
                                              >> 5U)) 
                                          << 3U)) | 
                                      ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [1U] & 
                                            (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                [1U] 
                                                >> 1U))) 
                                           & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                 [1U] 
                                                 >> 2U))) 
                                          << 3U) & 
                                         vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                         [1U]) & ((~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [1U] 
                                                    >> 4U)) 
                                                  << 3U)) 
                                       & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                              [1U] 
                                              >> 5U)) 
                                          << 3U))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m[1U] 
        = ((0xfU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
            [1U]) | (0x10U & ((0xfffffff0U & ((((((
                                                   ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [1U] 
                                                      >> 0x1aU)) 
                                                    & (~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [1U] 
                                                        >> 0x1bU))) 
                                                   & (~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [1U] 
                                                       >> 0x1cU))) 
                                                  & (~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [1U] 
                                                      >> 0x1dU))) 
                                                 & (~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                     [1U] 
                                                     >> 0x1eU))) 
                                                & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [1U] 
                                                    >> 0x1fU))) 
                                               << 4U) 
                                              & (((((((~ 
                                                       vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [1U]) 
                                                      & (~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [1U] 
                                                          >> 1U))) 
                                                     & (~ 
                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                         [1U] 
                                                         >> 2U))) 
                                                    << 4U) 
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [1U] 
                                                      << 1U)) 
                                                  & ((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [1U] 
                                                       >> 4U)) 
                                                     << 4U)) 
                                                 & ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [1U] 
                                                      >> 5U)) 
                                                    << 4U)))) 
                              | (0x3f0U & (((~ ((((
                                                   ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [1U] 
                                                      >> 0x1aU)) 
                                                    & (~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [1U] 
                                                        >> 0x1bU))) 
                                                   & (~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [1U] 
                                                       >> 0x1cU))) 
                                                  & (~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [1U] 
                                                      >> 0x1dU))) 
                                                 & (~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                     [1U] 
                                                     >> 0x1eU))) 
                                                & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [1U] 
                                                    >> 0x1fU)))) 
                                            << 4U) 
                                           & (((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [1U] 
                                                    >> 0x16U) 
                                                   & ((~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [1U] 
                                                        >> 0x1bU)) 
                                                      << 4U)) 
                                                  & ((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [1U] 
                                                       >> 0x1cU)) 
                                                     << 4U)) 
                                                 & ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [1U] 
                                                      >> 0x1dU)) 
                                                    << 4U)) 
                                                & ((~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                     [1U] 
                                                     >> 0x1eU)) 
                                                   << 4U)) 
                                               & ((~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [1U] 
                                                    >> 0x1fU)) 
                                                  << 4U)) 
                                              & ((0xfff0U 
                                                  & (((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                         [1U] 
                                                         >> 0xcU) 
                                                        & ((~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                             [1U] 
                                                             >> 0x11U)) 
                                                           << 4U)) 
                                                       & ((~ 
                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                            [1U] 
                                                            >> 0x12U)) 
                                                          << 4U)) 
                                                      & ((~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                           [1U] 
                                                           >> 0x13U)) 
                                                         << 4U)) 
                                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [1U] 
                                                        >> 0x10U))) 
                                                 | (0xfff0U 
                                                    & ((((((~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                             [1U] 
                                                             >> 0x10U)) 
                                                           & (~ 
                                                              (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                               [1U] 
                                                               >> 0x11U))) 
                                                          & (~ 
                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                              [1U] 
                                                              >> 0x12U))) 
                                                         & (~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                             [1U] 
                                                             >> 0x13U))) 
                                                        << 4U) 
                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [1U] 
                                                          >> 0x10U))))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m[2U] 
        = ((0x1eU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
            [2U]) | (1U & ((((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                  [2U] >> 0x1aU) & 
                                 (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                     [2U] >> 0x1bU))) 
                                & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                      [2U] >> 0x1cU))) 
                               & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                     [2U] >> 0x1dU))) 
                              & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                    [2U] >> 0x1eU))) 
                             & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                   [2U] >> 0x1fU))) 
                            & ((((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                      [2U] >> 0x10U) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [2U] >> 0x11U))) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                          [2U] >> 0x12U))) 
                                   & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                         [2U] >> 0x13U))) 
                                  & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                        [2U] >> 0x14U))) 
                                 | (((((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [2U] >> 0x10U)) 
                                       & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                             [2U] >> 0x11U))) 
                                      & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [2U] >> 0x12U))) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [2U] >> 0x13U))) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                          [2U] >> 0x14U)))) 
                                | (((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                       [2U] >> 0x10U) 
                                      & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [2U] >> 0x11U))) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [2U] >> 0x12U))) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                          [2U] >> 0x13U))) 
                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                      [2U] >> 0x14U))) 
                               | (((((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                         [2U] >> 0x10U)) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [2U] >> 0x11U))) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                          [2U] >> 0x12U))) 
                                   & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                         [2U] >> 0x13U))) 
                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                     [2U] >> 0x14U)))) 
                           | ((~ ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                       [2U] >> 0x1aU) 
                                      & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [2U] >> 0x1bU))) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [2U] >> 0x1cU))) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                          [2U] >> 0x1dU))) 
                                   & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                         [2U] >> 0x1eU))) 
                                  & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                        [2U] >> 0x1fU)))) 
                              & (((((((((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [2U] >> 0x1aU)) 
                                        & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                              [2U] 
                                              >> 0x1bU))) 
                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                          [2U] >> 0x1cU)) 
                                      & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [2U] >> 0x1dU))) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [2U] >> 0x1eU))) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                          [2U] >> 0x1fU))) 
                                   | ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [2U] >> 0x1aU) 
                                          & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                [2U] 
                                                >> 0x1bU))) 
                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [2U] >> 0x1cU)) 
                                        & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                              [2U] 
                                              >> 0x1dU))) 
                                       & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                             [2U] >> 0x1eU))) 
                                      & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [2U] >> 0x1fU)))) 
                                  | ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                          [2U] >> 0x1aU) 
                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [2U] >> 0x1bU)) 
                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [2U] >> 0x1cU)) 
                                       & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                             [2U] >> 0x1dU))) 
                                      & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [2U] >> 0x1eU))) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [2U] >> 0x1fU)))) 
                                 | ((((((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [2U] >> 0x1aU)) 
                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [2U] >> 0x1bU)) 
                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                          [2U] >> 0x1cU)) 
                                      & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [2U] >> 0x1dU))) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [2U] >> 0x1eU))) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                          [2U] >> 0x1fU))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m[2U] 
        = ((0x1dU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
            [2U]) | (2U & ((0x3ffffffeU & ((((((((~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                   [2U] 
                                                   >> 0x1aU)) 
                                                 & (~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                     [2U] 
                                                     >> 0x1bU))) 
                                                & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [2U] 
                                                    >> 0x1cU))) 
                                               & (~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                   [2U] 
                                                   >> 0x1dU))) 
                                              & (~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                  [2U] 
                                                  >> 0x1eU))) 
                                             & (~ (
                                                   vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                   [2U] 
                                                   >> 0x1fU))) 
                                            << 1U) 
                                           & ((((((((~ 
                                                     vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                     [2U]) 
                                                    & (~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [2U] 
                                                        >> 1U))) 
                                                   & (~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [2U] 
                                                       >> 2U))) 
                                                  << 1U) 
                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [2U] 
                                                    >> 2U)) 
                                                & ((~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                     [2U] 
                                                     >> 4U)) 
                                                   << 1U)) 
                                               & ((~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [2U] 
                                                    >> 5U)) 
                                                  << 1U)) 
                                              | ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [2U] 
                                                      & (~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [2U] 
                                                          >> 1U))) 
                                                     & (~ 
                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                         [2U] 
                                                         >> 2U))) 
                                                    << 1U) 
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [2U] 
                                                      >> 2U)) 
                                                  & ((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [2U] 
                                                       >> 4U)) 
                                                     << 1U)) 
                                                 & ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [2U] 
                                                      >> 5U)) 
                                                    << 1U))))) 
                           | (0x3eU & (((~ ((((((~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                  [2U] 
                                                  >> 0x1aU)) 
                                                & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [2U] 
                                                    >> 0x1bU))) 
                                               & (~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                   [2U] 
                                                   >> 0x1cU))) 
                                              & (~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                  [2U] 
                                                  >> 0x1dU))) 
                                             & (~ (
                                                   vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                   [2U] 
                                                   >> 0x1eU))) 
                                            & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                  [2U] 
                                                  >> 0x1fU)))) 
                                        << 1U) & ((
                                                   ((((((~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [2U] 
                                                          >> 0x1aU)) 
                                                        << 1U) 
                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [2U] 
                                                          >> 0x1aU)) 
                                                      & ((~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                           [2U] 
                                                           >> 0x1cU)) 
                                                         << 1U)) 
                                                     & ((~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [2U] 
                                                          >> 0x1dU)) 
                                                        << 1U)) 
                                                    & ((~ 
                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                         [2U] 
                                                         >> 0x1eU)) 
                                                       << 1U)) 
                                                   & ((~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [2U] 
                                                        >> 0x1fU)) 
                                                      << 1U)) 
                                                  | ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [2U] 
                                                          >> 0x19U) 
                                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                            [2U] 
                                                            >> 0x1aU)) 
                                                        & ((~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                             [2U] 
                                                             >> 0x1cU)) 
                                                           << 1U)) 
                                                       & ((~ 
                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                            [2U] 
                                                            >> 0x1dU)) 
                                                          << 1U)) 
                                                      & ((~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                           [2U] 
                                                           >> 0x1eU)) 
                                                         << 1U)) 
                                                     & ((~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [2U] 
                                                          >> 0x1fU)) 
                                                        << 1U))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m[2U] 
        = ((0x1bU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
            [2U]) | (4U & ((0xfcU & (((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [2U] >> 0x18U) 
                                          & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                 [2U] 
                                                 >> 0x1bU)) 
                                             << 2U)) 
                                         & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                [2U] 
                                                >> 0x1cU)) 
                                            << 2U)) 
                                        & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                               [2U] 
                                               >> 0x1dU)) 
                                           << 2U)) 
                                       & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                              [2U] 
                                              >> 0x1eU)) 
                                          << 2U)) & 
                                      ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [2U] >> 0x1fU)) 
                                       << 2U)) & ((0x3fffcU 
                                                   & (((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [2U] 
                                                          >> 0xeU) 
                                                         & ((~ 
                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                              [2U] 
                                                              >> 0x11U)) 
                                                            << 2U)) 
                                                        & ((~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                             [2U] 
                                                             >> 0x12U)) 
                                                           << 2U)) 
                                                       & ((~ 
                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                            [2U] 
                                                            >> 0x13U)) 
                                                          << 2U)) 
                                                      & ((~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                           [2U] 
                                                           >> 0x14U)) 
                                                         << 2U))) 
                                                  | ((((((~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                           [2U] 
                                                           >> 0x10U)) 
                                                         & (~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                             [2U] 
                                                             >> 0x11U))) 
                                                        & (~ 
                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                            [2U] 
                                                            >> 0x12U))) 
                                                       & (~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                           [2U] 
                                                           >> 0x13U))) 
                                                      & (~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [2U] 
                                                          >> 0x14U))) 
                                                     << 2U)))) 
                           | (((~ ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                        [2U] >> 0x1aU) 
                                       & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                             [2U] >> 0x1bU))) 
                                      & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [2U] >> 0x1cU))) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [2U] >> 0x1dU))) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                          [2U] >> 0x1eU))) 
                                   & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                         [2U] >> 0x1fU)))) 
                               << 2U) & ((((((0x3cU 
                                              & (((((((~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [2U] 
                                                        >> 0x1aU)) 
                                                      & (~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [2U] 
                                                          >> 0x1bU))) 
                                                     << 2U) 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [2U] 
                                                       >> 0x1aU)) 
                                                   & ((~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [2U] 
                                                        >> 0x1dU)) 
                                                      << 2U)) 
                                                  & ((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [2U] 
                                                       >> 0x1eU)) 
                                                     << 2U)) 
                                                 & ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [2U] 
                                                      >> 0x1fU)) 
                                                    << 2U))) 
                                             | (0x3cU 
                                                & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [2U] 
                                                        >> 0x18U) 
                                                       & ((~ 
                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                            [2U] 
                                                            >> 0x1bU)) 
                                                          << 2U)) 
                                                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                         [2U] 
                                                         >> 0x1aU)) 
                                                     & ((~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [2U] 
                                                          >> 0x1dU)) 
                                                        << 2U)) 
                                                    & ((~ 
                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                         [2U] 
                                                         >> 0x1eU)) 
                                                       << 2U)) 
                                                   & ((~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [2U] 
                                                        >> 0x1fU)) 
                                                      << 2U)))) 
                                            | (0x3cU 
                                               & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [2U] 
                                                       >> 0x18U) 
                                                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                         [2U] 
                                                         >> 0x19U)) 
                                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [2U] 
                                                        >> 0x1aU)) 
                                                    & ((~ 
                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                         [2U] 
                                                         >> 0x1dU)) 
                                                       << 2U)) 
                                                   & ((~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [2U] 
                                                        >> 0x1eU)) 
                                                      << 2U)) 
                                                  & ((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [2U] 
                                                       >> 0x1fU)) 
                                                     << 2U)))) 
                                           | (0x3cU 
                                              & (((((((~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [2U] 
                                                        >> 0x1aU)) 
                                                      << 2U) 
                                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [2U] 
                                                        >> 0x19U)) 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [2U] 
                                                       >> 0x1aU)) 
                                                   & ((~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [2U] 
                                                        >> 0x1dU)) 
                                                      << 2U)) 
                                                  & ((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [2U] 
                                                       >> 0x1eU)) 
                                                     << 2U)) 
                                                 & ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [2U] 
                                                      >> 0x1fU)) 
                                                    << 2U)))) 
                                          | (0x7cU 
                                             & (((((((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [2U] 
                                                       >> 0x1aU)) 
                                                     << 2U) 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [2U] 
                                                       >> 0x19U)) 
                                                   & ((~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [2U] 
                                                        >> 0x1cU)) 
                                                      << 2U)) 
                                                  & ((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [2U] 
                                                       >> 0x1dU)) 
                                                     << 2U)) 
                                                 & ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [2U] 
                                                      >> 0x1eU)) 
                                                    << 2U)) 
                                                & ((~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                     [2U] 
                                                     >> 0x1fU)) 
                                                   << 2U)))) 
                                         | (0x7cU & 
                                            ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                  [2U] 
                                                  >> 0x18U) 
                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [2U] 
                                                    >> 0x19U)) 
                                                & ((~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                     [2U] 
                                                     >> 0x1cU)) 
                                                   << 2U)) 
                                               & ((~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [2U] 
                                                    >> 0x1dU)) 
                                                  << 2U)) 
                                              & ((~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                   [2U] 
                                                   >> 0x1eU)) 
                                                 << 2U)) 
                                             & ((~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                  [2U] 
                                                  >> 0x1fU)) 
                                                << 2U))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m[2U] 
        = ((0x17U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
            [2U]) | (8U & ((((((((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                     [2U] >> 0x1aU)) 
                                 & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                       [2U] >> 0x1bU))) 
                                & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                      [2U] >> 0x1cU))) 
                               & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                     [2U] >> 0x1dU))) 
                              & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                    [2U] >> 0x1eU))) 
                             & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                   [2U] >> 0x1fU))) 
                            << 3U) & ((((((((~ vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                             [2U]) 
                                            & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                  [2U] 
                                                  >> 1U))) 
                                           & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                 [2U] 
                                                 >> 2U))) 
                                          << 3U) & 
                                         vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                         [2U]) & ((~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [2U] 
                                                    >> 4U)) 
                                                  << 3U)) 
                                       & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                              [2U] 
                                              >> 5U)) 
                                          << 3U)) | 
                                      ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [2U] & 
                                            (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                [2U] 
                                                >> 1U))) 
                                           & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                 [2U] 
                                                 >> 2U))) 
                                          << 3U) & 
                                         vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                         [2U]) & ((~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [2U] 
                                                    >> 4U)) 
                                                  << 3U)) 
                                       & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                              [2U] 
                                              >> 5U)) 
                                          << 3U))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m[2U] 
        = ((0xfU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
            [2U]) | (0x10U & ((0xfffffff0U & ((((((
                                                   ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [2U] 
                                                      >> 0x1aU)) 
                                                    & (~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [2U] 
                                                        >> 0x1bU))) 
                                                   & (~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [2U] 
                                                       >> 0x1cU))) 
                                                  & (~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [2U] 
                                                      >> 0x1dU))) 
                                                 & (~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                     [2U] 
                                                     >> 0x1eU))) 
                                                & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [2U] 
                                                    >> 0x1fU))) 
                                               << 4U) 
                                              & (((((((~ 
                                                       vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [2U]) 
                                                      & (~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [2U] 
                                                          >> 1U))) 
                                                     & (~ 
                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                         [2U] 
                                                         >> 2U))) 
                                                    << 4U) 
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [2U] 
                                                      << 1U)) 
                                                  & ((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [2U] 
                                                       >> 4U)) 
                                                     << 4U)) 
                                                 & ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [2U] 
                                                      >> 5U)) 
                                                    << 4U)))) 
                              | (0x3f0U & (((~ ((((
                                                   ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [2U] 
                                                      >> 0x1aU)) 
                                                    & (~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [2U] 
                                                        >> 0x1bU))) 
                                                   & (~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [2U] 
                                                       >> 0x1cU))) 
                                                  & (~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [2U] 
                                                      >> 0x1dU))) 
                                                 & (~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                     [2U] 
                                                     >> 0x1eU))) 
                                                & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [2U] 
                                                    >> 0x1fU)))) 
                                            << 4U) 
                                           & (((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [2U] 
                                                    >> 0x16U) 
                                                   & ((~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [2U] 
                                                        >> 0x1bU)) 
                                                      << 4U)) 
                                                  & ((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [2U] 
                                                       >> 0x1cU)) 
                                                     << 4U)) 
                                                 & ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [2U] 
                                                      >> 0x1dU)) 
                                                    << 4U)) 
                                                & ((~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                     [2U] 
                                                     >> 0x1eU)) 
                                                   << 4U)) 
                                               & ((~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [2U] 
                                                    >> 0x1fU)) 
                                                  << 4U)) 
                                              & ((0xfff0U 
                                                  & (((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                         [2U] 
                                                         >> 0xcU) 
                                                        & ((~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                             [2U] 
                                                             >> 0x11U)) 
                                                           << 4U)) 
                                                       & ((~ 
                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                            [2U] 
                                                            >> 0x12U)) 
                                                          << 4U)) 
                                                      & ((~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                           [2U] 
                                                           >> 0x13U)) 
                                                         << 4U)) 
                                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [2U] 
                                                        >> 0x10U))) 
                                                 | (0xfff0U 
                                                    & ((((((~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                             [2U] 
                                                             >> 0x10U)) 
                                                           & (~ 
                                                              (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                               [2U] 
                                                               >> 0x11U))) 
                                                          & (~ 
                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                              [2U] 
                                                              >> 0x12U))) 
                                                         & (~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                             [2U] 
                                                             >> 0x13U))) 
                                                        << 4U) 
                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [2U] 
                                                          >> 0x10U))))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m[3U] 
        = ((0x1eU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
            [3U]) | (1U & ((((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                  [3U] >> 0x1aU) & 
                                 (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                     [3U] >> 0x1bU))) 
                                & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                      [3U] >> 0x1cU))) 
                               & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                     [3U] >> 0x1dU))) 
                              & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                    [3U] >> 0x1eU))) 
                             & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                   [3U] >> 0x1fU))) 
                            & ((((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                      [3U] >> 0x10U) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [3U] >> 0x11U))) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                          [3U] >> 0x12U))) 
                                   & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                         [3U] >> 0x13U))) 
                                  & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                        [3U] >> 0x14U))) 
                                 | (((((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [3U] >> 0x10U)) 
                                       & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                             [3U] >> 0x11U))) 
                                      & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [3U] >> 0x12U))) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [3U] >> 0x13U))) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                          [3U] >> 0x14U)))) 
                                | (((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                       [3U] >> 0x10U) 
                                      & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [3U] >> 0x11U))) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [3U] >> 0x12U))) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                          [3U] >> 0x13U))) 
                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                      [3U] >> 0x14U))) 
                               | (((((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                         [3U] >> 0x10U)) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [3U] >> 0x11U))) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                          [3U] >> 0x12U))) 
                                   & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                         [3U] >> 0x13U))) 
                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                     [3U] >> 0x14U)))) 
                           | ((~ ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                       [3U] >> 0x1aU) 
                                      & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [3U] >> 0x1bU))) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [3U] >> 0x1cU))) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                          [3U] >> 0x1dU))) 
                                   & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                         [3U] >> 0x1eU))) 
                                  & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                        [3U] >> 0x1fU)))) 
                              & (((((((((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [3U] >> 0x1aU)) 
                                        & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                              [3U] 
                                              >> 0x1bU))) 
                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                          [3U] >> 0x1cU)) 
                                      & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [3U] >> 0x1dU))) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [3U] >> 0x1eU))) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                          [3U] >> 0x1fU))) 
                                   | ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [3U] >> 0x1aU) 
                                          & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                [3U] 
                                                >> 0x1bU))) 
                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [3U] >> 0x1cU)) 
                                        & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                              [3U] 
                                              >> 0x1dU))) 
                                       & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                             [3U] >> 0x1eU))) 
                                      & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [3U] >> 0x1fU)))) 
                                  | ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                          [3U] >> 0x1aU) 
                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [3U] >> 0x1bU)) 
                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [3U] >> 0x1cU)) 
                                       & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                             [3U] >> 0x1dU))) 
                                      & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [3U] >> 0x1eU))) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [3U] >> 0x1fU)))) 
                                 | ((((((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [3U] >> 0x1aU)) 
                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [3U] >> 0x1bU)) 
                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                          [3U] >> 0x1cU)) 
                                      & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [3U] >> 0x1dU))) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [3U] >> 0x1eU))) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                          [3U] >> 0x1fU))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m[3U] 
        = ((0x1dU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
            [3U]) | (2U & ((0x3ffffffeU & ((((((((~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                   [3U] 
                                                   >> 0x1aU)) 
                                                 & (~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                     [3U] 
                                                     >> 0x1bU))) 
                                                & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [3U] 
                                                    >> 0x1cU))) 
                                               & (~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                   [3U] 
                                                   >> 0x1dU))) 
                                              & (~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                  [3U] 
                                                  >> 0x1eU))) 
                                             & (~ (
                                                   vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                   [3U] 
                                                   >> 0x1fU))) 
                                            << 1U) 
                                           & ((((((((~ 
                                                     vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                     [3U]) 
                                                    & (~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [3U] 
                                                        >> 1U))) 
                                                   & (~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [3U] 
                                                       >> 2U))) 
                                                  << 1U) 
                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [3U] 
                                                    >> 2U)) 
                                                & ((~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                     [3U] 
                                                     >> 4U)) 
                                                   << 1U)) 
                                               & ((~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [3U] 
                                                    >> 5U)) 
                                                  << 1U)) 
                                              | ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [3U] 
                                                      & (~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [3U] 
                                                          >> 1U))) 
                                                     & (~ 
                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                         [3U] 
                                                         >> 2U))) 
                                                    << 1U) 
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [3U] 
                                                      >> 2U)) 
                                                  & ((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [3U] 
                                                       >> 4U)) 
                                                     << 1U)) 
                                                 & ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [3U] 
                                                      >> 5U)) 
                                                    << 1U))))) 
                           | (0x3eU & (((~ ((((((~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                  [3U] 
                                                  >> 0x1aU)) 
                                                & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [3U] 
                                                    >> 0x1bU))) 
                                               & (~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                   [3U] 
                                                   >> 0x1cU))) 
                                              & (~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                  [3U] 
                                                  >> 0x1dU))) 
                                             & (~ (
                                                   vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                   [3U] 
                                                   >> 0x1eU))) 
                                            & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                  [3U] 
                                                  >> 0x1fU)))) 
                                        << 1U) & ((
                                                   ((((((~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [3U] 
                                                          >> 0x1aU)) 
                                                        << 1U) 
                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [3U] 
                                                          >> 0x1aU)) 
                                                      & ((~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                           [3U] 
                                                           >> 0x1cU)) 
                                                         << 1U)) 
                                                     & ((~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [3U] 
                                                          >> 0x1dU)) 
                                                        << 1U)) 
                                                    & ((~ 
                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                         [3U] 
                                                         >> 0x1eU)) 
                                                       << 1U)) 
                                                   & ((~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [3U] 
                                                        >> 0x1fU)) 
                                                      << 1U)) 
                                                  | ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [3U] 
                                                          >> 0x19U) 
                                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                            [3U] 
                                                            >> 0x1aU)) 
                                                        & ((~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                             [3U] 
                                                             >> 0x1cU)) 
                                                           << 1U)) 
                                                       & ((~ 
                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                            [3U] 
                                                            >> 0x1dU)) 
                                                          << 1U)) 
                                                      & ((~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                           [3U] 
                                                           >> 0x1eU)) 
                                                         << 1U)) 
                                                     & ((~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [3U] 
                                                          >> 0x1fU)) 
                                                        << 1U))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m[3U] 
        = ((0x1bU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
            [3U]) | (4U & ((0xfcU & (((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [3U] >> 0x18U) 
                                          & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                 [3U] 
                                                 >> 0x1bU)) 
                                             << 2U)) 
                                         & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                [3U] 
                                                >> 0x1cU)) 
                                            << 2U)) 
                                        & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                               [3U] 
                                               >> 0x1dU)) 
                                           << 2U)) 
                                       & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                              [3U] 
                                              >> 0x1eU)) 
                                          << 2U)) & 
                                      ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [3U] >> 0x1fU)) 
                                       << 2U)) & ((0x3fffcU 
                                                   & (((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [3U] 
                                                          >> 0xeU) 
                                                         & ((~ 
                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                              [3U] 
                                                              >> 0x11U)) 
                                                            << 2U)) 
                                                        & ((~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                             [3U] 
                                                             >> 0x12U)) 
                                                           << 2U)) 
                                                       & ((~ 
                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                            [3U] 
                                                            >> 0x13U)) 
                                                          << 2U)) 
                                                      & ((~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                           [3U] 
                                                           >> 0x14U)) 
                                                         << 2U))) 
                                                  | ((((((~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                           [3U] 
                                                           >> 0x10U)) 
                                                         & (~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                             [3U] 
                                                             >> 0x11U))) 
                                                        & (~ 
                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                            [3U] 
                                                            >> 0x12U))) 
                                                       & (~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                           [3U] 
                                                           >> 0x13U))) 
                                                      & (~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [3U] 
                                                          >> 0x14U))) 
                                                     << 2U)))) 
                           | (((~ ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                        [3U] >> 0x1aU) 
                                       & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                             [3U] >> 0x1bU))) 
                                      & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [3U] >> 0x1cU))) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                           [3U] >> 0x1dU))) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                          [3U] >> 0x1eU))) 
                                   & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                         [3U] >> 0x1fU)))) 
                               << 2U) & ((((((0x3cU 
                                              & (((((((~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [3U] 
                                                        >> 0x1aU)) 
                                                      & (~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [3U] 
                                                          >> 0x1bU))) 
                                                     << 2U) 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [3U] 
                                                       >> 0x1aU)) 
                                                   & ((~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [3U] 
                                                        >> 0x1dU)) 
                                                      << 2U)) 
                                                  & ((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [3U] 
                                                       >> 0x1eU)) 
                                                     << 2U)) 
                                                 & ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [3U] 
                                                      >> 0x1fU)) 
                                                    << 2U))) 
                                             | (0x3cU 
                                                & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [3U] 
                                                        >> 0x18U) 
                                                       & ((~ 
                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                            [3U] 
                                                            >> 0x1bU)) 
                                                          << 2U)) 
                                                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                         [3U] 
                                                         >> 0x1aU)) 
                                                     & ((~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [3U] 
                                                          >> 0x1dU)) 
                                                        << 2U)) 
                                                    & ((~ 
                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                         [3U] 
                                                         >> 0x1eU)) 
                                                       << 2U)) 
                                                   & ((~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [3U] 
                                                        >> 0x1fU)) 
                                                      << 2U)))) 
                                            | (0x3cU 
                                               & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [3U] 
                                                       >> 0x18U) 
                                                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                         [3U] 
                                                         >> 0x19U)) 
                                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [3U] 
                                                        >> 0x1aU)) 
                                                    & ((~ 
                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                         [3U] 
                                                         >> 0x1dU)) 
                                                       << 2U)) 
                                                   & ((~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [3U] 
                                                        >> 0x1eU)) 
                                                      << 2U)) 
                                                  & ((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [3U] 
                                                       >> 0x1fU)) 
                                                     << 2U)))) 
                                           | (0x3cU 
                                              & (((((((~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [3U] 
                                                        >> 0x1aU)) 
                                                      << 2U) 
                                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [3U] 
                                                        >> 0x19U)) 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [3U] 
                                                       >> 0x1aU)) 
                                                   & ((~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [3U] 
                                                        >> 0x1dU)) 
                                                      << 2U)) 
                                                  & ((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [3U] 
                                                       >> 0x1eU)) 
                                                     << 2U)) 
                                                 & ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [3U] 
                                                      >> 0x1fU)) 
                                                    << 2U)))) 
                                          | (0x7cU 
                                             & (((((((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [3U] 
                                                       >> 0x1aU)) 
                                                     << 2U) 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [3U] 
                                                       >> 0x19U)) 
                                                   & ((~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [3U] 
                                                        >> 0x1cU)) 
                                                      << 2U)) 
                                                  & ((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [3U] 
                                                       >> 0x1dU)) 
                                                     << 2U)) 
                                                 & ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [3U] 
                                                      >> 0x1eU)) 
                                                    << 2U)) 
                                                & ((~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                     [3U] 
                                                     >> 0x1fU)) 
                                                   << 2U)))) 
                                         | (0x7cU & 
                                            ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                  [3U] 
                                                  >> 0x18U) 
                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [3U] 
                                                    >> 0x19U)) 
                                                & ((~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                     [3U] 
                                                     >> 0x1cU)) 
                                                   << 2U)) 
                                               & ((~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [3U] 
                                                    >> 0x1dU)) 
                                                  << 2U)) 
                                              & ((~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                   [3U] 
                                                   >> 0x1eU)) 
                                                 << 2U)) 
                                             & ((~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                  [3U] 
                                                  >> 0x1fU)) 
                                                << 2U))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m[3U] 
        = ((0x17U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
            [3U]) | (8U & ((((((((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                     [3U] >> 0x1aU)) 
                                 & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                       [3U] >> 0x1bU))) 
                                & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                      [3U] >> 0x1cU))) 
                               & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                     [3U] >> 0x1dU))) 
                              & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                    [3U] >> 0x1eU))) 
                             & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                   [3U] >> 0x1fU))) 
                            << 3U) & ((((((((~ vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                             [3U]) 
                                            & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                  [3U] 
                                                  >> 1U))) 
                                           & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                 [3U] 
                                                 >> 2U))) 
                                          << 3U) & 
                                         vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                         [3U]) & ((~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [3U] 
                                                    >> 4U)) 
                                                  << 3U)) 
                                       & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                              [3U] 
                                              >> 5U)) 
                                          << 3U)) | 
                                      ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                            [3U] & 
                                            (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                [3U] 
                                                >> 1U))) 
                                           & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                 [3U] 
                                                 >> 2U))) 
                                          << 3U) & 
                                         vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                         [3U]) & ((~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [3U] 
                                                    >> 4U)) 
                                                  << 3U)) 
                                       & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                              [3U] 
                                              >> 5U)) 
                                          << 3U))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m[3U] 
        = ((0xfU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
            [3U]) | (0x10U & ((0xfffffff0U & ((((((
                                                   ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [3U] 
                                                      >> 0x1aU)) 
                                                    & (~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [3U] 
                                                        >> 0x1bU))) 
                                                   & (~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [3U] 
                                                       >> 0x1cU))) 
                                                  & (~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [3U] 
                                                      >> 0x1dU))) 
                                                 & (~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                     [3U] 
                                                     >> 0x1eU))) 
                                                & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [3U] 
                                                    >> 0x1fU))) 
                                               << 4U) 
                                              & (((((((~ 
                                                       vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [3U]) 
                                                      & (~ 
                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [3U] 
                                                          >> 1U))) 
                                                     & (~ 
                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                         [3U] 
                                                         >> 2U))) 
                                                    << 4U) 
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [3U] 
                                                      << 1U)) 
                                                  & ((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [3U] 
                                                       >> 4U)) 
                                                     << 4U)) 
                                                 & ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [3U] 
                                                      >> 5U)) 
                                                    << 4U)))) 
                              | (0x3f0U & (((~ ((((
                                                   ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [3U] 
                                                      >> 0x1aU)) 
                                                    & (~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [3U] 
                                                        >> 0x1bU))) 
                                                   & (~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [3U] 
                                                       >> 0x1cU))) 
                                                  & (~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [3U] 
                                                      >> 0x1dU))) 
                                                 & (~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                     [3U] 
                                                     >> 0x1eU))) 
                                                & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [3U] 
                                                    >> 0x1fU)))) 
                                            << 4U) 
                                           & (((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [3U] 
                                                    >> 0x16U) 
                                                   & ((~ 
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [3U] 
                                                        >> 0x1bU)) 
                                                      << 4U)) 
                                                  & ((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                       [3U] 
                                                       >> 0x1cU)) 
                                                     << 4U)) 
                                                 & ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                      [3U] 
                                                      >> 0x1dU)) 
                                                    << 4U)) 
                                                & ((~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                     [3U] 
                                                     >> 0x1eU)) 
                                                   << 4U)) 
                                               & ((~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                    [3U] 
                                                    >> 0x1fU)) 
                                                  << 4U)) 
                                              & ((0xfff0U 
                                                  & (((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                         [3U] 
                                                         >> 0xcU) 
                                                        & ((~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                             [3U] 
                                                             >> 0x11U)) 
                                                           << 4U)) 
                                                       & ((~ 
                                                           (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                            [3U] 
                                                            >> 0x12U)) 
                                                          << 4U)) 
                                                      & ((~ 
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                           [3U] 
                                                           >> 0x13U)) 
                                                         << 4U)) 
                                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                        [3U] 
                                                        >> 0x10U))) 
                                                 | (0xfff0U 
                                                    & ((((((~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                             [3U] 
                                                             >> 0x10U)) 
                                                           & (~ 
                                                              (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                               [3U] 
                                                               >> 0x11U))) 
                                                          & (~ 
                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                              [3U] 
                                                              >> 0x12U))) 
                                                         & (~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                             [3U] 
                                                             >> 0x13U))) 
                                                        << 4U) 
                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__inst
                                                          [3U] 
                                                          >> 0x10U))))))))));
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
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h393a2266__0 
        = ((~ (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                       >> 0x1eU))) & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h10ebbef4__0));
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
    vlSelf->mycpu_top__DOT__u_Main__DOT__ID_down_isCacheInst_o 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hc2e9df91__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_ha7833c56__0));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h05959c5d__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hc2e9df91__0) 
           & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                      >> 0x3eU)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h359adfeb__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hc87b876a__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_ha7833c56__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h33b5084e__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h5716c7f6__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_ha7833c56__0));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h0a658c78__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h5716c7f6__0) 
           & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                      >> 0x3eU)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__ID_up_readData_o 
        = (((QData)((IData)(((0U != (0x1fU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_regReadNum_p_r_i 
                                              >> 5U)))
                              ? ((1U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__hasForward
                                  [1U]) ? vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__REEXE_regData_r_i
                                  : ((2U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__hasForward
                                      [1U]) ? vlSelf->mycpu_top__DOT__u_Main__DOT__WB_finalRes_w_o
                                      : ((0x1eU >= 
                                          (0x1fU & 
                                           ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_regReadNum_p_r_i 
                                             >> 5U) 
                                            - (IData)(1U))))
                                          ? vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile
                                         [(0x1fU & 
                                           ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_regReadNum_p_r_i 
                                             >> 5U) 
                                            - (IData)(1U)))]
                                          : 0U))) : 0U))) 
            << 0x20U) | (QData)((IData)(((0U != (0x1fU 
                                                 & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_regReadNum_p_r_i))
                                          ? ((1U & 
                                              vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__hasForward
                                              [0U])
                                              ? vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__REEXE_regData_r_i
                                              : ((2U 
                                                  & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__hasForward
                                                  [0U])
                                                  ? vlSelf->mycpu_top__DOT__u_Main__DOT__WB_finalRes_w_o
                                                  : 
                                                 ((0x1eU 
                                                   >= 
                                                   (0x1fU 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_regReadNum_p_r_i 
                                                       - (IData)(1U))))
                                                   ? 
                                                  vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile
                                                  [
                                                  (0x1fU 
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_regReadNum_p_r_i 
                                                      - (IData)(1U)))]
                                                   : 0U)))
                                          : 0U))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_ha094bdb8__0 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h03f81cc8__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_ha7833c56__0));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hd9433986__0 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h03f81cc8__0) 
           & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                      >> 0x3eU)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h2c1313c8__0 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h4ed98483__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_ha7833c56__0));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h72436f12__0 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h4ed98483__0) 
           & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                      >> 0x3eU)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hf4959896__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h83209bf5__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_ha7833c56__0));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h234504bc__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h83209bf5__0) 
           & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                      >> 0x3eU)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h56120487__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hb66b3991__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_ha7833c56__0));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h6da380dd__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hb66b3991__0) 
           & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                      >> 0x3eU)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h85d3b635__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hb94d6dcf__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_ha7833c56__0));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hb3233a0f__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hb94d6dcf__0) 
           & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                      >> 0x3eU)));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h7ce500d6__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hb67f0d8d__0) 
           & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                      >> 0x3eU)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hea640af0__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h8d320ccd__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_ha7833c56__0));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hb43496c6__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h8d320ccd__0) 
           & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                      >> 0x3eU)));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h890c71d0__0 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hfefbb480__0) 
           & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                      >> 0x3eU)));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h24a83fa1__0 
        = ((~ (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                       >> 0x3eU))) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hfefbb480__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h2b682062__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_heddc22ab__0)
            ? mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT____VdfgTmp_hf6a71238__0
            : mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT____VdfgTmp_hd7683b01__0);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h24613937__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_hed933301__0)
            ? mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT____VdfgTmp_h68c645d6__0
            : mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT____VdfgTmp_hcedc22ac__0);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h2be6a8b5__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_hed973b3c__0)
            ? mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT____VdfgTmp_he0e21672__0
            : vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__BTB_fifthVAddr_o);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__BTB_predTake_p_o 
        = (((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_hed933301__0) 
            << 3U) | (((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_hed973b3c__0) 
                       << 2U) | (((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_heddc22ab__0) 
                                  << 1U) | (IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_heddd41c6__0))));
    if (mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_heddd41c6__0) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h2a155fb0__0 
            = mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT____VdfgTmp_h8dd29e80__0;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h7c474841__0 
            = (1U & ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__PCR_needDelaySlot_o)) 
                     & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__PCR_instEnable_o)));
    } else {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h2a155fb0__0 
            = mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT____VdfgTmp_hddbd0299__0;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h7c474841__0 = 0U;
    }
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h5280fd99__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h24ce65c0__0) 
           & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                      >> 0x1eU)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_0 
        = ((~ (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                       >> 0x1fU))) & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h24ce65c0__0));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h251c8d32__0 
        = ((~ (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                       >> 0x1eU))) & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h24ce65c0__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h37a5b348__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hee235b88__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_ha7833c56__0));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h5c553896__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hee235b88__0) 
           & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                      >> 0x3eU)));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hb28be266__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_heeba4413__0) 
           & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                      >> 0x3eU)));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h79b22941__0 
        = ((~ (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                       >> 0x3eU))) & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hd4059e60__0));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hd8757bf8__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hd4059e60__0) 
           & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                      >> 0x3eU)));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h0528b0ae__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h0921cbb3__0) 
           & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                      >> 0x3eU)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_0 
        = ((~ (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                       >> 0x3fU))) & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h0921cbb3__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h33561494__0 
        = ((~ (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                       >> 0x3eU))) & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h0921cbb3__0));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__Data_Data_TP__wen 
        = (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h68fa2eee__0 
           | vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h077415b1__0);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__Data_Data_TP__wen 
        = (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h8df67b7c__0 
           | vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h6053820f__0);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__Data_Data_TP__wen 
        = (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hb0774e16__0 
           | vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_ha774a041__0);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__Data_Data_TP__wen 
        = (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h9253e7f8__0 
           | vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_h4d0fc773__0);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h6964710a__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
               >> 4U)) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h06f719c1__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h054e529d__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
               >> 4U)) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h6acd382a__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hed6f9162__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h75850dfd__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h6488fdb0__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hfd9d8f12__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h75850dfd__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h7436f760__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h31b94968__0 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf2b7c392__0) 
           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
              >> 4U));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hbd0cf5bd__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
               >> 4U)) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb30f954a__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h5bfce17d__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha27d0374__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h7436f760__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hbe9eaaa2__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
               >> 3U)) & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha27d0374__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h5bbadc13__0 
        = (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h9eb4b5eb__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h2182808f__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hd592c80b__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h9eb4b5eb__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf0632857__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hc1abcfb8__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h9eb4b5eb__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hde2548fc__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf093ce41__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h9eb4b5eb__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__0__KET____DOT__temp___05F2 
        = (IData)(((0U == (0x18000000U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U])) 
                   & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h0a374724__0)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h2f0da4fa__0 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h6c0adfc7__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb5619a15__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h5931cc7c__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha738a093__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hc371a6b6__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h2f01c093__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha738a093__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb5619a15__0));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h10646167__0 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h7f6c215a__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hc371a6b6__0));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hcf822cbf__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hfd0a5637__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hc371a6b6__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hddf2301e__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hfd0a5637__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb5619a15__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h61b07b8c__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h769eaeec__0) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h0b466653__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hcb972f4a__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h769eaeec__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb5619a15__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h44c7ceb6__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hff1ab896__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hc371a6b6__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h56d7d3d7__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hff1ab896__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb5619a15__0));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h87d21bf8__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hd0ab33ad__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hc371a6b6__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h493a513a__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hd0ab33ad__0) 
           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
              >> 0x1dU));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb19ecac8__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h724e8175__0) 
           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
              >> 0x1dU));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h564a7919__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
               >> 0x1dU)) & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h724e8175__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h6682524e__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
               >> 4U)) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_he3742997__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb931fc0d__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h7c968ba3__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h4c3950eb__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb778b3ea__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h7c968ba3__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h4e008f50__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hda6cd53a__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h935dc71e__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h4e008f50__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb5f6bc5e__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
               >> 3U)) & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h935dc71e__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h6700724b__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hbc2b0b10__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hd1595329__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hea4f50f4__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hbdf419e9__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hd1595329__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hda8347b9__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hd5ace64e__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hd1595329__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h023e85a8__0 
        = (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hd1595329__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hd9de282f__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
               >> 4U)) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h70504f38__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hfc74eb28__0 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf1c3146d__0) 
           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
              >> 4U));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h727d9513__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
               >> 4U)) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hd6ade43c__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__1__KET____DOT__temp___05F2 
        = (IData)(((0U == (0x18000000U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U])) 
                   & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h1299a1b1__0)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h4a3919b5__0 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h5be28400__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h90625e43__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h30286939__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h66e998e2__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha5731aee__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h1ad92a94__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h66e998e2__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h90625e43__0));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h01ff5cae__0 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h5ec9a396__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha5731aee__0));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha108cfa5__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hfc3378fc__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha5731aee__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb63980f0__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hfc3378fc__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h90625e43__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h7ee79cc2__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h7628166e__0) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h10c0b07c__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hfe482ebb__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h7628166e__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h90625e43__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h0ef7c669__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h5fb10c29__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha5731aee__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h1be481c2__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h5fb10c29__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h90625e43__0));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h33036c05__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h1dc89079__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha5731aee__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h662b37ee__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h1dc89079__0) 
           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
              >> 0x1dU));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf90d2b74__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h7bd68717__0) 
           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
              >> 0x1dU));
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h244c62d2__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
               >> 0x1dU)) & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h7bd68717__0));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hf6d406ff__0 
        = ((~ ((IData)(vlSelf->mycpu_top__DOT__data_unCache) 
               | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_miss))) 
           & (0U != (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_hit_way)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__ok_to_do_tlbInst 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT____VdfgTmp_hf5108738__0) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_isTLBInst_r_i));
    vlSelf->mycpu_top__DOT__u_Main__DOT__SBA_forwardMode_w_o 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__ready) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__hasData));
    if (vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_hasRisk_w_o) {
        if (vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_hasRisk_w_o) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_exceptSeg_w_o = 7U;
            vlSelf->__VdfgTmp_he8465266__0 = 1U;
        } else {
            vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_exceptSeg_w_o = 3U;
            vlSelf->__VdfgTmp_he8465266__0 = 0U;
        }
    } else {
        vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_exceptSeg_w_o = 1U;
        vlSelf->__VdfgTmp_he8465266__0 = 0U;
    }
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_FirstCacheTrace__DOT__ready_go 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_allowin_w_o) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_FirstCacheTrace__DOT__hasData));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT____VdfgTmp_hf06d4339__0 
        = ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_needDelaySlot_o)) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_valid_o));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT____Vcellinp__ALU_u__scr1 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_oprand1IsReg_r_i)
            ? vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT____VdfgTmp_h6d3044db__0
            : vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_oprand1_r_i);
    mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__bgt_take 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT____VdfgTmp_hf18ea45d__0 
               >> 0x1fU)) & (0U != (0x7fffffffU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT____VdfgTmp_hf18ea45d__0)));
    mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__beq_take 
        = (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT____VdfgTmp_hf18ea45d__0 
           == vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT____VdfgTmp_h6d3044db__0);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT____Vcellinp__ALU_u__scr0 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_oprand0IsReg_r_i)
            ? vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT____VdfgTmp_hf18ea45d__0
            : vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_oprand0_r_i);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT____VdfgTmp_he83d2f02__0 
        = ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__divisor_i 
            << 8U) | (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__divisor_i 
                      >> 0x18U));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT____VdfgTmp_he965824d__0 
        = ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__divisor_i 
            << 0x10U) | (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__divisor_i 
                         >> 0x10U));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT____VdfgTmp_he80de16b__0 
        = ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__divisor_i 
            << 0x18U) | (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__divisor_i 
                         >> 8U));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT____Vcellinp__Multiplier_u__B 
        = (((QData)((IData)(((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_mduOperator_r_i) 
                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__divisor_i 
                                >> 0x1fU)))) << 0x20U) 
           | (QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__divisor_i)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__y_sign 
        = ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__divisor_i 
            >> 0x1fU) & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_mduOperator_r_i) 
                         >> 2U));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT____Vcellinp__ALU_u__scr1 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_oprand1IsReg_r_i)
            ? vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__divisor_i
            : vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_oprand1_r_i);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT____Vcellinp__Multiplier_u__A 
        = (((QData)((IData)(((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_mduOperator_r_i) 
                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__divident_i 
                                >> 0x1fU)))) << 0x20U) 
           | (QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__divident_i)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__reminder_sign 
        = ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__divident_i 
            >> 0x1fU) & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_mduOperator_r_i) 
                         >> 2U));
    if ((0x20U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__timer))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_mulRes_o 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__quotient_o;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MDU_writeData[0U] 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__quotient_o;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MDU_writeData[1U] 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__reminder_o;
    } else if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__mulr_data_ok) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_mulRes_o 
            = (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__mulRes);
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MDU_writeData[0U] 
            = (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__mulRes);
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MDU_writeData[1U] 
            = (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__mulRes 
                       >> 0x20U));
    } else {
        vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_mulRes_o 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__divident_i;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MDU_writeData[0U] 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__divident_i;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MDU_writeData[1U] 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__divident_i;
    }
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__alignCheck 
        = (3U & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__divident_i 
                 + vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_oprand1_r_i));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT____Vcellinp__ALU_u__scr0 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_oprand0IsReg_r_i)
            ? vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__divident_i
            : vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_oprand0_r_i);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel[0U] 
        = ((0x1eU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel
            [0U]) | (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
                     [0U] & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_valid_o)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel[0U] 
        = ((0x1dU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel
            [0U]) | (0xfffffffeU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
                                    [0U] & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_valid_o) 
                                            << 1U))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel[0U] 
        = ((0x1bU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel
            [0U]) | (0xfffffffcU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
                                    [0U] & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_valid_o) 
                                            << 2U))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel[1U] 
        = ((0x1eU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel
            [1U]) | (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
                     [1U] & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_valid_o)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel[1U] 
        = ((0x1dU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel
            [1U]) | (0xfffffffeU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
                                    [1U] & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_valid_o) 
                                            << 1U))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel[1U] 
        = ((0x1bU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel
            [1U]) | (0xfffffffcU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
                                    [1U] & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_valid_o) 
                                            << 2U))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel[2U] 
        = ((0x1eU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel
            [2U]) | (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
                     [2U] & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_valid_o)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel[2U] 
        = ((0x1dU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel
            [2U]) | (0xfffffffeU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
                                    [2U] & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_valid_o) 
                                            << 1U))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel[2U] 
        = ((0x1bU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel
            [2U]) | (0xfffffffcU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
                                    [2U] & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_valid_o) 
                                            << 2U))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel[3U] 
        = ((0x1eU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel
            [3U]) | (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
                     [3U] & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_valid_o)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel[3U] 
        = ((0x1dU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel
            [3U]) | (0xfffffffeU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
                                    [3U] & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_valid_o) 
                                            << 1U))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel[3U] 
        = ((0x1bU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel
            [3U]) | (0xfffffffcU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
                                    [3U] & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_valid_o) 
                                            << 2U))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__isJRInst[0U] 
        = (1U & ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
                  [0U] >> 3U) & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
                                 [0U] >> 4U)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__isJRInst[1U] 
        = (1U & ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
                  [1U] >> 3U) & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
                                 [1U] >> 4U)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__isJRInst[2U] 
        = (1U & ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
                  [2U] >> 3U) & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
                                 [2U] >> 4U)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__isJRInst[3U] 
        = (1U & ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
                  [3U] >> 3U) & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
                                 [3U] >> 4U)));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_4 
        = ((~ (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                       >> 0x1fU))) & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h393a2266__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h6f325372__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h24a83fa1__0) 
           & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                      >> 0x3fU)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_4 
        = ((~ (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                       >> 0x3fU))) & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h24a83fa1__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h00616ab3__0 
        = ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h7c474841__0)) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h7c5d4f22__0));
    mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h020966c0__0 
        = (1U & ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h7c474841__0)) 
                 & (~ (IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h7c5d4f22__0))));
    mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_3 
        = ((~ (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                       >> 0x1fU))) & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h5280fd99__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2 
        = ((~ (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                       >> 0x1fU))) & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h251c8d32__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__temp_2_3 
        = ((~ (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                       >> 0x3fU))) & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hb28be266__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hcbd1fb4a__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h79b22941__0) 
           & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                      >> 0x3fU)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hc0f5feed__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hd8757bf8__0) 
           & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                      >> 0x3fU)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h6e16e375__0 
        = (((~ (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                        >> 0x3fU))) & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h890c71d0__0)) 
           | (((~ (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                           >> 0x3fU))) & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hd9433986__0)) 
              | (((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hc87b876a__0) 
                  & (IData)((0x4000000000000000ULL 
                             == (0xc000000000000000ULL 
                                 & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i)))) 
                 | (((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h890c71d0__0) 
                     & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                                >> 0x3fU))) | (((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hd9433986__0) 
                                                & (IData)(
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                                                           >> 0x3fU))) 
                                               | (((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hb3233a0f__0) 
                                                   & (IData)(
                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                                                              >> 0x3fU))) 
                                                  | (((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h234504bc__0) 
                                                      & (IData)(
                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                                                                 >> 0x3fU))) 
                                                     | (((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hb43496c6__0) 
                                                         & (IData)(
                                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                                                                    >> 0x3fU))) 
                                                        | (((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h72436f12__0) 
                                                            & (IData)(
                                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                                                                       >> 0x3fU))) 
                                                           | (((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h7ce500d6__0) 
                                                               & (IData)(
                                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                                                                          >> 0x3fU))) 
                                                              | (((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h6da380dd__0) 
                                                                  & (IData)(
                                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                                                                             >> 0x3fU))) 
                                                                 | (((~ (IData)(
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                                                                                >> 0x3fU))) 
                                                                     & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hd8757bf8__0)) 
                                                                    | (((~ (IData)(
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                                                                                >> 0x3fU))) 
                                                                        & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hb43496c6__0)) 
                                                                       | (((~ (IData)(
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                                                                                >> 0x3fU))) 
                                                                           & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h72436f12__0)) 
                                                                          | (((~ (IData)(
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                                                                                >> 0x3fU))) 
                                                                              & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h0a658c78__0)) 
                                                                             | (((~ (IData)(
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                                                                                >> 0x3fU))) 
                                                                                & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h7ce500d6__0)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                                                                                >> 0x3fU))) 
                                                                                & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h6da380dd__0)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                                                                                >> 0x3fU))) 
                                                                                & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h05959c5d__0)) 
                                                                                | (((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h8a6ec0f0__0) 
                                                                                & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_ha7833c56__0)) 
                                                                                | (((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_heeba4413__0) 
                                                                                & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_ha7833c56__0)) 
                                                                                | (((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hb67f0d8d__0) 
                                                                                & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_ha7833c56__0)) 
                                                                                | (((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h5c553896__0) 
                                                                                & (IData)(
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                                                                                >> 0x3fU))) 
                                                                                | (((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h8a6ec0f0__0) 
                                                                                & (IData)(
                                                                                (0xc000000000000000ULL 
                                                                                == 
                                                                                (0xc000000000000000ULL 
                                                                                & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i)))) 
                                                                                | (((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hb28be266__0) 
                                                                                & (IData)(
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                                                                                >> 0x3fU))) 
                                                                                | (((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h05959c5d__0) 
                                                                                & (IData)(
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                                                                                >> 0x3fU))) 
                                                                                | (((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h0a658c78__0) 
                                                                                & (IData)(
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                                                                                >> 0x3fU))) 
                                                                                | ((~ (IData)(
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                                                                                >> 0x3fU))) 
                                                                                & ((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h5c553896__0) 
                                                                                | ((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hb3233a0f__0) 
                                                                                | (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h234504bc__0))))))))))))))))))))))))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h07d6f23d__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h0528b0ae__0) 
           & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                      >> 0x3fU)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_3 
        = ((~ (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                       >> 0x3fU))) & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h0528b0ae__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h940593f0__0 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h33561494__0) 
           & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                      >> 0x3fU)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2 
        = ((~ (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                       >> 0x3fU))) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h33561494__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb19de015__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
               >> 4U)) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hbe9eaaa2__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h011785a5__0 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h5931cc7c__0) 
           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
              >> 0x1fU));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h70a699d4__0 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h2f01c093__0) 
           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
              >> 0x1fU));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb66685d8__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
               >> 0x1fU)) & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h10646167__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_he941b43b__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h10646167__0) 
           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
              >> 0x1fU));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__0__KET____DOT__temp___05F4 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
               >> 0x1fU)) & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hcf822cbf__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h0a3bf3b1__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hcf822cbf__0) 
           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
              >> 0x1fU));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hc0190d78__0 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hddf2301e__0) 
           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
              >> 0x1fU));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h05d0205b__0 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hcb972f4a__0) 
           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
              >> 0x1fU));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf3e28ff6__0 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h44c7ceb6__0) 
           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
              >> 0x1fU));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf45ceedf__0 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h56d7d3d7__0) 
           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
              >> 0x1fU));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h3ed14f69__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
               >> 0x1fU)) & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h87d21bf8__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h04ba1cc4__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h87d21bf8__0) 
           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
              >> 0x1fU));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__0__KET____DOT__temp___05F3 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h493a513a__0) 
           & (IData)((0x40000000U == (0xc0000000U & 
                                      vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U]))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hd6cbc546__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb19ecac8__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hcb930240__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hfded45a1__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
               >> 0x1eU)) & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb19ecac8__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__0__KET____DOT__temp___05F1 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
               >> 0x1fU)) & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h564a7919__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hda0b1be3__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h564a7919__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hcb930240__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h513117f0__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[1U] 
               >> 0x1eU)) & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h564a7919__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h9304bd71__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
               >> 4U)) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb5f6bc5e__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h30f5a730__0 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h30286939__0) 
           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
              >> 0x1fU));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h500870ec__0 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h1ad92a94__0) 
           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
              >> 0x1fU));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hd8878281__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h01ff5cae__0) 
           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
              >> 0x1fU));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h911bea95__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
               >> 0x1fU)) & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h01ff5cae__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__1__KET____DOT__temp___05F4 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
               >> 0x1fU)) & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha108cfa5__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h35f25981__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha108cfa5__0) 
           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
              >> 0x1fU));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_he5aa8fb3__0 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb63980f0__0) 
           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
              >> 0x1fU));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h0f8cbc59__0 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hfe482ebb__0) 
           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
              >> 0x1fU));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h46aac094__0 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h0ef7c669__0) 
           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
              >> 0x1fU));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h16845a6a__0 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h1be481c2__0) 
           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
              >> 0x1fU));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h7cc82e19__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h33036c05__0) 
           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
              >> 0x1fU));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h5e17f97e__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
               >> 0x1fU)) & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h33036c05__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__1__KET____DOT__temp___05F3 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h662b37ee__0) 
           & (IData)((0x40000000U == (0xc0000000U & 
                                      vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U]))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb704c67d__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf90d2b74__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_heb0cf660__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h92f007fc__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
               >> 0x1eU)) & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf90d2b74__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT__genblk21__BRA__1__KET____DOT__temp___05F1 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
               >> 0x1fU)) & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h244c62d2__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hc76762b7__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h244c62d2__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_heb0cf660__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h69b15f42__0 
        = ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb0dabb85__0[1U] 
               >> 0x1eU)) & (IData)(mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h244c62d2__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__ready 
        = (1U & ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_memReq_r_i)) 
                 | (((0U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat)) 
                     & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hf6d406ff__0)) 
                    | (((1U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat)) 
                        & ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_req) 
                           & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hf6d406ff__0))) 
                       | ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__data_uca_data_ok) 
                          & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_req))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_search_w_o 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__ok_to_do_tlbInst) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_TLBInstOperator_r_i));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ALU_u__DOT__u_adder__DOT__data_b 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ALU_u__DOT__u_adder__DOT____VdfgTmp_hd2aefce6__0)
            ? (~ vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT____Vcellinp__ALU_u__scr1)
            : vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT____Vcellinp__ALU_u__scr1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_up_corrTake_o 
        = (1U & ((0x20U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_branchKind_r_i))
                  ? (IData)(mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__beq_take)
                  : ((0x10U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_branchKind_r_i))
                      ? (~ (IData)(mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__beq_take))
                      : ((4U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_branchKind_r_i))
                          ? (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT____VdfgTmp_hf18ea45d__0 
                             >> 0x1fU) : ((2U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_branchKind_r_i))
                                           ? (~ (IData)(mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__bgt_take))
                                           : ((1U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_branchKind_r_i))
                                               ? (IData)(mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__bgt_take)
                                               : ((8U 
                                                   & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_branchKind_r_i))
                                                   ? 
                                                  (~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT____VdfgTmp_hf18ea45d__0 
                                                    >> 0x1fU))
                                                   : (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_branchRisk_r_i))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ALU_u__DOT__or_res 
        = (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT____Vcellinp__ALU_u__scr0 
           | vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT____Vcellinp__ALU_u__scr1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ALU_u__DOT__u_adder__DOT__data_b 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ALU_u__DOT__u_adder__DOT____VdfgTmp_hd2aefce6__0)
            ? (~ vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT____Vcellinp__ALU_u__scr1)
            : vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT____Vcellinp__ALU_u__scr1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_memEnable_o 
        = ((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_loadMode_r_i) 
                  | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_loadMode_r_i) 
                      >> 1U) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_storeMode_r_i))))
            ? ((0U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__alignCheck))
                ? 1U : ((1U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__alignCheck))
                         ? 2U : ((2U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__alignCheck))
                                  ? 4U : 8U))) : ((1U 
                                                   & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT____VdfgTmp_hfe30ddba__0) 
                                                      | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_storeMode_r_i) 
                                                         >> 1U)))
                                                   ? 
                                                  ((0U 
                                                    == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__alignCheck))
                                                    ? 3U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__alignCheck))
                                                     ? 0xcU
                                                     : 0U))
                                                   : 
                                                  ((1U 
                                                    & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_loadMode_r_i) 
                                                        >> 5U) 
                                                       | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_storeMode_r_i) 
                                                          >> 3U)))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__alignCheck))
                                                     ? 0xfU
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__alignCheck))
                                                      ? 0xeU
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__alignCheck))
                                                       ? 0xcU
                                                       : 8U)))
                                                    : 
                                                   ((IData)(
                                                            (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_loadMode_r_i) 
                                                              >> 6U) 
                                                             | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_storeMode_r_i) 
                                                                >> 4U)))
                                                     ? 
                                                    ((0U 
                                                      == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__alignCheck))
                                                      ? 1U
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__alignCheck))
                                                       ? 3U
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__alignCheck))
                                                        ? 7U
                                                        : 0xfU)))
                                                     : 0xfU))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ALU_u__DOT__or_res 
        = (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT____Vcellinp__ALU_u__scr0 
           | vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT____Vcellinp__ALU_u__scr1);
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel[0U] 
        = ((0x17U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel
            [0U]) | (((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__isJRInst
                       [0U] ? (~ vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__isRsFull
                               [0U]) : (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
                                        [0U] >> 3U)) 
                      & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_valid_o)) 
                     << 3U));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel[0U] 
        = ((0xfU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel
            [0U]) | (((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__isJRInst
                       [0U] ? vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__isRsFull
                       [0U] : (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
                               [0U] >> 4U)) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_valid_o)) 
                     << 4U));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel[1U] 
        = ((0x17U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel
            [1U]) | (((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__isJRInst
                       [1U] ? (~ vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__isRsFull
                               [1U]) : (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
                                        [1U] >> 3U)) 
                      & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_valid_o)) 
                     << 3U));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel[1U] 
        = ((0xfU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel
            [1U]) | (((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__isJRInst
                       [1U] ? vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__isRsFull
                       [1U] : (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
                               [1U] >> 4U)) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_valid_o)) 
                     << 4U));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel[2U] 
        = ((0x17U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel
            [2U]) | (((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__isJRInst
                       [2U] ? (~ vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__isRsFull
                               [2U]) : (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
                                        [2U] >> 3U)) 
                      & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_valid_o)) 
                     << 3U));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel[2U] 
        = ((0xfU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel
            [2U]) | (((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__isJRInst
                       [2U] ? vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__isRsFull
                       [2U] : (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
                               [2U] >> 4U)) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_valid_o)) 
                     << 4U));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel[3U] 
        = ((0x17U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel
            [3U]) | (((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__isJRInst
                       [3U] ? (~ vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__isRsFull
                               [3U]) : (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
                                        [3U] >> 3U)) 
                      & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_valid_o)) 
                     << 3U));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel[3U] 
        = ((0xfU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel
            [3U]) | (((vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__isJRInst
                       [3U] ? vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__isRsFull
                       [3U] : (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_TakeDestDecorder__DOT__takeDestSel_m
                               [3U] >> 4U)) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_valid_o)) 
                     << 4U));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h99804cb6__0 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h020966c0__0) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h40f69812__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__needDelaySlot 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h020966c0__0) 
           & ((~ (IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h40f69812__0)) 
              & ((IData)(mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_hed933301__0) 
                 & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h52796ce4__0))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__oprand1_sel_up[0U] 
        = ((6U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__oprand1_sel_up
            [0U]) | (1U & (((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_3) 
                            & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                  [0U] >> 0x19U))) 
                           | ((~ (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_3)) 
                              & (((((((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                          [0U] >> 0x1aU)) 
                                      & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                            [0U] >> 0x1bU))) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                           [0U] >> 0x1cU))) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                          [0U] >> 0x1dU))) 
                                   & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                         [0U] >> 0x1eU))) 
                                  & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                        [0U] >> 0x1fU))) 
                                 | ((((((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                            [0U] >> 0x1aU)) 
                                        & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                              [0U] 
                                              >> 0x1bU))) 
                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                          [0U] >> 0x1cU)) 
                                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                         [0U] >> 0x1dU)) 
                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                        [0U] >> 0x1eU)) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                          [0U] >> 0x1fU))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__oprand0_sel_up[0U] 
        = ((3U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__oprand0_sel_up
            [0U]) | (4U & ((((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_4) 
                             & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                   [0U] >> 0x13U))) 
                            << 2U) | (((~ (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_4)) 
                                       << 2U) & (((~ (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_3)) 
                                                  << 2U) 
                                                 & ((0x3cU 
                                                     & ((((((~ 
                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [0U] 
                                                              >> 0x1bU)) 
                                                            << 2U) 
                                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [0U] 
                                                              >> 0x1aU)) 
                                                          & ((~ 
                                                              (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [0U] 
                                                               >> 0x1dU)) 
                                                             << 2U)) 
                                                         & ((~ 
                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [0U] 
                                                              >> 0x1fU)) 
                                                            << 2U)) 
                                                        | ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [0U] 
                                                              >> 0x19U) 
                                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [0U] 
                                                                >> 0x1aU)) 
                                                            & ((~ 
                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                 [0U] 
                                                                 >> 0x1dU)) 
                                                               << 2U)) 
                                                           & ((~ 
                                                               (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [0U] 
                                                                >> 0x1fU)) 
                                                              << 2U)))) 
                                                    | (0x7cU 
                                                       & ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [0U] 
                                                             >> 0x19U) 
                                                            & ((~ 
                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                 [0U] 
                                                                 >> 0x1cU)) 
                                                               << 2U)) 
                                                           & ((~ 
                                                               (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [0U] 
                                                                >> 0x1dU)) 
                                                              << 2U)) 
                                                          & ((~ 
                                                              (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [0U] 
                                                               >> 0x1fU)) 
                                                             << 2U)))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__oprand1_sel_up[0U] 
        = ((5U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__oprand1_sel_up
            [0U]) | (2U & ((0x3ffeU & (((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_4) 
                                        << 1U) & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [0U] 
                                                  >> 0x12U))) 
                           | (((~ (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_4)) 
                               << 1U) & (((~ (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_3)) 
                                          << 1U) & 
                                         (((((0xeU 
                                              & (((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [0U] 
                                                   >> 0x1cU) 
                                                  & ((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [0U] 
                                                       >> 0x1eU)) 
                                                     << 1U)) 
                                                 & ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [0U] 
                                                      >> 0x1fU)) 
                                                    << 1U))) 
                                             | (2U 
                                                & ((((~ 
                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [0U] 
                                                       >> 0x1dU)) 
                                                     & (~ 
                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                         [0U] 
                                                         >> 0x1eU))) 
                                                    << 1U) 
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [0U] 
                                                      >> 0x1eU)))) 
                                            | (2U & 
                                               (((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [0U] 
                                                  >> 0x1cU) 
                                                 & ((~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [0U] 
                                                      >> 0x1eU)) 
                                                    << 1U)) 
                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [0U] 
                                                   >> 0x1eU)))) 
                                           | (2U & 
                                              ((((~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [0U] 
                                                   >> 0x1dU)) 
                                                 << 1U) 
                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [0U] 
                                                   >> 0x1dU)) 
                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [0U] 
                                                  >> 0x1eU)))) 
                                          | (2U & (
                                                   ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [0U] 
                                                     >> 0x1cU) 
                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                       [0U] 
                                                       >> 0x1dU)) 
                                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [0U] 
                                                      >> 0x1eU)))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__oprand1_sel_up[0U] 
        = ((3U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__oprand1_sel_up
            [0U]) | (4U & ((((IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_4) 
                             & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                   [0U] >> 0x13U))) 
                            << 2U) | (((~ (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_4)) 
                                       << 2U) & (((~ (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_3)) 
                                                  << 2U) 
                                                 & ((0x3cU 
                                                     & ((((((~ 
                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [0U] 
                                                              >> 0x1bU)) 
                                                            << 2U) 
                                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [0U] 
                                                              >> 0x1aU)) 
                                                          & ((~ 
                                                              (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [0U] 
                                                               >> 0x1dU)) 
                                                             << 2U)) 
                                                         & ((~ 
                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [0U] 
                                                              >> 0x1fU)) 
                                                            << 2U)) 
                                                        | ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [0U] 
                                                              >> 0x19U) 
                                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [0U] 
                                                                >> 0x1aU)) 
                                                            & ((~ 
                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                 [0U] 
                                                                 >> 0x1dU)) 
                                                               << 2U)) 
                                                           & ((~ 
                                                               (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [0U] 
                                                                >> 0x1fU)) 
                                                              << 2U)))) 
                                                    | (0x7cU 
                                                       & ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [0U] 
                                                             >> 0x19U) 
                                                            & ((~ 
                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                 [0U] 
                                                                 >> 0x1cU)) 
                                                               << 2U)) 
                                                           & ((~ 
                                                               (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [0U] 
                                                                >> 0x1dU)) 
                                                              << 2U)) 
                                                          & ((~ 
                                                              (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [0U] 
                                                               >> 0x1fU)) 
                                                             << 2U)))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up[0U] 
        = ((0x3ffeU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up
            [0U]) | (1U & ((~ (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_3)) 
                           & (((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                  [0U] >> 0x1aU) & 
                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                  [0U] >> 0x1bU)) & 
                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                 [0U] >> 0x1cU)) & 
                               (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                [0U] >> 0x1dU)) & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [0U] 
                                                    >> 0x1fU))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h1f3d011e__0 
        = ((~ (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                       >> 5U))) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h9b4d2d04__0 
        = (1U & (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i)) 
                  & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2)) 
                 | ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2)) 
                    & (((~ (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                                    >> 0x14U))) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_1)) 
                       | ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_1)) 
                          & ((IData)((0x10000000ULL 
                                      == (0x14000000ULL 
                                          & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i))) 
                             | ((IData)((0x14000000ULL 
                                         == (0x14000000ULL 
                                             & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i))) 
                                | (IData)((0ULL == 
                                           (0x14000000ULL 
                                            & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i))))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hdb0d3f0f__0 
        = (1U & ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2)) 
                 & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h648e5e68__0) 
                    | (IData)((0x8000000ULL == (0x18000000ULL 
                                                & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__ID_up_branchRisk_o 
        = (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2) 
            & (IData)((8ULL == (0x1eULL & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i)))) 
           | ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2)) 
              & (((~ (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                              >> 0x13U))) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_1)) 
                 | ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_1)) 
                    & (IData)(mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hcec3c834__0)))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__exceptionSel_up[0U] 
        = ((1U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__exceptionSel_up
            [0U]) | (2U & ((0xffffffeU & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2) 
                                           << 1U) & 
                                          ((((((~ vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                [0U]) 
                                               & (~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [0U] 
                                                   >> 2U))) 
                                              & (~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [0U] 
                                                  >> 3U))) 
                                             & (~ (
                                                   vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [0U] 
                                                   >> 4U))) 
                                            << 1U) 
                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                              [0U] 
                                              >> 4U)))) 
                           | (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2)) 
                               & (((((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                         [0U] >> 0x1aU)) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                           [0U] >> 0x1bU))) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                          [0U] >> 0x1cU))) 
                                   & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                         [0U] >> 0x1eU))) 
                                  & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                        [0U] >> 0x1fU)))) 
                              << 1U))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__exceptionSel_up[0U] 
        = ((2U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__exceptionSel_up
            [0U]) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2) 
                      & ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                          [0U] >> 4U) & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                         [0U] >> 5U))) 
                     | ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2)) 
                        & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_1) 
                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                              [0U] >> 0x13U)))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__trapKind_up[0U] 
        = ((0xeU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__trapKind_up
            [0U]) | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2) 
                     & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                            [0U] >> 1U)) & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                               [0U] 
                                               >> 2U)))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__decorderExcCode_up[0U] 
        = ((0x1eU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__decorderExcCode_up
            [0U]) | (1U & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2) 
                            & (((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                     [0U] & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                             [0U] >> 2U)) 
                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                       [0U] >> 3U)) 
                                   & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                         [0U] >> 4U))) 
                                  & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                        [0U] >> 5U))) 
                                 | (((((~ vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                        [0U]) & (~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [0U] 
                                                  >> 2U))) 
                                      & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                            [0U] >> 3U))) 
                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                        [0U] >> 4U)) 
                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                       [0U] >> 5U))) 
                                | ((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                      [0U] & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                 [0U] 
                                                 >> 2U))) 
                                     & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                           [0U] >> 3U))) 
                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                       [0U] >> 4U)) 
                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                      [0U] >> 5U))) 
                               | (((((~ vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                      [0U]) & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                               [0U] 
                                               >> 2U)) 
                                    & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                          [0U] >> 3U))) 
                                   & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                      [0U] >> 4U)) 
                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                     [0U] >> 5U)))) 
                           | ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2)) 
                              & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_1) 
                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                     [0U] >> 0x13U)) 
                                 | ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_1)) 
                                    & (((((((((((~ 
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
                                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                 [0U] 
                                                 >> 0x1dU)) 
                                             & (~ (
                                                   vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [0U] 
                                                   >> 0x1eU))) 
                                            & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                               [0U] 
                                               >> 0x1fU)) 
                                           | ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [0U] 
                                                   >> 0x1aU) 
                                                  & (~ 
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                      [0U] 
                                                      >> 0x1bU))) 
                                                 & (~ 
                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                     [0U] 
                                                     >> 0x1cU))) 
                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [0U] 
                                                   >> 0x1dU)) 
                                               & (~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [0U] 
                                                   >> 0x1eU))) 
                                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                 [0U] 
                                                 >> 0x1fU))) 
                                          | ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [0U] 
                                                  >> 0x1aU) 
                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [0U] 
                                                    >> 0x1bU)) 
                                                & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [0U] 
                                                    >> 0x1cU))) 
                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [0U] 
                                                  >> 0x1dU)) 
                                              & (~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [0U] 
                                                  >> 0x1eU))) 
                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                [0U] 
                                                >> 0x1fU))) 
                                         | ((((((~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [0U] 
                                                  >> 0x1aU)) 
                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [0U] 
                                                   >> 0x1bU)) 
                                               & (~ 
                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [0U] 
                                                   >> 0x1cU))) 
                                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                 [0U] 
                                                 >> 0x1dU)) 
                                             & (~ (
                                                   vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [0U] 
                                                   >> 0x1eU))) 
                                            & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                               [0U] 
                                               >> 0x1fU))) 
                                        | ((((((~ (
                                                   vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [0U] 
                                                   >> 0x1aU)) 
                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [0U] 
                                                  >> 0x1bU)) 
                                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                 [0U] 
                                                 >> 0x1cU)) 
                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                [0U] 
                                                >> 0x1dU)) 
                                            & (~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [0U] 
                                                  >> 0x1eU))) 
                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                              [0U] 
                                              >> 0x1fU))) 
                                       | ((((((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [0U] 
                                                  >> 0x1aU)) 
                                              & (~ 
                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [0U] 
                                                  >> 0x1bU))) 
                                             & (~ (
                                                   vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [0U] 
                                                   >> 0x1cU))) 
                                            & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                               [0U] 
                                               >> 0x1dU)) 
                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                              [0U] 
                                              >> 0x1eU)) 
                                          & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                             [0U] >> 0x1fU)))))))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__decorderExcCode_up[0U] 
        = ((0x1bU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__decorderExcCode_up
            [0U]) | (4U & ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2) 
                             << 2U) & ((((0x1ffffffcU 
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
                                              << 2U) 
                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                [0U] 
                                                >> 3U))) 
                                         | (0x1ffffffcU 
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
                                                 << 2U) 
                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                   [0U] 
                                                   >> 2U)) 
                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [0U] 
                                                  >> 3U)))) 
                                        | (0x1ffffffcU 
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
                                                << 2U) 
                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [0U] 
                                                  >> 2U)) 
                                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                 [0U] 
                                                 >> 3U)))) 
                                       | (0x1ffffffcU 
                                          & ((((((~ 
                                                  vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                  [0U]) 
                                                 << 2U) 
                                                & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                [0U]) 
                                               & ((~ 
                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                    [0U] 
                                                    >> 3U)) 
                                                  << 2U)) 
                                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                 [0U] 
                                                 >> 2U)) 
                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                [0U] 
                                                >> 3U))))) 
                           | (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2)) 
                               << 2U) & ((0x7ffcU & 
                                          (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_1) 
                                            << 2U) 
                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                              [0U] 
                                              >> 0x11U))) 
                                         | (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_1)) 
                                             << 2U) 
                                            & (((((((((((((((0x1cU 
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
                                                                   << 2U) 
                                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                     [0U] 
                                                                     >> 0x1bU)) 
                                                                 & ((~ 
                                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                      [0U] 
                                                                      >> 0x1eU)) 
                                                                    << 2U)) 
                                                                & ((~ 
                                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                     [0U] 
                                                                     >> 0x1fU)) 
                                                                   << 2U))) 
                                                            | (4U 
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
                                                                     & (~ 
                                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                         [0U] 
                                                                         >> 0x1dU))) 
                                                                    & (~ 
                                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                        [0U] 
                                                                        >> 0x1eU))) 
                                                                   << 2U) 
                                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                     [0U] 
                                                                     >> 0x1dU)))) 
                                                           | (4U 
                                                              & (((((((~ 
                                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                        [0U] 
                                                                        >> 0x1aU)) 
                                                                      & (~ 
                                                                         (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                          [0U] 
                                                                          >> 0x1bU))) 
                                                                     << 2U) 
                                                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                       [0U] 
                                                                       >> 0x1aU)) 
                                                                   & ((~ 
                                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                        [0U] 
                                                                        >> 0x1dU)) 
                                                                      << 2U)) 
                                                                  & ((~ 
                                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                       [0U] 
                                                                       >> 0x1eU)) 
                                                                     << 2U)) 
                                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                    [0U] 
                                                                    >> 0x1dU)))) 
                                                          | (4U 
                                                             & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                     [0U] 
                                                                     >> 0x18U) 
                                                                    & ((~ 
                                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                         [0U] 
                                                                         >> 0x1bU)) 
                                                                       << 2U)) 
                                                                   & ((~ 
                                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                        [0U] 
                                                                        >> 0x1cU)) 
                                                                      << 2U)) 
                                                                  & ((~ 
                                                                      (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                       [0U] 
                                                                       >> 0x1dU)) 
                                                                     << 2U)) 
                                                                 & ((~ 
                                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                      [0U] 
                                                                      >> 0x1eU)) 
                                                                    << 2U)) 
                                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                   [0U] 
                                                                   >> 0x1dU)))) 
                                                         | (4U 
                                                            & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                    [0U] 
                                                                    >> 0x18U) 
                                                                   & ((~ 
                                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                        [0U] 
                                                                        >> 0x1bU)) 
                                                                      << 2U)) 
                                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                     [0U] 
                                                                     >> 0x1aU)) 
                                                                 & ((~ 
                                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                      [0U] 
                                                                      >> 0x1dU)) 
                                                                    << 2U)) 
                                                                & ((~ 
                                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                     [0U] 
                                                                     >> 0x1eU)) 
                                                                   << 2U)) 
                                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                  [0U] 
                                                                  >> 0x1dU)))) 
                                                        | (4U 
                                                           & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                   [0U] 
                                                                   >> 0x18U) 
                                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                     [0U] 
                                                                     >> 0x19U)) 
                                                                 & ((~ 
                                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                      [0U] 
                                                                      >> 0x1cU)) 
                                                                    << 2U)) 
                                                                & ((~ 
                                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                     [0U] 
                                                                     >> 0x1dU)) 
                                                                   << 2U)) 
                                                               & ((~ 
                                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                    [0U] 
                                                                    >> 0x1eU)) 
                                                                  << 2U)) 
                                                              & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                 [0U] 
                                                                 >> 0x1dU)))) 
                                                       | (4U 
                                                          & (((((((~ 
                                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                    [0U] 
                                                                    >> 0x1aU)) 
                                                                  << 2U) 
                                                                 & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                    [0U] 
                                                                    >> 0x19U)) 
                                                                & ((~ 
                                                                    (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                     [0U] 
                                                                     >> 0x1cU)) 
                                                                   << 2U)) 
                                                               & ((~ 
                                                                   (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                    [0U] 
                                                                    >> 0x1dU)) 
                                                                  << 2U)) 
                                                              & ((~ 
                                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                   [0U] 
                                                                   >> 0x1eU)) 
                                                                 << 2U)) 
                                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [0U] 
                                                                >> 0x1dU)))) 
                                                      | (4U 
                                                         & (((((((~ 
                                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                   [0U] 
                                                                   >> 0x1aU)) 
                                                                 << 2U) 
                                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                   [0U] 
                                                                   >> 0x19U)) 
                                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                  [0U] 
                                                                  >> 0x1aU)) 
                                                              & ((~ 
                                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                   [0U] 
                                                                   >> 0x1dU)) 
                                                                 << 2U)) 
                                                             & ((~ 
                                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                  [0U] 
                                                                  >> 0x1eU)) 
                                                                << 2U)) 
                                                            & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [0U] 
                                                               >> 0x1dU)))) 
                                                     | (4U 
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
                                                              << 2U) 
                                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [0U] 
                                                                >> 0x1bU)) 
                                                            & ((~ 
                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                 [0U] 
                                                                 >> 0x1eU)) 
                                                               << 2U)) 
                                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [0U] 
                                                              >> 0x1dU)))) 
                                                    | (4U 
                                                       & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [0U] 
                                                               >> 0x18U) 
                                                              & ((~ 
                                                                  (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                   [0U] 
                                                                   >> 0x1bU)) 
                                                                 << 2U)) 
                                                             & ((~ 
                                                                 (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                  [0U] 
                                                                  >> 0x1cU)) 
                                                                << 2U)) 
                                                            & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [0U] 
                                                               >> 0x1bU)) 
                                                           & ((~ 
                                                               (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [0U] 
                                                                >> 0x1eU)) 
                                                              << 2U)) 
                                                          & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [0U] 
                                                             >> 0x1dU)))) 
                                                   | (4U 
                                                      & ((((((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [0U] 
                                                              >> 0x18U) 
                                                             & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [0U] 
                                                                >> 0x19U)) 
                                                            & ((~ 
                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                 [0U] 
                                                                 >> 0x1cU)) 
                                                               << 2U)) 
                                                           & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [0U] 
                                                              >> 0x1bU)) 
                                                          & ((~ 
                                                              (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [0U] 
                                                               >> 0x1eU)) 
                                                             << 2U)) 
                                                         & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                            [0U] 
                                                            >> 0x1dU)))) 
                                                  | (4U 
                                                     & (((((((~ 
                                                              (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [0U] 
                                                               >> 0x1aU)) 
                                                             << 2U) 
                                                            & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                               [0U] 
                                                               >> 0x19U)) 
                                                           & ((~ 
                                                               (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                                [0U] 
                                                                >> 0x1cU)) 
                                                              << 2U)) 
                                                          & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [0U] 
                                                             >> 0x1bU)) 
                                                         & ((~ 
                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [0U] 
                                                              >> 0x1eU)) 
                                                            << 2U)) 
                                                        & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                           [0U] 
                                                           >> 0x1dU)))) 
                                                 | (4U 
                                                    & (((((((~ 
                                                             (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                              [0U] 
                                                              >> 0x1aU)) 
                                                            << 2U) 
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
                                                             >> 0x1eU)) 
                                                           << 2U)) 
                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                          [0U] 
                                                          >> 0x1dU)))) 
                                                | (4U 
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
                                                         & (~ 
                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                             [0U] 
                                                             >> 0x1dU))) 
                                                        << 2U) 
                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                          [0U] 
                                                          >> 0x1cU)) 
                                                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                         [0U] 
                                                         >> 0x1dU)))) 
                                               | (4U 
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
                                                        << 2U) 
                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                          [0U] 
                                                          >> 0x1bU)) 
                                                      & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                         [0U] 
                                                         >> 0x1cU)) 
                                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__inst
                                                        [0U] 
                                                        >> 0x1dU))))))))));
}
