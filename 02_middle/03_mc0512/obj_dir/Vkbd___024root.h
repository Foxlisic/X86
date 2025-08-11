// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vkbd.h for the primary calling header

#ifndef VERILATED_VKBD___024ROOT_H_
#define VERILATED_VKBD___024ROOT_H_  // guard

#include "verilated.h"


class Vkbd__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vkbd___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(ps_clock,0,0);
    VL_IN8(ps_data,0,0);
    VL_OUT8(done,0,0);
    VL_OUT8(data,7,0);
    CData/*1:0*/ kbd__DOT__klatch;
    CData/*3:0*/ kbd__DOT__kcount;
    CData/*7:0*/ kbd__DOT__kb_data;
    CData/*0:0*/ kbd__DOT__kbusy;
    CData/*0:0*/ kbd__DOT__kdone;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ kbd__DOT__kin;
    IData/*19:0*/ kbd__DOT__kout;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vkbd__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vkbd___024root(Vkbd__Syms* symsp, const char* v__name);
    ~Vkbd___024root();
    VL_UNCOPYABLE(Vkbd___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
