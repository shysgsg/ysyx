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
