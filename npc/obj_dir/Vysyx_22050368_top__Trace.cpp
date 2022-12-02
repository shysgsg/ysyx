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
        tracep->chgBit(oldp+0,(vlSelf->clk));
        tracep->chgBit(oldp+1,(vlSelf->rst));
        tracep->chgBit(oldp+2,(vlSelf->success_flag));
    }
}

void Vysyx_22050368_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    Vysyx_22050368_top___024root* const __restrict vlSelf = static_cast<Vysyx_22050368_top___024root*>(voidSelf);
    Vysyx_22050368_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vm_traceActivity[0U] = 0U;
    }
}
