// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvidac.h for the primary calling header

#include "Vvidac__pch.h"
#include "Vvidac___024root.h"

void Vvidac___024root___ico_sequent__TOP__0(Vvidac___024root* vlSelf);

void Vvidac___024root___eval_ico(Vvidac___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvidac__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvidac___024root___eval_ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vvidac___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vvidac___024root___ico_sequent__TOP__0(Vvidac___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvidac__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvidac___024root___ico_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.vidac__DOT__ax = (0x1ffffU & (VL_SHIFTL_III(17,17,32, (IData)(vlSelfRef.vidac__DOT__y), 8U) 
                                            + (VL_SHIFTL_III(17,17,32, (IData)(vlSelfRef.vidac__DOT__y), 6U) 
                                               + ((IData)(vlSelfRef.vidac__DOT__x) 
                                                  + 
                                                  ((IData)(vlSelfRef.page) 
                                                   << 0x10U)))));
}

void Vvidac___024root___eval_triggers__ico(Vvidac___024root* vlSelf);

bool Vvidac___024root___eval_phase__ico(Vvidac___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvidac__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvidac___024root___eval_phase__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vvidac___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vvidac___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vvidac___024root___eval_act(Vvidac___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvidac__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvidac___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vvidac___024root___nba_sequent__TOP__0(Vvidac___024root* vlSelf);

void Vvidac___024root___eval_nba(Vvidac___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvidac__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvidac___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vvidac___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vvidac___024root___nba_sequent__TOP__0(Vvidac___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvidac__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvidac___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ vidac__DOT__sub_x;
    vidac__DOT__sub_x = 0;
    SData/*8:0*/ vidac__DOT__xd_3;
    vidac__DOT__xd_3 = 0;
    SData/*8:0*/ vidac__DOT__xd_2;
    vidac__DOT__xd_2 = 0;
    SData/*8:0*/ vidac__DOT__xd_1;
    vidac__DOT__xd_1 = 0;
    SData/*8:0*/ vidac__DOT__yd_3;
    vidac__DOT__yd_3 = 0;
    SData/*8:0*/ vidac__DOT__yd_2;
    vidac__DOT__yd_2 = 0;
    SData/*8:0*/ vidac__DOT__yd_1;
    vidac__DOT__yd_1 = 0;
    SData/*8:0*/ vidac__DOT____VdfgRegularize_h19eb9f73_1_7;
    vidac__DOT____VdfgRegularize_h19eb9f73_1_7 = 0;
    SData/*8:0*/ vidac__DOT____VdfgRegularize_h19eb9f73_1_8;
    vidac__DOT____VdfgRegularize_h19eb9f73_1_8 = 0;
    SData/*8:0*/ vidac__DOT____VdfgRegularize_h19eb9f73_1_10;
    vidac__DOT____VdfgRegularize_h19eb9f73_1_10 = 0;
    SData/*8:0*/ vidac__DOT____VdfgRegularize_h19eb9f73_1_11;
    vidac__DOT____VdfgRegularize_h19eb9f73_1_11 = 0;
    CData/*7:0*/ __Vdly__vidac__DOT__t;
    __Vdly__vidac__DOT__t = 0;
    IData/*17:0*/ __Vdly__vidac__DOT__u;
    __Vdly__vidac__DOT__u = 0;
    IData/*17:0*/ __Vdly__a;
    __Vdly__a = 0;
    CData/*7:0*/ __Vdly__vidac__DOT__tn;
    __Vdly__vidac__DOT__tn = 0;
    CData/*3:0*/ __Vdly__vidac__DOT__b;
    __Vdly__vidac__DOT__b = 0;
    CData/*7:0*/ __Vdly__vidac__DOT__comm;
    __Vdly__vidac__DOT__comm = 0;
    SData/*15:0*/ __Vdly__vidac__DOT__y2;
    __Vdly__vidac__DOT__y2 = 0;
    SData/*15:0*/ __Vdly__vidac__DOT__x2;
    __Vdly__vidac__DOT__x2 = 0;
    SData/*15:0*/ __Vdly__vidac__DOT__y1;
    __Vdly__vidac__DOT__y1 = 0;
    CData/*7:0*/ __Vdly__o;
    __Vdly__o = 0;
    SData/*15:0*/ __Vdly__vidac__DOT__x1;
    __Vdly__vidac__DOT__x1 = 0;
    SData/*15:0*/ __Vdly__vidac__DOT___x2;
    __Vdly__vidac__DOT___x2 = 0;
    SData/*15:0*/ __Vdly__vidac__DOT___y2;
    __Vdly__vidac__DOT___y2 = 0;
    SData/*15:0*/ __Vdly__vidac__DOT__dx;
    __Vdly__vidac__DOT__dx = 0;
    SData/*15:0*/ __Vdly__vidac__DOT__dy;
    __Vdly__vidac__DOT__dy = 0;
    SData/*15:0*/ __Vdly__vidac__DOT__err;
    __Vdly__vidac__DOT__err = 0;
    SData/*15:0*/ __Vdly__vidac__DOT__x;
    __Vdly__vidac__DOT__x = 0;
    SData/*15:0*/ __Vdly__vidac__DOT__y;
    __Vdly__vidac__DOT__y = 0;
    CData/*7:0*/ __Vdly__tx;
    __Vdly__tx = 0;
    CData/*7:0*/ __Vdly__ty;
    __Vdly__ty = 0;
    // Body
    __Vdly__ty = vlSelfRef.ty;
    __Vdly__tx = vlSelfRef.tx;
    __Vdly__vidac__DOT___x2 = vlSelfRef.vidac__DOT___x2;
    __Vdly__o = vlSelfRef.o;
    __Vdly__vidac__DOT__comm = vlSelfRef.vidac__DOT__comm;
    __Vdly__vidac__DOT__b = vlSelfRef.vidac__DOT__b;
    __Vdly__vidac__DOT__tn = vlSelfRef.vidac__DOT__tn;
    __Vdly__a = vlSelfRef.a;
    __Vdly__vidac__DOT__u = vlSelfRef.vidac__DOT__u;
    __Vdly__vidac__DOT__t = vlSelfRef.vidac__DOT__t;
    __Vdly__vidac__DOT__err = vlSelfRef.vidac__DOT__err;
    __Vdly__vidac__DOT__x = vlSelfRef.vidac__DOT__x;
    __Vdly__vidac__DOT__y = vlSelfRef.vidac__DOT__y;
    __Vdly__vidac__DOT__y1 = vlSelfRef.vidac__DOT__y1;
    __Vdly__vidac__DOT__x1 = vlSelfRef.vidac__DOT__x1;
    __Vdly__vidac__DOT__y2 = vlSelfRef.vidac__DOT__y2;
    __Vdly__vidac__DOT__dy = vlSelfRef.vidac__DOT__dy;
    __Vdly__vidac__DOT__dx = vlSelfRef.vidac__DOT__dx;
    __Vdly__vidac__DOT__x2 = vlSelfRef.vidac__DOT__x2;
    __Vdly__vidac__DOT___y2 = vlSelfRef.vidac__DOT___y2;
    if (vlSelfRef.reset_n) {
        if ((1U == (((IData)(vlSelfRef.bsy) << 1U) 
                    | (IData)(vlSelfRef.cmd)))) {
            vlSelfRef.bsy = 1U;
            __Vdly__vidac__DOT__t = 0U;
            __Vdly__vidac__DOT__u = 0x20000U;
            vlSelfRef.w = 0U;
        } else {
            vlSelfRef.w = 0U;
            if (((((((((0U == (IData)(vlSelfRef.vidac__DOT__t)) 
                       | (1U == (IData)(vlSelfRef.vidac__DOT__t))) 
                      | (2U == (IData)(vlSelfRef.vidac__DOT__t))) 
                     | (3U == (IData)(vlSelfRef.vidac__DOT__t))) 
                    | (4U == (IData)(vlSelfRef.vidac__DOT__t))) 
                   | (5U == (IData)(vlSelfRef.vidac__DOT__t))) 
                  | (6U == (IData)(vlSelfRef.vidac__DOT__t))) 
                 | (7U == (IData)(vlSelfRef.vidac__DOT__t)))) {
                if ((0U == (IData)(vlSelfRef.vidac__DOT__t))) {
                    __Vdly__vidac__DOT__t = 1U;
                    __Vdly__a = vlSelfRef.vidac__DOT__u;
                } else if ((1U == (IData)(vlSelfRef.vidac__DOT__t))) {
                    __Vdly__a = (0x3ffffU & ((IData)(1U) 
                                             + vlSelfRef.a));
                    if ((1U == (IData)(vlSelfRef.i))) {
                        __Vdly__vidac__DOT__t = 2U;
                        __Vdly__vidac__DOT__tn = 3U;
                        __Vdly__vidac__DOT__b = 9U;
                    } else if (((2U == (IData)(vlSelfRef.i)) 
                                || (3U == (IData)(vlSelfRef.i)))) {
                        __Vdly__vidac__DOT__t = 2U;
                        __Vdly__vidac__DOT__tn = 6U;
                        __Vdly__vidac__DOT__b = 9U;
                    } else if ((4U == (IData)(vlSelfRef.i))) {
                        __Vdly__vidac__DOT__t = 8U;
                        __Vdly__vidac__DOT__b = 5U;
                    } else if (((5U == (IData)(vlSelfRef.i)) 
                                || (6U == (IData)(vlSelfRef.i)))) {
                        __Vdly__vidac__DOT__t = 9U;
                        __Vdly__vidac__DOT__b = 7U;
                    } else if ((7U == (IData)(vlSelfRef.i))) {
                        __Vdly__vidac__DOT__t = 0xdU;
                        __Vdly__vidac__DOT__b = 0xcU;
                    } else {
                        __Vdly__vidac__DOT__t = 0U;
                        vlSelfRef.bsy = 0U;
                    }
                    __Vdly__vidac__DOT__comm = vlSelfRef.i;
                } else if ((2U == (IData)(vlSelfRef.vidac__DOT__t))) {
                    if ((0U != (IData)(vlSelfRef.vidac__DOT__b))) {
                        __Vdly__a = (0x3ffffU & ((IData)(1U) 
                                                 + vlSelfRef.a));
                        __Vdly__vidac__DOT__b = (0xfU 
                                                 & ((IData)(vlSelfRef.vidac__DOT__b) 
                                                    - (IData)(1U)));
                        __Vdly__vidac__DOT__y2 = (((IData)(vlSelfRef.o) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & ((IData)(vlSelfRef.vidac__DOT__y2) 
                                                        >> 8U)));
                        __Vdly__vidac__DOT__x2 = ((0xff00U 
                                                   & ((IData)(vlSelfRef.vidac__DOT__y2) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & ((IData)(vlSelfRef.vidac__DOT__x2) 
                                                        >> 8U)));
                        __Vdly__vidac__DOT__y1 = ((0xff00U 
                                                   & ((IData)(vlSelfRef.vidac__DOT__x2) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & ((IData)(vlSelfRef.vidac__DOT__y1) 
                                                        >> 8U)));
                        __Vdly__o = vlSelfRef.i;
                        __Vdly__vidac__DOT__x1 = ((0xff00U 
                                                   & ((IData)(vlSelfRef.vidac__DOT__y1) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & ((IData)(vlSelfRef.vidac__DOT__x1) 
                                                        >> 8U)));
                    } else {
                        __Vdly__vidac__DOT__t = vlSelfRef.vidac__DOT__tn;
                    }
                } else if ((3U == (IData)(vlSelfRef.vidac__DOT__t))) {
                    __Vdly__vidac__DOT__t = 4U;
                    __Vdly__vidac__DOT__u = vlSelfRef.a;
                    __Vdly__vidac__DOT___x2 = vlSelfRef.vidac__DOT__x2;
                    __Vdly__vidac__DOT___y2 = vlSelfRef.vidac__DOT__y2;
                    if (vlSelfRef.vidac__DOT__ylt) {
                        __Vdly__vidac__DOT__x2 = vlSelfRef.vidac__DOT__x1;
                        __Vdly__vidac__DOT__y2 = vlSelfRef.vidac__DOT__y1;
                        __Vdly__vidac__DOT__x1 = vlSelfRef.vidac__DOT__x2;
                        __Vdly__vidac__DOT__y1 = vlSelfRef.vidac__DOT__y2;
                    }
                } else if ((4U == (IData)(vlSelfRef.vidac__DOT__t))) {
                    __Vdly__vidac__DOT__t = 5U;
                    __Vdly__vidac__DOT__dx = vlSelfRef.vidac__DOT__abs_x;
                    __Vdly__vidac__DOT__dy = vlSelfRef.vidac__DOT__sub_y;
                    __Vdly__vidac__DOT__err = (0xffffU 
                                               & ((IData)(vlSelfRef.vidac__DOT__abs_x) 
                                                  - (IData)(vlSelfRef.vidac__DOT__sub_y)));
                    __Vdly__vidac__DOT__x = vlSelfRef.vidac__DOT__x1;
                    __Vdly__vidac__DOT__y = vlSelfRef.vidac__DOT__y1;
                } else if ((5U == (IData)(vlSelfRef.vidac__DOT__t))) {
                    __Vdly__vidac__DOT__err = (0xffffU 
                                               & (((IData)(vlSelfRef.vidac__DOT__err) 
                                                   + 
                                                   ((0x8000U 
                                                     & (IData)(vlSelfRef.vidac__DOT__e1))
                                                     ? 0U
                                                     : 
                                                    (- (IData)(vlSelfRef.vidac__DOT__dy)))) 
                                                  + 
                                                  ((0x8000U 
                                                    & (IData)(vlSelfRef.vidac__DOT__e2))
                                                    ? (IData)(vlSelfRef.vidac__DOT__dx)
                                                    : 0U)));
                    __Vdly__a = vlSelfRef.vidac__DOT__ax;
                    vlSelfRef.w = vlSelfRef.vidac__DOT__wx;
                    __Vdly__vidac__DOT__x = (0xffffU 
                                             & ((IData)(vlSelfRef.vidac__DOT__x) 
                                                + (
                                                   (0x8000U 
                                                    & (IData)(vlSelfRef.vidac__DOT__e1))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelfRef.vidac__DOT__xlt)
                                                     ? 0xffffffffU
                                                     : 1U))));
                    __Vdly__vidac__DOT__y = (0xffffU 
                                             & ((IData)(vlSelfRef.vidac__DOT__y) 
                                                + (
                                                   (0x8000U 
                                                    & (IData)(vlSelfRef.vidac__DOT__e2))
                                                    ? 1U
                                                    : 0U)));
                    if ((((((IData)(vlSelfRef.vidac__DOT__x) 
                            == (IData)(vlSelfRef.vidac__DOT__x2)) 
                           & ((IData)(vlSelfRef.vidac__DOT__y) 
                              == (IData)(vlSelfRef.vidac__DOT__y2))) 
                          | (IData)(vlSelfRef.vidac__DOT__yof)) 
                         | ((0x140U <= (IData)(vlSelfRef.vidac__DOT__x)) 
                            & (IData)(vlSelfRef.vidac__DOT__xlt)))) {
                        __Vdly__vidac__DOT__t = 0U;
                    }
                } else if ((6U == (IData)(vlSelfRef.vidac__DOT__t))) {
                    __Vdly__vidac__DOT__t = 7U;
                    __Vdly__vidac__DOT__u = vlSelfRef.a;
                    __Vdly__vidac__DOT__x = (0xffffU 
                                             & (IData)(
                                                       (((IData)(vlSelfRef.vidac__DOT__xlt)
                                                          ? 
                                                         (((QData)((IData)(
                                                                           (((IData)(vlSelfRef.vidac__DOT__x2) 
                                                                             << 0x10U) 
                                                                            | (IData)(vlSelfRef.vidac__DOT__x2)))) 
                                                           << 0x10U) 
                                                          | (QData)((IData)(vlSelfRef.vidac__DOT__x1)))
                                                          : 
                                                         (((QData)((IData)(
                                                                           (((IData)(vlSelfRef.vidac__DOT__x1) 
                                                                             << 0x10U) 
                                                                            | (IData)(vlSelfRef.vidac__DOT__x1)))) 
                                                           << 0x10U) 
                                                          | (QData)((IData)(vlSelfRef.vidac__DOT__x2)))) 
                                                        >> 0x20U)));
                    __Vdly__vidac__DOT__x1 = (0xffffU 
                                              & (IData)(
                                                        (((IData)(vlSelfRef.vidac__DOT__xlt)
                                                           ? 
                                                          (((QData)((IData)(
                                                                            (((IData)(vlSelfRef.vidac__DOT__x2) 
                                                                              << 0x10U) 
                                                                             | (IData)(vlSelfRef.vidac__DOT__x2)))) 
                                                            << 0x10U) 
                                                           | (QData)((IData)(vlSelfRef.vidac__DOT__x1)))
                                                           : 
                                                          (((QData)((IData)(
                                                                            (((IData)(vlSelfRef.vidac__DOT__x1) 
                                                                              << 0x10U) 
                                                                             | (IData)(vlSelfRef.vidac__DOT__x1)))) 
                                                            << 0x10U) 
                                                           | (QData)((IData)(vlSelfRef.vidac__DOT__x2)))) 
                                                         >> 0x10U)));
                    __Vdly__vidac__DOT__x2 = (0xffffU 
                                              & (IData)(
                                                        ((IData)(vlSelfRef.vidac__DOT__xlt)
                                                          ? 
                                                         (((QData)((IData)(
                                                                           (((IData)(vlSelfRef.vidac__DOT__x2) 
                                                                             << 0x10U) 
                                                                            | (IData)(vlSelfRef.vidac__DOT__x2)))) 
                                                           << 0x10U) 
                                                          | (QData)((IData)(vlSelfRef.vidac__DOT__x1)))
                                                          : 
                                                         (((QData)((IData)(
                                                                           (((IData)(vlSelfRef.vidac__DOT__x1) 
                                                                             << 0x10U) 
                                                                            | (IData)(vlSelfRef.vidac__DOT__x1)))) 
                                                           << 0x10U) 
                                                          | (QData)((IData)(vlSelfRef.vidac__DOT__x2))))));
                    __Vdly__vidac__DOT__y = (0xffffU 
                                             & (IData)(
                                                       (((IData)(vlSelfRef.vidac__DOT__ylt)
                                                          ? 
                                                         (((QData)((IData)(
                                                                           (((IData)(vlSelfRef.vidac__DOT__y2) 
                                                                             << 0x10U) 
                                                                            | (IData)(vlSelfRef.vidac__DOT__x2)))) 
                                                           << 0x10U) 
                                                          | (QData)((IData)(vlSelfRef.vidac__DOT__y1)))
                                                          : 
                                                         (((QData)((IData)(
                                                                           (((IData)(vlSelfRef.vidac__DOT__y1) 
                                                                             << 0x10U) 
                                                                            | (IData)(vlSelfRef.vidac__DOT__y1)))) 
                                                           << 0x10U) 
                                                          | (QData)((IData)(vlSelfRef.vidac__DOT__y2)))) 
                                                        >> 0x20U)));
                    __Vdly__vidac__DOT__y1 = (0xffffU 
                                              & (IData)(
                                                        (((IData)(vlSelfRef.vidac__DOT__ylt)
                                                           ? 
                                                          (((QData)((IData)(
                                                                            (((IData)(vlSelfRef.vidac__DOT__y2) 
                                                                              << 0x10U) 
                                                                             | (IData)(vlSelfRef.vidac__DOT__x2)))) 
                                                            << 0x10U) 
                                                           | (QData)((IData)(vlSelfRef.vidac__DOT__y1)))
                                                           : 
                                                          (((QData)((IData)(
                                                                            (((IData)(vlSelfRef.vidac__DOT__y1) 
                                                                              << 0x10U) 
                                                                             | (IData)(vlSelfRef.vidac__DOT__y1)))) 
                                                            << 0x10U) 
                                                           | (QData)((IData)(vlSelfRef.vidac__DOT__y2)))) 
                                                         >> 0x10U)));
                    __Vdly__vidac__DOT__y2 = (0xffffU 
                                              & (IData)(
                                                        ((IData)(vlSelfRef.vidac__DOT__ylt)
                                                          ? 
                                                         (((QData)((IData)(
                                                                           (((IData)(vlSelfRef.vidac__DOT__y2) 
                                                                             << 0x10U) 
                                                                            | (IData)(vlSelfRef.vidac__DOT__x2)))) 
                                                           << 0x10U) 
                                                          | (QData)((IData)(vlSelfRef.vidac__DOT__y1)))
                                                          : 
                                                         (((QData)((IData)(
                                                                           (((IData)(vlSelfRef.vidac__DOT__y1) 
                                                                             << 0x10U) 
                                                                            | (IData)(vlSelfRef.vidac__DOT__y1)))) 
                                                           << 0x10U) 
                                                          | (QData)((IData)(vlSelfRef.vidac__DOT__y2))))));
                } else {
                    __Vdly__a = vlSelfRef.vidac__DOT__ax;
                    vlSelfRef.w = vlSelfRef.vidac__DOT__wx;
                    __Vdly__vidac__DOT__x = (0xffffU 
                                             & (((IData)(vlSelfRef.vidac__DOT__x) 
                                                 == (IData)(vlSelfRef.vidac__DOT__x2))
                                                 ? (IData)(vlSelfRef.vidac__DOT__x1)
                                                 : 
                                                ((((3U 
                                                    == (IData)(vlSelfRef.vidac__DOT__comm)) 
                                                   | ((IData)(vlSelfRef.vidac__DOT__y) 
                                                      == (IData)(vlSelfRef.vidac__DOT__y1))) 
                                                  | ((IData)(vlSelfRef.vidac__DOT__y) 
                                                     == (IData)(vlSelfRef.vidac__DOT__y2)))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelfRef.vidac__DOT__x))
                                                  : 
                                                 (((IData)(vlSelfRef.vidac__DOT__x) 
                                                   == (IData)(vlSelfRef.vidac__DOT__x1))
                                                   ? (IData)(vlSelfRef.vidac__DOT__x2)
                                                   : (IData)(vlSelfRef.vidac__DOT__x1)))));
                    __Vdly__vidac__DOT__y = (0xffffU 
                                             & (((IData)(vlSelfRef.vidac__DOT__x) 
                                                 == (IData)(vlSelfRef.vidac__DOT__x2))
                                                 ? 
                                                (((IData)(vlSelfRef.vidac__DOT__y) 
                                                  == (IData)(vlSelfRef.vidac__DOT__y2))
                                                  ? (IData)(vlSelfRef.vidac__DOT__y)
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelfRef.vidac__DOT__y)))
                                                 : (IData)(vlSelfRef.vidac__DOT__y)));
                    if (((((IData)(vlSelfRef.vidac__DOT__x) 
                           == (IData)(vlSelfRef.vidac__DOT__x2)) 
                          & ((IData)(vlSelfRef.vidac__DOT__y) 
                             == (IData)(vlSelfRef.vidac__DOT__y2))) 
                         | (IData)(vlSelfRef.vidac__DOT__yof))) {
                        __Vdly__vidac__DOT__t = 0U;
                    }
                }
            } else if ((8U == (IData)(vlSelfRef.vidac__DOT__t))) {
                if ((0U != (IData)(vlSelfRef.vidac__DOT__b))) {
                    __Vdly__a = (0x3ffffU & ((IData)(1U) 
                                             + vlSelfRef.a));
                    __Vdly__vidac__DOT__b = (0xfU & 
                                             ((IData)(vlSelfRef.vidac__DOT__b) 
                                              - (IData)(1U)));
                    __Vdly__vidac__DOT__y2 = (((IData)(vlSelfRef.o) 
                                               << 8U) 
                                              | (0xffU 
                                                 & ((IData)(vlSelfRef.vidac__DOT__y2) 
                                                    >> 8U)));
                    __Vdly__vidac__DOT__x2 = ((0xff00U 
                                               & ((IData)(vlSelfRef.vidac__DOT__y2) 
                                                  << 8U)) 
                                              | (0xffU 
                                                 & ((IData)(vlSelfRef.vidac__DOT__x2) 
                                                    >> 8U)));
                    __Vdly__o = vlSelfRef.i;
                } else {
                    __Vdly__vidac__DOT__t = 3U;
                    __Vdly__vidac__DOT__x1 = vlSelfRef.vidac__DOT___x2;
                    __Vdly__vidac__DOT__y1 = vlSelfRef.vidac__DOT___y2;
                }
            } else if ((9U == (IData)(vlSelfRef.vidac__DOT__t))) {
                if ((0U != (IData)(vlSelfRef.vidac__DOT__b))) {
                    __Vdly__a = (0x3ffffU & ((IData)(1U) 
                                             + vlSelfRef.a));
                    __Vdly__vidac__DOT__b = (0xfU & 
                                             ((IData)(vlSelfRef.vidac__DOT__b) 
                                              - (IData)(1U)));
                    __Vdly__vidac__DOT__y2 = (((IData)(vlSelfRef.o) 
                                               << 8U) 
                                              | (0xffU 
                                                 & ((IData)(vlSelfRef.vidac__DOT__y2) 
                                                    >> 8U)));
                    __Vdly__vidac__DOT__y1 = ((0xff00U 
                                               & ((IData)(vlSelfRef.vidac__DOT__y2) 
                                                  << 8U)) 
                                              | (0xffU 
                                                 & ((IData)(vlSelfRef.vidac__DOT__y1) 
                                                    >> 8U)));
                    __Vdly__vidac__DOT__x1 = ((0xff00U 
                                               & ((IData)(vlSelfRef.vidac__DOT__y1) 
                                                  << 8U)) 
                                              | (0xffU 
                                                 & ((IData)(vlSelfRef.vidac__DOT__x1) 
                                                    >> 8U)));
                    __Vdly__o = vlSelfRef.i;
                } else {
                    __Vdly__vidac__DOT__t = 0xaU;
                    __Vdly__vidac__DOT__u = vlSelfRef.a;
                    __Vdly__vidac__DOT__tn = 0U;
                    __Vdly__vidac__DOT__dx = (0xffffU 
                                              & ((IData)(3U) 
                                                 - 
                                                 VL_SHIFTL_III(16,32,32, (IData)(vlSelfRef.vidac__DOT__y2), 1U)));
                    __Vdly__vidac__DOT__x2 = 0U;
                }
            } else if ((0xaU == (IData)(vlSelfRef.vidac__DOT__t))) {
                __Vdly__vidac__DOT__t = 0xbU;
                if ((6U == (IData)(vlSelfRef.vidac__DOT__comm))) {
                    if ((0U == (IData)(vlSelfRef.vidac__DOT__tn))) {
                        __Vdly__vidac__DOT__tn = 1U;
                        __Vdly__vidac__DOT__x = (0xffffU 
                                                 & ((IData)(vlSelfRef.vidac__DOT__x1) 
                                                    - (IData)(vlSelfRef.vidac__DOT__x2)));
                        __Vdly__vidac__DOT__y = (0xffffU 
                                                 & ((IData)(vlSelfRef.vidac__DOT__y1) 
                                                    + (IData)(vlSelfRef.vidac__DOT__y2)));
                        __Vdly__vidac__DOT___x2 = (0xffffU 
                                                   & ((IData)(vlSelfRef.vidac__DOT__x1) 
                                                      + (IData)(vlSelfRef.vidac__DOT__x2)));
                    } else if ((1U == (IData)(vlSelfRef.vidac__DOT__tn))) {
                        __Vdly__vidac__DOT__tn = 2U;
                        __Vdly__vidac__DOT__x = (0xffffU 
                                                 & ((IData)(vlSelfRef.vidac__DOT__x1) 
                                                    - (IData)(vlSelfRef.vidac__DOT__x2)));
                        __Vdly__vidac__DOT__y = (0xffffU 
                                                 & ((IData)(vlSelfRef.vidac__DOT__y1) 
                                                    - (IData)(vlSelfRef.vidac__DOT__y2)));
                        __Vdly__vidac__DOT___x2 = (0xffffU 
                                                   & ((IData)(vlSelfRef.vidac__DOT__x1) 
                                                      + (IData)(vlSelfRef.vidac__DOT__x2)));
                    } else if ((2U == (IData)(vlSelfRef.vidac__DOT__tn))) {
                        __Vdly__vidac__DOT__tn = 3U;
                        __Vdly__vidac__DOT__x = (0xffffU 
                                                 & ((IData)(vlSelfRef.vidac__DOT__x1) 
                                                    - (IData)(vlSelfRef.vidac__DOT__y2)));
                        __Vdly__vidac__DOT__y = (0xffffU 
                                                 & ((IData)(vlSelfRef.vidac__DOT__y1) 
                                                    + (IData)(vlSelfRef.vidac__DOT__x2)));
                        __Vdly__vidac__DOT___x2 = (0xffffU 
                                                   & ((IData)(vlSelfRef.vidac__DOT__x1) 
                                                      + (IData)(vlSelfRef.vidac__DOT__y2)));
                    } else if ((3U == (IData)(vlSelfRef.vidac__DOT__tn))) {
                        __Vdly__vidac__DOT__tn = 0U;
                        __Vdly__vidac__DOT__x = (0xffffU 
                                                 & ((IData)(vlSelfRef.vidac__DOT__x1) 
                                                    - (IData)(vlSelfRef.vidac__DOT__y2)));
                        __Vdly__vidac__DOT__y = (0xffffU 
                                                 & ((IData)(vlSelfRef.vidac__DOT__y1) 
                                                    - (IData)(vlSelfRef.vidac__DOT__x2)));
                        __Vdly__vidac__DOT___x2 = (0xffffU 
                                                   & ((IData)(vlSelfRef.vidac__DOT__x1) 
                                                      + (IData)(vlSelfRef.vidac__DOT__y2)));
                    }
                } else if (((((((((0U == (IData)(vlSelfRef.vidac__DOT__tn)) 
                                  | (1U == (IData)(vlSelfRef.vidac__DOT__tn))) 
                                 | (2U == (IData)(vlSelfRef.vidac__DOT__tn))) 
                                | (3U == (IData)(vlSelfRef.vidac__DOT__tn))) 
                               | (4U == (IData)(vlSelfRef.vidac__DOT__tn))) 
                              | (5U == (IData)(vlSelfRef.vidac__DOT__tn))) 
                             | (6U == (IData)(vlSelfRef.vidac__DOT__tn))) 
                            | (7U == (IData)(vlSelfRef.vidac__DOT__tn)))) {
                    if ((0U == (IData)(vlSelfRef.vidac__DOT__tn))) {
                        __Vdly__vidac__DOT__tn = 1U;
                        __Vdly__vidac__DOT__x = (0xffffU 
                                                 & ((IData)(vlSelfRef.vidac__DOT__x1) 
                                                    - (IData)(vlSelfRef.vidac__DOT__x2)));
                        __Vdly__vidac__DOT__y = (0xffffU 
                                                 & ((IData)(vlSelfRef.vidac__DOT__y1) 
                                                    + (IData)(vlSelfRef.vidac__DOT__y2)));
                    } else if ((1U == (IData)(vlSelfRef.vidac__DOT__tn))) {
                        __Vdly__vidac__DOT__tn = 2U;
                        __Vdly__vidac__DOT__x = (0xffffU 
                                                 & ((IData)(vlSelfRef.vidac__DOT__x1) 
                                                    + (IData)(vlSelfRef.vidac__DOT__x2)));
                        __Vdly__vidac__DOT__y = (0xffffU 
                                                 & ((IData)(vlSelfRef.vidac__DOT__y1) 
                                                    + (IData)(vlSelfRef.vidac__DOT__y2)));
                    } else if ((2U == (IData)(vlSelfRef.vidac__DOT__tn))) {
                        __Vdly__vidac__DOT__tn = 3U;
                        __Vdly__vidac__DOT__x = (0xffffU 
                                                 & ((IData)(vlSelfRef.vidac__DOT__x1) 
                                                    - (IData)(vlSelfRef.vidac__DOT__x2)));
                        __Vdly__vidac__DOT__y = (0xffffU 
                                                 & ((IData)(vlSelfRef.vidac__DOT__y1) 
                                                    - (IData)(vlSelfRef.vidac__DOT__y2)));
                    } else if ((3U == (IData)(vlSelfRef.vidac__DOT__tn))) {
                        __Vdly__vidac__DOT__tn = 4U;
                        __Vdly__vidac__DOT__x = (0xffffU 
                                                 & ((IData)(vlSelfRef.vidac__DOT__x1) 
                                                    + (IData)(vlSelfRef.vidac__DOT__x2)));
                        __Vdly__vidac__DOT__y = (0xffffU 
                                                 & ((IData)(vlSelfRef.vidac__DOT__y1) 
                                                    - (IData)(vlSelfRef.vidac__DOT__y2)));
                    } else if ((4U == (IData)(vlSelfRef.vidac__DOT__tn))) {
                        __Vdly__vidac__DOT__tn = 5U;
                        __Vdly__vidac__DOT__x = (0xffffU 
                                                 & ((IData)(vlSelfRef.vidac__DOT__x1) 
                                                    - (IData)(vlSelfRef.vidac__DOT__y2)));
                        __Vdly__vidac__DOT__y = (0xffffU 
                                                 & ((IData)(vlSelfRef.vidac__DOT__y1) 
                                                    + (IData)(vlSelfRef.vidac__DOT__x2)));
                    } else if ((5U == (IData)(vlSelfRef.vidac__DOT__tn))) {
                        __Vdly__vidac__DOT__tn = 6U;
                        __Vdly__vidac__DOT__x = (0xffffU 
                                                 & ((IData)(vlSelfRef.vidac__DOT__x1) 
                                                    + (IData)(vlSelfRef.vidac__DOT__y2)));
                        __Vdly__vidac__DOT__y = (0xffffU 
                                                 & ((IData)(vlSelfRef.vidac__DOT__y1) 
                                                    + (IData)(vlSelfRef.vidac__DOT__x2)));
                    } else if ((6U == (IData)(vlSelfRef.vidac__DOT__tn))) {
                        __Vdly__vidac__DOT__tn = 7U;
                        __Vdly__vidac__DOT__x = (0xffffU 
                                                 & ((IData)(vlSelfRef.vidac__DOT__x1) 
                                                    - (IData)(vlSelfRef.vidac__DOT__y2)));
                        __Vdly__vidac__DOT__y = (0xffffU 
                                                 & ((IData)(vlSelfRef.vidac__DOT__y1) 
                                                    - (IData)(vlSelfRef.vidac__DOT__x2)));
                    } else {
                        __Vdly__vidac__DOT__tn = 0U;
                        __Vdly__vidac__DOT__x = (0xffffU 
                                                 & ((IData)(vlSelfRef.vidac__DOT__x1) 
                                                    + (IData)(vlSelfRef.vidac__DOT__y2)));
                        __Vdly__vidac__DOT__y = (0xffffU 
                                                 & ((IData)(vlSelfRef.vidac__DOT__y1) 
                                                    - (IData)(vlSelfRef.vidac__DOT__x2)));
                    }
                }
            } else if ((0xbU == (IData)(vlSelfRef.vidac__DOT__t))) {
                __Vdly__a = vlSelfRef.vidac__DOT__ax;
                vlSelfRef.w = vlSelfRef.vidac__DOT__wx;
                __Vdly__vidac__DOT__t = (0xffU & ((5U 
                                                   == (IData)(vlSelfRef.vidac__DOT__comm))
                                                   ? 
                                                  ((0U 
                                                    != (IData)(vlSelfRef.vidac__DOT__tn))
                                                    ? 0xaU
                                                    : 0xcU)
                                                   : 
                                                  (((IData)(vlSelfRef.vidac__DOT__x) 
                                                    < (IData)(vlSelfRef.vidac__DOT___x2))
                                                    ? 0xbU
                                                    : 
                                                   ((0U 
                                                     != (IData)(vlSelfRef.vidac__DOT__tn))
                                                     ? 0xaU
                                                     : 0xcU))));
                __Vdly__vidac__DOT__x = (0xffffU & 
                                         ((IData)(1U) 
                                          + (IData)(vlSelfRef.vidac__DOT__x)));
            } else if ((0xcU == (IData)(vlSelfRef.vidac__DOT__t))) {
                if (((IData)(vlSelfRef.vidac__DOT__x2) 
                     <= (IData)(vlSelfRef.vidac__DOT__y2))) {
                    __Vdly__vidac__DOT__x2 = (0xffffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.vidac__DOT__x2)));
                    __Vdly__vidac__DOT__t = 0xaU;
                    __Vdly__vidac__DOT__tn = (((6U 
                                                == (IData)(vlSelfRef.vidac__DOT__comm)) 
                                               & ((IData)(vlSelfRef.vidac__DOT__cirx) 
                                                  >> 0xfU))
                                               ? 2U
                                               : 0U);
                    __Vdly__vidac__DOT__dx = (0xffffU 
                                              & ((0x8000U 
                                                  & (IData)(vlSelfRef.vidac__DOT__cirx))
                                                  ? (IData)(vlSelfRef.vidac__DOT__cirx)
                                                  : 
                                                 ((IData)(vlSelfRef.vidac__DOT__cirx) 
                                                  + 
                                                  VL_SHIFTL_III(32,32,32, 
                                                                ((IData)(1U) 
                                                                 - (IData)(vlSelfRef.vidac__DOT__y2)), 2U))));
                    __Vdly__vidac__DOT__y2 = (0xffffU 
                                              & ((IData)(vlSelfRef.vidac__DOT__y2) 
                                                 - 
                                                 (1U 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.vidac__DOT__cirx) 
                                                      >> 0xfU)))));
                } else {
                    __Vdly__vidac__DOT__t = 0U;
                }
            } else if ((0xdU == (IData)(vlSelfRef.vidac__DOT__t))) {
                if ((0U != (IData)(vlSelfRef.vidac__DOT__b))) {
                    __Vdly__a = (0x3ffffU & ((IData)(1U) 
                                             + vlSelfRef.a));
                    __Vdly__vidac__DOT__b = (0xfU & 
                                             ((IData)(vlSelfRef.vidac__DOT__b) 
                                              - (IData)(1U)));
                    __Vdly__vidac__DOT__y2 = (((IData)(vlSelfRef.o) 
                                               << 8U) 
                                              | (0xffU 
                                                 & ((IData)(vlSelfRef.vidac__DOT__y2) 
                                                    >> 8U)));
                    __Vdly__vidac__DOT__x2 = ((0xff00U 
                                               & ((IData)(vlSelfRef.vidac__DOT__y2) 
                                                  << 8U)) 
                                              | (0xffU 
                                                 & ((IData)(vlSelfRef.vidac__DOT__x2) 
                                                    >> 8U)));
                    __Vdly__vidac__DOT__y1 = ((0xff00U 
                                               & ((IData)(vlSelfRef.vidac__DOT__x2) 
                                                  << 8U)) 
                                              | (0xffU 
                                                 & ((IData)(vlSelfRef.vidac__DOT__y1) 
                                                    >> 8U)));
                    __Vdly__o = vlSelfRef.i;
                    __Vdly__vidac__DOT__x1 = ((0xff00U 
                                               & ((IData)(vlSelfRef.vidac__DOT__y1) 
                                                  << 8U)) 
                                              | (0xffU 
                                                 & ((IData)(vlSelfRef.vidac__DOT__x1) 
                                                    >> 8U)));
                    __Vdly__vidac__DOT___y2 = ((0xff00U 
                                                & ((IData)(vlSelfRef.vidac__DOT__x1) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & ((IData)(vlSelfRef.vidac__DOT___y2) 
                                                     >> 8U)));
                    __Vdly__vidac__DOT___x2 = ((0xff00U 
                                                & ((IData)(vlSelfRef.vidac__DOT___y2) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & ((IData)(vlSelfRef.vidac__DOT___x2) 
                                                     >> 8U)));
                } else {
                    __Vdly__vidac__DOT__x2 = (0xffffU 
                                              & ((IData)(vlSelfRef.vidac__DOT__x2) 
                                                 - (IData)(1U)));
                    __Vdly__vidac__DOT__y2 = (0xffffU 
                                              & ((IData)(vlSelfRef.vidac__DOT__y2) 
                                                 - (IData)(1U)));
                    __Vdly__vidac__DOT__t = 0xeU;
                    __Vdly__vidac__DOT__u = vlSelfRef.a;
                    __Vdly__vidac__DOT__dx = 0U;
                    __Vdly__vidac__DOT__dy = 0U;
                    __Vdly__tx = (0xffU & (IData)(vlSelfRef.vidac__DOT___x2));
                    __Vdly__ty = (0xffU & ((IData)(vlSelfRef.vidac__DOT___x2) 
                                           >> 8U));
                }
            } else if ((0xeU == (IData)(vlSelfRef.vidac__DOT__t))) {
                __Vdly__a = vlSelfRef.vidac__DOT__ax;
                vlSelfRef.w = vlSelfRef.vidac__DOT__wx;
                __Vdly__o = vlSelfRef.td;
                __Vdly__vidac__DOT__x = (0xffffU & 
                                         ((IData)(1U) 
                                          + (IData)(vlSelfRef.vidac__DOT__x)));
                if (((IData)(vlSelfRef.vidac__DOT__x) 
                     == (0xffffU & ((IData)(vlSelfRef.vidac__DOT__x1) 
                                    + (IData)(vlSelfRef.vidac__DOT__x2))))) {
                    __Vdly__ty = (0xffU & ((IData)(vlSelfRef.ty) 
                                           + (IData)(vlSelfRef.vidac__DOT__dyrs)));
                    __Vdly__vidac__DOT__t = (((IData)(vlSelfRef.vidac__DOT__y) 
                                              == (0xffffU 
                                                  & ((IData)(vlSelfRef.vidac__DOT__y1) 
                                                     + (IData)(vlSelfRef.vidac__DOT__y2))))
                                              ? 0U : 0xeU);
                    __Vdly__vidac__DOT__dx = 0U;
                    __Vdly__vidac__DOT__x = vlSelfRef.vidac__DOT__x1;
                    __Vdly__tx = (0xffU & (IData)(vlSelfRef.vidac__DOT___x2));
                    __Vdly__vidac__DOT__dy = (0xffffU 
                                              & ((IData)(vlSelfRef.vidac__DOT__dynx) 
                                                 - 
                                                 ((IData)(vlSelfRef.vidac__DOT__dyrs) 
                                                  * (IData)(vlSelfRef.vidac__DOT__y2))));
                    __Vdly__vidac__DOT__y = (0xffffU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelfRef.vidac__DOT__y)));
                } else {
                    __Vdly__tx = (0xffU & ((IData)(vlSelfRef.tx) 
                                           + (IData)(vlSelfRef.vidac__DOT__dxrs)));
                    __Vdly__vidac__DOT__dx = (0xffffU 
                                              & ((IData)(vlSelfRef.vidac__DOT__dxnx) 
                                                 - 
                                                 ((IData)(vlSelfRef.vidac__DOT__dxrs) 
                                                  * (IData)(vlSelfRef.vidac__DOT__x2))));
                }
            }
        }
    } else {
        vlSelfRef.bsy = 0U;
    }
    vlSelfRef.vidac__DOT__t = __Vdly__vidac__DOT__t;
    vlSelfRef.vidac__DOT__u = __Vdly__vidac__DOT__u;
    vlSelfRef.a = __Vdly__a;
    vlSelfRef.vidac__DOT__tn = __Vdly__vidac__DOT__tn;
    vlSelfRef.vidac__DOT__b = __Vdly__vidac__DOT__b;
    vlSelfRef.vidac__DOT__comm = __Vdly__vidac__DOT__comm;
    vlSelfRef.o = __Vdly__o;
    vlSelfRef.vidac__DOT___x2 = __Vdly__vidac__DOT___x2;
    vlSelfRef.tx = __Vdly__tx;
    vlSelfRef.ty = __Vdly__ty;
    vlSelfRef.vidac__DOT__err = __Vdly__vidac__DOT__err;
    vlSelfRef.vidac__DOT__x = __Vdly__vidac__DOT__x;
    vlSelfRef.vidac__DOT__y = __Vdly__vidac__DOT__y;
    vlSelfRef.vidac__DOT__y1 = __Vdly__vidac__DOT__y1;
    vlSelfRef.vidac__DOT__x1 = __Vdly__vidac__DOT__x1;
    vlSelfRef.vidac__DOT__y2 = __Vdly__vidac__DOT__y2;
    vlSelfRef.vidac__DOT__dy = __Vdly__vidac__DOT__dy;
    vlSelfRef.vidac__DOT__dx = __Vdly__vidac__DOT__dx;
    vlSelfRef.vidac__DOT__x2 = __Vdly__vidac__DOT__x2;
    vlSelfRef.vidac__DOT___y2 = __Vdly__vidac__DOT___y2;
    vlSelfRef.vidac__DOT__yof = ((~ ((IData)(vlSelfRef.vidac__DOT__y) 
                                     >> 0xfU)) & (0xc8U 
                                                  <= (IData)(vlSelfRef.vidac__DOT__y)));
    vlSelfRef.vidac__DOT__wx = ((0x140U > (IData)(vlSelfRef.vidac__DOT__x)) 
                                & (0xc8U > (IData)(vlSelfRef.vidac__DOT__y)));
    vlSelfRef.vidac__DOT__ax = (0x1ffffU & (VL_SHIFTL_III(17,17,32, (IData)(vlSelfRef.vidac__DOT__y), 8U) 
                                            + (VL_SHIFTL_III(17,17,32, (IData)(vlSelfRef.vidac__DOT__y), 6U) 
                                               + ((IData)(vlSelfRef.vidac__DOT__x) 
                                                  + 
                                                  ((IData)(vlSelfRef.page) 
                                                   << 0x10U)))));
    vlSelfRef.vidac__DOT__sub_y = (0xffffU & ((IData)(vlSelfRef.vidac__DOT__y2) 
                                              - (IData)(vlSelfRef.vidac__DOT__y1)));
    vlSelfRef.vidac__DOT__e1 = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.vidac__DOT__err), 1U) 
                                           + (IData)(vlSelfRef.vidac__DOT__dy)));
    vlSelfRef.vidac__DOT__e2 = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.vidac__DOT__err), 1U) 
                                           - (IData)(vlSelfRef.vidac__DOT__dx)));
    vlSelfRef.vidac__DOT__cirx = (0xffffU & ((IData)(6U) 
                                             + ((IData)(vlSelfRef.vidac__DOT__dx) 
                                                + VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.vidac__DOT__x2), 2U))));
    vidac__DOT__sub_x = (0xffffU & ((IData)(vlSelfRef.vidac__DOT__x2) 
                                    - (IData)(vlSelfRef.vidac__DOT__x1)));
    vlSelfRef.vidac__DOT__dynx = (0x3ffU & ((IData)(vlSelfRef.vidac__DOT__dy) 
                                            + (0xffU 
                                               & ((IData)(vlSelfRef.vidac__DOT___y2) 
                                                  >> 8U))));
    vlSelfRef.vidac__DOT__dxnx = (0x3ffU & ((IData)(vlSelfRef.vidac__DOT__dx) 
                                            + (0xffU 
                                               & (IData)(vlSelfRef.vidac__DOT___y2))));
    vlSelfRef.vidac__DOT__ylt = (1U & (((((IData)(vlSelfRef.vidac__DOT__y2) 
                                          ^ (IData)(vlSelfRef.vidac__DOT__y1)) 
                                         & ((IData)(vlSelfRef.vidac__DOT__y2) 
                                            ^ (IData)(vlSelfRef.vidac__DOT__sub_y))) 
                                        ^ (IData)(vlSelfRef.vidac__DOT__sub_y)) 
                                       >> 0xfU));
    vlSelfRef.vidac__DOT__xlt = (1U & (((((IData)(vlSelfRef.vidac__DOT__x2) 
                                          ^ (IData)(vlSelfRef.vidac__DOT__x1)) 
                                         & ((IData)(vlSelfRef.vidac__DOT__x2) 
                                            ^ (IData)(vidac__DOT__sub_x))) 
                                        ^ (IData)(vidac__DOT__sub_x)) 
                                       >> 0xfU));
    vidac__DOT__yd_3 = (0x1ffU & ((IData)(vlSelfRef.vidac__DOT__dynx) 
                                  - VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.vidac__DOT__y2), 3U)));
    vidac__DOT__xd_3 = (0x1ffU & ((IData)(vlSelfRef.vidac__DOT__dxnx) 
                                  - VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.vidac__DOT__x2), 3U)));
    vlSelfRef.vidac__DOT__abs_x = (0xffffU & ((IData)(vlSelfRef.vidac__DOT__xlt)
                                               ? (- (IData)(vidac__DOT__sub_x))
                                               : (IData)(vidac__DOT__sub_x)));
    vidac__DOT____VdfgRegularize_h19eb9f73_1_8 = (0xffU 
                                                  & ((0x100U 
                                                      & (IData)(vidac__DOT__yd_3))
                                                      ? (IData)(vlSelfRef.vidac__DOT__dynx)
                                                      : (IData)(vidac__DOT__yd_3)));
    vidac__DOT____VdfgRegularize_h19eb9f73_1_11 = (0xffU 
                                                   & ((0x100U 
                                                       & (IData)(vidac__DOT__xd_3))
                                                       ? (IData)(vlSelfRef.vidac__DOT__dxnx)
                                                       : (IData)(vidac__DOT__xd_3)));
    vidac__DOT__yd_2 = (0x1ffU & ((IData)(vidac__DOT____VdfgRegularize_h19eb9f73_1_8) 
                                  - VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.vidac__DOT__y2), 2U)));
    vidac__DOT__xd_2 = (0x1ffU & ((IData)(vidac__DOT____VdfgRegularize_h19eb9f73_1_11) 
                                  - VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.vidac__DOT__x2), 2U)));
    vidac__DOT____VdfgRegularize_h19eb9f73_1_7 = (0xffU 
                                                  & ((0x100U 
                                                      & (IData)(vidac__DOT__yd_2))
                                                      ? (IData)(vidac__DOT____VdfgRegularize_h19eb9f73_1_8)
                                                      : (IData)(vidac__DOT__yd_2)));
    vidac__DOT____VdfgRegularize_h19eb9f73_1_10 = (0xffU 
                                                   & ((0x100U 
                                                       & (IData)(vidac__DOT__xd_2))
                                                       ? (IData)(vidac__DOT____VdfgRegularize_h19eb9f73_1_11)
                                                       : (IData)(vidac__DOT__xd_2)));
    vidac__DOT__yd_1 = (0x1ffU & ((IData)(vidac__DOT____VdfgRegularize_h19eb9f73_1_7) 
                                  - VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.vidac__DOT__y2), 1U)));
    vidac__DOT__xd_1 = (0x1ffU & ((IData)(vidac__DOT____VdfgRegularize_h19eb9f73_1_10) 
                                  - VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.vidac__DOT__x2), 1U)));
    vlSelfRef.vidac__DOT__dyrs = (0xfU & (~ ((0xffU 
                                              & ((0x100U 
                                                  & (IData)(vidac__DOT__yd_1))
                                                  ? (IData)(vidac__DOT____VdfgRegularize_h19eb9f73_1_7)
                                                  : (IData)(vidac__DOT__yd_1))) 
                                             - (IData)(vlSelfRef.vidac__DOT__y2))));
    vlSelfRef.vidac__DOT__dxrs = (0xfU & (~ ((0xffU 
                                              & ((0x100U 
                                                  & (IData)(vidac__DOT__xd_1))
                                                  ? (IData)(vidac__DOT____VdfgRegularize_h19eb9f73_1_10)
                                                  : (IData)(vidac__DOT__xd_1))) 
                                             - (IData)(vlSelfRef.vidac__DOT__x2))));
}

