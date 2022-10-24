// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vour.h for the primary calling header

#include "Vour___024root.h"
#include "Vour__Syms.h"

//==========

VL_INLINE_OPT void Vour___024root___combo__TOP__1(Vour___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vour__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vour___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->f = ((IData)(vlSelf->a) ^ (IData)(vlSelf->b));
}

void Vour___024root___eval(Vour___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vour__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vour___024root___eval\n"); );
    // Body
    Vour___024root___combo__TOP__1(vlSelf);
}

QData Vour___024root___change_request_1(Vour___024root* vlSelf);

VL_INLINE_OPT QData Vour___024root___change_request(Vour___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vour__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vour___024root___change_request\n"); );
    // Body
    return (Vour___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vour___024root___change_request_1(Vour___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vour__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vour___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vour___024root___eval_debug_assertions(Vour___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vour__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vour___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->a & 0xfeU))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelf->b & 0xfeU))) {
        Verilated::overWidthError("b");}
}
#endif  // VL_DEBUG
