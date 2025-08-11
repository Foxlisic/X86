// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu.h for the primary calling header

#ifndef VERILATED_VCPU___024ROOT_H_
#define VERILATED_VCPU___024ROOT_H_  // guard

#include "verilated.h"


class Vcpu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcpu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(ce,0,0);
        VL_IN8(reset_n,0,0);
        VL_OUT8(m0,0,0);
        VL_IN8(in,7,0);
        VL_OUT8(out,7,0);
        VL_OUT8(we,0,0);
        VL_IN8(pin,7,0);
        VL_OUT8(pr,0,0);
        VL_OUT8(pw,0,0);
        CData/*0:0*/ cpu__DOT__cp;
        CData/*0:0*/ cpu__DOT__cpen;
        CData/*3:0*/ cpu__DOT__m;
        CData/*5:0*/ cpu__DOT__ta;
        CData/*5:0*/ cpu__DOT__tb;
        CData/*5:0*/ cpu__DOT__tm;
        CData/*5:0*/ cpu__DOT__divc;
        CData/*7:0*/ cpu__DOT__opcode;
        CData/*7:0*/ cpu__DOT__modrm;
        CData/*2:0*/ cpu__DOT__alu;
        CData/*0:0*/ cpu__DOT__size;
        CData/*0:0*/ cpu__DOT__dir;
        CData/*0:0*/ cpu__DOT__signd;
        CData/*2:0*/ cpu__DOT__preip;
        CData/*2:0*/ cpu__DOT__overs;
        CData/*2:0*/ cpu__DOT___overs;
        CData/*1:0*/ cpu__DOT__rep;
        CData/*1:0*/ cpu__DOT___rep;
        CData/*3:0*/ cpu__DOT__mn;
        CData/*7:0*/ cpu__DOT__branches;
        CData/*0:0*/ cpu__DOT__daa_m;
        CData/*7:0*/ cpu__DOT__daa_r;
        CData/*0:0*/ cpu__DOT__divr_bit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
        CData/*0:0*/ __VactContinue;
        VL_OUT16(pa,15,0);
        SData/*15:0*/ cpu__DOT__ax;
        SData/*15:0*/ cpu__DOT__bx;
        SData/*15:0*/ cpu__DOT__cx;
        SData/*15:0*/ cpu__DOT__dx;
        SData/*15:0*/ cpu__DOT__sp;
        SData/*15:0*/ cpu__DOT__bp;
        SData/*15:0*/ cpu__DOT__si;
        SData/*15:0*/ cpu__DOT__di;
        SData/*15:0*/ cpu__DOT__es;
        SData/*15:0*/ cpu__DOT__cs;
        SData/*15:0*/ cpu__DOT__ss;
        SData/*15:0*/ cpu__DOT__ds;
        SData/*11:0*/ cpu__DOT__flag;
        SData/*15:0*/ cpu__DOT__ip;
        SData/*15:0*/ cpu__DOT__ips;
        SData/*15:0*/ cpu__DOT__ea;
        SData/*15:0*/ cpu__DOT__seg;
        SData/*15:0*/ cpu__DOT__op1;
        SData/*15:0*/ cpu__DOT__op2;
        SData/*15:0*/ cpu__DOT__wb;
        SData/*15:0*/ cpu__DOT__segold;
        SData/*15:0*/ cpu__DOT__divr;
        SData/*15:0*/ cpu__DOT__ipn;
        SData/*15:0*/ cpu__DOT__ean;
        SData/*15:0*/ cpu__DOT__ipx;
        SData/*15:0*/ cpu__DOT__signex;
    };
    struct {
        SData/*15:0*/ cpu__DOT__ipsign;
        SData/*15:0*/ cpu__DOT__r20;
        SData/*15:0*/ cpu__DOT__r53;
        SData/*11:0*/ cpu__DOT__alu_flag;
        SData/*11:0*/ cpu__DOT__daa_f;
        SData/*15:0*/ cpu__DOT__aaa_r;
        SData/*11:0*/ cpu__DOT__aaa_f;
        SData/*15:0*/ cpu__DOT__rot_r;
        SData/*11:0*/ cpu__DOT__rot_f;
        SData/*15:0*/ cpu__DOT____VdfgRegularize_hcce91bd5_0_8;
        SData/*15:0*/ cpu__DOT____VdfgRegularize_hcce91bd5_0_9;
        SData/*15:0*/ cpu__DOT____VdfgRegularize_hcce91bd5_0_10;
        SData/*15:0*/ cpu__DOT____VdfgRegularize_hcce91bd5_0_11;
        SData/*15:0*/ cpu__DOT____VdfgRegularize_hcce91bd5_0_12;
        SData/*15:0*/ cpu__DOT____VdfgRegularize_hcce91bd5_0_13;
        SData/*15:0*/ cpu__DOT____VdfgRegularize_hcce91bd5_0_14;
        SData/*15:0*/ cpu__DOT____VdfgRegularize_hcce91bd5_0_15;
        VL_OUT(address,19,0);
        IData/*31:0*/ cpu__DOT__diva;
        IData/*16:0*/ cpu__DOT__alu_res;
        IData/*16:0*/ cpu__DOT__divr_next;
        IData/*31:0*/ cpu__DOT__dxax;
        IData/*31:0*/ cpu__DOT__ax00;
        IData/*31:0*/ cpu__DOT__mult;
        IData/*31:0*/ __VactIterCount;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcpu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcpu___024root(Vcpu__Syms* symsp, const char* v__name);
    ~Vcpu___024root();
    VL_UNCOPYABLE(Vcpu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
