// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top___024root.h"

VL_INLINE_OPT void Vmycpu_top___024root___ico_sequent__TOP__0(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___ico_sequent__TOP__0\n"); );
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
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_MEM__DOT____VdfgTmp_h57ecb1a5__0;
    mycpu_top__DOT__u_Main__DOT__u_MEM__DOT____VdfgTmp_h57ecb1a5__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__pre_valid;
    mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__pre_valid = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__ready;
    mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__ready = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT____VdfgTmp_h18f03704__0;
    mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT____VdfgTmp_h18f03704__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_cache_top__DOT__inst_top_rvalid;
    mycpu_top__DOT__u_cache_top__DOT__inst_top_rvalid = 0;
    // Body
    vlSelf->bready = (1U & (((IData)(vlSelf->bid) >> 1U) 
                            | (5U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_stat))));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__inst_top_arready 
        = ((IData)(vlSelf->arready) & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__inst_top_arvalid));
    vlSelf->rready = (1U & ((4U & (IData)(vlSelf->rid))
                             ? ((5U & ((IData)(vlSelf->rid) 
                                       >> 1U)) | (3U 
                                                  == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat)))
                             : ((5U & ((IData)(vlSelf->rid) 
                                       >> 1U)) | (3U 
                                                  == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat)))));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__data_top_arready 
        = ((~ (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__inst_top_arvalid)) 
           & ((IData)(vlSelf->arready) & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__data_top_arvalid)));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__data_uncache_wready 
        = ((4U != (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_stat)) 
           & ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_wvalid) 
              & (IData)(vlSelf->wready)));
    mycpu_top__DOT__u_cache_top__DOT__inst_top_rvalid 
        = ((~ ((IData)(vlSelf->rid) >> 2U)) & (IData)(vlSelf->rvalid));
    vlSelf->mycpu_top__DOT__inst_req = ((~ ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__needClear)) 
                                            & (5U <= (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__IQ_number_w)))) 
                                        & (IData)(vlSelf->aresetn));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__data_top_rvalid 
        = (((IData)(vlSelf->rid) >> 2U) & (IData)(vlSelf->rvalid));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__inst_cache_rvalid 
        = ((~ (5U & ((IData)(vlSelf->rid) >> 1U))) 
           & (IData)(mycpu_top__DOT__u_cache_top__DOT__inst_top_rvalid));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__inst_uncache_rvalid 
        = (5U & (((IData)(vlSelf->rid) >> 1U) & (IData)(mycpu_top__DOT__u_cache_top__DOT__inst_top_rvalid)));
    vlSelf->mycpu_top__DOT__inst_index_ok = ((0xfU 
                                              != (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat)) 
                                             & ((0U 
                                                 != (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat)) 
                                                & ((IData)(vlSelf->mycpu_top__DOT__inst_req) 
                                                   & ((~ (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_req)) 
                                                      | (IData)(vlSelf->mycpu_top__DOT__inst_data_ok)))));
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
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_PCRegister__DOT__ok_to_change 
        = (((IData)(vlSelf->mycpu_top__DOT__inst_req) 
            & (IData)(vlSelf->mycpu_top__DOT__inst_index_ok)) 
           | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_excOccur_w_o) 
              | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__BSC_isDiffRes_w_o) 
                 | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__SBA_flush_w_o))));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__data_uca_addr_ok 
        = ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__data_uca_req) 
           & ((~ (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_req)) 
              | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__data_uca_data_ok)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__ready 
        = (1U & ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_memReq_r_i)) 
                 | (((0U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat)) 
                     & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hf6d406ff__0)) 
                    | (((1U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat)) 
                        & ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_req) 
                           & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hf6d406ff__0))) 
                       | ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__data_uca_data_ok) 
                          & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_req))))));
    mycpu_top__DOT__u_Main__DOT__u_MEM__DOT____VdfgTmp_h57ecb1a5__0 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__hasData) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__ready));
    vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_allowin_w_o 
        = (1U & ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__hasData)) 
                 | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__ready)));
    mycpu_top__DOT__u_Main__DOT__MEM_forwardMode_w_o 
        = ((~ ((~ ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_loadSel_r_i) 
                   >> 4U)) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_memReq_r_i))) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_MEM__DOT____VdfgTmp_h57ecb1a5__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__REEXE_valid_w_o 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_allowin_w_o) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_REEXE__DOT__hasData));
    vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_valid_w_o 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_MEM__DOT____VdfgTmp_h57ecb1a5__0) 
           & ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__needFlush)) 
              & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_allowin_w_o)));
    vlSelf->mycpu_top__DOT__data_req = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_memReq_r_i) 
                                        & ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_hasRisk_w_o)) 
                                           & ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_hasException_r_i)) 
                                              & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_allowin_w_o))));
    vlSelf->mycpu_top__DOT__data_index_ok = ((0xfU 
                                              != (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat)) 
                                             & ((IData)(vlSelf->mycpu_top__DOT__data_req) 
                                                & ((~ (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_req)) 
                                                   | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_data_ok))));
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
    vlSelf->mycpu_top__DOT__u_Main__DOT__SBA_valid_w_o 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__hasData) 
           & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__ready) 
              & ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__needFlush)) 
                 & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_allowin_w_o))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_allowin_w_o 
        = (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ready) 
            | (~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__hasData))) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_allowin_w_o));
    vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_valid_w_o 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT____VdfgTmp_h18f03704__0) 
           & ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needFlush)) 
              & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_allowin_w_o)));
    mycpu_top__DOT__u_Main__DOT__PREMEM_forwardMode_w_o 
        = ((~ ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_memReq_r_i) 
               | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_readCp0_r_i))) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT____VdfgTmp_h18f03704__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_REEXE__DOT__needClear 
        = ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__SBA_valid_w_o)) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_allowin_w_o));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_REEXE__DOT__needUpdata 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_allowin_w_o) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__SBA_valid_w_o));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__pre_valid 
        = ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__SBA_flush_w_o)) 
           & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT____VdfgTmp_h15bf95e2__0) 
              & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_allowin_w_o) 
                 & ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_excOccur_w_o)) 
                    | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__is_pc_save)))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_up_valid_w_o 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__hasData) 
           & ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__exceptionClean)) 
              & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_allowin_w_o)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__needUpdata 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_allowin_w_o) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_valid_w_o));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__needClear 
        = (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_valid_w_o)) 
            & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_allowin_w_o)) 
           | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__needFlush));
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
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needUpdata 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_allowin_w_o) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__pre_valid));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needClear 
        = (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__pre_valid)) 
            & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_allowin_w_o)) 
           | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needFlush));
    mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__pre_valid 
        = ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__SBA_flush_w_o)) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_up_valid_w_o));
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
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__needUpdata 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_allowin_w_o) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__pre_valid));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__needClear 
        = (((~ (IData)(mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__pre_valid)) 
            & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_allowin_w_o)) 
           | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__needFlush));
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

