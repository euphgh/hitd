// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycpu_top.h for the primary calling header

#ifndef VERILATED_VMYCPU_TOP_INST_DATA_TP_H_
#define VERILATED_VMYCPU_TOP_INST_DATA_TP_H_  // guard

#include "verilated.h"

class Vmycpu_top__Syms;

class Vmycpu_top_inst_data_tp final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(en,0,0);
    VL_IN8(index,6,0);
    VL_IN(wen,31,0);
    VL_INW(wdata,255,0,8);
    VL_OUTW(rdata,255,0,8);
    VlUnpacked<VlWide<8>/*255:0*/, 128> __PVT__inst_data__DOT__ram_block;

    // INTERNAL VARIABLES
    Vmycpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmycpu_top_inst_data_tp(Vmycpu_top__Syms* symsp, const char* v__name);
    ~Vmycpu_top_inst_data_tp();
    VL_UNCOPYABLE(Vmycpu_top_inst_data_tp);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
