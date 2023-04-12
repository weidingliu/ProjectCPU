// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTop___024root.h"

VL_ATTR_COLD void VTop___024root___settle__TOP__0(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->pc_valid = 1U;
    vlSelf->PC = vlSelf->Top__DOT__if_stage__DOT__temp;
    vlSelf->Top__DOT__id_stage__DOT__decoder_op_21_20 
        = ((8U & (IData)(vlSelf->Top__DOT__id_stage__DOT__decoder_op_21_20)) 
           | (((2U == (3U & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                     >> 0x14U)))) << 2U) 
              | (((1U == (3U & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                        >> 0x14U)))) 
                  << 1U) | (0U == (3U & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                 >> 0x14U)))))));
    vlSelf->Top__DOT__id_stage__DOT__decoder_op_21_20 
        = ((7U & (IData)(vlSelf->Top__DOT__id_stage__DOT__decoder_op_21_20)) 
           | ((3U == (3U & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                    >> 0x14U)))) << 3U));
    vlSelf->Top__DOT__id_stage__DOT__decoder_op_25_22 
        = ((0xfff8U & (IData)(vlSelf->Top__DOT__id_stage__DOT__decoder_op_25_22)) 
           | (((2U == (0xfU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                       >> 0x16U)))) 
               << 2U) | (((1U == (0xfU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                  >> 0x16U)))) 
                          << 1U) | (0U == (0xfU & (IData)(
                                                          (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                           >> 0x16U)))))));
    vlSelf->Top__DOT__id_stage__DOT__decoder_op_25_22 
        = ((0xffc7U & (IData)(vlSelf->Top__DOT__id_stage__DOT__decoder_op_25_22)) 
           | (((5U == (0xfU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                       >> 0x16U)))) 
               << 5U) | (((4U == (0xfU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                  >> 0x16U)))) 
                          << 4U) | ((3U == (0xfU & (IData)(
                                                           (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                            >> 0x16U)))) 
                                    << 3U))));
    vlSelf->Top__DOT__id_stage__DOT__decoder_op_25_22 
        = ((0xfe3fU & (IData)(vlSelf->Top__DOT__id_stage__DOT__decoder_op_25_22)) 
           | (((8U == (0xfU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                       >> 0x16U)))) 
               << 8U) | (((7U == (0xfU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                  >> 0x16U)))) 
                          << 7U) | ((6U == (0xfU & (IData)(
                                                           (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                            >> 0x16U)))) 
                                    << 6U))));
    vlSelf->Top__DOT__id_stage__DOT__decoder_op_25_22 
        = ((0xf1ffU & (IData)(vlSelf->Top__DOT__id_stage__DOT__decoder_op_25_22)) 
           | (((0xbU == (0xfU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                         >> 0x16U)))) 
               << 0xbU) | (((0xaU == (0xfU & (IData)(
                                                     (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                      >> 0x16U)))) 
                            << 0xaU) | ((9U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                           >> 0x16U)))) 
                                        << 9U))));
    vlSelf->Top__DOT__id_stage__DOT__decoder_op_25_22 
        = ((0x8fffU & (IData)(vlSelf->Top__DOT__id_stage__DOT__decoder_op_25_22)) 
           | (((0xeU == (0xfU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                         >> 0x16U)))) 
               << 0xeU) | (((0xdU == (0xfU & (IData)(
                                                     (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                      >> 0x16U)))) 
                            << 0xdU) | ((0xcU == (0xfU 
                                                  & (IData)(
                                                            (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                             >> 0x16U)))) 
                                        << 0xcU))));
    vlSelf->Top__DOT__id_stage__DOT__decoder_op_25_22 
        = ((0x7fffU & (IData)(vlSelf->Top__DOT__id_stage__DOT__decoder_op_25_22)) 
           | ((0xfU == (0xfU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                        >> 0x16U)))) 
              << 0xfU));
    vlSelf->Top__DOT__id_stage__DOT__decoder_op_31_26 
        = ((0xfffffff8U & vlSelf->Top__DOT__id_stage__DOT__decoder_op_31_26) 
           | (((2U == (0x1fU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                        >> 0x1aU)))) 
               << 2U) | (((1U == (0x1fU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                   >> 0x1aU)))) 
                          << 1U) | (0U == (0x1fU & (IData)(
                                                           (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                            >> 0x1aU)))))));
    vlSelf->Top__DOT__id_stage__DOT__decoder_op_31_26 
        = ((0xffffffc7U & vlSelf->Top__DOT__id_stage__DOT__decoder_op_31_26) 
           | (((5U == (0x1fU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                        >> 0x1aU)))) 
               << 5U) | (((4U == (0x1fU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                   >> 0x1aU)))) 
                          << 4U) | ((3U == (0x1fU & (IData)(
                                                            (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                             >> 0x1aU)))) 
                                    << 3U))));
    vlSelf->Top__DOT__id_stage__DOT__decoder_op_31_26 
        = ((0xfffffe3fU & vlSelf->Top__DOT__id_stage__DOT__decoder_op_31_26) 
           | (((8U == (0x1fU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                        >> 0x1aU)))) 
               << 8U) | (((7U == (0x1fU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                   >> 0x1aU)))) 
                          << 7U) | ((6U == (0x1fU & (IData)(
                                                            (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                             >> 0x1aU)))) 
                                    << 6U))));
    vlSelf->Top__DOT__id_stage__DOT__decoder_op_31_26 
        = ((0xfffff1ffU & vlSelf->Top__DOT__id_stage__DOT__decoder_op_31_26) 
           | (((0xbU == (0x1fU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                          >> 0x1aU)))) 
               << 0xbU) | (((0xaU == (0x1fU & (IData)(
                                                      (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                       >> 0x1aU)))) 
                            << 0xaU) | ((9U == (0x1fU 
                                                & (IData)(
                                                          (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                           >> 0x1aU)))) 
                                        << 9U))));
    vlSelf->Top__DOT__id_stage__DOT__decoder_op_31_26 
        = ((0xffff8fffU & vlSelf->Top__DOT__id_stage__DOT__decoder_op_31_26) 
           | (((0xeU == (0x1fU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                          >> 0x1aU)))) 
               << 0xeU) | (((0xdU == (0x1fU & (IData)(
                                                      (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                       >> 0x1aU)))) 
                            << 0xdU) | ((0xcU == (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                             >> 0x1aU)))) 
                                        << 0xcU))));
    vlSelf->Top__DOT__id_stage__DOT__decoder_op_31_26 
        = ((0xfffc7fffU & vlSelf->Top__DOT__id_stage__DOT__decoder_op_31_26) 
           | (((0x11U == (0x1fU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                           >> 0x1aU)))) 
               << 0x11U) | (((0x10U == (0x1fU & (IData)(
                                                        (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                         >> 0x1aU)))) 
                             << 0x10U) | ((0xfU == 
                                           (0x1fU & (IData)(
                                                            (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                             >> 0x1aU)))) 
                                          << 0xfU))));
    vlSelf->Top__DOT__id_stage__DOT__decoder_op_31_26 
        = ((0xffe3ffffU & vlSelf->Top__DOT__id_stage__DOT__decoder_op_31_26) 
           | (((0x14U == (0x1fU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                           >> 0x1aU)))) 
               << 0x14U) | (((0x13U == (0x1fU & (IData)(
                                                        (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                         >> 0x1aU)))) 
                             << 0x13U) | ((0x12U == 
                                           (0x1fU & (IData)(
                                                            (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                             >> 0x1aU)))) 
                                          << 0x12U))));
    vlSelf->Top__DOT__id_stage__DOT__decoder_op_31_26 
        = ((0xff1fffffU & vlSelf->Top__DOT__id_stage__DOT__decoder_op_31_26) 
           | (((0x17U == (0x1fU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                           >> 0x1aU)))) 
               << 0x17U) | (((0x16U == (0x1fU & (IData)(
                                                        (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                         >> 0x1aU)))) 
                             << 0x16U) | ((0x15U == 
                                           (0x1fU & (IData)(
                                                            (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                             >> 0x1aU)))) 
                                          << 0x15U))));
    vlSelf->Top__DOT__id_stage__DOT__decoder_op_31_26 
        = ((0xf8ffffffU & vlSelf->Top__DOT__id_stage__DOT__decoder_op_31_26) 
           | (((0x1aU == (0x1fU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                           >> 0x1aU)))) 
               << 0x1aU) | (((0x19U == (0x1fU & (IData)(
                                                        (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                         >> 0x1aU)))) 
                             << 0x19U) | ((0x18U == 
                                           (0x1fU & (IData)(
                                                            (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                             >> 0x1aU)))) 
                                          << 0x18U))));
    vlSelf->Top__DOT__id_stage__DOT__decoder_op_31_26 
        = ((0xc7ffffffU & vlSelf->Top__DOT__id_stage__DOT__decoder_op_31_26) 
           | (((0x1dU == (0x1fU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                           >> 0x1aU)))) 
               << 0x1dU) | (((0x1cU == (0x1fU & (IData)(
                                                        (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                         >> 0x1aU)))) 
                             << 0x1cU) | ((0x1bU == 
                                           (0x1fU & (IData)(
                                                            (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                             >> 0x1aU)))) 
                                          << 0x1bU))));
    vlSelf->Top__DOT__id_stage__DOT__decoder_op_31_26 
        = ((0x3fffffffU & vlSelf->Top__DOT__id_stage__DOT__decoder_op_31_26) 
           | (((0x1fU == (0x1fU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                           >> 0x1aU)))) 
               << 0x1fU) | ((0x1eU == (0x1fU & (IData)(
                                                       (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                        >> 0x1aU)))) 
                            << 0x1eU)));
    vlSelf->Top__DOT__id_stage__DOT__decoder_op_19_15 
        = ((0xfffffff8U & vlSelf->Top__DOT__id_stage__DOT__decoder_op_19_15) 
           | (((2U == (0x1fU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                        >> 0xfU)))) 
               << 2U) | (((1U == (0x1fU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                   >> 0xfU)))) 
                          << 1U) | (0U == (0x1fU & (IData)(
                                                           (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                            >> 0xfU)))))));
    vlSelf->Top__DOT__id_stage__DOT__decoder_op_19_15 
        = ((0xffffffc7U & vlSelf->Top__DOT__id_stage__DOT__decoder_op_19_15) 
           | (((5U == (0x1fU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                        >> 0xfU)))) 
               << 5U) | (((4U == (0x1fU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                   >> 0xfU)))) 
                          << 4U) | ((3U == (0x1fU & (IData)(
                                                            (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                             >> 0xfU)))) 
                                    << 3U))));
    vlSelf->Top__DOT__id_stage__DOT__decoder_op_19_15 
        = ((0xfffffe3fU & vlSelf->Top__DOT__id_stage__DOT__decoder_op_19_15) 
           | (((8U == (0x1fU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                        >> 0xfU)))) 
               << 8U) | (((7U == (0x1fU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                   >> 0xfU)))) 
                          << 7U) | ((6U == (0x1fU & (IData)(
                                                            (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                             >> 0xfU)))) 
                                    << 6U))));
    vlSelf->Top__DOT__id_stage__DOT__decoder_op_19_15 
        = ((0xfffff1ffU & vlSelf->Top__DOT__id_stage__DOT__decoder_op_19_15) 
           | (((0xbU == (0x1fU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                          >> 0xfU)))) 
               << 0xbU) | (((0xaU == (0x1fU & (IData)(
                                                      (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                       >> 0xfU)))) 
                            << 0xaU) | ((9U == (0x1fU 
                                                & (IData)(
                                                          (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                           >> 0xfU)))) 
                                        << 9U))));
    vlSelf->Top__DOT__id_stage__DOT__decoder_op_19_15 
        = ((0xffff8fffU & vlSelf->Top__DOT__id_stage__DOT__decoder_op_19_15) 
           | (((0xeU == (0x1fU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                          >> 0xfU)))) 
               << 0xeU) | (((0xdU == (0x1fU & (IData)(
                                                      (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                       >> 0xfU)))) 
                            << 0xdU) | ((0xcU == (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                             >> 0xfU)))) 
                                        << 0xcU))));
    vlSelf->Top__DOT__id_stage__DOT__decoder_op_19_15 
        = ((0xfffc7fffU & vlSelf->Top__DOT__id_stage__DOT__decoder_op_19_15) 
           | (((0x11U == (0x1fU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                           >> 0xfU)))) 
               << 0x11U) | (((0x10U == (0x1fU & (IData)(
                                                        (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                         >> 0xfU)))) 
                             << 0x10U) | ((0xfU == 
                                           (0x1fU & (IData)(
                                                            (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                             >> 0xfU)))) 
                                          << 0xfU))));
    vlSelf->Top__DOT__id_stage__DOT__decoder_op_19_15 
        = ((0xffe3ffffU & vlSelf->Top__DOT__id_stage__DOT__decoder_op_19_15) 
           | (((0x14U == (0x1fU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                           >> 0xfU)))) 
               << 0x14U) | (((0x13U == (0x1fU & (IData)(
                                                        (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                         >> 0xfU)))) 
                             << 0x13U) | ((0x12U == 
                                           (0x1fU & (IData)(
                                                            (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                             >> 0xfU)))) 
                                          << 0x12U))));
    vlSelf->Top__DOT__id_stage__DOT__decoder_op_19_15 
        = ((0xff1fffffU & vlSelf->Top__DOT__id_stage__DOT__decoder_op_19_15) 
           | (((0x17U == (0x1fU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                           >> 0xfU)))) 
               << 0x17U) | (((0x16U == (0x1fU & (IData)(
                                                        (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                         >> 0xfU)))) 
                             << 0x16U) | ((0x15U == 
                                           (0x1fU & (IData)(
                                                            (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                             >> 0xfU)))) 
                                          << 0x15U))));
    vlSelf->Top__DOT__id_stage__DOT__decoder_op_19_15 
        = ((0xf8ffffffU & vlSelf->Top__DOT__id_stage__DOT__decoder_op_19_15) 
           | (((0x1aU == (0x1fU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                           >> 0xfU)))) 
               << 0x1aU) | (((0x19U == (0x1fU & (IData)(
                                                        (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                         >> 0xfU)))) 
                             << 0x19U) | ((0x18U == 
                                           (0x1fU & (IData)(
                                                            (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                             >> 0xfU)))) 
                                          << 0x18U))));
    vlSelf->Top__DOT__id_stage__DOT__decoder_op_19_15 
        = ((0xc7ffffffU & vlSelf->Top__DOT__id_stage__DOT__decoder_op_19_15) 
           | (((0x1dU == (0x1fU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                           >> 0xfU)))) 
               << 0x1dU) | (((0x1cU == (0x1fU & (IData)(
                                                        (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                         >> 0xfU)))) 
                             << 0x1cU) | ((0x1bU == 
                                           (0x1fU & (IData)(
                                                            (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                             >> 0xfU)))) 
                                          << 0x1bU))));
    vlSelf->Top__DOT__id_stage__DOT__decoder_op_19_15 
        = ((0x3fffffffU & vlSelf->Top__DOT__id_stage__DOT__decoder_op_19_15) 
           | (((0x1fU == (0x1fU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                           >> 0xfU)))) 
               << 0x1fU) | ((0x1eU == (0x1fU & (IData)(
                                                       (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                        >> 0xfU)))) 
                            << 0x1eU)));
    vlSelf->Top__DOT__id_stage__DOT__right_fire = vlSelf->Top__DOT__id_stage__DOT__valid;
    vlSelf->Top__DOT__if_stage__DOT__right_fire = vlSelf->Top__DOT__if_stage__DOT__valid;
    vlSelf->Top__DOT__id_stage__DOT__inst_add = (1U 
                                                 & (((vlSelf->Top__DOT__id_stage__DOT__decoder_op_31_26 
                                                      & (IData)(vlSelf->Top__DOT__id_stage__DOT__decoder_op_25_22)) 
                                                     & ((IData)(vlSelf->Top__DOT__id_stage__DOT__decoder_op_21_20) 
                                                        >> 1U)) 
                                                    & vlSelf->Top__DOT__id_stage__DOT__decoder_op_19_15));
    vlSelf->Top__DOT__id_stage__DOT__alu_op = ((0x3ffeU 
                                                & (IData)(vlSelf->Top__DOT__id_stage__DOT__alu_op)) 
                                               | (IData)(vlSelf->Top__DOT__id_stage__DOT__inst_add));
    vlSelf->Top__DOT__id_stage__DOT__select_src1 = 
        ((2U & ((~ (IData)(vlSelf->Top__DOT__id_stage__DOT__inst_add)) 
                << 1U)) | (1U & (~ (IData)(vlSelf->Top__DOT__id_stage__DOT__inst_add))));
    vlSelf->Top__DOT__id_stage__DOT__select_src2 = 
        ((2U & ((~ (IData)(vlSelf->Top__DOT__id_stage__DOT__inst_add)) 
                << 1U)) | (1U & (~ (IData)(vlSelf->Top__DOT__id_stage__DOT__inst_add))));
}

