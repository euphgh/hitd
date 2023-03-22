// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycpu_top.h for the primary calling header

#ifndef VERILATED_VMYCPU_TOP_DATA_DATA_TP_H_
#define VERILATED_VMYCPU_TOP_DATA_DATA_TP_H_  // guard

#include "verilated.h"

class Vmycpu_top__Syms;

class Vmycpu_top_data_data_tp final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(en,0,0);
        VL_IN8(rindex,6,0);
        VL_IN8(windex,6,0);
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__0__KET____DOT__tmp;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__0__KET____DOT__wdata_r;
        CData/*0:0*/ __PVT__inst_data__DOT__genblk1__BRA__0__KET____DOT__col_r;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__1__KET____DOT__tmp;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__1__KET____DOT__wdata_r;
        CData/*0:0*/ __PVT__inst_data__DOT__genblk1__BRA__1__KET____DOT__col_r;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__2__KET____DOT__tmp;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__2__KET____DOT__wdata_r;
        CData/*0:0*/ __PVT__inst_data__DOT__genblk1__BRA__2__KET____DOT__col_r;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__3__KET____DOT__tmp;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__3__KET____DOT__wdata_r;
        CData/*0:0*/ __PVT__inst_data__DOT__genblk1__BRA__3__KET____DOT__col_r;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__4__KET____DOT__tmp;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__4__KET____DOT__wdata_r;
        CData/*0:0*/ __PVT__inst_data__DOT__genblk1__BRA__4__KET____DOT__col_r;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__5__KET____DOT__tmp;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__5__KET____DOT__wdata_r;
        CData/*0:0*/ __PVT__inst_data__DOT__genblk1__BRA__5__KET____DOT__col_r;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__6__KET____DOT__tmp;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__6__KET____DOT__wdata_r;
        CData/*0:0*/ __PVT__inst_data__DOT__genblk1__BRA__6__KET____DOT__col_r;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__7__KET____DOT__tmp;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__7__KET____DOT__wdata_r;
        CData/*0:0*/ __PVT__inst_data__DOT__genblk1__BRA__7__KET____DOT__col_r;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__8__KET____DOT__tmp;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__8__KET____DOT__wdata_r;
        CData/*0:0*/ __PVT__inst_data__DOT__genblk1__BRA__8__KET____DOT__col_r;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__9__KET____DOT__tmp;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__9__KET____DOT__wdata_r;
        CData/*0:0*/ __PVT__inst_data__DOT__genblk1__BRA__9__KET____DOT__col_r;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__10__KET____DOT__tmp;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__10__KET____DOT__wdata_r;
        CData/*0:0*/ __PVT__inst_data__DOT__genblk1__BRA__10__KET____DOT__col_r;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__11__KET____DOT__tmp;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__11__KET____DOT__wdata_r;
        CData/*0:0*/ __PVT__inst_data__DOT__genblk1__BRA__11__KET____DOT__col_r;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__12__KET____DOT__tmp;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__12__KET____DOT__wdata_r;
        CData/*0:0*/ __PVT__inst_data__DOT__genblk1__BRA__12__KET____DOT__col_r;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__13__KET____DOT__tmp;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__13__KET____DOT__wdata_r;
        CData/*0:0*/ __PVT__inst_data__DOT__genblk1__BRA__13__KET____DOT__col_r;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__14__KET____DOT__tmp;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__14__KET____DOT__wdata_r;
        CData/*0:0*/ __PVT__inst_data__DOT__genblk1__BRA__14__KET____DOT__col_r;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__15__KET____DOT__tmp;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__15__KET____DOT__wdata_r;
        CData/*0:0*/ __PVT__inst_data__DOT__genblk1__BRA__15__KET____DOT__col_r;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__16__KET____DOT__tmp;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__16__KET____DOT__wdata_r;
        CData/*0:0*/ __PVT__inst_data__DOT__genblk1__BRA__16__KET____DOT__col_r;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__17__KET____DOT__tmp;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__17__KET____DOT__wdata_r;
        CData/*0:0*/ __PVT__inst_data__DOT__genblk1__BRA__17__KET____DOT__col_r;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__18__KET____DOT__tmp;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__18__KET____DOT__wdata_r;
        CData/*0:0*/ __PVT__inst_data__DOT__genblk1__BRA__18__KET____DOT__col_r;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__19__KET____DOT__tmp;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__19__KET____DOT__wdata_r;
        CData/*0:0*/ __PVT__inst_data__DOT__genblk1__BRA__19__KET____DOT__col_r;
    };
    struct {
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__20__KET____DOT__tmp;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__20__KET____DOT__wdata_r;
        CData/*0:0*/ __PVT__inst_data__DOT__genblk1__BRA__20__KET____DOT__col_r;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__21__KET____DOT__tmp;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__21__KET____DOT__wdata_r;
        CData/*0:0*/ __PVT__inst_data__DOT__genblk1__BRA__21__KET____DOT__col_r;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__22__KET____DOT__tmp;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__22__KET____DOT__wdata_r;
        CData/*0:0*/ __PVT__inst_data__DOT__genblk1__BRA__22__KET____DOT__col_r;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__23__KET____DOT__tmp;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__23__KET____DOT__wdata_r;
        CData/*0:0*/ __PVT__inst_data__DOT__genblk1__BRA__23__KET____DOT__col_r;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__24__KET____DOT__tmp;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__24__KET____DOT__wdata_r;
        CData/*0:0*/ __PVT__inst_data__DOT__genblk1__BRA__24__KET____DOT__col_r;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__25__KET____DOT__tmp;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__25__KET____DOT__wdata_r;
        CData/*0:0*/ __PVT__inst_data__DOT__genblk1__BRA__25__KET____DOT__col_r;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__26__KET____DOT__tmp;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__26__KET____DOT__wdata_r;
        CData/*0:0*/ __PVT__inst_data__DOT__genblk1__BRA__26__KET____DOT__col_r;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__27__KET____DOT__tmp;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__27__KET____DOT__wdata_r;
        CData/*0:0*/ __PVT__inst_data__DOT__genblk1__BRA__27__KET____DOT__col_r;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__28__KET____DOT__tmp;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__28__KET____DOT__wdata_r;
        CData/*0:0*/ __PVT__inst_data__DOT__genblk1__BRA__28__KET____DOT__col_r;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__29__KET____DOT__tmp;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__29__KET____DOT__wdata_r;
        CData/*0:0*/ __PVT__inst_data__DOT__genblk1__BRA__29__KET____DOT__col_r;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__30__KET____DOT__tmp;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__30__KET____DOT__wdata_r;
        CData/*0:0*/ __PVT__inst_data__DOT__genblk1__BRA__30__KET____DOT__col_r;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__31__KET____DOT__tmp;
        CData/*7:0*/ __PVT__inst_data__DOT__genblk1__BRA__31__KET____DOT__wdata_r;
        CData/*0:0*/ __PVT__inst_data__DOT__genblk1__BRA__31__KET____DOT__col_r;
        VL_IN(wen,31,0);
        VL_INW(wdata,255,0,8);
        VL_OUTW(rdata,255,0,8);
        VlUnpacked<VlWide<8>/*255:0*/, 128> __PVT__inst_data__DOT__ram_block;
    };

    // INTERNAL VARIABLES
    Vmycpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmycpu_top_data_data_tp(Vmycpu_top__Syms* symsp, const char* v__name);
    ~Vmycpu_top_data_data_tp();
    VL_UNCOPYABLE(Vmycpu_top_data_data_tp);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
