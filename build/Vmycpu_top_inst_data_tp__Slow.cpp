// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_inst_data_tp.h"

void Vmycpu_top_inst_data_tp___ctor_var_reset(Vmycpu_top_inst_data_tp* vlSelf);

Vmycpu_top_inst_data_tp::Vmycpu_top_inst_data_tp(Vmycpu_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmycpu_top_inst_data_tp___ctor_var_reset(this);
}

void Vmycpu_top_inst_data_tp::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vmycpu_top_inst_data_tp::~Vmycpu_top_inst_data_tp() {
}
