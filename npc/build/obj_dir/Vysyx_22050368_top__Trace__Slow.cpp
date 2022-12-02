// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22050368_top__Syms.h"


void Vysyx_22050368_top___024root__traceInitSub0(Vysyx_22050368_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22050368_top___024root__traceInitTop(Vysyx_22050368_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050368_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22050368_top___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vysyx_22050368_top___024root__traceInitSub0(Vysyx_22050368_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050368_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+326,"clk", false,-1);
        tracep->declBit(c+327,"rst", false,-1);
        tracep->declBus(c+328,"inst", false,-1, 31,0);
        tracep->declQuad(c+329,"pc", false,-1, 63,0);
        tracep->declBit(c+331,"success_flag", false,-1);
        tracep->declBit(c+326,"ysyx_22050368_top clk", false,-1);
        tracep->declBit(c+327,"ysyx_22050368_top rst", false,-1);
        tracep->declBus(c+328,"ysyx_22050368_top inst", false,-1, 31,0);
        tracep->declQuad(c+329,"ysyx_22050368_top pc", false,-1, 63,0);
        tracep->declBit(c+331,"ysyx_22050368_top success_flag", false,-1);
        tracep->declBit(c+1,"ysyx_22050368_top jump_flag", false,-1);
        tracep->declQuad(c+332,"ysyx_22050368_top jump_addr", false,-1, 63,0);
        tracep->declBus(c+422,"ysyx_22050368_top hold_flag", false,-1, 2,0);
        tracep->declBus(c+334,"ysyx_22050368_top rs1_index", false,-1, 4,0);
        tracep->declBus(c+335,"ysyx_22050368_top rs2_index", false,-1, 4,0);
        tracep->declBus(c+2,"ysyx_22050368_top rd_index", false,-1, 4,0);
        tracep->declQuad(c+3,"ysyx_22050368_top rs1", false,-1, 63,0);
        tracep->declQuad(c+5,"ysyx_22050368_top rs2", false,-1, 63,0);
        tracep->declQuad(c+7,"ysyx_22050368_top rd", false,-1, 63,0);
        tracep->declBit(c+423,"ysyx_22050368_top rs1_en", false,-1);
        tracep->declBit(c+424,"ysyx_22050368_top rs2_en", false,-1);
        tracep->declBit(c+9,"ysyx_22050368_top rd_en", false,-1);
        tracep->declBus(c+10,"ysyx_22050368_top dec_info_bus", false,-1, 18,0);
        tracep->declQuad(c+11,"ysyx_22050368_top dec_imm", false,-1, 63,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_pc_reg1 clk", false,-1);
        tracep->declBit(c+327,"ysyx_22050368_top ysyx_22050368_pc_reg1 rst", false,-1);
        tracep->declBit(c+1,"ysyx_22050368_top ysyx_22050368_pc_reg1 jump_flag_i", false,-1);
        tracep->declQuad(c+332,"ysyx_22050368_top ysyx_22050368_pc_reg1 jump_addr_i", false,-1, 63,0);
        tracep->declBus(c+422,"ysyx_22050368_top ysyx_22050368_pc_reg1 hold_flag_i", false,-1, 2,0);
        tracep->declQuad(c+329,"ysyx_22050368_top ysyx_22050368_pc_reg1 pc_o", false,-1, 63,0);
        tracep->declBus(c+328,"ysyx_22050368_top ysyx_22050368_idu1 inst_i", false,-1, 31,0);
        tracep->declQuad(c+329,"ysyx_22050368_top ysyx_22050368_idu1 inst_addr_i", false,-1, 63,0);
        tracep->declBus(c+328,"ysyx_22050368_top ysyx_22050368_idu1 inst_o", false,-1, 31,0);
        tracep->declBus(c+10,"ysyx_22050368_top ysyx_22050368_idu1 dec_info_bus_o", false,-1, 18,0);
        tracep->declQuad(c+11,"ysyx_22050368_top ysyx_22050368_idu1 dec_imm_o", false,-1, 63,0);
        tracep->declQuad(c+329,"ysyx_22050368_top ysyx_22050368_idu1 dec_pc_o", false,-1, 63,0);
        tracep->declBus(c+334,"ysyx_22050368_top ysyx_22050368_idu1 rs1_raddr_o", false,-1, 4,0);
        tracep->declBus(c+335,"ysyx_22050368_top ysyx_22050368_idu1 rs2_raddr_o", false,-1, 4,0);
        tracep->declBus(c+2,"ysyx_22050368_top ysyx_22050368_idu1 rd_waddr_o", false,-1, 4,0);
        tracep->declBit(c+9,"ysyx_22050368_top ysyx_22050368_idu1 rd_we_o", false,-1);
        tracep->declBus(c+336,"ysyx_22050368_top ysyx_22050368_idu1 opcode", false,-1, 6,0);
        tracep->declBus(c+337,"ysyx_22050368_top ysyx_22050368_idu1 funct3", false,-1, 2,0);
        tracep->declBus(c+338,"ysyx_22050368_top ysyx_22050368_idu1 funct7", false,-1, 6,0);
        tracep->declBus(c+339,"ysyx_22050368_top ysyx_22050368_idu1 rd", false,-1, 4,0);
        tracep->declBus(c+340,"ysyx_22050368_top ysyx_22050368_idu1 rs1", false,-1, 4,0);
        tracep->declBus(c+341,"ysyx_22050368_top ysyx_22050368_idu1 rs2", false,-1, 4,0);
        tracep->declBus(c+342,"ysyx_22050368_top ysyx_22050368_idu1 type_i_imm_11_0", false,-1, 11,0);
        tracep->declBus(c+338,"ysyx_22050368_top ysyx_22050368_idu1 type_s_imm_11_5", false,-1, 6,0);
        tracep->declBus(c+339,"ysyx_22050368_top ysyx_22050368_idu1 type_s_imm_4_0", false,-1, 4,0);
        tracep->declBus(c+338,"ysyx_22050368_top ysyx_22050368_idu1 type_b_imm_12_10_5", false,-1, 6,0);
        tracep->declBus(c+339,"ysyx_22050368_top ysyx_22050368_idu1 type_b_imm_4_1_11", false,-1, 4,0);
        tracep->declBus(c+343,"ysyx_22050368_top ysyx_22050368_idu1 type_u_imm_31_12", false,-1, 19,0);
        tracep->declBus(c+343,"ysyx_22050368_top ysyx_22050368_idu1 type_j_imm_31_12", false,-1, 19,0);
        tracep->declBit(c+344,"ysyx_22050368_top ysyx_22050368_idu1 opcode_0110111", false,-1);
        tracep->declBit(c+345,"ysyx_22050368_top ysyx_22050368_idu1 opcode_0010111", false,-1);
        tracep->declBit(c+346,"ysyx_22050368_top ysyx_22050368_idu1 opcode_1101111", false,-1);
        tracep->declBit(c+347,"ysyx_22050368_top ysyx_22050368_idu1 opcode_1100111", false,-1);
        tracep->declBit(c+348,"ysyx_22050368_top ysyx_22050368_idu1 opcode_1100011", false,-1);
        tracep->declBit(c+349,"ysyx_22050368_top ysyx_22050368_idu1 opcode_0000011", false,-1);
        tracep->declBit(c+350,"ysyx_22050368_top ysyx_22050368_idu1 opcode_0100011", false,-1);
        tracep->declBit(c+351,"ysyx_22050368_top ysyx_22050368_idu1 opcode_0010011", false,-1);
        tracep->declBit(c+352,"ysyx_22050368_top ysyx_22050368_idu1 opcode_0110011", false,-1);
        tracep->declBit(c+353,"ysyx_22050368_top ysyx_22050368_idu1 opcode_0001111", false,-1);
        tracep->declBit(c+354,"ysyx_22050368_top ysyx_22050368_idu1 opcode_1110011", false,-1);
        tracep->declBit(c+355,"ysyx_22050368_top ysyx_22050368_idu1 funct3_000", false,-1);
        tracep->declBit(c+356,"ysyx_22050368_top ysyx_22050368_idu1 funct3_001", false,-1);
        tracep->declBit(c+357,"ysyx_22050368_top ysyx_22050368_idu1 funct3_010", false,-1);
        tracep->declBit(c+358,"ysyx_22050368_top ysyx_22050368_idu1 funct3_011", false,-1);
        tracep->declBit(c+359,"ysyx_22050368_top ysyx_22050368_idu1 funct3_100", false,-1);
        tracep->declBit(c+360,"ysyx_22050368_top ysyx_22050368_idu1 funct3_101", false,-1);
        tracep->declBit(c+361,"ysyx_22050368_top ysyx_22050368_idu1 funct3_110", false,-1);
        tracep->declBit(c+362,"ysyx_22050368_top ysyx_22050368_idu1 funct3_111", false,-1);
        tracep->declBit(c+363,"ysyx_22050368_top ysyx_22050368_idu1 funct7_0000000", false,-1);
        tracep->declBit(c+364,"ysyx_22050368_top ysyx_22050368_idu1 funct7_0100000", false,-1);
        tracep->declBit(c+365,"ysyx_22050368_top ysyx_22050368_idu1 funct7_0000001", false,-1);
        tracep->declBit(c+366,"ysyx_22050368_top ysyx_22050368_idu1 type_i_imm_000000000000", false,-1);
        tracep->declBit(c+367,"ysyx_22050368_top ysyx_22050368_idu1 type_i_imm_000000000001", false,-1);
        tracep->declBit(c+344,"ysyx_22050368_top ysyx_22050368_idu1 inst_lui", false,-1);
        tracep->declBit(c+345,"ysyx_22050368_top ysyx_22050368_idu1 inst_auipc", false,-1);
        tracep->declBit(c+346,"ysyx_22050368_top ysyx_22050368_idu1 inst_jal", false,-1);
        tracep->declBit(c+13,"ysyx_22050368_top ysyx_22050368_idu1 inst_jalr", false,-1);
        tracep->declBit(c+368,"ysyx_22050368_top ysyx_22050368_idu1 inst_beq", false,-1);
        tracep->declBit(c+369,"ysyx_22050368_top ysyx_22050368_idu1 inst_bne", false,-1);
        tracep->declBit(c+370,"ysyx_22050368_top ysyx_22050368_idu1 inst_blt", false,-1);
        tracep->declBit(c+371,"ysyx_22050368_top ysyx_22050368_idu1 inst_bge", false,-1);
        tracep->declBit(c+372,"ysyx_22050368_top ysyx_22050368_idu1 inst_bltu", false,-1);
        tracep->declBit(c+373,"ysyx_22050368_top ysyx_22050368_idu1 inst_bgeu", false,-1);
        tracep->declBit(c+374,"ysyx_22050368_top ysyx_22050368_idu1 inst_lb", false,-1);
        tracep->declBit(c+375,"ysyx_22050368_top ysyx_22050368_idu1 inst_lh", false,-1);
        tracep->declBit(c+376,"ysyx_22050368_top ysyx_22050368_idu1 inst_lw", false,-1);
        tracep->declBit(c+377,"ysyx_22050368_top ysyx_22050368_idu1 inst_lbu", false,-1);
        tracep->declBit(c+378,"ysyx_22050368_top ysyx_22050368_idu1 inst_lhu", false,-1);
        tracep->declBit(c+379,"ysyx_22050368_top ysyx_22050368_idu1 inst_sb", false,-1);
        tracep->declBit(c+380,"ysyx_22050368_top ysyx_22050368_idu1 inst_sh", false,-1);
        tracep->declBit(c+381,"ysyx_22050368_top ysyx_22050368_idu1 inst_sw", false,-1);
        tracep->declBit(c+14,"ysyx_22050368_top ysyx_22050368_idu1 inst_addi", false,-1);
        tracep->declBit(c+15,"ysyx_22050368_top ysyx_22050368_idu1 inst_slti", false,-1);
        tracep->declBit(c+16,"ysyx_22050368_top ysyx_22050368_idu1 inst_sltiu", false,-1);
        tracep->declBit(c+17,"ysyx_22050368_top ysyx_22050368_idu1 inst_xori", false,-1);
        tracep->declBit(c+18,"ysyx_22050368_top ysyx_22050368_idu1 inst_ori", false,-1);
        tracep->declBit(c+19,"ysyx_22050368_top ysyx_22050368_idu1 inst_andi", false,-1);
        tracep->declBit(c+20,"ysyx_22050368_top ysyx_22050368_idu1 inst_slli", false,-1);
        tracep->declBit(c+21,"ysyx_22050368_top ysyx_22050368_idu1 inst_srli", false,-1);
        tracep->declBit(c+22,"ysyx_22050368_top ysyx_22050368_idu1 inst_srai", false,-1);
        tracep->declBit(c+382,"ysyx_22050368_top ysyx_22050368_idu1 inst_add", false,-1);
        tracep->declBit(c+383,"ysyx_22050368_top ysyx_22050368_idu1 inst_sub", false,-1);
        tracep->declBit(c+384,"ysyx_22050368_top ysyx_22050368_idu1 inst_sll", false,-1);
        tracep->declBit(c+385,"ysyx_22050368_top ysyx_22050368_idu1 inst_slt", false,-1);
        tracep->declBit(c+386,"ysyx_22050368_top ysyx_22050368_idu1 inst_sltu", false,-1);
        tracep->declBit(c+387,"ysyx_22050368_top ysyx_22050368_idu1 inst_xor", false,-1);
        tracep->declBit(c+388,"ysyx_22050368_top ysyx_22050368_idu1 inst_srl", false,-1);
        tracep->declBit(c+389,"ysyx_22050368_top ysyx_22050368_idu1 inst_sra", false,-1);
        tracep->declBit(c+390,"ysyx_22050368_top ysyx_22050368_idu1 inst_or", false,-1);
        tracep->declBit(c+391,"ysyx_22050368_top ysyx_22050368_idu1 inst_and", false,-1);
        tracep->declBit(c+23,"ysyx_22050368_top ysyx_22050368_idu1 inst_fence", false,-1);
        tracep->declBit(c+392,"ysyx_22050368_top ysyx_22050368_idu1 inst_ecall", false,-1);
        tracep->declBit(c+393,"ysyx_22050368_top ysyx_22050368_idu1 inst_ebreak", false,-1);
        tracep->declBit(c+24,"ysyx_22050368_top ysyx_22050368_idu1 inst_fence_i", false,-1);
        tracep->declBit(c+25,"ysyx_22050368_top ysyx_22050368_idu1 inst_csrrw", false,-1);
        tracep->declBit(c+26,"ysyx_22050368_top ysyx_22050368_idu1 inst_csrrs", false,-1);
        tracep->declBit(c+27,"ysyx_22050368_top ysyx_22050368_idu1 inst_csrrc", false,-1);
        tracep->declBit(c+28,"ysyx_22050368_top ysyx_22050368_idu1 inst_csrrwi", false,-1);
        tracep->declBit(c+29,"ysyx_22050368_top ysyx_22050368_idu1 inst_csrrsi", false,-1);
        tracep->declBit(c+30,"ysyx_22050368_top ysyx_22050368_idu1 inst_csrrci", false,-1);
        tracep->declBit(c+31,"ysyx_22050368_top ysyx_22050368_idu1 inst_mul", false,-1);
        tracep->declBit(c+32,"ysyx_22050368_top ysyx_22050368_idu1 inst_mulh", false,-1);
        tracep->declBit(c+33,"ysyx_22050368_top ysyx_22050368_idu1 inst_mulhsu", false,-1);
        tracep->declBit(c+34,"ysyx_22050368_top ysyx_22050368_idu1 inst_mulhu", false,-1);
        tracep->declBit(c+35,"ysyx_22050368_top ysyx_22050368_idu1 inst_div", false,-1);
        tracep->declBit(c+36,"ysyx_22050368_top ysyx_22050368_idu1 inst_divu", false,-1);
        tracep->declBit(c+37,"ysyx_22050368_top ysyx_22050368_idu1 inst_rem", false,-1);
        tracep->declBit(c+38,"ysyx_22050368_top ysyx_22050368_idu1 inst_remu", false,-1);
        tracep->declBit(c+394,"ysyx_22050368_top ysyx_22050368_idu1 inst_nop", false,-1);
        tracep->declBit(c+395,"ysyx_22050368_top ysyx_22050368_idu1 inst_mret", false,-1);
        tracep->declBit(c+349,"ysyx_22050368_top ysyx_22050368_idu1 inst_type_load", false,-1);
        tracep->declBit(c+350,"ysyx_22050368_top ysyx_22050368_idu1 inst_type_store", false,-1);
        tracep->declBit(c+348,"ysyx_22050368_top ysyx_22050368_idu1 inst_type_branch", false,-1);
        tracep->declBit(c+39,"ysyx_22050368_top ysyx_22050368_idu1 inst_type_muldiv", false,-1);
        tracep->declBit(c+40,"ysyx_22050368_top ysyx_22050368_idu1 inst_type_div", false,-1);
        tracep->declBus(c+41,"ysyx_22050368_top ysyx_22050368_idu1 dec_alu_info_bus", false,-1, 16,0);
        tracep->declBus(c+42,"ysyx_22050368_top ysyx_22050368_idu1 dec_bjp_info_bus", false,-1, 10,0);
        tracep->declBus(c+43,"ysyx_22050368_top ysyx_22050368_idu1 dec_muldiv_info_bus", false,-1, 10,0);
        tracep->declBus(c+44,"ysyx_22050368_top ysyx_22050368_idu1 dec_csr_info_bus", false,-1, 18,0);
        tracep->declBus(c+45,"ysyx_22050368_top ysyx_22050368_idu1 dec_mem_info_bus", false,-1, 10,0);
        tracep->declBus(c+46,"ysyx_22050368_top ysyx_22050368_idu1 dec_sys_info_bus", false,-1, 7,0);
        tracep->declQuad(c+396,"ysyx_22050368_top ysyx_22050368_idu1 inst_u_type_imm", false,-1, 63,0);
        tracep->declQuad(c+398,"ysyx_22050368_top ysyx_22050368_idu1 inst_j_type_imm", false,-1, 63,0);
        tracep->declQuad(c+400,"ysyx_22050368_top ysyx_22050368_idu1 inst_b_type_imm", false,-1, 63,0);
        tracep->declQuad(c+402,"ysyx_22050368_top ysyx_22050368_idu1 inst_s_type_imm", false,-1, 63,0);
        tracep->declQuad(c+404,"ysyx_22050368_top ysyx_22050368_idu1 inst_i_type_imm", false,-1, 63,0);
        tracep->declQuad(c+406,"ysyx_22050368_top ysyx_22050368_idu1 inst_csr_type_imm", false,-1, 63,0);
        tracep->declQuad(c+408,"ysyx_22050368_top ysyx_22050368_idu1 inst_shift_type_imm", false,-1, 63,0);
        tracep->declBit(c+410,"ysyx_22050368_top ysyx_22050368_idu1 inst_sel_u_imm", false,-1);
        tracep->declBit(c+346,"ysyx_22050368_top ysyx_22050368_idu1 inst_sel_j_imm", false,-1);
        tracep->declBit(c+348,"ysyx_22050368_top ysyx_22050368_idu1 inst_sel_b_imm", false,-1);
        tracep->declBit(c+350,"ysyx_22050368_top ysyx_22050368_idu1 inst_sel_s_imm", false,-1);
        tracep->declBit(c+411,"ysyx_22050368_top ysyx_22050368_idu1 inst_sel_i_imm", false,-1);
        tracep->declBit(c+47,"ysyx_22050368_top ysyx_22050368_idu1 inst_sel_csr_imm", false,-1);
        tracep->declBit(c+48,"ysyx_22050368_top ysyx_22050368_idu1 inst_sel_shift_imm", false,-1);
        tracep->declBit(c+412,"ysyx_22050368_top ysyx_22050368_idu1 op_alu", false,-1);
        tracep->declBit(c+413,"ysyx_22050368_top ysyx_22050368_idu1 op_bjp", false,-1);
        tracep->declBit(c+39,"ysyx_22050368_top ysyx_22050368_idu1 op_muldiv", false,-1);
        tracep->declBit(c+49,"ysyx_22050368_top ysyx_22050368_idu1 op_csr", false,-1);
        tracep->declBit(c+414,"ysyx_22050368_top ysyx_22050368_idu1 op_sys", false,-1);
        tracep->declBit(c+415,"ysyx_22050368_top ysyx_22050368_idu1 op_mem", false,-1);
        tracep->declBit(c+416,"ysyx_22050368_top ysyx_22050368_idu1 access_rs1", false,-1);
        tracep->declBit(c+417,"ysyx_22050368_top ysyx_22050368_idu1 access_rs2", false,-1);
        tracep->declBit(c+9,"ysyx_22050368_top ysyx_22050368_idu1 access_rd", false,-1);
        tracep->declQuad(c+329,"ysyx_22050368_top ysyx_22050368_exu1 pc", false,-1, 63,0);
        tracep->declBit(c+425,"ysyx_22050368_top ysyx_22050368_exu1 rs1_en", false,-1);
        tracep->declBit(c+426,"ysyx_22050368_top ysyx_22050368_exu1 rs2_en", false,-1);
        tracep->declBit(c+9,"ysyx_22050368_top ysyx_22050368_exu1 rd_en", false,-1);
        tracep->declQuad(c+3,"ysyx_22050368_top ysyx_22050368_exu1 rs1", false,-1, 63,0);
        tracep->declQuad(c+5,"ysyx_22050368_top ysyx_22050368_exu1 rs2", false,-1, 63,0);
        tracep->declQuad(c+11,"ysyx_22050368_top ysyx_22050368_exu1 dec_imm", false,-1, 63,0);
        tracep->declBus(c+10,"ysyx_22050368_top ysyx_22050368_exu1 dec_info_bus", false,-1, 18,0);
        tracep->declBus(c+422,"ysyx_22050368_top ysyx_22050368_exu1 hold_flag_o", false,-1, 2,0);
        tracep->declBit(c+1,"ysyx_22050368_top ysyx_22050368_exu1 jump_flag", false,-1);
        tracep->declQuad(c+332,"ysyx_22050368_top ysyx_22050368_exu1 jump_addr", false,-1, 63,0);
        tracep->declQuad(c+7,"ysyx_22050368_top ysyx_22050368_exu1 wbck_dest_dat", false,-1, 63,0);
        tracep->declBit(c+50,"ysyx_22050368_top ysyx_22050368_exu1 signbit_OF", false,-1);
        tracep->declBit(c+51,"ysyx_22050368_top ysyx_22050368_exu1 highestbit_OF", false,-1);
        tracep->declBit(c+52,"ysyx_22050368_top ysyx_22050368_exu1 overflow_flag", false,-1);
        tracep->declBit(c+53,"ysyx_22050368_top ysyx_22050368_exu1 zero_flag", false,-1);
        tracep->declBus(c+427,"ysyx_22050368_top ysyx_22050368_exu1 mode", false,-1, 2,0);
        tracep->declQuad(c+3,"ysyx_22050368_top ysyx_22050368_exu1 alu_op1", false,-1, 63,0);
        tracep->declQuad(c+54,"ysyx_22050368_top ysyx_22050368_exu1 alu_op2", false,-1, 63,0);
        tracep->declBit(c+56,"ysyx_22050368_top ysyx_22050368_exu1 alu_flag", false,-1);
        tracep->declBit(c+57,"ysyx_22050368_top ysyx_22050368_exu1 bjp_flag", false,-1);
        tracep->declQuad(c+58,"ysyx_22050368_top ysyx_22050368_exu1 alu_wbck_dat", false,-1, 63,0);
        tracep->declQuad(c+418,"ysyx_22050368_top ysyx_22050368_exu1 bjp_wbck_dat", false,-1, 63,0);
        tracep->declBit(c+56,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_alu1 en", false,-1);
        tracep->declQuad(c+3,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_alu1 op1", false,-1, 63,0);
        tracep->declQuad(c+54,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_alu1 op2", false,-1, 63,0);
        tracep->declBus(c+427,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_alu1 mode", false,-1, 2,0);
        tracep->declQuad(c+58,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_alu1 result", false,-1, 63,0);
        tracep->declBit(c+50,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_alu1 signbit_OF", false,-1);
        tracep->declBit(c+51,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_alu1 highestbit_OF", false,-1);
        tracep->declBit(c+52,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_alu1 overflow_flag", false,-1);
        tracep->declBit(c+53,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_alu1 zero_flag", false,-1);
        {int i; for (i=0; i<8; i++) {
                tracep->declQuad(c+60+i*2,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_alu1 result_bus", true,(i+0), 63,0);}}
        tracep->declQuad(c+76,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_alu1 cmp", false,-1, 63,0);
        tracep->declQuad(c+78,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_alu1 result1", false,-1, 63,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declQuad(c+80+i*2,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_alu1 alu_output_mux a", true,(i+0), 63,0);}}
        tracep->declBus(c+427,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_alu1 alu_output_mux s", false,-1, 2,0);
        tracep->declQuad(c+78,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_alu1 alu_output_mux y", false,-1, 63,0);
        tracep->declBus(c+428,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_alu1 alu_output_mux i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+429,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_alu1 alu_output_mux i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+430,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_alu1 alu_output_mux i0 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+78,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_alu1 alu_output_mux i0 out", false,-1, 63,0);
        tracep->declBus(c+427,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_alu1 alu_output_mux i0 key", false,-1, 2,0);
        tracep->declQuad(c+431,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_alu1 alu_output_mux i0 default_out", false,-1, 63,0);
        tracep->declArray(c+96,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_alu1 alu_output_mux i0 lut", false,-1, 535,0);
        tracep->declBus(c+428,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_alu1 alu_output_mux i0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+429,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_alu1 alu_output_mux i0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+430,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_alu1 alu_output_mux i0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+433,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_alu1 alu_output_mux i0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+78,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_alu1 alu_output_mux i0 i0 out", false,-1, 63,0);
        tracep->declBus(c+427,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_alu1 alu_output_mux i0 i0 key", false,-1, 2,0);
        tracep->declQuad(c+431,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_alu1 alu_output_mux i0 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+96,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_alu1 alu_output_mux i0 i0 lut", false,-1, 535,0);
        tracep->declBus(c+434,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_alu1 alu_output_mux i0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declArray(c+113+i*3,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_alu1 alu_output_mux i0 i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+137+i*1,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_alu1 alu_output_mux i0 i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declQuad(c+145+i*2,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_alu1 alu_output_mux i0 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+161,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_alu1 alu_output_mux i0 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+163,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_alu1 alu_output_mux i0 i0 hit", false,-1);
        tracep->declBus(c+435,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_alu1 alu_output_mux i0 i0 i", false,-1, 31,0);
        tracep->declBit(c+57,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_bjp1 en", false,-1);
        tracep->declQuad(c+329,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_bjp1 pc", false,-1, 63,0);
        tracep->declBus(c+10,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_bjp1 dec_info_bus", false,-1, 18,0);
        tracep->declQuad(c+3,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_bjp1 rs1", false,-1, 63,0);
        tracep->declQuad(c+5,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_bjp1 rs2", false,-1, 63,0);
        tracep->declQuad(c+11,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_bjp1 dec_imm", false,-1, 63,0);
        tracep->declQuad(c+418,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_bjp1 rd", false,-1, 63,0);
        tracep->declBit(c+1,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_bjp1 jump_flag", false,-1);
        tracep->declQuad(c+332,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_bjp1 jump_addr", false,-1, 63,0);
        tracep->declBit(c+1,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_bjp1 jal_or_jalr", false,-1);
        tracep->declBit(c+164,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_bjp1 jal", false,-1);
        tracep->declBit(c+165,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_bjp1 jalr", false,-1);
        tracep->declQuad(c+420,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_bjp1 op1", false,-1, 63,0);
        tracep->declQuad(c+11,"ysyx_22050368_top ysyx_22050368_exu1 ysyx_22050368_bjp1 op2", false,-1, 63,0);
        tracep->declBus(c+334,"ysyx_22050368_top ysyx_22050368_regfile1 read_src1_idx", false,-1, 4,0);
        tracep->declBus(c+335,"ysyx_22050368_top ysyx_22050368_regfile1 read_src2_idx", false,-1, 4,0);
        tracep->declQuad(c+3,"ysyx_22050368_top ysyx_22050368_regfile1 read_src1_dat", false,-1, 63,0);
        tracep->declQuad(c+5,"ysyx_22050368_top ysyx_22050368_regfile1 read_src2_dat", false,-1, 63,0);
        tracep->declBit(c+9,"ysyx_22050368_top ysyx_22050368_regfile1 wbck_dest_wen", false,-1);
        tracep->declBus(c+2,"ysyx_22050368_top ysyx_22050368_regfile1 wbck_dest_idx", false,-1, 4,0);
        tracep->declQuad(c+7,"ysyx_22050368_top ysyx_22050368_regfile1 wbck_dest_dat", false,-1, 63,0);
        tracep->declQuad(c+198,"ysyx_22050368_top ysyx_22050368_regfile1 x1_r", false,-1, 63,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 clk", false,-1);
        tracep->declBit(c+327,"ysyx_22050368_top ysyx_22050368_regfile1 rst", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+200+i*2,"ysyx_22050368_top ysyx_22050368_regfile1 rf_r", true,(i+0), 63,0);}}
        tracep->declBus(c+166,"ysyx_22050368_top ysyx_22050368_regfile1 rf_wen", false,-1, 31,0);
        tracep->declBus(c+430,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[1] rfno0 rf_dffl DW", false,-1, 31,0);
        tracep->declBit(c+167,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[1] rfno0 rf_dffl lden", false,-1);
        tracep->declQuad(c+7,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[1] rfno0 rf_dffl dnxt", false,-1, 63,0);
        tracep->declQuad(c+264,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[1] rfno0 rf_dffl qout", false,-1, 63,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[1] rfno0 rf_dffl clk", false,-1);
        tracep->declQuad(c+264,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[1] rfno0 rf_dffl qout_r", false,-1, 63,0);
        tracep->declBus(c+433,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[1] rfno0 rf_dffl sirv_gnrl_xchecker DW", false,-1, 31,0);
        tracep->declBus(c+167,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[1] rfno0 rf_dffl sirv_gnrl_xchecker i_dat", false,-1, 0,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[1] rfno0 rf_dffl sirv_gnrl_xchecker clk", false,-1);
        tracep->declBus(c+430,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[2] rfno0 rf_dffl DW", false,-1, 31,0);
        tracep->declBit(c+168,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[2] rfno0 rf_dffl lden", false,-1);
        tracep->declQuad(c+7,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[2] rfno0 rf_dffl dnxt", false,-1, 63,0);
        tracep->declQuad(c+266,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[2] rfno0 rf_dffl qout", false,-1, 63,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[2] rfno0 rf_dffl clk", false,-1);
        tracep->declQuad(c+266,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[2] rfno0 rf_dffl qout_r", false,-1, 63,0);
        tracep->declBus(c+433,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[2] rfno0 rf_dffl sirv_gnrl_xchecker DW", false,-1, 31,0);
        tracep->declBus(c+168,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[2] rfno0 rf_dffl sirv_gnrl_xchecker i_dat", false,-1, 0,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[2] rfno0 rf_dffl sirv_gnrl_xchecker clk", false,-1);
        tracep->declBus(c+430,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[3] rfno0 rf_dffl DW", false,-1, 31,0);
        tracep->declBit(c+169,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[3] rfno0 rf_dffl lden", false,-1);
        tracep->declQuad(c+7,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[3] rfno0 rf_dffl dnxt", false,-1, 63,0);
        tracep->declQuad(c+268,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[3] rfno0 rf_dffl qout", false,-1, 63,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[3] rfno0 rf_dffl clk", false,-1);
        tracep->declQuad(c+268,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[3] rfno0 rf_dffl qout_r", false,-1, 63,0);
        tracep->declBus(c+433,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[3] rfno0 rf_dffl sirv_gnrl_xchecker DW", false,-1, 31,0);
        tracep->declBus(c+169,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[3] rfno0 rf_dffl sirv_gnrl_xchecker i_dat", false,-1, 0,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[3] rfno0 rf_dffl sirv_gnrl_xchecker clk", false,-1);
        tracep->declBus(c+430,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[4] rfno0 rf_dffl DW", false,-1, 31,0);
        tracep->declBit(c+170,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[4] rfno0 rf_dffl lden", false,-1);
        tracep->declQuad(c+7,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[4] rfno0 rf_dffl dnxt", false,-1, 63,0);
        tracep->declQuad(c+270,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[4] rfno0 rf_dffl qout", false,-1, 63,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[4] rfno0 rf_dffl clk", false,-1);
        tracep->declQuad(c+270,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[4] rfno0 rf_dffl qout_r", false,-1, 63,0);
        tracep->declBus(c+433,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[4] rfno0 rf_dffl sirv_gnrl_xchecker DW", false,-1, 31,0);
        tracep->declBus(c+170,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[4] rfno0 rf_dffl sirv_gnrl_xchecker i_dat", false,-1, 0,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[4] rfno0 rf_dffl sirv_gnrl_xchecker clk", false,-1);
        tracep->declBus(c+430,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[5] rfno0 rf_dffl DW", false,-1, 31,0);
        tracep->declBit(c+171,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[5] rfno0 rf_dffl lden", false,-1);
        tracep->declQuad(c+7,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[5] rfno0 rf_dffl dnxt", false,-1, 63,0);
        tracep->declQuad(c+272,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[5] rfno0 rf_dffl qout", false,-1, 63,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[5] rfno0 rf_dffl clk", false,-1);
        tracep->declQuad(c+272,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[5] rfno0 rf_dffl qout_r", false,-1, 63,0);
        tracep->declBus(c+433,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[5] rfno0 rf_dffl sirv_gnrl_xchecker DW", false,-1, 31,0);
        tracep->declBus(c+171,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[5] rfno0 rf_dffl sirv_gnrl_xchecker i_dat", false,-1, 0,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[5] rfno0 rf_dffl sirv_gnrl_xchecker clk", false,-1);
        tracep->declBus(c+430,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[6] rfno0 rf_dffl DW", false,-1, 31,0);
        tracep->declBit(c+172,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[6] rfno0 rf_dffl lden", false,-1);
        tracep->declQuad(c+7,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[6] rfno0 rf_dffl dnxt", false,-1, 63,0);
        tracep->declQuad(c+274,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[6] rfno0 rf_dffl qout", false,-1, 63,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[6] rfno0 rf_dffl clk", false,-1);
        tracep->declQuad(c+274,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[6] rfno0 rf_dffl qout_r", false,-1, 63,0);
        tracep->declBus(c+433,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[6] rfno0 rf_dffl sirv_gnrl_xchecker DW", false,-1, 31,0);
        tracep->declBus(c+172,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[6] rfno0 rf_dffl sirv_gnrl_xchecker i_dat", false,-1, 0,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[6] rfno0 rf_dffl sirv_gnrl_xchecker clk", false,-1);
        tracep->declBus(c+430,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[7] rfno0 rf_dffl DW", false,-1, 31,0);
        tracep->declBit(c+173,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[7] rfno0 rf_dffl lden", false,-1);
        tracep->declQuad(c+7,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[7] rfno0 rf_dffl dnxt", false,-1, 63,0);
        tracep->declQuad(c+276,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[7] rfno0 rf_dffl qout", false,-1, 63,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[7] rfno0 rf_dffl clk", false,-1);
        tracep->declQuad(c+276,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[7] rfno0 rf_dffl qout_r", false,-1, 63,0);
        tracep->declBus(c+433,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[7] rfno0 rf_dffl sirv_gnrl_xchecker DW", false,-1, 31,0);
        tracep->declBus(c+173,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[7] rfno0 rf_dffl sirv_gnrl_xchecker i_dat", false,-1, 0,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[7] rfno0 rf_dffl sirv_gnrl_xchecker clk", false,-1);
        tracep->declBus(c+430,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[8] rfno0 rf_dffl DW", false,-1, 31,0);
        tracep->declBit(c+174,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[8] rfno0 rf_dffl lden", false,-1);
        tracep->declQuad(c+7,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[8] rfno0 rf_dffl dnxt", false,-1, 63,0);
        tracep->declQuad(c+278,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[8] rfno0 rf_dffl qout", false,-1, 63,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[8] rfno0 rf_dffl clk", false,-1);
        tracep->declQuad(c+278,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[8] rfno0 rf_dffl qout_r", false,-1, 63,0);
        tracep->declBus(c+433,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[8] rfno0 rf_dffl sirv_gnrl_xchecker DW", false,-1, 31,0);
        tracep->declBus(c+174,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[8] rfno0 rf_dffl sirv_gnrl_xchecker i_dat", false,-1, 0,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[8] rfno0 rf_dffl sirv_gnrl_xchecker clk", false,-1);
        tracep->declBus(c+430,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[9] rfno0 rf_dffl DW", false,-1, 31,0);
        tracep->declBit(c+175,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[9] rfno0 rf_dffl lden", false,-1);
        tracep->declQuad(c+7,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[9] rfno0 rf_dffl dnxt", false,-1, 63,0);
        tracep->declQuad(c+280,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[9] rfno0 rf_dffl qout", false,-1, 63,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[9] rfno0 rf_dffl clk", false,-1);
        tracep->declQuad(c+280,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[9] rfno0 rf_dffl qout_r", false,-1, 63,0);
        tracep->declBus(c+433,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[9] rfno0 rf_dffl sirv_gnrl_xchecker DW", false,-1, 31,0);
        tracep->declBus(c+175,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[9] rfno0 rf_dffl sirv_gnrl_xchecker i_dat", false,-1, 0,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[9] rfno0 rf_dffl sirv_gnrl_xchecker clk", false,-1);
        tracep->declBus(c+430,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[10] rfno0 rf_dffl DW", false,-1, 31,0);
        tracep->declBit(c+176,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[10] rfno0 rf_dffl lden", false,-1);
        tracep->declQuad(c+7,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[10] rfno0 rf_dffl dnxt", false,-1, 63,0);
        tracep->declQuad(c+282,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[10] rfno0 rf_dffl qout", false,-1, 63,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[10] rfno0 rf_dffl clk", false,-1);
        tracep->declQuad(c+282,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[10] rfno0 rf_dffl qout_r", false,-1, 63,0);
        tracep->declBus(c+433,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[10] rfno0 rf_dffl sirv_gnrl_xchecker DW", false,-1, 31,0);
        tracep->declBus(c+176,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[10] rfno0 rf_dffl sirv_gnrl_xchecker i_dat", false,-1, 0,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[10] rfno0 rf_dffl sirv_gnrl_xchecker clk", false,-1);
        tracep->declBus(c+430,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[11] rfno0 rf_dffl DW", false,-1, 31,0);
        tracep->declBit(c+177,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[11] rfno0 rf_dffl lden", false,-1);
        tracep->declQuad(c+7,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[11] rfno0 rf_dffl dnxt", false,-1, 63,0);
        tracep->declQuad(c+284,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[11] rfno0 rf_dffl qout", false,-1, 63,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[11] rfno0 rf_dffl clk", false,-1);
        tracep->declQuad(c+284,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[11] rfno0 rf_dffl qout_r", false,-1, 63,0);
        tracep->declBus(c+433,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[11] rfno0 rf_dffl sirv_gnrl_xchecker DW", false,-1, 31,0);
        tracep->declBus(c+177,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[11] rfno0 rf_dffl sirv_gnrl_xchecker i_dat", false,-1, 0,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[11] rfno0 rf_dffl sirv_gnrl_xchecker clk", false,-1);
        tracep->declBus(c+430,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[12] rfno0 rf_dffl DW", false,-1, 31,0);
        tracep->declBit(c+178,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[12] rfno0 rf_dffl lden", false,-1);
        tracep->declQuad(c+7,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[12] rfno0 rf_dffl dnxt", false,-1, 63,0);
        tracep->declQuad(c+286,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[12] rfno0 rf_dffl qout", false,-1, 63,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[12] rfno0 rf_dffl clk", false,-1);
        tracep->declQuad(c+286,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[12] rfno0 rf_dffl qout_r", false,-1, 63,0);
        tracep->declBus(c+433,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[12] rfno0 rf_dffl sirv_gnrl_xchecker DW", false,-1, 31,0);
        tracep->declBus(c+178,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[12] rfno0 rf_dffl sirv_gnrl_xchecker i_dat", false,-1, 0,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[12] rfno0 rf_dffl sirv_gnrl_xchecker clk", false,-1);
        tracep->declBus(c+430,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[13] rfno0 rf_dffl DW", false,-1, 31,0);
        tracep->declBit(c+179,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[13] rfno0 rf_dffl lden", false,-1);
        tracep->declQuad(c+7,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[13] rfno0 rf_dffl dnxt", false,-1, 63,0);
        tracep->declQuad(c+288,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[13] rfno0 rf_dffl qout", false,-1, 63,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[13] rfno0 rf_dffl clk", false,-1);
        tracep->declQuad(c+288,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[13] rfno0 rf_dffl qout_r", false,-1, 63,0);
        tracep->declBus(c+433,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[13] rfno0 rf_dffl sirv_gnrl_xchecker DW", false,-1, 31,0);
        tracep->declBus(c+179,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[13] rfno0 rf_dffl sirv_gnrl_xchecker i_dat", false,-1, 0,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[13] rfno0 rf_dffl sirv_gnrl_xchecker clk", false,-1);
        tracep->declBus(c+430,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[14] rfno0 rf_dffl DW", false,-1, 31,0);
        tracep->declBit(c+180,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[14] rfno0 rf_dffl lden", false,-1);
        tracep->declQuad(c+7,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[14] rfno0 rf_dffl dnxt", false,-1, 63,0);
        tracep->declQuad(c+290,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[14] rfno0 rf_dffl qout", false,-1, 63,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[14] rfno0 rf_dffl clk", false,-1);
        tracep->declQuad(c+290,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[14] rfno0 rf_dffl qout_r", false,-1, 63,0);
        tracep->declBus(c+433,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[14] rfno0 rf_dffl sirv_gnrl_xchecker DW", false,-1, 31,0);
        tracep->declBus(c+180,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[14] rfno0 rf_dffl sirv_gnrl_xchecker i_dat", false,-1, 0,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[14] rfno0 rf_dffl sirv_gnrl_xchecker clk", false,-1);
        tracep->declBus(c+430,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[15] rfno0 rf_dffl DW", false,-1, 31,0);
        tracep->declBit(c+181,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[15] rfno0 rf_dffl lden", false,-1);
        tracep->declQuad(c+7,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[15] rfno0 rf_dffl dnxt", false,-1, 63,0);
        tracep->declQuad(c+292,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[15] rfno0 rf_dffl qout", false,-1, 63,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[15] rfno0 rf_dffl clk", false,-1);
        tracep->declQuad(c+292,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[15] rfno0 rf_dffl qout_r", false,-1, 63,0);
        tracep->declBus(c+433,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[15] rfno0 rf_dffl sirv_gnrl_xchecker DW", false,-1, 31,0);
        tracep->declBus(c+181,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[15] rfno0 rf_dffl sirv_gnrl_xchecker i_dat", false,-1, 0,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[15] rfno0 rf_dffl sirv_gnrl_xchecker clk", false,-1);
        tracep->declBus(c+430,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[16] rfno0 rf_dffl DW", false,-1, 31,0);
        tracep->declBit(c+182,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[16] rfno0 rf_dffl lden", false,-1);
        tracep->declQuad(c+7,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[16] rfno0 rf_dffl dnxt", false,-1, 63,0);
        tracep->declQuad(c+294,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[16] rfno0 rf_dffl qout", false,-1, 63,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[16] rfno0 rf_dffl clk", false,-1);
        tracep->declQuad(c+294,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[16] rfno0 rf_dffl qout_r", false,-1, 63,0);
        tracep->declBus(c+433,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[16] rfno0 rf_dffl sirv_gnrl_xchecker DW", false,-1, 31,0);
        tracep->declBus(c+182,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[16] rfno0 rf_dffl sirv_gnrl_xchecker i_dat", false,-1, 0,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[16] rfno0 rf_dffl sirv_gnrl_xchecker clk", false,-1);
        tracep->declBus(c+430,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[17] rfno0 rf_dffl DW", false,-1, 31,0);
        tracep->declBit(c+183,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[17] rfno0 rf_dffl lden", false,-1);
        tracep->declQuad(c+7,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[17] rfno0 rf_dffl dnxt", false,-1, 63,0);
        tracep->declQuad(c+296,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[17] rfno0 rf_dffl qout", false,-1, 63,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[17] rfno0 rf_dffl clk", false,-1);
        tracep->declQuad(c+296,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[17] rfno0 rf_dffl qout_r", false,-1, 63,0);
        tracep->declBus(c+433,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[17] rfno0 rf_dffl sirv_gnrl_xchecker DW", false,-1, 31,0);
        tracep->declBus(c+183,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[17] rfno0 rf_dffl sirv_gnrl_xchecker i_dat", false,-1, 0,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[17] rfno0 rf_dffl sirv_gnrl_xchecker clk", false,-1);
        tracep->declBus(c+430,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[18] rfno0 rf_dffl DW", false,-1, 31,0);
        tracep->declBit(c+184,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[18] rfno0 rf_dffl lden", false,-1);
        tracep->declQuad(c+7,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[18] rfno0 rf_dffl dnxt", false,-1, 63,0);
        tracep->declQuad(c+298,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[18] rfno0 rf_dffl qout", false,-1, 63,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[18] rfno0 rf_dffl clk", false,-1);
        tracep->declQuad(c+298,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[18] rfno0 rf_dffl qout_r", false,-1, 63,0);
        tracep->declBus(c+433,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[18] rfno0 rf_dffl sirv_gnrl_xchecker DW", false,-1, 31,0);
        tracep->declBus(c+184,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[18] rfno0 rf_dffl sirv_gnrl_xchecker i_dat", false,-1, 0,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[18] rfno0 rf_dffl sirv_gnrl_xchecker clk", false,-1);
        tracep->declBus(c+430,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[19] rfno0 rf_dffl DW", false,-1, 31,0);
        tracep->declBit(c+185,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[19] rfno0 rf_dffl lden", false,-1);
        tracep->declQuad(c+7,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[19] rfno0 rf_dffl dnxt", false,-1, 63,0);
        tracep->declQuad(c+300,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[19] rfno0 rf_dffl qout", false,-1, 63,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[19] rfno0 rf_dffl clk", false,-1);
        tracep->declQuad(c+300,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[19] rfno0 rf_dffl qout_r", false,-1, 63,0);
        tracep->declBus(c+433,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[19] rfno0 rf_dffl sirv_gnrl_xchecker DW", false,-1, 31,0);
        tracep->declBus(c+185,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[19] rfno0 rf_dffl sirv_gnrl_xchecker i_dat", false,-1, 0,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[19] rfno0 rf_dffl sirv_gnrl_xchecker clk", false,-1);
        tracep->declBus(c+430,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[20] rfno0 rf_dffl DW", false,-1, 31,0);
        tracep->declBit(c+186,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[20] rfno0 rf_dffl lden", false,-1);
        tracep->declQuad(c+7,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[20] rfno0 rf_dffl dnxt", false,-1, 63,0);
        tracep->declQuad(c+302,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[20] rfno0 rf_dffl qout", false,-1, 63,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[20] rfno0 rf_dffl clk", false,-1);
        tracep->declQuad(c+302,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[20] rfno0 rf_dffl qout_r", false,-1, 63,0);
        tracep->declBus(c+433,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[20] rfno0 rf_dffl sirv_gnrl_xchecker DW", false,-1, 31,0);
        tracep->declBus(c+186,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[20] rfno0 rf_dffl sirv_gnrl_xchecker i_dat", false,-1, 0,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[20] rfno0 rf_dffl sirv_gnrl_xchecker clk", false,-1);
        tracep->declBus(c+430,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[21] rfno0 rf_dffl DW", false,-1, 31,0);
        tracep->declBit(c+187,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[21] rfno0 rf_dffl lden", false,-1);
        tracep->declQuad(c+7,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[21] rfno0 rf_dffl dnxt", false,-1, 63,0);
        tracep->declQuad(c+304,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[21] rfno0 rf_dffl qout", false,-1, 63,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[21] rfno0 rf_dffl clk", false,-1);
        tracep->declQuad(c+304,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[21] rfno0 rf_dffl qout_r", false,-1, 63,0);
        tracep->declBus(c+433,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[21] rfno0 rf_dffl sirv_gnrl_xchecker DW", false,-1, 31,0);
        tracep->declBus(c+187,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[21] rfno0 rf_dffl sirv_gnrl_xchecker i_dat", false,-1, 0,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[21] rfno0 rf_dffl sirv_gnrl_xchecker clk", false,-1);
        tracep->declBus(c+430,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[22] rfno0 rf_dffl DW", false,-1, 31,0);
        tracep->declBit(c+188,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[22] rfno0 rf_dffl lden", false,-1);
        tracep->declQuad(c+7,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[22] rfno0 rf_dffl dnxt", false,-1, 63,0);
        tracep->declQuad(c+306,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[22] rfno0 rf_dffl qout", false,-1, 63,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[22] rfno0 rf_dffl clk", false,-1);
        tracep->declQuad(c+306,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[22] rfno0 rf_dffl qout_r", false,-1, 63,0);
        tracep->declBus(c+433,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[22] rfno0 rf_dffl sirv_gnrl_xchecker DW", false,-1, 31,0);
        tracep->declBus(c+188,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[22] rfno0 rf_dffl sirv_gnrl_xchecker i_dat", false,-1, 0,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[22] rfno0 rf_dffl sirv_gnrl_xchecker clk", false,-1);
        tracep->declBus(c+430,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[23] rfno0 rf_dffl DW", false,-1, 31,0);
        tracep->declBit(c+189,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[23] rfno0 rf_dffl lden", false,-1);
        tracep->declQuad(c+7,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[23] rfno0 rf_dffl dnxt", false,-1, 63,0);
        tracep->declQuad(c+308,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[23] rfno0 rf_dffl qout", false,-1, 63,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[23] rfno0 rf_dffl clk", false,-1);
        tracep->declQuad(c+308,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[23] rfno0 rf_dffl qout_r", false,-1, 63,0);
        tracep->declBus(c+433,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[23] rfno0 rf_dffl sirv_gnrl_xchecker DW", false,-1, 31,0);
        tracep->declBus(c+189,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[23] rfno0 rf_dffl sirv_gnrl_xchecker i_dat", false,-1, 0,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[23] rfno0 rf_dffl sirv_gnrl_xchecker clk", false,-1);
        tracep->declBus(c+430,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[24] rfno0 rf_dffl DW", false,-1, 31,0);
        tracep->declBit(c+190,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[24] rfno0 rf_dffl lden", false,-1);
        tracep->declQuad(c+7,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[24] rfno0 rf_dffl dnxt", false,-1, 63,0);
        tracep->declQuad(c+310,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[24] rfno0 rf_dffl qout", false,-1, 63,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[24] rfno0 rf_dffl clk", false,-1);
        tracep->declQuad(c+310,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[24] rfno0 rf_dffl qout_r", false,-1, 63,0);
        tracep->declBus(c+433,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[24] rfno0 rf_dffl sirv_gnrl_xchecker DW", false,-1, 31,0);
        tracep->declBus(c+190,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[24] rfno0 rf_dffl sirv_gnrl_xchecker i_dat", false,-1, 0,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[24] rfno0 rf_dffl sirv_gnrl_xchecker clk", false,-1);
        tracep->declBus(c+430,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[25] rfno0 rf_dffl DW", false,-1, 31,0);
        tracep->declBit(c+191,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[25] rfno0 rf_dffl lden", false,-1);
        tracep->declQuad(c+7,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[25] rfno0 rf_dffl dnxt", false,-1, 63,0);
        tracep->declQuad(c+312,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[25] rfno0 rf_dffl qout", false,-1, 63,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[25] rfno0 rf_dffl clk", false,-1);
        tracep->declQuad(c+312,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[25] rfno0 rf_dffl qout_r", false,-1, 63,0);
        tracep->declBus(c+433,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[25] rfno0 rf_dffl sirv_gnrl_xchecker DW", false,-1, 31,0);
        tracep->declBus(c+191,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[25] rfno0 rf_dffl sirv_gnrl_xchecker i_dat", false,-1, 0,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[25] rfno0 rf_dffl sirv_gnrl_xchecker clk", false,-1);
        tracep->declBus(c+430,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[26] rfno0 rf_dffl DW", false,-1, 31,0);
        tracep->declBit(c+192,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[26] rfno0 rf_dffl lden", false,-1);
        tracep->declQuad(c+7,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[26] rfno0 rf_dffl dnxt", false,-1, 63,0);
        tracep->declQuad(c+314,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[26] rfno0 rf_dffl qout", false,-1, 63,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[26] rfno0 rf_dffl clk", false,-1);
        tracep->declQuad(c+314,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[26] rfno0 rf_dffl qout_r", false,-1, 63,0);
        tracep->declBus(c+433,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[26] rfno0 rf_dffl sirv_gnrl_xchecker DW", false,-1, 31,0);
        tracep->declBus(c+192,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[26] rfno0 rf_dffl sirv_gnrl_xchecker i_dat", false,-1, 0,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[26] rfno0 rf_dffl sirv_gnrl_xchecker clk", false,-1);
        tracep->declBus(c+430,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[27] rfno0 rf_dffl DW", false,-1, 31,0);
        tracep->declBit(c+193,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[27] rfno0 rf_dffl lden", false,-1);
        tracep->declQuad(c+7,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[27] rfno0 rf_dffl dnxt", false,-1, 63,0);
        tracep->declQuad(c+316,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[27] rfno0 rf_dffl qout", false,-1, 63,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[27] rfno0 rf_dffl clk", false,-1);
        tracep->declQuad(c+316,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[27] rfno0 rf_dffl qout_r", false,-1, 63,0);
        tracep->declBus(c+433,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[27] rfno0 rf_dffl sirv_gnrl_xchecker DW", false,-1, 31,0);
        tracep->declBus(c+193,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[27] rfno0 rf_dffl sirv_gnrl_xchecker i_dat", false,-1, 0,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[27] rfno0 rf_dffl sirv_gnrl_xchecker clk", false,-1);
        tracep->declBus(c+430,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[28] rfno0 rf_dffl DW", false,-1, 31,0);
        tracep->declBit(c+194,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[28] rfno0 rf_dffl lden", false,-1);
        tracep->declQuad(c+7,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[28] rfno0 rf_dffl dnxt", false,-1, 63,0);
        tracep->declQuad(c+318,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[28] rfno0 rf_dffl qout", false,-1, 63,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[28] rfno0 rf_dffl clk", false,-1);
        tracep->declQuad(c+318,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[28] rfno0 rf_dffl qout_r", false,-1, 63,0);
        tracep->declBus(c+433,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[28] rfno0 rf_dffl sirv_gnrl_xchecker DW", false,-1, 31,0);
        tracep->declBus(c+194,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[28] rfno0 rf_dffl sirv_gnrl_xchecker i_dat", false,-1, 0,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[28] rfno0 rf_dffl sirv_gnrl_xchecker clk", false,-1);
        tracep->declBus(c+430,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[29] rfno0 rf_dffl DW", false,-1, 31,0);
        tracep->declBit(c+195,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[29] rfno0 rf_dffl lden", false,-1);
        tracep->declQuad(c+7,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[29] rfno0 rf_dffl dnxt", false,-1, 63,0);
        tracep->declQuad(c+320,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[29] rfno0 rf_dffl qout", false,-1, 63,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[29] rfno0 rf_dffl clk", false,-1);
        tracep->declQuad(c+320,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[29] rfno0 rf_dffl qout_r", false,-1, 63,0);
        tracep->declBus(c+433,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[29] rfno0 rf_dffl sirv_gnrl_xchecker DW", false,-1, 31,0);
        tracep->declBus(c+195,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[29] rfno0 rf_dffl sirv_gnrl_xchecker i_dat", false,-1, 0,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[29] rfno0 rf_dffl sirv_gnrl_xchecker clk", false,-1);
        tracep->declBus(c+430,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[30] rfno0 rf_dffl DW", false,-1, 31,0);
        tracep->declBit(c+196,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[30] rfno0 rf_dffl lden", false,-1);
        tracep->declQuad(c+7,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[30] rfno0 rf_dffl dnxt", false,-1, 63,0);
        tracep->declQuad(c+322,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[30] rfno0 rf_dffl qout", false,-1, 63,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[30] rfno0 rf_dffl clk", false,-1);
        tracep->declQuad(c+322,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[30] rfno0 rf_dffl qout_r", false,-1, 63,0);
        tracep->declBus(c+433,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[30] rfno0 rf_dffl sirv_gnrl_xchecker DW", false,-1, 31,0);
        tracep->declBus(c+196,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[30] rfno0 rf_dffl sirv_gnrl_xchecker i_dat", false,-1, 0,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[30] rfno0 rf_dffl sirv_gnrl_xchecker clk", false,-1);
        tracep->declBus(c+430,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[31] rfno0 rf_dffl DW", false,-1, 31,0);
        tracep->declBit(c+197,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[31] rfno0 rf_dffl lden", false,-1);
        tracep->declQuad(c+7,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[31] rfno0 rf_dffl dnxt", false,-1, 63,0);
        tracep->declQuad(c+324,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[31] rfno0 rf_dffl qout", false,-1, 63,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[31] rfno0 rf_dffl clk", false,-1);
        tracep->declQuad(c+324,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[31] rfno0 rf_dffl qout_r", false,-1, 63,0);
        tracep->declBus(c+433,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[31] rfno0 rf_dffl sirv_gnrl_xchecker DW", false,-1, 31,0);
        tracep->declBus(c+197,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[31] rfno0 rf_dffl sirv_gnrl_xchecker i_dat", false,-1, 0,0);
        tracep->declBit(c+326,"ysyx_22050368_top ysyx_22050368_regfile1 regfile[31] rfno0 rf_dffl sirv_gnrl_xchecker clk", false,-1);
    }
}

void Vysyx_22050368_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vysyx_22050368_top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vysyx_22050368_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vysyx_22050368_top___024root__traceRegister(Vysyx_22050368_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050368_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vysyx_22050368_top___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vysyx_22050368_top___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vysyx_22050368_top___024root__traceCleanup, vlSelf);
    }
}

void Vysyx_22050368_top___024root__traceFullSub0(Vysyx_22050368_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22050368_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22050368_top___024root* const __restrict vlSelf = static_cast<Vysyx_22050368_top___024root*>(voidSelf);
    Vysyx_22050368_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22050368_top___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22050368_top___024root__traceFullSub0(Vysyx_22050368_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050368_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,((1U & (vlSelf->ysyx_22050368_top__DOT__dec_info_bus 
                                       >> 3U))));
        tracep->fullCData(oldp+2,(vlSelf->ysyx_22050368_top__DOT__rd_index),5);
        tracep->fullQData(oldp+3,(vlSelf->ysyx_22050368_top__DOT__rs1),64);
        tracep->fullQData(oldp+5,(vlSelf->ysyx_22050368_top__DOT__rs2),64);
        tracep->fullQData(oldp+7,(vlSelf->ysyx_22050368_top__DOT__rd),64);
        tracep->fullBit(oldp+9,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__access_rd));
        tracep->fullIData(oldp+10,(vlSelf->ysyx_22050368_top__DOT__dec_info_bus),19);
        tracep->fullQData(oldp+11,(vlSelf->ysyx_22050368_top__DOT__dec_imm),64);
        tracep->fullBit(oldp+13,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_jalr));
        tracep->fullBit(oldp+14,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_addi));
        tracep->fullBit(oldp+15,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_slti));
        tracep->fullBit(oldp+16,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_sltiu));
        tracep->fullBit(oldp+17,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_xori));
        tracep->fullBit(oldp+18,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_ori));
        tracep->fullBit(oldp+19,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_andi));
        tracep->fullBit(oldp+20,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_slli));
        tracep->fullBit(oldp+21,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_srli));
        tracep->fullBit(oldp+22,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_srai));
        tracep->fullBit(oldp+23,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_fence));
        tracep->fullBit(oldp+24,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_fence_i));
        tracep->fullBit(oldp+25,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrw));
        tracep->fullBit(oldp+26,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrs));
        tracep->fullBit(oldp+27,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrc));
        tracep->fullBit(oldp+28,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrwi));
        tracep->fullBit(oldp+29,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrsi));
        tracep->fullBit(oldp+30,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrci));
        tracep->fullBit(oldp+31,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_mul));
        tracep->fullBit(oldp+32,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_mulh));
        tracep->fullBit(oldp+33,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_mulhsu));
        tracep->fullBit(oldp+34,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_mulhu));
        tracep->fullBit(oldp+35,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_div));
        tracep->fullBit(oldp+36,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_divu));
        tracep->fullBit(oldp+37,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_rem));
        tracep->fullBit(oldp+38,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_remu));
        tracep->fullBit(oldp+39,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_type_muldiv));
        tracep->fullBit(oldp+40,(((((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_div) 
                                    | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_divu)) 
                                   | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_rem)) 
                                  | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_remu))));
        tracep->fullIData(oldp+41,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_alu_info_bus),17);
        tracep->fullSData(oldp+42,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_bjp_info_bus),11);
        tracep->fullSData(oldp+43,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_muldiv_info_bus),11);
        tracep->fullIData(oldp+44,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_csr_info_bus),19);
        tracep->fullSData(oldp+45,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_mem_info_bus),11);
        tracep->fullCData(oldp+46,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_sys_info_bus),8);
        tracep->fullBit(oldp+47,((((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrwi) 
                                   | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrsi)) 
                                  | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrci))));
        tracep->fullBit(oldp+48,((((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_slli) 
                                   | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_srli)) 
                                  | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_srai))));
        tracep->fullBit(oldp+49,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__op_csr));
        tracep->fullBit(oldp+50,((((1U == (7U & vlSelf->ysyx_22050368_top__DOT__dec_info_bus)) 
                                   & (IData)((vlSelf->ysyx_22050368_top__DOT__rs1 
                                              >> 0x3fU))) 
                                  & (IData)((vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__alu_op2 
                                             >> 0x3fU)))));
        tracep->fullBit(oldp+51,((((1U == (7U & vlSelf->ysyx_22050368_top__DOT__dec_info_bus)) 
                                   & (IData)((vlSelf->ysyx_22050368_top__DOT__rs1 
                                              >> 0x3eU))) 
                                  & (IData)((vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__alu_op2 
                                             >> 0x3eU)))));
        tracep->fullBit(oldp+52,((((1U == (7U & vlSelf->ysyx_22050368_top__DOT__dec_info_bus)) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (6U 
                                                  & (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__mode)))))) 
                                  & ((((1U == (7U & vlSelf->ysyx_22050368_top__DOT__dec_info_bus)) 
                                       & (IData)((vlSelf->ysyx_22050368_top__DOT__rs1 
                                                  >> 0x3eU))) 
                                      & (IData)((vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__alu_op2 
                                                 >> 0x3eU))) 
                                     ^ (((1U == (7U 
                                                 & vlSelf->ysyx_22050368_top__DOT__dec_info_bus)) 
                                         & (IData)(
                                                   (vlSelf->ysyx_22050368_top__DOT__rs1 
                                                    >> 0x3fU))) 
                                        & (IData)((vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__alu_op2 
                                                   >> 0x3fU)))))));
        tracep->fullBit(oldp+53,((((1U == (7U & vlSelf->ysyx_22050368_top__DOT__dec_info_bus)) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (6U 
                                                  & (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__mode)))))) 
                                  & (0ULL == vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__alu_wbck_dat))));
        tracep->fullQData(oldp+54,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__alu_op2),64);
        tracep->fullBit(oldp+56,((1U == (7U & vlSelf->ysyx_22050368_top__DOT__dec_info_bus))));
        tracep->fullBit(oldp+57,((2U == (7U & vlSelf->ysyx_22050368_top__DOT__dec_info_bus))));
        tracep->fullQData(oldp+58,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__alu_wbck_dat),64);
        tracep->fullQData(oldp+60,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__result_bus[0]),64);
        tracep->fullQData(oldp+62,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__result_bus[1]),64);
        tracep->fullQData(oldp+64,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__result_bus[2]),64);
        tracep->fullQData(oldp+66,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__result_bus[3]),64);
        tracep->fullQData(oldp+68,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__result_bus[4]),64);
        tracep->fullQData(oldp+70,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__result_bus[5]),64);
        tracep->fullQData(oldp+72,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__result_bus[6]),64);
        tracep->fullQData(oldp+74,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__result_bus[7]),64);
        tracep->fullQData(oldp+76,((vlSelf->ysyx_22050368_top__DOT__rs1 
                                    - vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__alu_op2)),64);
        tracep->fullQData(oldp+78,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__result1),64);
        tracep->fullQData(oldp+80,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1[0]),64);
        tracep->fullQData(oldp+82,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1[1]),64);
        tracep->fullQData(oldp+84,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1[2]),64);
        tracep->fullQData(oldp+86,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1[3]),64);
        tracep->fullQData(oldp+88,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1[4]),64);
        tracep->fullQData(oldp+90,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1[5]),64);
        tracep->fullQData(oldp+92,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1[6]),64);
        tracep->fullQData(oldp+94,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1[7]),64);
        tracep->fullWData(oldp+96,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4),536);
        tracep->fullWData(oldp+113,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+116,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+119,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+122,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list[3]),67);
        tracep->fullWData(oldp+125,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list[4]),67);
        tracep->fullWData(oldp+128,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list[5]),67);
        tracep->fullWData(oldp+131,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list[6]),67);
        tracep->fullWData(oldp+134,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list[7]),67);
        tracep->fullCData(oldp+137,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+138,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+139,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+140,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__key_list[3]),3);
        tracep->fullCData(oldp+141,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__key_list[4]),3);
        tracep->fullCData(oldp+142,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__key_list[5]),3);
        tracep->fullCData(oldp+143,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__key_list[6]),3);
        tracep->fullCData(oldp+144,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__key_list[7]),3);
        tracep->fullQData(oldp+145,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+147,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+149,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+151,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+153,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+155,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+157,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+159,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+161,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+163,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+164,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_bjp1__DOT__jal));
        tracep->fullBit(oldp+165,((1U & (vlSelf->ysyx_22050368_top__DOT__dec_info_bus 
                                         >> 0xaU))));
        tracep->fullIData(oldp+166,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen),32);
        tracep->fullBit(oldp+167,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                         >> 1U))));
        tracep->fullBit(oldp+168,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                         >> 2U))));
        tracep->fullBit(oldp+169,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                         >> 3U))));
        tracep->fullBit(oldp+170,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                         >> 4U))));
        tracep->fullBit(oldp+171,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                         >> 5U))));
        tracep->fullBit(oldp+172,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                         >> 6U))));
        tracep->fullBit(oldp+173,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                         >> 7U))));
        tracep->fullBit(oldp+174,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                         >> 8U))));
        tracep->fullBit(oldp+175,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                         >> 9U))));
        tracep->fullBit(oldp+176,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                         >> 0xaU))));
        tracep->fullBit(oldp+177,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                         >> 0xbU))));
        tracep->fullBit(oldp+178,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                         >> 0xcU))));
        tracep->fullBit(oldp+179,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                         >> 0xdU))));
        tracep->fullBit(oldp+180,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                         >> 0xeU))));
        tracep->fullBit(oldp+181,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                         >> 0xfU))));
        tracep->fullBit(oldp+182,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                         >> 0x10U))));
        tracep->fullBit(oldp+183,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                         >> 0x11U))));
        tracep->fullBit(oldp+184,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                         >> 0x12U))));
        tracep->fullBit(oldp+185,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                         >> 0x13U))));
        tracep->fullBit(oldp+186,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                         >> 0x14U))));
        tracep->fullBit(oldp+187,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                         >> 0x15U))));
        tracep->fullBit(oldp+188,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                         >> 0x16U))));
        tracep->fullBit(oldp+189,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                         >> 0x17U))));
        tracep->fullBit(oldp+190,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                         >> 0x18U))));
        tracep->fullBit(oldp+191,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                         >> 0x19U))));
        tracep->fullBit(oldp+192,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                         >> 0x1aU))));
        tracep->fullBit(oldp+193,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                         >> 0x1bU))));
        tracep->fullBit(oldp+194,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                         >> 0x1cU))));
        tracep->fullBit(oldp+195,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                         >> 0x1dU))));
        tracep->fullBit(oldp+196,((1U & (vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                         >> 0x1eU))));
        tracep->fullBit(oldp+197,((vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen 
                                   >> 0x1fU)));
        tracep->fullQData(oldp+198,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r
                                    [1U]),64);
        tracep->fullQData(oldp+200,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[0]),64);
        tracep->fullQData(oldp+202,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[1]),64);
        tracep->fullQData(oldp+204,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[2]),64);
        tracep->fullQData(oldp+206,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[3]),64);
        tracep->fullQData(oldp+208,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[4]),64);
        tracep->fullQData(oldp+210,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[5]),64);
        tracep->fullQData(oldp+212,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[6]),64);
        tracep->fullQData(oldp+214,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[7]),64);
        tracep->fullQData(oldp+216,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[8]),64);
        tracep->fullQData(oldp+218,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[9]),64);
        tracep->fullQData(oldp+220,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[10]),64);
        tracep->fullQData(oldp+222,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[11]),64);
        tracep->fullQData(oldp+224,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[12]),64);
        tracep->fullQData(oldp+226,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[13]),64);
        tracep->fullQData(oldp+228,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[14]),64);
        tracep->fullQData(oldp+230,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[15]),64);
        tracep->fullQData(oldp+232,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[16]),64);
        tracep->fullQData(oldp+234,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[17]),64);
        tracep->fullQData(oldp+236,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[18]),64);
        tracep->fullQData(oldp+238,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[19]),64);
        tracep->fullQData(oldp+240,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[20]),64);
        tracep->fullQData(oldp+242,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[21]),64);
        tracep->fullQData(oldp+244,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[22]),64);
        tracep->fullQData(oldp+246,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[23]),64);
        tracep->fullQData(oldp+248,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[24]),64);
        tracep->fullQData(oldp+250,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[25]),64);
        tracep->fullQData(oldp+252,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[26]),64);
        tracep->fullQData(oldp+254,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[27]),64);
        tracep->fullQData(oldp+256,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[28]),64);
        tracep->fullQData(oldp+258,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[29]),64);
        tracep->fullQData(oldp+260,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[30]),64);
        tracep->fullQData(oldp+262,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r[31]),64);
        tracep->fullQData(oldp+264,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
        tracep->fullQData(oldp+266,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
        tracep->fullQData(oldp+268,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
        tracep->fullQData(oldp+270,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
        tracep->fullQData(oldp+272,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
        tracep->fullQData(oldp+274,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
        tracep->fullQData(oldp+276,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
        tracep->fullQData(oldp+278,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
        tracep->fullQData(oldp+280,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
        tracep->fullQData(oldp+282,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
        tracep->fullQData(oldp+284,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
        tracep->fullQData(oldp+286,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
        tracep->fullQData(oldp+288,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
        tracep->fullQData(oldp+290,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
        tracep->fullQData(oldp+292,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
        tracep->fullQData(oldp+294,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
        tracep->fullQData(oldp+296,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
        tracep->fullQData(oldp+298,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
        tracep->fullQData(oldp+300,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
        tracep->fullQData(oldp+302,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
        tracep->fullQData(oldp+304,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
        tracep->fullQData(oldp+306,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
        tracep->fullQData(oldp+308,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
        tracep->fullQData(oldp+310,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
        tracep->fullQData(oldp+312,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
        tracep->fullQData(oldp+314,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
        tracep->fullQData(oldp+316,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
        tracep->fullQData(oldp+318,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
        tracep->fullQData(oldp+320,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
        tracep->fullQData(oldp+322,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
        tracep->fullQData(oldp+324,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r),64);
        tracep->fullBit(oldp+326,(vlSelf->clk));
        tracep->fullBit(oldp+327,(vlSelf->rst));
        tracep->fullIData(oldp+328,(vlSelf->inst),32);
        tracep->fullQData(oldp+329,(vlSelf->pc),64);
        tracep->fullBit(oldp+331,(vlSelf->success_flag));
        tracep->fullQData(oldp+332,(((((- (QData)((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_bjp1__DOT__jal))) 
                                       & vlSelf->pc) 
                                      | ((- (QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->ysyx_22050368_top__DOT__dec_info_bus 
                                                                >> 0xaU))))) 
                                         & vlSelf->ysyx_22050368_top__DOT__rs1)) 
                                     + vlSelf->ysyx_22050368_top__DOT__dec_imm)),64);
        tracep->fullCData(oldp+334,((((((((((((((0x37U 
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
        tracep->fullCData(oldp+335,(((((0x33U == (0x7fU 
                                                  & vlSelf->inst)) 
                                       | (0x23U == 
                                          (0x7fU & vlSelf->inst))) 
                                      | (0x63U == (0x7fU 
                                                   & vlSelf->inst)))
                                      ? (0x1fU & (vlSelf->inst 
                                                  >> 0x14U))
                                      : 0U)),5);
        tracep->fullCData(oldp+336,((0x7fU & vlSelf->inst)),7);
        tracep->fullCData(oldp+337,((7U & (vlSelf->inst 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+338,((vlSelf->inst >> 0x19U)),7);
        tracep->fullCData(oldp+339,((0x1fU & (vlSelf->inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+340,((0x1fU & (vlSelf->inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+341,((0x1fU & (vlSelf->inst 
                                              >> 0x14U))),5);
        tracep->fullSData(oldp+342,((vlSelf->inst >> 0x14U)),12);
        tracep->fullIData(oldp+343,((vlSelf->inst >> 0xcU)),20);
        tracep->fullBit(oldp+344,((0x37U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+345,((0x17U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+346,((0x6fU == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+347,((0x67U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+348,((0x63U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+349,((3U == (0x7fU & vlSelf->inst))));
        tracep->fullBit(oldp+350,((0x23U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+351,((0x13U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+352,((0x33U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+353,((0xfU == (0x7fU & vlSelf->inst))));
        tracep->fullBit(oldp+354,((0x73U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+355,((0U == (7U & (vlSelf->inst 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+356,((1U == (7U & (vlSelf->inst 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+357,((2U == (7U & (vlSelf->inst 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+358,((3U == (7U & (vlSelf->inst 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+359,((4U == (7U & (vlSelf->inst 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+360,((5U == (7U & (vlSelf->inst 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+361,((6U == (7U & (vlSelf->inst 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+362,((7U == (7U & (vlSelf->inst 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+363,((0U == (vlSelf->inst 
                                          >> 0x19U))));
        tracep->fullBit(oldp+364,((0x20U == (vlSelf->inst 
                                             >> 0x19U))));
        tracep->fullBit(oldp+365,((1U == (vlSelf->inst 
                                          >> 0x19U))));
        tracep->fullBit(oldp+366,((0U == (vlSelf->inst 
                                          >> 0x14U))));
        tracep->fullBit(oldp+367,((1U == (vlSelf->inst 
                                          >> 0x14U))));
        tracep->fullBit(oldp+368,((IData)((0x63U == 
                                           (0x707fU 
                                            & vlSelf->inst)))));
        tracep->fullBit(oldp+369,((IData)((0x1063U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->fullBit(oldp+370,((IData)((0x4063U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->fullBit(oldp+371,((IData)((0x5063U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->fullBit(oldp+372,((IData)((0x6063U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->fullBit(oldp+373,((IData)((0x7063U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->fullBit(oldp+374,((IData)((3U == (0x707fU 
                                                  & vlSelf->inst)))));
        tracep->fullBit(oldp+375,((IData)((0x1003U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->fullBit(oldp+376,((IData)((0x2003U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->fullBit(oldp+377,((IData)((0x4003U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->fullBit(oldp+378,((IData)((0x5003U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->fullBit(oldp+379,((IData)((0x23U == 
                                           (0x707fU 
                                            & vlSelf->inst)))));
        tracep->fullBit(oldp+380,((IData)((0x1023U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->fullBit(oldp+381,((IData)((0x2023U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->fullBit(oldp+382,(((IData)((0x33U == 
                                            (0x707fU 
                                             & vlSelf->inst))) 
                                   & (0U == (vlSelf->inst 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+383,(((IData)((0x33U == 
                                            (0x707fU 
                                             & vlSelf->inst))) 
                                   & (0x20U == (vlSelf->inst 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+384,(((IData)((0x1033U 
                                            == (0x707fU 
                                                & vlSelf->inst))) 
                                   & (0U == (vlSelf->inst 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+385,(((IData)((0x2033U 
                                            == (0x707fU 
                                                & vlSelf->inst))) 
                                   & (0U == (vlSelf->inst 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+386,(((IData)((0x3033U 
                                            == (0x707fU 
                                                & vlSelf->inst))) 
                                   & (0U == (vlSelf->inst 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+387,(((IData)((0x4033U 
                                            == (0x707fU 
                                                & vlSelf->inst))) 
                                   & (0U == (vlSelf->inst 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+388,(((IData)((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->inst))) 
                                   & (0U == (vlSelf->inst 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+389,(((IData)((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->inst))) 
                                   & (0x20U == (vlSelf->inst 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+390,(((IData)((0x6033U 
                                            == (0x707fU 
                                                & vlSelf->inst))) 
                                   & (0U == (vlSelf->inst 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+391,(((IData)((0x7033U 
                                            == (0x707fU 
                                                & vlSelf->inst))) 
                                   & (0U == (vlSelf->inst 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+392,((0x73U == vlSelf->inst)));
        tracep->fullBit(oldp+393,((0x100073U == vlSelf->inst)));
        tracep->fullBit(oldp+394,((0x13U == vlSelf->inst)));
        tracep->fullBit(oldp+395,((0x30200073U == vlSelf->inst)));
        tracep->fullQData(oldp+396,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->inst 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (0xfffff000U 
                                                                   & vlSelf->inst))))),64);
        tracep->fullQData(oldp+398,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+400,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+402,((((- (QData)((IData)(
                                                         (vlSelf->inst 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 ((0xfe0U 
                                                                   & (vlSelf->inst 
                                                                      >> 0x14U)) 
                                                                  | (0x1fU 
                                                                     & (vlSelf->inst 
                                                                        >> 7U))))))),64);
        tracep->fullQData(oldp+404,((((- (QData)((IData)(
                                                         (vlSelf->inst 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 (vlSelf->inst 
                                                                  >> 0x14U))))),64);
        tracep->fullQData(oldp+406,((QData)((IData)(
                                                    (0x1fU 
                                                     & (vlSelf->inst 
                                                        >> 0xfU))))),64);
        tracep->fullQData(oldp+408,((QData)((IData)(
                                                    (0x1fU 
                                                     & (vlSelf->inst 
                                                        >> 0x14U))))),64);
        tracep->fullBit(oldp+410,(((0x37U == (0x7fU 
                                              & vlSelf->inst)) 
                                   | (0x17U == (0x7fU 
                                                & vlSelf->inst)))));
        tracep->fullBit(oldp+411,(((((((((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_addi) 
                                         | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_slti)) 
                                        | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_sltiu)) 
                                       | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_xori)) 
                                      | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_ori)) 
                                     | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_andi)) 
                                    | (3U == (0x7fU 
                                              & vlSelf->inst))) 
                                   | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_jalr))));
        tracep->fullBit(oldp+412,(((((0x37U == (0x7fU 
                                                & vlSelf->inst)) 
                                     | (0x17U == (0x7fU 
                                                  & vlSelf->inst))) 
                                    | (0x13U == (0x7fU 
                                                 & vlSelf->inst))) 
                                   | ((0x33U == (0x7fU 
                                                 & vlSelf->inst)) 
                                      & (~ (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_type_muldiv))))));
        tracep->fullBit(oldp+413,((((0x6fU == (0x7fU 
                                               & vlSelf->inst)) 
                                    | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_jalr)) 
                                   | (0x63U == (0x7fU 
                                                & vlSelf->inst)))));
        tracep->fullBit(oldp+414,(((((((0x100073U == vlSelf->inst) 
                                       | (0x73U == vlSelf->inst)) 
                                      | (0x13U == vlSelf->inst)) 
                                     | (0x30200073U 
                                        == vlSelf->inst)) 
                                    | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_fence)) 
                                   | (IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_fence_i))));
        tracep->fullBit(oldp+415,(((3U == (0x7fU & vlSelf->inst)) 
                                   | (0x23U == (0x7fU 
                                                & vlSelf->inst)))));
        tracep->fullBit(oldp+416,(((((((((((((0x37U 
                                              != (0x7fU 
                                                  & vlSelf->inst)) 
                                             & (0x17U 
                                                != 
                                                (0x7fU 
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
        tracep->fullBit(oldp+417,((((0x33U == (0x7fU 
                                               & vlSelf->inst)) 
                                    | (0x23U == (0x7fU 
                                                 & vlSelf->inst))) 
                                   | (0x63U == (0x7fU 
                                                & vlSelf->inst)))));
        tracep->fullQData(oldp+418,((((- (QData)((IData)(
                                                         (1U 
                                                          & (vlSelf->ysyx_22050368_top__DOT__dec_info_bus 
                                                             >> 3U))))) 
                                      & (4ULL + vlSelf->pc)) 
                                     | ((- (QData)((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_bjp1__DOT__jal))) 
                                        & (4ULL + vlSelf->pc)))),64);
        tracep->fullQData(oldp+420,((((- (QData)((IData)(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_bjp1__DOT__jal))) 
                                      & vlSelf->pc) 
                                     | ((- (QData)((IData)(
                                                           (1U 
                                                            & (vlSelf->ysyx_22050368_top__DOT__dec_info_bus 
                                                               >> 0xaU))))) 
                                        & vlSelf->ysyx_22050368_top__DOT__rs1))),64);
        tracep->fullCData(oldp+422,(vlSelf->ysyx_22050368_top__DOT__hold_flag),3);
        tracep->fullBit(oldp+423,(vlSelf->ysyx_22050368_top__DOT__rs1_en));
        tracep->fullBit(oldp+424,(vlSelf->ysyx_22050368_top__DOT__rs2_en));
        tracep->fullBit(oldp+425,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__rs1_en));
        tracep->fullBit(oldp+426,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__rs2_en));
        tracep->fullCData(oldp+427,(vlSelf->ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__mode),3);
        tracep->fullIData(oldp+428,(8U),32);
        tracep->fullIData(oldp+429,(3U),32);
        tracep->fullIData(oldp+430,(0x40U),32);
        tracep->fullQData(oldp+431,(0ULL),64);
        tracep->fullIData(oldp+433,(1U),32);
        tracep->fullIData(oldp+434,(0x43U),32);
        tracep->fullIData(oldp+435,(8U),32);
    }
}
