// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTop__Syms.h"


VL_ATTR_COLD void VTop___024root__trace_init_sub__TOP__0(VTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+119,"clk", false,-1);
    tracep->declBit(c+120,"reset", false,-1);
    tracep->declBus(c+121,"inst", false,-1, 31,0);
    tracep->declBus(c+122,"PC", false,-1, 31,0);
    tracep->declBit(c+123,"pc_valid", false,-1);
    tracep->declBit(c+124,"inst_ready", false,-1);
    tracep->declBus(c+125,"rdata", false,-1, 31,0);
    tracep->declBus(c+126,"addr", false,-1, 31,0);
    tracep->declBus(c+127,"wdata", false,-1, 31,0);
    tracep->declBus(c+128,"wmask", false,-1, 3,0);
    tracep->declBit(c+129,"en", false,-1);
    tracep->pushNamePrefix("Top ");
    tracep->declBit(c+119,"clk", false,-1);
    tracep->declBit(c+120,"reset", false,-1);
    tracep->declBus(c+121,"inst", false,-1, 31,0);
    tracep->declBus(c+122,"PC", false,-1, 31,0);
    tracep->declBit(c+123,"pc_valid", false,-1);
    tracep->declBit(c+124,"inst_ready", false,-1);
    tracep->declBus(c+125,"rdata", false,-1, 31,0);
    tracep->declBus(c+126,"addr", false,-1, 31,0);
    tracep->declBus(c+127,"wdata", false,-1, 31,0);
    tracep->declBus(c+128,"wmask", false,-1, 3,0);
    tracep->declBit(c+129,"en", false,-1);
    tracep->declQuad(c+1,"if_bus", false,-1, 63,0);
    tracep->declBit(c+3,"if_right_valid", false,-1);
    tracep->declBit(c+130,"if_right_ready", false,-1);
    tracep->declArray(c+4,"id_bus", false,-1, 181,0);
    tracep->declBus(c+10,"reg_index1", false,-1, 4,0);
    tracep->declBus(c+11,"reg_index2", false,-1, 4,0);
    tracep->declBus(c+12,"reg_data1", false,-1, 31,0);
    tracep->declBus(c+13,"reg_data2", false,-1, 31,0);
    tracep->declBit(c+14,"id_right_valid", false,-1);
    tracep->declBit(c+130,"id_right_ready", false,-1);
    tracep->declArray(c+15,"ex_bus", false,-1, 212,0);
    tracep->declBit(c+22,"ex_right_valid", false,-1);
    tracep->declBit(c+130,"ex_right_ready", false,-1);
    tracep->declArray(c+23,"mem_bus", false,-1, 102,0);
    tracep->declBit(c+27,"mem_right_valid", false,-1);
    tracep->declBit(c+130,"mem_right_ready", false,-1);
    tracep->declArray(c+28,"wb_bus", false,-1, 102,0);
    tracep->declArray(c+32,"difftest_bus", false,-1, 102,0);
    tracep->declBit(c+36,"difftest_inst_valid", false,-1);
    tracep->declBus(c+37,"difftest_wreg_index", false,-1, 4,0);
    tracep->declBit(c+38,"difftest_wreg_en", false,-1);
    tracep->declBus(c+39,"difftest_Inst", false,-1, 31,0);
    tracep->declBus(c+40,"difftest_PC", false,-1, 31,0);
    tracep->declBus(c+41,"difftest_result", false,-1, 31,0);
    tracep->pushNamePrefix("Regfile ");
    tracep->declBit(c+119,"clk", false,-1);
    tracep->declBit(c+120,"reset", false,-1);
    tracep->declBus(c+10,"reg_index1", false,-1, 4,0);
    tracep->declBus(c+11,"reg_index2", false,-1, 4,0);
    tracep->declBus(c+12,"data1", false,-1, 31,0);
    tracep->declBus(c+13,"data2", false,-1, 31,0);
    tracep->declBit(c+42,"wreg_en", false,-1);
    tracep->declBus(c+43,"wdata", false,-1, 31,0);
    tracep->declBus(c+44,"wreg_index", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+45+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe_stage ");
    tracep->declBit(c+119,"clk", false,-1);
    tracep->declBit(c+120,"reset", false,-1);
    tracep->declArray(c+4,"id_ctrl_bus", false,-1, 181,0);
    tracep->declArray(c+15,"ex_ctrl_bus", false,-1, 212,0);
    tracep->declBit(c+14,"left_valid", false,-1);
    tracep->declBit(c+130,"left_ready", false,-1);
    tracep->declBit(c+22,"right_valid", false,-1);
    tracep->declBit(c+130,"right_ready", false,-1);
    tracep->declBit(c+22,"right_fire", false,-1);
    tracep->declBit(c+22,"valid", false,-1);
    tracep->declArray(c+15,"ctrl_temp_bus", false,-1, 212,0);
    tracep->declBit(c+77,"is_sign", false,-1);
    tracep->declBus(c+78,"alu_op", false,-1, 13,0);
    tracep->declBus(c+79,"Imm", false,-1, 31,0);
    tracep->declBus(c+80,"src1", false,-1, 31,0);
    tracep->declBus(c+81,"src2", false,-1, 31,0);
    tracep->declBit(c+82,"inst_valid", false,-1);
    tracep->declBus(c+83,"PC", false,-1, 31,0);
    tracep->declBit(c+84,"wreg_en", false,-1);
    tracep->declBus(c+85,"wreg_index", false,-1, 4,0);
    tracep->declBus(c+86,"Inst", false,-1, 31,0);
    tracep->declBus(c+87,"alu_result", false,-1, 31,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+78,"alu_op", false,-1, 13,0);
    tracep->declBus(c+80,"alu_src1", false,-1, 31,0);
    tracep->declBus(c+81,"alu_src2", false,-1, 31,0);
    tracep->declBus(c+87,"alu_result", false,-1, 31,0);
    tracep->declBit(c+88,"op_add", false,-1);
    tracep->declBus(c+131,"add_result", false,-1, 31,0);
    tracep->declBus(c+132,"adder_a", false,-1, 31,0);
    tracep->declBus(c+133,"adder_b", false,-1, 31,0);
    tracep->declBit(c+134,"adder_cin", false,-1);
    tracep->declBus(c+135,"adder_result", false,-1, 31,0);
    tracep->declBit(c+136,"adder_cout", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("id_stage ");
    tracep->declBit(c+119,"clk", false,-1);
    tracep->declBit(c+120,"reset", false,-1);
    tracep->declBus(c+89,"Inst", false,-1, 31,0);
    tracep->declBus(c+90,"PC", false,-1, 31,0);
    tracep->declBus(c+10,"reg_index1", false,-1, 4,0);
    tracep->declBus(c+11,"reg_index2", false,-1, 4,0);
    tracep->declBus(c+12,"reg_data1", false,-1, 31,0);
    tracep->declBus(c+13,"reg_data2", false,-1, 31,0);
    tracep->declArray(c+4,"ctrl_bus", false,-1, 181,0);
    tracep->declBit(c+3,"left_valid", false,-1);
    tracep->declBit(c+130,"left_ready", false,-1);
    tracep->declBit(c+14,"right_valid", false,-1);
    tracep->declBit(c+130,"right_ready", false,-1);
    tracep->declBit(c+14,"right_fire", false,-1);
    tracep->declBit(c+14,"valid", false,-1);
    tracep->declBus(c+91,"alu_op", false,-1, 13,0);
    tracep->declArray(c+4,"bus_temp", false,-1, 181,0);
    tracep->declBus(c+137,"Imm", false,-1, 31,0);
    tracep->declBus(c+92,"src1", false,-1, 31,0);
    tracep->declBus(c+93,"src2", false,-1, 31,0);
    tracep->declBit(c+94,"wreg_en", false,-1);
    tracep->declBus(c+95,"wreg_index", false,-1, 4,0);
    tracep->declBus(c+96,"op_31_26", false,-1, 5,0);
    tracep->declBus(c+97,"op_25_22", false,-1, 3,0);
    tracep->declBus(c+98,"op_21_20", false,-1, 1,0);
    tracep->declBus(c+99,"op_19_15", false,-1, 4,0);
    tracep->declBus(c+95,"rd", false,-1, 4,0);
    tracep->declBus(c+10,"rj", false,-1, 4,0);
    tracep->declBus(c+11,"rk", false,-1, 4,0);
    tracep->declBus(c+100,"decoder_op_31_26", false,-1, 31,0);
    tracep->declBus(c+101,"decoder_op_25_22", false,-1, 15,0);
    tracep->declBus(c+102,"decoder_op_21_20", false,-1, 3,0);
    tracep->declBus(c+103,"decoder_op_19_15", false,-1, 31,0);
    tracep->declBus(c+104,"select_src1", false,-1, 1,0);
    tracep->declBus(c+105,"select_src2", false,-1, 1,0);
    tracep->declBit(c+138,"is_sign", false,-1);
    tracep->declBit(c+138,"is_sign_extend", false,-1);
    tracep->declBit(c+94,"inst_valid", false,-1);
    tracep->declBit(c+94,"inst_add", false,-1);
    tracep->declBit(c+139,"inst_or", false,-1);
    tracep->pushNamePrefix("decoder_2_4 ");
    tracep->declBus(c+98,"in", false,-1, 1,0);
    tracep->declBus(c+102,"out", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decoder_4_16 ");
    tracep->declBus(c+97,"in", false,-1, 3,0);
    tracep->declBus(c+101,"out", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decoder_5_32_0 ");
    tracep->declBus(c+106,"in", false,-1, 4,0);
    tracep->declBus(c+100,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decoder_5_32_1 ");
    tracep->declBus(c+99,"in", false,-1, 4,0);
    tracep->declBus(c+103,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("if_stage ");
    tracep->declBit(c+119,"clk", false,-1);
    tracep->declBit(c+120,"reset", false,-1);
    tracep->declBus(c+122,"PC", false,-1, 31,0);
    tracep->declBus(c+121,"Inst", false,-1, 31,0);
    tracep->declQuad(c+1,"data_bus", false,-1, 63,0);
    tracep->declBit(c+123,"pc_valid", false,-1);
    tracep->declBit(c+124,"inst_ready", false,-1);
    tracep->declBit(c+3,"right_valid", false,-1);
    tracep->declBit(c+130,"right_ready", false,-1);
    tracep->declBus(c+107,"temp", false,-1, 31,0);
    tracep->declBit(c+3,"valid", false,-1);
    tracep->declQuad(c+1,"bus_temp", false,-1, 63,0);
    tracep->declBit(c+3,"right_fire", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_stage ");
    tracep->declBit(c+119,"clk", false,-1);
    tracep->declBit(c+120,"reset", false,-1);
    tracep->declArray(c+15,"mem_ctrl_bus", false,-1, 212,0);
    tracep->declArray(c+23,"wb_ctrl_bus", false,-1, 102,0);
    tracep->declBus(c+126,"addr", false,-1, 31,0);
    tracep->declBit(c+129,"en", false,-1);
    tracep->declBus(c+128,"wmask", false,-1, 3,0);
    tracep->declBus(c+125,"rdata", false,-1, 31,0);
    tracep->declBus(c+127,"wdata", false,-1, 31,0);
    tracep->declBit(c+22,"left_valid", false,-1);
    tracep->declBit(c+130,"left_ready", false,-1);
    tracep->declBit(c+27,"right_valid", false,-1);
    tracep->declBit(c+130,"right_ready", false,-1);
    tracep->declBit(c+27,"right_fire", false,-1);
    tracep->declBit(c+27,"valid", false,-1);
    tracep->declArray(c+23,"bus_temp", false,-1, 102,0);
    tracep->declBus(c+108,"mem_result", false,-1, 31,0);
    tracep->declBus(c+109,"alu_op", false,-1, 13,0);
    tracep->declBit(c+110,"inst_valid", false,-1);
    tracep->declBus(c+111,"Imm", false,-1, 31,0);
    tracep->declBus(c+112,"PC", false,-1, 31,0);
    tracep->declBus(c+113,"Inst", false,-1, 31,0);
    tracep->declBus(c+114,"wreg_index", false,-1, 4,0);
    tracep->declBit(c+115,"wreg_en", false,-1);
    tracep->declBus(c+116,"src1", false,-1, 31,0);
    tracep->declBus(c+117,"src2", false,-1, 31,0);
    tracep->declBus(c+108,"alu_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_syage ");
    tracep->declBit(c+119,"clk", false,-1);
    tracep->declBit(c+120,"reset", false,-1);
    tracep->declArray(c+23,"mem_ctrl_bus", false,-1, 102,0);
    tracep->declArray(c+28,"wb_ctrl_bus", false,-1, 102,0);
    tracep->declBit(c+27,"left_valid", false,-1);
    tracep->declBit(c+130,"left_ready", false,-1);
    tracep->declBit(c+118,"right_valid", false,-1);
    tracep->declBit(c+130,"right_ready", false,-1);
    tracep->declBit(c+118,"right_fire", false,-1);
    tracep->declBit(c+118,"valid", false,-1);
    tracep->declArray(c+28,"bus_temp", false,-1, 102,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VTop___024root__trace_init_top(VTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_init_top\n"); );
    // Body
    VTop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VTop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VTop___024root__trace_register(VTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VTop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VTop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VTop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTop___024root__trace_full_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_full_top_0\n"); );
    // Init
    VTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTop___024root__trace_full_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullQData(oldp+1,(vlSelf->Top__DOT__if_stage__DOT__bus_temp),64);
    bufp->fullBit(oldp+3,(vlSelf->Top__DOT__if_stage__DOT__valid));
    bufp->fullWData(oldp+4,(vlSelf->Top__DOT__id_stage__DOT__bus_temp),182);
    bufp->fullCData(oldp+10,((0x1fU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                               >> 5U)))),5);
    bufp->fullCData(oldp+11,((0x1fU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                               >> 0xaU)))),5);
    bufp->fullIData(oldp+12,(((0U == (0x1fU & (IData)(
                                                      (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                       >> 5U))))
                               ? 0U : ((((0x1fU & (IData)(
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
    bufp->fullIData(oldp+13,(((0U == (0x1fU & (IData)(
                                                      (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                       >> 0xaU))))
                               ? 0U : ((((0x1fU & (IData)(
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
    bufp->fullBit(oldp+14,(vlSelf->Top__DOT__id_stage__DOT__valid));
    bufp->fullWData(oldp+15,(vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus),213);
    bufp->fullBit(oldp+22,(vlSelf->Top__DOT__exe_stage__DOT__valid));
    bufp->fullWData(oldp+23,(vlSelf->Top__DOT__mem_stage__DOT__bus_temp),103);
    bufp->fullBit(oldp+27,(vlSelf->Top__DOT__mem_stage__DOT__valid));
    bufp->fullWData(oldp+28,(vlSelf->Top__DOT__wb_syage__DOT__bus_temp),103);
    bufp->fullWData(oldp+32,(vlSelf->Top__DOT__difftest_bus),103);
    bufp->fullBit(oldp+36,((1U & (vlSelf->Top__DOT__difftest_bus[3U] 
                                  >> 6U))));
    bufp->fullCData(oldp+37,((0x1fU & (vlSelf->Top__DOT__difftest_bus[3U] 
                                       >> 1U))),5);
    bufp->fullBit(oldp+38,((1U & vlSelf->Top__DOT__difftest_bus[3U])));
    bufp->fullIData(oldp+39,(vlSelf->Top__DOT__difftest_bus[2U]),32);
    bufp->fullIData(oldp+40,(vlSelf->Top__DOT__difftest_bus[1U]),32);
    bufp->fullIData(oldp+41,(vlSelf->Top__DOT__difftest_bus[0U]),32);
    bufp->fullBit(oldp+42,((1U & vlSelf->Top__DOT__wb_syage__DOT__bus_temp[3U])));
    bufp->fullIData(oldp+43,(vlSelf->Top__DOT__wb_syage__DOT__bus_temp[0U]),32);
    bufp->fullCData(oldp+44,((0x1fU & (vlSelf->Top__DOT__wb_syage__DOT__bus_temp[3U] 
                                       >> 1U))),5);
    bufp->fullIData(oldp+45,(vlSelf->Top__DOT__Regfile__DOT__rf[0]),32);
    bufp->fullIData(oldp+46,(vlSelf->Top__DOT__Regfile__DOT__rf[1]),32);
    bufp->fullIData(oldp+47,(vlSelf->Top__DOT__Regfile__DOT__rf[2]),32);
    bufp->fullIData(oldp+48,(vlSelf->Top__DOT__Regfile__DOT__rf[3]),32);
    bufp->fullIData(oldp+49,(vlSelf->Top__DOT__Regfile__DOT__rf[4]),32);
    bufp->fullIData(oldp+50,(vlSelf->Top__DOT__Regfile__DOT__rf[5]),32);
    bufp->fullIData(oldp+51,(vlSelf->Top__DOT__Regfile__DOT__rf[6]),32);
    bufp->fullIData(oldp+52,(vlSelf->Top__DOT__Regfile__DOT__rf[7]),32);
    bufp->fullIData(oldp+53,(vlSelf->Top__DOT__Regfile__DOT__rf[8]),32);
    bufp->fullIData(oldp+54,(vlSelf->Top__DOT__Regfile__DOT__rf[9]),32);
    bufp->fullIData(oldp+55,(vlSelf->Top__DOT__Regfile__DOT__rf[10]),32);
    bufp->fullIData(oldp+56,(vlSelf->Top__DOT__Regfile__DOT__rf[11]),32);
    bufp->fullIData(oldp+57,(vlSelf->Top__DOT__Regfile__DOT__rf[12]),32);
    bufp->fullIData(oldp+58,(vlSelf->Top__DOT__Regfile__DOT__rf[13]),32);
    bufp->fullIData(oldp+59,(vlSelf->Top__DOT__Regfile__DOT__rf[14]),32);
    bufp->fullIData(oldp+60,(vlSelf->Top__DOT__Regfile__DOT__rf[15]),32);
    bufp->fullIData(oldp+61,(vlSelf->Top__DOT__Regfile__DOT__rf[16]),32);
    bufp->fullIData(oldp+62,(vlSelf->Top__DOT__Regfile__DOT__rf[17]),32);
    bufp->fullIData(oldp+63,(vlSelf->Top__DOT__Regfile__DOT__rf[18]),32);
    bufp->fullIData(oldp+64,(vlSelf->Top__DOT__Regfile__DOT__rf[19]),32);
    bufp->fullIData(oldp+65,(vlSelf->Top__DOT__Regfile__DOT__rf[20]),32);
    bufp->fullIData(oldp+66,(vlSelf->Top__DOT__Regfile__DOT__rf[21]),32);
    bufp->fullIData(oldp+67,(vlSelf->Top__DOT__Regfile__DOT__rf[22]),32);
    bufp->fullIData(oldp+68,(vlSelf->Top__DOT__Regfile__DOT__rf[23]),32);
    bufp->fullIData(oldp+69,(vlSelf->Top__DOT__Regfile__DOT__rf[24]),32);
    bufp->fullIData(oldp+70,(vlSelf->Top__DOT__Regfile__DOT__rf[25]),32);
    bufp->fullIData(oldp+71,(vlSelf->Top__DOT__Regfile__DOT__rf[26]),32);
    bufp->fullIData(oldp+72,(vlSelf->Top__DOT__Regfile__DOT__rf[27]),32);
    bufp->fullIData(oldp+73,(vlSelf->Top__DOT__Regfile__DOT__rf[28]),32);
    bufp->fullIData(oldp+74,(vlSelf->Top__DOT__Regfile__DOT__rf[29]),32);
    bufp->fullIData(oldp+75,(vlSelf->Top__DOT__Regfile__DOT__rf[30]),32);
    bufp->fullIData(oldp+76,(vlSelf->Top__DOT__Regfile__DOT__rf[31]),32);
    bufp->fullBit(oldp+77,((1U & (vlSelf->Top__DOT__id_stage__DOT__bus_temp[5U] 
                                  >> 0x15U))));
    bufp->fullSData(oldp+78,((0x3fffU & (vlSelf->Top__DOT__id_stage__DOT__bus_temp[5U] 
                                         >> 7U))),14);
    bufp->fullIData(oldp+79,(vlSelf->Top__DOT__id_stage__DOT__bus_temp[0U]),32);
    bufp->fullIData(oldp+80,(vlSelf->Top__DOT__id_stage__DOT__bus_temp[1U]),32);
    bufp->fullIData(oldp+81,(vlSelf->Top__DOT__id_stage__DOT__bus_temp[2U]),32);
    bufp->fullBit(oldp+82,((1U & (vlSelf->Top__DOT__id_stage__DOT__bus_temp[5U] 
                                  >> 6U))));
    bufp->fullIData(oldp+83,(((vlSelf->Top__DOT__id_stage__DOT__bus_temp[5U] 
                               << 0x1aU) | (vlSelf->Top__DOT__id_stage__DOT__bus_temp[4U] 
                                            >> 6U))),32);
    bufp->fullBit(oldp+84,((1U & vlSelf->Top__DOT__id_stage__DOT__bus_temp[3U])));
    bufp->fullCData(oldp+85,((0x1fU & (vlSelf->Top__DOT__id_stage__DOT__bus_temp[3U] 
                                       >> 1U))),5);
    bufp->fullIData(oldp+86,(((vlSelf->Top__DOT__id_stage__DOT__bus_temp[4U] 
                               << 0x1aU) | (vlSelf->Top__DOT__id_stage__DOT__bus_temp[3U] 
                                            >> 6U))),32);
    bufp->fullIData(oldp+87,(((0U != (- (IData)((1U 
                                                 & (vlSelf->Top__DOT__id_stage__DOT__bus_temp[5U] 
                                                    >> 7U))))) 
                              & (0U != ((vlSelf->Top__DOT__exe_stage__DOT__alu__DOT__adder_a 
                                         + vlSelf->Top__DOT__exe_stage__DOT__alu__DOT__adder_b) 
                                        + (IData)((QData)((IData)(vlSelf->Top__DOT__exe_stage__DOT__alu__DOT__adder_cin))))))),32);
    bufp->fullBit(oldp+88,((1U & (vlSelf->Top__DOT__id_stage__DOT__bus_temp[5U] 
                                  >> 7U))));
    bufp->fullIData(oldp+89,((IData)(vlSelf->Top__DOT__if_stage__DOT__bus_temp)),32);
    bufp->fullIData(oldp+90,((IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                      >> 0x20U))),32);
    bufp->fullSData(oldp+91,(vlSelf->Top__DOT__id_stage__DOT__alu_op),14);
    bufp->fullIData(oldp+92,(((2U & (IData)(vlSelf->Top__DOT__id_stage__DOT__select_src1))
                               ? (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                          >> 0x20U))
                               : ((1U & (IData)(vlSelf->Top__DOT__id_stage__DOT__select_src1))
                                   ? vlSelf->Top__DOT__id_stage__DOT__Imm
                                   : ((0U == (0x1fU 
                                              & (IData)(
                                                        (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                         >> 5U))))
                                       ? 0U : ((((0x1fU 
                                                  & (IData)(
                                                            (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                             >> 5U))) 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->Top__DOT__wb_syage__DOT__bus_temp[3U] 
                                                     >> 1U))) 
                                                & vlSelf->Top__DOT__wb_syage__DOT__bus_temp[3U])
                                                ? vlSelf->Top__DOT__wb_syage__DOT__bus_temp[0U]
                                                : vlSelf->Top__DOT__Regfile__DOT__rf
                                               [(0x1fU 
                                                 & (IData)(
                                                           (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                            >> 5U)))]))))),32);
    bufp->fullIData(oldp+93,(((2U & (IData)(vlSelf->Top__DOT__id_stage__DOT__select_src2))
                               ? (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                          >> 0x20U))
                               : ((1U & (IData)(vlSelf->Top__DOT__id_stage__DOT__select_src2))
                                   ? vlSelf->Top__DOT__id_stage__DOT__Imm
                                   : ((0U == (0x1fU 
                                              & (IData)(
                                                        (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                         >> 0xaU))))
                                       ? 0U : ((((0x1fU 
                                                  & (IData)(
                                                            (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                             >> 0xaU))) 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->Top__DOT__wb_syage__DOT__bus_temp[3U] 
                                                     >> 1U))) 
                                                & vlSelf->Top__DOT__wb_syage__DOT__bus_temp[3U])
                                                ? vlSelf->Top__DOT__wb_syage__DOT__bus_temp[0U]
                                                : vlSelf->Top__DOT__Regfile__DOT__rf
                                               [(0x1fU 
                                                 & (IData)(
                                                           (vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                            >> 0xaU)))]))))),32);
    bufp->fullBit(oldp+94,(vlSelf->Top__DOT__id_stage__DOT__inst_add));
    bufp->fullCData(oldp+95,((0x1fU & (IData)(vlSelf->Top__DOT__if_stage__DOT__bus_temp))),5);
    bufp->fullCData(oldp+96,((0x3fU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                               >> 0x1aU)))),6);
    bufp->fullCData(oldp+97,((0xfU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                              >> 0x16U)))),4);
    bufp->fullCData(oldp+98,((3U & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                            >> 0x14U)))),2);
    bufp->fullCData(oldp+99,((0x1fU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                               >> 0xfU)))),5);
    bufp->fullIData(oldp+100,(vlSelf->Top__DOT__id_stage__DOT__decoder_op_31_26),32);
    bufp->fullSData(oldp+101,(vlSelf->Top__DOT__id_stage__DOT__decoder_op_25_22),16);
    bufp->fullCData(oldp+102,(vlSelf->Top__DOT__id_stage__DOT__decoder_op_21_20),4);
    bufp->fullIData(oldp+103,(vlSelf->Top__DOT__id_stage__DOT__decoder_op_19_15),32);
    bufp->fullCData(oldp+104,(vlSelf->Top__DOT__id_stage__DOT__select_src1),2);
    bufp->fullCData(oldp+105,(vlSelf->Top__DOT__id_stage__DOT__select_src2),2);
    bufp->fullCData(oldp+106,((0x1fU & (IData)((vlSelf->Top__DOT__if_stage__DOT__bus_temp 
                                                >> 0x1aU)))),5);
    bufp->fullIData(oldp+107,(vlSelf->Top__DOT__if_stage__DOT__temp),32);
    bufp->fullIData(oldp+108,(vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[0U]),32);
    bufp->fullSData(oldp+109,((0x3fffU & (vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[6U] 
                                          >> 7U))),14);
    bufp->fullBit(oldp+110,((1U & (vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[6U] 
                                   >> 6U))));
    bufp->fullIData(oldp+111,(((vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[6U] 
                                << 0x1aU) | (vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[5U] 
                                             >> 6U))),32);
    bufp->fullIData(oldp+112,(((vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[5U] 
                                << 0x1aU) | (vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[4U] 
                                             >> 6U))),32);
    bufp->fullIData(oldp+113,(((vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[4U] 
                                << 0x1aU) | (vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[3U] 
                                             >> 6U))),32);
    bufp->fullCData(oldp+114,((0x1fU & (vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[3U] 
                                        >> 1U))),5);
    bufp->fullBit(oldp+115,((1U & vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[3U])));
    bufp->fullIData(oldp+116,(vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[1U]),32);
    bufp->fullIData(oldp+117,(vlSelf->Top__DOT__exe_stage__DOT__ctrl_temp_bus[2U]),32);
    bufp->fullBit(oldp+118,(vlSelf->Top__DOT__wb_syage__DOT__valid));
    bufp->fullBit(oldp+119,(vlSelf->clk));
    bufp->fullBit(oldp+120,(vlSelf->reset));
    bufp->fullIData(oldp+121,(vlSelf->inst),32);
    bufp->fullIData(oldp+122,(vlSelf->PC),32);
    bufp->fullBit(oldp+123,(vlSelf->pc_valid));
    bufp->fullBit(oldp+124,(vlSelf->inst_ready));
    bufp->fullIData(oldp+125,(vlSelf->rdata),32);
    bufp->fullIData(oldp+126,(vlSelf->addr),32);
    bufp->fullIData(oldp+127,(vlSelf->wdata),32);
    bufp->fullCData(oldp+128,(vlSelf->wmask),4);
    bufp->fullBit(oldp+129,(vlSelf->en));
    bufp->fullBit(oldp+130,(1U));
    bufp->fullIData(oldp+131,(vlSelf->Top__DOT__exe_stage__DOT__alu__DOT__add_result),32);
    bufp->fullIData(oldp+132,(vlSelf->Top__DOT__exe_stage__DOT__alu__DOT__adder_a),32);
    bufp->fullIData(oldp+133,(vlSelf->Top__DOT__exe_stage__DOT__alu__DOT__adder_b),32);
    bufp->fullBit(oldp+134,(vlSelf->Top__DOT__exe_stage__DOT__alu__DOT__adder_cin));
    bufp->fullIData(oldp+135,(((vlSelf->Top__DOT__exe_stage__DOT__alu__DOT__adder_a 
                                + vlSelf->Top__DOT__exe_stage__DOT__alu__DOT__adder_b) 
                               + (IData)((QData)((IData)(vlSelf->Top__DOT__exe_stage__DOT__alu__DOT__adder_cin))))),32);
    bufp->fullBit(oldp+136,((1U & (IData)((1ULL & (
                                                   (((QData)((IData)(vlSelf->Top__DOT__exe_stage__DOT__alu__DOT__adder_a)) 
                                                     + (QData)((IData)(vlSelf->Top__DOT__exe_stage__DOT__alu__DOT__adder_b))) 
                                                    + (QData)((IData)(vlSelf->Top__DOT__exe_stage__DOT__alu__DOT__adder_cin))) 
                                                   >> 0x20U))))));
    bufp->fullIData(oldp+137,(vlSelf->Top__DOT__id_stage__DOT__Imm),32);
    bufp->fullBit(oldp+138,(0U));
    bufp->fullBit(oldp+139,(vlSelf->Top__DOT__id_stage__DOT__inst_or));
}