void Vvidac___024root___eval_triggers__act(Vvidac___024root* vlSelf);

bool Vvidac___024root___eval_phase__act(Vvidac___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvidac__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvidac___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vvidac___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vvidac___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vvidac___024root___eval_phase__nba(Vvidac___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvidac__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvidac___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vvidac___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvidac___024root___dump_triggers__ico(Vvidac___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vvidac___024root___dump_triggers__nba(Vvidac___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vvidac___024root___dump_triggers__act(Vvidac___024root* vlSelf);
#endif  // VL_DEBUG

void Vvidac___024root___eval(Vvidac___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvidac__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvidac___024root___eval\n"); );
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
            Vvidac___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("vidac.v", 4, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vvidac___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vvidac___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("vidac.v", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vvidac___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("vidac.v", 4, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vvidac___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vvidac___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vvidac___024root___eval_debug_assertions(Vvidac___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvidac__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvidac___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelfRef.reset_n & 0xfeU))) {
        Verilated::overWidthError("reset_n");}
    if (VL_UNLIKELY((vlSelfRef.cmd & 0xfeU))) {
        Verilated::overWidthError("cmd");}
    if (VL_UNLIKELY((vlSelfRef.page & 0xfeU))) {
        Verilated::overWidthError("page");}
}
#endif  // VL_DEBUG
