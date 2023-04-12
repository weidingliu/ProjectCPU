// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTop___024root.h"

VL_INLINE_OPT void VTop___024root___sequent__TOP__0(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__Top__DOT__if_stage__DOT__temp;
    VlWide<6>/*181:0*/ __Vdly__Top__DOT__id_stage__DOT__bus_temp;
    CData/*4:0*/ __Vdlyvdim0__Top__DOT__Regfile__DOT__rf__v0;
    IData/*31:0*/ __Vdlyvval__Top__DOT__Regfile__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__Top__DOT__Regfile__DOT__rf__v0;
    VlWide<3>/*95:0*/ __Vtemp_h538ba67e__0;
    // Body
    __Vdly__Top__DOT__if_stage__DOT__temp = vlSelf->Top__DOT__if_stage__DOT__temp;
    __Vdlyvset__Top__DOT__Regfile__DOT__rf__v0 = 0U;
    __Vdly__Top__DOT__id_stage__DOT__bus_temp[0U] = 
        vlSelf->Top__DOT__id_stage__DOT__bus_temp[0U];
    __Vdly__Top__DOT__id_stage__DOT__bus_temp[1U] = 
        vlSelf->Top__DOT__id_stage__DOT__bus_temp[1U];
    __Vdly__Top__DOT__id_stage__DOT__bus_temp[2U] = 
        vlSelf->Top__DOT__id_stage__DOT__bus_temp[2U];
    __Vdly__Top__DOT__id_stage__DOT__bus_temp[3U] = 
        vlSelf->Top__DOT__id_stage__DOT__bus_temp[3U];
    __Vdly__Top__DOT__id_stage__DOT__bus_temp[4U] = 
        vlSelf->Top__DOT__id_stage__DOT__bus_temp[4U];
    __Vdly__Top__DOT__id_stage__DOT__bus_temp[5U] = 
        vlSelf->Top__DOT__id_stage__DOT__bus_temp[5U];
    vlSelf->Top__DOT__wb_syage__DOT__valid = ((~ (IData)(vlSelf->reset)) 
                                              & (IData)(vlSelf->Top__DOT__mem_stage__DOT__valid));
    if ((1U & vlSelf->Top__DOT__wb_syage__DOT__bus_temp[3U])) {
        __Vdlyvval__Top__DOT__Regfile__DOT__rf__v0 
            = vlSelf->Top__DOT__wb_syage__DOT__bus_temp[0U];
        __Vdlyvset__Top__DOT__Regfile__DOT__rf__v0 = 1U;
        __Vdlyvdim0__Top__DOT__Regfile__DOT__rf__v0 
            = (0x1fU & (vlSelf->Top__DOT__wb_syage__DOT__bus_temp[3U] 
                        >> 1U));
    }
    if (vlSelf->reset) {
        __Vdly__Top__DOT__if_stage__DOT__temp = 0U;
        vlSelf->Top__DOT__if_stage__DOT__temp = __Vdly__Top__DOT__if_stage__DOT__temp;
        vlSelf->Top__DOT__difftest_bus[0U] = 0U;
        vlSelf->Top__DOT__difftest_bus[1U] = 0U;
        vlSelf->Top__DOT__difftest_bus[2U] = 0U;
        vlSelf->Top__DOT__difftest_bus[3U] = 0U;
        __Vdly__Top__DOT__id_stage__DOT__bus_temp[0U] = 0U;
        __Vdly__Top__DOT__id_stage__DOT__bus_temp[1U] = 0U;
        __Vdly__Top__DOT__id_stage__DOT__bus_temp[2U] = 0U;
        __Vdly__Top__DOT__id_stage__DOT__bus_temp[3U] = 0U;
        __Vdly__Top__DOT__id_stage__DOT__bus_temp[4U] = 0U;
        __Vdly__Top__DOT__id_stage__DOT__bus_temp[5U] = 0U;
    } else {
        if (vlSelf->Top__DOT__if_stage__DOT__valid) {
            __Vdly__Top__DOT__if_stage__DOT__temp = 
                ((IData)(4U) + vlSelf->Top__DOT__if_stage__DOT__temp);
            __Vtemp_h538ba67e__0[1U] = (IData)((((QData)((IData)(
                                                                 ((2U 
                                                                   & (IData)(vlSelf->Top__DOT__id_stage__DOT__select_src2))
                                                                   ? (IData)(
                                                                             (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                                              >> 0x20U))
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(vlSelf->Top__DOT__id_stage__DOT__select_src2))
                                                                    ? vlSelf->Top__DOT__id_stage__DOT__Imm
                                                                    : 
                                                                   ((0U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (IData)(
                                                                                (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                                                >> 0xaU))))
                                                                     ? 0U
                                                                     : 
                                                                    ((((0x1fU 
                                                                        & (IData)(
                                                                                (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                                                >> 0xaU))) 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (vlSelf->Top__DOT__wb_syage__DOT__bus_temp[3U] 
                                                                           >> 1U))) 
                                                                      & vlSelf->Top__DOT__wb_syage__DOT__bus_temp[3U])
                                                                      ? 
                                                                     vlSelf->Top__DOT__wb_syage__DOT__bus_temp[0U]
                                                                      : 
                                                                     vlSelf->Top__DOT__Regfile__DOT__rf
                                                                     [
                                                                     (0x1fU 
                                                                      & (IData)(
                                                                                (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                                                >> 0xaU)))])))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((2U 
                                                                    & (IData)(vlSelf->Top__DOT__id_stage__DOT__select_src1))
                                                                    ? (IData)(
                                                                              (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                                               >> 0x20U))
                                                                    : 
                                                                   ((1U 
                                                                     & (IData)(vlSelf->Top__DOT__id_stage__DOT__select_src1))
                                                                     ? vlSelf->Top__DOT__id_stage__DOT__Imm
                                                                     : 
                                                                    ((0U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & (IData)(
                                                                                (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                                                >> 5U))))
                                                                      ? 0U
                                                                      : 
                                                                     ((((0x1fU 
                                                                         & (IData)(
                                                                                (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                                                >> 5U))) 
                                                                        == 
                                                                        (0x1fU 
                                                                         & (vlSelf->Top__DOT__wb_syage__DOT__bus_temp[3U] 
                                                                            >> 1U))) 
                                                                       & vlSelf->Top__DOT__wb_syage__DOT__bus_temp[3U])
                                                                       ? 
                                                                      vlSelf->Top__DOT__wb_syage__DOT__bus_temp[0U]
                                                                       : 
                                                                      vlSelf->Top__DOT__Regfile__DOT__rf
                                                                      [
                                                                      (0x1fU 
                                                                       & (IData)(
                                                                                (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                                                >> 5U)))]))))))));
            __Vtemp_h538ba67e__0[2U] = (IData)(((((QData)((IData)(
                                                                  ((2U 
                                                                    & (IData)(vlSelf->Top__DOT__id_stage__DOT__select_src2))
                                                                    ? (IData)(
                                                                              (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                                               >> 0x20U))
                                                                    : 
                                                                   ((1U 
                                                                     & (IData)(vlSelf->Top__DOT__id_stage__DOT__select_src2))
                                                                     ? vlSelf->Top__DOT__id_stage__DOT__Imm
                                                                     : 
                                                                    ((0U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & (IData)(
                                                                                (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                                                >> 0xaU))))
                                                                      ? 0U
                                                                      : 
                                                                     ((((0x1fU 
                                                                         & (IData)(
                                                                                (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                                                >> 0xaU))) 
                                                                        == 
                                                                        (0x1fU 
                                                                         & (vlSelf->Top__DOT__wb_syage__DOT__bus_temp[3U] 
                                                                            >> 1U))) 
                                                                       & vlSelf->Top__DOT__wb_syage__DOT__bus_temp[3U])
                                                                       ? 
                                                                      vlSelf->Top__DOT__wb_syage__DOT__bus_temp[0U]
                                                                       : 
                                                                      vlSelf->Top__DOT__Regfile__DOT__rf
                                                                      [
                                                                      (0x1fU 
                                                                       & (IData)(
                                                                                (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                                                >> 0xaU)))])))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((2U 
                                                                     & (IData)(vlSelf->Top__DOT__id_stage__DOT__select_src1))
                                                                     ? (IData)(
                                                                               (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                                                >> 0x20U))
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(vlSelf->Top__DOT__id_stage__DOT__select_src1))
                                                                      ? vlSelf->Top__DOT__id_stage__DOT__Imm
                                                                      : 
                                                                     ((0U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (IData)(
                                                                                (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                                                >> 5U))))
                                                                       ? 0U
                                                                       : 
                                                                      ((((0x1fU 
                                                                          & (IData)(
                                                                                (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                                                >> 5U))) 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (vlSelf->Top__DOT__wb_syage__DOT__bus_temp[3U] 
                                                                             >> 1U))) 
                                                                        & vlSelf->Top__DOT__wb_syage__DOT__bus_temp[3U])
                                                                        ? 
                                                                       vlSelf->Top__DOT__wb_syage__DOT__bus_temp[0U]
                                                                        : 
                                                                       vlSelf->Top__DOT__Regfile__DOT__rf
                                                                       [
                                                                       (0x1fU 
                                                                        & (IData)(
                                                                                (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                                                >> 5U)))]))))))) 
                                                >> 0x20U));
            __Vdly__Top__DOT__id_stage__DOT__bus_temp[0U] 
                = vlSelf->Top__DOT__id_stage__DOT__Imm;
            __Vdly__Top__DOT__id_stage__DOT__bus_temp[1U] 
                = __Vtemp_h538ba67e__0[1U];
            __Vdly__Top__DOT__id_stage__DOT__bus_temp[2U] 
                = __Vtemp_h538ba67e__0[2U];
            __Vdly__Top__DOT__id_stage__DOT__bus_temp[3U] 
                = (((IData)(vlSelf->Top__DOT__if_stage__DOT__bus_temp) 
                    << 6U) | ((0x3eU & ((IData)(vlSelf->Top__DOT__if_stage__DOT__bus_temp) 
                                        << 1U)) | (IData)(vlSelf->Top__DOT__id_stage__DOT__inst_add)));
            __Vdly__Top__DOT__id_stage__DOT__bus_temp[4U] 
                = (((IData)(vlSelf->Top__DOT__if_stage__DOT__bus_temp) 
                    >> 0x1aU) | ((IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                          >> 0x20U)) 
                                 << 6U));
            __Vdly__Top__DOT__id_stage__DOT__bus_temp[5U] 
                = (((IData)(vlSelf->Top__DOT__id_stage__DOT__alu_op) 
                    << 7U) | (((IData)(vlSelf->Top__DOT__id_stage__DOT__inst_add) 
                               << 6U) | ((IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                  >> 0x20U)) 
                                         >> 0x1aU)));
        }
        vlSelf->Top__DOT__if_stage__DOT__temp = __Vdly__Top__DOT__if_stage__DOT__temp;
        vlSelf->Top__DOT__difftest_bus[0U] = vlSelf->Top__DOT__wb_syage__DOT__bus_temp[0U];
        vlSelf->Top__DOT__difftest_bus[1U] = vlSelf->Top__DOT__wb_syage__DOT__bus_temp[1U];
        vlSelf->Top__DOT__difftest_bus[2U] = vlSelf->Top__DOT__wb_syage__DOT__bus_temp[2U];
        vlSelf->Top__DOT__difftest_bus[3U] = vlSelf->Top__DOT__wb_syage__DOT__bus_temp[3U];
    }
    if (__Vdlyvset__Top__DOT__Regfile__DOT__rf__v0) {
        vlSelf->Top__DOT__Regfile__DOT__rf[__Vdlyvdim0__Top__DOT__Regfile__DOT__rf__v0] 
            = __Vdlyvval__Top__DOT__Regfile__DOT__rf__v0;
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->inst_ready) {
            vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                = (((QData)((IData)(vlSelf->PC)) << 0x20U) 
                   | (QData)((IData)(vlSelf->inst)));
        }
    }
    vlSelf->PC = vlSelf->Top__DOT__if_stage__DOT__temp;
    if (vlSelf->reset) {
        vlSelf->Top__DOT__wb_syage__DOT__bus_temp[0U] = 0U;
        vlSelf->Top__DOT__wb_syage__DOT__bus_temp[1U] = 0U;
        vlSelf->Top__DOT__wb_syage__DOT__bus_temp[2U] = 0U;
        vlSelf->Top__DOT__wb_syage__DOT__bus_temp[3U] = 0U;
    } else if (vlSelf->Top__DOT__mem_stage__DOT__valid) {
        vlSelf->Top__DOT__wb_syage__DOT__bus_temp[0U] 
            = vlSelf->Top__DOT__mem_stage__DOT__bus_temp[0U];
        vlSelf->Top__DOT__wb_syage__DOT__bus_temp[1U] 
            = vlSelf->Top__DOT__mem_stage__DOT__bus_temp[1U];
        vlSelf->Top__DOT__wb_syage__DOT__bus_temp[2U] 
            = vlSelf->Top__DOT__mem_stage__DOT__bus_temp[2U];
        vlSelf->Top__DOT__wb_syage__DOT__bus_temp[3U] 
            = vlSelf->Top__DOT__mem_stage__DOT__bus_temp[3U];
    }
    vlSelf->Top__DOT__mem_stage__DOT__valid = ((~ (IData)(vlSelf->reset)) 
                                               & (IData)(vlSelf->Top__DOT__exe_stage__DOT__valid));
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
    vlSelf->Top__DOT__id_stage__DOT__inst_add = (1U 
                                                 & (((vlSelf->Top__DOT__id_stage__DOT__decoder_op_31_26 
                                                      & (IData)(vlSelf->Top__DOT__id_stage__DOT__decoder_op_25_22)) 
                                                     & ((IData)(vlSelf->Top__DOT__id_stage__DOT__decoder_op_21_20) 
                                                        >> 1U)) 
                                                    & vlSelf->Top__DOT__id_stage__DOT__decoder_op_19_15));
    if (vlSelf->reset) {
        vlSelf->Top__DOT__mem_stage__DOT__bus_temp[0U] = 0U;
        vlSelf->Top__DOT__mem_stage__DOT__bus_temp[1U] = 0U;
        vlSelf->Top__DOT__mem_stage__DOT__bus_temp[2U] = 0U;
        vlSelf->Top__DOT__mem_stage__DOT__bus_temp[3U] = 0U;
    } else if (vlSelf->Top__DOT__exe_stage__DOT__valid) {
        vlSelf->Top__DOT__mem_stage__DOT__bus_temp[0U] 
            = vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[0U];
        vlSelf->Top__DOT__mem_stage__DOT__bus_temp[1U] 
            = (IData)((((QData)((IData)(((vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[4U] 
                                          << 0x1aU) 
                                         | (vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[3U] 
                                            >> 6U)))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[5U] 
                                                      << 0x1aU) 
                                                     | (vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[4U] 
                                                        >> 6U))))));
        vlSelf->Top__DOT__mem_stage__DOT__bus_temp[2U] 
            = (IData)(((((QData)((IData)(((vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[4U] 
                                           << 0x1aU) 
                                          | (vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[3U] 
                                             >> 6U)))) 
                         << 0x20U) | (QData)((IData)(
                                                     ((vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[5U] 
                                                       << 0x1aU) 
                                                      | (vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[4U] 
                                                         >> 6U))))) 
                       >> 0x20U));
        vlSelf->Top__DOT__mem_stage__DOT__bus_temp[3U] 
            = ((0x40U & vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[6U]) 
               | ((0x3eU & vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[3U]) 
                  | (1U & vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[3U])));
    }
    vlSelf->Top__DOT__exe_stage__DOT__valid = ((~ (IData)(vlSelf->reset)) 
                                               & (IData)(vlSelf->Top__DOT__id_stage__DOT__valid));
    if (vlSelf->reset) {
        vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[0U] = 0U;
        vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[1U] = 0U;
        vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[2U] = 0U;
        vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[3U] = 0U;
        vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[4U] = 0U;
        vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[5U] = 0U;
        vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[6U] = 0U;
        vlSelf->Top__DOT__id_stage__DOT__valid = 0U;
        vlSelf->Top__DOT__if_stage__DOT__valid = 0U;
    } else {
        if (vlSelf->Top__DOT__id_stage__DOT__valid) {
            vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[0U] 
                = ((0U != (- (IData)((1U & (vlSelf->Top__DOT__id_stage__DOT__bus_temp[5U] 
                                            >> 7U))))) 
                   & (0U != ((vlSelf->Top__DOT__exe_stage__DOT__alu__DOT__adder_a 
                              + vlSelf->Top__DOT__exe_stage__DOT__alu__DOT__adder_b) 
                             + (IData)((QData)((IData)(vlSelf->Top__DOT__exe_stage__DOT__alu__DOT__adder_cin))))));
            vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[1U] 
                = (IData)((((QData)((IData)(vlSelf->Top__DOT__id_stage__DOT__bus_temp[2U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->Top__DOT__id_stage__DOT__bus_temp[1U]))));
            vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[2U] 
                = (IData)(((((QData)((IData)(vlSelf->Top__DOT__id_stage__DOT__bus_temp[2U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->Top__DOT__id_stage__DOT__bus_temp[1U]))) 
                           >> 0x20U));
            vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[3U] 
                = ((0xffffffc0U & vlSelf->Top__DOT__id_stage__DOT__bus_temp[3U]) 
                   | ((0x3eU & vlSelf->Top__DOT__id_stage__DOT__bus_temp[3U]) 
                      | (1U & vlSelf->Top__DOT__id_stage__DOT__bus_temp[3U])));
            vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[4U] 
                = ((0x3fU & vlSelf->Top__DOT__id_stage__DOT__bus_temp[4U]) 
                   | ((IData)((((QData)((IData)(vlSelf->Top__DOT__id_stage__DOT__bus_temp[0U])) 
                                << 0x20U) | (QData)((IData)(
                                                            ((vlSelf->Top__DOT__id_stage__DOT__bus_temp[5U] 
                                                              << 0x1aU) 
                                                             | (vlSelf->Top__DOT__id_stage__DOT__bus_temp[4U] 
                                                                >> 6U)))))) 
                      << 6U));
            vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[5U] 
                = (((IData)((((QData)((IData)(vlSelf->Top__DOT__id_stage__DOT__bus_temp[0U])) 
                              << 0x20U) | (QData)((IData)(
                                                          ((vlSelf->Top__DOT__id_stage__DOT__bus_temp[5U] 
                                                            << 0x1aU) 
                                                           | (vlSelf->Top__DOT__id_stage__DOT__bus_temp[4U] 
                                                              >> 6U)))))) 
                    >> 0x1aU) | ((IData)(((((QData)((IData)(
                                                            vlSelf->Top__DOT__id_stage__DOT__bus_temp[0U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((vlSelf->Top__DOT__id_stage__DOT__bus_temp[5U] 
                                                               << 0x1aU) 
                                                              | (vlSelf->Top__DOT__id_stage__DOT__bus_temp[4U] 
                                                                 >> 6U))))) 
                                          >> 0x20U)) 
                                 << 6U));
            vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[6U] 
                = ((0x1fff80U & vlSelf->Top__DOT__id_stage__DOT__bus_temp[5U]) 
                   | ((0x40U & vlSelf->Top__DOT__id_stage__DOT__bus_temp[5U]) 
                      | ((IData)(((((QData)((IData)(
                                                    vlSelf->Top__DOT__id_stage__DOT__bus_temp[0U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((vlSelf->Top__DOT__id_stage__DOT__bus_temp[5U] 
                                                                  << 0x1aU) 
                                                                 | (vlSelf->Top__DOT__id_stage__DOT__bus_temp[4U] 
                                                                    >> 6U))))) 
                                  >> 0x20U)) >> 0x1aU)));
        }
        vlSelf->Top__DOT__id_stage__DOT__valid = vlSelf->Top__DOT__if_stage__DOT__valid;
        if ((1U & (~ (IData)(vlSelf->Top__DOT__id_stage__DOT__right_fire)))) {
            vlSelf->Top__DOT__id_stage__DOT__valid = 0U;
        }
        if (vlSelf->inst_ready) {
            vlSelf->Top__DOT__if_stage__DOT__valid = 1U;
        } else if ((1U & (~ (IData)(vlSelf->Top__DOT__if_stage__DOT__right_fire)))) {
            vlSelf->Top__DOT__if_stage__DOT__valid = 0U;
        }
    }
    vlSelf->Top__DOT__id_stage__DOT__alu_op = ((0x3ffeU 
                                                & (IData)(vlSelf->Top__DOT__id_stage__DOT__alu_op)) 
                                               | (IData)(vlSelf->Top__DOT__id_stage__DOT__inst_add));
    vlSelf->Top__DOT__id_stage__DOT__select_src1 = 
        ((2U & ((~ (IData)(vlSelf->Top__DOT__id_stage__DOT__inst_add)) 
                << 1U)) | (1U & (~ (IData)(vlSelf->Top__DOT__id_stage__DOT__inst_add))));
    vlSelf->Top__DOT__id_stage__DOT__select_src2 = 
        ((2U & ((~ (IData)(vlSelf->Top__DOT__id_stage__DOT__inst_add)) 
                << 1U)) | (1U & (~ (IData)(vlSelf->Top__DOT__id_stage__DOT__inst_add))));
    vlSelf->Top__DOT__id_stage__DOT__bus_temp[0U] = 
        __Vdly__Top__DOT__id_stage__DOT__bus_temp[0U];
    vlSelf->Top__DOT__id_stage__DOT__bus_temp[1U] = 
        __Vdly__Top__DOT__id_stage__DOT__bus_temp[1U];
    vlSelf->Top__DOT__id_stage__DOT__bus_temp[2U] = 
        __Vdly__Top__DOT__id_stage__DOT__bus_temp[2U];
    vlSelf->Top__DOT__id_stage__DOT__bus_temp[3U] = 
        __Vdly__Top__DOT__id_stage__DOT__bus_temp[3U];
    vlSelf->Top__DOT__id_stage__DOT__bus_temp[4U] = 
        __Vdly__Top__DOT__id_stage__DOT__bus_temp[4U];
    vlSelf->Top__DOT__id_stage__DOT__bus_temp[5U] = 
        __Vdly__Top__DOT__id_stage__DOT__bus_temp[5U];
    vlSelf->Top__DOT__id_stage__DOT__right_fire = vlSelf->Top__DOT__id_stage__DOT__valid;
    vlSelf->Top__DOT__if_stage__DOT__right_fire = vlSelf->Top__DOT__if_stage__DOT__valid;
}

void VTop___024root___eval(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VTop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void VTop___024root___eval_debug_assertions(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->inst_ready & 0xfeU))) {
        Verilated::overWidthError("inst_ready");}
}
#endif  // VL_DEBUG
