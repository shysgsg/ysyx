// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050368_top.h for the primary calling header

#include "Vysyx_22050368_top___024root.h"
#include "Vysyx_22050368_top__Syms.h"

//==========

VL_INLINE_OPT void Vysyx_22050368_top___024root___combo__TOP__2(Vysyx_22050368_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050368_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050368_top___024root___combo__TOP__2\n"); );
    // Body
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_sys_info_bus 
        = ((0xc0U & (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_sys_info_bus)) 
           | (6U | (((0x13U == vlSelf->inst) << 5U) 
                    | (((0x100073U == vlSelf->inst) 
                        << 4U) | ((0x73U == vlSelf->inst) 
                                  << 3U)))));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_bjp_info_bus 
        = ((0x61fU & (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_bjp_info_bus)) 
           | (((IData)((0x6063U == (0x707fU & vlSelf->inst))) 
               << 8U) | (((IData)((0x5063U == (0x707fU 
                                               & vlSelf->inst))) 
                          << 7U) | (((IData)((0x4063U 
                                              == (0x707fU 
                                                  & vlSelf->inst))) 
                                     << 6U) | ((IData)(
                                                       (0x1063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->inst))) 
                                               << 5U)))));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_csr_info_bus 
        = ((0x7fU & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_csr_info_bus) 
           | (0x7ff80U & (vlSelf->inst >> 0xdU)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_mem_info_bus 
        = ((0x7c0U & (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_mem_info_bus)) 
           | (5U | (((IData)((0x2003U == (0x707fU & vlSelf->inst))) 
                     << 5U) | (((IData)((0x1003U == 
                                         (0x707fU & vlSelf->inst))) 
                                << 4U) | ((IData)((3U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->inst))) 
                                          << 3U)))));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_mem_info_bus 
        = ((0x43fU & (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_mem_info_bus)) 
           | (((IData)((0x1023U == (0x707fU & vlSelf->inst))) 
               << 9U) | (((IData)((0x23U == (0x707fU 
                                             & vlSelf->inst))) 
                          << 8U) | (((IData)((0x5003U 
                                              == (0x707fU 
                                                  & vlSelf->inst))) 
                                     << 7U) | ((IData)(
                                                       (0x4003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->inst))) 
                                               << 6U)))));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_mem_info_bus 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_mem_info_bus)) 
           | ((IData)((0x2023U == (0x707fU & vlSelf->inst))) 
              << 0xaU));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_alu_info_bus 
        = ((0x7fffU & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_alu_info_bus) 
           | (((0x17U == (0x7fU & vlSelf->inst)) << 0x10U) 
              | ((((0x13U == (0x7fU & vlSelf->inst)) 
                   | (0x37U == (0x7fU & vlSelf->inst))) 
                  | (0x17U == (0x7fU & vlSelf->inst))) 
                 << 0xfU)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_remu 
        = ((IData)((0x7033U == (0x707fU & vlSelf->inst))) 
           & (1U == (vlSelf->inst >> 0x19U)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_mul 
        = ((IData)((0x33U == (0x707fU & vlSelf->inst))) 
           & (1U == (vlSelf->inst >> 0x19U)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_mulh 
        = ((IData)((0x1033U == (0x707fU & vlSelf->inst))) 
           & (1U == (vlSelf->inst >> 0x19U)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_mulhsu 
        = ((IData)((0x2033U == (0x707fU & vlSelf->inst))) 
           & (1U == (vlSelf->inst >> 0x19U)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_mulhu 
        = ((IData)((0x3033U == (0x707fU & vlSelf->inst))) 
           & (1U == (vlSelf->inst >> 0x19U)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_div 
        = ((IData)((0x4033U == (0x707fU & vlSelf->inst))) 
           & (1U == (vlSelf->inst >> 0x19U)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_divu 
        = ((IData)((0x5033U == (0x707fU & vlSelf->inst))) 
           & (1U == (vlSelf->inst >> 0x19U)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_rem 
        = ((IData)((0x6033U == (0x707fU & vlSelf->inst))) 
           & (1U == (vlSelf->inst >> 0x19U)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrw 
        = (IData)((0x1073U == (0x707fU & vlSelf->inst)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrs 
        = (IData)((0x2073U == (0x707fU & vlSelf->inst)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrc 
        = (IData)((0x3073U == (0x707fU & vlSelf->inst)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_fence 
        = (IData)((0xfU == (0x707fU & vlSelf->inst)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_fence_i 
        = (IData)((0x100fU == (0x707fU & vlSelf->inst)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_addi 
        = (IData)((0x13U == (0x707fU & vlSelf->inst)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_slti 
        = (IData)((0x2013U == (0x707fU & vlSelf->inst)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_slli 
        = ((IData)((0x1013U == (0x707fU & vlSelf->inst))) 
           & (0U == (vlSelf->inst >> 0x19U)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_sltiu 
        = (IData)((0x3013U == (0x707fU & vlSelf->inst)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_xori 
        = (IData)((0x4013U == (0x707fU & vlSelf->inst)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_ori 
        = (IData)((0x6013U == (0x707fU & vlSelf->inst)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_andi 
        = (IData)((0x7013U == (0x707fU & vlSelf->inst)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_srli 
        = ((IData)((0x5013U == (0x707fU & vlSelf->inst))) 
           & (0U == (vlSelf->inst >> 0x19U)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_srai 
        = ((IData)((0x5013U == (0x707fU & vlSelf->inst))) 
           & (0x20U == (vlSelf->inst >> 0x19U)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_jalr 
        = (IData)((0x67U == (0x707fU & vlSelf->inst)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrci 
        = (IData)((0x7073U == (0x707fU & vlSelf->inst)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrwi 
        = (IData)((0x5073U == (0x707fU & vlSelf->inst)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrsi 
        = (IData)((0x6073U == (0x707fU & vlSelf->inst)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_muldiv_info_bus 
        = ((0x3ffU & (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_muldiv_info_bus)) 
           | ((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_remu) 
              << 0xaU));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_muldiv_info_bus 
        = ((0x7c0U & (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_muldiv_info_bus)) 
           | (3U | (((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_mulhsu) 
                     << 5U) | (((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_mulh) 
                                << 4U) | ((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_mul) 
                                          << 3U)))));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_type_muldiv 
        = ((((((((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_mul) 
                 | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_mulh)) 
                | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_mulhsu)) 
               | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_mulhu)) 
              | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_div)) 
             | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_divu)) 
            | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_rem)) 
           | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_remu));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_muldiv_info_bus 
        = ((0x43fU & (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_muldiv_info_bus)) 
           | (((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_rem) 
               << 9U) | (((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_divu) 
                          << 8U) | (((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_div) 
                                     << 7U) | ((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_mulhu) 
                                               << 6U)))));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_sys_info_bus 
        = ((0x3fU & (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_sys_info_bus)) 
           | ((((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_fence) 
                | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_fence_i)) 
               << 7U) | ((0x30200073U == vlSelf->inst) 
                         << 6U)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_alu_info_bus 
        = ((0x1ffc0U & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_alu_info_bus) 
           | (1U | (((((IData)((0x33U == (0x707fU & vlSelf->inst))) 
                       & (0U == (vlSelf->inst >> 0x19U))) 
                      | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_addi)) 
                     << 5U) | (((0x17U == (0x7fU & vlSelf->inst)) 
                                << 4U) | ((0x37U == 
                                           (0x7fU & vlSelf->inst)) 
                                          << 3U)))));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_alu_info_bus 
        = ((0x1fe3fU & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_alu_info_bus) 
           | (((((IData)((0x2033U == (0x707fU & vlSelf->inst))) 
                 & (0U == (vlSelf->inst >> 0x19U))) 
                | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_slti)) 
               << 8U) | (((((IData)((0x1033U == (0x707fU 
                                                 & vlSelf->inst))) 
                            & (0U == (vlSelf->inst 
                                      >> 0x19U))) | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_slli)) 
                          << 7U) | (((IData)((0x33U 
                                              == (0x707fU 
                                                  & vlSelf->inst))) 
                                     & (0x20U == (vlSelf->inst 
                                                  >> 0x19U))) 
                                    << 6U))));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_alu_info_bus 
        = ((0x1f1ffU & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_alu_info_bus) 
           | (((((IData)((0x5033U == (0x707fU & vlSelf->inst))) 
                 & (0U == (vlSelf->inst >> 0x19U))) 
                | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_srli)) 
               << 0xbU) | (((((IData)((0x4033U == (0x707fU 
                                                   & vlSelf->inst))) 
                              & (0U == (vlSelf->inst 
                                        >> 0x19U))) 
                             | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_xori)) 
                            << 0xaU) | ((((IData)((0x3033U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->inst))) 
                                          & (0U == 
                                             (vlSelf->inst 
                                              >> 0x19U))) 
                                         | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_sltiu)) 
                                        << 9U))));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_alu_info_bus 
        = ((0x18fffU & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_alu_info_bus) 
           | (((((IData)((0x7033U == (0x707fU & vlSelf->inst))) 
                 & (0U == (vlSelf->inst >> 0x19U))) 
                | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_andi)) 
               << 0xeU) | (((((IData)((0x6033U == (0x707fU 
                                                   & vlSelf->inst))) 
                              & (0U == (vlSelf->inst 
                                        >> 0x19U))) 
                             | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_ori)) 
                            << 0xdU) | ((((IData)((0x5033U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->inst))) 
                                          & (0x20U 
                                             == (vlSelf->inst 
                                                 >> 0x19U))) 
                                         | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_srai)) 
                                        << 0xcU))));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_bjp_info_bus 
        = ((0x7e0U & (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_bjp_info_bus)) 
           | (2U | (((IData)((0x63U == (0x707fU & vlSelf->inst))) 
                     << 4U) | (((0x6fU == (0x7fU & vlSelf->inst)) 
                                | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_jalr)) 
                               << 3U))));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_bjp_info_bus 
        = ((0x1ffU & (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_bjp_info_bus)) 
           | (((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_jalr) 
               << 0xaU) | ((IData)((0x7063U == (0x707fU 
                                                & vlSelf->inst))) 
                           << 9U)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_csr_info_bus 
        = ((0x7ffe0U & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_csr_info_bus) 
           | (4U | ((((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrs) 
                      | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrsi)) 
                     << 4U) | (((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrw) 
                                | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrwi)) 
                               << 3U))));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_csr_info_bus 
        = ((0x7ff9fU & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_csr_info_bus) 
           | (((((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrwi) 
                 | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrsi)) 
                | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrci)) 
               << 6U) | (((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrc) 
                          | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrci)) 
                         << 5U)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__op_csr 
        = ((((((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrw) 
               | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrwi)) 
              | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrs)) 
             | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrsi)) 
            | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrc)) 
           | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrci));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__access_rd 
        = ((((((((0x37U == (0x7fU & vlSelf->inst)) 
                 | (0x17U == (0x7fU & vlSelf->inst))) 
                | (0x6fU == (0x7fU & vlSelf->inst))) 
               | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_jalr)) 
              | (3U == (0x7fU & vlSelf->inst))) | (0x13U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->inst))) 
            | (0x33U == (0x7fU & vlSelf->inst))) | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__op_csr));
    vlSelf->ysyx_22050368_top__DOT__rd_index = ((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__access_rd)
                                                 ? 
                                                (0x1fU 
                                                 & (vlSelf->inst 
                                                    >> 7U))
                                                 : 0U);
}

VL_INLINE_OPT void Vysyx_22050368_top___024root___sequent__TOP__3(Vysyx_22050368_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050368_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050368_top___024root___sequent__TOP__3\n"); );
    // Body
    vlSelf->pc = ((IData)(vlSelf->rst) ? 0x80000000ULL
                   : ((8U & vlSelf->ysyx_22050368_top__DOT__dec_info_bus)
                       ? (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_bjp1__DOT__op1 
                          + vlSelf->ysyx_22050368_top__DOT__dec_imm)
                       : ((1U <= (IData)(vlSelf->ysyx_22050368_top__DOT__hold_flag))
                           ? vlSelf->pc : (4ULL + vlSelf->pc))));
    if ((vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
         >> 0x1fU)) {
        vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r 
            = vlSelf->ysyx_22050368_top__DOT__rd;
    }
    if ((0x40000000U & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen)) {
        vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r 
            = vlSelf->ysyx_22050368_top__DOT__rd;
    }
    if ((0x20000000U & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen)) {
        vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r 
            = vlSelf->ysyx_22050368_top__DOT__rd;
    }
    if ((0x10000000U & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen)) {
        vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r 
            = vlSelf->ysyx_22050368_top__DOT__rd;
    }
    if ((0x8000000U & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen)) {
        vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r 
            = vlSelf->ysyx_22050368_top__DOT__rd;
    }
    if ((0x4000000U & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen)) {
        vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r 
            = vlSelf->ysyx_22050368_top__DOT__rd;
    }
    if ((0x2000000U & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen)) {
        vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r 
            = vlSelf->ysyx_22050368_top__DOT__rd;
    }
    if ((0x1000000U & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen)) {
        vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r 
            = vlSelf->ysyx_22050368_top__DOT__rd;
    }
    if ((0x800000U & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen)) {
        vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r 
            = vlSelf->ysyx_22050368_top__DOT__rd;
    }
    if ((0x400000U & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen)) {
        vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r 
            = vlSelf->ysyx_22050368_top__DOT__rd;
    }
    if ((0x200000U & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen)) {
        vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r 
            = vlSelf->ysyx_22050368_top__DOT__rd;
    }
    if ((0x100000U & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen)) {
        vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r 
            = vlSelf->ysyx_22050368_top__DOT__rd;
    }
    if ((0x80000U & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen)) {
        vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r 
            = vlSelf->ysyx_22050368_top__DOT__rd;
    }
    if ((0x40000U & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen)) {
        vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r 
            = vlSelf->ysyx_22050368_top__DOT__rd;
    }
    if ((0x20000U & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen)) {
        vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r 
            = vlSelf->ysyx_22050368_top__DOT__rd;
    }
    if ((0x10000U & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen)) {
        vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r 
            = vlSelf->ysyx_22050368_top__DOT__rd;
    }
    if ((0x8000U & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen)) {
        vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r 
            = vlSelf->ysyx_22050368_top__DOT__rd;
    }
    if ((0x4000U & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen)) {
        vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r 
            = vlSelf->ysyx_22050368_top__DOT__rd;
    }
    if ((0x2000U & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen)) {
        vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r 
            = vlSelf->ysyx_22050368_top__DOT__rd;
    }
    if ((0x1000U & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen)) {
        vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r 
            = vlSelf->ysyx_22050368_top__DOT__rd;
    }
    if ((0x800U & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen)) {
        vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r 
            = vlSelf->ysyx_22050368_top__DOT__rd;
    }
    if ((0x400U & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen)) {
        vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r 
            = vlSelf->ysyx_22050368_top__DOT__rd;
    }
    if ((0x200U & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen)) {
        vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r 
            = vlSelf->ysyx_22050368_top__DOT__rd;
    }
    if ((0x100U & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen)) {
        vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r 
            = vlSelf->ysyx_22050368_top__DOT__rd;
    }
    if ((0x80U & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen)) {
        vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r 
            = vlSelf->ysyx_22050368_top__DOT__rd;
    }
    if ((0x40U & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen)) {
        vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r 
            = vlSelf->ysyx_22050368_top__DOT__rd;
    }
    if ((0x20U & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen)) {
        vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r 
            = vlSelf->ysyx_22050368_top__DOT__rd;
    }
    if ((0x10U & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen)) {
        vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r 
            = vlSelf->ysyx_22050368_top__DOT__rd;
    }
    if ((8U & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen)) {
        vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r 
            = vlSelf->ysyx_22050368_top__DOT__rd;
    }
    if ((4U & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen)) {
        vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r 
            = vlSelf->ysyx_22050368_top__DOT__rd;
    }
    if ((2U & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen)) {
        vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r 
            = vlSelf->ysyx_22050368_top__DOT__rd;
    }
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[0x1fU] 
        = vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[0x1eU] 
        = vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[0x1dU] 
        = vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[0x1cU] 
        = vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[0x1bU] 
        = vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[0x1aU] 
        = vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[0x19U] 
        = vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[0x18U] 
        = vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[0x17U] 
        = vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[0x16U] 
        = vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[0x15U] 
        = vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[0x14U] 
        = vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[0x13U] 
        = vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[0x12U] 
        = vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[0x11U] 
        = vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[0x10U] 
        = vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[0xfU] 
        = vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[0xeU] 
        = vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[0xdU] 
        = vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[0xcU] 
        = vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[0xbU] 
        = vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[0xaU] 
        = vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[9U] 
        = vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[8U] 
        = vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[7U] 
        = vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[6U] 
        = vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[5U] 
        = vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[4U] 
        = vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[3U] 
        = vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[2U] 
        = vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[1U] 
        = vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
}

VL_INLINE_OPT void Vysyx_22050368_top___024root___combo__TOP__5(Vysyx_22050368_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050368_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050368_top___024root___combo__TOP__5\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp71;
    // Body
    vlSelf->ysyx_22050368_top__DOT__dec_info_bus = 
        (((((((- (IData)(((((0x37U == (0x7fU & vlSelf->inst)) 
                            | (0x17U == (0x7fU & vlSelf->inst))) 
                           | (0x13U == (0x7fU & vlSelf->inst))) 
                          | ((0x33U == (0x7fU & vlSelf->inst)) 
                             & (~ (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_type_muldiv)))))) 
              & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_alu_info_bus) 
             | ((- (IData)((((0x6fU == (0x7fU & vlSelf->inst)) 
                             | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_jalr)) 
                            | (0x63U == (0x7fU & vlSelf->inst))))) 
                & (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_bjp_info_bus))) 
            | ((- (IData)((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_type_muldiv))) 
               & (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_muldiv_info_bus))) 
           | ((- (IData)((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__op_csr))) 
              & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_csr_info_bus)) 
          | ((- (IData)(((3U == (0x7fU & vlSelf->inst)) 
                         | (0x23U == (0x7fU & vlSelf->inst))))) 
             & (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_mem_info_bus))) 
         | ((- (IData)(((((((0x100073U == vlSelf->inst) 
                            | (0x73U == vlSelf->inst)) 
                           | (0x13U == vlSelf->inst)) 
                          | (0x30200073U == vlSelf->inst)) 
                         | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_fence)) 
                        | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_fence_i)))) 
            & (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_sys_info_bus)));
    vlSelf->ysyx_22050368_top__DOT__dec_imm = (((((
                                                   (((- (QData)((IData)(
                                                                        ((0x37U 
                                                                          == 
                                                                          (0x7fU 
                                                                           & vlSelf->inst)) 
                                                                         | (0x17U 
                                                                            == 
                                                                            (0x7fU 
                                                                             & vlSelf->inst)))))) 
                                                     & (((QData)((IData)(
                                                                         (- (IData)(
                                                                                (vlSelf->inst 
                                                                                >> 0x1fU))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          (0xfffff000U 
                                                                           & vlSelf->inst))))) 
                                                    | ((- (QData)((IData)(
                                                                          (0x6fU 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlSelf->inst))))) 
                                                       & (((- (QData)((IData)(
                                                                              (vlSelf->inst 
                                                                               >> 0x1fU)))) 
                                                           << 0x14U) 
                                                          | (QData)((IData)(
                                                                            ((0xff000U 
                                                                              & vlSelf->inst) 
                                                                             | ((0x800U 
                                                                                & (vlSelf->inst 
                                                                                >> 9U)) 
                                                                                | (0x7feU 
                                                                                & (vlSelf->inst 
                                                                                >> 0x14U))))))))) 
                                                   | ((- (QData)((IData)(
                                                                         (0x63U 
                                                                          == 
                                                                          (0x7fU 
                                                                           & vlSelf->inst))))) 
                                                      & (((- (QData)((IData)(
                                                                             (vlSelf->inst 
                                                                              >> 0x1fU)))) 
                                                          << 0xcU) 
                                                         | (QData)((IData)(
                                                                           ((0x800U 
                                                                             & (vlSelf->inst 
                                                                                << 4U)) 
                                                                            | ((0x7e0U 
                                                                                & (vlSelf->inst 
                                                                                >> 0x14U)) 
                                                                               | (0x1eU 
                                                                                & (vlSelf->inst 
                                                                                >> 7U))))))))) 
                                                  | ((- (QData)((IData)(
                                                                        (0x23U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelf->inst))))) 
                                                     & (((- (QData)((IData)(
                                                                            (vlSelf->inst 
                                                                             >> 0x1fU)))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          ((0xfe0U 
                                                                            & (vlSelf->inst 
                                                                               >> 0x14U)) 
                                                                           | (0x1fU 
                                                                              & (vlSelf->inst 
                                                                                >> 7U)))))))) 
                                                 | ((- (QData)((IData)(
                                                                       ((((((((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_addi) 
                                                                              | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_slti)) 
                                                                             | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_sltiu)) 
                                                                            | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_xori)) 
                                                                           | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_ori)) 
                                                                          | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_andi)) 
                                                                         | (3U 
                                                                            == 
                                                                            (0x7fU 
                                                                             & vlSelf->inst))) 
                                                                        | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_jalr))))) 
                                                    & (((- (QData)((IData)(
                                                                           (vlSelf->inst 
                                                                            >> 0x1fU)))) 
                                                        << 0xcU) 
                                                       | (QData)((IData)(
                                                                         (vlSelf->inst 
                                                                          >> 0x14U)))))) 
                                                | ((- (QData)((IData)(
                                                                      (((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrwi) 
                                                                        | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrsi)) 
                                                                       | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrci))))) 
                                                   & (QData)((IData)(
                                                                     (0x1fU 
                                                                      & (vlSelf->inst 
                                                                         >> 0xfU)))))) 
                                               | ((- (QData)((IData)(
                                                                     (((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_slli) 
                                                                       | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_srli)) 
                                                                      | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_srai))))) 
                                                  & (QData)((IData)(
                                                                    (0x1fU 
                                                                     & (vlSelf->inst 
                                                                        >> 0x14U))))));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
        = ((0xfffffff9U & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen) 
           | ((((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__access_rd) 
                & (2U == (IData)(vlSelf->ysyx_22050368_top__DOT__rd_index))) 
               << 2U) | (((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__access_rd) 
                          & (1U == (IData)(vlSelf->ysyx_22050368_top__DOT__rd_index))) 
                         << 1U)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
        = ((0xffffffe7U & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen) 
           | ((((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__access_rd) 
                & (4U == (IData)(vlSelf->ysyx_22050368_top__DOT__rd_index))) 
               << 4U) | (((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__access_rd) 
                          & (3U == (IData)(vlSelf->ysyx_22050368_top__DOT__rd_index))) 
                         << 3U)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
        = ((0xffffff9fU & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen) 
           | ((((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__access_rd) 
                & (6U == (IData)(vlSelf->ysyx_22050368_top__DOT__rd_index))) 
               << 6U) | (((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__access_rd) 
                          & (5U == (IData)(vlSelf->ysyx_22050368_top__DOT__rd_index))) 
                         << 5U)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
        = ((0xfffffe7fU & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen) 
           | ((((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__access_rd) 
                & (8U == (IData)(vlSelf->ysyx_22050368_top__DOT__rd_index))) 
               << 8U) | (((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__access_rd) 
                          & (7U == (IData)(vlSelf->ysyx_22050368_top__DOT__rd_index))) 
                         << 7U)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
        = ((0xfffff9ffU & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen) 
           | ((((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__access_rd) 
                & (0xaU == (IData)(vlSelf->ysyx_22050368_top__DOT__rd_index))) 
               << 0xaU) | (((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__access_rd) 
                            & (9U == (IData)(vlSelf->ysyx_22050368_top__DOT__rd_index))) 
                           << 9U)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
        = ((0xffffe7ffU & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen) 
           | ((((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__access_rd) 
                & (0xcU == (IData)(vlSelf->ysyx_22050368_top__DOT__rd_index))) 
               << 0xcU) | (((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__access_rd) 
                            & (0xbU == (IData)(vlSelf->ysyx_22050368_top__DOT__rd_index))) 
                           << 0xbU)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
        = ((0xffff9fffU & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen) 
           | ((((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__access_rd) 
                & (0xeU == (IData)(vlSelf->ysyx_22050368_top__DOT__rd_index))) 
               << 0xeU) | (((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__access_rd) 
                            & (0xdU == (IData)(vlSelf->ysyx_22050368_top__DOT__rd_index))) 
                           << 0xdU)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
        = ((0xfffe7fffU & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen) 
           | ((((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__access_rd) 
                & (0x10U == (IData)(vlSelf->ysyx_22050368_top__DOT__rd_index))) 
               << 0x10U) | (((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__access_rd) 
                             & (0xfU == (IData)(vlSelf->ysyx_22050368_top__DOT__rd_index))) 
                            << 0xfU)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
        = ((0xfff9ffffU & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen) 
           | ((((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__access_rd) 
                & (0x12U == (IData)(vlSelf->ysyx_22050368_top__DOT__rd_index))) 
               << 0x12U) | (((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__access_rd) 
                             & (0x11U == (IData)(vlSelf->ysyx_22050368_top__DOT__rd_index))) 
                            << 0x11U)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
        = ((0xffe7ffffU & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen) 
           | ((((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__access_rd) 
                & (0x14U == (IData)(vlSelf->ysyx_22050368_top__DOT__rd_index))) 
               << 0x14U) | (((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__access_rd) 
                             & (0x13U == (IData)(vlSelf->ysyx_22050368_top__DOT__rd_index))) 
                            << 0x13U)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
        = ((0xff9fffffU & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen) 
           | ((((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__access_rd) 
                & (0x16U == (IData)(vlSelf->ysyx_22050368_top__DOT__rd_index))) 
               << 0x16U) | (((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__access_rd) 
                             & (0x15U == (IData)(vlSelf->ysyx_22050368_top__DOT__rd_index))) 
                            << 0x15U)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
        = ((0xfe7fffffU & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen) 
           | ((((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__access_rd) 
                & (0x18U == (IData)(vlSelf->ysyx_22050368_top__DOT__rd_index))) 
               << 0x18U) | (((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__access_rd) 
                             & (0x17U == (IData)(vlSelf->ysyx_22050368_top__DOT__rd_index))) 
                            << 0x17U)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
        = ((0xf9ffffffU & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen) 
           | ((((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__access_rd) 
                & (0x1aU == (IData)(vlSelf->ysyx_22050368_top__DOT__rd_index))) 
               << 0x1aU) | (((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__access_rd) 
                             & (0x19U == (IData)(vlSelf->ysyx_22050368_top__DOT__rd_index))) 
                            << 0x19U)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
        = ((0xe7ffffffU & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen) 
           | ((((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__access_rd) 
                & (0x1cU == (IData)(vlSelf->ysyx_22050368_top__DOT__rd_index))) 
               << 0x1cU) | (((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__access_rd) 
                             & (0x1bU == (IData)(vlSelf->ysyx_22050368_top__DOT__rd_index))) 
                            << 0x1bU)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
        = ((0x9fffffffU & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen) 
           | ((((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__access_rd) 
                & (0x1eU == (IData)(vlSelf->ysyx_22050368_top__DOT__rd_index))) 
               << 0x1eU) | (((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__access_rd) 
                             & (0x1dU == (IData)(vlSelf->ysyx_22050368_top__DOT__rd_index))) 
                            << 0x1dU)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
        = ((0x7fffffffU & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen) 
           | (((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__access_rd) 
               & (0x1fU == (IData)(vlSelf->ysyx_22050368_top__DOT__rd_index))) 
              << 0x1fU));
    vlSelf->ysyx_22050368_top__DOT__rs1 = vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r
        [(((((((((((((0x37U != (0x7fU & vlSelf->inst)) 
                     & (0x17U != (0x7fU & vlSelf->inst))) 
                    & (0x6fU != (0x7fU & vlSelf->inst))) 
                   & (0x73U != vlSelf->inst)) & (0x100073U 
                                                 != vlSelf->inst)) 
                 & (~ (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrwi))) 
                & (~ (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrsi))) 
               & (~ (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrci))) 
              & (0x13U != vlSelf->inst)) & (~ (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_fence))) 
            & (~ (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_fence_i))) 
           & (0x30200073U != vlSelf->inst)) ? (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 0xfU))
           : 0U)];
    vlSelf->ysyx_22050368_top__DOT__rs2 = vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r
        [((((0x33U == (0x7fU & vlSelf->inst)) | (0x23U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->inst))) 
           | (0x63U == (0x7fU & vlSelf->inst))) ? (0x1fU 
                                                   & (vlSelf->inst 
                                                      >> 0x14U))
           : 0U)];
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_bjp1__DOT__jal 
        = (IData)((8U == (0x408U & vlSelf->ysyx_22050368_top__DOT__dec_info_bus)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__result_bus[2U] 
        = (~ vlSelf->ysyx_22050368_top__DOT__rs1);
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__alu_op2 
        = ((0ULL == vlSelf->ysyx_22050368_top__DOT__rs2)
            ? vlSelf->ysyx_22050368_top__DOT__dec_imm
            : vlSelf->ysyx_22050368_top__DOT__rs2);
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_bjp1__DOT__op1 
        = (((- (QData)((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_bjp1__DOT__jal))) 
            & vlSelf->pc) | ((- (QData)((IData)((1U 
                                                 & (vlSelf->ysyx_22050368_top__DOT__dec_info_bus 
                                                    >> 0xaU))))) 
                             & vlSelf->ysyx_22050368_top__DOT__rs1));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__result_bus[0U] 
        = (vlSelf->ysyx_22050368_top__DOT__rs1 + vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__alu_op2);
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__result_bus[1U] 
        = (vlSelf->ysyx_22050368_top__DOT__rs1 - vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__alu_op2);
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__result_bus[3U] 
        = (vlSelf->ysyx_22050368_top__DOT__rs1 & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__alu_op2);
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__result_bus[4U] 
        = (vlSelf->ysyx_22050368_top__DOT__rs1 | vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__alu_op2);
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__result_bus[5U] 
        = (vlSelf->ysyx_22050368_top__DOT__rs1 ^ vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__alu_op2);
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__result_bus[6U] 
        = (QData)((IData)((1U & (IData)(((vlSelf->ysyx_22050368_top__DOT__rs1 
                                          - vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__alu_op2) 
                                         >> 0x3fU)))));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__result_bus[7U] 
        = (QData)((IData)((vlSelf->ysyx_22050368_top__DOT__rs1 
                           == vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__alu_op2)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1[7U] 
        = vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__result_bus
        [7U];
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1[6U] 
        = vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__result_bus
        [6U];
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1[5U] 
        = vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__result_bus
        [5U];
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1[4U] 
        = vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__result_bus
        [4U];
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1[3U] 
        = vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__result_bus
        [3U];
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1[2U] 
        = vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__result_bus
        [2U];
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1[1U] 
        = vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__result_bus
        [1U];
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1[0U] 
        = vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__result_bus
        [0U];
    VL_EXTEND_WQ(67,64, __Vtemp71, vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1
                 [0U]);
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[0U] 
        = (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1
                  [7U]);
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[1U] 
        = (IData)((vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1
                   [7U] >> 0x20U));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[2U] 
        = (7U | ((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1
                         [6U]) << 3U));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[3U] 
        = (((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1
                    [6U]) >> 0x1dU) | ((IData)((vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1
                                                [6U] 
                                                >> 0x20U)) 
                                       << 3U));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[4U] 
        = (0x30U | (((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1
                             [5U]) << 6U) | ((IData)(
                                                     (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1
                                                      [6U] 
                                                      >> 0x20U)) 
                                             >> 0x1dU)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[5U] 
        = (((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1
                    [5U]) >> 0x1aU) | ((IData)((vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1
                                                [5U] 
                                                >> 0x20U)) 
                                       << 6U));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[6U] 
        = (0x140U | (((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1
                              [4U]) << 9U) | ((IData)(
                                                      (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1
                                                       [5U] 
                                                       >> 0x20U)) 
                                              >> 0x1aU)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[7U] 
        = (((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1
                    [4U]) >> 0x17U) | ((IData)((vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1
                                                [4U] 
                                                >> 0x20U)) 
                                       << 9U));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[8U] 
        = (0x800U | (((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1
                              [3U]) << 0xcU) | ((IData)(
                                                        (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1
                                                         [4U] 
                                                         >> 0x20U)) 
                                                >> 0x17U)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[9U] 
        = (((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1
                    [3U]) >> 0x14U) | ((IData)((vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1
                                                [3U] 
                                                >> 0x20U)) 
                                       << 0xcU));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[0xaU] 
        = (0x3000U | (((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1
                               [2U]) << 0xfU) | ((IData)(
                                                         (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1
                                                          [3U] 
                                                          >> 0x20U)) 
                                                 >> 0x14U)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[0xbU] 
        = (((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1
                    [2U]) >> 0x11U) | ((IData)((vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1
                                                [2U] 
                                                >> 0x20U)) 
                                       << 0xfU));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[0xcU] 
        = (0x10000U | (((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1
                                [1U]) << 0x12U) | ((IData)(
                                                           (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1
                                                            [2U] 
                                                            >> 0x20U)) 
                                                   >> 0x11U)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[0xdU] 
        = (((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1
                    [1U]) >> 0xeU) | ((IData)((vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1
                                               [1U] 
                                               >> 0x20U)) 
                                      << 0x12U));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[0xeU] 
        = (0x40000U | ((__Vtemp71[0U] << 0x15U) | ((IData)(
                                                           (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1
                                                            [1U] 
                                                            >> 0x20U)) 
                                                   >> 0xeU)));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[0xfU] 
        = ((__Vtemp71[0U] >> 0xbU) | (__Vtemp71[1U] 
                                      << 0x15U));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[0x10U] 
        = ((__Vtemp71[1U] >> 0xbU) | (__Vtemp71[2U] 
                                      << 0x15U));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[0U];
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[1U];
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list[0U][2U] 
        = (7U & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[2U]);
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[3U] 
            << 0x1dU) | (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[2U] 
                         >> 3U));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[4U] 
            << 0x1dU) | (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[3U] 
                         >> 3U));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list[1U][2U] 
        = (7U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[4U] 
                 >> 3U));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[5U] 
            << 0x1aU) | (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[4U] 
                         >> 6U));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[6U] 
            << 0x1aU) | (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[5U] 
                         >> 6U));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list[2U][2U] 
        = (7U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[6U] 
                 >> 6U));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[7U] 
            << 0x17U) | (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[6U] 
                         >> 9U));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[8U] 
            << 0x17U) | (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[7U] 
                         >> 9U));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list[3U][2U] 
        = (7U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[8U] 
                 >> 9U));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list[4U][0U] 
        = ((vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[9U] 
            << 0x14U) | (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[8U] 
                         >> 0xcU));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list[4U][1U] 
        = ((vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[0xaU] 
            << 0x14U) | (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[9U] 
                         >> 0xcU));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list[4U][2U] 
        = (7U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[0xaU] 
                 >> 0xcU));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list[5U][0U] 
        = ((vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[0xbU] 
            << 0x11U) | (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[0xaU] 
                         >> 0xfU));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list[5U][1U] 
        = ((vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[0xcU] 
            << 0x11U) | (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[0xbU] 
                         >> 0xfU));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list[5U][2U] 
        = (7U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[0xcU] 
                 >> 0xfU));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list[6U][0U] 
        = ((vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[0xdU] 
            << 0xeU) | (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[0xcU] 
                        >> 0x12U));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list[6U][1U] 
        = ((vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[0xeU] 
            << 0xeU) | (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[0xdU] 
                        >> 0x12U));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list[6U][2U] 
        = (7U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[0xeU] 
                 >> 0x12U));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list[7U][0U] 
        = ((vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[0xfU] 
            << 0xbU) | (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[0xeU] 
                        >> 0x15U));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list[7U][1U] 
        = ((vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[0x10U] 
            << 0xbU) | (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[0xfU] 
                        >> 0x15U));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list[7U][2U] 
        = (7U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4[0x10U] 
                 >> 0x15U));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__key_list[0U] 
        = (7U & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__key_list[1U] 
        = (7U & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__key_list[2U] 
        = (7U & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__key_list[3U] 
        = (7U & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__key_list[4U] 
        = (7U & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list
           [4U][2U]);
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__key_list[5U] 
        = (7U & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list
           [5U][2U]);
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list
                            [6U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list
                                                                   [6U][0U])));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__key_list[6U] 
        = (7U & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list
           [6U][2U]);
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__data_list[7U] 
        = (((QData)((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list
                            [7U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list
                                                                   [7U][0U])));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__key_list[7U] 
        = (7U & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list
           [7U][2U]);
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__mode) 
                               == vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__mode) 
           == vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__mode) 
                                  == vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__mode) 
              == vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__mode) 
                                  == vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__mode) 
              == vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__mode) 
                                  == vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__mode) 
              == vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__mode) 
                                  == vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__mode) 
              == vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__mode) 
                                  == vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__mode) 
              == vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__mode) 
                                  == vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__mode) 
              == vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__mode) 
                                  == vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__key_list
                                  [7U])))) & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__mode) 
              == vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__result1 
        = ((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__hit)
            ? vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__lut_out
            : 0ULL);
    vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__alu_wbck_dat 
        = ((1U == (7U & vlSelf->ysyx_22050368_top__DOT__dec_info_bus))
            ? vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__result1
            : 0ULL);
    vlSelf->ysyx_22050368_top__DOT__rd = (((- (QData)((IData)(
                                                              (1U 
                                                               == 
                                                               (7U 
                                                                & vlSelf->ysyx_22050368_top__DOT__dec_info_bus))))) 
                                           & vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__alu_wbck_dat) 
                                          | ((- (QData)((IData)(
                                                                (2U 
                                                                 == 
                                                                 (7U 
                                                                  & vlSelf->ysyx_22050368_top__DOT__dec_info_bus))))) 
                                             & (((- (QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->ysyx_22050368_top__DOT__dec_info_bus 
                                                                        >> 3U))))) 
                                                 & (4ULL 
                                                    + vlSelf->pc)) 
                                                | ((- (QData)((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_bjp1__DOT__jal))) 
                                                   & (4ULL 
                                                      + vlSelf->pc)))));
}

void Vysyx_22050368_top___024root___eval(Vysyx_22050368_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050368_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050368_top___024root___eval\n"); );
    // Body
    Vysyx_22050368_top___024root___combo__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx_22050368_top___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Vysyx_22050368_top___024root___combo__TOP__5(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vysyx_22050368_top___024root___change_request_1(Vysyx_22050368_top___024root* vlSelf);

VL_INLINE_OPT QData Vysyx_22050368_top___024root___change_request(Vysyx_22050368_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050368_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050368_top___024root___change_request\n"); );
    // Body
    return (Vysyx_22050368_top___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vysyx_22050368_top___024root___change_request_1(Vysyx_22050368_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050368_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050368_top___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vysyx_22050368_top___024root___eval_debug_assertions(Vysyx_22050368_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050368_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050368_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
