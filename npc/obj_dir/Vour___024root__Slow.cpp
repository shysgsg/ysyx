// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vour.h for the primary calling header

#include "Vour___024root.h"
#include "Vour__Syms.h"

//==========


void Vour___024root___ctor_var_reset(Vour___024root* vlSelf);

Vour___024root::Vour___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vour___024root___ctor_var_reset(this);
}

void Vour___024root::__Vconfigure(Vour__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vour___024root::~Vour___024root() {
}

void Vour___024root___eval_initial(Vour___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vour__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vour___024root___eval_initial\n"); );
}

void Vour___024root___combo__TOP__1(Vour___024root* vlSelf);

void Vour___024root___eval_settle(Vour___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vour__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vour___024root___eval_settle\n"); );
    // Body
    Vour___024root___combo__TOP__1(vlSelf);
}

void Vour___024root___final(Vour___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vour__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vour___024root___final\n"); );
}

void Vour___024root___ctor_var_reset(Vour___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vour__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vour___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(1);
    vlSelf->b = VL_RAND_RESET_I(1);
    vlSelf->f = VL_RAND_RESET_I(1);
}
