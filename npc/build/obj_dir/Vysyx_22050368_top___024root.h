// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22050368_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22050368_TOP___024ROOT_H_
#define VERILATED_VYSYX_22050368_TOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22050368_top__Syms;
class Vysyx_22050368_top_VerilatedVcd;


//----------

VL_MODULE(Vysyx_22050368_top___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(success_flag,0,0);
    VL_IN(inst,31,0);
    VL_OUT64(pc,63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*2:0*/ ysyx_22050368_top__DOT__hold_flag;
        CData/*4:0*/ ysyx_22050368_top__DOT__rd_index;
        CData/*0:0*/ ysyx_22050368_top__DOT__rs1_en;
        CData/*0:0*/ ysyx_22050368_top__DOT__rs2_en;
        CData/*0:0*/ ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_jalr;
        CData/*0:0*/ ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_addi;
        CData/*0:0*/ ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_slti;
        CData/*0:0*/ ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_sltiu;
        CData/*0:0*/ ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_xori;
        CData/*0:0*/ ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_ori;
        CData/*0:0*/ ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_andi;
        CData/*0:0*/ ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_slli;
        CData/*0:0*/ ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_srli;
        CData/*0:0*/ ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_srai;
        CData/*0:0*/ ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_fence;
        CData/*0:0*/ ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_fence_i;
        CData/*0:0*/ ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrw;
        CData/*0:0*/ ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrs;
        CData/*0:0*/ ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrc;
        CData/*0:0*/ ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrwi;
        CData/*0:0*/ ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrsi;
        CData/*0:0*/ ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_csrrci;
        CData/*0:0*/ ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_mul;
        CData/*0:0*/ ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_mulh;
        CData/*0:0*/ ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_mulhsu;
        CData/*0:0*/ ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_mulhu;
        CData/*0:0*/ ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_div;
        CData/*0:0*/ ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_divu;
        CData/*0:0*/ ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_rem;
        CData/*0:0*/ ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_remu;
        CData/*0:0*/ ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__inst_type_muldiv;
        CData/*7:0*/ ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_sys_info_bus;
        CData/*0:0*/ ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__op_csr;
        CData/*0:0*/ ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__access_rd;
        CData/*0:0*/ ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__rs1_en;
        CData/*0:0*/ ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__rs2_en;
        CData/*2:0*/ ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__mode;
        CData/*0:0*/ ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__hit;
        CData/*0:0*/ ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_bjp1__DOT__jal;
        SData/*10:0*/ ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_bjp_info_bus;
        SData/*10:0*/ ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_muldiv_info_bus;
        SData/*10:0*/ ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_mem_info_bus;
        IData/*18:0*/ ysyx_22050368_top__DOT__dec_info_bus;
        IData/*16:0*/ ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_alu_info_bus;
        IData/*18:0*/ ysyx_22050368_top__DOT__ysyx_22050368_idu1__DOT__dec_csr_info_bus;
        IData/*31:0*/ ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_wen;
        QData/*63:0*/ ysyx_22050368_top__DOT__rs1;
        QData/*63:0*/ ysyx_22050368_top__DOT__rs2;
        QData/*63:0*/ ysyx_22050368_top__DOT__rd;
        QData/*63:0*/ ysyx_22050368_top__DOT__dec_imm;
        QData/*63:0*/ ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__alu_op2;
        QData/*63:0*/ ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__alu_wbck_dat;
        QData/*63:0*/ ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__result1;
        QData/*63:0*/ ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__lut_out;
        QData/*63:0*/ ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_bjp1__DOT__op1;
        QData/*63:0*/ ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
        QData/*63:0*/ ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
        QData/*63:0*/ ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
        QData/*63:0*/ ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
        QData/*63:0*/ ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
        QData/*63:0*/ ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
        QData/*63:0*/ ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
        QData/*63:0*/ ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
        QData/*63:0*/ ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
    };
    struct {
        QData/*63:0*/ ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
        QData/*63:0*/ ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
        QData/*63:0*/ ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
        QData/*63:0*/ ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
        QData/*63:0*/ ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
        QData/*63:0*/ ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
        QData/*63:0*/ ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
        QData/*63:0*/ ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
        QData/*63:0*/ ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
        QData/*63:0*/ ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
        QData/*63:0*/ ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
        QData/*63:0*/ ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
        QData/*63:0*/ ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
        QData/*63:0*/ ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
        QData/*63:0*/ ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
        QData/*63:0*/ ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
        QData/*63:0*/ ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
        QData/*63:0*/ ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
        QData/*63:0*/ ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
        QData/*63:0*/ ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
        QData/*63:0*/ ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
        QData/*63:0*/ ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl__DOT__qout_r;
        VlUnpacked<QData/*63:0*/, 8> ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__result_bus;
        VlUnpacked<VlWide<3>/*66:0*/, 8> ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 8> ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 8> ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT__i0__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*63:0*/, 32> ysyx_22050368_top__DOT__ysyx_22050368_regfile1__DOT__rf_r;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlWide<17>/*535:0*/ ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT__alu_output_mux__DOT____Vcellinp__i0____pinNumber4;
    VlUnpacked<QData/*63:0*/, 8> ysyx_22050368_top__DOT__ysyx_22050368_exu1__DOT__ysyx_22050368_alu1__DOT____Vcellinp__alu_output_mux____pinNumber1;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vysyx_22050368_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22050368_top___024root);  ///< Copying not allowed
  public:
    Vysyx_22050368_top___024root(const char* name);
    ~Vysyx_22050368_top___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22050368_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
