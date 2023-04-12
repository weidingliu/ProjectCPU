// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTop__Syms.h"


void VTop___024root__trace_chg_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_chg_top_0\n"); );
    // Init
    VTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VTop___024root__trace_chg_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgQData(oldp+0,(vlSelf->Top__DOT__if_stage__DOT__bus_temp),64);
        bufp->chgBit(oldp+2,(vlSelf->Top__DOT__if_stage__DOT__valid));
        bufp->chgWData(oldp+3,(vlSelf->Top__DOT__id_stage__DOT__bus_temp),182);
        bufp->chgCData(oldp+9,((0x1fU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                 >> 5U)))),5);
        bufp->chgCData(oldp+10,((0x1fU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                  >> 0xaU)))),5);
        bufp->chgIData(oldp+11,(((0U == (0x1fU & (IData)(
                                                         (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                          >> 5U))))
                                  ? 0U : ((((0x1fU 
                                             & (IData)(
                                                       (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                        >> 5U))) 
                                            == (0x1fU 
                                                & (vlSelf->Top__DOT__wb_syage__DOT__bus_temp[3U] 
                                                   >> 1U))) 
                                           & vlSelf->Top__DOT__wb_syage__DOT__bus_temp[3U])
                                           ? vlSelf->Top__DOT__wb_syage__DOT__bus_temp[0U]
                                           : vlSelf->Top__DOT__Regfile__DOT__rf
                                          [(0x1fU & (IData)(
                                                            (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                             >> 5U)))]))),32);
        bufp->chgIData(oldp+12,(((0U == (0x1fU & (IData)(
                                                         (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                          >> 0xaU))))
                                  ? 0U : ((((0x1fU 
                                             & (IData)(
                                                       (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                        >> 0xaU))) 
                                            == (0x1fU 
                                                & (vlSelf->Top__DOT__wb_syage__DOT__bus_temp[3U] 
                                                   >> 1U))) 
                                           & vlSelf->Top__DOT__wb_syage__DOT__bus_temp[3U])
                                           ? vlSelf->Top__DOT__wb_syage__DOT__bus_temp[0U]
                                           : vlSelf->Top__DOT__Regfile__DOT__rf
                                          [(0x1fU & (IData)(
                                                            (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                             >> 0xaU)))]))),32);
        bufp->chgBit(oldp+13,(vlSelf->Top__DOT__id_stage__DOT__valid));
        bufp->chgWData(oldp+14,(vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus),213);
        bufp->chgBit(oldp+21,(vlSelf->Top__DOT__exe_stage__DOT__valid));
        bufp->chgWData(oldp+22,(vlSelf->Top__DOT__mem_stage__DOT__bus_temp),103);
        bufp->chgBit(oldp+26,(vlSelf->Top__DOT__mem_stage__DOT__valid));
        bufp->chgWData(oldp+27,(vlSelf->Top__DOT__wb_syage__DOT__bus_temp),103);
        bufp->chgWData(oldp+31,(vlSelf->Top__DOT__difftest_bus),103);
        bufp->chgBit(oldp+35,((1U & (vlSelf->Top__DOT__difftest_bus[3U] 
                                     >> 6U))));
        bufp->chgCData(oldp+36,((0x1fU & (vlSelf->Top__DOT__difftest_bus[3U] 
                                          >> 1U))),5);
        bufp->chgBit(oldp+37,((1U & vlSelf->Top__DOT__difftest_bus[3U])));
        bufp->chgIData(oldp+38,(vlSelf->Top__DOT__difftest_bus[2U]),32);
        bufp->chgIData(oldp+39,(vlSelf->Top__DOT__difftest_bus[1U]),32);
        bufp->chgIData(oldp+40,(vlSelf->Top__DOT__difftest_bus[0U]),32);
        bufp->chgBit(oldp+41,((1U & vlSelf->Top__DOT__wb_syage__DOT__bus_temp[3U])));
        bufp->chgIData(oldp+42,(vlSelf->Top__DOT__wb_syage__DOT__bus_temp[0U]),32);
        bufp->chgCData(oldp+43,((0x1fU & (vlSelf->Top__DOT__wb_syage__DOT__bus_temp[3U] 
                                          >> 1U))),5);
        bufp->chgIData(oldp+44,(vlSelf->Top__DOT__Regfile__DOT__rf[0]),32);
        bufp->chgIData(oldp+45,(vlSelf->Top__DOT__Regfile__DOT__rf[1]),32);
        bufp->chgIData(oldp+46,(vlSelf->Top__DOT__Regfile__DOT__rf[2]),32);
        bufp->chgIData(oldp+47,(vlSelf->Top__DOT__Regfile__DOT__rf[3]),32);
        bufp->chgIData(oldp+48,(vlSelf->Top__DOT__Regfile__DOT__rf[4]),32);
        bufp->chgIData(oldp+49,(vlSelf->Top__DOT__Regfile__DOT__rf[5]),32);
        bufp->chgIData(oldp+50,(vlSelf->Top__DOT__Regfile__DOT__rf[6]),32);
        bufp->chgIData(oldp+51,(vlSelf->Top__DOT__Regfile__DOT__rf[7]),32);
        bufp->chgIData(oldp+52,(vlSelf->Top__DOT__Regfile__DOT__rf[8]),32);
        bufp->chgIData(oldp+53,(vlSelf->Top__DOT__Regfile__DOT__rf[9]),32);
        bufp->chgIData(oldp+54,(vlSelf->Top__DOT__Regfile__DOT__rf[10]),32);
        bufp->chgIData(oldp+55,(vlSelf->Top__DOT__Regfile__DOT__rf[11]),32);
        bufp->chgIData(oldp+56,(vlSelf->Top__DOT__Regfile__DOT__rf[12]),32);
        bufp->chgIData(oldp+57,(vlSelf->Top__DOT__Regfile__DOT__rf[13]),32);
        bufp->chgIData(oldp+58,(vlSelf->Top__DOT__Regfile__DOT__rf[14]),32);
        bufp->chgIData(oldp+59,(vlSelf->Top__DOT__Regfile__DOT__rf[15]),32);
        bufp->chgIData(oldp+60,(vlSelf->Top__DOT__Regfile__DOT__rf[16]),32);
        bufp->chgIData(oldp+61,(vlSelf->Top__DOT__Regfile__DOT__rf[17]),32);
        bufp->chgIData(oldp+62,(vlSelf->Top__DOT__Regfile__DOT__rf[18]),32);
        bufp->chgIData(oldp+63,(vlSelf->Top__DOT__Regfile__DOT__rf[19]),32);
        bufp->chgIData(oldp+64,(vlSelf->Top__DOT__Regfile__DOT__rf[20]),32);
        bufp->chgIData(oldp+65,(vlSelf->Top__DOT__Regfile__DOT__rf[21]),32);
        bufp->chgIData(oldp+66,(vlSelf->Top__DOT__Regfile__DOT__rf[22]),32);
        bufp->chgIData(oldp+67,(vlSelf->Top__DOT__Regfile__DOT__rf[23]),32);
        bufp->chgIData(oldp+68,(vlSelf->Top__DOT__Regfile__DOT__rf[24]),32);
        bufp->chgIData(oldp+69,(vlSelf->Top__DOT__Regfile__DOT__rf[25]),32);
        bufp->chgIData(oldp+70,(vlSelf->Top__DOT__Regfile__DOT__rf[26]),32);
        bufp->chgIData(oldp+71,(vlSelf->Top__DOT__Regfile__DOT__rf[27]),32);
        bufp->chgIData(oldp+72,(vlSelf->Top__DOT__Regfile__DOT__rf[28]),32);
        bufp->chgIData(oldp+73,(vlSelf->Top__DOT__Regfile__DOT__rf[29]),32);
        bufp->chgIData(oldp+74,(vlSelf->Top__DOT__Regfile__DOT__rf[30]),32);
        bufp->chgIData(oldp+75,(vlSelf->Top__DOT__Regfile__DOT__rf[31]),32);
        bufp->chgBit(oldp+76,((1U & (vlSelf->Top__DOT__id_stage__DOT__bus_temp[5U] 
                                     >> 0x15U))));
        bufp->chgSData(oldp+77,((0x3fffU & (vlSelf->Top__DOT__id_stage__DOT__bus_temp[5U] 
                                            >> 7U))),14);
        bufp->chgIData(oldp+78,(vlSelf->Top__DOT__id_stage__DOT__bus_temp[0U]),32);
        bufp->chgIData(oldp+79,(vlSelf->Top__DOT__id_stage__DOT__bus_temp[1U]),32);
        bufp->chgIData(oldp+80,(vlSelf->Top__DOT__id_stage__DOT__bus_temp[2U]),32);
        bufp->chgBit(oldp+81,((1U & (vlSelf->Top__DOT__id_stage__DOT__bus_temp[5U] 
                                     >> 6U))));
        bufp->chgIData(oldp+82,(((vlSelf->Top__DOT__id_stage__DOT__bus_temp[5U] 
                                  << 0x1aU) | (vlSelf->Top__DOT__id_stage__DOT__bus_temp[4U] 
                                               >> 6U))),32);
        bufp->chgBit(oldp+83,((1U & vlSelf->Top__DOT__id_stage__DOT__bus_temp[3U])));
        bufp->chgCData(oldp+84,((0x1fU & (vlSelf->Top__DOT__id_stage__DOT__bus_temp[3U] 
                                          >> 1U))),5);
        bufp->chgIData(oldp+85,(((vlSelf->Top__DOT__id_stage__DOT__bus_temp[4U] 
                                  << 0x1aU) | (vlSelf->Top__DOT__id_stage__DOT__bus_temp[3U] 
                                               >> 6U))),32);
        bufp->chgIData(oldp+86,(((0U != (- (IData)(
                                                   (1U 
                                                    & (vlSelf->Top__DOT__id_stage__DOT__bus_temp[5U] 
                                                       >> 7U))))) 
                                 & (0U != ((vlSelf->Top__DOT__exe_stage__DOT__alu__DOT__adder_a 
                                            + vlSelf->Top__DOT__exe_stage__DOT__alu__DOT__adder_b) 
                                           + (IData)((QData)((IData)(vlSelf->Top__DOT__exe_stage__DOT__alu__DOT__adder_cin))))))),32);
        bufp->chgBit(oldp+87,((1U & (vlSelf->Top__DOT__id_stage__DOT__bus_temp[5U] 
                                     >> 7U))));
        bufp->chgIData(oldp+88,((IData)(vlSelf->Top__DOT__if_stage__DOT__bus_temp)),32);
        bufp->chgIData(oldp+89,((IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                         >> 0x20U))),32);
        bufp->chgSData(oldp+90,(vlSelf->Top__DOT__id_stage__DOT__alu_op),14);
        bufp->chgIData(oldp+91,(((2U & (IData)(vlSelf->Top__DOT__id_stage__DOT__select_src1))
                                  ? (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                             >> 0x20U))
                                  : ((1U & (IData)(vlSelf->Top__DOT__id_stage__DOT__select_src1))
                                      ? vlSelf->Top__DOT__id_stage__DOT__Imm
                                      : ((0U == (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                            >> 5U))))
                                          ? 0U : ((
                                                   ((0x1fU 
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
                                                              >> 5U)))]))))),32);
        bufp->chgIData(oldp+92,(((2U & (IData)(vlSelf->Top__DOT__id_stage__DOT__select_src2))
                                  ? (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                             >> 0x20U))
                                  : ((1U & (IData)(vlSelf->Top__DOT__id_stage__DOT__select_src2))
                                      ? vlSelf->Top__DOT__id_stage__DOT__Imm
                                      : ((0U == (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                            >> 0xaU))))
                                          ? 0U : ((
                                                   ((0x1fU 
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
                                                              >> 0xaU)))]))))),32);
        bufp->chgBit(oldp+93,(vlSelf->Top__DOT__id_stage__DOT__inst_add));
        bufp->chgCData(oldp+94,((0x1fU & (IData)(vlSelf->Top__DOT__if_stage__DOT__bus_temp))),5);
        bufp->chgCData(oldp+95,((0x3fU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                  >> 0x1aU)))),6);
        bufp->chgCData(oldp+96,((0xfU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                 >> 0x16U)))),4);
        bufp->chgCData(oldp+97,((3U & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                               >> 0x14U)))),2);
        bufp->chgCData(oldp+98,((0x1fU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                  >> 0xfU)))),5);
        bufp->chgIData(oldp+99,(vlSelf->Top__DOT__id_stage__DOT__decoder_op_31_26),32);
        bufp->chgSData(oldp+100,(vlSelf->Top__DOT__id_stage__DOT__decoder_op_25_22),16);
        bufp->chgCData(oldp+101,(vlSelf->Top__DOT__id_stage__DOT__decoder_op_21_20),4);
        bufp->chgIData(oldp+102,(vlSelf->Top__DOT__id_stage__DOT__decoder_op_19_15),32);
        bufp->chgCData(oldp+103,(vlSelf->Top__DOT__id_stage__DOT__select_src1),2);
        bufp->chgCData(oldp+104,(vlSelf->Top__DOT__id_stage__DOT__select_src2),2);
        bufp->chgCData(oldp+105,((0x1fU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                   >> 0x1aU)))),5);
        bufp->chgIData(oldp+106,(vlSelf->Top__DOT__if_stage__DOT__temp),32);
        bufp->chgIData(oldp+107,(vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[0U]),32);
        bufp->chgSData(oldp+108,((0x3fffU & (vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[6U] 
                                             >> 7U))),14);
        bufp->chgBit(oldp+109,((1U & (vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[6U] 
                                      >> 6U))));
        bufp->chgIData(oldp+110,(((vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[6U] 
                                   << 0x1aU) | (vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[5U] 
                                                >> 6U))),32);
        bufp->chgIData(oldp+111,(((vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[5U] 
                                   << 0x1aU) | (vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[4U] 
                                                >> 6U))),32);
        bufp->chgIData(oldp+112,(((vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[4U] 
                                   << 0x1aU) | (vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[3U] 
                                                >> 6U))),32);
        bufp->chgCData(oldp+113,((0x1fU & (vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[3U] 
                                           >> 1U))),5);
        bufp->chgBit(oldp+114,((1U & vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[3U])));
        bufp->chgIData(oldp+115,(vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[1U]),32);
        bufp->chgIData(oldp+116,(vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[2U]),32);
        bufp->chgBit(oldp+117,(vlSelf->Top__DOT__wb_syage__DOT__valid));
    }
    bufp->chgBit(oldp+118,(vlSelf->clk));
    bufp->chgBit(oldp+119,(vlSelf->reset));
    bufp->chgIData(oldp+120,(vlSelf->inst),32);
    bufp->chgIData(oldp+121,(vlSelf->PC),32);
    bufp->chgBit(oldp+122,(vlSelf->pc_valid));
    bufp->chgBit(oldp+123,(vlSelf->inst_ready));
    bufp->chgIData(oldp+124,(vlSelf->rdata),32);
    bufp->chgIData(oldp+125,(vlSelf->addr),32);
    bufp->chgIData(oldp+126,(vlSelf->wdata),32);
    bufp->chgCData(oldp+127,(vlSelf->wmask),4);
    bufp->chgBit(oldp+128,(vlSelf->en));
}

void VTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_cleanup\n"); );
    // Init
    VTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
