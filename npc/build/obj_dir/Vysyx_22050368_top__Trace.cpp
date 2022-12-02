// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22050368_top__Syms.h"


void Vysyx_22050368_top___024root__traceChgSub0(Vysyx_22050368_top___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx_22050368_top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22050368_top___024root* const __restrict vlSelf = static_cast<Vysyx_22050368_top___024root*>(voidSelf);
    Vysyx_22050368_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vysyx_22050368_top___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22050368_top___024root__traceChgSub0(Vysyx_22050368_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050368_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,((1U & (vlSelf->ysyx_22050368_top__DOT__dec_info_bus 
                                          >> 3U))));
            tracep->chgCData(oldp+1,(vlSelf->ysyx_22050368_top__DOT__rd_index),5);
            tracep->chgQData(oldp+2,(vlSelf->ysyx_22050368_top__DOT__rs1),64);
            tracep->chgQData(oldp+4,(vlSelf->ysyx_22050368_top__DOT__rs2),64);
            tracep->chgQData(oldp+6,(vlSelf->ysyx_22050368_top__DOT__rd),64);
            tracep->chgBit(oldp+8,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__access_rd));
            tracep->chgIData(oldp+9,(vlSelf->ysyx_22050368_top__DOT__dec_info_bus),19);
            tracep->chgQData(oldp+10,(vlSelf->ysyx_22050368_top__DOT__dec_imm),64);
            tracep->chgBit(oldp+12,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_jalr));
            tracep->chgBit(oldp+13,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_addi));
            tracep->chgBit(oldp+14,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_slti));
            tracep->chgBit(oldp+15,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_sltiu));
            tracep->chgBit(oldp+16,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_xori));
            tracep->chgBit(oldp+17,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_ori));
            tracep->chgBit(oldp+18,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_andi));
            tracep->chgBit(oldp+19,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_slli));
            tracep->chgBit(oldp+20,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_srli));
            tracep->chgBit(oldp+21,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_srai));
            tracep->chgBit(oldp+22,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_fence));
            tracep->chgBit(oldp+23,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_fence_i));
            tracep->chgBit(oldp+24,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrw));
            tracep->chgBit(oldp+25,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrs));
            tracep->chgBit(oldp+26,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrc));
            tracep->chgBit(oldp+27,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrwi));
            tracep->chgBit(oldp+28,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrsi));
            tracep->chgBit(oldp+29,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrci));
            tracep->chgBit(oldp+30,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_mul));
            tracep->chgBit(oldp+31,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_mulh));
            tracep->chgBit(oldp+32,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_mulhsu));
            tracep->chgBit(oldp+33,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_mulhu));
            tracep->chgBit(oldp+34,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_div));
            tracep->chgBit(oldp+35,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_divu));
            tracep->chgBit(oldp+36,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_rem));
            tracep->chgBit(oldp+37,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_remu));
            tracep->chgBit(oldp+38,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_type_muldiv));
            tracep->chgBit(oldp+39,(((((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_div) 
                                       | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_divu)) 
                                      | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_rem)) 
                                     | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_remu))));
            tracep->chgIData(oldp+40,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_alu_info_bus),17);
            tracep->chgSData(oldp+41,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_bjp_info_bus),11);
            tracep->chgSData(oldp+42,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_muldiv_info_bus),11);
            tracep->chgIData(oldp+43,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_csr_info_bus),19);
            tracep->chgSData(oldp+44,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_mem_info_bus),11);
            tracep->chgCData(oldp+45,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_sys_info_bus),8);
            tracep->chgBit(oldp+46,((((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrwi) 
                                      | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrsi)) 
                                     | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrci))));
            tracep->chgBit(oldp+47,((((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_slli) 
                                      | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_srli)) 
                                     | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_srai))));
            tracep->chgBit(oldp+48,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__op_csr));
            tracep->chgBit(oldp+49,((((1U == (7U & vlSelf->ysyx_22050368_top__DOT__dec_info_bus)) 
                                      & (IData)((vlSelf->ysyx_22050368_top__DOT__rs1 
                                                 >> 0x3fU))) 
                                     & (IData)((vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__alu_op2 
                                                >> 0x3fU)))));
            tracep->chgBit(oldp+50,((((1U == (7U & vlSelf->ysyx_22050368_top__DOT__dec_info_bus)) 
                                      & (IData)((vlSelf->ysyx_22050368_top__DOT__rs1 
                                                 >> 0x3eU))) 
                                     & (IData)((vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__alu_op2 
                                                >> 0x3eU)))));
            tracep->chgBit(oldp+51,((((1U == (7U & vlSelf->ysyx_22050368_top__DOT__dec_info_bus)) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (6U 
                                                     & (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__mode)))))) 
                                     & ((((1U == (7U 
                                                  & vlSelf->ysyx_22050368_top__DOT__dec_info_bus)) 
                                          & (IData)(
                                                    (vlSelf->ysyx_22050368_top__DOT__rs1 
                                                     >> 0x3eU))) 
                                         & (IData)(
                                                   (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__alu_op2 
                                                    >> 0x3eU))) 
                                        ^ (((1U == 
                                             (7U & vlSelf->ysyx_22050368_top__DOT__dec_info_bus)) 
                                            & (IData)(
                                                      (vlSelf->ysyx_22050368_top__DOT__rs1 
                                                       >> 0x3fU))) 
                                           & (IData)(
                                                     (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__alu_op2 
                                                      >> 0x3fU)))))));
            tracep->chgBit(oldp+52,((((1U == (7U & vlSelf->ysyx_22050368_top__DOT__dec_info_bus)) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (6U 
                                                     & (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__mode)))))) 
                                     & (0ULL == vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__alu_wbck_dat))));
            tracep->chgQData(oldp+53,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__alu_op2),64);
            tracep->chgBit(oldp+55,((1U == (7U & vlSelf->ysyx_22050368_top__DOT__dec_info_bus))));
            tracep->chgBit(oldp+56,((2U == (7U & vlSelf->ysyx_22050368_top__DOT__dec_info_bus))));
            tracep->chgQData(oldp+57,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__alu_wbck_dat),64);
            tracep->chgQData(oldp+59,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__result_bus[0]),64);
            tracep->chgQData(oldp+61,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__result_bus[1]),64);
            tracep->chgQData(oldp+63,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__result_bus[2]),64);
            tracep->chgQData(oldp+65,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__result_bus[3]),64);
            tracep->chgQData(oldp+67,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__result_bus[4]),64);
            tracep->chgQData(oldp+69,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__result_bus[5]),64);
            tracep->chgQData(oldp+71,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__result_bus[6]),64);
            tracep->chgQData(oldp+73,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__result_bus[7]),64);
            tracep->chgQData(oldp+75,((vlSelf->ysyx_22050368_top__DOT__rs1 
                                       - vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__alu_op2)),64);
            tracep->chgQData(oldp+77,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__result1),64);
            tracep->chgQData(oldp+79,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1[0]),64);
            tracep->chgQData(oldp+81,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1[1]),64);
            tracep->chgQData(oldp+83,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1[2]),64);
            tracep->chgQData(oldp+85,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1[3]),64);
            tracep->chgQData(oldp+87,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1[4]),64);
            tracep->chgQData(oldp+89,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1[5]),64);
            tracep->chgQData(oldp+91,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1[6]),64);
            tracep->chgQData(oldp+93,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1[7]),64);
            tracep->chgWData(oldp+95,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4),536);
            tracep->chgWData(oldp+112,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+115,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+118,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list[2]),67);
            tracep->chgWData(oldp+121,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list[3]),67);
            tracep->chgWData(oldp+124,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list[4]),67);
            tracep->chgWData(oldp+127,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list[5]),67);
            tracep->chgWData(oldp+130,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list[6]),67);
            tracep->chgWData(oldp+133,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list[7]),67);
            tracep->chgCData(oldp+136,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+137,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+138,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__key_list[2]),3);
            tracep->chgCData(oldp+139,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__key_list[3]),3);
            tracep->chgCData(oldp+140,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__key_list[4]),3);
            tracep->chgCData(oldp+141,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__key_list[5]),3);
            tracep->chgCData(oldp+142,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__key_list[6]),3);
            tracep->chgCData(oldp+143,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__key_list[7]),3);
            tracep->chgQData(oldp+144,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+146,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+148,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+150,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+152,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+154,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+156,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+158,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+160,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+162,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__hit));
            tracep->chgBit(oldp+163,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_bjp1__DOT__jal));
            tracep->chgBit(oldp+164,((1U & (vlSelf->ysyx_22050368_top__DOT__dec_info_bus 
                                            >> 0xaU))));
            tracep->chgIData(oldp+165,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen),32);
            tracep->chgBit(oldp+166,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                            >> 1U))));
            tracep->chgBit(oldp+167,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                            >> 2U))));
            tracep->chgBit(oldp+168,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                            >> 3U))));
            tracep->chgBit(oldp+169,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                            >> 4U))));
            tracep->chgBit(oldp+170,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                            >> 5U))));
            tracep->chgBit(oldp+171,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                            >> 6U))));
            tracep->chgBit(oldp+172,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                            >> 7U))));
            tracep->chgBit(oldp+173,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                            >> 8U))));
            tracep->chgBit(oldp+174,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                            >> 9U))));
            tracep->chgBit(oldp+175,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                            >> 0xaU))));
            tracep->chgBit(oldp+176,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                            >> 0xbU))));
            tracep->chgBit(oldp+177,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                            >> 0xcU))));
            tracep->chgBit(oldp+178,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                            >> 0xdU))));
            tracep->chgBit(oldp+179,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                            >> 0xeU))));
            tracep->chgBit(oldp+180,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                            >> 0xfU))));
            tracep->chgBit(oldp+181,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                            >> 0x10U))));
            tracep->chgBit(oldp+182,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                            >> 0x11U))));
            tracep->chgBit(oldp+183,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                            >> 0x12U))));
            tracep->chgBit(oldp+184,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                            >> 0x13U))));
            tracep->chgBit(oldp+185,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                            >> 0x14U))));
            tracep->chgBit(oldp+186,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                            >> 0x15U))));
            tracep->chgBit(oldp+187,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                            >> 0x16U))));
            tracep->chgBit(oldp+188,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                            >> 0x17U))));
            tracep->chgBit(oldp+189,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                            >> 0x18U))));
            tracep->chgBit(oldp+190,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                            >> 0x19U))));
            tracep->chgBit(oldp+191,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+192,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+193,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+194,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+195,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+196,((vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                      >> 0x1fU)));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+197,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r
                                       [1U]),64);
            tracep->chgQData(oldp+199,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[0]),64);
            tracep->chgQData(oldp+201,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[1]),64);
            tracep->chgQData(oldp+203,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[2]),64);
            tracep->chgQData(oldp+205,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[3]),64);
            tracep->chgQData(oldp+207,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[4]),64);
            tracep->chgQData(oldp+209,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[5]),64);
            tracep->chgQData(oldp+211,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[6]),64);
            tracep->chgQData(oldp+213,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[7]),64);
            tracep->chgQData(oldp+215,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[8]),64);
            tracep->chgQData(oldp+217,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[9]),64);
            tracep->chgQData(oldp+219,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[10]),64);
            tracep->chgQData(oldp+221,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[11]),64);
            tracep->chgQData(oldp+223,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[12]),64);
            tracep->chgQData(oldp+225,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[13]),64);
            tracep->chgQData(oldp+227,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[14]),64);
            tracep->chgQData(oldp+229,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[15]),64);
            tracep->chgQData(oldp+231,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[16]),64);
            tracep->chgQData(oldp+233,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[17]),64);
            tracep->chgQData(oldp+235,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[18]),64);
            tracep->chgQData(oldp+237,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[19]),64);
            tracep->chgQData(oldp+239,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[20]),64);
            tracep->chgQData(oldp+241,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[21]),64);
            tracep->chgQData(oldp+243,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[22]),64);
            tracep->chgQData(oldp+245,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[23]),64);
            tracep->chgQData(oldp+247,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[24]),64);
            tracep->chgQData(oldp+249,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[25]),64);
            tracep->chgQData(oldp+251,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[26]),64);
            tracep->chgQData(oldp+253,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[27]),64);
            tracep->chgQData(oldp+255,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[28]),64);
            tracep->chgQData(oldp+257,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[29]),64);
            tracep->chgQData(oldp+259,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[30]),64);
            tracep->chgQData(oldp+261,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[31]),64);
            tracep->chgQData(oldp+263,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
            tracep->chgQData(oldp+265,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
            tracep->chgQData(oldp+267,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
            tracep->chgQData(oldp+269,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
            tracep->chgQData(oldp+271,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
            tracep->chgQData(oldp+273,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
            tracep->chgQData(oldp+275,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
            tracep->chgQData(oldp+277,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
            tracep->chgQData(oldp+279,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
            tracep->chgQData(oldp+281,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
            tracep->chgQData(oldp+283,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
            tracep->chgQData(oldp+285,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
            tracep->chgQData(oldp+287,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
            tracep->chgQData(oldp+289,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
            tracep->chgQData(oldp+291,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
            tracep->chgQData(oldp+293,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
            tracep->chgQData(oldp+295,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
            tracep->chgQData(oldp+297,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
            tracep->chgQData(oldp+299,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
            tracep->chgQData(oldp+301,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
            tracep->chgQData(oldp+303,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
            tracep->chgQData(oldp+305,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
            tracep->chgQData(oldp+307,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
            tracep->chgQData(oldp+309,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
            tracep->chgQData(oldp+311,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
            tracep->chgQData(oldp+313,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
            tracep->chgQData(oldp+315,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
            tracep->chgQData(oldp+317,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
            tracep->chgQData(oldp+319,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
            tracep->chgQData(oldp+321,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
            tracep->chgQData(oldp+323,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
        }
        tracep->chgBit(oldp+325,(vlSelf->clk));
        tracep->chgBit(oldp+326,(vlSelf->rst));
        tracep->chgIData(oldp+327,(vlSelf->inst),32);
        tracep->chgQData(oldp+328,(vlSelf->pc),64);
        tracep->chgBit(oldp+330,(vlSelf->success_flag));
        tracep->chgQData(oldp+331,(((((- (QData)((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_bjp1__DOT__jal))) 
                                      & vlSelf->pc) 
                                     | ((- (QData)((IData)(
                                                           (1U 
                                                            & (vlSelf->ysyx_22050368_top__DOT__dec_info_bus 
                                                               >> 0xaU))))) 
                                        & vlSelf->ysyx_22050368_top__DOT__rs1)) 
                                    + vlSelf->ysyx_22050368_top__DOT__dec_imm)),64);
        tracep->chgCData(oldp+333,((((((((((((((0x37U 
                                                != 
                                                (0x7fU 
                                                 & vlSelf->inst)) 
                                               & (0x17U 
                                                  != 
                                                  (0x7fU 
                                                   & vlSelf->inst))) 
                                              & (0x6fU 
                                                 != 
                                                 (0x7fU 
                                                  & vlSelf->inst))) 
                                             & (0x73U 
                                                != vlSelf->inst)) 
                                            & (0x100073U 
                                               != vlSelf->inst)) 
                                           & (~ (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrwi))) 
                                          & (~ (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrsi))) 
                                         & (~ (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrci))) 
                                        & (0x13U != vlSelf->inst)) 
                                       & (~ (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_fence))) 
                                      & (~ (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_fence_i))) 
                                     & (0x30200073U 
                                        != vlSelf->inst))
                                     ? (0x1fU & (vlSelf->inst 
                                                 >> 0xfU))
                                     : 0U)),5);
        tracep->chgCData(oldp+334,(((((0x33U == (0x7fU 
                                                 & vlSelf->inst)) 
                                      | (0x23U == (0x7fU 
                                                   & vlSelf->inst))) 
                                     | (0x63U == (0x7fU 
                                                  & vlSelf->inst)))
                                     ? (0x1fU & (vlSelf->inst 
                                                 >> 0x14U))
                                     : 0U)),5);
        tracep->chgCData(oldp+335,((0x7fU & vlSelf->inst)),7);
        tracep->chgCData(oldp+336,((7U & (vlSelf->inst 
                                          >> 0xcU))),3);
        tracep->chgCData(oldp+337,((vlSelf->inst >> 0x19U)),7);
        tracep->chgCData(oldp+338,((0x1fU & (vlSelf->inst 
                                             >> 7U))),5);
        tracep->chgCData(oldp+339,((0x1fU & (vlSelf->inst 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+340,((0x1fU & (vlSelf->inst 
                                             >> 0x14U))),5);
        tracep->chgSData(oldp+341,((vlSelf->inst >> 0x14U)),12);
        tracep->chgIData(oldp+342,((vlSelf->inst >> 0xcU)),20);
        tracep->chgBit(oldp+343,((0x37U == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+344,((0x17U == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+345,((0x6fU == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+346,((0x67U == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+347,((0x63U == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+348,((3U == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+349,((0x23U == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+350,((0x13U == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+351,((0x33U == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+352,((0xfU == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+353,((0x73U == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+354,((0U == (7U & (vlSelf->inst 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+355,((1U == (7U & (vlSelf->inst 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+356,((2U == (7U & (vlSelf->inst 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+357,((3U == (7U & (vlSelf->inst 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+358,((4U == (7U & (vlSelf->inst 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+359,((5U == (7U & (vlSelf->inst 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+360,((6U == (7U & (vlSelf->inst 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+361,((7U == (7U & (vlSelf->inst 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+362,((0U == (vlSelf->inst 
                                         >> 0x19U))));
        tracep->chgBit(oldp+363,((0x20U == (vlSelf->inst 
                                            >> 0x19U))));
        tracep->chgBit(oldp+364,((1U == (vlSelf->inst 
                                         >> 0x19U))));
        tracep->chgBit(oldp+365,((0U == (vlSelf->inst 
                                         >> 0x14U))));
        tracep->chgBit(oldp+366,((1U == (vlSelf->inst 
                                         >> 0x14U))));
        tracep->chgBit(oldp+367,((IData)((0x63U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+368,((IData)((0x1063U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+369,((IData)((0x4063U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+370,((IData)((0x5063U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+371,((IData)((0x6063U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+372,((IData)((0x7063U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+373,((IData)((3U == (0x707fU 
                                                 & vlSelf->inst)))));
        tracep->chgBit(oldp+374,((IData)((0x1003U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+375,((IData)((0x2003U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+376,((IData)((0x4003U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+377,((IData)((0x5003U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+378,((IData)((0x23U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+379,((IData)((0x1023U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+380,((IData)((0x2023U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+381,(((IData)((0x33U == 
                                           (0x707fU 
                                            & vlSelf->inst))) 
                                  & (0U == (vlSelf->inst 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+382,(((IData)((0x33U == 
                                           (0x707fU 
                                            & vlSelf->inst))) 
                                  & (0x20U == (vlSelf->inst 
                                               >> 0x19U)))));
        tracep->chgBit(oldp+383,(((IData)((0x1033U 
                                           == (0x707fU 
                                               & vlSelf->inst))) 
                                  & (0U == (vlSelf->inst 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+384,(((IData)((0x2033U 
                                           == (0x707fU 
                                               & vlSelf->inst))) 
                                  & (0U == (vlSelf->inst 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+385,(((IData)((0x3033U 
                                           == (0x707fU 
                                               & vlSelf->inst))) 
                                  & (0U == (vlSelf->inst 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+386,(((IData)((0x4033U 
                                           == (0x707fU 
                                               & vlSelf->inst))) 
                                  & (0U == (vlSelf->inst 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+387,(((IData)((0x5033U 
                                           == (0x707fU 
                                               & vlSelf->inst))) 
                                  & (0U == (vlSelf->inst 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+388,(((IData)((0x5033U 
                                           == (0x707fU 
                                               & vlSelf->inst))) 
                                  & (0x20U == (vlSelf->inst 
                                               >> 0x19U)))));
        tracep->chgBit(oldp+389,(((IData)((0x6033U 
                                           == (0x707fU 
                                               & vlSelf->inst))) 
                                  & (0U == (vlSelf->inst 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+390,(((IData)((0x7033U 
                                           == (0x707fU 
                                               & vlSelf->inst))) 
                                  & (0U == (vlSelf->inst 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+391,((0x73U == vlSelf->inst)));
        tracep->chgBit(oldp+392,((0x100073U == vlSelf->inst)));
        tracep->chgBit(oldp+393,((0x13U == vlSelf->inst)));
        tracep->chgBit(oldp+394,((0x30200073U == vlSelf->inst)));
        tracep->chgQData(oldp+395,((((QData)((IData)(
                                                     (- (IData)(
                                                                (vlSelf->inst 
                                                                 >> 0x1fU))))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (0xfffff000U 
                                                                  & vlSelf->inst))))),64);
        tracep->chgQData(oldp+397,((((- (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x1fU)))) 
                                     << 0x14U) | (QData)((IData)(
                                                                 ((0xff000U 
                                                                   & vlSelf->inst) 
                                                                  | ((0x800U 
                                                                      & (vlSelf->inst 
                                                                         >> 9U)) 
                                                                     | (0x7feU 
                                                                        & (vlSelf->inst 
                                                                           >> 0x14U)))))))),64);
        tracep->chgQData(oldp+399,((((- (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                ((0x800U 
                                                                  & (vlSelf->inst 
                                                                     << 4U)) 
                                                                 | ((0x7e0U 
                                                                     & (vlSelf->inst 
                                                                        >> 0x14U)) 
                                                                    | (0x1eU 
                                                                       & (vlSelf->inst 
                                                                          >> 7U)))))))),64);
        tracep->chgQData(oldp+401,((((- (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                ((0xfe0U 
                                                                  & (vlSelf->inst 
                                                                     >> 0x14U)) 
                                                                 | (0x1fU 
                                                                    & (vlSelf->inst 
                                                                       >> 7U))))))),64);
        tracep->chgQData(oldp+403,((((- (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                (vlSelf->inst 
                                                                 >> 0x14U))))),64);
        tracep->chgQData(oldp+405,((QData)((IData)(
                                                   (0x1fU 
                                                    & (vlSelf->inst 
                                                       >> 0xfU))))),64);
        tracep->chgQData(oldp+407,((QData)((IData)(
                                                   (0x1fU 
                                                    & (vlSelf->inst 
                                                       >> 0x14U))))),64);
        tracep->chgBit(oldp+409,(((0x37U == (0x7fU 
                                             & vlSelf->inst)) 
                                  | (0x17U == (0x7fU 
                                               & vlSelf->inst)))));
        tracep->chgBit(oldp+410,(((((((((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_addi) 
                                        | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_slti)) 
                                       | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_sltiu)) 
                                      | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_xori)) 
                                     | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_ori)) 
                                    | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_andi)) 
                                   | (3U == (0x7fU 
                                             & vlSelf->inst))) 
                                  | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_jalr))));
        tracep->chgBit(oldp+411,(((((0x37U == (0x7fU 
                                               & vlSelf->inst)) 
                                    | (0x17U == (0x7fU 
                                                 & vlSelf->inst))) 
                                   | (0x13U == (0x7fU 
                                                & vlSelf->inst))) 
                                  | ((0x33U == (0x7fU 
                                                & vlSelf->inst)) 
                                     & (~ (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_type_muldiv))))));
        tracep->chgBit(oldp+412,((((0x6fU == (0x7fU 
                                              & vlSelf->inst)) 
                                   | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_jalr)) 
                                  | (0x63U == (0x7fU 
                                               & vlSelf->inst)))));
        tracep->chgBit(oldp+413,(((((((0x100073U == vlSelf->inst) 
                                      | (0x73U == vlSelf->inst)) 
                                     | (0x13U == vlSelf->inst)) 
                                    | (0x30200073U 
                                       == vlSelf->inst)) 
                                   | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_fence)) 
                                  | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_fence_i))));
        tracep->chgBit(oldp+414,(((3U == (0x7fU & vlSelf->inst)) 
                                  | (0x23U == (0x7fU 
                                               & vlSelf->inst)))));
        tracep->chgBit(oldp+415,(((((((((((((0x37U 
                                             != (0x7fU 
                                                 & vlSelf->inst)) 
                                            & (0x17U 
                                               != (0x7fU 
                                                   & vlSelf->inst))) 
                                           & (0x6fU 
                                              != (0x7fU 
                                                  & vlSelf->inst))) 
                                          & (0x73U 
                                             != vlSelf->inst)) 
                                         & (0x100073U 
                                            != vlSelf->inst)) 
                                        & (~ (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrwi))) 
                                       & (~ (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrsi))) 
                                      & (~ (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrci))) 
                                     & (0x13U != vlSelf->inst)) 
                                    & (~ (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_fence))) 
                                   & (~ (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_fence_i))) 
                                  & (0x30200073U != vlSelf->inst))));
        tracep->chgBit(oldp+416,((((0x33U == (0x7fU 
                                              & vlSelf->inst)) 
                                   | (0x23U == (0x7fU 
                                                & vlSelf->inst))) 
                                  | (0x63U == (0x7fU 
                                               & vlSelf->inst)))));
        tracep->chgQData(oldp+417,((((- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelf->ysyx_22050368_top__DOT__dec_info_bus 
                                                            >> 3U))))) 
                                     & (4ULL + vlSelf->pc)) 
                                    | ((- (QData)((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_bjp1__DOT__jal))) 
                                       & (4ULL + vlSelf->pc)))),64);
        tracep->chgQData(oldp+419,((((- (QData)((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_bjp1__DOT__jal))) 
                                     & vlSelf->pc) 
                                    | ((- (QData)((IData)(
                                                          (1U 
                                                           & (vlSelf->ysyx_22050368_top__DOT__dec_info_bus 
                                                              >> 0xaU))))) 
                                       & vlSelf->ysyx_22050368_top__DOT__rs1))),64);
    }
}

void Vysyx_22050368_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vysyx_22050368_top___024root* const __restrict vlSelf = static_cast<Vysyx_22050368_top___024root*>(voidSelf);
    Vysyx_22050368_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
