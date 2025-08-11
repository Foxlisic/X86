// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vgpu.h for the primary calling header

#ifndef VERILATED_VGPU___024ROOT_H_
#define VERILATED_VGPU___024ROOT_H_  // guard

#include "verilated.h"


class Vgpu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vgpu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_OUT8(r,3,0);
    VL_OUT8(g,3,0);
    VL_OUT8(b,3,0);
    VL_OUT8(hs,0,0);
    VL_OUT8(vs,0,0);
    VL_IN8(char_data,7,0);
    VL_IN8(font_data,7,0);
    CData/*0:0*/ gpu__DOT__xmax;
    CData/*0:0*/ gpu__DOT__ymax;
    CData/*0:0*/ gpu__DOT__cwin;
    CData/*0:0*/ gpu__DOT__flash;
    CData/*7:0*/ gpu__DOT__attr;
    CData/*7:0*/ gpu__DOT__char;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
    CData/*0:0*/ __VactContinue;
    VL_OUT16(char_address,11,0);
    VL_OUT16(font_address,11,0);
    VL_IN16(cursor,10,0);
    SData/*10:0*/ gpu__DOT__x;
    SData/*10:0*/ gpu__DOT__y;
    SData/*10:0*/ gpu__DOT__id;
    SData/*15:0*/ gpu__DOT__color;
    IData/*23:0*/ gpu__DOT__timer;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vgpu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vgpu___024root(Vgpu__Syms* symsp, const char* v__name);
    ~Vgpu___024root();
    VL_UNCOPYABLE(Vgpu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
