// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_inst_data_tp.h"

VL_ATTR_COLD void Vmycpu_top_inst_data_tp___ctor_var_reset(Vmycpu_top_inst_data_tp* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_inst_data_tp___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->wen = VL_RAND_RESET_I(32);
    vlSelf->index = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(256, vlSelf->wdata);
    VL_RAND_RESET_W(256, vlSelf->rdata);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->__PVT__inst_data__DOT__ram_block[__Vi0]);
    }
}