void Vmycpu_top___024root___eval_ico(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vmycpu_top___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vmycpu_top___024root___eval_act(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___eval_act\n"); );
}

extern const VlWide<8>/*255:0*/ Vmycpu_top__ConstPool__CONST_h9e67c271_0;

VL_INLINE_OPT void Vmycpu_top___024root___nba_sequent__TOP__0(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ mycpu_top__DOT__data_rdata;
    mycpu_top__DOT__data_rdata = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h9a06d6e3__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h9a06d6e3__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h43936eca__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h43936eca__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha7d7716a__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha7d7716a__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h244c62d2__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h244c62d2__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha108cfa5__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha108cfa5__0 = 0;
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
    IData/*31:0*/ mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__add_a;
    mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__add_a = 0;
    IData/*31:0*/ mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__add_b;
    mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__add_b = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__cin_i;
    mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__cin_i = 0;
    QData/*32:0*/ mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__u_try_div_ans__DOT__diff;
    mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__u_try_div_ans__DOT__diff = 0;
    VlUnpacked<IData/*20:0*/, 4> mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back[__Vi0] = 0;
    }
    VlUnpacked<VlWide<8>/*255:0*/, 4> mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_ZERO_W(256, mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[__Vi0]);
    }
    QData/*53:0*/ mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_mux__DOT____VdfgTmp_h601c0c5f__0;
    mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_mux__DOT____VdfgTmp_h601c0c5f__0 = 0;
    QData/*40:0*/ mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_mux__DOT____VdfgTmp_h5b400afc__0;
    mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_mux__DOT____VdfgTmp_h5b400afc__0 = 0;
    CData/*4:0*/ __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v0;
    __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v0 = 0;
    IData/*31:0*/ __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v0;
    __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v0 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v0;
    __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v1;
    __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v1 = 0;
    IData/*31:0*/ __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v1;
    __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v1 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v1;
    __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v1 = 0;
    CData/*4:0*/ __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v2;
    __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v2 = 0;
    IData/*31:0*/ __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v2;
    __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v2 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v2;
    __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v2 = 0;
    CData/*4:0*/ __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v3;
    __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v3 = 0;
    IData/*31:0*/ __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v3;
    __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v3 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v3;
    __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v3 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v4;
    __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v4 = 0;
    CData/*4:0*/ __Vdly__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__tail;
    __Vdly__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__tail = 0;
    CData/*3:0*/ __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v0;
    __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v0 = 0;
    VlWide<6>/*180:0*/ __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v0;
    VL_ZERO_W(181, __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v0);
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v0;
    __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v1;
    __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v1 = 0;
    VlWide<6>/*180:0*/ __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v1;
    VL_ZERO_W(181, __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v1);
    CData/*3:0*/ __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v2;
    __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v2 = 0;
    VlWide<6>/*180:0*/ __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v2;
    VL_ZERO_W(181, __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v2);
    CData/*3:0*/ __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v3;
    __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v3 = 0;
    VlWide<6>/*180:0*/ __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v3;
    VL_ZERO_W(181, __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v3);
    CData/*3:0*/ __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v4;
    __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v4 = 0;
    VlWide<6>/*180:0*/ __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v4;
    VL_ZERO_W(181, __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v4);
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v4;
    __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v4 = 0;
    CData/*3:0*/ __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v5;
    __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v5 = 0;
    VlWide<6>/*180:0*/ __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v5;
    VL_ZERO_W(181, __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v5);
    CData/*3:0*/ __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v6;
    __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v6 = 0;
    VlWide<6>/*180:0*/ __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v6;
    VL_ZERO_W(181, __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v6);
    CData/*3:0*/ __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v7;
    __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v7 = 0;
    VlWide<6>/*180:0*/ __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v7;
    VL_ZERO_W(181, __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v7);
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v7;
    __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v7 = 0;
    CData/*3:0*/ __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v8;
    __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v8 = 0;
    VlWide<6>/*180:0*/ __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v8;
    VL_ZERO_W(181, __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v8);
    CData/*3:0*/ __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v9;
    __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v9 = 0;
    VlWide<6>/*180:0*/ __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v9;
    VL_ZERO_W(181, __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v9);
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v9;
    __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v9 = 0;
    CData/*0:0*/ __Vdly__mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__tick;
    __Vdly__mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__tick = 0;
    IData/*31:0*/ __Vdly__mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__count;
    __Vdly__mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__count = 0;
    CData/*7:0*/ __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__0__KET____DOT__btbTag__v0;
    __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__0__KET____DOT__btbTag__v0 = 0;
    CData/*7:0*/ __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__0__KET____DOT__btbTag__v0;
    __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__0__KET____DOT__btbTag__v0 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__0__KET____DOT__btbTag__v0;
    __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__0__KET____DOT__btbTag__v0 = 0;
    CData/*7:0*/ __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__0__KET____DOT__btbReg__v0;
    __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__0__KET____DOT__btbReg__v0 = 0;
    IData/*29:0*/ __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__0__KET____DOT__btbReg__v0;
    __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__0__KET____DOT__btbReg__v0 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__0__KET____DOT__btbReg__v0;
    __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__0__KET____DOT__btbReg__v0 = 0;
    CData/*7:0*/ __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__1__KET____DOT__btbTag__v0;
    __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__1__KET____DOT__btbTag__v0 = 0;
    CData/*7:0*/ __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__1__KET____DOT__btbTag__v0;
    __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__1__KET____DOT__btbTag__v0 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__1__KET____DOT__btbTag__v0;
    __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__1__KET____DOT__btbTag__v0 = 0;
    CData/*7:0*/ __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__1__KET____DOT__btbReg__v0;
    __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__1__KET____DOT__btbReg__v0 = 0;
    IData/*29:0*/ __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__1__KET____DOT__btbReg__v0;
    __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__1__KET____DOT__btbReg__v0 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__1__KET____DOT__btbReg__v0;
    __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__1__KET____DOT__btbReg__v0 = 0;
    CData/*7:0*/ __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__2__KET____DOT__btbTag__v0;
    __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__2__KET____DOT__btbTag__v0 = 0;
    CData/*7:0*/ __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__2__KET____DOT__btbTag__v0;
    __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__2__KET____DOT__btbTag__v0 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__2__KET____DOT__btbTag__v0;
    __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__2__KET____DOT__btbTag__v0 = 0;
    CData/*7:0*/ __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__2__KET____DOT__btbReg__v0;
    __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__2__KET____DOT__btbReg__v0 = 0;
    IData/*29:0*/ __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__2__KET____DOT__btbReg__v0;
    __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__2__KET____DOT__btbReg__v0 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__2__KET____DOT__btbReg__v0;
    __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__2__KET____DOT__btbReg__v0 = 0;
    CData/*7:0*/ __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__3__KET____DOT__btbTag__v0;
    __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__3__KET____DOT__btbTag__v0 = 0;
    CData/*7:0*/ __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__3__KET____DOT__btbTag__v0;
    __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__3__KET____DOT__btbTag__v0 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__3__KET____DOT__btbTag__v0;
    __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__3__KET____DOT__btbTag__v0 = 0;
    CData/*7:0*/ __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__3__KET____DOT__btbReg__v0;
    __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__3__KET____DOT__btbReg__v0 = 0;
    IData/*29:0*/ __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__3__KET____DOT__btbReg__v0;
    __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__3__KET____DOT__btbReg__v0 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__3__KET____DOT__btbReg__v0;
    __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__3__KET____DOT__btbReg__v0 = 0;
    CData/*0:0*/ __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__isAccepted;
    __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__isAccepted = 0;
    IData/*31:0*/ __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__regHiLo__v0;
    __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__regHiLo__v0 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__regHiLo__v0;
    __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__regHiLo__v0 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__regHiLo__v1;
    __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__regHiLo__v1 = 0;
    IData/*31:0*/ __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__regHiLo__v2;
    __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__regHiLo__v2 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__regHiLo__v2;
    __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__regHiLo__v2 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__regHiLo__v3;
    __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__regHiLo__v3 = 0;
    CData/*4:0*/ __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__position;
    __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__position = 0;
    CData/*0:0*/ __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__HiLo_busy;
    __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__HiLo_busy = 0;
    CData/*0:0*/ __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__start;
    __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__start = 0;
    CData/*3:0*/ __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__timer;
    __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__timer = 0;
    CData/*5:0*/ __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__timer;
    __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__timer = 0;
    CData/*0:0*/ __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__have_data;
    __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__have_data = 0;
    CData/*0:0*/ __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_req;
    __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_req = 0;
    IData/*20:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v0;
    __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v0 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v0;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v0 = 0;
    VlWide<8>/*255:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v0;
    VL_ZERO_W(256, __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v0);
    IData/*20:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v1;
    __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v1 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v1;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v1 = 0;
    VlWide<8>/*255:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v1;
    VL_ZERO_W(256, __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v1);
    IData/*20:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v2;
    __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v2 = 0;
    VlWide<8>/*255:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v2;
    VL_ZERO_W(256, __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v2);
    IData/*20:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v3;
    __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v3 = 0;
    VlWide<8>/*255:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v3;
    VL_ZERO_W(256, __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v3);
    IData/*20:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v4;
    __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v4 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v4;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v4 = 0;
    VlWide<8>/*255:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v4;
    VL_ZERO_W(256, __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v4);
    IData/*20:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v5;
    __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v5 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v5;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v5 = 0;
    VlWide<8>/*255:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v5;
    VL_ZERO_W(256, __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v5);
    IData/*20:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v6;
    __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v6 = 0;
    VlWide<8>/*255:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v6;
    VL_ZERO_W(256, __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v6);
    IData/*20:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v7;
    __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v7 = 0;
    VlWide<8>/*255:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v7;
    VL_ZERO_W(256, __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v7);
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v8;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v8 = 0;
    CData/*3:0*/ __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat;
    __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat = 0;
    CData/*6:0*/ __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__reset_counter;
    __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__reset_counter = 0;
    CData/*2:0*/ __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_counter;
    __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_counter = 0;
    CData/*2:0*/ __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_buf_data__v0;
    __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_buf_data__v0 = 0;
    IData/*31:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_buf_data__v0;
    __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_buf_data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_buf_data__v0;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_buf_data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_buf_data__v1;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_buf_data__v1 = 0;
    CData/*6:0*/ __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v0;
    __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v0 = 0;
    CData/*2:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v0;
    __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v0 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v0;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v1;
    __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v1 = 0;
    CData/*2:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v1;
    __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v1 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v1;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v1 = 0;
    CData/*6:0*/ __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v2;
    __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v2 = 0;
    CData/*2:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v2;
    __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v2 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v2;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v2 = 0;
    CData/*6:0*/ __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v3;
    __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v3 = 0;
    CData/*2:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v3;
    __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v3 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v3;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v3 = 0;
    CData/*6:0*/ __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__0__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0;
    __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__0__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0 = 0;
    IData/*19:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__0__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0;
    __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__0__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__0__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__0__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__1__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0;
    __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__1__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0 = 0;
    IData/*19:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__1__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0;
    __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__1__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__1__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__1__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__2__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0;
    __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__2__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0 = 0;
    IData/*19:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__2__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0;
    __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__2__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__2__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__2__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__3__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0;
    __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__3__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0 = 0;
    IData/*19:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__3__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0;
    __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__3__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__3__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__3__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__buf_rdata__v0;
    __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__buf_rdata__v0 = 0;
    IData/*31:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__buf_rdata__v0;
    __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__buf_rdata__v0 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__buf_rdata__v0;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__buf_rdata__v0 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__buf_rdata__v1;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__buf_rdata__v1 = 0;
    CData/*0:0*/ __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_req;
    __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_req = 0;
    IData/*20:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v0;
    __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v0 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v0;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v0 = 0;
    VlWide<8>/*255:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v0;
    VL_ZERO_W(256, __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v0);
    IData/*20:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v1;
    __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v1 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v1;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v1 = 0;
    VlWide<8>/*255:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v1;
    VL_ZERO_W(256, __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v1);
    CData/*7:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_raw_data__v0;
    __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_raw_data__v0 = 0;
    IData/*20:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v2;
    __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v2 = 0;
    VlWide<8>/*255:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v2;
    VL_ZERO_W(256, __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v2);
    CData/*7:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_raw_data__v1;
    __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_raw_data__v1 = 0;
    IData/*20:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v3;
    __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v3 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v3;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v3 = 0;
    VlWide<8>/*255:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v3;
    VL_ZERO_W(256, __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v3);
    CData/*7:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_raw_data__v2;
    __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_raw_data__v2 = 0;
    CData/*7:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_raw_data__v3;
    __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_raw_data__v3 = 0;
    IData/*20:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v4;
    __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v4 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v4;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v4 = 0;
    VlWide<8>/*255:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v4;
    VL_ZERO_W(256, __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v4);
    IData/*20:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v5;
    __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v5 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v5;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v5 = 0;
    VlWide<8>/*255:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v5;
    VL_ZERO_W(256, __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v5);
    IData/*20:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v6;
    __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v6 = 0;
    VlWide<8>/*255:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v6;
    VL_ZERO_W(256, __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v6);
    IData/*20:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v7;
    __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v7 = 0;
    VlWide<8>/*255:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v7;
    VL_ZERO_W(256, __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v7);
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v8;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v8 = 0;
    CData/*3:0*/ __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat;
    __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat = 0;
    CData/*6:0*/ __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__reset_counter;
    __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__reset_counter = 0;
    CData/*2:0*/ __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_counter;
    __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_counter = 0;
    CData/*2:0*/ __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_buf_data__v0;
    __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_buf_data__v0 = 0;
    IData/*31:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_buf_data__v0;
    __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_buf_data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_buf_data__v0;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_buf_data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_buf_data__v1;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_buf_data__v1 = 0;
    CData/*6:0*/ __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v0;
    __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v0 = 0;
    CData/*2:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v0;
    __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v0 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v0;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v1;
    __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v1 = 0;
    CData/*2:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v1;
    __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v1 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v1;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v1 = 0;
    CData/*6:0*/ __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v2;
    __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v2 = 0;
    CData/*2:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v2;
    __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v2 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v2;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v2 = 0;
    CData/*6:0*/ __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v3;
    __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v3 = 0;
    CData/*2:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v3;
    __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v3 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v3;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v3 = 0;
    CData/*6:0*/ __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__dirty__v0;
    __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__dirty__v0 = 0;
    CData/*1:0*/ __Vdlyvlsb__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__dirty__v0;
    __Vdlyvlsb__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__dirty__v0 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__dirty__v0;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__dirty__v0 = 0;
    CData/*3:0*/ __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_stat;
    __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_stat = 0;
    IData/*31:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data__v0;
    __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data__v0;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data__v0 = 0;
    IData/*31:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data__v1;
    __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data__v1 = 0;
    IData/*31:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data__v2;
    __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data__v2 = 0;
    IData/*31:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data__v3;
    __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data__v3 = 0;
    IData/*31:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data__v4;
    __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data__v4 = 0;
    IData/*31:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data__v5;
    __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data__v5 = 0;
    IData/*31:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data__v6;
    __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data__v6 = 0;
    IData/*31:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data__v7;
    __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data__v7 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data__v8;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data__v8 = 0;
    CData/*2:0*/ __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_counter;
    __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_counter = 0;
    CData/*6:0*/ __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__0__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0;
    __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__0__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0 = 0;
    IData/*19:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__0__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0;
    __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__0__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__0__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__0__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__1__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0;
    __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__1__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0 = 0;
    IData/*19:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__1__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0;
    __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__1__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__1__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__1__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__2__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0;
    __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__2__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0 = 0;
    IData/*19:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__2__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0;
    __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__2__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__2__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__2__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__3__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0;
    __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__3__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0 = 0;
    IData/*19:0*/ __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__3__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0;
    __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__3__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__3__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__3__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_h77486fef__0;
    VlWide<3>/*95:0*/ __Vtemp_h8815db06__0;
    VlWide<3>/*95:0*/ __Vtemp_h9a40d6d5__0;
    // Body
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__3__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__2__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__1__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__0__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0 = 0U;
    __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__reset_counter 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__reset_counter;
    __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__reset_counter 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__reset_counter;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_buf_data__v0 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_buf_data__v1 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_buf_data__v0 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_buf_data__v1 = 0U;
    __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_counter 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_counter;
    __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__3__KET____DOT__btbReg__v0 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__2__KET____DOT__btbReg__v0 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__1__KET____DOT__btbReg__v0 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__0__KET____DOT__btbReg__v0 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__regHiLo__v0 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__regHiLo__v1 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__regHiLo__v2 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__regHiLo__v3 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__3__KET____DOT__btbTag__v0 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data__v0 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data__v8 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__2__KET____DOT__btbTag__v0 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__1__KET____DOT__btbTag__v0 = 0U;
    __Vdly__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__tail 
        = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__tail;
    __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__0__KET____DOT__btbTag__v0 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v0 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v1 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v2 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v3 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v4 = 0U;
    __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_stat 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_stat;
    __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_counter 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_counter;
    __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__isAccepted 
        = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__isAccepted;
    __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__timer 
        = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__timer;
    __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__start 
        = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__start;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v0 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v1 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v2 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v3 = 0U;
    __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__position 
        = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__position;
    __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__HiLo_busy 
        = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__HiLo_busy;
    __Vdly__mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__tick 
        = vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__tick;
    __Vdly__mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__count 
        = vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__count;
    __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__have_data 
        = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__have_data;
    __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__timer 
        = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__timer;
    __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v0 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v4 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v7 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v9 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v0 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v4 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v5 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v8 = 0U;
    vlSelf->__Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_index 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_index;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__dirty__v0 = 0U;
    __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_req 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_req;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v1 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v3 = 0U;
    __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v0 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v1 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v4 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v5 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v8 = 0U;
    __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_req 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_req;
    __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_counter 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_counter;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__3__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__2__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__1__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__0__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v0 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v1 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v2 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v3 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__buf_rdata__v0 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__buf_rdata__v1 = 0U;
    __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat;
    if ((1U & (~ (IData)(vlSelf->aresetn)))) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__i = 4U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__i = 8U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__i = 4U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__i = 8U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__i = 8U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__i = 0U;
        while (VL_GTS_III(32, 0x80U, vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__i)) {
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__dirty[(0x7fU 
                                                                                & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__i)] = 0U;
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__i 
                = ((IData)(1U) + vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__i);
        }
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Status_exl = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__needClear)))) {
        __Vdly__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__tail = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__head = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__IQ_supplyValid = 0U;
    } else {
        if (vlSelf->mycpu_top__DOT__u_Main__DOT__IF_valid_o) {
            __Vdly__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__tail 
                = (0x1fU & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__tail) 
                            + ((1U & (- (IData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_Compressor__DOT____VdfgTmp_hefe5f881__0)))) 
                               | ((2U & (- (IData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_Compressor__DOT____VdfgTmp_h48e5f017__0)))) 
                                  | ((3U & (- (IData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__u_Compressor__DOT____VdfgTmp_h3e94583a__0)))) 
                                     | (4U & (- (IData)(
                                                        (0xfU 
                                                         == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchSelectCheck__DOT__actualEnable))))))))));
        }
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__head 
            = (0x1fU & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__head) 
                         + (1U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__IS_upDateMode_i))) 
                        + (1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__IS_upDateMode_i) 
                                 >> 1U))));
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__IQ_supplyValid 
            = ((2U <= (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__nextNumber))
                ? 3U : (3U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__nextNumber)));
    }
    if ((1U & (((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__needClear)) 
               | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__needUpdata)))) {
        __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__isAccepted = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__genblk2__BRA__1__KET____DOT__wb_savedData = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__genblk2__BRA__0__KET____DOT__wb_savedData = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__genblk2__BRA__1__KET____DOT__useSavedWb = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__genblk2__BRA__0__KET____DOT__useSavedWb = 0U;
    } else {
        if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__hasData) {
            __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__isAccepted 
                = (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MDU_Oprand_ok) 
                    & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MduReq)) 
                   | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__isAccepted));
        }
        if ((1U & ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_forwardSel_up
                    [1U] >> 2U) & (~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__genblk2__BRA__1__KET____DOT__useSavedWb))))) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__genblk2__BRA__1__KET____DOT__wb_savedData 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__WB_forwardData_w_o;
        }
        if ((1U & ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_forwardSel_up
                    [0U] >> 2U) & (~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__genblk2__BRA__0__KET____DOT__useSavedWb))))) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__genblk2__BRA__0__KET____DOT__wb_savedData 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__WB_forwardData_w_o;
        }
        if ((4U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_forwardSel_up
             [1U])) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__genblk2__BRA__1__KET____DOT__useSavedWb = 1U;
        }
        if ((4U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_forwardSel_up
             [0U])) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__genblk2__BRA__0__KET____DOT__useSavedWb = 1U;
        }
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__cancel)))) {
        __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__start = 0U;
        __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__timer = 0U;
        __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__HiLo_busy = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__reminder_sign_r = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__adderRes = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__savedCin = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__multiRes = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__isAccumlate_r = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__add_sub_op_r = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__divisor = 0xffffffffU;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__minuend = 0ULL;
        __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__timer = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__quotient_iter = 0U;
        __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__have_data = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__quotient_sign_r = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__upBound = 2U;
    } else {
        if (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__mulReq) 
             & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__mulOprand_ok))) {
            __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__start = 1U;
            __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__timer = 1U;
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__isAccumlate_r 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__isAccumlate;
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__add_sub_op_r 
                = (1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_mduOperator_r_i) 
                         >> 4U));
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__upBound 
                = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__isAccumlate)
                    ? 4U : 2U);
        } else if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__start) {
            if (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__timer) 
                 < (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__upBound))) {
                __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__timer 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__timer)));
                __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__start = 1U;
            } else {
                __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__timer = 0U;
                __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__start = 0U;
            }
        }
        if ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MDU_Oprand_ok) 
              & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MduReq)) 
             != (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MDU_data_ok))) {
            __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__HiLo_busy 
                = (1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__HiLo_busy)));
        }
        if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__div_oprand_ok) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__reminder_sign_r 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__reminder_sign;
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__divisor 
                = (((- (IData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__y_sign))) 
                    ^ vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__divisor_i) 
                   + (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__y_sign));
            __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__timer = 1U;
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__minuend 
                = (QData)((IData)((((- (IData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__reminder_sign))) 
                                    ^ vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__divident_i) 
                                   + (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__reminder_sign))));
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__quotient_iter = 0U;
            __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__have_data = 1U;
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__quotient_sign_r 
                = (1U & (((vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__divident_i 
                           ^ vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__divisor_i) 
                          >> 0x1fU) & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_mduOperator_r_i) 
                                       >> 2U)));
        } else if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__have_data) {
            if ((0x20U > (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__timer))) {
                __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__timer 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__timer)));
                vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__minuend 
                    = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__minuend_back;
                vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__quotient_iter 
                    = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__quotient_temp;
                __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__have_data = 1U;
            } else {
                __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__timer = 0U;
                vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__minuend = 0ULL;
                vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__quotient_iter = 0U;
                __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__have_data = 0U;
            }
        }
        if ((2U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__timer))) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__adderRes 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__adder_u__DOT__add_sub_res;
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__savedCin 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__crFlag;
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__multiRes 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__Multiplier_u__DOT__seg1[1U];
        }
    }
    __Vdly__mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__tick 
        = ((IData)(vlSelf->aresetn) & (~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__tick)));
    if (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__IF_valid_o) 
         & (IData)(vlSelf->aresetn))) {
        if ((8U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__IF_instEnable_o))) {
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v0[0U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [3U][0U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v0[1U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [3U][1U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v0[2U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [3U][2U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v0[3U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [3U][3U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v0[4U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [3U][4U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v0[5U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [3U][5U];
            __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v0 = 1U;
            __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v0 
                = (0xfU & ((IData)(3U) + (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__tail)));
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v1[0U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [2U][0U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v1[1U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [2U][1U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v1[2U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [2U][2U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v1[3U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [2U][3U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v1[4U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [2U][4U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v1[5U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [2U][5U];
            __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v1 
                = (0xfU & ((IData)(2U) + (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__tail)));
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v2[0U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [1U][0U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v2[1U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [1U][1U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v2[2U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [1U][2U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v2[3U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [1U][3U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v2[4U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [1U][4U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v2[5U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [1U][5U];
            __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v2 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__tail)));
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v3[0U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [0U][0U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v3[1U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [0U][1U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v3[2U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [0U][2U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v3[3U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [0U][3U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v3[4U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [0U][4U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v3[5U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [0U][5U];
            __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v3 
                = (0xfU & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__tail));
        } else if ((4U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__IF_instEnable_o))) {
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v4[0U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [2U][0U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v4[1U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [2U][1U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v4[2U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [2U][2U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v4[3U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [2U][3U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v4[4U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [2U][4U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v4[5U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [2U][5U];
            __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v4 = 1U;
            __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v4 
                = (0xfU & ((IData)(2U) + (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__tail)));
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v5[0U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [1U][0U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v5[1U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [1U][1U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v5[2U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [1U][2U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v5[3U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [1U][3U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v5[4U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [1U][4U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v5[5U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [1U][5U];
            __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v5 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__tail)));
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v6[0U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [0U][0U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v6[1U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [0U][1U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v6[2U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [0U][2U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v6[3U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [0U][3U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v6[4U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [0U][4U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v6[5U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [0U][5U];
            __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v6 
                = (0xfU & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__tail));
        } else if ((2U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__IF_instEnable_o))) {
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v7[0U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [1U][0U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v7[1U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [1U][1U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v7[2U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [1U][2U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v7[3U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [1U][3U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v7[4U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [1U][4U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v7[5U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [1U][5U];
            __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v7 = 1U;
            __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v7 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__tail)));
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v8[0U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [0U][0U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v8[1U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [0U][1U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v8[2U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [0U][2U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v8[3U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [0U][3U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v8[4U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [0U][4U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v8[5U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [0U][5U];
            __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v8 
                = (0xfU & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__tail));
        } else if ((1U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__IF_instEnable_o))) {
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v9[0U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [0U][0U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v9[1U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [0U][1U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v9[2U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [0U][2U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v9[3U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [0U][3U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v9[4U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [0U][4U];
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v9[5U] 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__packedInfo
                [0U][5U];
            __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v9 = 1U;
            __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v9 
                = (0xfU & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__tail));
        }
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__needClear)))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_branchRisk_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_oprand0IsReg_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_oprand1IsReg_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_oprand1_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_readData_r_i = 0ULL;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__EXE_up_aluRes_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__PREMEM_preliminaryRes_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_aluOprator_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_forwardSel1_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__SBA_aluRes_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_forwardSel0_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__REEXE_regData_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__hasData = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_predTake_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_predDest_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__EXE_down_aluRes_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_branchKind_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_oprand0_r_i = 0U;
    } else {
        if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__needUpdata) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_branchRisk_r_i 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__ID_up_branchRisk_o;
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_oprand0IsReg_r_i 
                = (1U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__oprand_sel
                   [0U][0U]);
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_oprand1IsReg_r_i 
                = (1U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__oprand_sel
                   [0U][1U]);
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_oprand1_r_i 
                = ((4U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__oprand1_sel_up
                    [0U]) ? (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT____Vcellout__ImmExtender_up__extendedRes 
                             << 2U) : vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT____Vcellout__ImmExtender_up__extendedRes);
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_readData_r_i 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__ID_up_readData_o;
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__EXE_up_aluRes_r_i 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_up_aluRes_o;
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__PREMEM_preliminaryRes_r_i 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_preliminaryRes_o;
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_aluOprator_r_i 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up
                [0U];
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_forwardSel1_r_i 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__forwardSel
                [0U][1U];
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__SBA_aluRes_r_i 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__EXE_up_aluRes_r_i;
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_forwardSel0_r_i 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__forwardSel
                [0U][0U];
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__REEXE_regData_r_i 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_REEXE__DOT__SBA_aluRes_r_i;
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_predTake_r_i 
                = (1U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_predTake_p_r_i));
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_predDest_r_i 
                = (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_predDest_p_r_i);
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__EXE_down_aluRes_r_i 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_aluRes_o;
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_branchKind_r_i 
                = ((((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2)) 
                     & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h1dffa6d3__0)) 
                    << 5U) | ((((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2)) 
                                & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h0066a336__0)) 
                               << 4U) | ((((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2)) 
                                           & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_1) 
                                              & (IData)(
                                                        (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                                                         >> 0x10U)))) 
                                          << 3U) | 
                                         ((((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2)) 
                                            & ((~ (IData)(
                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                                                           >> 0x10U))) 
                                               & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_1))) 
                                           << 2U) | 
                                          ((((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2)) 
                                             & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_haf0e1199__0)) 
                                            << 1U) 
                                           | ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2)) 
                                              & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h2647a248__0)))))));
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_oprand0_r_i 
                = ((4U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__oprand0_sel_up
                    [0U]) ? ((4U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__extendAction_up
                              [0U]) ? ((IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_VAddr_p_r_i 
                                                >> 0x1cU)) 
                                       << 0x1cU) : 
                             ((IData)(4U) + (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_VAddr_p_r_i)))
                    : (0x1fU & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                                        >> 6U))));
        }
        if (vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_allowin_w_o) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__hasData 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__ID_up_valid_w_o;
        }
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__needClear)))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__EXE_up_corrTake_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__hasData = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__EXE_up_branchRisk_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__EXE_up_repairAction_r_i = 0U;
    } else {
        if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__needUpdata) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__EXE_up_corrTake_r_i 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_up_corrTake_o;
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__EXE_up_branchRisk_r_i 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_up_branchRisk_o;
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__EXE_up_repairAction_r_i 
                = (0x18U | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_up_branchRisk_o) 
                             << 7U) | (0x67U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_repairAction_r_i))));
        }
        if (vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_allowin_w_o) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__hasData 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_up_valid_w_o;
        }
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__needClear)))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_repairAction_r_i = 0U;
    } else if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__needUpdata) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_repairAction_r_i 
            = (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__ID_up_branchRisk_o) 
                << 7U) | ((((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2)) 
                            & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h648e5e68__0) 
                               | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h0a49da51__0))) 
                           << 6U) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h9b4d2d04__0) 
                                      << 4U) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h9b4d2d04__0) 
                                                 << 3U) 
                                                | ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h1f3d011e__0) 
                                                     | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hdb0d3f0f__0)) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hdb0d3f0f__0) 
                                                       << 1U) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h1f3d011e__0) 
                                                            | ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__0__KET____DOT__temp_0_2)) 
                                                               & (~ (IData)(
                                                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                                                                             >> 0x1fU))))))))))));
    }
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__commit 
        = ((IData)(vlSelf->aresetn) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__hasData));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__commit 
        = ((IData)(vlSelf->aresetn) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__hasData));
    if (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__Inst_TagV_TP__tagwen) {
        __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__0__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0 
            = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_tag;
        __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__0__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0 = 1U;
        __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__0__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0 
            = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_index;
    }
    if (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__Inst_TagV_TP__tagwen) {
        __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__3__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0 
            = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_tag;
        __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__3__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0 = 1U;
        __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__3__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0 
            = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_index;
    }
    if (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__Inst_TagV_TP__tagwen) {
        __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__2__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0 
            = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_tag;
        __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__2__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0 = 1U;
        __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__2__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0 
            = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_index;
    }
    if (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__Inst_TagV_TP__tagwen) {
        __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__1__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0 
            = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_tag;
        __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__1__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0 = 1U;
        __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__1__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0 
            = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_index;
    }
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__uca_ok 
        = ((IData)(vlSelf->aresetn) & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__data_uca_data_ok));
    if ((1U & (((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__needUpdata)) 
               | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__needClear)))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__had_branch_flush = 0U;
    } else if (vlSelf->mycpu_top__DOT__u_Main__DOT__SBA_flush_w_o) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__had_branch_flush = 1U;
    }
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__0__KET____DOT__Data_TagV_TP__DOT__tagv_res 
        = ((vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__0__KET____DOT__Data_TagV_TP__DOT__tag_ram
            [vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_index] 
            << 1U) | (1U & (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__0__KET____DOT__Data_TagV_TP__DOT__v_ram[
                            ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_index) 
                             >> 5U)] >> (0x1fU & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_index)))));
    if (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__Data_TagV_TP__tagwen) {
        __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__0__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0 
            = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_wdata;
        __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__0__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0 = 1U;
        __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__0__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0 
            = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_index;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__0__KET____DOT__Data_TagV_TP__DOT__v_ram[((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_index) 
                                                                                >> 5U)] 
            = (((~ ((IData)(1U) << (0x1fU & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_index)))) 
                & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__0__KET____DOT__Data_TagV_TP__DOT__v_ram[
                ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_index) 
                 >> 5U)]) | ((0xfU != (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat)) 
                             << (0x1fU & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_index))));
    }
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__3__KET____DOT__Data_TagV_TP__DOT__tagv_res 
        = ((vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__3__KET____DOT__Data_TagV_TP__DOT__tag_ram
            [vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_index] 
            << 1U) | (1U & (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__3__KET____DOT__Data_TagV_TP__DOT__v_ram[
                            ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_index) 
                             >> 5U)] >> (0x1fU & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_index)))));
    if (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__Data_TagV_TP__tagwen) {
        __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__3__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0 
            = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_wdata;
        __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__3__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0 = 1U;
        __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__3__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0 
            = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_index;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__3__KET____DOT__Data_TagV_TP__DOT__v_ram[((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_index) 
                                                                                >> 5U)] 
            = (((~ ((IData)(1U) << (0x1fU & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_index)))) 
                & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__3__KET____DOT__Data_TagV_TP__DOT__v_ram[
                ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_index) 
                 >> 5U)]) | ((0xfU != (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat)) 
                             << (0x1fU & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_index))));
    }
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__2__KET____DOT__Data_TagV_TP__DOT__tagv_res 
        = ((vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__2__KET____DOT__Data_TagV_TP__DOT__tag_ram
            [vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_index] 
            << 1U) | (1U & (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__2__KET____DOT__Data_TagV_TP__DOT__v_ram[
                            ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_index) 
                             >> 5U)] >> (0x1fU & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_index)))));
    if (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__Data_TagV_TP__tagwen) {
        __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__2__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0 
            = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_wdata;
        __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__2__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0 = 1U;
        __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__2__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0 
            = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_index;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__2__KET____DOT__Data_TagV_TP__DOT__v_ram[((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_index) 
                                                                                >> 5U)] 
            = (((~ ((IData)(1U) << (0x1fU & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_index)))) 
                & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__2__KET____DOT__Data_TagV_TP__DOT__v_ram[
                ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_index) 
                 >> 5U)]) | ((0xfU != (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat)) 
                             << (0x1fU & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_index))));
    }
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__1__KET____DOT__Data_TagV_TP__DOT__tagv_res 
        = ((vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__1__KET____DOT__Data_TagV_TP__DOT__tag_ram
            [vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_index] 
            << 1U) | (1U & (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__1__KET____DOT__Data_TagV_TP__DOT__v_ram[
                            ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_index) 
                             >> 5U)] >> (0x1fU & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_index)))));
    if (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__Data_TagV_TP__tagwen) {
        __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__1__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0 
            = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_wdata;
        __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__1__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0 = 1U;
        __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__1__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0 
            = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_index;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__1__KET____DOT__Data_TagV_TP__DOT__v_ram[((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_index) 
                                                                                >> 5U)] 
            = (((~ ((IData)(1U) << (0x1fU & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_index)))) 
                & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__1__KET____DOT__Data_TagV_TP__DOT__v_ram[
                ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_index) 
                 >> 5U)]) | ((0xfU != (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat)) 
                             << (0x1fU & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_index))));
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_valid_w_o))))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_alignCheck_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_isDangerous_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_loadSel_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_rtData_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_finalRes_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_memReq_r_i = 0U;
    } else if ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_valid_w_o) 
                 & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_excOccur_w_o)) 
                & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_exceptSeg_w_o) 
                   >> 2U))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_alignCheck_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_isDangerous_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_loadSel_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_rtData_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_finalRes_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_memReq_r_i = 0U;
    } else if (vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_valid_w_o) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_alignCheck_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_alignCheck_r_i;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_isDangerous_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_isDangerous_r_i;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_loadSel_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_loadSel_r_i;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_rtData_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_rtData_r_i;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_finalRes_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_finalRes_o;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_memReq_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_memReq_r_i;
    }
    if (vlSelf->aresetn) {
        __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__reset_counter 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__reset_counter)));
        __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__reset_counter 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__reset_counter)));
        if (((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__inst_cache_rvalid) 
             & (0U == (9U & (IData)(vlSelf->rid))))) {
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_buf_data__v0 
                = vlSelf->rdata;
            __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_buf_data__v0 = 1U;
            __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_buf_data__v0 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_counter;
        }
        if (((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__data_cache_rvalid) 
             & (0U == (9U & (IData)(vlSelf->rid))))) {
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_buf_data__v0 
                = vlSelf->rdata;
            __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_buf_data__v0 = 1U;
            __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_buf_data__v0 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_counter;
        }
        if ((2U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_stat))) {
            __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_counter = 0U;
        } else if ((IData)(((4U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_stat)) 
                            & (IData)(vlSelf->wready)))) {
            __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_counter 
                = (7U & ((IData)(1U) + (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_counter)));
        }
        if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__3__KET____DOT__wen) {
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__3__KET____DOT__btbReg__v0 
                = (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_correctDest_w_o 
                   >> 2U);
            __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__3__KET____DOT__btbReg__v0 = 1U;
            __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__3__KET____DOT__btbReg__v0 
                = (0xffU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_erroVAddr_w_o 
                            >> 4U));
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__3__KET____DOT__btbTag__v0 
                = (0xffU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_erroVAddr_w_o 
                            >> 0xcU));
            __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__3__KET____DOT__btbTag__v0 = 1U;
            __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__3__KET____DOT__btbTag__v0 
                = (0xffU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_erroVAddr_w_o 
                            >> 4U));
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__3__KET____DOT__btbValid[(7U 
                                                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_erroVAddr_w_o 
                                                                                >> 9U))] 
                = (((~ ((IData)(1U) << (0x1fU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_erroVAddr_w_o 
                                                 >> 4U)))) 
                    & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__3__KET____DOT__btbValid[
                    (7U & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_erroVAddr_w_o 
                           >> 9U))]) | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_correctTake_w_o) 
                                        << (0x1fU & 
                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_erroVAddr_w_o 
                                             >> 4U))));
        }
        if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__2__KET____DOT__wen) {
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__2__KET____DOT__btbReg__v0 
                = (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_correctDest_w_o 
                   >> 2U);
            __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__2__KET____DOT__btbReg__v0 = 1U;
            __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__2__KET____DOT__btbReg__v0 
                = (0xffU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_erroVAddr_w_o 
                            >> 4U));
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__2__KET____DOT__btbTag__v0 
                = (0xffU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_erroVAddr_w_o 
                            >> 0xcU));
            __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__2__KET____DOT__btbTag__v0 = 1U;
            __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__2__KET____DOT__btbTag__v0 
                = (0xffU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_erroVAddr_w_o 
                            >> 4U));
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__2__KET____DOT__btbValid[(7U 
                                                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_erroVAddr_w_o 
                                                                                >> 9U))] 
                = (((~ ((IData)(1U) << (0x1fU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_erroVAddr_w_o 
                                                 >> 4U)))) 
                    & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__2__KET____DOT__btbValid[
                    (7U & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_erroVAddr_w_o 
                           >> 9U))]) | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_correctTake_w_o) 
                                        << (0x1fU & 
                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_erroVAddr_w_o 
                                             >> 4U))));
        }
        if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__1__KET____DOT__wen) {
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__1__KET____DOT__btbReg__v0 
                = (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_correctDest_w_o 
                   >> 2U);
            __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__1__KET____DOT__btbReg__v0 = 1U;
            __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__1__KET____DOT__btbReg__v0 
                = (0xffU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_erroVAddr_w_o 
                            >> 4U));
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__1__KET____DOT__btbTag__v0 
                = (0xffU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_erroVAddr_w_o 
                            >> 0xcU));
            __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__1__KET____DOT__btbTag__v0 = 1U;
            __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__1__KET____DOT__btbTag__v0 
                = (0xffU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_erroVAddr_w_o 
                            >> 4U));
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__1__KET____DOT__btbValid[(7U 
                                                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_erroVAddr_w_o 
                                                                                >> 9U))] 
                = (((~ ((IData)(1U) << (0x1fU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_erroVAddr_w_o 
                                                 >> 4U)))) 
                    & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__1__KET____DOT__btbValid[
                    (7U & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_erroVAddr_w_o 
                           >> 9U))]) | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_correctTake_w_o) 
                                        << (0x1fU & 
                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_erroVAddr_w_o 
                                             >> 4U))));
        }
        if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__0__KET____DOT__wen) {
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__0__KET____DOT__btbReg__v0 
                = (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_correctDest_w_o 
                   >> 2U);
            __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__0__KET____DOT__btbReg__v0 = 1U;
            __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__0__KET____DOT__btbReg__v0 
                = (0xffU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_erroVAddr_w_o 
                            >> 4U));
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__0__KET____DOT__btbTag__v0 
                = (0xffU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_erroVAddr_w_o 
                            >> 0xcU));
            __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__0__KET____DOT__btbTag__v0 = 1U;
            __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__0__KET____DOT__btbTag__v0 
                = (0xffU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_erroVAddr_w_o 
                            >> 4U));
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__0__KET____DOT__btbValid[(7U 
                                                                                & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_erroVAddr_w_o 
                                                                                >> 9U))] 
                = (((~ ((IData)(1U) << (0x1fU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_erroVAddr_w_o 
                                                 >> 4U)))) 
                    & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__0__KET____DOT__btbValid[
                    (7U & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_erroVAddr_w_o 
                           >> 9U))]) | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_correctTake_w_o) 
                                        << (0x1fU & 
                                            (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FU_erroVAddr_w_o 
                                             >> 4U))));
        }
        if (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MDU_data_ok) 
             & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MDU_writeEnable))) {
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__regHiLo__v0 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MDU_writeData
                [0U];
            __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__regHiLo__v0 = 1U;
        }
        if (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MDU_data_ok) 
             & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MDU_writeEnable) 
                >> 1U))) {
            __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__regHiLo__v2 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MDU_writeData
                [1U];
            __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__regHiLo__v2 = 1U;
        }
        if ((1U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_stat))) {
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data__v0 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata
                [(3U & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__dirty_loc))][7U];
            __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data__v0 = 1U;
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data__v1 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata
                [(3U & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__dirty_loc))][6U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data__v2 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata
                [(3U & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__dirty_loc))][5U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data__v3 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata
                [(3U & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__dirty_loc))][4U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data__v4 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata
                [(3U & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__dirty_loc))][3U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data__v5 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata
                [(3U & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__dirty_loc))][2U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data__v6 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata
                [(3U & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__dirty_loc))][1U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data__v7 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata
                [(3U & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__dirty_loc))][0U];
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_addr 
                = ((vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back
                    [(3U & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__dirty_loc))] 
                    << 0xcU) | ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_index) 
                                << 5U));
        }
        if (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__WAW_coflict)) 
             & (3U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__writeEnable)))) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT____Vlvbound_h6f5264cf__0 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__writeData
                [1U];
            if ((0x1eU >= (0x1fU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__writeNum
                                    [1U] - (IData)(1U))))) {
                __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v0 
                    = vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT____Vlvbound_h6f5264cf__0;
                __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v0 = 1U;
                __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v0 
                    = (0x1fU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__writeNum
                                [1U] - (IData)(1U)));
            }
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT____Vlvbound_h6f4d11f8__0 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__writeData
                [0U];
            if ((0x1eU >= (0x1fU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__writeNum
                                    [0U] - (IData)(1U))))) {
                __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v1 
                    = vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT____Vlvbound_h6f4d11f8__0;
                __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v1 = 1U;
                __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v1 
                    = (0x1fU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__writeNum
                                [0U] - (IData)(1U)));
            }
        } else if (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__WB_writeEnable_w_o)) 
                    & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__PBA_writeEnable_w_o))) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT____Vlvbound_h6f4d11f8__1 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__writeData
                [0U];
            if ((0x1eU >= (0x1fU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__writeNum
                                    [0U] - (IData)(1U))))) {
                __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v2 
                    = vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT____Vlvbound_h6f4d11f8__1;
                __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v2 = 1U;
                __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v2 
                    = (0x1fU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__writeNum
                                [0U] - (IData)(1U)));
            }
        } else if ((((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__PBA_writeEnable_w_o)) 
                     & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__WB_writeEnable_w_o)) 
                    | ((3U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__writeEnable)) 
                       & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__WAW_coflict)))) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT____Vlvbound_h6f5264cf__1 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__writeData
                [1U];
            if ((0x1eU >= (0x1fU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__writeNum
                                    [1U] - (IData)(1U))))) {
                __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v3 
                    = vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT____Vlvbound_h6f5264cf__1;
                __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v3 = 1U;
                __Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v3 
                    = (0x1fU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__writeNum
                                [1U] - (IData)(1U)));
            }
        }
        if ((0U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_stat))) {
            __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_stat 
                = (((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_req) 
                    & (~ (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__hit_run)))
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_stat))) {
            __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_stat 
                = ((1U & (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back
                          [(3U & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__dirty_loc))] 
                          & (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__dirty
                             [vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_index] 
                             >> (3U & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__dirty_loc)))))
                    ? 2U : 0U);
        } else if ((2U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_stat))) {
            __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_stat 
                = ((IData)(vlSelf->awready) ? 4U : 2U);
        } else if ((4U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_stat))) {
            __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_stat 
                = ((7U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_counter))
                    ? 5U : 4U);
        } else if ((5U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_stat))) {
            __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_stat 
                = (((~ ((IData)(vlSelf->bid) >> 1U)) 
                    & (IData)(vlSelf->bvalid)) ? 0U
                    : 5U);
        }
        if ((2U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat))) {
            __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_counter 
                = (7U & ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_offset) 
                         >> 2U));
            if ((1U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__way))) {
                __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v0 
                    = (3U | (4U & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru
                             [vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_index]));
                __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v0 = 1U;
                __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v0 
                    = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_index;
            } else if ((2U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__way))) {
                __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v1 
                    = (1U | (4U & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru
                             [vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_index]));
                __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v1 = 1U;
                __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v1 
                    = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_index;
            } else if ((4U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__way))) {
                __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v2 
                    = (4U | (2U & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru
                             [vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_index]));
                __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v2 = 1U;
                __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v2 
                    = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_index;
            } else if ((8U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__way))) {
                __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v3 
                    = (2U & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru
                       [vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_index]);
                __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v3 = 1U;
                __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v3 
                    = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_index;
            }
        } else if (((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__data_cache_rvalid) 
                    & (0U == (9U & (IData)(vlSelf->rid))))) {
            __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_counter 
                = (7U & ((IData)(1U) + (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_counter)));
        }
        if (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_writeCp0_r_i) 
             & (0x48U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_positionCp0_r_i)))) {
            __Vdly__mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__count 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_preliminaryRes_r_i;
        } else if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__tick) {
            __Vdly__mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__count 
                = ((IData)(1U) + vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__count);
        }
        if (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__hit_write) {
            __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__dirty__v0 = 1U;
            __Vdlyvlsb__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__dirty__v0 
                = (3U & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__hit_way));
            __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__dirty__v0 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_index;
        }
        __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat 
            = ((8U & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat))
                ? ((4U & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat))
                    ? ((2U & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat))
                        ? ((1U & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat))
                            ? ((0x7fU == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__reset_counter))
                                ? 0U : 0xfU) : 0U) : 0U)
                    : 0U) : ((4U & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat))
                              ? ((2U & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat))
                                  ? 0U : ((1U & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat))
                                           ? 0U : 5U))
                              : ((2U & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat))
                                  ? ((1U & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat))
                                      ? ((((IData)(vlSelf->rlast) 
                                           & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__data_cache_rvalid)) 
                                          & (0U == 
                                             (9U & (IData)(vlSelf->rid))))
                                          ? 4U : 3U)
                                      : (((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__data_top_arready) 
                                          & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__ok_send_arv))
                                          ? 3U : 2U))
                                  : ((1U & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat))
                                      ? (((((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_req) 
                                            & (~ (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_unCache))) 
                                           & (~ (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__hit_run))) 
                                          & (~ (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_hasException)))
                                          ? 2U : 1U)
                                      : 1U))));
        if ((2U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat))) {
            __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_counter 
                = ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_offset) 
                   << 2U);
            if ((1U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__way))) {
                __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v0 
                    = (3U | (4U & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru
                             [vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_index]));
                __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v0 = 1U;
                __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v0 
                    = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_index;
            } else if ((2U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__way))) {
                __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v1 
                    = (1U | (4U & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru
                             [vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_index]));
                __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v1 = 1U;
                __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v1 
                    = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_index;
            } else if ((4U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__way))) {
                __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v2 
                    = (4U | (2U & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru
                             [vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_index]));
                __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v2 = 1U;
                __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v2 
                    = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_index;
            } else if ((8U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__way))) {
                __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v3 
                    = (2U & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru
                       [vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_index]);
                __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v3 = 1U;
                __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v3 
                    = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_index;
            }
        } else if (((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__inst_cache_rvalid) 
                    & (0U == (9U & (IData)(vlSelf->rid))))) {
            __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_counter 
                = (7U & ((IData)(1U) + (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_counter)));
        }
        if (((0U == (9U & (IData)(vlSelf->rid))) & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__inst_uncache_rvalid))) {
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__buf_rdata__v0 
                = vlSelf->rdata;
            __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__buf_rdata__v0 = 1U;
            __Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__buf_rdata__v0 
                = (3U & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__fill_counter));
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__fill_counter 
                = (7U & ((IData)(1U) + (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__fill_counter)));
        } else if (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__inst_uca_data_ok) {
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__fill_counter = 0U;
        }
        __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat 
            = ((8U & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat))
                ? ((4U & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat))
                    ? ((2U & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat))
                        ? ((1U & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat))
                            ? ((0x7fU == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__reset_counter))
                                ? 0U : 0xfU) : 0U) : 0U)
                    : 0U) : ((4U & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat))
                              ? ((2U & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat))
                                  ? 0U : ((1U & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat))
                                           ? 0U : 5U))
                              : ((2U & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat))
                                  ? ((1U & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat))
                                      ? ((((IData)(vlSelf->rlast) 
                                           & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__inst_cache_rvalid)) 
                                          & (0U == 
                                             (9U & (IData)(vlSelf->rid))))
                                          ? 4U : 3U)
                                      : ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__inst_top_arready)
                                          ? 3U : 2U))
                                  : ((1U & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat))
                                      ? (((((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_req) 
                                            & (~ (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_unCache))) 
                                           & (~ (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__hit_run))) 
                                          & (~ (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_hasException)))
                                          ? 2U : 1U)
                                      : 1U))));
        vlSelf->mycpu_top__DOT__debug_wb_rf_wdata1 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__WB_finalRes_w_o;
        if (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__data_uca_addr_ok) {
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_wdata 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_wdata;
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_wstrb 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_wstrb;
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_op 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_wr;
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_req 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__data_uca_req;
        } else if (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__data_uca_data_ok) {
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_req = 0U;
        }
        if (((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__data_uca_addr_ok) 
             & (~ (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_wr)))) {
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_arvalid = 1U;
        } else if (vlSelf->mycpu_top__DOT__u_cache_top__DOT__data_top_arready) {
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_arvalid = 0U;
        }
        if (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__inst_uca_addr_ok) {
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__last_arvalid = 1U;
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__last_addr 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__inst_cache_araddr;
        } else if (vlSelf->mycpu_top__DOT__u_cache_top__DOT__inst_top_arready) {
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__last_arvalid = 0U;
        }
        vlSelf->mycpu_top__DOT__debug_wb_rf_wen0 = 
            (0xfU & (- (IData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__PBA_writeEnable_w_o))));
        vlSelf->mycpu_top__DOT__debug_wb_rf_wen1 = 
            (0xfU & (- (IData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__WB_writeEnable_w_o))));
        if (((IData)(vlSelf->mycpu_top__DOT__inst_req) 
             & (IData)(vlSelf->mycpu_top__DOT__inst_index_ok))) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_MemoryManagementUnit__DOT__isKseg0 
                = (4U == (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__PCR_VAddr_o 
                          >> 0x1dU));
        }
        if (vlSelf->mycpu_top__DOT__u_Main__DOT__DMMU_TLBPwrite_o) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Index_index 
                = (0x1fU & vlSelf->mycpu_top__DOT__u_Main__DOT__DMMU_Index_o);
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Index_p 
                = (vlSelf->mycpu_top__DOT__u_Main__DOT__DMMU_Index_o 
                   >> 0x1fU);
        }
        if (((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_awvalid) 
             & (IData)(vlSelf->awready))) {
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_wvalid = 1U;
        } else if (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__data_uncache_wready) {
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_wvalid = 0U;
        }
        if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_PCRegister__DOT__ok_to_change) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_PCRegister__DOT__temp_enable 
                = (1U | (0xeU & ((- (IData)((1U & (~ 
                                                   ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__needClear)) 
                                                    & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__DSP_needDelaySlot_o)))))) 
                                 << 1U)));
        }
        vlSelf->mycpu_top__DOT__debug_wb_rf_wdata0 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__REEXE_regData_r_i;
        vlSelf->mycpu_top__DOT__debug_wb_pc0 = vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__REEXE_VAddr_r_i;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__changed_pc 
            = ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__selectedInfo[2U] 
                << 0x1eU) | (vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__selectedInfo[1U] 
                             >> 2U));
        vlSelf->mycpu_top__DOT__debug_wb_rf_wnum0 = vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__REEXE_writeNum_r_i;
        if (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__isExceptionInNormal) 
             & ((4U == (0x1fU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__selectedInfo[2U] 
                                 >> 3U))) | ((5U == 
                                              (0x1fU 
                                               & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__selectedInfo[2U] 
                                                  >> 3U))) 
                                             | ((2U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__selectedInfo[2U] 
                                                     >> 3U))) 
                                                | ((3U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__selectedInfo[2U] 
                                                        >> 3U))) 
                                                   | (1U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__selectedInfo[2U] 
                                                          >> 3U))))))))) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__badVaddr 
                = ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__selectedInfo[1U] 
                    << 0x1eU) | (vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__selectedInfo[0U] 
                                 >> 2U));
        }
        if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__isExceptionInNormal) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Cause_exccode 
                = (0x1fU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__selectedInfo[2U] 
                            >> 3U));
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Cause_bd 
                = (1U & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__selectedInfo[2U] 
                         >> 2U));
        }
        if (vlSelf->mycpu_top__DOT__u_Main__DOT__data_tlbReq_o) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_DataMemoryManagementUnit__DOT__isKseg1 
                = (5U == (vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_aluRes_r_i 
                          >> 0x1dU));
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_DataMemoryManagementUnit__DOT__isKseg0 
                = (4U == (vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_aluRes_r_i 
                          >> 0x1dU));
        }
        vlSelf->mycpu_top__DOT__debug_wb_rf_wnum1 = vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_writeNum_r_i;
    } else {
        __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__reset_counter = 0U;
        __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__reset_counter = 0U;
        __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_buf_data__v1 = 1U;
        __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_buf_data__v1 = 1U;
        __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_counter = 0U;
        __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__regHiLo__v1 = 1U;
        __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__regHiLo__v3 = 1U;
        __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data__v8 = 1U;
        __Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v4 = 1U;
        __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_stat = 0U;
        __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_counter = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__i = 0U;
        while (VL_GTS_III(32, 0x80U, vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__i)) {
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru[(0x7fU 
                                                                                & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__i)] = 0U;
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__i 
                = ((IData)(1U) + vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__i);
        }
        __Vdly__mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__count = 0U;
        __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat = 0xfU;
        __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_counter = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__i = 0U;
        while (VL_GTS_III(32, 0x80U, vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__i)) {
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru[(0x7fU 
                                                                                & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__i)] = 0U;
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__i 
                = ((IData)(1U) + vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__i);
        }
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__fill_counter = 0U;
        __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__buf_rdata__v1 = 1U;
        __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat = 0xfU;
        vlSelf->mycpu_top__DOT__debug_wb_rf_wdata1 = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_wdata = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_wstrb = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_arvalid = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__last_arvalid = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__last_addr = 0U;
        vlSelf->mycpu_top__DOT__debug_wb_rf_wen0 = 0U;
        vlSelf->mycpu_top__DOT__debug_wb_rf_wen1 = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__3__KET____DOT__btbValid[0U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__3__KET____DOT__btbValid[1U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__3__KET____DOT__btbValid[2U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__3__KET____DOT__btbValid[3U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__3__KET____DOT__btbValid[4U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__3__KET____DOT__btbValid[5U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__3__KET____DOT__btbValid[6U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__3__KET____DOT__btbValid[7U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__2__KET____DOT__btbValid[0U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__2__KET____DOT__btbValid[1U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__2__KET____DOT__btbValid[2U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__2__KET____DOT__btbValid[3U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__2__KET____DOT__btbValid[4U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__2__KET____DOT__btbValid[5U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__2__KET____DOT__btbValid[6U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__2__KET____DOT__btbValid[7U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__1__KET____DOT__btbValid[0U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__1__KET____DOT__btbValid[1U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__1__KET____DOT__btbValid[2U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__1__KET____DOT__btbValid[3U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__1__KET____DOT__btbValid[4U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__1__KET____DOT__btbValid[5U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__1__KET____DOT__btbValid[6U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__1__KET____DOT__btbValid[7U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_MemoryManagementUnit__DOT__isKseg0 = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__0__KET____DOT__btbValid[0U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__0__KET____DOT__btbValid[1U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__0__KET____DOT__btbValid[2U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__0__KET____DOT__btbValid[3U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__0__KET____DOT__btbValid[4U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__0__KET____DOT__btbValid[5U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__0__KET____DOT__btbValid[6U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__0__KET____DOT__btbValid[7U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Index_index = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Index_p = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_addr = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_wvalid = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_PCRegister__DOT__temp_enable = 0xfU;
        vlSelf->mycpu_top__DOT__debug_wb_rf_wdata0 = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_op = 0U;
        vlSelf->mycpu_top__DOT__debug_wb_pc0 = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_req = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__changed_pc 
            = ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__selectedInfo[2U] 
                << 0x1eU) | (vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__selectedInfo[1U] 
                             >> 2U));
        vlSelf->mycpu_top__DOT__debug_wb_rf_wnum0 = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__badVaddr = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Cause_exccode = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Cause_bd = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_DataMemoryManagementUnit__DOT__isKseg1 = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_DataMemoryManagementUnit__DOT__isKseg0 = 0U;
        vlSelf->mycpu_top__DOT__debug_wb_rf_wnum1 = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_valid_w_o))))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_writeNum_r_i = 0U;
    } else if ((1U & (~ (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_valid_w_o) 
                          & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_excOccur_w_o)) 
                         & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_exceptSeg_w_o) 
                            >> 2U))))) {
        if (vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_valid_w_o) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_writeNum_r_i 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_writeNum_r_i;
        }
    }
    if (vlSelf->aresetn) {
        if (vlSelf->mycpu_top__DOT__u_Main__DOT__data_tlbReq_o) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_DataMemoryManagementUnit__DOT__unmapTag 
                = (0x1ffffU & ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_aluRes_r_i 
                                >> 0xcU) & (- (IData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_DataMemoryManagementUnit__DOT____VdfgTmp_h9dac7050__0)))));
        }
        if (((((1U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat)) 
               & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_req)) 
              & (0U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_hit_way))) 
             & (~ (IData)(vlSelf->mycpu_top__DOT__data_unCache)))) {
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_miss = 1U;
        } else if ((2U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat))) {
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_miss = 0U;
        }
    } else {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_DataMemoryManagementUnit__DOT__unmapTag = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_miss = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needClear)))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__hasData = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_clRes_r_i = 0U;
    } else {
        if (vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_allowin_w_o) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__hasData 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__pre_valid;
        }
        if ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needUpdata) 
              & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_excOccur_w_o)) 
             & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_exceptSeg_w_o))) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_clRes_r_i = 0U;
        } else if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needUpdata) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_clRes_r_i 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__clRes;
        }
    }
    if (vlSelf->aresetn) {
        if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__clReq) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__clRes 
                = (0x1fU & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__clRes) 
                            + (((1U & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__updataRegFile_up
                                       [0U] >> (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__position))) 
                                == (1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_mduOperator_r_i) 
                                          >> 7U))) ? 
                               (((1U & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__updataRegFile_up
                                        [0U] >> (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__position))))) 
                                 == (1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_mduOperator_r_i) 
                                           >> 7U)))
                                 ? 2U : 1U) : 0U)));
            __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__position 
                = (0x1fU & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__position) 
                            - (IData)(2U)));
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__cl_data_ok 
                = (1U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__position));
        }
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__is_int_inst 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_exceptionRisk_r_i;
    } else {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__clRes = 0U;
        __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__position = 0x1fU;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__cl_data_ok = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_valid_w_o))))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_exceptionRisk_r_i = 0U;
    } else if ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_valid_w_o) 
                 & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_excOccur_w_o)) 
                & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_exceptSeg_w_o) 
                   >> 2U))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_exceptionRisk_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_isInterrupt_w_o;
    } else if (vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_valid_w_o) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_exceptionRisk_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_isInterrupt_w_o;
    }
    if (vlSelf->aresetn) {
        if (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_writeCp0_r_i) 
             & (0x60U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_positionCp0_r_i)))) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Status_ie 
                = (1U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_preliminaryRes_r_i);
        }
        if (((IData)(vlSelf->mycpu_top__DOT__inst_req) 
             & (IData)(vlSelf->mycpu_top__DOT__inst_index_ok))) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_MemoryManagementUnit__DOT__kseg0UnCache 
                = (3U != (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Config_k0));
        }
        if (vlSelf->mycpu_top__DOT__u_Main__DOT__data_tlbReq_o) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_DataMemoryManagementUnit__DOT__isOther 
                = (1U & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_aluRes_r_i 
                             >> 0x1fU)) | (3U == (vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_aluRes_r_i 
                                                  >> 0x1eU))));
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_DataMemoryManagementUnit__DOT__mapReq 
                = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT____VdfgTmp_hf5108738__0) 
                   & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_memReq_r_i));
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_DataMemoryManagementUnit__DOT__kseg0UnCache 
                = (3U != (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Config_k0));
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_DataMemoryManagementUnit__DOT__mapWR 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_memWR_r_i;
        }
        if (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_writeCp0_r_i) 
             & (0x50U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_positionCp0_r_i)))) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__entryHi 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_preliminaryRes_r_i;
        } else if (vlSelf->mycpu_top__DOT__u_Main__DOT__DMMU_TLBRwrite_o) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__entryHi = 0U;
        }
        if (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_writeCp0_r_i) 
             & (0x18U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_positionCp0_r_i)))) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__entryLo1 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_preliminaryRes_r_i;
        } else if (vlSelf->mycpu_top__DOT__u_Main__DOT__DMMU_TLBRwrite_o) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__entryLo1 = 0U;
        }
        if (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_writeCp0_r_i) 
             & (0x10U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_positionCp0_r_i)))) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__entryLo0 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_preliminaryRes_r_i;
        } else if (vlSelf->mycpu_top__DOT__u_Main__DOT__DMMU_TLBRwrite_o) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__entryLo0 = 0U;
        }
        vlSelf->mycpu_top__DOT__debug_wb_pc1 = vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_VAddr_r_i;
    } else {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Status_ie = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_MemoryManagementUnit__DOT__kseg0UnCache = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_DataMemoryManagementUnit__DOT__isOther = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_DataMemoryManagementUnit__DOT__mapReq = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_DataMemoryManagementUnit__DOT__kseg0UnCache = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_DataMemoryManagementUnit__DOT__mapWR = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__entryHi = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__entryLo1 = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__entryLo0 = 0U;
        vlSelf->mycpu_top__DOT__debug_wb_pc1 = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_valid_w_o))))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_VAddr_r_i = 0U;
    } else if ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_valid_w_o) 
                 & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_excOccur_w_o)) 
                & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_exceptSeg_w_o) 
                   >> 2U))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_VAddr_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_VAddr_r_i;
    } else if (vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_valid_w_o) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_VAddr_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_VAddr_r_i;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__needClear)))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_readCp0_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_exceptBadVAddr_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_nonBlockMark_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_hasException_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_ExcCode_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_eret_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__hasData = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_isDelaySlot_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_exceptionRisk_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_alignCheck_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_isDangerous_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_loadSel_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_rtData_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_memReq_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_writeNum_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_VAddr_r_i = 0U;
    } else {
        if ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__needUpdata) 
              & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_excOccur_w_o)) 
             & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_exceptSeg_w_o) 
                >> 1U))) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_readCp0_r_i = 0U;
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_exceptBadVAddr_r_i = 0U;
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_nonBlockMark_r_i = 0U;
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_hasException_r_i = 0U;
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_ExcCode_r_i = 0U;
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_eret_r_i = 0U;
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_isDelaySlot_r_i = 0U;
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_exceptionRisk_r_i = 0U;
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_alignCheck_r_i = 0U;
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_isDangerous_r_i = 0U;
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_loadSel_r_i = 0U;
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_rtData_r_i = 0U;
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_memReq_r_i = 0U;
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_writeNum_r_i = 0U;
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_VAddr_r_i 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_VAddr_r_i;
        } else if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__needUpdata) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_readCp0_r_i 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_readCp0_r_i;
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_exceptBadVAddr_r_i 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_exceptBadVAddr_r_i;
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_nonBlockMark_r_i 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_nonBlockMark_r_i;
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_hasException_r_i 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_hasException_r_i;
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_ExcCode_r_i 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_ExcCode_r_i;
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_eret_r_i 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_eret_r_i;
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_isDelaySlot_r_i 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_isDelaySlot_r_i;
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_exceptionRisk_r_i 
                = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_exceptionRisk_r_i) 
                   | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_hasException_r_i));
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_alignCheck_r_i 
                = (3U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_aluRes_r_i);
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_isDangerous_r_i 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_isDangerous_r_i;
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_loadSel_r_i 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_loadSel_r_i;
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_rtData_r_i 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_storeData_r_i;
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_memReq_r_i 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_memReq_r_i;
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_writeNum_r_i 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_writeNum_r_i;
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_VAddr_r_i 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_VAddr_r_i;
        }
        if (vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_allowin_w_o) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__hasData 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_valid_w_o;
        }
    }
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__cp0_changed 
        = ((IData)(vlSelf->aresetn) & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__isExceptionInNormal) 
                                        | vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__selectedInfo[0U]) 
                                       | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_writeCp0_r_i)));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__0__KET____DOT__Inst_TagV_TP__DOT__tagv_res 
        = ((vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__0__KET____DOT__Inst_TagV_TP__DOT__tag_ram
            [vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_index] 
            << 1U) | (1U & (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__0__KET____DOT__Inst_TagV_TP__DOT__v_ram[
                            ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_index) 
                             >> 5U)] >> (0x1fU & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_index)))));
    if (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__Inst_TagV_TP__tagwen) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__0__KET____DOT__Inst_TagV_TP__DOT__v_ram[((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_index) 
                                                                                >> 5U)] 
            = (((~ ((IData)(1U) << (0x1fU & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_index)))) 
                & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__0__KET____DOT__Inst_TagV_TP__DOT__v_ram[
                ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_index) 
                 >> 5U)]) | ((0xfU != (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat)) 
                             << (0x1fU & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_index))));
    }
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__3__KET____DOT__Inst_TagV_TP__DOT__tagv_res 
        = ((vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__3__KET____DOT__Inst_TagV_TP__DOT__tag_ram
            [vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_index] 
            << 1U) | (1U & (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__3__KET____DOT__Inst_TagV_TP__DOT__v_ram[
                            ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_index) 
                             >> 5U)] >> (0x1fU & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_index)))));
    if (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__Inst_TagV_TP__tagwen) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__3__KET____DOT__Inst_TagV_TP__DOT__v_ram[((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_index) 
                                                                                >> 5U)] 
            = (((~ ((IData)(1U) << (0x1fU & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_index)))) 
                & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__3__KET____DOT__Inst_TagV_TP__DOT__v_ram[
                ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_index) 
                 >> 5U)]) | ((0xfU != (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat)) 
                             << (0x1fU & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_index))));
    }
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__2__KET____DOT__Inst_TagV_TP__DOT__tagv_res 
        = ((vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__2__KET____DOT__Inst_TagV_TP__DOT__tag_ram
            [vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_index] 
            << 1U) | (1U & (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__2__KET____DOT__Inst_TagV_TP__DOT__v_ram[
                            ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_index) 
                             >> 5U)] >> (0x1fU & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_index)))));
    if (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__Inst_TagV_TP__tagwen) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__2__KET____DOT__Inst_TagV_TP__DOT__v_ram[((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_index) 
                                                                                >> 5U)] 
            = (((~ ((IData)(1U) << (0x1fU & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_index)))) 
                & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__2__KET____DOT__Inst_TagV_TP__DOT__v_ram[
                ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_index) 
                 >> 5U)]) | ((0xfU != (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat)) 
                             << (0x1fU & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_index))));
    }
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__1__KET____DOT__Inst_TagV_TP__DOT__tagv_res 
        = ((vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__1__KET____DOT__Inst_TagV_TP__DOT__tag_ram
            [vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_index] 
            << 1U) | (1U & (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__1__KET____DOT__Inst_TagV_TP__DOT__v_ram[
                            ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_index) 
                             >> 5U)] >> (0x1fU & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_index)))));
    if (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__Inst_TagV_TP__tagwen) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__1__KET____DOT__Inst_TagV_TP__DOT__v_ram[((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_index) 
                                                                                >> 5U)] 
            = (((~ ((IData)(1U) << (0x1fU & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_index)))) 
                & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__1__KET____DOT__Inst_TagV_TP__DOT__v_ram[
                ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_index) 
                 >> 5U)]) | ((0xfU != (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat)) 
                             << (0x1fU & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_index))));
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | ((IData)(vlSelf->mycpu_top__DOT__inst_data_ok) 
                                               & (~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_FirstCacheTrace__DOT__hasData)))))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_BTBValidDest_o = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_BTBValidTake_o = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_VAddr_o = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_predDest_p_o[0U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_predDest_p_o[1U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_predDest_p_o[2U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_predDest_p_o[3U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_BTBInstEnable_o = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_predTake_p_o = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_originEnable_o = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_SecondCacheTrace__DOT__SCT_isCanceled_o = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_ExcCode_o = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_hasException_o = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_SecondCacheTrace__DOT__hasData = 0U;
    } else if (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_allowin_w_o) 
                & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_FirstCacheTrace__DOT__hasData))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_BTBValidDest_o 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_BTBValidDest_o;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_BTBValidTake_o 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_BTBValidTake_o;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_VAddr_o 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_VAddr_o;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_predDest_p_o[0U] 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_predDest_p_o[0U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_predDest_p_o[1U] 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_predDest_p_o[1U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_predDest_p_o[2U] 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_predDest_p_o[2U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_predDest_p_o[3U] 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_predDest_p_o[3U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_BTBInstEnable_o 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_BTBInstEnable_o;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_predTake_p_o 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_predTake_p_o;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_originEnable_o 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_originEnable_o;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_SecondCacheTrace__DOT__SCT_isCanceled_o 
            = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_isCanceled_o) 
               | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_SecondCacheTrace__DOT__needCancel));
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_ExcCode_o 
            = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_hasException_o)
                ? (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_ExcCode_o)
                : 2U);
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_hasException_o 
            = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_hasException_o) 
               | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_MemoryManagementUnit__DOT__isOther));
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_SecondCacheTrace__DOT__hasData = 1U;
    } else if (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_SecondCacheTrace__DOT__hasData) 
                & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_SecondCacheTrace__DOT__needCancel))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_SecondCacheTrace__DOT__SCT_isCanceled_o = 1U;
    }
    if ((1U & (~ ((~ (IData)(vlSelf->aresetn)) | ((IData)(vlSelf->mycpu_top__DOT__inst_data_ok) 
                                                  & (~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_FirstCacheTrace__DOT__hasData))))))) {
        if (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_allowin_w_o) 
             & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_FirstCacheTrace__DOT__hasData))) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_isRefill_o 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_MemoryManagementUnit__DOT__isOther;
        }
    }
    if ((1U & (((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__needClear)) 
               | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__needUpdata)))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__genblk2__BRA__1__KET____DOT__wb_savedData = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__genblk2__BRA__0__KET____DOT__wb_savedData = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__genblk2__BRA__1__KET____DOT__useSavedWb = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__genblk2__BRA__0__KET____DOT__useSavedWb = 0U;
    } else {
        if ((1U & ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_forwardSel_up
                    [1U] >> 2U) & (~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__genblk2__BRA__1__KET____DOT__useSavedWb))))) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__genblk2__BRA__1__KET____DOT__wb_savedData 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__WB_forwardData_w_o;
        }
        if ((1U & ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_forwardSel_up
                    [0U] >> 2U) & (~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__genblk2__BRA__0__KET____DOT__useSavedWb))))) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__genblk2__BRA__0__KET____DOT__wb_savedData 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__WB_forwardData_w_o;
        }
        if ((4U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_forwardSel_up
             [1U])) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__genblk2__BRA__1__KET____DOT__useSavedWb = 1U;
        }
        if ((4U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_forwardSel_up
             [0U])) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__genblk2__BRA__0__KET____DOT__useSavedWb = 1U;
        }
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_eret_r_i)))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__LLbit = 0U;
    } else if (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_memReq_r_i) 
                & ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_memWR_r_i)) 
                   & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_memAtom_r_i)))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__LLbit = 1U;
    }
    if (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_writeCp0_r_i) 
         & (0x60U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_positionCp0_r_i)))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Status_exl 
            = (1U & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_preliminaryRes_r_i 
                     >> 1U));
    } else if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__isExceptionInNormal) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Status_exl = 1U;
    } else if ((1U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__selectedInfo[0U])) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Status_exl = 0U;
    }
    if (__Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_buf_data__v0) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_buf_data[__Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_buf_data__v0] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_buf_data__v0;
    }
    if (__Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_buf_data__v1) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_buf_data[0U] = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_buf_data[1U] = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_buf_data[2U] = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_buf_data[3U] = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_buf_data[4U] = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_buf_data[5U] = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_buf_data[6U] = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_buf_data[7U] = 0U;
    }
    if (__Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_buf_data__v0) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_buf_data[__Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_buf_data__v0] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_buf_data__v0;
    }
    if (__Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_buf_data__v1) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_buf_data[0U] = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_buf_data[1U] = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_buf_data[2U] = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_buf_data[3U] = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_buf_data[4U] = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_buf_data[5U] = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_buf_data[6U] = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_buf_data[7U] = 0U;
    }
    if (__Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__3__KET____DOT__btbReg__v0) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__3__KET____DOT__btbReg[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__3__KET____DOT__btbReg__v0] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__3__KET____DOT__btbReg__v0;
    }
    if (__Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__2__KET____DOT__btbReg__v0) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__2__KET____DOT__btbReg[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__2__KET____DOT__btbReg__v0] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__2__KET____DOT__btbReg__v0;
    }
    if (__Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__1__KET____DOT__btbReg__v0) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__1__KET____DOT__btbReg[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__1__KET____DOT__btbReg__v0] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__1__KET____DOT__btbReg__v0;
    }
    if (__Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__0__KET____DOT__btbReg__v0) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__0__KET____DOT__btbReg[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__0__KET____DOT__btbReg__v0] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__0__KET____DOT__btbReg__v0;
    }
    if (__Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__3__KET____DOT__btbTag__v0) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__3__KET____DOT__btbTag[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__3__KET____DOT__btbTag__v0] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__3__KET____DOT__btbTag__v0;
    }
    if (__Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data__v0) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data[0U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data__v0;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data[1U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data__v1;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data[2U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data__v2;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data[3U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data__v3;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data[4U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data__v4;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data[5U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data__v5;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data[6U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data__v6;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data[7U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data__v7;
    }
    if (__Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data__v8) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data[0U] = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data[1U] = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data[2U] = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data[3U] = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data[4U] = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data[5U] = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data[6U] = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_buffer_data[7U] = 0U;
    }
    if (__Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__2__KET____DOT__btbTag__v0) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__2__KET____DOT__btbTag[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__2__KET____DOT__btbTag__v0] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__2__KET____DOT__btbTag__v0;
    }
    if (__Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__1__KET____DOT__btbTag__v0) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__1__KET____DOT__btbTag[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__1__KET____DOT__btbTag__v0] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__1__KET____DOT__btbTag__v0;
    }
    if (__Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__0__KET____DOT__btbTag__v0) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__0__KET____DOT__btbTag[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__0__KET____DOT__btbTag__v0] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__genblk4__BRA__0__KET____DOT__btbTag__v0;
    }
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_counter 
        = __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_counter;
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_counter 
        = __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__refill_counter;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__isAccepted 
        = __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__isAccepted;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__start 
        = __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__start;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__tick 
        = __Vdly__mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__tick;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__tail 
        = __Vdly__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__tail;
    if (__Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v0) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v0][0U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v0[0U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v0][1U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v0[1U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v0][2U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v0[2U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v0][3U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v0[3U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v0][4U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v0[4U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v0][5U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v0[5U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v1][0U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v1[0U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v1][1U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v1[1U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v1][2U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v1[2U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v1][3U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v1[3U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v1][4U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v1[4U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v1][5U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v1[5U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v2][0U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v2[0U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v2][1U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v2[1U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v2][2U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v2[2U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v2][3U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v2[3U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v2][4U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v2[4U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v2][5U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v2[5U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v3][0U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v3[0U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v3][1U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v3[1U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v3][2U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v3[2U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v3][3U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v3[3U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v3][4U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v3[4U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v3][5U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v3[5U];
    }
    if (__Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v4) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v4][0U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v4[0U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v4][1U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v4[1U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v4][2U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v4[2U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v4][3U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v4[3U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v4][4U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v4[4U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v4][5U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v4[5U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v5][0U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v5[0U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v5][1U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v5[1U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v5][2U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v5[2U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v5][3U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v5[3U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v5][4U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v5[4U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v5][5U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v5[5U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v6][0U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v6[0U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v6][1U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v6[1U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v6][2U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v6[2U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v6][3U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v6[3U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v6][4U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v6[4U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v6][5U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v6[5U];
    }
    if (__Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v7) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v7][0U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v7[0U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v7][1U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v7[1U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v7][2U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v7[2U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v7][3U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v7[3U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v7][4U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v7[4U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v7][5U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v7[5U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v8][0U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v8[0U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v8][1U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v8[1U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v8][2U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v8[2U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v8][3U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v8[3U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v8][4U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v8[4U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v8][5U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v8[5U];
    }
    if (__Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v9) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v9][0U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v9[0U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v9][1U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v9[1U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v9][2U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v9[2U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v9][3U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v9[3U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v9][4U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v9[4U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v9][5U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__queue__v9[5U];
    }
    if (__Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__dirty__v0) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__dirty[__Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__dirty__v0] 
            = (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__dirty
               [__Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__dirty__v0] 
               | (0xfU & ((IData)(1U) << (IData)(__Vdlyvlsb__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__dirty__v0))));
    }
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__reset_counter 
        = __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__reset_counter;
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_counter 
        = __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_counter;
    if (__Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__buf_rdata__v0) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__buf_rdata[__Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__buf_rdata__v0] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__buf_rdata__v0;
    }
    if (__Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__buf_rdata__v1) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__buf_rdata[0U] = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__buf_rdata[1U] = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__buf_rdata[2U] = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__buf_rdata[3U] = 0U;
    }
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__reset_counter 
        = __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__reset_counter;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__timer 
        = __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__timer;
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needClear)))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_mulRes_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_isTLBInst_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_mduRes_r_i = 0U;
    } else if ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needUpdata) 
                 & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_excOccur_w_o)) 
                & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_exceptSeg_w_o))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_mulRes_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_isTLBInst_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_mduRes_r_i = 0U;
    } else if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needUpdata) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_mulRes_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_mulRes_o;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_isTLBInst_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_isTLBInst_r_i;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_mduRes_r_i 
            = ((1U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_readHiLo_r_i))
                ? vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__regHiLo
               [1U] : vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__regHiLo
               [0U]);
    }
    if (__Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__regHiLo__v0) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__regHiLo[0U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__regHiLo__v0;
    }
    if (__Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__regHiLo__v1) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__regHiLo[0U] = 0U;
    }
    if (__Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__regHiLo__v2) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__regHiLo[1U] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__regHiLo__v2;
    }
    if (__Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__regHiLo__v3) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__regHiLo[1U] = 0U;
    }
    if (__Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__0__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__0__KET____DOT__Data_TagV_TP__DOT__tag_ram[__Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__0__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__0__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0;
    }
    if (__Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__3__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__3__KET____DOT__Data_TagV_TP__DOT__tag_ram[__Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__3__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__3__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0;
    }
    if (__Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__2__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__2__KET____DOT__Data_TagV_TP__DOT__tag_ram[__Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__2__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__2__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0;
    }
    if (__Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__1__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__1__KET____DOT__Data_TagV_TP__DOT__tag_ram[__Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__1__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__1__KET____DOT__Data_TagV_TP__DOT__tag_ram__v0;
    }
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__position 
        = __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__position;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__have_data 
        = __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__have_data;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__timer 
        = __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__timer;
    if (__Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__0__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__0__KET____DOT__Inst_TagV_TP__DOT__tag_ram[__Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__0__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__0__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0;
    }
    if (__Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__3__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__3__KET____DOT__Inst_TagV_TP__DOT__tag_ram[__Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__3__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__3__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0;
    }
    if (__Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__2__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__2__KET____DOT__Inst_TagV_TP__DOT__tag_ram[__Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__2__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__2__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0;
    }
    if (__Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__1__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__1__KET____DOT__Inst_TagV_TP__DOT__tag_ram[__Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__1__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__1__KET____DOT__Inst_TagV_TP__DOT__tag_ram__v0;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__needClear)))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_exceptionSel_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_trapKind_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_writeHiLo_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_hasException_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_oprand0IsReg_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_oprand1IsReg_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_forwardSel1_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_forwardSel0_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_oprand0_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_oprand1_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__EXE_up_aluRes_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__PREMEM_preliminaryRes_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_aluOprator_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__SBA_aluRes_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__REEXE_regData_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__EXE_down_aluRes_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_readData_r_i = 0ULL;
    } else if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__needUpdata) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_exceptionSel_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__exceptionSel_up
            [1U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_trapKind_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__trapKind_up
            [1U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_writeHiLo_r_i 
            = ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2) 
                 & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hd0eb4e79__0) 
                    & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h85ab9c61__0))) 
                << 1U) | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2) 
                          & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h1745ca6f__0) 
                             & (IData)((0ULL == (0x2800000000ULL 
                                                 & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i))))));
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_hasException_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__ID_down_hasException_o;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_oprand0IsReg_r_i 
            = (1U & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__oprand_sel
                     [1U][0U] | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__ID_down_writeCp0_o)));
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_oprand1IsReg_r_i 
            = (1U & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__oprand_sel
                     [1U][1U] | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__ID_down_writeCp0_o)));
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_forwardSel1_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__forwardSel
            [1U][1U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_forwardSel0_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__forwardSel
            [1U][0U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_oprand0_r_i 
            = (0x1fU & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                                >> 0x26U)));
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_oprand1_r_i 
            = ((1U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__extendAction_up
                [1U]) ? (0xffffU & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                                            >> 0x20U)))
                : ((2U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__extendAction_up
                    [1U]) ? (((- (IData)((1U & (IData)(
                                                       (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                                                        >> 0x2fU))))) 
                              << 0x10U) | (0xffffU 
                                           & (IData)(
                                                     (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                                                      >> 0x20U))))
                    : (0x3ffffffU & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                                             >> 0x20U)))));
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__EXE_up_aluRes_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_up_aluRes_o;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__PREMEM_preliminaryRes_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_preliminaryRes_o;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_aluOprator_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__aluOprator_up
            [1U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__SBA_aluRes_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__EXE_up_aluRes_r_i;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__REEXE_regData_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_REEXE__DOT__SBA_aluRes_r_i;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__EXE_down_aluRes_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_aluRes_o;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_readData_r_i 
            = (((QData)((IData)(((0U != (0x1fU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_regReadNum_p_r_i 
                                                  >> 0xfU)))
                                  ? ((1U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__hasForward
                                      [3U]) ? vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__REEXE_regData_r_i
                                      : ((2U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__hasForward
                                          [3U]) ? vlSelf->mycpu_top__DOT__u_Main__DOT__WB_finalRes_w_o
                                          : ((0x1eU 
                                              >= (0x1fU 
                                                  & ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_regReadNum_p_r_i 
                                                      >> 0xfU) 
                                                     - (IData)(1U))))
                                              ? vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile
                                             [(0x1fU 
                                               & ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_regReadNum_p_r_i 
                                                   >> 0xfU) 
                                                  - (IData)(1U)))]
                                              : 0U)))
                                  : 0U))) << 0x20U) 
               | (QData)((IData)(((0U != (0x1fU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_regReadNum_p_r_i 
                                                   >> 0xaU)))
                                   ? ((1U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__hasForward
                                       [2U]) ? vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__REEXE_regData_r_i
                                       : ((2U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__hasForward
                                           [2U]) ? vlSelf->mycpu_top__DOT__u_Main__DOT__WB_finalRes_w_o
                                           : ((0x1eU 
                                               >= (0x1fU 
                                                   & ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_regReadNum_p_r_i 
                                                       >> 0xaU) 
                                                      - (IData)(1U))))
                                               ? vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile
                                              [(0x1fU 
                                                & ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_regReadNum_p_r_i 
                                                    >> 0xaU) 
                                                   - (IData)(1U)))]
                                               : 0U)))
                                   : 0U))));
    }
    if (__Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v0) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v0] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v0;
    }
    if (__Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v1) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v1] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v1;
    }
    if (__Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v2) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v2] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v2;
    }
    if (__Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v3) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile[__Vdlyvdim0__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v3] 
            = __Vdlyvval__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v3;
    }
    if (__Vdlyvset__mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile__v4) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile[0U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile[1U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile[2U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile[3U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile[4U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile[5U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile[6U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile[7U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile[8U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile[9U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile[0xaU] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile[0xbU] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile[0xcU] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile[0xdU] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile[0xeU] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile[0xfU] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile[0x10U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile[0x11U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile[0x12U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile[0x13U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile[0x14U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile[0x15U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile[0x16U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile[0x17U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile[0x18U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile[0x19U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile[0x1aU] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile[0x1bU] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile[0x1cU] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile[0x1dU] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__regfile[0x1eU] = 0U;
    }
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__IQ_number_w 
        = (0x1fU & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__tail) 
                    - (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT__head)));
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
    vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_Index_w_o 
        = (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Index_p) 
            << 0x1fU) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Index_index));
    vlSelf->mycpu_top__DOT__u_Main__DOT__DMMU_TLBPwrite_o 
        = ((IData)(vlSelf->aresetn) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_search_w_o));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__hasData 
        = ((~ ((~ (IData)(vlSelf->aresetn)) | (~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__REEXE_valid_w_o)))) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__REEXE_valid_w_o));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__hasData 
        = ((~ ((~ (IData)(vlSelf->aresetn)) | (~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_valid_w_o)))) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_valid_w_o));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ALU_u__DOT__u_adder__DOT____VdfgTmp_hd2aefce6__0 
        = (IData)((0U != (0x430U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_aluOprator_r_i))));
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__needClear)))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_issueMode_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_needRead_p_r_i = 0U;
    } else if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__needUpdata) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_issueMode_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__IS_issueMode_o;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_needRead_p_r_i 
            = ((0xcU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hbe18c8f9__0[0U] 
                        << 2U)) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hb3a348b1__0));
    }
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
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__REEXE_valid_w_o))))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__REEXE_VAddr_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__REEXE_writeNum_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__REEXE_regData_r_i = 0U;
    } else if (vlSelf->mycpu_top__DOT__u_Main__DOT__REEXE_valid_w_o) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__REEXE_VAddr_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_REEXE__DOT__SBA_VAddr_r_i;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__REEXE_writeNum_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_REEXE__DOT__SBA_writeNum_r_i;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__REEXE_regData_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_REEXE__DOT__SBA_aluRes_r_i;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_REEXE__DOT__needClear)))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_REEXE__DOT__hasData = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_REEXE__DOT__SBA_VAddr_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_REEXE__DOT__SBA_writeNum_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_REEXE__DOT__SBA_aluRes_r_i = 0U;
    } else {
        if (vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_allowin_w_o) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_REEXE__DOT__hasData 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__SBA_valid_w_o;
        }
        if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_REEXE__DOT__needUpdata) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_REEXE__DOT__SBA_VAddr_r_i 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__EXE_up_VAddr_r_i;
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_REEXE__DOT__SBA_writeNum_r_i 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__EXE_up_writeNum_r_i;
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_REEXE__DOT__SBA_aluRes_r_i 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__EXE_up_aluRes_r_i;
        }
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__needClear)))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__EXE_down_nonBlockDS_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__EXE_up_VAddr_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__EXE_up_writeNum_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__EXE_up_aluRes_r_i = 0U;
    } else if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__needUpdata) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__EXE_down_nonBlockDS_r_i 
            = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__HiLo_busy) 
               | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_isDelaySlot_r_i));
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__EXE_up_VAddr_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_VAddr_r_i;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__EXE_up_writeNum_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_writeNum_r_i;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__EXE_up_aluRes_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_up_aluRes_o;
    }
    if ((2U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__timer))) {
        mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__add_a 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__regHiLo
            [0U];
        mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__cin_i 
            = (1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__add_sub_op_r)));
    } else {
        mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__add_a 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__regHiLo
            [1U];
        mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__cin_i 
            = (1U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__savedCin));
    }
    if (vlSelf->aresetn) {
        if (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_writeCp0_r_i) 
             & (0x60U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_positionCp0_r_i)))) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Status_im 
                = (0xffU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_preliminaryRes_r_i 
                            >> 8U));
        }
        if (((0U == (9U & (IData)(vlSelf->rid))) & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__inst_uncache_rvalid))) {
            if (vlSelf->rlast) {
                vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__buf_valid = 1U;
            }
        } else if (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__inst_uca_data_ok) {
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__buf_valid = 0U;
        }
        if (((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__inst_uca_addr_ok) 
             | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__inst_uca_data_ok))) {
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__last_req 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__inst_uca_req;
        }
        if (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__data_uca_data_ok) {
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__uca_data 
                = vlSelf->rdata;
        }
        if (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_writeCp0_r_i) 
             & (0x68U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_positionCp0_r_i)))) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Cause_ip 
                = ((0xfcU & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Cause_ip)) 
                   | (3U & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_preliminaryRes_r_i 
                            >> 8U)));
        }
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Cause_ip 
            = ((3U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Cause_ip)) 
               | (((IData)((((IData)(vlSelf->ext_int) 
                             >> 5U) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Cause_ti))) 
                   << 7U) | (0x7cU & ((IData)(vlSelf->ext_int) 
                                      << 2U))));
        if (((IData)(vlSelf->mycpu_top__DOT__inst_req) 
             & (IData)(vlSelf->mycpu_top__DOT__inst_index_ok))) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_MemoryManagementUnit__DOT__unmapTag 
                = (0x1ffffU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_PCRegister__DOT__nextNotAlignedPC 
                               >> 0xcU));
        }
        if (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__data_uca_addr_ok) {
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_size 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_size;
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_addr 
                = ((vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tag 
                    << 0xcU) | (((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_index) 
                                 << 5U) | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_offset)));
        }
        if ((2U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat))) {
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_index 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_index;
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_tag 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tag;
        }
        if ((((1U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat)) 
              & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_req)) 
             & (~ (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__hit_run)))) {
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__way 
                = ((4U & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru
                    [vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_index])
                    ? ((2U & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru
                        [vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_index])
                        ? ((1U & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru
                            [vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_index])
                            ? 8U : 2U) : ((1U & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru
                                           [vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_index])
                                           ? 8U : 1U))
                    : ((2U & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru
                        [vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_index])
                        ? ((1U & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru
                            [vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_index])
                            ? 4U : 2U) : ((1U & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru
                                           [vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_index])
                                           ? 4U : 1U)));
        }
        if (vlSelf->mycpu_top__DOT__u_cache_top__DOT__data_top_arready) {
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__ok_send_arv = 0U;
        } else if ((((((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_req) 
                       & (~ (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_unCache))) 
                      & (~ (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__hit_run))) 
                     & (0U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_stat))) 
                    & ((1U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat)) 
                       | (2U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat))))) {
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__ok_send_arv = 1U;
        }
        if ((((1U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat)) 
              & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_req)) 
             & (~ (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__hit_run)))) {
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__way 
                = ((4U & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru
                    [vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_index])
                    ? ((2U & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru
                        [vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_index])
                        ? ((1U & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru
                            [vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_index])
                            ? 8U : 2U) : ((1U & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru
                                           [vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_index])
                                           ? 8U : 1U))
                    : ((2U & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru
                        [vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_index])
                        ? ((1U & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru
                            [vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_index])
                            ? 4U : 2U) : ((1U & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru
                                           [vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_index])
                                           ? 4U : 1U)));
        }
        if (((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__data_uca_addr_ok) 
             & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_wr))) {
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_awvalid = 1U;
        } else if (vlSelf->awready) {
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_awvalid = 0U;
        }
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__Multiplier_u__DOT__seg1[0U] 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__Multiplier_u__DOT__seg0[0U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__Multiplier_u__DOT__seg1[1U] 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__Multiplier_u__DOT__seg0[1U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__Multiplier_u__DOT__seg1[2U] 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__Multiplier_u__DOT__seg0[2U];
    } else {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Status_im = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__buf_valid = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__last_req = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__uca_data = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Cause_ip 
            = (0xfcU & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Cause_ip));
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Cause_ip 
            = (3U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Cause_ip));
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_MemoryManagementUnit__DOT__unmapTag = 0x1fc00U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_size = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_addr = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_index = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__way = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__ok_send_arv = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__fill_tag = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__way = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_awvalid = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__Multiplier_u__DOT__seg1[0U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__Multiplier_u__DOT__seg1[1U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__Multiplier_u__DOT__seg1[2U] = 0U;
    }
    mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__add_b 
        = ((2U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__timer))
            ? ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__add_sub_op_r)
                ? vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__Multiplier_u__DOT__seg1[0U]
                : (~ vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__Multiplier_u__DOT__seg1[0U]))
            : ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__add_sub_op_r)
                ? vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__multiRes
                : (~ vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__multiRes)));
    mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__u_try_div_ans__DOT__diff 
        = (0x1ffffffffULL & ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__minuend 
                              >> 0x1fU) - (QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__divisor))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__DMMU_TLBRwrite_o 
        = ((IData)(vlSelf->aresetn) & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__ok_to_do_tlbInst) 
                                       & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_TLBInstOperator_r_i) 
                                          >> 1U)));
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__needClear)))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_predTake_p_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_predDest_p_r_i = 0ULL;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_regReadNum_p_r_i = 0U;
    } else if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__needUpdata) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_predTake_p_r_i 
            = ((2U & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hbe18c8f9__0[2U] 
                      >> 4U)) | (1U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[3U]));
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_predDest_p_r_i 
            = (((QData)((IData)(((vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hbe18c8f9__0[3U] 
                                  << 0x1aU) | (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hbe18c8f9__0[2U] 
                                               >> 6U)))) 
                << 0x20U) | (QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[2U])));
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_regReadNum_p_r_i 
            = ((0xffc00U & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hbe18c8f9__0[0U] 
                            << 3U)) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hffd0d0cd__0));
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__needClear)))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__hasData = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_isTLBInst_r_i = 0U;
    } else {
        if (vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_allowin_w_o) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__hasData 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__ID_down_valid_w_o;
        }
        if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__needUpdata) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_isTLBInst_r_i 
                = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_3) 
                   & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h2329f798__0));
        }
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needClear)))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_up_branchRisk_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_mathResSel_r_i = 0U;
    } else if ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needUpdata) 
                 & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_excOccur_w_o)) 
                & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_exceptSeg_w_o))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_up_branchRisk_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_mathResSel_r_i = 0U;
    } else if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needUpdata) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_up_branchRisk_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_up_branchRisk_o;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_mathResSel_r_i 
            = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__clReq)
                ? 2U : ((1U & ((0U != (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_readHiLo_r_i)) 
                               | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_mduOperator_r_i) 
                                  >> 6U))) ? 4U : 8U));
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__needClear)))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_readHiLo_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_mduOperator_r_i = 0U;
    } else if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__needUpdata) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_readHiLo_r_i 
            = (((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2) 
                  & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hfd36d646__0) 
                     & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h85ab9c61__0))) 
                 | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h569b65f1__0)) 
                << 1U) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2) 
                           & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hfc6ec919__0) 
                              & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h85ab9c61__0))) 
                          | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h569b65f1__0)));
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_mduOperator_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__ID_down_mduOperator_o;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needClear)))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_readCp0_r_i = 0U;
    } else if ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needUpdata) 
                 & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_excOccur_w_o)) 
                & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_exceptSeg_w_o))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_readCp0_r_i = 0U;
    } else if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needUpdata) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_readCp0_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_readCp0_r_i;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__needClear)))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_readCp0_r_i = 0U;
    } else if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__needUpdata) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_readCp0_r_i 
            = ((~ (IData)((0ULL != (0x280000000000000ULL 
                                    & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i)))) 
               & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_3));
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needClear)))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_exceptBadVAddr_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_nonBlockMark_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_ExcCode_r_i = 0U;
    } else if ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needUpdata) 
                 & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_excOccur_w_o)) 
                & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_exceptSeg_w_o))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_exceptBadVAddr_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_nonBlockMark_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_ExcCode_r_i = 0U;
    } else if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needUpdata) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_exceptBadVAddr_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_exceptBadVAddr_w_o;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_nonBlockMark_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__HiLo_busy;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_ExcCode_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_ExcCode_r_i;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__needClear)))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_ExcCode_r_i = 0U;
    } else if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__needUpdata) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_ExcCode_r_i 
            = (0x1fU & ((2U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_hasException_p_r_i))
                         ? ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_ExcCode_p_r_i) 
                            >> 5U) : vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__decorderExcCode_up
                        [1U]));
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__needClear)))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_ExcCode_p_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_hasException_p_r_i = 0U;
    } else if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__needUpdata) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_ExcCode_p_r_i 
            = ((0x3e0U & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hbe18c8f9__0[0U] 
                          >> 0xdU)) | (0x1fU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[4U] 
                                                >> 0xfU)));
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_hasException_p_r_i 
            = ((2U & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hbe18c8f9__0[0U] 
                      >> 0x16U)) | (1U & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__InstQueue_u__DOT____VdfgTmp_hb34b46fe__0[3U] 
                                          >> 1U)));
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needClear)))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_isDelaySlot_r_i = 0U;
    } else if ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needUpdata) 
                 & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_excOccur_w_o)) 
                & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_exceptSeg_w_o))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_isDelaySlot_r_i = 0U;
    } else if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needUpdata) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_isDelaySlot_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_isDelaySlot_r_i;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__needClear)))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_isDelaySlot_r_i = 0U;
    } else if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__needUpdata) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_isDelaySlot_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__ID_up_branchRisk_o;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needClear)))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_memAtom_r_i = 0U;
    } else if ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needUpdata) 
                 & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_excOccur_w_o)) 
                & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_exceptSeg_w_o))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_memAtom_r_i = 0U;
    } else if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needUpdata) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_memAtom_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_memAtom_r_i;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__needClear)))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_memAtom_r_i = 0U;
    } else if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__needUpdata) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_memAtom_r_i 
            = (1U & (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                             >> 0x3eU)));
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needClear)))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_eret_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_hasException_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_exceptionRisk_r_i = 0U;
    } else if ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needUpdata) 
                 & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_excOccur_w_o)) 
                & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_exceptSeg_w_o))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_eret_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_hasException_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_exceptionRisk_r_i = 0U;
    } else if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needUpdata) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_eret_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_eret_r_i;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_hasException_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_hasException_o;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_exceptionRisk_r_i 
            = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_hasException_o) 
               | (((5U != (vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_aluRes_o 
                           >> 0x1dU)) & ((4U != (vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_aluRes_o 
                                                 >> 0x1dU)) 
                                         & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_memReq_r_i))) 
                  | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_eret_r_i) 
                     | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_writeCp0_r_i))));
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__needClear)))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_eret_r_i = 0U;
    } else if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__needUpdata) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_eret_r_i 
            = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_3) 
               & (IData)((0x200001000000000ULL == (0x200001000000000ULL 
                                                   & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i))));
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needClear)))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_isDangerous_r_i = 0U;
    } else if ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needUpdata) 
                 & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_excOccur_w_o)) 
                & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_exceptSeg_w_o))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_isDangerous_r_i = 0U;
    } else if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needUpdata) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_isDangerous_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_isDangerous_r_i;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__needClear)))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_isDangerous_r_i = 0U;
    } else if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__needUpdata) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_isDangerous_r_i 
            = (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2) 
                & ((IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i 
                            >> 0x21U)) & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hafc7fffa__0))) 
               | ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_2)) 
                  & (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_0) 
                      & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h2329f798__0)) 
                     | ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_0)) 
                        & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__temp_2_3) 
                           | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h07d6f23d__0) 
                              | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hc0f5feed__0) 
                                 | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__ID_down_isCacheInst_o))))))));
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needClear)))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_loadSel_r_i = 0U;
    } else if ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needUpdata) 
                 & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_excOccur_w_o)) 
                & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_exceptSeg_w_o))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_loadSel_r_i = 0U;
    } else if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needUpdata) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_loadSel_r_i 
            = ((1U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_loadMode_r_i))
                ? 1U : ((2U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_loadMode_r_i))
                         ? 2U : ((4U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_loadMode_r_i))
                                  ? 4U : ((8U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_loadMode_r_i))
                                           ? 8U : (
                                                   (0x10U 
                                                    & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_loadMode_r_i))
                                                    ? 0x10U
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_loadMode_r_i))
                                                     ? 
                                                    ((0U 
                                                      == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__alignCheck))
                                                      ? 0x100U
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__alignCheck))
                                                       ? 0x200U
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__alignCheck))
                                                        ? 0x40U
                                                        : 0x10U)))
                                                     : 
                                                    ((0U 
                                                      == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__alignCheck))
                                                      ? 0x10U
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__alignCheck))
                                                       ? 0x20U
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__alignCheck))
                                                        ? 0x40U
                                                        : 0x80U)))))))));
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__needClear)))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_loadMode_r_i = 0U;
    } else if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__needUpdata) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_loadMode_r_i 
            = (((IData)((0x1800000000000000ULL == (0x3800000000000000ULL 
                                                   & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i))) 
                << 6U) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h03f81cc8__0) 
                           << 5U) | (((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hc11ec478__0) 
                                        & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hfd1fc749__0)) 
                                       | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hff260753__0) 
                                          & (IData)(
                                                    (0x4000000000000000ULL 
                                                     == 
                                                     (0x6000000000000000ULL 
                                                      & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i))))) 
                                      << 4U) | (((IData)(
                                                         (0x1400000000000000ULL 
                                                          == 
                                                          (0x1400000000000000ULL 
                                                           & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i))) 
                                                 << 3U) 
                                                | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hfefbb480__0) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h8bd045d8__0) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h33561494__0)))))));
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needClear)))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_TLBInstOperator_r_i = 0U;
    } else if ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needUpdata) 
                 & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_excOccur_w_o)) 
                & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_exceptSeg_w_o))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_TLBInstOperator_r_i = 0U;
    } else if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needUpdata) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_TLBInstOperator_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_TLBInstOperator_r_i;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__needClear)))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_TLBInstOperator_r_i = 0U;
    } else if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__needUpdata) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_TLBInstOperator_r_i 
            = ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_3) 
                 & (IData)((0x200000400000000ULL == 
                            (0x200000400000000ULL & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i)))) 
                << 3U) | ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_3) 
                            & (IData)((0x200000200000000ULL 
                                       == (0x200000600000000ULL 
                                           & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i)))) 
                           << 2U) | ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_3) 
                                       & (IData)((0x200000100000000ULL 
                                                  == 
                                                  (0x200000100000000ULL 
                                                   & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i)))) 
                                      << 1U) | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT__genblk5__BRA__1__KET____DOT__temp_0_3) 
                                                & (IData)(
                                                          (0x200000800000000ULL 
                                                           == 
                                                           (0x200000800000000ULL 
                                                            & vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__IS_Inst_p_r_i)))))));
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needClear)))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_memReq_r_i = 0U;
    } else if ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needUpdata) 
                 & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_excOccur_w_o)) 
                & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_exceptSeg_w_o))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_memReq_r_i = 0U;
    } else if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needUpdata) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_memReq_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_memReq_r_i;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__needClear)))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_memReq_r_i = 0U;
    } else if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__needUpdata) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_memReq_r_i 
            = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h940593f0__0) 
               | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h37a5b348__0) 
                  | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h6f325372__0) 
                     | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h85d3b635__0) 
                        | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h359adfeb__0) 
                           | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_ha094bdb8__0) 
                              | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hf4959896__0) 
                                 | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hcbd1fb4a__0) 
                                    | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hea640af0__0) 
                                       | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h33b5084e__0) 
                                          | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h2c1313c8__0) 
                                             | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h56120487__0) 
                                                | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_h07d6f23d__0) 
                                                   | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__Decorder_u__DOT____VdfgTmp_hc0f5feed__0))))))))))))));
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_FirstCacheTrace__DOT__ready_go) 
                                               & (~ (IData)(vlSelf->mycpu_top__DOT__inst_index_ok)))))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_BTBValidDest_o = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_BTBValidTake_o = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_VAddr_o = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_predDest_p_o[0U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_predDest_p_o[1U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_predDest_p_o[2U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_predDest_p_o[3U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_BTBInstEnable_o = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_predTake_p_o = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_originEnable_o = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_isCanceled_o = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_ExcCode_o = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_hasException_o = 0U;
    } else if (((IData)(vlSelf->mycpu_top__DOT__inst_index_ok) 
                & (IData)(vlSelf->mycpu_top__DOT__inst_req))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_BTBValidDest_o 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__BTB_validDest_o;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_BTBValidTake_o 
            = (0U != ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__BTB_predTake_p_o) 
                      & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__firstValidBit)));
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_VAddr_o 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__PCR_VAddr_o;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_predDest_p_o[0U] 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h2a155fb0__0;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_predDest_p_o[1U] 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h2b682062__0;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_predDest_p_o[2U] 
            = (IData)((((QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h24613937__0)) 
                        << 0x20U) | (QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h2be6a8b5__0))));
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_predDest_p_o[3U] 
            = (IData)(((((QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h24613937__0)) 
                         << 0x20U) | (QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h2be6a8b5__0))) 
                       >> 0x20U));
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_BTBInstEnable_o 
            = (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h7c474841__0)
                 ? 3U : ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_BranchTargetBuffer__DOT__BranchFourToOne_u__DOT____VdfgTmp_h00616ab3__0)
                          ? 7U : 0xfU)) & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__PCR_needDelaySlot_o)
                                            ? 8U : (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__PCR_instEnable_o)));
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_predTake_p_o 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__BTB_predTake_p_o;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_originEnable_o 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__PCR_instEnable_o;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_isCanceled_o 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_SecondCacheTrace__DOT__needCancel;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_ExcCode_o = 4U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_hasException_o 
            = (0U != (3U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_PCRegister__DOT__nextNotAlignedPC));
    } else if (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_FirstCacheTrace__DOT__hasData) 
                & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_SecondCacheTrace__DOT__needCancel))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_isCanceled_o = 1U;
    }
    vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_Status_w_o 
        = (0x400000U | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Status_im) 
                         << 8U) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Status_exl) 
                                    << 1U) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Status_ie))));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__inst_uca_data_ok 
        = ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__buf_valid) 
           & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__last_req));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ALU_u__DOT__u_adder__DOT____VdfgTmp_hd2aefce6__0 
        = (IData)((0U != (0x430U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_aluOprator_r_i))));
    if (__Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v0) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru[__Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v0] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v0;
    }
    if (__Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v1) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru[__Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v1] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v1;
    }
    if (__Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v2) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru[__Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v2] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v2;
    }
    if (__Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v3) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru[__Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v3] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__plru__v3;
    }
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
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_stat 
        = __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_stat;
    if (__Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v0) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru[__Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v0] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v0;
    }
    if (__Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v1) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru[__Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v1] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v1;
    }
    if (__Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v2) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru[__Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v2] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v2;
    }
    if (__Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v3) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru[__Vdlyvdim0__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v3] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__plru__v3;
    }
    vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_isInterrupt_w_o 
        = ((0U != ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Cause_ip) 
                   & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Status_im))) 
           & ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Status_exl)) 
              & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__hasData)));
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
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__HiLo_busy 
        = __Vdly__mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__HiLo_busy;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_forwardSel_up[0U] 
        = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_forwardSel0_r_i;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_forwardSel_up[1U] 
        = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEUP__DOT__ID_up_forwardSel1_r_i;
    if (vlSelf->aresetn) {
        if (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_writeCp0_r_i) 
             & (0x80U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_positionCp0_r_i)))) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Config_k0 
                = (7U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_preliminaryRes_r_i);
        }
        if (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_writeCp0_r_i) 
             & (0x58U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_positionCp0_r_i)))) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Cause_ti = 0U;
        } else if ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__count 
                    == vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__compare)) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Cause_ti = 1U;
        }
    } else {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Config_k0 = 3U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Cause_ti = 0U;
    }
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__count 
        = __Vdly__mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__count;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_forwardSel_up[0U] 
        = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_forwardSel0_r_i;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_forwardSel_up[1U] 
        = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_forwardSel1_r_i;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__mulr_data_ok 
        = (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__timer) 
            == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__upBound)) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__start));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__dirty_loc 
        = (((IData)((0U != (0xcU & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__way)))) 
            << 1U) | (IData)((0U != (0xaU & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__way)))));
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
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__data_top_arvalid 
        = ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_arvalid) 
           | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__ok_send_arv));
    vlSelf->wvalid = ((4U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_stat)) 
                      | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_wvalid));
    vlSelf->bready = (1U & (((IData)(vlSelf->bid) >> 1U) 
                            | (5U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_stat))));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__data_uncache_wready 
        = ((4U != (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_stat)) 
           & ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_wvalid) 
              & (IData)(vlSelf->wready)));
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
    mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_mux__DOT____VdfgTmp_h601c0c5f__0 
        = ((2U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_stat))
            ? (0x400000001d200ULL | ((QData)((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_addr)) 
                                     << 0x12U)) : (0xc000000000000ULL 
                                                   | (((QData)((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_addr)) 
                                                       << 0x12U) 
                                                      | (QData)((IData)(
                                                                        ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_size) 
                                                                         << 0xbU))))));
    vlSelf->awvalid = ((2U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__victim_stat)) 
                       | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_awvalid));
    __Vtemp_h77486fef__0[0U] = (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT____Vcellinp__Multiplier_u__A);
    __Vtemp_h77486fef__0[1U] = (((IData)((0x1ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT____Vcellinp__Multiplier_u__A 
                                                                           >> 0x20U)))))))) 
                                 << 1U) | (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT____Vcellinp__Multiplier_u__A 
                                                   >> 0x20U)));
    __Vtemp_h77486fef__0[2U] = (((IData)((0x1ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT____Vcellinp__Multiplier_u__A 
                                                                           >> 0x20U)))))))) 
                                 >> 0x1fU) | ((IData)(
                                                      ((0x1ffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT____Vcellinp__Multiplier_u__A 
                                                                                >> 0x20U))))))) 
                                                       >> 0x20U)) 
                                              << 1U));
    __Vtemp_h8815db06__0[0U] = (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT____Vcellinp__Multiplier_u__B);
    __Vtemp_h8815db06__0[1U] = (((IData)((0x1ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT____Vcellinp__Multiplier_u__B 
                                                                           >> 0x20U)))))))) 
                                 << 1U) | (IData)((vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT____Vcellinp__Multiplier_u__B 
                                                   >> 0x20U)));
    __Vtemp_h8815db06__0[2U] = (((IData)((0x1ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT____Vcellinp__Multiplier_u__B 
                                                                           >> 0x20U)))))))) 
                                 >> 0x1fU) | ((IData)(
                                                      ((0x1ffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT____Vcellinp__Multiplier_u__B 
                                                                                >> 0x20U))))))) 
                                                       >> 0x20U)) 
                                              << 1U));
    VL_MUL_W(3, __Vtemp_h9a40d6d5__0, __Vtemp_h77486fef__0, __Vtemp_h8815db06__0);
    if (vlSelf->aresetn) {
        if (((IData)(vlSelf->mycpu_top__DOT__inst_req) 
             & (IData)(vlSelf->mycpu_top__DOT__inst_index_ok))) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_MemoryManagementUnit__DOT__isOther 
                = (1U & ((~ (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__PCR_VAddr_o 
                             >> 0x1fU)) | (3U == (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__PCR_VAddr_o 
                                                  >> 0x1eU))));
        }
        if ((1U & ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_data_ok) 
                   | (~ (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_req))))) {
            __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_req 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_req;
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_size 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_size;
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tag 
                = vlSelf->mycpu_top__DOT__data_tag;
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_hasException 
                = vlSelf->mycpu_top__DOT__data_hasException;
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_unCache 
                = vlSelf->mycpu_top__DOT__data_unCache;
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v0 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_back
                [0U];
            __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v0 = 1U;
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v0[0U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [0U][0U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v0[1U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [0U][1U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v0[2U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [0U][2U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v0[3U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [0U][3U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v0[4U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [0U][4U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v0[5U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [0U][5U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v0[6U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [0U][6U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v0[7U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [0U][7U];
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_uca_addr_ok 
                = ((~ (IData)(vlSelf->mycpu_top__DOT__data_unCache)) 
                   & (IData)(vlSelf->mycpu_top__DOT__data_hasException));
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_raw_col 
                = ((((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_index) 
                     == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_index)) 
                    & ((7U & ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_offset) 
                              >> 2U)) == (7U & ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_offset) 
                                                >> 2U)))) 
                   & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_wr));
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_raw_wstrb 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_wstrb;
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_back_data 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_hit_run_data;
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__hit_way 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_hit_way;
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v1 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_back
                [1U];
            __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v1 = 1U;
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v1[0U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [1U][0U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v1[1U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [1U][1U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v1[2U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [1U][2U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v1[3U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [1U][3U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v1[4U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [1U][4U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v1[5U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [1U][5U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v1[6U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [1U][6U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v1[7U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [1U][7U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_raw_data__v0 
                = (0xffU & ((- (IData)((1U & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_wstrb)))) 
                            & vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_wdata));
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v2 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_back
                [2U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v2[0U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [2U][0U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v2[1U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [2U][1U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v2[2U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [2U][2U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v2[3U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [2U][3U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v2[4U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [2U][4U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v2[5U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [2U][5U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v2[6U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [2U][6U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v2[7U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [2U][7U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_raw_data__v1 
                = (0xffU & ((- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_wstrb) 
                                              >> 1U)))) 
                            & (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_wdata 
                               >> 8U)));
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_wr 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_wr;
            vlSelf->__Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_index 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_index;
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_offset 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_offset;
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v3 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_back
                [3U];
            __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v3 = 1U;
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v3[0U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [3U][0U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v3[1U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [3U][1U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v3[2U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [3U][2U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v3[3U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [3U][3U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v3[4U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [3U][4U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v3[5U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [3U][5U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v3[6U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [3U][6U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v3[7U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [3U][7U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_raw_data__v2 
                = (0xffU & ((- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_wstrb) 
                                              >> 2U)))) 
                            & (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_wdata 
                               >> 0x10U)));
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_raw_data__v3 
                = (0xffU & ((- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_wstrb) 
                                              >> 3U)))) 
                            & (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_wdata 
                               >> 0x18U)));
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_wstrb 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_wstrb;
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_wdata 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_wdata;
        } else if ((0U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat))) {
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v4 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_back
                [0U];
            __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v4 = 1U;
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v4[0U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [0U][0U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v4[1U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [0U][1U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v4[2U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [0U][2U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v4[3U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [0U][3U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v4[4U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [0U][4U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v4[5U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [0U][5U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v4[6U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [0U][6U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v4[7U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [0U][7U];
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_back_data 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_hit_run_data;
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__hit_way 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_hit_way;
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v5 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_back
                [1U];
            __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v5 = 1U;
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v5[0U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [1U][0U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v5[1U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [1U][1U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v5[2U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [1U][2U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v5[3U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [1U][3U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v5[4U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [1U][4U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v5[5U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [1U][5U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v5[6U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [1U][6U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v5[7U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [1U][7U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v6 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_back
                [2U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v6[0U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [2U][0U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v6[1U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [2U][1U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v6[2U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [2U][2U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v6[3U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [2U][3U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v6[4U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [2U][4U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v6[5U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [2U][5U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v6[6U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [2U][6U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v6[7U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [2U][7U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v7 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_back
                [3U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v7[0U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [3U][0U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v7[1U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [3U][1U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v7[2U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [3U][2U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v7[3U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [3U][3U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v7[4U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [3U][4U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v7[5U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [3U][5U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v7[6U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [3U][6U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v7[7U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_rdata
                [3U][7U];
        } else if (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_data_ok) {
            __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_req = 0U;
        } else if (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__data_uca_addr_ok) {
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_uca_addr_ok = 1U;
        }
        if ((1U & ((IData)(vlSelf->mycpu_top__DOT__inst_data_ok) 
                   | (~ (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_req))))) {
            __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_req 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sta_req;
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_index 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sta_index;
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_offset 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sta_offset;
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tag 
                = vlSelf->mycpu_top__DOT__inst_tag;
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_hasException 
                = vlSelf->mycpu_top__DOT__inst_hasException;
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_unCache 
                = vlSelf->mycpu_top__DOT__inst_unCache;
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v0 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_back
                [0U];
            __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v0 = 1U;
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v0[0U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [0U][0U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v0[1U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [0U][1U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v0[2U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [0U][2U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v0[3U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [0U][3U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v0[4U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [0U][4U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v0[5U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [0U][5U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v0[6U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [0U][6U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v0[7U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [0U][7U];
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_uca_addr_ok 
                = ((~ (IData)(vlSelf->mycpu_top__DOT__inst_unCache)) 
                   & (IData)(vlSelf->mycpu_top__DOT__inst_hasException));
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_back_data[0U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sta_hit_run_data[0U];
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_back_data[1U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sta_hit_run_data[1U];
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_back_data[2U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sta_hit_run_data[2U];
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_back_data[3U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sta_hit_run_data[3U];
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__hit_way 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sta_hit_way;
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v1 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_back
                [1U];
            __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v1 = 1U;
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v1[0U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [1U][0U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v1[1U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [1U][1U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v1[2U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [1U][2U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v1[3U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [1U][3U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v1[4U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [1U][4U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v1[5U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [1U][5U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v1[6U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [1U][6U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v1[7U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [1U][7U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v2 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_back
                [2U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v2[0U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [2U][0U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v2[1U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [2U][1U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v2[2U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [2U][2U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v2[3U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [2U][3U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v2[4U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [2U][4U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v2[5U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [2U][5U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v2[6U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [2U][6U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v2[7U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [2U][7U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v3 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_back
                [3U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v3[0U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [3U][0U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v3[1U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [3U][1U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v3[2U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [3U][2U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v3[3U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [3U][3U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v3[4U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [3U][4U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v3[5U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [3U][5U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v3[6U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [3U][6U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v3[7U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [3U][7U];
        } else if ((0U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat))) {
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v4 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_back
                [0U];
            __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v4 = 1U;
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v4[0U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [0U][0U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v4[1U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [0U][1U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v4[2U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [0U][2U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v4[3U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [0U][3U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v4[4U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [0U][4U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v4[5U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [0U][5U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v4[6U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [0U][6U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v4[7U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [0U][7U];
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_back_data[0U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sta_hit_run_data[0U];
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_back_data[1U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sta_hit_run_data[1U];
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_back_data[2U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sta_hit_run_data[2U];
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_back_data[3U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sta_hit_run_data[3U];
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__hit_way 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sta_hit_way;
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v5 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_back
                [1U];
            __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v5 = 1U;
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v5[0U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [1U][0U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v5[1U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [1U][1U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v5[2U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [1U][2U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v5[3U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [1U][3U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v5[4U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [1U][4U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v5[5U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [1U][5U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v5[6U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [1U][6U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v5[7U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [1U][7U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v6 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_back
                [2U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v6[0U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [2U][0U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v6[1U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [2U][1U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v6[2U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [2U][2U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v6[3U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [2U][3U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v6[4U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [2U][4U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v6[5U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [2U][5U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v6[6U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [2U][6U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v6[7U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [2U][7U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v7 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_back
                [3U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v7[0U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [3U][0U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v7[1U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [3U][1U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v7[2U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [3U][2U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v7[3U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [3U][3U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v7[4U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [3U][4U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v7[5U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [3U][5U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v7[6U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [3U][6U];
            __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v7[7U] 
                = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__data_rdata
                [3U][7U];
        } else if (vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__inst_uca_addr_ok) {
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_uca_addr_ok = 1U;
        }
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__Multiplier_u__DOT__seg0[0U] 
            = __Vtemp_h9a40d6d5__0[0U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__Multiplier_u__DOT__seg0[1U] 
            = __Vtemp_h9a40d6d5__0[1U];
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__Multiplier_u__DOT__seg0[2U] 
            = (3U & __Vtemp_h9a40d6d5__0[2U]);
        if (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_writeCp0_r_i) 
             & (0x58U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_positionCp0_r_i)))) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__compare 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_preliminaryRes_r_i;
        }
        if (vlSelf->mycpu_top__DOT__data_index_ok) {
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_size 
                = ((1U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__size))
                    ? 0U : ((2U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__size))
                             ? 1U : 2U));
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_wstrb 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_memEnable_r_i;
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_req 
                = vlSelf->mycpu_top__DOT__data_req;
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_offset 
                = (0x1fU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_aluRes_r_i);
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_index 
                = (0x7fU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_aluRes_r_i 
                            >> 5U));
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_wr 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_memWR_r_i;
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_wdata 
                = vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_storeData_r_i;
        } else if ((1U & ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_data_ok) 
                          | (~ (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_req))))) {
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_req = 0U;
        }
    } else {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_MemoryManagementUnit__DOT__isOther = 0U;
        __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_req = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_wr = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_size = 0U;
        vlSelf->__Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_index = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_offset = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tag = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_hasException = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_unCache = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_wstrb = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_wdata = 0U;
        __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v8 = 1U;
        __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_req = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_index = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_offset = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tag = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_hasException = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_unCache = 0U;
        __Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v8 = 1U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__Multiplier_u__DOT__seg0[0U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__Multiplier_u__DOT__seg0[1U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__Multiplier_u__DOT__seg0[2U] = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__compare = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_size = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_wstrb = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_req = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_offset = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_index = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_wr = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_wdata = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needClear)))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_writeNum_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_VAddr_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_memEnable_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_aluRes_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_memWR_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_storeData_r_i = 0U;
    } else if ((((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needUpdata) 
                 & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_excOccur_w_o)) 
                & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_exceptSeg_w_o))) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_writeNum_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_VAddr_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_VAddr_r_i;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_memEnable_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_aluRes_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_memWR_r_i = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_storeData_r_i = 0U;
    } else if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needUpdata) {
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_writeNum_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_writeNum_r_i;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_VAddr_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_VAddr_r_i;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_memEnable_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_memEnable_o;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_aluRes_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_aluRes_o;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_memWR_r_i 
            = vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_memWR_r_i;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_storeData_r_i 
            = (((- (IData)((1U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_storeMode_r_i)))) 
                & ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__divisor_i 
                    << 0x18U) | ((0xff0000U & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__divisor_i 
                                               << 0x10U)) 
                                 | ((0xff00U & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__divisor_i 
                                                << 8U)) 
                                    | (0xffU & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__divisor_i))))) 
               | (((- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_storeMode_r_i) 
                                     >> 1U)))) & ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__divisor_i 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__divisor_i))) 
                  | (((- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_storeMode_r_i) 
                                        >> 2U)))) & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__divisor_i) 
                     | (((- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_storeMode_r_i) 
                                           >> 3U)))) 
                         & (((- (IData)((0U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__alignCheck)))) 
                             & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT____VdfgTmp_he83d2f02__0) 
                            | (((- (IData)((1U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__alignCheck)))) 
                                & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT____VdfgTmp_he965824d__0) 
                               | ((- (IData)((2U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__alignCheck)))) 
                                  & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT____VdfgTmp_he80de16b__0 
                                     | vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__divisor_i))))) 
                        | ((- (IData)((1U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_storeMode_r_i) 
                                             >> 4U)))) 
                           & (((- (IData)((0U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__alignCheck)))) 
                               & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__divisor_i) 
                              | (((- (IData)((1U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__alignCheck)))) 
                                  & vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT____VdfgTmp_he80de16b__0) 
                                 | ((- (IData)((2U 
                                                == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__alignCheck)))) 
                                    & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT____VdfgTmp_he965824d__0 
                                       | vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT____VdfgTmp_he83d2f02__0)))))))));
    }
    if (vlSelf->aresetn) {
        if (vlSelf->mycpu_top__DOT__inst_index_ok) {
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sta_req 
                = vlSelf->mycpu_top__DOT__inst_req;
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sta_offset 
                = (1U & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_PCRegister__DOT__nextNotAlignedPC 
                         >> 4U));
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sta_index 
                = (0x7fU & (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_PCRegister__DOT__nextNotAlignedPC 
                            >> 5U));
        } else if ((1U & ((IData)(vlSelf->mycpu_top__DOT__inst_data_ok) 
                          | (~ (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_req))))) {
            vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sta_req = 0U;
        }
        if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_PCRegister__DOT__ok_to_change) {
            vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_PCRegister__DOT__nextNotAlignedPC 
                = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_excOccur_w_o)
                    ? ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__isExceptionInNormal)
                        ? 0xbfc00380U : ((1U & vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__selectedInfo[0U])
                                          ? vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__epc
                                          : ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__writeK0)
                                              ? ((IData)(4U) 
                                                 + 
                                                 ((vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__selectedInfo[2U] 
                                                   << 0x1eU) 
                                                  | (vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__selectedInfo[1U] 
                                                     >> 2U)))
                                              : 0U)))
                    : ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__SBA_flush_w_o)
                        ? vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__EXE_up_corrDest_r_i
                        : ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__BSC_isDiffRes_w_o)
                            ? (((~ ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_needDelaySlot_o) 
                                    & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_valid_o))) 
                                & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__BSC_needDelaySlot_w_o))
                                ? vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__SCT_BTBfifthVAddr_o
                                : vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__BSC_correctDest_w_o)
                            : (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__PCR_needDelaySlot_o)) 
                                & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__BTB_needDelaySlot_o))
                                ? vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__BTB_fifthVAddr_o
                                : vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__BTB_validDest_o))));
        }
    } else {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sta_req = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sta_offset = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sta_index = 0U;
        vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_PCRegister__DOT__nextNotAlignedPC = 0xbfc00000U;
    }
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__writeNum[0U] 
        = vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__REEXE_writeNum_r_i;
    vlSelf->mycpu_top__DOT__u_Main__DOT__PBA_writeEnable_w_o 
        = ((0U != (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__REEXE_writeNum_r_i)) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__hasData));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__writeNum[1U] 
        = vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_writeNum_r_i;
    vlSelf->mycpu_top__DOT__u_Main__DOT__WB_writeEnable_w_o 
        = ((0U != (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_writeNum_r_i)) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__hasData));
    vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_hasRisk_w_o 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_exceptionRisk_r_i) 
           | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_isInterrupt_w_o));
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
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__clReq 
        = (IData)((0U != (0x180U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_mduOperator_r_i))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__isAccumlate 
        = (IData)((0U != (0x30U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_mduOperator_r_i))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT____VdfgTmp_heda64e59__0 
        = (IData)((0U != (0xcU & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_mduOperator_r_i))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT____VdfgTmp_hedee5323__0 
        = (IData)((0U != (3U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_mduOperator_r_i))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__isMduWrite 
        = ((0U != (0x7fU & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_mduOperator_r_i))) 
           | (0U != (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_writeHiLo_r_i)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__writeData[0U] 
        = vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__REEXE_regData_r_i;
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
    vlSelf->mycpu_top__DOT__u_Main__DOT__CP0_Cause_w_o 
        = (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Cause_bd) 
            << 0x1fU) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Cause_ti) 
                          << 0x1eU) | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Cause_ip) 
                                        << 8U) | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryExceptionProcessor__DOT__Cause_exccode) 
                                                  << 2U))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT____VdfgTmp_h3f83ab14__0 
        = ((0x20U == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__Divider_u__DOT__timer)) 
           | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__mulr_data_ok));
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
    vlSelf->wid = (0xfU & (IData)((mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_mux__DOT____VdfgTmp_h5b400afc__0 
                                   >> 0x25U)));
    vlSelf->wdata = (IData)((mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_mux__DOT____VdfgTmp_h5b400afc__0 
                             >> 5U));
    vlSelf->wstrb = (0xfU & (IData)((mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_mux__DOT____VdfgTmp_h5b400afc__0 
                                     >> 1U)));
    vlSelf->wlast = (1U & (IData)(mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_mux__DOT____VdfgTmp_h5b400afc__0));
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
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_back[0U] 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__0__KET____DOT__Data_TagV_TP__DOT__tagv_res;
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_back[1U] 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__1__KET____DOT__Data_TagV_TP__DOT__tagv_res;
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_back[2U] 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__2__KET____DOT__Data_TagV_TP__DOT__tagv_res;
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__tagv_back[3U] 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__genblk1__BRA__3__KET____DOT__Data_TagV_TP__DOT__tagv_res;
    vlSelf->mycpu_top__DOT__data_unCache = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_DataMemoryManagementUnit__DOT__isOther) 
                                            | (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_DataMemoryManagementUnit__DOT__isKseg0) 
                                                & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_DataMemoryManagementUnit__DOT__kseg0UnCache)) 
                                               | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_DataMemoryManagementUnit__DOT__isKseg1)));
    if (vlSelf->mycpu_top__DOT__u_Main__DOT__u_DataMemoryManagementUnit__DOT__isOther) {
        vlSelf->mycpu_top__DOT__data_tag = 0U;
        vlSelf->mycpu_top__DOT__data_hasException = vlSelf->mycpu_top__DOT__u_Main__DOT__u_DataMemoryManagementUnit__DOT__mapReq;
    } else {
        vlSelf->mycpu_top__DOT__data_tag = vlSelf->mycpu_top__DOT__u_Main__DOT__u_DataMemoryManagementUnit__DOT__unmapTag;
        vlSelf->mycpu_top__DOT__data_hasException = 0U;
    }
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat 
        = __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat;
    if (__Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v0) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[0U][0U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v0[0U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[0U][1U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v0[1U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[0U][2U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v0[2U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[0U][3U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v0[3U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[0U][4U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v0[4U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[0U][5U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v0[5U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[0U][6U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v0[6U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[0U][7U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v0[7U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back[0U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v0;
    }
    if (__Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v1) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[1U][0U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v1[0U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[1U][1U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v1[1U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[1U][2U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v1[2U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[1U][3U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v1[3U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[1U][4U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v1[4U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[1U][5U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v1[5U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[1U][6U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v1[6U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[1U][7U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v1[7U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[2U][0U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v2[0U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[2U][1U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v2[1U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[2U][2U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v2[2U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[2U][3U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v2[3U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[2U][4U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v2[4U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[2U][5U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v2[5U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[2U][6U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v2[6U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[2U][7U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v2[7U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back[1U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v1;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back[2U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v2;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_raw_data[0U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_raw_data__v0;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_raw_data[1U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_raw_data__v1;
    }
    if (__Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v3) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[3U][0U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v3[0U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[3U][1U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v3[1U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[3U][2U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v3[2U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[3U][3U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v3[3U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[3U][4U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v3[4U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[3U][5U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v3[5U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[3U][6U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v3[6U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[3U][7U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v3[7U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back[3U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v3;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_raw_data[2U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_raw_data__v2;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_raw_data[3U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_raw_data__v3;
    }
    if (__Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v4) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[0U][0U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v4[0U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[0U][1U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v4[1U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[0U][2U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v4[2U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[0U][3U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v4[3U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[0U][4U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v4[4U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[0U][5U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v4[5U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[0U][6U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v4[6U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[0U][7U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v4[7U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back[0U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v4;
    }
    if (__Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v5) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[1U][0U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v5[0U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[1U][1U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v5[1U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[1U][2U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v5[2U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[1U][3U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v5[3U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[1U][4U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v5[4U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[1U][5U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v5[5U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[1U][6U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v5[6U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[1U][7U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v5[7U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[2U][0U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v6[0U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[2U][1U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v6[1U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[2U][2U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v6[2U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[2U][3U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v6[3U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[2U][4U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v6[4U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[2U][5U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v6[5U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[2U][6U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v6[6U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[2U][7U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v6[7U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[3U][0U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v7[0U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[3U][1U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v7[1U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[3U][2U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v7[2U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[3U][3U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v7[3U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[3U][4U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v7[4U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[3U][5U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v7[5U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[3U][6U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v7[6U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[3U][7U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata__v7[7U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back[1U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v5;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back[2U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v6;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back[3U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v7;
    }
    if (__Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back__v8) {
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[0U][0U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[0U][1U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[0U][2U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[0U][3U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[0U][4U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[0U][5U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[0U][6U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[0U][7U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[1U][0U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[1U][1U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[1U][2U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[1U][3U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[1U][4U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[1U][5U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[1U][6U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[1U][7U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[2U][0U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[2U][1U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[2U][2U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[2U][3U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[2U][4U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[2U][5U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[2U][6U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[2U][7U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[3U][0U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[3U][1U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[3U][2U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[3U][3U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[3U][4U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[3U][5U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[3U][6U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_rdata[3U][7U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back[0U] = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back[1U] = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back[2U] = 0U;
        vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_tagv_back[3U] = 0U;
    }
    vlSelf->mycpu_top__DOT__inst_hasException = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_MemoryManagementUnit__DOT__isOther) 
                                                 | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__FCT_hasException_o));
    vlSelf->mycpu_top__DOT__inst_unCache = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_MemoryManagementUnit__DOT__isOther) 
                                            | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_MemoryManagementUnit__DOT__isKseg0) 
                                               & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_MemoryManagementUnit__DOT__kseg0UnCache)));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_back[0U] 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__0__KET____DOT__Inst_TagV_TP__DOT__tagv_res;
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_back[1U] 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__1__KET____DOT__Inst_TagV_TP__DOT__tagv_res;
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_back[2U] 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__2__KET____DOT__Inst_TagV_TP__DOT__tagv_res;
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__tagv_back[3U] 
        = vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__genblk1__BRA__3__KET____DOT__Inst_TagV_TP__DOT__tagv_res;
    if (__Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v0) {
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[0U][0U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v0[0U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[0U][1U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v0[1U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[0U][2U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v0[2U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[0U][3U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v0[3U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[0U][4U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v0[4U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[0U][5U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v0[5U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[0U][6U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v0[6U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[0U][7U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v0[7U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back[0U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v0;
    }
    if (__Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v1) {
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[1U][0U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v1[0U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[1U][1U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v1[1U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[1U][2U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v1[2U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[1U][3U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v1[3U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[1U][4U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v1[4U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[1U][5U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v1[5U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[1U][6U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v1[6U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[1U][7U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v1[7U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[2U][0U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v2[0U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[2U][1U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v2[1U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[2U][2U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v2[2U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[2U][3U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v2[3U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[2U][4U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v2[4U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[2U][5U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v2[5U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[2U][6U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v2[6U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[2U][7U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v2[7U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[3U][0U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v3[0U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[3U][1U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v3[1U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[3U][2U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v3[2U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[3U][3U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v3[3U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[3U][4U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v3[4U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[3U][5U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v3[5U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[3U][6U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v3[6U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[3U][7U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v3[7U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back[1U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v1;
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back[2U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v2;
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back[3U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v3;
    }
    if (__Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v4) {
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[0U][0U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v4[0U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[0U][1U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v4[1U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[0U][2U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v4[2U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[0U][3U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v4[3U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[0U][4U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v4[4U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[0U][5U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v4[5U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[0U][6U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v4[6U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[0U][7U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v4[7U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back[0U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v4;
    }
    if (__Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v5) {
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[1U][0U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v5[0U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[1U][1U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v5[1U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[1U][2U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v5[2U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[1U][3U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v5[3U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[1U][4U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v5[4U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[1U][5U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v5[5U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[1U][6U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v5[6U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[1U][7U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v5[7U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[2U][0U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v6[0U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[2U][1U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v6[1U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[2U][2U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v6[2U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[2U][3U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v6[3U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[2U][4U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v6[4U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[2U][5U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v6[5U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[2U][6U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v6[6U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[2U][7U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v6[7U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[3U][0U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v7[0U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[3U][1U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v7[1U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[3U][2U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v7[2U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[3U][3U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v7[3U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[3U][4U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v7[4U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[3U][5U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v7[5U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[3U][6U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v7[6U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[3U][7U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata__v7[7U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back[1U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v5;
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back[2U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v6;
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back[3U] 
            = __Vdlyvval__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v7;
    }
    if (__Vdlyvset__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back__v8) {
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[0U][0U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[0U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[0U][1U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[1U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[0U][2U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[2U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[0U][3U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[3U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[0U][4U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[4U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[0U][5U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[5U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[0U][6U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[6U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[0U][7U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[7U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[1U][0U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[0U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[1U][1U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[1U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[1U][2U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[2U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[1U][3U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[3U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[1U][4U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[4U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[1U][5U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[5U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[1U][6U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[6U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[1U][7U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[7U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[2U][0U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[0U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[2U][1U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[1U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[2U][2U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[2U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[2U][3U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[3U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[2U][4U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[4U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[2U][5U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[5U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[2U][6U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[6U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[2U][7U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[7U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[3U][0U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[0U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[3U][1U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[1U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[3U][2U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[2U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[3U][3U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[3U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[3U][4U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[4U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[3U][5U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[5U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[3U][6U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[6U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_rdata[3U][7U] 
            = Vmycpu_top__ConstPool__CONST_h9e67c271_0[7U];
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back[0U] = 0U;
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back[1U] = 0U;
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back[2U] = 0U;
        mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tagv_back[3U] = 0U;
    }
    vlSelf->mycpu_top__DOT__inst_tag = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_MemoryManagementUnit__DOT__isOther)
                                         ? 0U : vlSelf->mycpu_top__DOT__u_Main__DOT__u_IF__DOT__u_MemoryManagementUnit__DOT__unmapTag);
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat 
        = __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat;
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__crFlag 
        = (1U & (IData)((1ULL & (((QData)((IData)(mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__add_a)) 
                                  + ((QData)((IData)(mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__add_b)) 
                                     + (QData)((IData)(mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__cin_i)))) 
                                 >> 0x20U))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__adder_u__DOT__add_sub_res 
        = (mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__add_a 
           + (mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__add_b 
              + (IData)(mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__cin_i)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__WAW_coflict 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__PBA_writeEnable_w_o) 
           & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__WB_writeEnable_w_o) 
              & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PrimaryBranchAmend__DOT__REEXE_writeNum_r_i) 
                 == (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_WriteBack__DOT__MEM_writeNum_r_i))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_ID__DOT__RegFile_u__DOT__writeEnable 
        = (((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__WB_writeEnable_w_o) 
            << 1U) | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__PBA_writeEnable_w_o));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT____VdfgTmp_hf5108738__0 
        = (1U & ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_exceptionRisk_r_i)) 
                 & (~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_hasRisk_w_o))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__ready 
        = (1U & (~ ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_hasRisk_w_o) 
                    & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__EXE_up_repairAction_r_i) 
                       >> 7U))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_hasRisk_w_o 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_exceptionRisk_r_i) 
           | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_up_branchRisk_r_i) 
              | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_hasRisk_w_o)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MDU_writeEnable 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT____VdfgTmp_h3f83ab14__0)
            ? 3U : ((2U & ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_writeHiLo_r_i) 
                           << 1U)) | (1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_writeHiLo_r_i)))));
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
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__write_wstrb 
        = ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_wstrb) 
           << (0x1cU & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_offset)));
    vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_hasException_w_o 
        = ((IData)(vlSelf->mycpu_top__DOT__data_hasException) 
           | ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__PREMEM_hasException_r_i) 
              | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_isInterrupt_w_o)));
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
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__hit_run 
        = ((0U != (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__hit_way)) 
           & ((~ (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_unCache)) 
              & (1U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat))));
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
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__inst_cache_araddr 
        = ((vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_tag 
            << 0xcU) | (((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_index) 
                         << 5U) | ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_offset) 
                                   << 4U)));
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
    vlSelf->rready = (1U & ((4U & (IData)(vlSelf->rid))
                             ? ((5U & ((IData)(vlSelf->rid) 
                                       >> 1U)) | (3U 
                                                  == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__cache_stat)))
                             : ((5U & ((IData)(vlSelf->rid) 
                                       >> 1U)) | (3U 
                                                  == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat)))));
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
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__inst_top_arvalid 
        = ((2U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat)) 
           | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__last_arvalid));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__hit_run 
        = ((0U != (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__hit_way)) 
           & ((~ (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_unCache)) 
              & (1U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat))));
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
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__mulRes 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__isAccumlate_r)
            ? (((QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__adder_u__DOT__add_sub_res)) 
                << 0x20U) | (QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__adderRes)))
            : (((QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__Multiplier_u__DOT__seg1[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__MultiDivideUnit_u__DOT__MyMultiplier_u__DOT__Multiplier_u__DOT__seg1[0U]))));
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
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__ok_to_do_tlbInst 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT____VdfgTmp_hf5108738__0) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_isTLBInst_r_i));
    vlSelf->mycpu_top__DOT__u_Main__DOT__SBA_forwardMode_w_o 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__ready) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_SecondBranchAmend__DOT__hasData));
    vlSelf->__VdfgTmp_he8465266__0 = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_hasRisk_w_o) 
                                      & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_hasRisk_w_o));
    vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_hasExceprion_w_o 
        = ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_isDelaySlot_r_i)) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_hasException_r_i));
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
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_req 
        = __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_req;
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
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_mux__DOT__axi_ic_iu__DOT____VdfgTmp_he0abe4c6__0 
        = ((2U == (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__cache_stat))
            ? (0x1d400ULL | ((QData)((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__inst_cache_araddr)) 
                             << 0x12U)) : (0x800000000d200ULL 
                                           | ((QData)((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_inst_uncache__DOT__last_addr)) 
                                              << 0x12U)));
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
    vlSelf->arvalid = ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__inst_top_arvalid) 
                       | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__data_top_arvalid));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__inst_top_arready 
        = ((IData)(vlSelf->arready) & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__inst_top_arvalid));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__data_top_arready 
        = ((~ (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__inst_top_arvalid)) 
           & ((IData)(vlSelf->arready) & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__data_top_arvalid)));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_req 
        = __Vdly__mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_req;
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
    vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_search_w_o 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__ok_to_do_tlbInst) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_TLBInstOperator_r_i));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__is_pc_save 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_hasExceprion_w_o) 
           | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_eret_r_i));
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
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__data_uca_req 
        = ((~ (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_hasException)) 
           & ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_unCache) 
              & ((~ (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_uca_addr_ok)) 
                 & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_req))));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__hit_write 
        = ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_req) 
           & ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__hit_run) 
              & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_wr)));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_data_ok 
        = ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_req) 
           & ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__hit_run) 
              | ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sda_hasException) 
                 | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__uca_ok))));
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT____VdfgTmp_hf6d406ff__0 
        = ((~ ((IData)(vlSelf->mycpu_top__DOT__data_unCache) 
               | (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_miss))) 
           & (0U != (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_dcache_tp__DOT__sta_hit_way)));
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
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__inst_uca_req 
        = ((~ (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_hasException)) 
           & ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_unCache) 
              & ((~ (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_uca_addr_ok)) 
                 & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_inst_top__DOT__u_icache_tp__DOT__sda_req))));
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
}
