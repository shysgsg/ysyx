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
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"rst", false,-1);
        tracep->declBit(c+3,"success_flag", false,-1);
        tracep->declBit(c+1,"ysyx_22050368_top clk", false,-1);
        tracep->declBit(c+2,"ysyx_22050368_top rst", false,-1);
        tracep->declBit(c+3,"ysyx_22050368_top success_flag", false,-1);
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
        tracep->fullBit(oldp+1,(vlSelf->clk));
        tracep->fullBit(oldp+2,(vlSelf->rst));
        tracep->fullBit(oldp+3,(vlSelf->success_flag));
    }
}
