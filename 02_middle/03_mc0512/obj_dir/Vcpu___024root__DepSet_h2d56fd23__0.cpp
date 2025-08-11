// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "Vcpu__pch.h"
#include "Vcpu___024root.h"

void Vcpu___024root___ico_sequent__TOP__0(Vcpu___024root* vlSelf);

void Vcpu___024root___eval_ico(Vcpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vcpu___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vcpu___024root___ico_sequent__TOP__0(Vcpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___ico_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ cpu__DOT__daa_i;
    cpu__DOT__daa_i = 0;
    CData/*0:0*/ cpu__DOT__daa_c;
    cpu__DOT__daa_c = 0;
    CData/*0:0*/ cpu__DOT__daa_t;
    cpu__DOT__daa_t = 0;
    // Body
    vlSelfRef.cpu__DOT__signex = ((0xff00U & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.in) 
                                                             >> 7U)))) 
                                              << 8U)) 
                                  | (IData)(vlSelfRef.in));
    vlSelfRef.cpu__DOT__r20 = ((0U == (7U & (IData)(vlSelfRef.in)))
                                ? (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_8)
                                : ((1U == (7U & (IData)(vlSelfRef.in)))
                                    ? (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_9)
                                    : ((2U == (7U & (IData)(vlSelfRef.in)))
                                        ? (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_10)
                                        : ((3U == (7U 
                                                   & (IData)(vlSelfRef.in)))
                                            ? (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_11)
                                            : ((4U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelfRef.in)))
                                                ? (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_12)
                                                : (
                                                   (5U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelfRef.in)))
                                                    ? (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_13)
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelfRef.in)))
                                                     ? (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_14)
                                                     : (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_15))))))));
    vlSelfRef.cpu__DOT__r53 = ((0U == (7U & ((IData)(vlSelfRef.in) 
                                             >> 3U)))
                                ? (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_8)
                                : ((1U == (7U & ((IData)(vlSelfRef.in) 
                                                 >> 3U)))
                                    ? (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_9)
                                    : ((2U == (7U & 
                                               ((IData)(vlSelfRef.in) 
                                                >> 3U)))
                                        ? (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_10)
                                        : ((3U == (7U 
                                                   & ((IData)(vlSelfRef.in) 
                                                      >> 3U)))
                                            ? (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_11)
                                            : ((4U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelfRef.in) 
                                                    >> 3U)))
                                                ? (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_12)
                                                : (
                                                   (5U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.in) 
                                                        >> 3U)))
                                                    ? (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_13)
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelfRef.in) 
                                                         >> 3U)))
                                                     ? (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_14)
                                                     : (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_15))))))));
    if (vlSelfRef.cpu__DOT__daa_m) {
        cpu__DOT__daa_i = (0x1ffU & ((8U & (IData)(vlSelfRef.in))
                                      ? ((0xffU & (IData)(vlSelfRef.cpu__DOT__ax)) 
                                         - (IData)(6U))
                                      : ((IData)(6U) 
                                         + (0xffU & (IData)(vlSelfRef.cpu__DOT__ax)))));
        cpu__DOT__daa_c = (1U & ((IData)(cpu__DOT__daa_i) 
                                 >> 8U));
    } else {
        cpu__DOT__daa_i = (0x1ffU & (0xffU & (IData)(vlSelfRef.cpu__DOT__ax)));
        cpu__DOT__daa_c = (1U & (IData)(vlSelfRef.cpu__DOT__flag));
    }
    vlSelfRef.cpu__DOT__ipsign = (0xffffU & ((IData)(1U) 
                                             + ((IData)(vlSelfRef.cpu__DOT__ip) 
                                                + (IData)(vlSelfRef.cpu__DOT__signex))));
    vlSelfRef.cpu__DOT__aaa_r = ((0xff00U & (((IData)(vlSelfRef.cpu__DOT__daa_m)
                                               ? ((8U 
                                                   & (IData)(vlSelfRef.in))
                                                   ? 
                                                  ((0xffU 
                                                    & ((IData)(vlSelfRef.cpu__DOT__ax) 
                                                       >> 8U)) 
                                                   - (IData)(1U))
                                                   : 
                                                  ((IData)(1U) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(vlSelfRef.cpu__DOT__ax) 
                                                       >> 8U))))
                                               : (0xffU 
                                                  & ((IData)(vlSelfRef.cpu__DOT__ax) 
                                                     >> 8U))) 
                                             << 8U)) 
                                 | (0xfU & (IData)(cpu__DOT__daa_i)));
    cpu__DOT__daa_t = ((IData)(cpu__DOT__daa_c) | (0x9fU 
                                                   < 
                                                   (0xffU 
                                                    & (IData)(cpu__DOT__daa_i))));
    vlSelfRef.cpu__DOT__daa_r = (0xffU & ((IData)(cpu__DOT__daa_t)
                                           ? ((8U & (IData)(vlSelfRef.in))
                                               ? ((IData)(cpu__DOT__daa_i) 
                                                  - (IData)(0x60U))
                                               : ((IData)(0x60U) 
                                                  + (IData)(cpu__DOT__daa_i)))
                                           : (IData)(cpu__DOT__daa_i)));
    vlSelfRef.cpu__DOT__daa_f = (2U | ((0xf00U & (IData)(vlSelfRef.cpu__DOT__flag)) 
                                       | ((0x80U & (IData)(vlSelfRef.cpu__DOT__daa_r)) 
                                          | ((0x40U 
                                              & ((~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSelfRef.cpu__DOT__daa_r)))) 
                                                 << 6U)) 
                                             | ((0x10U 
                                                 & ((0xfffffff0U 
                                                     & (IData)(vlSelfRef.cpu__DOT__flag)) 
                                                    | ((IData)(vlSelfRef.cpu__DOT__daa_m) 
                                                       << 4U))) 
                                                | ((4U 
                                                    & ((~ 
                                                        VL_REDXOR_8(vlSelfRef.cpu__DOT__daa_r)) 
                                                       << 2U)) 
                                                   | ((IData)(cpu__DOT__daa_t) 
                                                      | (IData)(cpu__DOT__daa_c))))))));
}

void Vcpu___024root___eval_triggers__ico(Vcpu___024root* vlSelf);

