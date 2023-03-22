// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top___024root.h"

VL_INLINE_OPT void Vmycpu_top___024root___nba_sequent__TOP__2(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf6c6d942__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_hf6c6d942__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h280da603__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h280da603__0 = 0;
    CData/*0:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h8d4fa09b__0;
    mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_h8d4fa09b__0 = 0;
    VlWide<6>/*165:0*/ mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha6b0f486__0;
    VL_ZERO_W(166, mycpu_top__DOT__u_Main__DOT__u_Issue__DOT__Arbitrator_u__DOT____VdfgTmp_ha6b0f486__0);
    // Body
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
    vlSelf->mycpu_top__DOT__u_Main__DOT__EXE_down_forwardMode_w_o 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT____VdfgTmp_h15bf95e2__0) 
           & ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_memReq_r_i)) 
              & (~ (IData)((((0U != (0x180U & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_mduOperator_r_i))) 
                             | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_readCp0_r_i)) 
                            | (0U != (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_EXEDOWN__DOT__ID_down_readHiLo_r_i)))))));
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
}

VL_INLINE_OPT void Vmycpu_top___024root___nba_sequent__TOP__4(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___nba_sequent__TOP__4\n"); );
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
    // Body
    vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__data_uca_data_ok 
        = ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_req) 
           & ((IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__u_data_top__DOT__u_data_uncache__DOT__last_op)
               ? (IData)(((3U == (IData)(vlSelf->bid)) 
                          & (IData)(vlSelf->bvalid)))
               : (5U & (IData)(((2U == (0xbU & (IData)(vlSelf->rid))) 
                                & (IData)(vlSelf->mycpu_top__DOT__u_cache_top__DOT__data_top_rvalid))))));
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
    vlSelf->mycpu_top__DOT__data_req = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_memReq_r_i) 
                                        & ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_hasRisk_w_o)) 
                                           & ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_hasException_r_i)) 
                                              & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_allowin_w_o))));
    vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_valid_w_o 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_MEM__DOT____VdfgTmp_h57ecb1a5__0) 
           & ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__needFlush)) 
              & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_allowin_w_o)));
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
    mycpu_top__DOT__u_Main__DOT__PREMEM_forwardMode_w_o 
        = ((~ ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_memReq_r_i) 
               | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__EXE_down_readCp0_r_i))) 
           & (IData)(mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT____VdfgTmp_h18f03704__0));
    vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_valid_w_o 
        = ((IData)(mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT____VdfgTmp_h18f03704__0) 
           & ((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_PREMEM__DOT__needFlush)) 
              & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_allowin_w_o)));
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
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__needUpdata 
        = ((IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_allowin_w_o) 
           & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_valid_w_o));
    vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__needClear 
        = (((~ (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__PREMEM_valid_w_o)) 
            & (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__MEM_allowin_w_o)) 
           | (IData)(vlSelf->mycpu_top__DOT__u_Main__DOT__u_MEM__DOT__needFlush));
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

void Vmycpu_top___024root___eval_triggers__ico(Vmycpu_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmycpu_top___024root___dump_triggers__ico(Vmycpu_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vmycpu_top___024root___eval_ico(Vmycpu_top___024root* vlSelf);
void Vmycpu_top___024root___eval_triggers__act(Vmycpu_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmycpu_top___024root___dump_triggers__act(Vmycpu_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vmycpu_top___024root___eval_act(Vmycpu_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmycpu_top___024root___dump_triggers__nba(Vmycpu_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vmycpu_top___024root___eval_nba(Vmycpu_top___024root* vlSelf);

void Vmycpu_top___024root___eval(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vmycpu_top___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vmycpu_top___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/hgh/cpu/cpuref/mycpu/mycpu_top.v", 3, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vmycpu_top___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vmycpu_top___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vmycpu_top___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/hgh/cpu/cpuref/mycpu/mycpu_top.v", 3, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vmycpu_top___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vmycpu_top___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/hgh/cpu/cpuref/mycpu/mycpu_top.v", 3, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vmycpu_top___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vmycpu_top___024root___eval_debug_assertions(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->ext_int & 0xc0U))) {
        Verilated::overWidthError("ext_int");}
    if (VL_UNLIKELY((vlSelf->aclk & 0xfeU))) {
        Verilated::overWidthError("aclk");}
    if (VL_UNLIKELY((vlSelf->aresetn & 0xfeU))) {
        Verilated::overWidthError("aresetn");}
    if (VL_UNLIKELY((vlSelf->arready & 0xfeU))) {
        Verilated::overWidthError("arready");}
    if (VL_UNLIKELY((vlSelf->rid & 0xf0U))) {
        Verilated::overWidthError("rid");}
    if (VL_UNLIKELY((vlSelf->rresp & 0xfcU))) {
        Verilated::overWidthError("rresp");}
    if (VL_UNLIKELY((vlSelf->rlast & 0xfeU))) {
        Verilated::overWidthError("rlast");}
    if (VL_UNLIKELY((vlSelf->rvalid & 0xfeU))) {
        Verilated::overWidthError("rvalid");}
    if (VL_UNLIKELY((vlSelf->awready & 0xfeU))) {
        Verilated::overWidthError("awready");}
    if (VL_UNLIKELY((vlSelf->wready & 0xfeU))) {
        Verilated::overWidthError("wready");}
    if (VL_UNLIKELY((vlSelf->bid & 0xf0U))) {
        Verilated::overWidthError("bid");}
    if (VL_UNLIKELY((vlSelf->bresp & 0xfcU))) {
        Verilated::overWidthError("bresp");}
    if (VL_UNLIKELY((vlSelf->bvalid & 0xfeU))) {
        Verilated::overWidthError("bvalid");}
}
#endif  // VL_DEBUG
