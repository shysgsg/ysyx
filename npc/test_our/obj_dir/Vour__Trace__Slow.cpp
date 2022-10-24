// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vour__Syms.h"


void Vour___024root__traceInitSub0(Vour___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vour___024root__traceInitTop(Vour___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vour__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vour___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vour___024root__traceInitSub0(Vour___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vour__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"a", false,-1);
        tracep->declBit(c+2,"b", false,-1);
        tracep->declBit(c+3,"f", false,-1);
        tracep->declBit(c+1,"our a", false,-1);
        tracep->declBit(c+2,"our b", false,-1);
        tracep->declBit(c+3,"our f", false,-1);
    }
}

void Vour___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vour___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vour___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vour___024root__traceRegister(Vour___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vour__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vour___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vour___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vour___024root__traceCleanup, vlSelf);
    }
}

void Vour___024root__traceFullSub0(Vour___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vour___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vour___024root* const __restrict vlSelf = static_cast<Vour___024root*>(voidSelf);
    Vour__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vour___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vour___024root__traceFullSub0(Vour___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vour__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->a));
        tracep->fullBit(oldp+2,(vlSelf->b));
        tracep->fullBit(oldp+3,(vlSelf->f));
    }
}
