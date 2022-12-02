// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050368_top.h for the primary calling header

#include "Vysyx_22050368_top___024root.h"
#include "Vysyx_22050368_top__Syms.h"

//==========

void Vysyx_22050368_top___024root___eval(Vysyx_22050368_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050368_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050368_top___024root___eval\n"); );
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