bool Vcpu___024root___eval_phase__ico(Vcpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_phase__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vcpu___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vcpu___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vcpu___024root___eval_act(Vcpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vcpu___024root___nba_sequent__TOP__0(Vcpu___024root* vlSelf);

void Vcpu___024root___eval_nba(Vcpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcpu___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vcpu___024root___nba_sequent__TOP__0(Vcpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ cpu__DOT__rsize;
    cpu__DOT__rsize = 0;
    CData/*0:0*/ cpu__DOT__is_lgc;
    cpu__DOT__is_lgc = 0;
    SData/*8:0*/ cpu__DOT__daa_i;
    cpu__DOT__daa_i = 0;
    CData/*0:0*/ cpu__DOT__daa_c;
    cpu__DOT__daa_c = 0;
    CData/*0:0*/ cpu__DOT__daa_t;
    cpu__DOT__daa_t = 0;
    CData/*0:0*/ cpu__DOT__rot_shft;
    cpu__DOT__rot_shft = 0;
    CData/*0:0*/ cpu__DOT____VdfgRegularize_hcce91bd5_0_2;
    cpu__DOT____VdfgRegularize_hcce91bd5_0_2 = 0;
    IData/*16:0*/ cpu__DOT____VdfgRegularize_hcce91bd5_0_18;
    cpu__DOT____VdfgRegularize_hcce91bd5_0_18 = 0;
    IData/*16:0*/ cpu__DOT____VdfgRegularize_hcce91bd5_0_21;
    cpu__DOT____VdfgRegularize_hcce91bd5_0_21 = 0;
    CData/*0:0*/ cpu__DOT____VdfgRegularize_hcce91bd5_0_25;
    cpu__DOT____VdfgRegularize_hcce91bd5_0_25 = 0;
    CData/*0:0*/ cpu__DOT____VdfgRegularize_hcce91bd5_0_29;
    cpu__DOT____VdfgRegularize_hcce91bd5_0_29 = 0;
    CData/*0:0*/ cpu__DOT____VdfgRegularize_hcce91bd5_0_45;
    cpu__DOT____VdfgRegularize_hcce91bd5_0_45 = 0;
    SData/*15:0*/ __Vdly__cpu__DOT__ip;
    __Vdly__cpu__DOT__ip = 0;
    CData/*2:0*/ __Vdly__cpu__DOT__preip;
    __Vdly__cpu__DOT__preip = 0;
    CData/*2:0*/ __Vdly__cpu__DOT___overs;
    __Vdly__cpu__DOT___overs = 0;
    CData/*1:0*/ __Vdly__cpu__DOT___rep;
    __Vdly__cpu__DOT___rep = 0;
    CData/*5:0*/ __Vdly__cpu__DOT__ta;
    __Vdly__cpu__DOT__ta = 0;
    CData/*5:0*/ __Vdly__cpu__DOT__tm;
    __Vdly__cpu__DOT__tm = 0;
    CData/*3:0*/ __Vdly__cpu__DOT__m;
    __Vdly__cpu__DOT__m = 0;
    SData/*15:0*/ __Vdly__cpu__DOT__ips;
    __Vdly__cpu__DOT__ips = 0;
    CData/*7:0*/ __Vdly__cpu__DOT__opcode;
    __Vdly__cpu__DOT__opcode = 0;
    CData/*2:0*/ __Vdly__cpu__DOT__overs;
    __Vdly__cpu__DOT__overs = 0;
    CData/*1:0*/ __Vdly__cpu__DOT__rep;
    __Vdly__cpu__DOT__rep = 0;
    CData/*5:0*/ __Vdly__cpu__DOT__tb;
    __Vdly__cpu__DOT__tb = 0;
    SData/*15:0*/ __Vdly__cpu__DOT__seg;
    __Vdly__cpu__DOT__seg = 0;
    CData/*0:0*/ __Vdly__cpu__DOT__cpen;
    __Vdly__cpu__DOT__cpen = 0;
    SData/*15:0*/ __Vdly__cpu__DOT__ea;
    __Vdly__cpu__DOT__ea = 0;
    CData/*7:0*/ __Vdly__cpu__DOT__modrm;
    __Vdly__cpu__DOT__modrm = 0;
    CData/*0:0*/ __Vdly__cpu__DOT__dir;
    __Vdly__cpu__DOT__dir = 0;
    CData/*0:0*/ __Vdly__cpu__DOT__size;
    __Vdly__cpu__DOT__size = 0;
    CData/*2:0*/ __Vdly__cpu__DOT__alu;
    __Vdly__cpu__DOT__alu = 0;
    SData/*11:0*/ __Vdly__cpu__DOT__flag;
    __Vdly__cpu__DOT__flag = 0;
    SData/*15:0*/ __Vdly__cpu__DOT__ax;
    __Vdly__cpu__DOT__ax = 0;
    SData/*15:0*/ __Vdly__cpu__DOT__dx;
    __Vdly__cpu__DOT__dx = 0;
    SData/*15:0*/ __Vdly__cpu__DOT__wb;
    __Vdly__cpu__DOT__wb = 0;
    SData/*15:0*/ __Vdly__cpu__DOT__op1;
    __Vdly__cpu__DOT__op1 = 0;
    SData/*15:0*/ __Vdly__cpu__DOT__op2;
    __Vdly__cpu__DOT__op2 = 0;
    CData/*0:0*/ __Vdly__cpu__DOT__cp;
    __Vdly__cpu__DOT__cp = 0;
    SData/*15:0*/ __Vdly__cpu__DOT__cx;
    __Vdly__cpu__DOT__cx = 0;
    SData/*15:0*/ __Vdly__cpu__DOT__es;
    __Vdly__cpu__DOT__es = 0;
    SData/*15:0*/ __Vdly__cpu__DOT__ss;
    __Vdly__cpu__DOT__ss = 0;
    SData/*15:0*/ __Vdly__cpu__DOT__ds;
    __Vdly__cpu__DOT__ds = 0;
    SData/*15:0*/ __Vdly__cpu__DOT__cs;
    __Vdly__cpu__DOT__cs = 0;
    SData/*15:0*/ __Vdly__cpu__DOT__si;
    __Vdly__cpu__DOT__si = 0;
    SData/*15:0*/ __Vdly__cpu__DOT__di;
    __Vdly__cpu__DOT__di = 0;
    SData/*15:0*/ __Vdly__cpu__DOT__sp;
    __Vdly__cpu__DOT__sp = 0;
    IData/*31:0*/ __Vdly__cpu__DOT__diva;
    __Vdly__cpu__DOT__diva = 0;
    CData/*5:0*/ __Vdly__cpu__DOT__divc;
    __Vdly__cpu__DOT__divc = 0;
    SData/*15:0*/ __Vdly__cpu__DOT__divr;
    __Vdly__cpu__DOT__divr = 0;
    SData/*15:0*/ __Vdly__pa;
    __Vdly__pa = 0;
    CData/*0:0*/ __Vdly__cpu__DOT__signd;
    __Vdly__cpu__DOT__signd = 0;
    SData/*15:0*/ __Vdly__cpu__DOT__segold;
    __Vdly__cpu__DOT__segold = 0;
    // Body
    __Vdly__cpu__DOT__segold = vlSelfRef.cpu__DOT__segold;
    __Vdly__cpu__DOT__signd = vlSelfRef.cpu__DOT__signd;
    __Vdly__pa = vlSelfRef.pa;
    __Vdly__cpu__DOT__divc = vlSelfRef.cpu__DOT__divc;
    __Vdly__cpu__DOT__ds = vlSelfRef.cpu__DOT__ds;
    __Vdly__cpu__DOT__ss = vlSelfRef.cpu__DOT__ss;
    __Vdly__cpu__DOT__es = vlSelfRef.cpu__DOT__es;
    __Vdly__cpu__DOT__wb = vlSelfRef.cpu__DOT__wb;
    __Vdly__cpu__DOT__dir = vlSelfRef.cpu__DOT__dir;
    __Vdly__cpu__DOT__modrm = vlSelfRef.cpu__DOT__modrm;
    __Vdly__cpu__DOT__cpen = vlSelfRef.cpu__DOT__cpen;
    __Vdly__cpu__DOT__tb = vlSelfRef.cpu__DOT__tb;
    __Vdly__cpu__DOT__rep = vlSelfRef.cpu__DOT__rep;
    __Vdly__cpu__DOT__overs = vlSelfRef.cpu__DOT__overs;
    __Vdly__cpu__DOT__opcode = vlSelfRef.cpu__DOT__opcode;
    __Vdly__cpu__DOT__ips = vlSelfRef.cpu__DOT__ips;
    __Vdly__cpu__DOT__tm = vlSelfRef.cpu__DOT__tm;
    __Vdly__cpu__DOT___rep = vlSelfRef.cpu__DOT___rep;
    __Vdly__cpu__DOT___overs = vlSelfRef.cpu__DOT___overs;
    __Vdly__cpu__DOT__m = vlSelfRef.cpu__DOT__m;
    __Vdly__cpu__DOT__preip = vlSelfRef.cpu__DOT__preip;
    __Vdly__cpu__DOT__cs = vlSelfRef.cpu__DOT__cs;
    __Vdly__cpu__DOT__cp = vlSelfRef.cpu__DOT__cp;
    __Vdly__cpu__DOT__seg = vlSelfRef.cpu__DOT__seg;
    __Vdly__cpu__DOT__divr = vlSelfRef.cpu__DOT__divr;
    __Vdly__cpu__DOT__diva = vlSelfRef.cpu__DOT__diva;
    __Vdly__cpu__DOT__ea = vlSelfRef.cpu__DOT__ea;
    __Vdly__cpu__DOT__ip = vlSelfRef.cpu__DOT__ip;
    __Vdly__cpu__DOT__sp = vlSelfRef.cpu__DOT__sp;
    __Vdly__cpu__DOT__di = vlSelfRef.cpu__DOT__di;
    __Vdly__cpu__DOT__si = vlSelfRef.cpu__DOT__si;
    __Vdly__cpu__DOT__cx = vlSelfRef.cpu__DOT__cx;
    __Vdly__cpu__DOT__dx = vlSelfRef.cpu__DOT__dx;
    __Vdly__cpu__DOT__alu = vlSelfRef.cpu__DOT__alu;
    __Vdly__cpu__DOT__op2 = vlSelfRef.cpu__DOT__op2;
    __Vdly__cpu__DOT__op1 = vlSelfRef.cpu__DOT__op1;
    __Vdly__cpu__DOT__ta = vlSelfRef.cpu__DOT__ta;
    __Vdly__cpu__DOT__flag = vlSelfRef.cpu__DOT__flag;
    __Vdly__cpu__DOT__ax = vlSelfRef.cpu__DOT__ax;
    __Vdly__cpu__DOT__size = vlSelfRef.cpu__DOT__size;
    if (vlSelfRef.reset_n) {
        if (vlSelfRef.ce) {
            vlSelfRef.we = 0U;
            vlSelfRef.pr = 0U;
            vlSelfRef.pw = 0U;
            if (((((((((0U == (IData)(vlSelfRef.cpu__DOT__ta)) 
                       | (5U == (IData)(vlSelfRef.cpu__DOT__ta))) 
                      | (1U == (IData)(vlSelfRef.cpu__DOT__ta))) 
                     | (2U == (IData)(vlSelfRef.cpu__DOT__ta))) 
                    | (3U == (IData)(vlSelfRef.cpu__DOT__ta))) 
                   | (4U == (IData)(vlSelfRef.cpu__DOT__ta))) 
                  | (6U == (IData)(vlSelfRef.cpu__DOT__ta))) 
                 | (7U == (IData)(vlSelfRef.cpu__DOT__ta)))) {
                if ((0U == (IData)(vlSelfRef.cpu__DOT__ta))) {
                    __Vdly__cpu__DOT__ip = vlSelfRef.cpu__DOT__ipn;
                    if ((0x26U == (0xe7U & (IData)(vlSelfRef.in)))) {
                        __Vdly__cpu__DOT__preip = (7U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.cpu__DOT__preip)));
                        __Vdly__cpu__DOT___overs = 
                            (1U | (6U & ((IData)(vlSelfRef.in) 
                                         >> 2U)));
                    } else if ((0xf2U == (0xfeU & (IData)(vlSelfRef.in)))) {
                        __Vdly__cpu__DOT__preip = (7U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.cpu__DOT__preip)));
                        __Vdly__cpu__DOT___rep = (3U 
                                                  & (IData)(vlSelfRef.in));
                    } else if (((0x64U == (0xfcU & (IData)(vlSelfRef.in))) 
                                || (0xf0U == (IData)(vlSelfRef.in)))) {
                        __Vdly__cpu__DOT__preip = (7U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.cpu__DOT__preip)));
                    } else {
                        __Vdly__cpu__DOT__preip = 0U;
                        __Vdly__cpu__DOT__ta = 1U;
                        __Vdly__cpu__DOT__tm = 0U;
                        __Vdly__cpu__DOT__m = 0U;
                        __Vdly__cpu__DOT__ips = vlSelfRef.cpu__DOT__ipx;
                        __Vdly__cpu__DOT__opcode = vlSelfRef.in;
                        __Vdly__cpu__DOT__overs = vlSelfRef.cpu__DOT___overs;
                        __Vdly__cpu__DOT__rep = vlSelfRef.cpu__DOT___rep;
                        __Vdly__cpu__DOT__tb = 0U;
                        __Vdly__cpu__DOT__seg = ((4U 
                                                  & (IData)(vlSelfRef.cpu__DOT___overs))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.cpu__DOT___overs))
                                                   ? (IData)(vlSelfRef.cpu__DOT__ds)
                                                   : (IData)(vlSelfRef.cpu__DOT__ss))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.cpu__DOT___overs))
                                                   ? (IData)(vlSelfRef.cpu__DOT__cs)
                                                   : (IData)(vlSelfRef.cpu__DOT__es)));
                        __Vdly__cpu__DOT__cpen = 1U;
                        __Vdly__cpu__DOT__ea = 0U;
                        __Vdly__cpu__DOT___rep = 0U;
                        __Vdly__cpu__DOT__modrm = 0U;
                        __Vdly__cpu__DOT___overs = 6U;
                        __Vdly__cpu__DOT__dir = (1U 
                                                 & ((IData)(vlSelfRef.in) 
                                                    >> 1U));
                        __Vdly__cpu__DOT__size = (1U 
                                                  & (IData)(vlSelfRef.in));
                        __Vdly__cpu__DOT__alu = (7U 
                                                 & ((IData)(vlSelfRef.in) 
                                                    >> 3U));
                        if ((((((((((0x80U == (0xf0U 
                                               & (IData)(vlSelfRef.in))) 
                                    || (0xc0U == (0xfeU 
                                                  & (IData)(vlSelfRef.in)))) 
                                   || (0xc4U == (0xfcU 
                                                 & (IData)(vlSelfRef.in)))) 
                                  || (0x62U == (0xfeU 
                                                & (IData)(vlSelfRef.in)))) 
                                 || (0xd0U == (0xfcU 
                                               & (IData)(vlSelfRef.in)))) 
                                || (0xf6U == (0xf6U 
                                              & (IData)(vlSelfRef.in)))) 
                               || (0xd8U == (0xf8U 
                                             & (IData)(vlSelfRef.in)))) 
                              || (0x69U == (0xfdU & (IData)(vlSelfRef.in)))) 
                             || (0U == (0xc4U & (IData)(vlSelfRef.in))))) {
                            __Vdly__cpu__DOT__ta = 5U;
                        }
                        if (((((((((0xf4U == (IData)(vlSelfRef.in)) 
                                   | (0xf5U == (IData)(vlSelfRef.in))) 
                                  | (0xf8U == (0xfeU 
                                               & (IData)(vlSelfRef.in)))) 
                                 | (0xfaU == (0xfeU 
                                              & (IData)(vlSelfRef.in)))) 
                                | (0xfcU == (0xfeU 
                                             & (IData)(vlSelfRef.in)))) 
                               | (0x98U == (IData)(vlSelfRef.in))) 
                              | (0x99U == (IData)(vlSelfRef.in))) 
                             | (6U == (0xe7U & (IData)(vlSelfRef.in))))) {
                            if ((0xf4U == (IData)(vlSelfRef.in))) {
                                __Vdly__cpu__DOT__ta = 0U;
                                __Vdly__cpu__DOT__ip 
                                    = vlSelfRef.cpu__DOT__ipx;
                            } else if ((0xf5U == (IData)(vlSelfRef.in))) {
                                __Vdly__cpu__DOT__flag 
                                    = ((0xffeU & (IData)(__Vdly__cpu__DOT__flag)) 
                                       | (1U & (~ (IData)(vlSelfRef.cpu__DOT__flag))));
                                __Vdly__cpu__DOT__ta = 0U;
                            } else if ((0xf8U == (0xfeU 
                                                  & (IData)(vlSelfRef.in)))) {
                                __Vdly__cpu__DOT__flag 
                                    = ((0xffeU & (IData)(__Vdly__cpu__DOT__flag)) 
                                       | (1U & (IData)(vlSelfRef.in)));
                                __Vdly__cpu__DOT__ta = 0U;
                            } else if ((0xfaU == (0xfeU 
                                                  & (IData)(vlSelfRef.in)))) {
                                __Vdly__cpu__DOT__flag 
                                    = ((0xdffU & (IData)(__Vdly__cpu__DOT__flag)) 
                                       | (0x200U & 
                                          ((IData)(vlSelfRef.in) 
                                           << 9U)));
                                __Vdly__cpu__DOT__ta = 0U;
                            } else if ((0xfcU == (0xfeU 
                                                  & (IData)(vlSelfRef.in)))) {
                                __Vdly__cpu__DOT__flag 
                                    = ((0xbffU & (IData)(__Vdly__cpu__DOT__flag)) 
                                       | (0x400U & 
                                          ((IData)(vlSelfRef.in) 
                                           << 0xaU)));
                                __Vdly__cpu__DOT__ta = 0U;
                            } else if ((0x98U == (IData)(vlSelfRef.in))) {
                                __Vdly__cpu__DOT__ax 
                                    = ((0xffU & (IData)(__Vdly__cpu__DOT__ax)) 
                                       | (0xff00U & 
                                          ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.cpu__DOT__ax) 
                                                          >> 7U)))) 
                                           << 8U)));
                                __Vdly__cpu__DOT__ta = 0U;
                            } else if ((0x99U == (IData)(vlSelfRef.in))) {
                                __Vdly__cpu__DOT__ta = 0U;
                                __Vdly__cpu__DOT__dx 
                                    = (0xffffU & (- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.cpu__DOT__ax) 
                                                                >> 0xfU)))));
                            } else {
                                __Vdly__cpu__DOT__ta = 3U;
                                __Vdly__cpu__DOT__wb 
                                    = ((0x10U & (IData)(vlSelfRef.in))
                                        ? ((8U & (IData)(vlSelfRef.in))
                                            ? (IData)(vlSelfRef.cpu__DOT__ds)
                                            : (IData)(vlSelfRef.cpu__DOT__ss))
                                        : ((8U & (IData)(vlSelfRef.in))
                                            ? (IData)(vlSelfRef.cpu__DOT__cs)
                                            : (IData)(vlSelfRef.cpu__DOT__es)));
                            }
                        } else if (((((((((0x27U == 
                                           (0xf7U & (IData)(vlSelfRef.in))) 
                                          | (0x37U 
                                             == (0xf7U 
                                                 & (IData)(vlSelfRef.in)))) 
                                         | (0x40U == 
                                            (0xf0U 
                                             & (IData)(vlSelfRef.in)))) 
                                        | (0x50U == 
                                           (0xf8U & (IData)(vlSelfRef.in)))) 
                                       | (0x69U == 
                                          (0xfdU & (IData)(vlSelfRef.in)))) 
                                      | ((((((7U == 
                                              (0xefU 
                                               & (IData)(vlSelfRef.in))) 
                                             || (0x1fU 
                                                 == (IData)(vlSelfRef.in))) 
                                            || (0x9dU 
                                                == (IData)(vlSelfRef.in))) 
                                           || (0xcaU 
                                               == (0xfeU 
                                                   & (IData)(vlSelfRef.in)))) 
                                          || (0xcfU 
                                              == (IData)(vlSelfRef.in))) 
                                         || (0x58U 
                                             == (0xf8U 
                                                 & (IData)(vlSelfRef.in))))) 
                                     | (0x70U == (0xf0U 
                                                  & (IData)(vlSelfRef.in)))) 
                                    | (((0x80U == (0xfcU 
                                                   & (IData)(vlSelfRef.in))) 
                                        || (0xd0U == 
                                            (0xfcU 
                                             & (IData)(vlSelfRef.in)))) 
                                       || (0xf6U == 
                                           (0xf6U & (IData)(vlSelfRef.in)))))) {
                            if ((0x27U == (0xf7U & (IData)(vlSelfRef.in)))) {
                                __Vdly__cpu__DOT__ax 
                                    = ((0xff00U & (IData)(__Vdly__cpu__DOT__ax)) 
                                       | (IData)(vlSelfRef.cpu__DOT__daa_r));
                                __Vdly__cpu__DOT__flag 
                                    = vlSelfRef.cpu__DOT__daa_f;
                                __Vdly__cpu__DOT__ta = 0U;
                            } else if ((0x37U == (0xf7U 
                                                  & (IData)(vlSelfRef.in)))) {
                                __Vdly__cpu__DOT__ax 
                                    = vlSelfRef.cpu__DOT__aaa_r;
                                __Vdly__cpu__DOT__flag 
                                    = vlSelfRef.cpu__DOT__aaa_f;
                                __Vdly__cpu__DOT__ta = 0U;
                            } else if ((0x40U == (0xf0U 
                                                  & (IData)(vlSelfRef.in)))) {
                                __Vdly__cpu__DOT__op1 
                                    = vlSelfRef.cpu__DOT__r20;
                                __Vdly__cpu__DOT__op2 = 1U;
                                __Vdly__cpu__DOT__alu 
                                    = ((8U & (IData)(vlSelfRef.in))
                                        ? 5U : 0U);
                                __Vdly__cpu__DOT__dir = 1U;
                                __Vdly__cpu__DOT__size = 1U;
                                __Vdly__cpu__DOT__modrm 
                                    = ((0xc7U & (IData)(__Vdly__cpu__DOT__modrm)) 
                                       | (0x38U & ((IData)(vlSelfRef.in) 
                                                   << 3U)));
                            } else if ((0x50U == (0xf8U 
                                                  & (IData)(vlSelfRef.in)))) {
                                __Vdly__cpu__DOT__ta = 3U;
                                __Vdly__cpu__DOT__wb 
                                    = vlSelfRef.cpu__DOT__r20;
                            } else if ((0x69U == (0xfdU 
                                                  & (IData)(vlSelfRef.in)))) {
                                __Vdly__cpu__DOT__size = 1U;
                                __Vdly__cpu__DOT__dir = 1U;
                            } else if (((((((7U == 
                                             (0xefU 
                                              & (IData)(vlSelfRef.in))) 
                                            || (0x1fU 
                                                == (IData)(vlSelfRef.in))) 
                                           || (0x9dU 
                                               == (IData)(vlSelfRef.in))) 
                                          || (0xcaU 
                                              == (0xfeU 
                                                  & (IData)(vlSelfRef.in)))) 
                                         || (0xcfU 
                                             == (IData)(vlSelfRef.in))) 
                                        || (0x58U == 
                                            (0xf8U 
                                             & (IData)(vlSelfRef.in))))) {
                                __Vdly__cpu__DOT__ta = 4U;
                                __Vdly__cpu__DOT__tb = 1U;
                                __Vdly__cpu__DOT__dir = 1U;
                                __Vdly__cpu__DOT__size = 1U;
                                __Vdly__cpu__DOT__modrm 
                                    = ((0xc7U & (IData)(__Vdly__cpu__DOT__modrm)) 
                                       | (0x38U & ((IData)(vlSelfRef.in) 
                                                   << 3U)));
                            } else if ((0x70U == (0xf0U 
                                                  & (IData)(vlSelfRef.in)))) {
                                if (((1U & ((IData)(vlSelfRef.cpu__DOT__branches) 
                                            >> (7U 
                                                & ((IData)(vlSelfRef.in) 
                                                   >> 1U)))) 
                                     == (1U & (IData)(vlSelfRef.in)))) {
                                    __Vdly__cpu__DOT__ip 
                                        = (0xffffU 
                                           & ((IData)(2U) 
                                              + (IData)(vlSelfRef.cpu__DOT__ip)));
                                    __Vdly__cpu__DOT__ta = 0U;
                                }
                            } else {
                                __Vdly__cpu__DOT__dir = 0U;
                            }
                        } else if (((((((((0x84U == 
                                           (0xfeU & (IData)(vlSelfRef.in))) 
                                          | (0x88U 
                                             == (0xfeU 
                                                 & (IData)(vlSelfRef.in)))) 
                                         | (0x8dU == (IData)(vlSelfRef.in))) 
                                        | (0x8cU == 
                                           (0xfdU & (IData)(vlSelfRef.in)))) 
                                       | (0x8fU == (IData)(vlSelfRef.in))) 
                                      | (0x90U == (0xf8U 
                                                   & (IData)(vlSelfRef.in)))) 
                                     | (0x9bU == (IData)(vlSelfRef.in))) 
                                    | (0x9cU == (IData)(vlSelfRef.in)))) {
                            if ((0x84U == (0xfeU & (IData)(vlSelfRef.in)))) {
                                __Vdly__cpu__DOT__alu = 4U;
                            } else if ((0x88U == (0xfeU 
                                                  & (IData)(vlSelfRef.in)))) {
                                __Vdly__cpu__DOT__cpen = 0U;
                            } else if ((0x8dU == (IData)(vlSelfRef.in))) {
                                __Vdly__cpu__DOT__cpen = 0U;
                                __Vdly__cpu__DOT__dir = 1U;
                            } else if ((0x8cU == (0xfdU 
                                                  & (IData)(vlSelfRef.in)))) {
                                __Vdly__cpu__DOT__size = 1U;
                            } else if ((0x8fU == (IData)(vlSelfRef.in))) {
                                __Vdly__cpu__DOT__dir = 0U;
                                __Vdly__cpu__DOT__ta = 4U;
                                __Vdly__cpu__DOT__tb = 1U;
                            } else if ((0x90U == (0xf8U 
                                                  & (IData)(vlSelfRef.in)))) {
                                __Vdly__cpu__DOT__ax 
                                    = vlSelfRef.cpu__DOT__r20;
                                __Vdly__cpu__DOT__ta = 2U;
                                __Vdly__cpu__DOT__wb 
                                    = vlSelfRef.cpu__DOT__ax;
                                __Vdly__cpu__DOT__dir = 1U;
                                __Vdly__cpu__DOT__size = 1U;
                                __Vdly__cpu__DOT__modrm 
                                    = ((0xc7U & (IData)(__Vdly__cpu__DOT__modrm)) 
                                       | (0x38U & ((IData)(vlSelfRef.in) 
                                                   << 3U)));
                            } else if ((0x9bU == (IData)(vlSelfRef.in))) {
                                __Vdly__cpu__DOT__ta = 0U;
                            } else {
                                __Vdly__cpu__DOT__ta = 3U;
                                __Vdly__cpu__DOT__wb 
                                    = vlSelfRef.cpu__DOT__flag;
                            }
                        } else if (((((((((0x9eU == (IData)(vlSelfRef.in)) 
                                          | (0x9fU 
                                             == (IData)(vlSelfRef.in))) 
                                         | (((0xacU 
                                              == (0xfeU 
                                                  & (IData)(vlSelfRef.in))) 
                                             || (0xa4U 
                                                 == 
                                                 (0xfeU 
                                                  & (IData)(vlSelfRef.in)))) 
                                            || (0xa6U 
                                                == 
                                                (0xfeU 
                                                 & (IData)(vlSelfRef.in))))) 
                                        | (0xc2U == 
                                           (0xfeU & (IData)(vlSelfRef.in)))) 
                                       | (0xc4U == 
                                          (0xfeU & (IData)(vlSelfRef.in)))) 
                                      | (0xc6U == (0xfeU 
                                                   & (IData)(vlSelfRef.in)))) 
                                     | (0xf1U == (IData)(vlSelfRef.in))) 
                                    | (0xccU == (IData)(vlSelfRef.in)))) {
                            if ((0x9eU == (IData)(vlSelfRef.in))) {
                                __Vdly__cpu__DOT__flag 
                                    = (0xffU & ((IData)(vlSelfRef.cpu__DOT__ax) 
                                                >> 8U));
                                __Vdly__cpu__DOT__ta = 0U;
                            } else if ((0x9fU == (IData)(vlSelfRef.in))) {
                                __Vdly__cpu__DOT__ax 
                                    = ((0xffU & (IData)(__Vdly__cpu__DOT__ax)) 
                                       | (0xff00U & 
                                          (0x200U | 
                                           ((IData)(vlSelfRef.cpu__DOT__flag) 
                                            << 8U))));
                                __Vdly__cpu__DOT__ta = 0U;
                            } else if ((((0xacU == 
                                          (0xfeU & (IData)(vlSelfRef.in))) 
                                         || (0xa4U 
                                             == (0xfeU 
                                                 & (IData)(vlSelfRef.in)))) 
                                        || (0xa6U == 
                                            (0xfeU 
                                             & (IData)(vlSelfRef.in))))) {
                                __Vdly__cpu__DOT__cp = 1U;
                                __Vdly__cpu__DOT__ea 
                                    = vlSelfRef.cpu__DOT__si;
                                __Vdly__cpu__DOT__alu = 5U;
                            } else if ((0xc2U == (0xfeU 
                                                  & (IData)(vlSelfRef.in)))) {
                                __Vdly__cpu__DOT__ta = 4U;
                                __Vdly__cpu__DOT__tb = 1U;
                            } else if ((0xc4U == (0xfeU 
                                                  & (IData)(vlSelfRef.in)))) {
                                __Vdly__cpu__DOT__ta = 5U;
                                __Vdly__cpu__DOT__size = 1U;
                                __Vdly__cpu__DOT__dir = 1U;
                            } else if ((0xc6U == (0xfeU 
                                                  & (IData)(vlSelfRef.in)))) {
                                __Vdly__cpu__DOT__dir = 0U;
                                __Vdly__cpu__DOT__cpen = 0U;
                            } else if ((0xf1U == (IData)(vlSelfRef.in))) {
                                __Vdly__cpu__DOT__ta = 6U;
                                __Vdly__cpu__DOT__wb = 1U;
                            } else {
                                __Vdly__cpu__DOT__ta = 6U;
                                __Vdly__cpu__DOT__wb = 3U;
                            }
                        } else if ((0xceU == (IData)(vlSelfRef.in))) {
                            __Vdly__cpu__DOT__ta = 
                                ((0x800U & (IData)(vlSelfRef.cpu__DOT__flag))
                                  ? 6U : 0U);
                            __Vdly__cpu__DOT__wb = 4U;
                        } else if ((0xd6U == (IData)(vlSelfRef.in))) {
                            __Vdly__cpu__DOT__ax = 
                                ((0xff00U & (IData)(__Vdly__cpu__DOT__ax)) 
                                 | (0xffU & (- (IData)(
                                                       (1U 
                                                        & (IData)(vlSelfRef.cpu__DOT__flag))))));
                            __Vdly__cpu__DOT__ta = 0U;
                        } else if ((0xd7U == (IData)(vlSelfRef.in))) {
                            __Vdly__cpu__DOT__ea = 
                                (0xffffU & ((IData)(vlSelfRef.cpu__DOT__bx) 
                                            + (0xffU 
                                               & (IData)(vlSelfRef.cpu__DOT__ax))));
                            __Vdly__cpu__DOT__cp = 1U;
                        } else if ((0xe3U == (IData)(vlSelfRef.in))) {
                            if ((0U != (IData)(vlSelfRef.cpu__DOT__cx))) {
                                __Vdly__cpu__DOT__ip 
                                    = (0xffffU & ((IData)(2U) 
                                                  + (IData)(vlSelfRef.cpu__DOT__ip)));
                                __Vdly__cpu__DOT__ta = 0U;
                            }
                        } else if ((0xe0U == (0xfcU 
                                              & (IData)(vlSelfRef.in)))) {
                            if ((1U & ((1U == (IData)(vlSelfRef.cpu__DOT__cx)) 
                                       | ((~ ((IData)(vlSelfRef.in) 
                                              >> 1U)) 
                                          & ((IData)(vlSelfRef.in) 
                                             ^ ((IData)(vlSelfRef.cpu__DOT__flag) 
                                                >> 6U)))))) {
                                __Vdly__cpu__DOT__ip 
                                    = (0xffffU & ((IData)(2U) 
                                                  + (IData)(vlSelfRef.cpu__DOT__ip)));
                                __Vdly__cpu__DOT__ta = 0U;
                            }
                            __Vdly__cpu__DOT__cx = 
                                (0xffffU & ((IData)(vlSelfRef.cpu__DOT__cx) 
                                            - (IData)(1U)));
                        }
                    }
                } else if ((5U == (IData)(vlSelfRef.cpu__DOT__ta))) {
                    if ((0U == (IData)(vlSelfRef.cpu__DOT__tm))) {
                        __Vdly__cpu__DOT__ip = vlSelfRef.cpu__DOT__ipn;
                        __Vdly__cpu__DOT__modrm = vlSelfRef.in;
                        if (vlSelfRef.cpu__DOT__dir) {
                            __Vdly__cpu__DOT__op1 = vlSelfRef.cpu__DOT__r53;
                            __Vdly__cpu__DOT__op2 = vlSelfRef.cpu__DOT__r20;
                        } else {
                            __Vdly__cpu__DOT__op1 = vlSelfRef.cpu__DOT__r20;
                            __Vdly__cpu__DOT__op2 = vlSelfRef.cpu__DOT__r53;
                        }
                        __Vdly__cpu__DOT__ea = (0xffffU 
                                                & ((4U 
                                                    & (IData)(vlSelfRef.in))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.in))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.in))
                                                      ? (IData)(vlSelfRef.cpu__DOT__bx)
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (3U 
                                                        & ((IData)(vlSelfRef.in) 
                                                           >> 6U)))
                                                       ? 0U
                                                       : (IData)(vlSelfRef.cpu__DOT__bp)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.in))
                                                      ? (IData)(vlSelfRef.cpu__DOT__di)
                                                      : (IData)(vlSelfRef.cpu__DOT__si)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.in))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.in))
                                                      ? 
                                                     ((IData)(vlSelfRef.cpu__DOT__bp) 
                                                      + (IData)(vlSelfRef.cpu__DOT__di))
                                                      : 
                                                     ((IData)(vlSelfRef.cpu__DOT__bp) 
                                                      + (IData)(vlSelfRef.cpu__DOT__si)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.in))
                                                      ? 
                                                     ((IData)(vlSelfRef.cpu__DOT__bx) 
                                                      + (IData)(vlSelfRef.cpu__DOT__di))
                                                      : 
                                                     ((IData)(vlSelfRef.cpu__DOT__bx) 
                                                      + (IData)(vlSelfRef.cpu__DOT__si))))));
                        if ((1U & (~ (IData)(vlSelfRef.cpu__DOT__overs)))) {
                            if ((((2U == (6U & (IData)(vlSelfRef.in))) 
                                  || (0x46U == (0xc7U 
                                                & (IData)(vlSelfRef.in)))) 
                                 || (0x86U == (0xc7U 
                                               & (IData)(vlSelfRef.in))))) {
                                __Vdly__cpu__DOT__seg 
                                    = vlSelfRef.cpu__DOT__ss;
                            }
                        }
                        if (((6U == (0xc7U & (IData)(vlSelfRef.in))) 
                             || (0x80U == (0xc0U & (IData)(vlSelfRef.in))))) {
                            __Vdly__cpu__DOT__tm = 2U;
                        } else if ((0U == (0xc0U & (IData)(vlSelfRef.in)))) {
                            if (vlSelfRef.cpu__DOT__cpen) {
                                __Vdly__cpu__DOT__tm = 4U;
                                __Vdly__cpu__DOT__cp = 1U;
                            } else {
                                __Vdly__cpu__DOT__tm = 0U;
                                __Vdly__cpu__DOT__cp = 0U;
                            }
                            if ((1U & (~ (IData)(vlSelfRef.cpu__DOT__cpen)))) {
                                __Vdly__cpu__DOT__ta = 1U;
                            }
                        } else if ((0xc0U == (0xc0U 
                                              & (IData)(vlSelfRef.in)))) {
                            __Vdly__cpu__DOT__tm = 0U;
                            __Vdly__cpu__DOT__ta = 1U;
                        } else {
                            __Vdly__cpu__DOT__tm = 1U;
                        }
                    } else if ((1U == (IData)(vlSelfRef.cpu__DOT__tm))) {
                        __Vdly__cpu__DOT__ea = (0xffffU 
                                                & ((IData)(vlSelfRef.cpu__DOT__ea) 
                                                   + (IData)(vlSelfRef.cpu__DOT__signex)));
                        __Vdly__cpu__DOT__ip = vlSelfRef.cpu__DOT__ipn;
                        __Vdly__cpu__DOT__tm = 4U;
                        __Vdly__cpu__DOT__cp = vlSelfRef.cpu__DOT__cpen;
                        if ((1U & (~ (IData)(vlSelfRef.cpu__DOT__cpen)))) {
                            __Vdly__cpu__DOT__tm = 0U;
                            __Vdly__cpu__DOT__ta = 1U;
                        }
                    } else if ((2U == (IData)(vlSelfRef.cpu__DOT__tm))) {
                        __Vdly__cpu__DOT__ea = (0xffffU 
                                                & ((IData)(vlSelfRef.cpu__DOT__ea) 
                                                   + (IData)(vlSelfRef.in)));
                        __Vdly__cpu__DOT__ip = vlSelfRef.cpu__DOT__ipn;
                        __Vdly__cpu__DOT__tm = 3U;
                    } else if ((3U == (IData)(vlSelfRef.cpu__DOT__tm))) {
                        __Vdly__cpu__DOT__ea = (0xffffU 
                                                & ((IData)(vlSelfRef.cpu__DOT__ea) 
                                                   + 
                                                   ((IData)(vlSelfRef.in) 
                                                    << 8U)));
                        __Vdly__cpu__DOT__ip = vlSelfRef.cpu__DOT__ipn;
                        if (vlSelfRef.cpu__DOT__cpen) {
                            __Vdly__cpu__DOT__tm = 4U;
                            __Vdly__cpu__DOT__ta = 5U;
                            __Vdly__cpu__DOT__cp = 1U;
                        } else {
                            __Vdly__cpu__DOT__tm = 0U;
                            __Vdly__cpu__DOT__ta = 1U;
                            __Vdly__cpu__DOT__cp = 0U;
                        }
                    } else if ((4U == (IData)(vlSelfRef.cpu__DOT__tm))) {
                        if (vlSelfRef.cpu__DOT__dir) {
                            __Vdly__cpu__DOT__op2 = vlSelfRef.in;
                        } else {
                            __Vdly__cpu__DOT__op1 = vlSelfRef.in;
                        }
                        if (vlSelfRef.cpu__DOT__size) {
                            __Vdly__cpu__DOT__tm = 5U;
                            __Vdly__cpu__DOT__ta = 5U;
                        } else {
                            __Vdly__cpu__DOT__tm = 0U;
                            __Vdly__cpu__DOT__ta = 1U;
                        }
                        __Vdly__cpu__DOT__ea = (0xffffU 
                                                & ((IData)(vlSelfRef.cpu__DOT__ea) 
                                                   + (IData)(vlSelfRef.cpu__DOT__size)));
                    } else if ((5U == (IData)(vlSelfRef.cpu__DOT__tm))) {
                        __Vdly__cpu__DOT__ea = (0xffffU 
                                                & ((IData)(vlSelfRef.cpu__DOT__ea) 
                                                   - (IData)(1U)));
                        if (vlSelfRef.cpu__DOT__dir) {
                            __Vdly__cpu__DOT__op2 = 
                                ((0xffU & (IData)(__Vdly__cpu__DOT__op2)) 
                                 | ((IData)(vlSelfRef.in) 
                                    << 8U));
                        } else {
                            __Vdly__cpu__DOT__op1 = 
                                ((0xffU & (IData)(__Vdly__cpu__DOT__op1)) 
                                 | ((IData)(vlSelfRef.in) 
                                    << 8U));
                        }
                        __Vdly__cpu__DOT__tm = 0U;
                        __Vdly__cpu__DOT__ta = 1U;
                    }
                } else if ((1U == (IData)(vlSelfRef.cpu__DOT__ta))) {
                    if (((((((((0U == (0xc4U & (IData)(vlSelfRef.cpu__DOT__opcode))) 
                               | (4U == (0xc6U & (IData)(vlSelfRef.cpu__DOT__opcode)))) 
                              | ((7U == (0xefU & (IData)(vlSelfRef.cpu__DOT__opcode))) 
                                 || (0x1fU == (IData)(vlSelfRef.cpu__DOT__opcode)))) 
                             | (0x40U == (0xf0U & (IData)(vlSelfRef.cpu__DOT__opcode)))) 
                            | (0x58U == (0xf8U & (IData)(vlSelfRef.cpu__DOT__opcode)))) 
                           | (0x68U == (0xfdU & (IData)(vlSelfRef.cpu__DOT__opcode)))) 
                          | (0x69U == (0xfdU & (IData)(vlSelfRef.cpu__DOT__opcode)))) 
                         | (((0x70U == (0xf0U & (IData)(vlSelfRef.cpu__DOT__opcode))) 
                             || (0xe0U == (0xfcU & (IData)(vlSelfRef.cpu__DOT__opcode)))) 
                            || (0xebU == (IData)(vlSelfRef.cpu__DOT__opcode))))) {
                        if ((0U == (0xc4U & (IData)(vlSelfRef.cpu__DOT__opcode)))) {
                            __Vdly__cpu__DOT__flag 
                                = vlSelfRef.cpu__DOT__alu_flag;
                            __Vdly__cpu__DOT__ta = 
                                ((7U == (IData)(vlSelfRef.cpu__DOT__alu))
                                  ? 0U : 2U);
                            __Vdly__cpu__DOT__wb = 
                                (0xffffU & vlSelfRef.cpu__DOT__alu_res);
                        } else if ((4U == (0xc6U & (IData)(vlSelfRef.cpu__DOT__opcode)))) {
                            if ((0U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__ip 
                                    = vlSelfRef.cpu__DOT__ipn;
                                __Vdly__cpu__DOT__op1 
                                    = vlSelfRef.cpu__DOT__ax;
                                __Vdly__cpu__DOT__op2 
                                    = vlSelfRef.in;
                                __Vdly__cpu__DOT__m 
                                    = ((IData)(vlSelfRef.cpu__DOT__size)
                                        ? 1U : 2U);
                            } else if ((1U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__ip 
                                    = vlSelfRef.cpu__DOT__ipn;
                                __Vdly__cpu__DOT__m = 2U;
                                __Vdly__cpu__DOT__op2 
                                    = ((0xffU & (IData)(__Vdly__cpu__DOT__op2)) 
                                       | ((IData)(vlSelfRef.in) 
                                          << 8U));
                            } else if ((2U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__flag 
                                    = vlSelfRef.cpu__DOT__alu_flag;
                                if ((7U != (IData)(vlSelfRef.cpu__DOT__alu))) {
                                    __Vdly__cpu__DOT__ax 
                                        = (0xffffU 
                                           & ((IData)(vlSelfRef.cpu__DOT__size)
                                               ? vlSelfRef.cpu__DOT__alu_res
                                               : ((0xff00U 
                                                   & (IData)(vlSelfRef.cpu__DOT__ax)) 
                                                  | (0xffU 
                                                     & vlSelfRef.cpu__DOT__alu_res))));
                                }
                                __Vdly__cpu__DOT__ta = 0U;
                            }
                        } else if (((7U == (0xefU & (IData)(vlSelfRef.cpu__DOT__opcode))) 
                                    || (0x1fU == (IData)(vlSelfRef.cpu__DOT__opcode)))) {
                            __Vdly__cpu__DOT__ta = 0U;
                            if ((0U == (3U & ((IData)(vlSelfRef.cpu__DOT__opcode) 
                                              >> 3U)))) {
                                __Vdly__cpu__DOT__es 
                                    = vlSelfRef.cpu__DOT__wb;
                            } else if ((2U == (3U & 
                                               ((IData)(vlSelfRef.cpu__DOT__opcode) 
                                                >> 3U)))) {
                                __Vdly__cpu__DOT__ss 
                                    = vlSelfRef.cpu__DOT__wb;
                            } else if ((3U == (3U & 
                                               ((IData)(vlSelfRef.cpu__DOT__opcode) 
                                                >> 3U)))) {
                                __Vdly__cpu__DOT__ds 
                                    = vlSelfRef.cpu__DOT__wb;
                            }
                        } else if ((0x40U == (0xf0U 
                                              & (IData)(vlSelfRef.cpu__DOT__opcode)))) {
                            __Vdly__cpu__DOT__flag 
                                = ((0xffeU & (IData)(vlSelfRef.cpu__DOT__alu_flag)) 
                                   | (1U & (IData)(vlSelfRef.cpu__DOT__flag)));
                            __Vdly__cpu__DOT__ta = 2U;
                            __Vdly__cpu__DOT__wb = 
                                (0xffffU & vlSelfRef.cpu__DOT__alu_res);
                        } else if ((0x58U == (0xf8U 
                                              & (IData)(vlSelfRef.cpu__DOT__opcode)))) {
                            __Vdly__cpu__DOT__ta = 2U;
                            __Vdly__cpu__DOT__tb = 0U;
                        } else if ((0x68U == (0xfdU 
                                              & (IData)(vlSelfRef.cpu__DOT__opcode)))) {
                            if ((0U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__ip 
                                    = vlSelfRef.cpu__DOT__ipn;
                                __Vdly__cpu__DOT__ta 
                                    = ((IData)(vlSelfRef.cpu__DOT__dir)
                                        ? 3U : 1U);
                                __Vdly__cpu__DOT__tb = 0U;
                                __Vdly__cpu__DOT__wb 
                                    = vlSelfRef.cpu__DOT__signex;
                                __Vdly__cpu__DOT__m 
                                    = vlSelfRef.cpu__DOT__mn;
                            } else if ((1U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__ip 
                                    = vlSelfRef.cpu__DOT__ipn;
                                __Vdly__cpu__DOT__ta = 3U;
                                __Vdly__cpu__DOT__wb 
                                    = ((0xffU & (IData)(__Vdly__cpu__DOT__wb)) 
                                       | ((IData)(vlSelfRef.in) 
                                          << 8U));
                            }
                        } else if ((0x69U == (0xfdU 
                                              & (IData)(vlSelfRef.cpu__DOT__opcode)))) {
                            if ((0U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                if (vlSelfRef.cpu__DOT__cp) {
                                    __Vdly__cpu__DOT__cp = 0U;
                                } else {
                                    __Vdly__cpu__DOT__ip 
                                        = vlSelfRef.cpu__DOT__ipn;
                                    __Vdly__cpu__DOT__m 
                                        = ((2U & (IData)(vlSelfRef.cpu__DOT__opcode))
                                            ? 2U : 1U);
                                    __Vdly__cpu__DOT__op1 
                                        = vlSelfRef.cpu__DOT__op2;
                                    __Vdly__cpu__DOT__op2 
                                        = vlSelfRef.cpu__DOT__signex;
                                }
                            } else if ((1U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__ip 
                                    = vlSelfRef.cpu__DOT__ipn;
                                __Vdly__cpu__DOT__m 
                                    = vlSelfRef.cpu__DOT__mn;
                                __Vdly__cpu__DOT__op2 
                                    = ((0xffU & (IData)(__Vdly__cpu__DOT__op2)) 
                                       | ((IData)(vlSelfRef.in) 
                                          << 8U));
                            } else if ((2U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__flag 
                                    = ((0xffeU & (IData)(__Vdly__cpu__DOT__flag)) 
                                       | (0U != (vlSelfRef.cpu__DOT__mult 
                                                 >> 0x10U)));
                                __Vdly__cpu__DOT__ta = 2U;
                                __Vdly__cpu__DOT__wb 
                                    = (0xffffU & vlSelfRef.cpu__DOT__mult);
                                __Vdly__cpu__DOT__flag 
                                    = ((0x7ffU & (IData)(__Vdly__cpu__DOT__flag)) 
                                       | ((IData)((0U 
                                                   != 
                                                   (vlSelfRef.cpu__DOT__mult 
                                                    >> 0x10U))) 
                                          << 0xbU));
                            }
                        } else {
                            __Vdly__cpu__DOT__ip = vlSelfRef.cpu__DOT__ipsign;
                            __Vdly__cpu__DOT__ta = 0U;
                        }
                    } else if (((((((((0x80U == (0xfcU 
                                                 & (IData)(vlSelfRef.cpu__DOT__opcode))) 
                                      | (0x88U == (0xfcU 
                                                   & (IData)(vlSelfRef.cpu__DOT__opcode)))) 
                                     | (0x84U == (0xfeU 
                                                  & (IData)(vlSelfRef.cpu__DOT__opcode)))) 
                                    | (0x86U == (0xfeU 
                                                 & (IData)(vlSelfRef.cpu__DOT__opcode)))) 
                                   | (0x8cU == (IData)(vlSelfRef.cpu__DOT__opcode))) 
                                  | (0x8dU == (IData)(vlSelfRef.cpu__DOT__opcode))) 
                                 | (0x8eU == (IData)(vlSelfRef.cpu__DOT__opcode))) 
                                | (0x8fU == (IData)(vlSelfRef.cpu__DOT__opcode)))) {
                        if ((0x80U == (0xfcU & (IData)(vlSelfRef.cpu__DOT__opcode)))) {
                            if ((0U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__m = 1U;
                                __Vdly__cpu__DOT__cp = 0U;
                                __Vdly__cpu__DOT__alu 
                                    = (7U & ((IData)(vlSelfRef.cpu__DOT__modrm) 
                                             >> 3U));
                            } else if ((1U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__ip 
                                    = vlSelfRef.cpu__DOT__ipn;
                                __Vdly__cpu__DOT__op2 
                                    = ((3U == (3U & (IData)(vlSelfRef.cpu__DOT__opcode)))
                                        ? (IData)(vlSelfRef.cpu__DOT__signex)
                                        : (IData)(vlSelfRef.in));
                                __Vdly__cpu__DOT__m 
                                    = ((1U == (3U & (IData)(vlSelfRef.cpu__DOT__opcode)))
                                        ? 2U : 3U);
                            } else if ((2U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__ip 
                                    = vlSelfRef.cpu__DOT__ipn;
                                __Vdly__cpu__DOT__m = 3U;
                                __Vdly__cpu__DOT__op2 
                                    = ((0xffU & (IData)(__Vdly__cpu__DOT__op2)) 
                                       | ((IData)(vlSelfRef.in) 
                                          << 8U));
                            } else if ((3U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__flag 
                                    = vlSelfRef.cpu__DOT__alu_flag;
                                __Vdly__cpu__DOT__ta 
                                    = ((7U == (IData)(vlSelfRef.cpu__DOT__alu))
                                        ? 0U : 2U);
                                __Vdly__cpu__DOT__tb = 0U;
                                __Vdly__cpu__DOT__wb 
                                    = (0xffffU & vlSelfRef.cpu__DOT__alu_res);
                            }
                        } else if ((0x88U == (0xfcU 
                                              & (IData)(vlSelfRef.cpu__DOT__opcode)))) {
                            __Vdly__cpu__DOT__ta = 2U;
                            __Vdly__cpu__DOT__tb = 0U;
                            __Vdly__cpu__DOT__wb = vlSelfRef.cpu__DOT__op2;
                        } else if ((0x84U == (0xfeU 
                                              & (IData)(vlSelfRef.cpu__DOT__opcode)))) {
                            __Vdly__cpu__DOT__flag 
                                = vlSelfRef.cpu__DOT__alu_flag;
                            __Vdly__cpu__DOT__ta = 0U;
                        } else if ((0x86U == (0xfeU 
                                              & (IData)(vlSelfRef.cpu__DOT__opcode)))) {
                            if ((0U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__m = 1U;
                                __Vdly__cpu__DOT__ta = 2U;
                                __Vdly__cpu__DOT__tb = 1U;
                                __Vdly__cpu__DOT__dir = 0U;
                                __Vdly__cpu__DOT__wb 
                                    = vlSelfRef.cpu__DOT__op1;
                                __Vdly__cpu__DOT__op1 
                                    = vlSelfRef.cpu__DOT__op2;
                            } else if ((1U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__ta = 2U;
                                __Vdly__cpu__DOT__tb = 0U;
                                __Vdly__cpu__DOT__dir = 1U;
                                __Vdly__cpu__DOT__wb 
                                    = vlSelfRef.cpu__DOT__op1;
                            }
                        } else if ((0x8cU == (IData)(vlSelfRef.cpu__DOT__opcode))) {
                            __Vdly__cpu__DOT__ta = 2U;
                            __Vdly__cpu__DOT__wb = 
                                ((0x10U & (IData)(vlSelfRef.cpu__DOT__modrm))
                                  ? ((8U & (IData)(vlSelfRef.cpu__DOT__modrm))
                                      ? (IData)(vlSelfRef.cpu__DOT__ds)
                                      : (IData)(vlSelfRef.cpu__DOT__ss))
                                  : ((8U & (IData)(vlSelfRef.cpu__DOT__modrm))
                                      ? (IData)(vlSelfRef.cpu__DOT__cs)
                                      : (IData)(vlSelfRef.cpu__DOT__es)));
                        } else if ((0x8dU == (IData)(vlSelfRef.cpu__DOT__opcode))) {
                            __Vdly__cpu__DOT__ta = 2U;
                            __Vdly__cpu__DOT__wb = vlSelfRef.cpu__DOT__ea;
                        } else if ((0x8eU == (IData)(vlSelfRef.cpu__DOT__opcode))) {
                            __Vdly__cpu__DOT__ta = 0U;
                            __Vdly__cpu__DOT__cp = 0U;
                            if ((0U == (3U & ((IData)(vlSelfRef.cpu__DOT__modrm) 
                                              >> 3U)))) {
                                __Vdly__cpu__DOT__es 
                                    = vlSelfRef.cpu__DOT__op2;
                            } else if ((2U == (3U & 
                                               ((IData)(vlSelfRef.cpu__DOT__modrm) 
                                                >> 3U)))) {
                                __Vdly__cpu__DOT__ss 
                                    = vlSelfRef.cpu__DOT__op2;
                            } else if ((3U == (3U & 
                                               ((IData)(vlSelfRef.cpu__DOT__modrm) 
                                                >> 3U)))) {
                                __Vdly__cpu__DOT__ds 
                                    = vlSelfRef.cpu__DOT__op2;
                            }
                        } else if ((0U == (IData)(vlSelfRef.cpu__DOT__m))) {
                            __Vdly__cpu__DOT__m = 1U;
                            __Vdly__cpu__DOT__ta = 5U;
                            __Vdly__cpu__DOT__tb = 1U;
                            __Vdly__cpu__DOT__cpen = 0U;
                        } else if ((1U == (IData)(vlSelfRef.cpu__DOT__m))) {
                            __Vdly__cpu__DOT__ta = 2U;
                            __Vdly__cpu__DOT__tb = 0U;
                            __Vdly__cpu__DOT__cp = 1U;
                        }
                    } else if (((((((((0x9aU == (IData)(vlSelfRef.cpu__DOT__opcode)) 
                                      | (0x9dU == (IData)(vlSelfRef.cpu__DOT__opcode))) 
                                     | (0xa0U == (0xfcU 
                                                  & (IData)(vlSelfRef.cpu__DOT__opcode)))) 
                                    | (0xa4U == (0xfeU 
                                                 & (IData)(vlSelfRef.cpu__DOT__opcode)))) 
                                   | (0xa6U == (0xfeU 
                                                & (IData)(vlSelfRef.cpu__DOT__opcode)))) 
                                  | (0xa8U == (0xfeU 
                                               & (IData)(vlSelfRef.cpu__DOT__opcode)))) 
                                 | (0xaaU == (0xfeU 
                                              & (IData)(vlSelfRef.cpu__DOT__opcode)))) 
                                | (0xacU == (0xfeU 
                                             & (IData)(vlSelfRef.cpu__DOT__opcode))))) {
                        if ((0x9aU == (IData)(vlSelfRef.cpu__DOT__opcode))) {
                            if ((0U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__ip 
                                    = vlSelfRef.cpu__DOT__ipn;
                                __Vdly__cpu__DOT__m = 1U;
                                __Vdly__cpu__DOT__op1 
                                    = ((0xff00U & (IData)(__Vdly__cpu__DOT__op1)) 
                                       | (IData)(vlSelfRef.in));
                            } else if ((1U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__ip 
                                    = vlSelfRef.cpu__DOT__ipn;
                                __Vdly__cpu__DOT__m = 2U;
                                __Vdly__cpu__DOT__op1 
                                    = ((0xffU & (IData)(__Vdly__cpu__DOT__op1)) 
                                       | ((IData)(vlSelfRef.in) 
                                          << 8U));
                            } else if ((2U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__ip 
                                    = vlSelfRef.cpu__DOT__ipn;
                                __Vdly__cpu__DOT__m = 3U;
                                __Vdly__cpu__DOT__op2 
                                    = ((0xff00U & (IData)(__Vdly__cpu__DOT__op2)) 
                                       | (IData)(vlSelfRef.in));
                            } else if ((3U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__ip 
                                    = vlSelfRef.cpu__DOT__ipn;
                                __Vdly__cpu__DOT__m = 4U;
                                __Vdly__cpu__DOT__op2 
                                    = ((0xffU & (IData)(__Vdly__cpu__DOT__op2)) 
                                       | ((IData)(vlSelfRef.in) 
                                          << 8U));
                                __Vdly__cpu__DOT__ta = 3U;
                                __Vdly__cpu__DOT__tb = 1U;
                                __Vdly__cpu__DOT__wb 
                                    = vlSelfRef.cpu__DOT__cs;
                            } else if ((4U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__m = 5U;
                                __Vdly__cpu__DOT__ta = 3U;
                                __Vdly__cpu__DOT__wb 
                                    = vlSelfRef.cpu__DOT__ip;
                            } else if ((5U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__ip 
                                    = vlSelfRef.cpu__DOT__op1;
                                __Vdly__cpu__DOT__ta = 0U;
                                __Vdly__cpu__DOT__cs 
                                    = vlSelfRef.cpu__DOT__op2;
                            }
                        } else if ((0x9dU == (IData)(vlSelfRef.cpu__DOT__opcode))) {
                            __Vdly__cpu__DOT__flag 
                                = (0xfffU & (2U | (IData)(vlSelfRef.cpu__DOT__wb)));
                            __Vdly__cpu__DOT__ta = 0U;
                        } else if ((0xa0U == (0xfcU 
                                              & (IData)(vlSelfRef.cpu__DOT__opcode)))) {
                            if ((0U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__ip 
                                    = vlSelfRef.cpu__DOT__ipn;
                                __Vdly__cpu__DOT__m = 1U;
                                __Vdly__cpu__DOT__ea 
                                    = vlSelfRef.in;
                            } else if ((1U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__ip 
                                    = vlSelfRef.cpu__DOT__ipn;
                                __Vdly__cpu__DOT__m = 2U;
                                __Vdly__cpu__DOT__cp = 1U;
                                vlSelfRef.we = vlSelfRef.cpu__DOT__dir;
                                vlSelfRef.out = (0xffU 
                                                 & (IData)(vlSelfRef.cpu__DOT__ax));
                                __Vdly__cpu__DOT__ea 
                                    = ((0xffU & (IData)(__Vdly__cpu__DOT__ea)) 
                                       | ((IData)(vlSelfRef.in) 
                                          << 8U));
                            } else if ((2U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__m = 3U;
                                __Vdly__cpu__DOT__cp 
                                    = vlSelfRef.cpu__DOT__size;
                                __Vdly__cpu__DOT__ea 
                                    = vlSelfRef.cpu__DOT__ean;
                                vlSelfRef.out = (0xffU 
                                                 & ((IData)(vlSelfRef.cpu__DOT__ax) 
                                                    >> 8U));
                                if (vlSelfRef.cpu__DOT__size) {
                                    vlSelfRef.we = vlSelfRef.cpu__DOT__dir;
                                    __Vdly__cpu__DOT__ta = 1U;
                                } else {
                                    vlSelfRef.we = 0U;
                                    __Vdly__cpu__DOT__ta = 0U;
                                }
                                if ((1U & (~ (IData)(vlSelfRef.cpu__DOT__dir)))) {
                                    __Vdly__cpu__DOT__ax 
                                        = ((0xff00U 
                                            & (IData)(__Vdly__cpu__DOT__ax)) 
                                           | (IData)(vlSelfRef.in));
                                }
                            } else if ((3U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                if ((1U & (~ (IData)(vlSelfRef.cpu__DOT__dir)))) {
                                    __Vdly__cpu__DOT__ax 
                                        = ((0xffU & (IData)(__Vdly__cpu__DOT__ax)) 
                                           | ((IData)(vlSelfRef.in) 
                                              << 8U));
                                }
                                __Vdly__cpu__DOT__ta = 0U;
                                __Vdly__cpu__DOT__cp = 0U;
                            }
                        } else if ((0xa4U == (0xfeU 
                                              & (IData)(vlSelfRef.cpu__DOT__opcode)))) {
                            if ((0U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__wb 
                                    = ((0xff00U & (IData)(__Vdly__cpu__DOT__wb)) 
                                       | (IData)(vlSelfRef.in));
                                __Vdly__cpu__DOT__m 
                                    = ((IData)(vlSelfRef.cpu__DOT__size)
                                        ? 1U : 2U);
                                __Vdly__cpu__DOT__ea 
                                    = vlSelfRef.cpu__DOT__ean;
                            } else if ((1U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__wb 
                                    = ((0xffU & (IData)(__Vdly__cpu__DOT__wb)) 
                                       | ((IData)(vlSelfRef.in) 
                                          << 8U));
                                __Vdly__cpu__DOT__m 
                                    = vlSelfRef.cpu__DOT__mn;
                            } else if ((2U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__m 
                                    = ((IData)(vlSelfRef.cpu__DOT__size)
                                        ? 3U : 4U);
                                vlSelfRef.we = 1U;
                                __Vdly__cpu__DOT__seg 
                                    = vlSelfRef.cpu__DOT__es;
                                __Vdly__cpu__DOT__ea 
                                    = vlSelfRef.cpu__DOT__di;
                                vlSelfRef.out = (0xffU 
                                                 & (IData)(vlSelfRef.cpu__DOT__wb));
                            } else if ((3U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__m = 5U;
                                vlSelfRef.we = 1U;
                                __Vdly__cpu__DOT__ea 
                                    = vlSelfRef.cpu__DOT__ean;
                                vlSelfRef.out = (0xffU 
                                                 & ((IData)(vlSelfRef.cpu__DOT__wb) 
                                                    >> 8U));
                            } else if ((4U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                if ((0x400U & (IData)(vlSelfRef.cpu__DOT__flag))) {
                                    __Vdly__cpu__DOT__si 
                                        = (0xffffU 
                                           & ((IData)(vlSelfRef.cpu__DOT__si) 
                                              - ((IData)(1U) 
                                                 + (IData)(vlSelfRef.cpu__DOT__size))));
                                    __Vdly__cpu__DOT__di 
                                        = (0xffffU 
                                           & ((IData)(vlSelfRef.cpu__DOT__di) 
                                              - ((IData)(1U) 
                                                 + (IData)(vlSelfRef.cpu__DOT__size))));
                                } else {
                                    __Vdly__cpu__DOT__si 
                                        = (0xffffU 
                                           & ((IData)(1U) 
                                              + ((IData)(vlSelfRef.cpu__DOT__si) 
                                                 + (IData)(vlSelfRef.cpu__DOT__size))));
                                    __Vdly__cpu__DOT__di 
                                        = (0xffffU 
                                           & ((IData)(1U) 
                                              + ((IData)(vlSelfRef.cpu__DOT__di) 
                                                 + (IData)(vlSelfRef.cpu__DOT__size))));
                                }
                                if ((2U & (IData)(vlSelfRef.cpu__DOT__rep))) {
                                    __Vdly__cpu__DOT__cx 
                                        = (0xffffU 
                                           & ((IData)(vlSelfRef.cpu__DOT__cx) 
                                              - (IData)(1U)));
                                    if ((1U != (IData)(vlSelfRef.cpu__DOT__cx))) {
                                        __Vdly__cpu__DOT__ip 
                                            = vlSelfRef.cpu__DOT__ips;
                                    }
                                }
                                __Vdly__cpu__DOT__ta = 0U;
                                __Vdly__cpu__DOT__m = 0U;
                                vlSelfRef.we = 0U;
                                __Vdly__cpu__DOT__cp = 0U;
                            }
                        } else if ((0xa6U == (0xfeU 
                                              & (IData)(vlSelfRef.cpu__DOT__opcode)))) {
                            if ((0U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__op1 
                                    = vlSelfRef.in;
                                if (vlSelfRef.cpu__DOT__size) {
                                    __Vdly__cpu__DOT__m = 1U;
                                    __Vdly__cpu__DOT__ea 
                                        = vlSelfRef.cpu__DOT__ean;
                                    __Vdly__cpu__DOT__seg 
                                        = vlSelfRef.cpu__DOT__seg;
                                } else {
                                    __Vdly__cpu__DOT__m = 2U;
                                    __Vdly__cpu__DOT__ea 
                                        = vlSelfRef.cpu__DOT__di;
                                    __Vdly__cpu__DOT__seg 
                                        = vlSelfRef.cpu__DOT__es;
                                }
                            } else if ((1U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__m 
                                    = vlSelfRef.cpu__DOT__mn;
                                __Vdly__cpu__DOT__ea 
                                    = vlSelfRef.cpu__DOT__di;
                                __Vdly__cpu__DOT__seg 
                                    = vlSelfRef.cpu__DOT__es;
                                __Vdly__cpu__DOT__op1 
                                    = ((0xffU & (IData)(__Vdly__cpu__DOT__op1)) 
                                       | ((IData)(vlSelfRef.in) 
                                          << 8U));
                            } else if ((2U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__m 
                                    = ((IData)(vlSelfRef.cpu__DOT__size)
                                        ? 3U : 4U);
                                __Vdly__cpu__DOT__op2 
                                    = vlSelfRef.in;
                                __Vdly__cpu__DOT__ea 
                                    = vlSelfRef.cpu__DOT__ean;
                            } else if ((3U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__m 
                                    = vlSelfRef.cpu__DOT__mn;
                                __Vdly__cpu__DOT__op2 
                                    = ((0xffU & (IData)(__Vdly__cpu__DOT__op2)) 
                                       | ((IData)(vlSelfRef.in) 
                                          << 8U));
                            } else if ((4U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                if ((0x400U & (IData)(vlSelfRef.cpu__DOT__flag))) {
                                    __Vdly__cpu__DOT__si 
                                        = (0xffffU 
                                           & ((IData)(vlSelfRef.cpu__DOT__si) 
                                              - ((IData)(1U) 
                                                 + 
                                                 (1U 
                                                  & (IData)(vlSelfRef.cpu__DOT__opcode)))));
                                    __Vdly__cpu__DOT__di 
                                        = (0xffffU 
                                           & ((IData)(vlSelfRef.cpu__DOT__di) 
                                              - ((IData)(1U) 
                                                 + 
                                                 (1U 
                                                  & (IData)(vlSelfRef.cpu__DOT__opcode)))));
                                } else {
                                    __Vdly__cpu__DOT__si 
                                        = (0xffffU 
                                           & ((IData)(1U) 
                                              + ((IData)(vlSelfRef.cpu__DOT__si) 
                                                 + 
                                                 (1U 
                                                  & (IData)(vlSelfRef.cpu__DOT__opcode)))));
                                    __Vdly__cpu__DOT__di 
                                        = (0xffffU 
                                           & ((IData)(1U) 
                                              + ((IData)(vlSelfRef.cpu__DOT__di) 
                                                 + 
                                                 (1U 
                                                  & (IData)(vlSelfRef.cpu__DOT__opcode)))));
                                }
                                __Vdly__cpu__DOT__flag 
                                    = vlSelfRef.cpu__DOT__alu_flag;
                                if ((2U & (IData)(vlSelfRef.cpu__DOT__rep))) {
                                    __Vdly__cpu__DOT__cx 
                                        = (0xffffU 
                                           & ((IData)(vlSelfRef.cpu__DOT__cx) 
                                              - (IData)(1U)));
                                    if (((1U != (IData)(vlSelfRef.cpu__DOT__cx)) 
                                         & ((1U & (IData)(vlSelfRef.cpu__DOT__rep)) 
                                            == (1U 
                                                & ((IData)(vlSelfRef.cpu__DOT__alu_flag) 
                                                   >> 6U))))) {
                                        __Vdly__cpu__DOT__ip 
                                            = vlSelfRef.cpu__DOT__ips;
                                    }
                                }
                                __Vdly__cpu__DOT__ta = 0U;
                                __Vdly__cpu__DOT__cp = 0U;
                            }
                        } else if ((0xa8U == (0xfeU 
                                              & (IData)(vlSelfRef.cpu__DOT__opcode)))) {
                            if ((0U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__ip 
                                    = vlSelfRef.cpu__DOT__ipn;
                                __Vdly__cpu__DOT__m = 1U;
                                __Vdly__cpu__DOT__alu = 4U;
                                __Vdly__cpu__DOT__op1 
                                    = ((IData)(vlSelfRef.cpu__DOT__size)
                                        ? (IData)(vlSelfRef.cpu__DOT__ax)
                                        : (0xffU & (IData)(vlSelfRef.cpu__DOT__ax)));
                                __Vdly__cpu__DOT__op2 
                                    = vlSelfRef.in;
                            } else if ((1U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__flag 
                                    = vlSelfRef.cpu__DOT__alu_flag;
                                __Vdly__cpu__DOT__m = 2U;
                                if (vlSelfRef.cpu__DOT__size) {
                                    __Vdly__cpu__DOT__ta = 1U;
                                    __Vdly__cpu__DOT__ip 
                                        = vlSelfRef.cpu__DOT__ipn;
                                } else {
                                    __Vdly__cpu__DOT__ta = 0U;
                                    __Vdly__cpu__DOT__ip 
                                        = vlSelfRef.cpu__DOT__ip;
                                }
                                __Vdly__cpu__DOT__op2 
                                    = ((0xffU & (IData)(__Vdly__cpu__DOT__op2)) 
                                       | ((IData)(vlSelfRef.in) 
                                          << 8U));
                            } else if ((2U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__flag 
                                    = vlSelfRef.cpu__DOT__alu_flag;
                                __Vdly__cpu__DOT__ta = 0U;
                            }
                        } else if ((0xaaU == (0xfeU 
                                              & (IData)(vlSelfRef.cpu__DOT__opcode)))) {
                            if ((0U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__m 
                                    = ((IData)(vlSelfRef.cpu__DOT__size)
                                        ? 1U : 2U);
                                __Vdly__cpu__DOT__cp = 1U;
                                vlSelfRef.we = 1U;
                                __Vdly__cpu__DOT__ea 
                                    = vlSelfRef.cpu__DOT__di;
                                vlSelfRef.out = (0xffU 
                                                 & (IData)(vlSelfRef.cpu__DOT__ax));
                                __Vdly__cpu__DOT__seg 
                                    = vlSelfRef.cpu__DOT__es;
                            } else if ((1U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__m 
                                    = vlSelfRef.cpu__DOT__mn;
                                vlSelfRef.we = 1U;
                                __Vdly__cpu__DOT__ea 
                                    = vlSelfRef.cpu__DOT__ean;
                                vlSelfRef.out = (0xffU 
                                                 & ((IData)(vlSelfRef.cpu__DOT__ax) 
                                                    >> 8U));
                            } else if ((2U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__di 
                                    = (0xffffU & ((0x400U 
                                                   & (IData)(vlSelfRef.cpu__DOT__flag))
                                                   ? 
                                                  ((IData)(vlSelfRef.cpu__DOT__di) 
                                                   - 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.cpu__DOT__size)))
                                                   : 
                                                  ((IData)(1U) 
                                                   + 
                                                   ((IData)(vlSelfRef.cpu__DOT__di) 
                                                    + (IData)(vlSelfRef.cpu__DOT__size)))));
                                if ((2U & (IData)(vlSelfRef.cpu__DOT__rep))) {
                                    __Vdly__cpu__DOT__cx 
                                        = (0xffffU 
                                           & ((IData)(vlSelfRef.cpu__DOT__cx) 
                                              - (IData)(1U)));
                                    if ((1U != (IData)(vlSelfRef.cpu__DOT__cx))) {
                                        __Vdly__cpu__DOT__ip 
                                            = vlSelfRef.cpu__DOT__ips;
                                    }
                                }
                                __Vdly__cpu__DOT__ta = 0U;
                                vlSelfRef.we = 0U;
                                __Vdly__cpu__DOT__cp = 0U;
                            }
                        } else if ((0U == (IData)(vlSelfRef.cpu__DOT__m))) {
                            __Vdly__cpu__DOT__ax = 
                                ((0xff00U & (IData)(__Vdly__cpu__DOT__ax)) 
                                 | (IData)(vlSelfRef.in));
                            __Vdly__cpu__DOT__m = ((IData)(vlSelfRef.cpu__DOT__size)
                                                    ? 1U
                                                    : 2U);
                            __Vdly__cpu__DOT__ea = vlSelfRef.cpu__DOT__ean;
                        } else if ((1U == (IData)(vlSelfRef.cpu__DOT__m))) {
                            __Vdly__cpu__DOT__ax = 
                                ((0xffU & (IData)(__Vdly__cpu__DOT__ax)) 
                                 | ((IData)(vlSelfRef.in) 
                                    << 8U));
                            __Vdly__cpu__DOT__m = vlSelfRef.cpu__DOT__mn;
                        } else if ((2U == (IData)(vlSelfRef.cpu__DOT__m))) {
                            __Vdly__cpu__DOT__si = 
                                (0xffffU & ((0x400U 
                                             & (IData)(vlSelfRef.cpu__DOT__flag))
                                             ? ((IData)(vlSelfRef.cpu__DOT__si) 
                                                - ((IData)(1U) 
                                                   + 
                                                   (1U 
                                                    & (IData)(vlSelfRef.cpu__DOT__opcode))))
                                             : ((IData)(1U) 
                                                + ((IData)(vlSelfRef.cpu__DOT__si) 
                                                   + 
                                                   (1U 
                                                    & (IData)(vlSelfRef.cpu__DOT__opcode))))));
                            if ((2U & (IData)(vlSelfRef.cpu__DOT__rep))) {
                                __Vdly__cpu__DOT__cx 
                                    = (0xffffU & ((IData)(vlSelfRef.cpu__DOT__cx) 
                                                  - (IData)(1U)));
                                if ((1U != (IData)(vlSelfRef.cpu__DOT__cx))) {
                                    __Vdly__cpu__DOT__ip 
                                        = vlSelfRef.cpu__DOT__ips;
                                }
                            }
                            __Vdly__cpu__DOT__ta = 0U;
                            __Vdly__cpu__DOT__cp = 0U;
                        }
                    } else if (((((((((0xaeU == (0xfeU 
                                                 & (IData)(vlSelfRef.cpu__DOT__opcode))) 
                                      | (0xb0U == (0xf8U 
                                                   & (IData)(vlSelfRef.cpu__DOT__opcode)))) 
                                     | (0xb8U == (0xf8U 
                                                  & (IData)(vlSelfRef.cpu__DOT__opcode)))) 
                                    | (0xc2U == (0xfeU 
                                                 & (IData)(vlSelfRef.cpu__DOT__opcode)))) 
                                   | (0xc4U == (0xfeU 
                                                & (IData)(vlSelfRef.cpu__DOT__opcode)))) 
                                  | (0xc6U == (0xfeU 
                                               & (IData)(vlSelfRef.cpu__DOT__opcode)))) 
                                 | (0xcaU == (0xfeU 
                                              & (IData)(vlSelfRef.cpu__DOT__opcode)))) 
                                | (0xcdU == (IData)(vlSelfRef.cpu__DOT__opcode)))) {
                        if ((0xaeU == (0xfeU & (IData)(vlSelfRef.cpu__DOT__opcode)))) {
                            if ((0U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__m 
                                    = vlSelfRef.cpu__DOT__mn;
                                __Vdly__cpu__DOT__cp = 1U;
                                __Vdly__cpu__DOT__alu = 5U;
                                __Vdly__cpu__DOT__op1 
                                    = ((IData)(vlSelfRef.cpu__DOT__size)
                                        ? (IData)(vlSelfRef.cpu__DOT__ax)
                                        : (0xffU & (IData)(vlSelfRef.cpu__DOT__ax)));
                                __Vdly__cpu__DOT__ea 
                                    = vlSelfRef.cpu__DOT__di;
                                __Vdly__cpu__DOT__seg 
                                    = vlSelfRef.cpu__DOT__es;
                            } else if ((1U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__m 
                                    = ((IData)(vlSelfRef.cpu__DOT__size)
                                        ? 2U : 3U);
                                __Vdly__cpu__DOT__op2 
                                    = vlSelfRef.in;
                                __Vdly__cpu__DOT__ea 
                                    = vlSelfRef.cpu__DOT__ean;
                            } else if ((2U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__m = 3U;
                                __Vdly__cpu__DOT__op2 
                                    = ((0xffU & (IData)(__Vdly__cpu__DOT__op2)) 
                                       | ((IData)(vlSelfRef.in) 
                                          << 8U));
                            } else if ((3U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__di 
                                    = (0xffffU & ((0x400U 
                                                   & (IData)(vlSelfRef.cpu__DOT__flag))
                                                   ? 
                                                  ((IData)(vlSelfRef.cpu__DOT__di) 
                                                   - 
                                                   ((IData)(1U) 
                                                    + 
                                                    (1U 
                                                     & (IData)(vlSelfRef.cpu__DOT__opcode))))
                                                   : 
                                                  ((IData)(1U) 
                                                   + 
                                                   ((IData)(vlSelfRef.cpu__DOT__di) 
                                                    + 
                                                    (1U 
                                                     & (IData)(vlSelfRef.cpu__DOT__opcode))))));
                                __Vdly__cpu__DOT__flag 
                                    = vlSelfRef.cpu__DOT__alu_flag;
                                if ((2U & (IData)(vlSelfRef.cpu__DOT__rep))) {
                                    __Vdly__cpu__DOT__cx 
                                        = (0xffffU 
                                           & ((IData)(vlSelfRef.cpu__DOT__cx) 
                                              - (IData)(1U)));
                                    if (((1U != (IData)(vlSelfRef.cpu__DOT__cx)) 
                                         & ((1U & (IData)(vlSelfRef.cpu__DOT__rep)) 
                                            == (1U 
                                                & ((IData)(vlSelfRef.cpu__DOT__alu_flag) 
                                                   >> 6U))))) {
                                        __Vdly__cpu__DOT__ip 
                                            = vlSelfRef.cpu__DOT__ips;
                                    }
                                }
                                __Vdly__cpu__DOT__ta = 0U;
                                __Vdly__cpu__DOT__cp = 0U;
                            }
                        } else if ((0xb0U == (0xf8U 
                                              & (IData)(vlSelfRef.cpu__DOT__opcode)))) {
                            __Vdly__cpu__DOT__ip = vlSelfRef.cpu__DOT__ipn;
                            __Vdly__cpu__DOT__ta = 2U;
                            __Vdly__cpu__DOT__wb = vlSelfRef.in;
                            __Vdly__cpu__DOT__size = 0U;
                            __Vdly__cpu__DOT__dir = 1U;
                            __Vdly__cpu__DOT__modrm 
                                = ((0xc7U & (IData)(__Vdly__cpu__DOT__modrm)) 
                                   | (0x38U & ((IData)(vlSelfRef.cpu__DOT__opcode) 
                                               << 3U)));
                        } else if ((0xb8U == (0xf8U 
                                              & (IData)(vlSelfRef.cpu__DOT__opcode)))) {
                            if ((0U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__ip 
                                    = vlSelfRef.cpu__DOT__ipn;
                                __Vdly__cpu__DOT__m = 1U;
                                __Vdly__cpu__DOT__wb 
                                    = vlSelfRef.in;
                            } else if ((1U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__wb 
                                    = (((IData)(vlSelfRef.in) 
                                        << 8U) | (0xffU 
                                                  & (IData)(vlSelfRef.cpu__DOT__wb)));
                                __Vdly__cpu__DOT__ip 
                                    = vlSelfRef.cpu__DOT__ipn;
                                __Vdly__cpu__DOT__ta = 2U;
                                __Vdly__cpu__DOT__size = 1U;
                                __Vdly__cpu__DOT__dir = 1U;
                                __Vdly__cpu__DOT__modrm 
                                    = ((0xc7U & (IData)(__Vdly__cpu__DOT__modrm)) 
                                       | (0x38U & ((IData)(vlSelfRef.cpu__DOT__opcode) 
                                                   << 3U)));
                            }
                        } else if ((0xc2U == (0xfeU 
                                              & (IData)(vlSelfRef.cpu__DOT__opcode)))) {
                            if ((0U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                if ((1U & (IData)(vlSelfRef.cpu__DOT__opcode))) {
                                    __Vdly__cpu__DOT__ip 
                                        = vlSelfRef.cpu__DOT__wb;
                                    __Vdly__cpu__DOT__ta = 0U;
                                } else {
                                    __Vdly__cpu__DOT__ip 
                                        = vlSelfRef.cpu__DOT__ipn;
                                    __Vdly__cpu__DOT__ta = 1U;
                                }
                                __Vdly__cpu__DOT__m = 1U;
                                __Vdly__cpu__DOT__op1 
                                    = ((0xff00U & (IData)(__Vdly__cpu__DOT__op1)) 
                                       | (IData)(vlSelfRef.in));
                            } else if ((1U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__ip 
                                    = vlSelfRef.cpu__DOT__ipn;
                                __Vdly__cpu__DOT__sp 
                                    = (0xffffU & ((IData)(vlSelfRef.cpu__DOT__sp) 
                                                  + 
                                                  (((IData)(vlSelfRef.in) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & (IData)(vlSelfRef.cpu__DOT__op1)))));
                                __Vdly__cpu__DOT__ip 
                                    = vlSelfRef.cpu__DOT__wb;
                                __Vdly__cpu__DOT__ta = 0U;
                            }
                        } else if ((0xc4U == (0xfeU 
                                              & (IData)(vlSelfRef.cpu__DOT__opcode)))) {
                            if ((0U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__ea 
                                    = (0xffffU & ((IData)(2U) 
                                                  + (IData)(vlSelfRef.cpu__DOT__ea)));
                                __Vdly__cpu__DOT__m = 1U;
                            } else if ((1U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__m = 2U;
                                __Vdly__cpu__DOT__wb 
                                    = ((0xff00U & (IData)(__Vdly__cpu__DOT__wb)) 
                                       | (IData)(vlSelfRef.in));
                                __Vdly__cpu__DOT__ea 
                                    = vlSelfRef.cpu__DOT__ean;
                            } else if ((2U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__ta = 2U;
                                if ((1U & (IData)(vlSelfRef.cpu__DOT__opcode))) {
                                    __Vdly__cpu__DOT__ds 
                                        = (((IData)(vlSelfRef.in) 
                                            << 8U) 
                                           | (0xffU 
                                              & (IData)(vlSelfRef.cpu__DOT__wb)));
                                } else {
                                    __Vdly__cpu__DOT__es 
                                        = (((IData)(vlSelfRef.in) 
                                            << 8U) 
                                           | (0xffU 
                                              & (IData)(vlSelfRef.cpu__DOT__wb)));
                                }
                                __Vdly__cpu__DOT__wb 
                                    = vlSelfRef.cpu__DOT__op2;
                            }
                        } else if ((0xc6U == (0xfeU 
                                              & (IData)(vlSelfRef.cpu__DOT__opcode)))) {
                            if ((0U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__m = 1U;
                                __Vdly__cpu__DOT__cp = 0U;
                            } else if ((1U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__ip 
                                    = vlSelfRef.cpu__DOT__ipn;
                                __Vdly__cpu__DOT__m = 2U;
                                __Vdly__cpu__DOT__wb 
                                    = vlSelfRef.in;
                                __Vdly__cpu__DOT__ta 
                                    = ((IData)(vlSelfRef.cpu__DOT__size)
                                        ? 1U : 2U);
                            } else if ((2U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__ip 
                                    = vlSelfRef.cpu__DOT__ipn;
                                __Vdly__cpu__DOT__wb 
                                    = ((0xffU & (IData)(__Vdly__cpu__DOT__wb)) 
                                       | ((IData)(vlSelfRef.in) 
                                          << 8U));
                                __Vdly__cpu__DOT__ta = 2U;
                            }
                        } else if ((0xcaU == (0xfeU 
                                              & (IData)(vlSelfRef.cpu__DOT__opcode)))) {
                            if ((0U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__ip 
                                    = vlSelfRef.cpu__DOT__ipn;
                                __Vdly__cpu__DOT__ta = 4U;
                                __Vdly__cpu__DOT__m = 1U;
                                __Vdly__cpu__DOT__op1 
                                    = vlSelfRef.cpu__DOT__wb;
                                __Vdly__cpu__DOT__op2 
                                    = vlSelfRef.in;
                            } else if ((1U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__ip 
                                    = vlSelfRef.cpu__DOT__op1;
                                if ((1U & (~ (IData)(vlSelfRef.cpu__DOT__opcode)))) {
                                    __Vdly__cpu__DOT__sp 
                                        = (0xffffU 
                                           & ((IData)(vlSelfRef.cpu__DOT__sp) 
                                              + (((IData)(vlSelfRef.in) 
                                                  << 8U) 
                                                 | (0xffU 
                                                    & (IData)(vlSelfRef.cpu__DOT__op2)))));
                                }
                                __Vdly__cpu__DOT__ta = 0U;
                                __Vdly__cpu__DOT__cs 
                                    = vlSelfRef.cpu__DOT__wb;
                            }
                        } else {
                            __Vdly__cpu__DOT__ip = vlSelfRef.cpu__DOT__ipn;
                            __Vdly__cpu__DOT__ta = 6U;
                            __Vdly__cpu__DOT__wb = vlSelfRef.in;
                        }
                    } else if (((((((((0xcfU == (IData)(vlSelfRef.cpu__DOT__opcode)) 
                                      | ((0xc0U == 
                                          (0xfeU & (IData)(vlSelfRef.cpu__DOT__opcode))) 
                                         || (0xd0U 
                                             == (0xfcU 
                                                 & (IData)(vlSelfRef.cpu__DOT__opcode))))) 
                                     | (0xd4U == (IData)(vlSelfRef.cpu__DOT__opcode))) 
                                    | (0xd5U == (IData)(vlSelfRef.cpu__DOT__opcode))) 
                                   | (0xd7U == (IData)(vlSelfRef.cpu__DOT__opcode))) 
                                  | (0xe4U == (0xf6U 
                                               & (IData)(vlSelfRef.cpu__DOT__opcode)))) 
                                 | (0xe6U == (0xf6U 
                                              & (IData)(vlSelfRef.cpu__DOT__opcode)))) 
                                | (0xe8U == (IData)(vlSelfRef.cpu__DOT__opcode)))) {
                        if ((0xcfU == (IData)(vlSelfRef.cpu__DOT__opcode))) {
                            if ((0U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__ip 
                                    = vlSelfRef.cpu__DOT__wb;
                                __Vdly__cpu__DOT__m = 1U;
                                __Vdly__cpu__DOT__ta = 4U;
                            } else if ((1U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__m = 2U;
                                __Vdly__cpu__DOT__ta = 4U;
                                __Vdly__cpu__DOT__cs 
                                    = vlSelfRef.cpu__DOT__wb;
                            } else if ((2U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__flag 
                                    = (0xfffU & (2U 
                                                 | (IData)(vlSelfRef.cpu__DOT__wb)));
                                __Vdly__cpu__DOT__ta = 0U;
                            }
                        } else if (((0xc0U == (0xfeU 
                                               & (IData)(vlSelfRef.cpu__DOT__opcode))) 
                                    || (0xd0U == (0xfcU 
                                                  & (IData)(vlSelfRef.cpu__DOT__opcode))))) {
                            if ((0U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                if (((IData)(vlSelfRef.cpu__DOT__cp) 
                                     & (~ ((IData)(vlSelfRef.cpu__DOT__opcode) 
                                           >> 4U)))) {
                                    __Vdly__cpu__DOT__cp = 0U;
                                } else {
                                    __Vdly__cpu__DOT__m = 1U;
                                    __Vdly__cpu__DOT__alu 
                                        = (7U & ((IData)(vlSelfRef.cpu__DOT__modrm) 
                                                 >> 3U));
                                    if ((0x10U & (IData)(vlSelfRef.cpu__DOT__opcode))) {
                                        __Vdly__cpu__DOT__op2 
                                            = ((2U 
                                                & (IData)(vlSelfRef.cpu__DOT__opcode))
                                                ? (0xfU 
                                                   & (IData)(vlSelfRef.cpu__DOT__cx))
                                                : 1U);
                                    } else {
                                        __Vdly__cpu__DOT__ip 
                                            = vlSelfRef.cpu__DOT__ipn;
                                        __Vdly__cpu__DOT__op2 
                                            = (0xfU 
                                               & (IData)(vlSelfRef.in));
                                    }
                                }
                            } else if ((1U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                if ((0U != (IData)(vlSelfRef.cpu__DOT__op2))) {
                                    __Vdly__cpu__DOT__flag 
                                        = vlSelfRef.cpu__DOT__rot_f;
                                    __Vdly__cpu__DOT__op1 
                                        = vlSelfRef.cpu__DOT__rot_r;
                                } else {
                                    __Vdly__cpu__DOT__wb 
                                        = vlSelfRef.cpu__DOT__op1;
                                    __Vdly__cpu__DOT__ta = 2U;
                                }
                                __Vdly__cpu__DOT__op2 
                                    = (0xffffU & ((IData)(vlSelfRef.cpu__DOT__op2) 
                                                  - (IData)(1U)));
                            }
                        } else if ((0xd4U == (IData)(vlSelfRef.cpu__DOT__opcode))) {
                            if ((0U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__m 
                                    = vlSelfRef.cpu__DOT__mn;
                                __Vdly__cpu__DOT__ta = 7U;
                                __Vdly__cpu__DOT__tb = 1U;
                                __Vdly__cpu__DOT__diva 
                                    = ((IData)(vlSelfRef.cpu__DOT__ax) 
                                       << 0x18U);
                                __Vdly__cpu__DOT__divc = 7U;
                                __Vdly__cpu__DOT__divr = 0U;
                                __Vdly__cpu__DOT__op2 
                                    = vlSelfRef.in;
                            } else if ((1U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__ax 
                                    = ((0xff00U & (vlSelfRef.cpu__DOT__diva 
                                                   << 8U)) 
                                       | (0xffU & (IData)(vlSelfRef.cpu__DOT__divr)));
                                __Vdly__cpu__DOT__ta = 0U;
                            }
                        } else if ((0xd5U == (IData)(vlSelfRef.cpu__DOT__opcode))) {
                            __Vdly__cpu__DOT__ax = 
                                ((0xff00U & (IData)(__Vdly__cpu__DOT__ax)) 
                                 | (0xffU & ((IData)(vlSelfRef.cpu__DOT__ax) 
                                             + ((IData)(vlSelfRef.in) 
                                                * (0xffU 
                                                   & ((IData)(vlSelfRef.cpu__DOT__ax) 
                                                      >> 8U))))));
                            __Vdly__cpu__DOT__ta = 0U;
                        } else if ((0xd7U == (IData)(vlSelfRef.cpu__DOT__opcode))) {
                            __Vdly__cpu__DOT__ax = 
                                ((0xff00U & (IData)(__Vdly__cpu__DOT__ax)) 
                                 | (IData)(vlSelfRef.in));
                            __Vdly__cpu__DOT__ta = 0U;
                            __Vdly__cpu__DOT__cp = 0U;
                        } else if ((0xe4U == (0xf6U 
                                              & (IData)(vlSelfRef.cpu__DOT__opcode)))) {
                            if ((0U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__m 
                                    = vlSelfRef.cpu__DOT__mn;
                                __Vdly__cpu__DOT__cpen = 0U;
                                vlSelfRef.pr = 1U;
                                if ((8U & (IData)(vlSelfRef.cpu__DOT__opcode))) {
                                    __Vdly__pa = vlSelfRef.cpu__DOT__dx;
                                    __Vdly__cpu__DOT__ip 
                                        = vlSelfRef.cpu__DOT__ip;
                                } else {
                                    __Vdly__pa = vlSelfRef.in;
                                    __Vdly__cpu__DOT__ip 
                                        = vlSelfRef.cpu__DOT__ipn;
                                }
                            } else if ((1U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__m 
                                    = vlSelfRef.cpu__DOT__mn;
                            } else if ((2U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__pa = (0xffffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.pa)));
                                __Vdly__cpu__DOT__ax 
                                    = ((IData)(vlSelfRef.cpu__DOT__cpen)
                                        ? ((0xffU & (IData)(__Vdly__cpu__DOT__ax)) 
                                           | ((IData)(vlSelfRef.pin) 
                                              << 8U))
                                        : ((0xff00U 
                                            & (IData)(__Vdly__cpu__DOT__ax)) 
                                           | (IData)(vlSelfRef.pin)));
                                if (vlSelfRef.cpu__DOT__size) {
                                    __Vdly__cpu__DOT__ta = 1U;
                                    __Vdly__cpu__DOT__m = 1U;
                                    vlSelfRef.pr = 1U;
                                    __Vdly__cpu__DOT__cpen = 1U;
                                } else {
                                    __Vdly__cpu__DOT__ta = 0U;
                                }
                                __Vdly__cpu__DOT__size = 0U;
                            }
                        } else if ((0xe6U == (0xf6U 
                                              & (IData)(vlSelfRef.cpu__DOT__opcode)))) {
                            if ((0U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                if ((8U & (IData)(vlSelfRef.cpu__DOT__opcode))) {
                                    __Vdly__cpu__DOT__ip 
                                        = vlSelfRef.cpu__DOT__ip;
                                    __Vdly__pa = vlSelfRef.cpu__DOT__dx;
                                } else {
                                    __Vdly__cpu__DOT__ip 
                                        = vlSelfRef.cpu__DOT__ipn;
                                    __Vdly__pa = vlSelfRef.in;
                                }
                                __Vdly__cpu__DOT__ta 
                                    = ((IData)(vlSelfRef.cpu__DOT__size)
                                        ? 1U : 0U);
                                __Vdly__cpu__DOT__m 
                                    = vlSelfRef.cpu__DOT__mn;
                                vlSelfRef.out = (0xffU 
                                                 & (IData)(vlSelfRef.cpu__DOT__ax));
                                vlSelfRef.pw = 1U;
                            } else if ((1U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__pa = (0xffffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.pa)));
                                vlSelfRef.out = (0xffU 
                                                 & ((IData)(vlSelfRef.cpu__DOT__ax) 
                                                    >> 8U));
                                vlSelfRef.pw = 1U;
                                __Vdly__cpu__DOT__ta = 0U;
                            }
                        } else if ((0U == (IData)(vlSelfRef.cpu__DOT__m))) {
                            __Vdly__cpu__DOT__ip = vlSelfRef.cpu__DOT__ipn;
                            __Vdly__cpu__DOT__m = 1U;
                            __Vdly__cpu__DOT__ea = vlSelfRef.in;
                        } else if ((1U == (IData)(vlSelfRef.cpu__DOT__m))) {
                            __Vdly__cpu__DOT__ip = 
                                (0xffffU & ((IData)(vlSelfRef.cpu__DOT__ipn) 
                                            + (((IData)(vlSelfRef.in) 
                                                << 8U) 
                                               | (0xffU 
                                                  & (IData)(vlSelfRef.cpu__DOT__ea)))));
                            __Vdly__cpu__DOT__ta = 3U;
                            __Vdly__cpu__DOT__wb = vlSelfRef.cpu__DOT__ipn;
                        }
                    } else if ((0xe9U == (IData)(vlSelfRef.cpu__DOT__opcode))) {
                        if ((0U == (IData)(vlSelfRef.cpu__DOT__m))) {
                            __Vdly__cpu__DOT__ip = 
                                (0xffffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.cpu__DOT__ip)));
                            __Vdly__cpu__DOT__m = 1U;
                            __Vdly__cpu__DOT__op1 = 
                                ((0xff00U & (IData)(__Vdly__cpu__DOT__op1)) 
                                 | (IData)(vlSelfRef.in));
                        } else if ((1U == (IData)(vlSelfRef.cpu__DOT__m))) {
                            __Vdly__cpu__DOT__ip = 
                                (0xffffU & ((IData)(vlSelfRef.cpu__DOT__ipn) 
                                            + (((IData)(vlSelfRef.in) 
                                                << 8U) 
                                               | (0xffU 
                                                  & (IData)(vlSelfRef.cpu__DOT__op1)))));
                            __Vdly__cpu__DOT__m = 0U;
                            __Vdly__cpu__DOT__ta = 0U;
                        }
                    } else if ((0xeaU == (IData)(vlSelfRef.cpu__DOT__opcode))) {
                        if ((0U == (IData)(vlSelfRef.cpu__DOT__m))) {
                            __Vdly__cpu__DOT__ip = vlSelfRef.cpu__DOT__ipn;
                            __Vdly__cpu__DOT__m = 1U;
                            __Vdly__cpu__DOT__op1 = 
                                ((0xff00U & (IData)(__Vdly__cpu__DOT__op1)) 
                                 | (IData)(vlSelfRef.in));
                            __Vdly__cpu__DOT__ip = vlSelfRef.cpu__DOT__ipn;
                        } else if ((1U == (IData)(vlSelfRef.cpu__DOT__m))) {
                            __Vdly__cpu__DOT__ip = vlSelfRef.cpu__DOT__ipn;
                            __Vdly__cpu__DOT__m = 2U;
                            __Vdly__cpu__DOT__op1 = 
                                ((0xffU & (IData)(__Vdly__cpu__DOT__op1)) 
                                 | ((IData)(vlSelfRef.in) 
                                    << 8U));
                            __Vdly__cpu__DOT__ip = vlSelfRef.cpu__DOT__ipn;
                        } else if ((2U == (IData)(vlSelfRef.cpu__DOT__m))) {
                            __Vdly__cpu__DOT__ip = vlSelfRef.cpu__DOT__ipn;
                            __Vdly__cpu__DOT__m = 3U;
                            __Vdly__cpu__DOT__op2 = 
                                ((0xff00U & (IData)(__Vdly__cpu__DOT__op2)) 
                                 | (IData)(vlSelfRef.in));
                            __Vdly__cpu__DOT__ip = vlSelfRef.cpu__DOT__ipn;
                        } else if ((3U == (IData)(vlSelfRef.cpu__DOT__m))) {
                            __Vdly__cpu__DOT__ip = vlSelfRef.cpu__DOT__ipn;
                            __Vdly__cpu__DOT__m = 0U;
                            __Vdly__cpu__DOT__cs = 
                                (((IData)(vlSelfRef.in) 
                                  << 8U) | (0xffU & (IData)(vlSelfRef.cpu__DOT__op2)));
                            __Vdly__cpu__DOT__ip = vlSelfRef.cpu__DOT__op1;
                            __Vdly__cpu__DOT__ta = 0U;
                        }
                    } else if ((0xf6U == (0xfeU & (IData)(vlSelfRef.cpu__DOT__opcode)))) {
                        if (((0U == (7U & ((IData)(vlSelfRef.cpu__DOT__modrm) 
                                           >> 3U))) 
                             || (1U == (7U & ((IData)(vlSelfRef.cpu__DOT__modrm) 
                                              >> 3U))))) {
                            if ((0U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__m 
                                    = vlSelfRef.cpu__DOT__mn;
                                __Vdly__cpu__DOT__cp = 0U;
                                __Vdly__cpu__DOT__alu = 4U;
                            } else if ((1U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__ip 
                                    = vlSelfRef.cpu__DOT__ipn;
                                __Vdly__cpu__DOT__m 
                                    = ((IData)(vlSelfRef.cpu__DOT__size)
                                        ? (0xfU & (IData)(vlSelfRef.cpu__DOT__mn))
                                        : 3U);
                                __Vdly__cpu__DOT__op2 
                                    = vlSelfRef.in;
                            } else if ((2U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__ip 
                                    = vlSelfRef.cpu__DOT__ipn;
                                __Vdly__cpu__DOT__m 
                                    = vlSelfRef.cpu__DOT__mn;
                                __Vdly__cpu__DOT__op2 
                                    = ((0xffU & (IData)(__Vdly__cpu__DOT__op2)) 
                                       | ((IData)(vlSelfRef.in) 
                                          << 8U));
                            } else if ((3U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__flag 
                                    = vlSelfRef.cpu__DOT__alu_flag;
                                __Vdly__cpu__DOT__ta = 0U;
                            }
                        } else if ((2U == (7U & ((IData)(vlSelfRef.cpu__DOT__modrm) 
                                                 >> 3U)))) {
                            __Vdly__cpu__DOT__wb = 
                                (0xffffU & (~ (IData)(vlSelfRef.cpu__DOT__op1)));
                            __Vdly__cpu__DOT__ta = 2U;
                        } else if ((3U == (7U & ((IData)(vlSelfRef.cpu__DOT__modrm) 
                                                 >> 3U)))) {
                            if ((0U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__m 
                                    = vlSelfRef.cpu__DOT__mn;
                                __Vdly__cpu__DOT__alu = 5U;
                                __Vdly__cpu__DOT__op2 
                                    = vlSelfRef.cpu__DOT__op1;
                                __Vdly__cpu__DOT__op1 = 0U;
                            } else if ((1U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__flag 
                                    = vlSelfRef.cpu__DOT__alu_flag;
                                __Vdly__cpu__DOT__ta = 2U;
                                __Vdly__cpu__DOT__wb 
                                    = (0xffffU & vlSelfRef.cpu__DOT__alu_res);
                            }
                        } else if (((4U == (7U & ((IData)(vlSelfRef.cpu__DOT__modrm) 
                                                  >> 3U))) 
                                    || (5U == (7U & 
                                               ((IData)(vlSelfRef.cpu__DOT__modrm) 
                                                >> 3U))))) {
                            if ((0U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__m = 1U;
                                if ((8U & (IData)(vlSelfRef.cpu__DOT__modrm))) {
                                    if (vlSelfRef.cpu__DOT__size) {
                                        __Vdly__cpu__DOT__op1 
                                            = vlSelfRef.cpu__DOT__op1;
                                        __Vdly__cpu__DOT__op2 
                                            = vlSelfRef.cpu__DOT__ax;
                                    } else {
                                        __Vdly__cpu__DOT__op1 
                                            = ((0xff00U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                                  >> 7U)))) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & (IData)(vlSelfRef.cpu__DOT__op1)));
                                        __Vdly__cpu__DOT__op2 
                                            = ((0xff00U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.cpu__DOT__ax) 
                                                                  >> 7U)))) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & (IData)(vlSelfRef.cpu__DOT__ax)));
                                    }
                                } else {
                                    __Vdly__cpu__DOT__op2 
                                        = ((IData)(vlSelfRef.cpu__DOT__size)
                                            ? (IData)(vlSelfRef.cpu__DOT__ax)
                                            : (0xffU 
                                               & (IData)(vlSelfRef.cpu__DOT__ax)));
                                }
                            } else if ((1U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__dx 
                                    = (0xffffU & ((IData)(vlSelfRef.cpu__DOT__size)
                                                   ? 
                                                  (vlSelfRef.cpu__DOT__mult 
                                                   >> 0x10U)
                                                   : (IData)(vlSelfRef.cpu__DOT__dx)));
                                __Vdly__cpu__DOT__ax 
                                    = (0xffffU & vlSelfRef.cpu__DOT__mult);
                                __Vdly__cpu__DOT__flag 
                                    = ((0xfbfU & (IData)(__Vdly__cpu__DOT__flag)) 
                                       | (0x40U & (
                                                   ((IData)(vlSelfRef.cpu__DOT__size)
                                                     ? 
                                                    (~ (IData)(
                                                               (0U 
                                                                != vlSelfRef.cpu__DOT__mult)))
                                                     : 
                                                    (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0xffffU 
                                                                 & vlSelfRef.cpu__DOT__mult))))) 
                                                   << 6U)));
                                __Vdly__cpu__DOT__cp = 0U;
                                __Vdly__cpu__DOT__ta = 0U;
                                __Vdly__cpu__DOT__flag 
                                    = ((0xffeU & (IData)(__Vdly__cpu__DOT__flag)) 
                                       | ((IData)(vlSelfRef.cpu__DOT__size)
                                           ? (0U != (IData)(vlSelfRef.cpu__DOT__dx))
                                           : (0U != 
                                              (0xffU 
                                               & ((IData)(vlSelfRef.cpu__DOT__ax) 
                                                  >> 8U)))));
                                __Vdly__cpu__DOT__flag 
                                    = ((0x7ffU & (IData)(__Vdly__cpu__DOT__flag)) 
                                       | (((IData)(vlSelfRef.cpu__DOT__size)
                                            ? (0U != (IData)(vlSelfRef.cpu__DOT__dx))
                                            : (0U != 
                                               (0xffU 
                                                & ((IData)(vlSelfRef.cpu__DOT__ax) 
                                                   >> 8U)))) 
                                          << 0xbU));
                            }
                        } else if (((6U == (7U & ((IData)(vlSelfRef.cpu__DOT__modrm) 
                                                  >> 3U))) 
                                    || (7U == (7U & 
                                               ((IData)(vlSelfRef.cpu__DOT__modrm) 
                                                >> 3U))))) {
                            if ((0U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__m 
                                    = vlSelfRef.cpu__DOT__mn;
                                __Vdly__cpu__DOT__ta = 7U;
                                __Vdly__cpu__DOT__tb = 1U;
                                __Vdly__cpu__DOT__cp = 0U;
                                __Vdly__cpu__DOT__divr = 0U;
                                __Vdly__cpu__DOT__divc 
                                    = ((IData)(vlSelfRef.cpu__DOT__size)
                                        ? 0x1fU : 0xfU);
                                if ((8U & (IData)(vlSelfRef.cpu__DOT__modrm))) {
                                    if (vlSelfRef.cpu__DOT__size) {
                                        __Vdly__cpu__DOT__diva 
                                            = ((0x8000U 
                                                & (IData)(vlSelfRef.cpu__DOT__dx))
                                                ? (- vlSelfRef.cpu__DOT__dxax)
                                                : vlSelfRef.cpu__DOT__dxax);
                                        __Vdly__cpu__DOT__op2 
                                            = (0xffffU 
                                               & ((0x8000U 
                                                   & (IData)(vlSelfRef.cpu__DOT__op1))
                                                   ? 
                                                  (- (IData)(vlSelfRef.cpu__DOT__op1))
                                                   : (IData)(vlSelfRef.cpu__DOT__op1)));
                                    } else {
                                        __Vdly__cpu__DOT__diva 
                                            = ((0x8000U 
                                                & (IData)(vlSelfRef.cpu__DOT__ax))
                                                ? (- vlSelfRef.cpu__DOT__ax00)
                                                : vlSelfRef.cpu__DOT__ax00);
                                        __Vdly__cpu__DOT__op2 
                                            = (0xffffU 
                                               & ((0x80U 
                                                   & (IData)(vlSelfRef.cpu__DOT__op1))
                                                   ? 
                                                  (0xff00U 
                                                   & ((- (IData)(vlSelfRef.cpu__DOT__op1)) 
                                                      << 8U))
                                                   : (IData)(vlSelfRef.cpu__DOT__op1)));
                                    }
                                    __Vdly__cpu__DOT__signd 
                                        = (1U & (((IData)(vlSelfRef.cpu__DOT__size)
                                                   ? 
                                                  ((IData)(vlSelfRef.cpu__DOT__dx) 
                                                   >> 0xfU)
                                                   : 
                                                  ((IData)(vlSelfRef.cpu__DOT__ax) 
                                                   >> 0xfU)) 
                                                 ^ 
                                                 ((IData)(vlSelfRef.cpu__DOT__size)
                                                   ? 
                                                  ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                   >> 0xfU)
                                                   : 
                                                  ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                   >> 7U))));
                                } else {
                                    __Vdly__cpu__DOT__diva 
                                        = ((IData)(vlSelfRef.cpu__DOT__size)
                                            ? vlSelfRef.cpu__DOT__dxax
                                            : vlSelfRef.cpu__DOT__ax00);
                                    __Vdly__cpu__DOT__op2 
                                        = vlSelfRef.cpu__DOT__op1;
                                    __Vdly__cpu__DOT__signd = 0U;
                                }
                            } else if ((1U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__m = 0U;
                                __Vdly__cpu__DOT__wb = 0U;
                                __Vdly__cpu__DOT__ta 
                                    = (((0U == (IData)(vlSelfRef.cpu__DOT__op2)) 
                                        | ((IData)(vlSelfRef.cpu__DOT__size)
                                            ? (0U != 
                                               (vlSelfRef.cpu__DOT__diva 
                                                >> 0x10U))
                                            : (0U != 
                                               (0xffU 
                                                & (vlSelfRef.cpu__DOT__diva 
                                                   >> 8U)))))
                                        ? 6U : 0U);
                                if (vlSelfRef.cpu__DOT__size) {
                                    __Vdly__cpu__DOT__ax 
                                        = (0xffffU 
                                           & ((IData)(vlSelfRef.cpu__DOT__signd)
                                               ? (- vlSelfRef.cpu__DOT__diva)
                                               : vlSelfRef.cpu__DOT__diva));
                                    __Vdly__cpu__DOT__dx 
                                        = vlSelfRef.cpu__DOT__divr;
                                } else {
                                    __Vdly__cpu__DOT__ax 
                                        = (0xffffU 
                                           & ((0xff00U 
                                               & ((IData)(vlSelfRef.cpu__DOT__divr) 
                                                  << 8U)) 
                                              | (0xffU 
                                                 & ((IData)(vlSelfRef.cpu__DOT__signd)
                                                     ? 
                                                    (- vlSelfRef.cpu__DOT__diva)
                                                     : vlSelfRef.cpu__DOT__diva))));
                                    __Vdly__cpu__DOT__dx 
                                        = vlSelfRef.cpu__DOT__dx;
                                }
                            }
                        }
                    } else if ((0xfeU == (0xfeU & (IData)(vlSelfRef.cpu__DOT__opcode)))) {
                        if (((0U == (7U & ((IData)(vlSelfRef.cpu__DOT__modrm) 
                                           >> 3U))) 
                             || (1U == (7U & ((IData)(vlSelfRef.cpu__DOT__modrm) 
                                              >> 3U))))) {
                            if ((0U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__m 
                                    = vlSelfRef.cpu__DOT__mn;
                                __Vdly__cpu__DOT__alu 
                                    = ((8U & (IData)(vlSelfRef.cpu__DOT__modrm))
                                        ? 5U : 0U);
                                __Vdly__cpu__DOT__op2 = 1U;
                            } else if ((1U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__flag 
                                    = vlSelfRef.cpu__DOT__alu_flag;
                                __Vdly__cpu__DOT__ta = 2U;
                                __Vdly__cpu__DOT__wb 
                                    = (0xffffU & vlSelfRef.cpu__DOT__alu_res);
                            }
                        } else if ((2U == (7U & ((IData)(vlSelfRef.cpu__DOT__modrm) 
                                                 >> 3U)))) {
                            __Vdly__cpu__DOT__ip = vlSelfRef.cpu__DOT__op1;
                            __Vdly__cpu__DOT__wb = vlSelfRef.cpu__DOT__ip;
                            __Vdly__cpu__DOT__ta = 
                                ((IData)(vlSelfRef.cpu__DOT__size)
                                  ? 3U : 8U);
                        } else if ((3U == (7U & ((IData)(vlSelfRef.cpu__DOT__modrm) 
                                                 >> 3U)))) {
                            if ((0U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__ea 
                                    = (0xffffU & ((IData)(2U) 
                                                  + (IData)(vlSelfRef.cpu__DOT__ea)));
                                __Vdly__cpu__DOT__ip 
                                    = vlSelfRef.cpu__DOT__op1;
                                __Vdly__cpu__DOT__m 
                                    = vlSelfRef.cpu__DOT__mn;
                                __Vdly__cpu__DOT__op2 
                                    = vlSelfRef.cpu__DOT__cs;
                                if ((1U & (~ (IData)(vlSelfRef.cpu__DOT__size)))) {
                                    __Vdly__cpu__DOT__ta = 8U;
                                }
                                __Vdly__cpu__DOT__op1 
                                    = vlSelfRef.cpu__DOT__ip;
                            } else if ((1U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__m 
                                    = vlSelfRef.cpu__DOT__mn;
                                __Vdly__cpu__DOT__ea 
                                    = vlSelfRef.cpu__DOT__ean;
                                __Vdly__cpu__DOT__wb 
                                    = vlSelfRef.in;
                                __Vdly__cpu__DOT__tb = 1U;
                            } else if ((2U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__m 
                                    = vlSelfRef.cpu__DOT__mn;
                                __Vdly__cpu__DOT__ta = 3U;
                                __Vdly__cpu__DOT__cs 
                                    = (((IData)(vlSelfRef.in) 
                                        << 8U) | (0xffU 
                                                  & (IData)(vlSelfRef.cpu__DOT__wb)));
                                __Vdly__cpu__DOT__wb 
                                    = vlSelfRef.cpu__DOT__op2;
                            } else if ((3U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__m 
                                    = vlSelfRef.cpu__DOT__mn;
                                __Vdly__cpu__DOT__ta = 3U;
                                __Vdly__cpu__DOT__wb 
                                    = vlSelfRef.cpu__DOT__op1;
                            } else if ((4U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__ta = 0U;
                            }
                        } else if ((4U == (7U & ((IData)(vlSelfRef.cpu__DOT__modrm) 
                                                 >> 3U)))) {
                            __Vdly__cpu__DOT__ip = vlSelfRef.cpu__DOT__op1;
                            __Vdly__cpu__DOT__cp = 0U;
                            __Vdly__cpu__DOT__ta = 
                                ((IData)(vlSelfRef.cpu__DOT__size)
                                  ? 0U : 8U);
                        } else if ((5U == (7U & ((IData)(vlSelfRef.cpu__DOT__modrm) 
                                                 >> 3U)))) {
                            if ((0U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__ea 
                                    = (0xffffU & ((IData)(2U) 
                                                  + (IData)(vlSelfRef.cpu__DOT__ea)));
                                __Vdly__cpu__DOT__ip 
                                    = vlSelfRef.cpu__DOT__op1;
                                __Vdly__cpu__DOT__m 
                                    = vlSelfRef.cpu__DOT__mn;
                                if ((1U & (~ (IData)(vlSelfRef.cpu__DOT__size)))) {
                                    __Vdly__cpu__DOT__ta = 8U;
                                }
                            } else if ((1U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__m 
                                    = vlSelfRef.cpu__DOT__mn;
                                __Vdly__cpu__DOT__ea 
                                    = vlSelfRef.cpu__DOT__ean;
                                __Vdly__cpu__DOT__wb 
                                    = vlSelfRef.in;
                            } else if ((2U == (IData)(vlSelfRef.cpu__DOT__m))) {
                                __Vdly__cpu__DOT__ta = 0U;
                                __Vdly__cpu__DOT__cp = 0U;
                                __Vdly__cpu__DOT__cs 
                                    = (((IData)(vlSelfRef.in) 
                                        << 8U) | (0xffU 
                                                  & (IData)(vlSelfRef.cpu__DOT__wb)));
                            }
                        } else if ((6U == (7U & ((IData)(vlSelfRef.cpu__DOT__modrm) 
                                                 >> 3U)))) {
                            __Vdly__cpu__DOT__wb = vlSelfRef.cpu__DOT__op1;
                            __Vdly__cpu__DOT__ta = 3U;
                        } else if ((7U == (7U & ((IData)(vlSelfRef.cpu__DOT__modrm) 
                                                 >> 3U)))) {
                            __Vdly__cpu__DOT__ta = 8U;
                        }
                    }
                } else if ((2U == (IData)(vlSelfRef.cpu__DOT__ta))) {
                    if ((0U == (IData)(vlSelfRef.cpu__DOT__tm))) {
                        if (((IData)(vlSelfRef.cpu__DOT__dir) 
                             | (3U == (3U & ((IData)(vlSelfRef.cpu__DOT__modrm) 
                                             >> 6U))))) {
                            __Vdly__cpu__DOT__ta = vlSelfRef.cpu__DOT__tb;
                            __Vdly__cpu__DOT__cp = 0U;
                            if ((4U & ((IData)(vlSelfRef.cpu__DOT__dir)
                                        ? ((IData)(vlSelfRef.cpu__DOT__modrm) 
                                           >> 3U) : (IData)(vlSelfRef.cpu__DOT__modrm)))) {
                                if ((2U & ((IData)(vlSelfRef.cpu__DOT__dir)
                                            ? ((IData)(vlSelfRef.cpu__DOT__modrm) 
                                               >> 3U)
                                            : (IData)(vlSelfRef.cpu__DOT__modrm)))) {
                                    if ((1U & ((IData)(vlSelfRef.cpu__DOT__dir)
                                                ? ((IData)(vlSelfRef.cpu__DOT__modrm) 
                                                   >> 3U)
                                                : (IData)(vlSelfRef.cpu__DOT__modrm)))) {
                                        if (vlSelfRef.cpu__DOT__size) {
                                            __Vdly__cpu__DOT__di 
                                                = vlSelfRef.cpu__DOT__wb;
                                        } else {
                                            vlSelfRef.cpu__DOT__bx 
                                                = (
                                                   (0xffU 
                                                    & (IData)(vlSelfRef.cpu__DOT__bx)) 
                                                   | (0xff00U 
                                                      & ((IData)(vlSelfRef.cpu__DOT__wb) 
                                                         << 8U)));
                                        }
                                    } else if (vlSelfRef.cpu__DOT__size) {
                                        __Vdly__cpu__DOT__si 
                                            = vlSelfRef.cpu__DOT__wb;
                                    } else {
                                        __Vdly__cpu__DOT__dx 
                                            = ((0xffU 
                                                & (IData)(__Vdly__cpu__DOT__dx)) 
                                               | (0xff00U 
                                                  & ((IData)(vlSelfRef.cpu__DOT__wb) 
                                                     << 8U)));
                                    }
                                } else if ((1U & ((IData)(vlSelfRef.cpu__DOT__dir)
                                                   ? 
                                                  ((IData)(vlSelfRef.cpu__DOT__modrm) 
                                                   >> 3U)
                                                   : (IData)(vlSelfRef.cpu__DOT__modrm)))) {
                                    if (vlSelfRef.cpu__DOT__size) {
                                        vlSelfRef.cpu__DOT__bp 
                                            = vlSelfRef.cpu__DOT__wb;
                                    } else {
                                        __Vdly__cpu__DOT__cx 
                                            = ((0xffU 
                                                & (IData)(__Vdly__cpu__DOT__cx)) 
                                               | (0xff00U 
                                                  & ((IData)(vlSelfRef.cpu__DOT__wb) 
                                                     << 8U)));
                                    }
                                } else if (vlSelfRef.cpu__DOT__size) {
                                    __Vdly__cpu__DOT__sp 
                                        = vlSelfRef.cpu__DOT__wb;
                                } else {
                                    __Vdly__cpu__DOT__ax 
                                        = ((0xffU & (IData)(__Vdly__cpu__DOT__ax)) 
                                           | (0xff00U 
                                              & ((IData)(vlSelfRef.cpu__DOT__wb) 
                                                 << 8U)));
                                }
                            } else if ((2U & ((IData)(vlSelfRef.cpu__DOT__dir)
                                               ? ((IData)(vlSelfRef.cpu__DOT__modrm) 
                                                  >> 3U)
                                               : (IData)(vlSelfRef.cpu__DOT__modrm)))) {
                                if ((1U & ((IData)(vlSelfRef.cpu__DOT__dir)
                                            ? ((IData)(vlSelfRef.cpu__DOT__modrm) 
                                               >> 3U)
                                            : (IData)(vlSelfRef.cpu__DOT__modrm)))) {
                                    if (vlSelfRef.cpu__DOT__size) {
                                        vlSelfRef.cpu__DOT__bx 
                                            = vlSelfRef.cpu__DOT__wb;
                                    } else {
                                        vlSelfRef.cpu__DOT__bx 
                                            = ((0xff00U 
                                                & (IData)(vlSelfRef.cpu__DOT__bx)) 
                                               | (0xffU 
                                                  & (IData)(vlSelfRef.cpu__DOT__wb)));
                                    }
                                } else if (vlSelfRef.cpu__DOT__size) {
                                    __Vdly__cpu__DOT__dx 
                                        = vlSelfRef.cpu__DOT__wb;
                                } else {
                                    __Vdly__cpu__DOT__dx 
                                        = ((0xff00U 
                                            & (IData)(__Vdly__cpu__DOT__dx)) 
                                           | (0xffU 
                                              & (IData)(vlSelfRef.cpu__DOT__wb)));
                                }
                            } else if ((1U & ((IData)(vlSelfRef.cpu__DOT__dir)
                                               ? ((IData)(vlSelfRef.cpu__DOT__modrm) 
                                                  >> 3U)
                                               : (IData)(vlSelfRef.cpu__DOT__modrm)))) {
                                if (vlSelfRef.cpu__DOT__size) {
                                    __Vdly__cpu__DOT__cx 
                                        = vlSelfRef.cpu__DOT__wb;
                                } else {
                                    __Vdly__cpu__DOT__cx 
                                        = ((0xff00U 
                                            & (IData)(__Vdly__cpu__DOT__cx)) 
                                           | (0xffU 
                                              & (IData)(vlSelfRef.cpu__DOT__wb)));
                                }
                            } else if (vlSelfRef.cpu__DOT__size) {
                                __Vdly__cpu__DOT__ax 
                                    = vlSelfRef.cpu__DOT__wb;
                            } else {
                                __Vdly__cpu__DOT__ax 
                                    = ((0xff00U & (IData)(__Vdly__cpu__DOT__ax)) 
                                       | (0xffU & (IData)(vlSelfRef.cpu__DOT__wb)));
                            }
                        } else {
                            __Vdly__cpu__DOT__tm = 1U;
                            vlSelfRef.we = 1U;
                            __Vdly__cpu__DOT__cp = 1U;
                            vlSelfRef.out = (0xffU 
                                             & (IData)(vlSelfRef.cpu__DOT__wb));
                        }
                    } else if ((1U == (IData)(vlSelfRef.cpu__DOT__tm))) {
                        if (vlSelfRef.cpu__DOT__size) {
                            __Vdly__cpu__DOT__ta = vlSelfRef.cpu__DOT__ta;
                            __Vdly__cpu__DOT__tm = 2U;
                        } else {
                            __Vdly__cpu__DOT__ta = vlSelfRef.cpu__DOT__tb;
                            __Vdly__cpu__DOT__tm = 0U;
                        }
                        vlSelfRef.out = (0xffU & ((IData)(vlSelfRef.cpu__DOT__wb) 
                                                  >> 8U));
                        __Vdly__cpu__DOT__ea = vlSelfRef.cpu__DOT__ean;
                        vlSelfRef.we = vlSelfRef.cpu__DOT__size;
                        __Vdly__cpu__DOT__cp = vlSelfRef.cpu__DOT__size;
                    } else if ((2U == (IData)(vlSelfRef.cpu__DOT__tm))) {
                        __Vdly__cpu__DOT__ea = (0xffffU 
                                                & ((IData)(vlSelfRef.cpu__DOT__ea) 
                                                   - (IData)(1U)));
                        __Vdly__cpu__DOT__ta = vlSelfRef.cpu__DOT__tb;
                        __Vdly__cpu__DOT__tm = 0U;
                        __Vdly__cpu__DOT__cp = 0U;
                    }
                } else if ((3U == (IData)(vlSelfRef.cpu__DOT__ta))) {
                    if ((0U == (IData)(vlSelfRef.cpu__DOT__tm))) {
                        __Vdly__cpu__DOT__tm = 1U;
                        vlSelfRef.we = 1U;
                        __Vdly__cpu__DOT__segold = vlSelfRef.cpu__DOT__seg;
                        __Vdly__cpu__DOT__ea = (0xffffU 
                                                & ((IData)(vlSelfRef.cpu__DOT__sp) 
                                                   - (IData)(2U)));
                        vlSelfRef.out = (0xffU & (IData)(vlSelfRef.cpu__DOT__wb));
                        __Vdly__cpu__DOT__cp = 1U;
                        __Vdly__cpu__DOT__sp = (0xffffU 
                                                & ((IData)(vlSelfRef.cpu__DOT__sp) 
                                                   - (IData)(2U)));
                        __Vdly__cpu__DOT__seg = vlSelfRef.cpu__DOT__ss;
                    } else if ((1U == (IData)(vlSelfRef.cpu__DOT__tm))) {
                        __Vdly__cpu__DOT__tm = 2U;
                        vlSelfRef.we = 1U;
                        __Vdly__cpu__DOT__ea = vlSelfRef.cpu__DOT__ean;
                        vlSelfRef.out = (0xffU & ((IData)(vlSelfRef.cpu__DOT__wb) 
                                                  >> 8U));
                    } else if ((2U == (IData)(vlSelfRef.cpu__DOT__tm))) {
                        __Vdly__cpu__DOT__ta = vlSelfRef.cpu__DOT__tb;
                        __Vdly__cpu__DOT__tm = 0U;
                        __Vdly__cpu__DOT__cp = 0U;
                        __Vdly__cpu__DOT__seg = vlSelfRef.cpu__DOT__segold;
                    }
                } else if ((4U == (IData)(vlSelfRef.cpu__DOT__ta))) {
                    if ((0U == (IData)(vlSelfRef.cpu__DOT__tm))) {
                        __Vdly__cpu__DOT__tm = 1U;
                        __Vdly__cpu__DOT__cp = 1U;
                        __Vdly__cpu__DOT__ea = vlSelfRef.cpu__DOT__sp;
                        __Vdly__cpu__DOT__segold = vlSelfRef.cpu__DOT__seg;
                        __Vdly__cpu__DOT__sp = (0xffffU 
                                                & ((IData)(2U) 
                                                   + (IData)(vlSelfRef.cpu__DOT__sp)));
                        __Vdly__cpu__DOT__seg = vlSelfRef.cpu__DOT__ss;
                    } else if ((1U == (IData)(vlSelfRef.cpu__DOT__tm))) {
                        __Vdly__cpu__DOT__tm = 2U;
                        __Vdly__cpu__DOT__wb = vlSelfRef.in;
                        __Vdly__cpu__DOT__ea = vlSelfRef.cpu__DOT__ean;
                    } else if ((2U == (IData)(vlSelfRef.cpu__DOT__tm))) {
                        __Vdly__cpu__DOT__ta = vlSelfRef.cpu__DOT__tb;
                        __Vdly__cpu__DOT__tm = 0U;
                        __Vdly__cpu__DOT__cp = 0U;
                        __Vdly__cpu__DOT__seg = vlSelfRef.cpu__DOT__segold;
                        __Vdly__cpu__DOT__wb = ((0xffU 
                                                 & (IData)(__Vdly__cpu__DOT__wb)) 
                                                | ((IData)(vlSelfRef.in) 
                                                   << 8U));
                    }
                } else if ((6U == (IData)(vlSelfRef.cpu__DOT__ta))) {
                    if (((((((((0U == (IData)(vlSelfRef.cpu__DOT__m)) 
                               | (1U == (IData)(vlSelfRef.cpu__DOT__m))) 
                              | (2U == (IData)(vlSelfRef.cpu__DOT__m))) 
                             | (3U == (IData)(vlSelfRef.cpu__DOT__m))) 
                            | (4U == (IData)(vlSelfRef.cpu__DOT__m))) 
                           | (5U == (IData)(vlSelfRef.cpu__DOT__m))) 
                          | (6U == (IData)(vlSelfRef.cpu__DOT__m))) 
                         | (7U == (IData)(vlSelfRef.cpu__DOT__m)))) {
                        if ((0U == (IData)(vlSelfRef.cpu__DOT__m))) {
                            __Vdly__cpu__DOT__m = vlSelfRef.cpu__DOT__mn;
                            __Vdly__cpu__DOT__ea = 
                                (0xffffU & ((IData)(vlSelfRef.cpu__DOT__sp) 
                                            - (IData)(6U)));
                            vlSelfRef.we = 1U;
                            vlSelfRef.out = (0xffU 
                                             & (IData)(vlSelfRef.cpu__DOT__ip));
                            __Vdly__cpu__DOT__seg = vlSelfRef.cpu__DOT__ss;
                            __Vdly__cpu__DOT__cp = 1U;
                        } else if ((1U == (IData)(vlSelfRef.cpu__DOT__m))) {
                            __Vdly__cpu__DOT__sp = vlSelfRef.cpu__DOT__ea;
                            __Vdly__cpu__DOT__m = vlSelfRef.cpu__DOT__mn;
                            vlSelfRef.we = 1U;
                            vlSelfRef.out = (0xffU 
                                             & ((IData)(vlSelfRef.cpu__DOT__ip) 
                                                >> 8U));
                            __Vdly__cpu__DOT__ea = vlSelfRef.cpu__DOT__ean;
                        } else if ((2U == (IData)(vlSelfRef.cpu__DOT__m))) {
                            __Vdly__cpu__DOT__m = vlSelfRef.cpu__DOT__mn;
                            __Vdly__cpu__DOT__ea = vlSelfRef.cpu__DOT__ean;
                            vlSelfRef.we = 1U;
                            vlSelfRef.out = (0xffU 
                                             & (IData)(vlSelfRef.cpu__DOT__cs));
                        } else if ((3U == (IData)(vlSelfRef.cpu__DOT__m))) {
                            __Vdly__cpu__DOT__m = vlSelfRef.cpu__DOT__mn;
                            __Vdly__cpu__DOT__ea = vlSelfRef.cpu__DOT__ean;
                            vlSelfRef.we = 1U;
                            vlSelfRef.out = (0xffU 
                                             & ((IData)(vlSelfRef.cpu__DOT__cs) 
                                                >> 8U));
                        } else if ((4U == (IData)(vlSelfRef.cpu__DOT__m))) {
                            __Vdly__cpu__DOT__m = vlSelfRef.cpu__DOT__mn;
                            __Vdly__cpu__DOT__ea = vlSelfRef.cpu__DOT__ean;
                            vlSelfRef.we = 1U;
                            vlSelfRef.out = (0xffU 
                                             & (IData)(vlSelfRef.cpu__DOT__flag));
                        } else if ((5U == (IData)(vlSelfRef.cpu__DOT__m))) {
                            __Vdly__cpu__DOT__m = vlSelfRef.cpu__DOT__mn;
                            __Vdly__cpu__DOT__ea = vlSelfRef.cpu__DOT__ean;
                            vlSelfRef.we = 1U;
                            vlSelfRef.out = (0xfU & 
                                             ((IData)(vlSelfRef.cpu__DOT__flag) 
                                              >> 8U));
                        } else if ((6U == (IData)(vlSelfRef.cpu__DOT__m))) {
                            __Vdly__cpu__DOT__m = vlSelfRef.cpu__DOT__mn;
                            __Vdly__cpu__DOT__ea = 
                                (0x3fcU & ((IData)(vlSelfRef.cpu__DOT__wb) 
                                           << 2U));
                            __Vdly__cpu__DOT__seg = 0U;
                            __Vdly__cpu__DOT__cp = 1U;
                        } else {
                            __Vdly__cpu__DOT__ip = 
                                ((0xff00U & (IData)(__Vdly__cpu__DOT__ip)) 
                                 | (IData)(vlSelfRef.in));
                            __Vdly__cpu__DOT__m = vlSelfRef.cpu__DOT__mn;
                            __Vdly__cpu__DOT__ea = vlSelfRef.cpu__DOT__ean;
                        }
                    } else if ((8U == (IData)(vlSelfRef.cpu__DOT__m))) {
                        __Vdly__cpu__DOT__ip = ((0xffU 
                                                 & (IData)(__Vdly__cpu__DOT__ip)) 
                                                | ((IData)(vlSelfRef.in) 
                                                   << 8U));
                        __Vdly__cpu__DOT__m = vlSelfRef.cpu__DOT__mn;
                        __Vdly__cpu__DOT__ea = vlSelfRef.cpu__DOT__ean;
                    } else if ((9U == (IData)(vlSelfRef.cpu__DOT__m))) {
                        __Vdly__cpu__DOT__m = vlSelfRef.cpu__DOT__mn;
                        __Vdly__cpu__DOT__ea = vlSelfRef.cpu__DOT__ean;
                        __Vdly__cpu__DOT__cs = ((0xff00U 
                                                 & (IData)(__Vdly__cpu__DOT__cs)) 
                                                | (IData)(vlSelfRef.in));
                    } else if ((0xaU == (IData)(vlSelfRef.cpu__DOT__m))) {
                        __Vdly__cpu__DOT__flag = (0xdffU 
                                                  & (IData)(__Vdly__cpu__DOT__flag));
                        __Vdly__cpu__DOT__m = 0U;
                        __Vdly__cpu__DOT__ea = vlSelfRef.cpu__DOT__ean;
                        __Vdly__cpu__DOT__cs = ((0xffU 
                                                 & (IData)(__Vdly__cpu__DOT__cs)) 
                                                | ((IData)(vlSelfRef.in) 
                                                   << 8U));
                        __Vdly__cpu__DOT__cp = 0U;
                        __Vdly__cpu__DOT__ta = 0U;
                    }
                } else {
                    __Vdly__cpu__DOT__diva = ((vlSelfRef.cpu__DOT__diva 
                                               << 1U) 
                                              | (IData)(vlSelfRef.cpu__DOT__divr_bit));
                    __Vdly__cpu__DOT__divc = (0x3fU 
                                              & ((IData)(vlSelfRef.cpu__DOT__divc) 
                                                 - (IData)(1U)));
                    __Vdly__cpu__DOT__divr = (0xffffU 
                                              & (vlSelfRef.cpu__DOT__divr_next 
                                                 - 
                                                 ((IData)(vlSelfRef.cpu__DOT__divr_bit)
                                                   ? (IData)(vlSelfRef.cpu__DOT__op2)
                                                   : 0U)));
                    if ((0U == (IData)(vlSelfRef.cpu__DOT__divc))) {
                        __Vdly__cpu__DOT__ta = vlSelfRef.cpu__DOT__tb;
                        __Vdly__cpu__DOT__tm = 0U;
                    }
                }
            }
        }
    } else {
        __Vdly__cpu__DOT__ip = 0xfff0U;
        __Vdly__cpu__DOT__preip = 0U;
        __Vdly__cpu__DOT__cp = 0U;
        __Vdly__cpu__DOT__ta = 0U;
        __Vdly__cpu__DOT__cs = 0xf000U;
        vlSelfRef.pr = 0U;
        __Vdly__cpu__DOT___overs = 6U;
        __Vdly__cpu__DOT___rep = 0U;
    }
    vlSelfRef.cpu__DOT___overs = __Vdly__cpu__DOT___overs;
    vlSelfRef.cpu__DOT___rep = __Vdly__cpu__DOT___rep;
    vlSelfRef.cpu__DOT__tm = __Vdly__cpu__DOT__tm;
    vlSelfRef.cpu__DOT__ips = __Vdly__cpu__DOT__ips;
    vlSelfRef.cpu__DOT__opcode = __Vdly__cpu__DOT__opcode;
    vlSelfRef.cpu__DOT__overs = __Vdly__cpu__DOT__overs;
    vlSelfRef.cpu__DOT__rep = __Vdly__cpu__DOT__rep;
    vlSelfRef.cpu__DOT__tb = __Vdly__cpu__DOT__tb;
    vlSelfRef.cpu__DOT__cpen = __Vdly__cpu__DOT__cpen;
    vlSelfRef.cpu__DOT__modrm = __Vdly__cpu__DOT__modrm;
    vlSelfRef.cpu__DOT__dir = __Vdly__cpu__DOT__dir;
    vlSelfRef.cpu__DOT__wb = __Vdly__cpu__DOT__wb;
    vlSelfRef.cpu__DOT__es = __Vdly__cpu__DOT__es;
    vlSelfRef.cpu__DOT__ss = __Vdly__cpu__DOT__ss;
    vlSelfRef.cpu__DOT__ds = __Vdly__cpu__DOT__ds;
    vlSelfRef.cpu__DOT__divc = __Vdly__cpu__DOT__divc;
    vlSelfRef.pa = __Vdly__pa;
    vlSelfRef.cpu__DOT__signd = __Vdly__cpu__DOT__signd;
    vlSelfRef.cpu__DOT__segold = __Vdly__cpu__DOT__segold;
    vlSelfRef.cpu__DOT__m = __Vdly__cpu__DOT__m;
    vlSelfRef.cpu__DOT__preip = __Vdly__cpu__DOT__preip;
    vlSelfRef.cpu__DOT__seg = __Vdly__cpu__DOT__seg;
    vlSelfRef.cpu__DOT__cp = __Vdly__cpu__DOT__cp;
    vlSelfRef.cpu__DOT__cs = __Vdly__cpu__DOT__cs;
    vlSelfRef.cpu__DOT__diva = __Vdly__cpu__DOT__diva;
    vlSelfRef.cpu__DOT__divr = __Vdly__cpu__DOT__divr;
    vlSelfRef.cpu__DOT__ea = __Vdly__cpu__DOT__ea;
    vlSelfRef.cpu__DOT__ip = __Vdly__cpu__DOT__ip;
    vlSelfRef.cpu__DOT__si = __Vdly__cpu__DOT__si;
    vlSelfRef.cpu__DOT__di = __Vdly__cpu__DOT__di;
    vlSelfRef.cpu__DOT__sp = __Vdly__cpu__DOT__sp;
    vlSelfRef.cpu__DOT__cx = __Vdly__cpu__DOT__cx;
    vlSelfRef.cpu__DOT__dx = __Vdly__cpu__DOT__dx;
    vlSelfRef.cpu__DOT__alu = __Vdly__cpu__DOT__alu;
    vlSelfRef.cpu__DOT__op2 = __Vdly__cpu__DOT__op2;
    vlSelfRef.cpu__DOT__op1 = __Vdly__cpu__DOT__op1;
    vlSelfRef.cpu__DOT__ta = __Vdly__cpu__DOT__ta;
    vlSelfRef.cpu__DOT__flag = __Vdly__cpu__DOT__flag;
    vlSelfRef.cpu__DOT__ax = __Vdly__cpu__DOT__ax;
    vlSelfRef.cpu__DOT__size = __Vdly__cpu__DOT__size;
    vlSelfRef.cpu__DOT__mn = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.cpu__DOT__m)));
    vlSelfRef.cpu__DOT__divr_next = (((IData)(vlSelfRef.cpu__DOT__divr) 
                                      << 1U) | (vlSelfRef.cpu__DOT__diva 
                                                >> 0x1fU));
    vlSelfRef.cpu__DOT__ean = (0xffffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.cpu__DOT__ea)));
    vlSelfRef.cpu__DOT__ipn = (0xffffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.cpu__DOT__ip)));
    vlSelfRef.cpu__DOT__ipx = (0xffffU & ((IData)(vlSelfRef.cpu__DOT__ip) 
                                          - (IData)(vlSelfRef.cpu__DOT__preip)));
    vlSelfRef.cpu__DOT__ipsign = (0xffffU & ((IData)(1U) 
                                             + ((IData)(vlSelfRef.cpu__DOT__ip) 
                                                + (IData)(vlSelfRef.cpu__DOT__signex))));
    vlSelfRef.address = (0xfffffU & ((IData)(vlSelfRef.cpu__DOT__cp)
                                      ? (((IData)(vlSelfRef.cpu__DOT__seg) 
                                          << 4U) + (IData)(vlSelfRef.cpu__DOT__ea))
                                      : (((IData)(vlSelfRef.cpu__DOT__cs) 
                                          << 4U) + (IData)(vlSelfRef.cpu__DOT__ip))));
    cpu__DOT__rot_shft = ((4U == (IData)(vlSelfRef.cpu__DOT__alu)) 
                          | ((5U == (IData)(vlSelfRef.cpu__DOT__alu)) 
                             | ((6U == (IData)(vlSelfRef.cpu__DOT__alu)) 
                                | (7U == (IData)(vlSelfRef.cpu__DOT__alu)))));
    cpu__DOT__is_lgc = ((4U != (IData)(vlSelfRef.cpu__DOT__alu)) 
                        & ((6U != (IData)(vlSelfRef.cpu__DOT__alu)) 
                           & (1U != (IData)(vlSelfRef.cpu__DOT__alu))));
    vlSelfRef.cpu__DOT__mult = ((IData)(vlSelfRef.cpu__DOT__op1) 
                                * (IData)(vlSelfRef.cpu__DOT__op2));
    cpu__DOT____VdfgRegularize_hcce91bd5_0_18 = (0x1ffffU 
                                                 & ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                    + (IData)(vlSelfRef.cpu__DOT__op2)));
    cpu__DOT____VdfgRegularize_hcce91bd5_0_21 = (0x1ffffU 
                                                 & ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                    - (IData)(vlSelfRef.cpu__DOT__op2)));
    vlSelfRef.m0 = (0U == (IData)(vlSelfRef.cpu__DOT__ta));
    cpu__DOT____VdfgRegularize_hcce91bd5_0_2 = (1U 
                                                & VL_REDXOR_16(
                                                               (0x880U 
                                                                & (IData)(vlSelfRef.cpu__DOT__flag))));
    vlSelfRef.cpu__DOT__ax00 = ((IData)(vlSelfRef.cpu__DOT__ax) 
                                << 0x10U);
    vlSelfRef.cpu__DOT__dxax = (((IData)(vlSelfRef.cpu__DOT__dx) 
                                 << 0x10U) | (IData)(vlSelfRef.cpu__DOT__ax));
    vlSelfRef.cpu__DOT__daa_m = (1U & (((IData)(vlSelfRef.cpu__DOT__flag) 
                                        >> 4U) | (9U 
                                                  < 
                                                  (0xfU 
                                                   & (IData)(vlSelfRef.cpu__DOT__ax)))));
    cpu__DOT____VdfgRegularize_hcce91bd5_0_29 = (1U 
                                                 & ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                    >> 
                                                    ((IData)(vlSelfRef.cpu__DOT__size)
                                                      ? 0xfU
                                                      : 7U)));
    if ((0U == (IData)(vlSelfRef.cpu__DOT__alu))) {
        vlSelfRef.cpu__DOT__rot_r = (0xffffU & ((IData)(vlSelfRef.cpu__DOT__size)
                                                 ? 
                                                ((0xfffeU 
                                                  & ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                       >> 0xfU)))
                                                 : 
                                                ((0xfeU 
                                                  & ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                       >> 7U)))));
        vlSelfRef.cpu__DOT__alu_res = (0x1ffffU & cpu__DOT____VdfgRegularize_hcce91bd5_0_18);
    } else {
        vlSelfRef.cpu__DOT__rot_r = (0xffffU & ((1U 
                                                 == (IData)(vlSelfRef.cpu__DOT__alu))
                                                 ? 
                                                ((IData)(vlSelfRef.cpu__DOT__size)
                                                  ? 
                                                 ((0x8000U 
                                                   & ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                      << 0xfU)) 
                                                  | (0x7fffU 
                                                     & ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                        >> 1U)))
                                                  : 
                                                 ((0x80U 
                                                   & ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                      << 7U)) 
                                                  | (0x7fU 
                                                     & ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                        >> 1U))))
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.cpu__DOT__alu))
                                                  ? 
                                                 ((IData)(vlSelfRef.cpu__DOT__size)
                                                   ? 
                                                  ((0xfffeU 
                                                    & ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(vlSelfRef.cpu__DOT__flag)))
                                                   : 
                                                  ((0xfeU 
                                                    & ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(vlSelfRef.cpu__DOT__flag))))
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.cpu__DOT__alu))
                                                   ? 
                                                  ((IData)(vlSelfRef.cpu__DOT__size)
                                                    ? 
                                                   ((0x8000U 
                                                     & ((IData)(vlSelfRef.cpu__DOT__flag) 
                                                        << 0xfU)) 
                                                    | (0x7fffU 
                                                       & ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                          >> 1U)))
                                                    : 
                                                   ((0x80U 
                                                     & ((IData)(vlSelfRef.cpu__DOT__flag) 
                                                        << 7U)) 
                                                    | (0x7fU 
                                                       & ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                          >> 1U))))
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelfRef.cpu__DOT__alu))
                                                    ? 
                                                   ((IData)(vlSelfRef.cpu__DOT__size)
                                                     ? 
                                                    VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.cpu__DOT__op1), 1U)
                                                     : 
                                                    (0x7fU 
                                                     & ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                        >> 1U)))
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlSelfRef.cpu__DOT__alu))
                                                     ? 
                                                    ((IData)(vlSelfRef.cpu__DOT__size)
                                                      ? 
                                                     ((0x8000U 
                                                       & (IData)(vlSelfRef.cpu__DOT__op1)) 
                                                      | (0x7fffU 
                                                         & ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                            >> 1U)))
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSelfRef.cpu__DOT__op1)) 
                                                      | (0x7fU 
                                                         & ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                            >> 1U))))
                                                     : 
                                                    ((IData)(vlSelfRef.cpu__DOT__size)
                                                      ? 
                                                     VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.cpu__DOT__op1), 1U)
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                         << 1U)))))))));
        vlSelfRef.cpu__DOT__alu_res = (0x1ffffU & (
                                                   (2U 
                                                    == (IData)(vlSelfRef.cpu__DOT__alu))
                                                    ? 
                                                   (cpu__DOT____VdfgRegularize_hcce91bd5_0_18 
                                                    + 
                                                    (1U 
                                                     & (IData)(vlSelfRef.cpu__DOT__flag)))
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelfRef.cpu__DOT__alu))
                                                     ? 
                                                    (cpu__DOT____VdfgRegularize_hcce91bd5_0_21 
                                                     - 
                                                     (1U 
                                                      & (IData)(vlSelfRef.cpu__DOT__flag)))
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelfRef.cpu__DOT__alu))
                                                      ? 
                                                     ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                      & (IData)(vlSelfRef.cpu__DOT__op2))
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelfRef.cpu__DOT__alu))
                                                       ? 
                                                      ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                       | (IData)(vlSelfRef.cpu__DOT__op2))
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelfRef.cpu__DOT__alu))
                                                        ? 
                                                       ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                        ^ (IData)(vlSelfRef.cpu__DOT__op2))
                                                        : cpu__DOT____VdfgRegularize_hcce91bd5_0_21))))));
    }
    vlSelfRef.cpu__DOT__divr_bit = (vlSelfRef.cpu__DOT__divr_next 
                                    >= (IData)(vlSelfRef.cpu__DOT__op2));
    cpu__DOT__rsize = ((IData)(vlSelfRef.m0) | (IData)(vlSelfRef.cpu__DOT__size));
    vlSelfRef.cpu__DOT__branches = ((0x80U & (((IData)(cpu__DOT____VdfgRegularize_hcce91bd5_0_2) 
                                               << 7U) 
                                              | (0xffffff80U 
                                                 & ((IData)(vlSelfRef.cpu__DOT__flag) 
                                                    << 1U)))) 
                                    | (((IData)(cpu__DOT____VdfgRegularize_hcce91bd5_0_2) 
                                        << 6U) | ((0x20U 
                                                   & ((IData)(vlSelfRef.cpu__DOT__flag) 
                                                      << 3U)) 
                                                  | ((0x10U 
                                                      & ((IData)(vlSelfRef.cpu__DOT__flag) 
                                                         >> 3U)) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x801U 
                                                                   & (IData)(vlSelfRef.cpu__DOT__flag)))) 
                                                         << 3U) 
                                                        | ((4U 
                                                            & ((IData)(vlSelfRef.cpu__DOT__flag) 
                                                               >> 4U)) 
                                                           | ((2U 
                                                               & ((IData)(vlSelfRef.cpu__DOT__flag) 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & ((IData)(vlSelfRef.cpu__DOT__flag) 
                                                                    >> 0xbU)))))))));
    vlSelfRef.cpu__DOT__aaa_f = ((0xfe0U & (IData)(vlSelfRef.cpu__DOT__flag)) 
                                 | (((IData)(vlSelfRef.cpu__DOT__daa_m) 
                                     << 4U) | ((0xeU 
                                                & (IData)(vlSelfRef.cpu__DOT__flag)) 
                                               | (IData)(vlSelfRef.cpu__DOT__daa_m))));
    if (vlSelfRef.cpu__DOT__daa_m) {
        cpu__DOT__daa_i = (0x1ffU & ((8U & (IData)(vlSelfRef.in))
                                      ? ((0xffU & (IData)(vlSelfRef.cpu__DOT__ax)) 
                                         - (IData)(6U))
                                      : ((IData)(6U) 
                                         + (0xffU & (IData)(vlSelfRef.cpu__DOT__ax)))));
        cpu__DOT__daa_c = (1U & ((IData)(cpu__DOT__daa_i) 
                                 >> 8U));
    } else {
        cpu__DOT__daa_i = (0x1ffU & (0xffU & (IData)(vlSelfRef.cpu__DOT__ax)));
        cpu__DOT__daa_c = (1U & (IData)(vlSelfRef.cpu__DOT__flag));
    }
    cpu__DOT____VdfgRegularize_hcce91bd5_0_45 = (1U 
                                                 & ((IData)(vlSelfRef.cpu__DOT__rot_r) 
                                                    >> 
                                                    ((IData)(vlSelfRef.cpu__DOT__size)
                                                      ? 0xfU
                                                      : 7U)));
    cpu__DOT____VdfgRegularize_hcce91bd5_0_25 = ((0x10U 
                                                  >= 
                                                  ((IData)(vlSelfRef.cpu__DOT__size)
                                                    ? 0xfU
                                                    : 7U)) 
                                                 && (1U 
                                                     & (vlSelfRef.cpu__DOT__alu_res 
                                                        >> 
                                                        ((IData)(vlSelfRef.cpu__DOT__size)
                                                          ? 0xfU
                                                          : 7U))));
    if (cpu__DOT__rsize) {
        vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_8 
            = vlSelfRef.cpu__DOT__ax;
        vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_9 
            = vlSelfRef.cpu__DOT__cx;
        vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_10 
            = vlSelfRef.cpu__DOT__dx;
        vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_11 
            = vlSelfRef.cpu__DOT__bx;
        vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_12 
            = (0xffffU & (IData)(vlSelfRef.cpu__DOT__sp));
        vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_13 
            = (0xffffU & (IData)(vlSelfRef.cpu__DOT__bp));
        vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_14 
            = (0xffffU & (IData)(vlSelfRef.cpu__DOT__si));
        vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_15 
            = (0xffffU & (IData)(vlSelfRef.cpu__DOT__di));
    } else {
        vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_8 
            = (0xffU & (IData)(vlSelfRef.cpu__DOT__ax));
        vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_9 
            = (0xffU & (IData)(vlSelfRef.cpu__DOT__cx));
        vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_10 
            = (0xffU & (IData)(vlSelfRef.cpu__DOT__dx));
        vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_11 
            = (0xffU & (IData)(vlSelfRef.cpu__DOT__bx));
        vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_12 
            = (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.cpu__DOT__ax), 8U));
        vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_13 
            = (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.cpu__DOT__cx), 8U));
        vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_14 
            = (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.cpu__DOT__dx), 8U));
        vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_15 
            = (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.cpu__DOT__bx), 8U));
    }
    vlSelfRef.cpu__DOT__aaa_r = ((0xff00U & (((IData)(vlSelfRef.cpu__DOT__daa_m)
                                               ? ((8U 
                                                   & (IData)(vlSelfRef.in))
                                                   ? 
                                                  ((0xffU 
                                                    & ((IData)(vlSelfRef.cpu__DOT__ax) 
                                                       >> 8U)) 
                                                   - (IData)(1U))
                                                   : 
                                                  ((IData)(1U) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(vlSelfRef.cpu__DOT__ax) 
                                                       >> 8U))))
                                               : (0xffU 
                                                  & ((IData)(vlSelfRef.cpu__DOT__ax) 
                                                     >> 8U))) 
                                             << 8U)) 
                                 | (0xfU & (IData)(cpu__DOT__daa_i)));
    vlSelfRef.cpu__DOT__rot_f = (2U | ((0x800U & ((
                                                   (5U 
                                                    == (IData)(vlSelfRef.cpu__DOT__alu))
                                                    ? (IData)(cpu__DOT____VdfgRegularize_hcce91bd5_0_29)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.cpu__DOT__alu))
                                                     ? 
                                                    (((1U 
                                                       == (IData)(vlSelfRef.cpu__DOT__alu)) 
                                                      | (3U 
                                                         == (IData)(vlSelfRef.cpu__DOT__alu))) 
                                                     & ((IData)(cpu__DOT____VdfgRegularize_hcce91bd5_0_45) 
                                                        ^ 
                                                        ((IData)(vlSelfRef.cpu__DOT__rot_r) 
                                                         >> 
                                                         (0xfU 
                                                          & (((IData)(vlSelfRef.cpu__DOT__size)
                                                               ? 0xfU
                                                               : 7U) 
                                                             - (IData)(1U))))))
                                                     : 
                                                    ((IData)(cpu__DOT____VdfgRegularize_hcce91bd5_0_29) 
                                                     ^ 
                                                     ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                      >> 
                                                      (0xfU 
                                                       & (((IData)(vlSelfRef.cpu__DOT__size)
                                                            ? 0xfU
                                                            : 7U) 
                                                          - (IData)(1U))))))) 
                                                  << 0xbU)) 
                                       | ((0x700U & (IData)(vlSelfRef.cpu__DOT__flag)) 
                                          | ((0x80U 
                                              & (((IData)(cpu__DOT__rot_shft)
                                                   ? (IData)(cpu__DOT____VdfgRegularize_hcce91bd5_0_45)
                                                   : 
                                                  ((IData)(vlSelfRef.cpu__DOT__flag) 
                                                   >> 7U)) 
                                                 << 7U)) 
                                             | ((0x40U 
                                                 & (((IData)(cpu__DOT__rot_shft)
                                                      ? 
                                                     (~ 
                                                      ((IData)(vlSelfRef.cpu__DOT__size)
                                                        ? 
                                                       (0U 
                                                        != (IData)(vlSelfRef.cpu__DOT__rot_r))
                                                        : 
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (IData)(vlSelfRef.cpu__DOT__rot_r)))))
                                                      : 
                                                     ((IData)(vlSelfRef.cpu__DOT__flag) 
                                                      >> 6U)) 
                                                    << 6U)) 
                                                | ((0x10U 
                                                    & (IData)(vlSelfRef.cpu__DOT__flag)) 
                                                   | ((4U 
                                                       & (((IData)(cpu__DOT__rot_shft)
                                                            ? 
                                                           (~ 
                                                            VL_REDXOR_32(
                                                                         (0xffU 
                                                                          & (IData)(vlSelfRef.cpu__DOT__rot_r))))
                                                            : 
                                                           ((IData)(vlSelfRef.cpu__DOT__flag) 
                                                            >> 2U)) 
                                                          << 2U)) 
                                                      | (1U 
                                                         & ((1U 
                                                             & (IData)(vlSelfRef.cpu__DOT__alu))
                                                             ? (IData)(vlSelfRef.cpu__DOT__op1)
                                                             : (IData)(cpu__DOT____VdfgRegularize_hcce91bd5_0_29))))))))));
    vlSelfRef.cpu__DOT__alu_flag = (2U | (((((IData)(cpu__DOT____VdfgRegularize_hcce91bd5_0_29) 
                                             ^ (((IData)(vlSelfRef.cpu__DOT__op2) 
                                                 >> 
                                                 ((IData)(vlSelfRef.cpu__DOT__size)
                                                   ? 0xfU
                                                   : 7U)) 
                                                ^ (
                                                   (0U 
                                                    == (IData)(vlSelfRef.cpu__DOT__alu)) 
                                                   | (2U 
                                                      == (IData)(vlSelfRef.cpu__DOT__alu))))) 
                                            & (((IData)(cpu__DOT____VdfgRegularize_hcce91bd5_0_29) 
                                                ^ (IData)(cpu__DOT____VdfgRegularize_hcce91bd5_0_25)) 
                                               & (IData)(cpu__DOT__is_lgc))) 
                                           << 0xbU) 
                                          | ((0x700U 
                                              & (IData)(vlSelfRef.cpu__DOT__flag)) 
                                             | (((IData)(cpu__DOT____VdfgRegularize_hcce91bd5_0_25) 
                                                 << 7U) 
                                                | (((0U 
                                                     == 
                                                     ((IData)(vlSelfRef.cpu__DOT__size)
                                                       ? 
                                                      (0xffffU 
                                                       & vlSelfRef.cpu__DOT__alu_res)
                                                       : 
                                                      (0xffU 
                                                       & vlSelfRef.cpu__DOT__alu_res))) 
                                                    << 6U) 
                                                   | ((0xfffffff0U 
                                                       & (((IData)(vlSelfRef.cpu__DOT__op1) 
                                                           ^ 
                                                           ((IData)(vlSelfRef.cpu__DOT__op2) 
                                                            ^ vlSelfRef.cpu__DOT__alu_res)) 
                                                          & ((IData)(cpu__DOT__is_lgc) 
                                                             << 4U))) 
                                                      | ((4U 
                                                          & ((~ 
                                                              VL_REDXOR_32(
                                                                           (0xffU 
                                                                            & vlSelfRef.cpu__DOT__alu_res))) 
                                                             << 2U)) 
                                                         | (((0x10U 
                                                              >= 
                                                              (0x1fU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  ((IData)(vlSelfRef.cpu__DOT__size)
                                                                    ? 0xfU
                                                                    : 7U)))) 
                                                             && (1U 
                                                                 & (vlSelfRef.cpu__DOT__alu_res 
                                                                    >> 
                                                                    (0x1fU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        ((IData)(vlSelfRef.cpu__DOT__size)
                                                                          ? 0xfU
                                                                          : 7U)))))) 
                                                            & (IData)(cpu__DOT__is_lgc)))))))));
    vlSelfRef.cpu__DOT__r20 = ((0U == (7U & (IData)(vlSelfRef.in)))
                                ? (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_8)
                                : ((1U == (7U & (IData)(vlSelfRef.in)))
                                    ? (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_9)
                                    : ((2U == (7U & (IData)(vlSelfRef.in)))
                                        ? (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_10)
                                        : ((3U == (7U 
                                                   & (IData)(vlSelfRef.in)))
                                            ? (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_11)
                                            : ((4U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelfRef.in)))
                                                ? (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_12)
                                                : (
                                                   (5U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelfRef.in)))
                                                    ? (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_13)
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelfRef.in)))
                                                     ? (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_14)
                                                     : (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_15))))))));
    vlSelfRef.cpu__DOT__r53 = ((0U == (7U & ((IData)(vlSelfRef.in) 
                                             >> 3U)))
                                ? (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_8)
                                : ((1U == (7U & ((IData)(vlSelfRef.in) 
                                                 >> 3U)))
                                    ? (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_9)
                                    : ((2U == (7U & 
                                               ((IData)(vlSelfRef.in) 
                                                >> 3U)))
                                        ? (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_10)
                                        : ((3U == (7U 
                                                   & ((IData)(vlSelfRef.in) 
                                                      >> 3U)))
                                            ? (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_11)
                                            : ((4U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelfRef.in) 
                                                    >> 3U)))
                                                ? (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_12)
                                                : (
                                                   (5U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.in) 
                                                        >> 3U)))
                                                    ? (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_13)
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelfRef.in) 
                                                         >> 3U)))
                                                     ? (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_14)
                                                     : (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_15))))))));
    cpu__DOT__daa_t = ((IData)(cpu__DOT__daa_c) | (0x9fU 
                                                   < 
                                                   (0xffU 
                                                    & (IData)(cpu__DOT__daa_i))));
    vlSelfRef.cpu__DOT__daa_r = (0xffU & ((IData)(cpu__DOT__daa_t)
                                           ? ((8U & (IData)(vlSelfRef.in))
                                               ? ((IData)(cpu__DOT__daa_i) 
                                                  - (IData)(0x60U))
                                               : ((IData)(0x60U) 
                                                  + (IData)(cpu__DOT__daa_i)))
                                           : (IData)(cpu__DOT__daa_i)));
    vlSelfRef.cpu__DOT__daa_f = (2U | ((0xf00U & (IData)(vlSelfRef.cpu__DOT__flag)) 
                                       | ((0x80U & (IData)(vlSelfRef.cpu__DOT__daa_r)) 
                                          | ((0x40U 
                                              & ((~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSelfRef.cpu__DOT__daa_r)))) 
                                                 << 6U)) 
                                             | ((0x10U 
                                                 & ((0xfffffff0U 
                                                     & (IData)(vlSelfRef.cpu__DOT__flag)) 
                                                    | ((IData)(vlSelfRef.cpu__DOT__daa_m) 
                                                       << 4U))) 
                                                | ((4U 
                                                    & ((~ 
                                                        VL_REDXOR_8(vlSelfRef.cpu__DOT__daa_r)) 
                                                       << 2U)) 
                                                   | ((IData)(cpu__DOT__daa_t) 
                                                      | (IData)(cpu__DOT__daa_c))))))));
}

void Vcpu___024root___eval_triggers__act(Vcpu___024root* vlSelf);

bool Vcpu___024root___eval_phase__act(Vcpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcpu___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vcpu___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcpu___024root___eval_phase__nba(Vcpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcpu___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu___024root___dump_triggers__ico(Vcpu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu___024root___dump_triggers__nba(Vcpu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu___024root___dump_triggers__act(Vcpu___024root* vlSelf);
#endif  // VL_DEBUG

void Vcpu___024root___eval(Vcpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vcpu___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("cpu.v", 7, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vcpu___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vcpu___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("cpu.v", 7, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vcpu___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("cpu.v", 7, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vcpu___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vcpu___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcpu___024root___eval_debug_assertions(Vcpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelfRef.ce & 0xfeU))) {
        Verilated::overWidthError("ce");}
    if (VL_UNLIKELY((vlSelfRef.reset_n & 0xfeU))) {
        Verilated::overWidthError("reset_n");}
}
#endif  // VL_DEBUG
