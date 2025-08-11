// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvidac.h for the primary calling header

#ifndef VERILATED_VVIDAC___024ROOT_H_
#define VERILATED_VVIDAC___024ROOT_H_  // guard

#include "verilated.h"


class Vvidac__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vvidac___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset_n,0,0);
    VL_IN8(cmd,0,0);
    VL_IN8(page,0,0);
    VL_IN8(i,7,0);
    VL_OUT8(o,7,0);
    VL_OUT8(w,0,0);
    VL_OUT8(bsy,0,0);
    VL_OUT8(tx,7,0);
    VL_OUT8(ty,7,0);
    VL_IN8(td,7,0);
    CData/*7:0*/ vidac__DOT__t;
    CData/*7:0*/ vidac__DOT__tn;
    CData/*7:0*/ vidac__DOT__comm;
    CData/*3:0*/ vidac__DOT__b;
    CData/*0:0*/ vidac__DOT__xlt;
    CData/*0:0*/ vidac__DOT__ylt;
    CData/*0:0*/ vidac__DOT__wx;
    CData/*0:0*/ vidac__DOT__yof;
    CData/*3:0*/ vidac__DOT__dxrs;
    CData/*3:0*/ vidac__DOT__dyrs;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ vidac__DOT__dx;
    SData/*15:0*/ vidac__DOT__dy;
    SData/*15:0*/ vidac__DOT__x;
    SData/*15:0*/ vidac__DOT__y;
    SData/*15:0*/ vidac__DOT__err;
    SData/*15:0*/ vidac__DOT__x1;
    SData/*15:0*/ vidac__DOT__y1;
    SData/*15:0*/ vidac__DOT__x2;
    SData/*15:0*/ vidac__DOT__y2;
    SData/*15:0*/ vidac__DOT___x2;
    SData/*15:0*/ vidac__DOT___y2;
    SData/*15:0*/ vidac__DOT__sub_y;
    SData/*15:0*/ vidac__DOT__abs_x;
    SData/*15:0*/ vidac__DOT__e1;
    SData/*15:0*/ vidac__DOT__e2;
    SData/*15:0*/ vidac__DOT__cirx;
    SData/*9:0*/ vidac__DOT__dxnx;
    SData/*9:0*/ vidac__DOT__dynx;
    VL_OUT(a,17,0);
    IData/*17:0*/ vidac__DOT__u;
    IData/*16:0*/ vidac__DOT__ax;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vvidac__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vvidac___024root(Vvidac__Syms* symsp, const char* v__name);
    ~Vvidac___024root();
    VL_UNCOPYABLE(Vvidac___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