VL_ATTR_COLD void VTop___024root___eval_initial(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void VTop___024root___eval_settle(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_settle\n"); );
    // Body
    VTop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VTop___024root___final(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___final\n"); );
}

VL_ATTR_COLD void VTop___024root___ctor_var_reset(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->PC = VL_RAND_RESET_I(32);
    vlSelf->pc_valid = VL_RAND_RESET_I(1);
    vlSelf->inst_ready = VL_RAND_RESET_I(1);
    vlSelf->rdata = VL_RAND_RESET_I(32);
    vlSelf->addr = VL_RAND_RESET_I(32);
    vlSelf->wdata = VL_RAND_RESET_I(32);
    vlSelf->wmask = VL_RAND_RESET_I(4);
    vlSelf->en = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(103, vlSelf->Top__DOT__difftest_bus);
    vlSelf->Top__DOT__if_stage__DOT__temp = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__if_stage__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__if_stage__DOT__bus_temp = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__if_stage__DOT__right_fire = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__id_stage__DOT__right_fire = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__id_stage__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__id_stage__DOT__alu_op = VL_RAND_RESET_I(14);
    VL_RAND_RESET_W(182, vlSelf->Top__DOT__id_stage__DOT__bus_temp);
    vlSelf->Top__DOT__id_stage__DOT__Imm = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__id_stage__DOT__decoder_op_31_26 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__id_stage__DOT__decoder_op_25_22 = VL_RAND_RESET_I(16);
    vlSelf->Top__DOT__id_stage__DOT__decoder_op_21_20 = VL_RAND_RESET_I(4);
    vlSelf->Top__DOT__id_stage__DOT__decoder_op_19_15 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__id_stage__DOT__select_src1 = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__id_stage__DOT__select_src2 = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__id_stage__DOT__inst_add = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__id_stage__DOT__inst_or = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->Top__DOT__Regfile__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->Top__DOT__exe_stage__DOT__valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(213, vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus);
    vlSelf->Top__DOT__exe_stage__DOT__alu__DOT__add_result = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__exe_stage__DOT__alu__DOT__adder_a = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__exe_stage__DOT__alu__DOT__adder_b = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__exe_stage__DOT__alu__DOT__adder_cin = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__mem_stage__DOT__valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(103, vlSelf->Top__DOT__mem_stage__DOT__bus_temp);
    vlSelf->Top__DOT__wb_syage__DOT__valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(103, vlSelf->Top__DOT__wb_syage__DOT__bus_temp);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
