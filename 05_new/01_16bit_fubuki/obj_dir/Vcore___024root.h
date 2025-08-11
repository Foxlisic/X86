// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE___024ROOT_H_
#define VERILATED_VCORE___024ROOT_H_  // guard

#include "verilated.h"


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(ce,0,0);
        VL_IN8(reset_n,0,0);
        VL_IN8(cfg_ip0,0,0);
        VL_IN8(in,7,0);
        VL_OUT8(out,7,0);
        VL_OUT8(we,0,0);
        VL_OUT8(m0,0,0);
        VL_OUT8(port_w,0,0);
        VL_OUT8(port_r,0,0);
        VL_IN8(port_i,7,0);
        VL_OUT8(port_o,7,0);
        VL_IN8(irq,0,0);
        VL_IN8(irq_in,7,0);
        CData/*0:0*/ core__DOT__multzf;
        CData/*0:0*/ core__DOT__multcf;
        CData/*0:0*/ core__DOT__repa;
        CData/*0:0*/ core__DOT__repb;
        CData/*7:0*/ core__DOT__branches;
        CData/*0:0*/ core__DOT__cp;
        CData/*0:0*/ core__DOT__size;
        CData/*0:0*/ core__DOT__dir;
        CData/*0:0*/ core__DOT__cpen;
        CData/*0:0*/ core__DOT__over;
        CData/*0:0*/ core__DOT__iack;
        CData/*0:0*/ core__DOT__trace_ff;
        CData/*1:0*/ core__DOT__rep;
        CData/*3:0*/ core__DOT__fn;
        CData/*3:0*/ core__DOT__fnext;
        CData/*3:0*/ core__DOT__s1;
        CData/*3:0*/ core__DOT__s2;
        CData/*7:0*/ core__DOT__opcode;
        CData/*7:0*/ core__DOT__modrm;
        CData/*7:0*/ core__DOT__intr;
        CData/*2:0*/ core__DOT__alu;
        CData/*0:0*/ core__DOT__imulw;
        CData/*0:0*/ core__DOT__sign;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
        CData/*0:0*/ __VactContinue;
        VL_OUT16(port_a,15,0);
        VL_OUT16(ax,15,0);
        VL_OUT16(bx,15,0);
        VL_OUT16(cx,15,0);
        VL_OUT16(dx,15,0);
        VL_OUT16(sp,15,0);
        VL_OUT16(bp,15,0);
        VL_OUT16(si,15,0);
        VL_OUT16(di,15,0);
        VL_OUT16(es,15,0);
        VL_OUT16(cs,15,0);
        VL_OUT16(ss,15,0);
        VL_OUT16(ds,15,0);
        VL_OUT16(fs,15,0);
        VL_OUT16(gs,15,0);
        VL_OUT16(ip,15,0);
        VL_OUT16(flags,11,0);
        SData/*15:0*/ core__DOT__signex;
        SData/*15:0*/ core__DOT__rin;
        SData/*15:0*/ core__DOT__sinc;
        SData/*15:0*/ core__DOT__dinc;
        SData/*15:0*/ core__DOT__repc;
        SData/*15:0*/ core__DOT__segment;
    };
    struct {
        SData/*15:0*/ core__DOT__ea;
        SData/*15:0*/ core__DOT__wb;
        SData/*15:0*/ core__DOT__op1;
        SData/*15:0*/ core__DOT__op2;
        SData/*15:0*/ core__DOT__tmp16;
        SData/*11:0*/ core__DOT__alu_f;
        SData/*15:0*/ core__DOT__rot_r;
        SData/*11:0*/ core__DOT__rot_f;
        VL_OUT(address,19,0);
        IData/*31:0*/ core__DOT__mult;
        IData/*31:0*/ core__DOT__diva;
        IData/*31:0*/ core__DOT__divb;
        IData/*31:0*/ core__DOT__divr;
        IData/*31:0*/ core__DOT__divi;
        IData/*31:0*/ core__DOT__div4;
        IData/*31:0*/ core__DOT__div4a;
        IData/*16:0*/ core__DOT__alu_r;
        IData/*31:0*/ __VactIterCount;
        QData/*32:0*/ core__DOT__div4c;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore___024root(Vcore__Syms* symsp, const char* v__name);
    ~Vcore___024root();
    VL_UNCOPYABLE(Vcore___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
