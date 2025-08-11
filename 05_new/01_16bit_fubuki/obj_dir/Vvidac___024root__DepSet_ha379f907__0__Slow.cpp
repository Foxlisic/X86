// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvidac.h for the primary calling header

#include "Vvidac__pch.h"
#include "Vvidac___024root.h"

VL_ATTR_COLD void Vvidac___024root___eval_static(Vvidac___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvidac__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvidac___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vvidac___024root___eval_initial(Vvidac___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvidac__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvidac___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
}

VL_ATTR_COLD void Vvidac___024root___eval_final(Vvidac___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvidac__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvidac___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvidac___024root___dump_triggers__stl(Vvidac___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vvidac___024root___eval_phase__stl(Vvidac___024root* vlSelf);

VL_ATTR_COLD void Vvidac___024root___eval_settle(Vvidac___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvidac__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvidac___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vvidac___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("vidac.v", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vvidac___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvidac___024root___dump_triggers__stl(Vvidac___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvidac__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvidac___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vvidac___024root___stl_sequent__TOP__0(Vvidac___024root* vlSelf);

VL_ATTR_COLD void Vvidac___024root___eval_stl(Vvidac___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvidac__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvidac___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vvidac___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vvidac___024root___stl_sequent__TOP__0(Vvidac___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvidac__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvidac___024root___stl_sequent__TOP__0\n"); );
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
    // Body
    vlSelfRef.vidac__DOT__yof = ((~ ((IData)(vlSelfRef.vidac__DOT__y) 
                                     >> 0xfU)) & (0xc8U 
                                                  <= (IData)(vlSelfRef.vidac__DOT__y)));
    vlSelfRef.vidac__DOT__wx = ((0x140U > (IData)(vlSelfRef.vidac__DOT__x)) 
                                & (0xc8U > (IData)(vlSelfRef.vidac__DOT__y)));
    vlSelfRef.vidac__DOT__e1 = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.vidac__DOT__err), 1U) 
                                           + (IData)(vlSelfRef.vidac__DOT__dy)));
    vlSelfRef.vidac__DOT__e2 = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.vidac__DOT__err), 1U) 
                                           - (IData)(vlSelfRef.vidac__DOT__dx)));
    vlSelfRef.vidac__DOT__cirx = (0xffffU & ((IData)(6U) 
                                             + ((IData)(vlSelfRef.vidac__DOT__dx) 
                                                + VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.vidac__DOT__x2), 2U))));
    vlSelfRef.vidac__DOT__ax = (0x1ffffU & (VL_SHIFTL_III(17,17,32, (IData)(vlSelfRef.vidac__DOT__y), 8U) 
                                            + (VL_SHIFTL_III(17,17,32, (IData)(vlSelfRef.vidac__DOT__y), 6U) 
                                               + ((IData)(vlSelfRef.vidac__DOT__x) 
                                                  + 
                                                  ((IData)(vlSelfRef.page) 
                                                   << 0x10U)))));
    vlSelfRef.vidac__DOT__sub_y = (0xffffU & ((IData)(vlSelfRef.vidac__DOT__y2) 
                                              - (IData)(vlSelfRef.vidac__DOT__y1)));
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

VL_ATTR_COLD void Vvidac___024root___eval_triggers__stl(Vvidac___024root* vlSelf);

VL_ATTR_COLD bool Vvidac___024root___eval_phase__stl(Vvidac___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvidac__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvidac___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vvidac___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vvidac___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvidac___024root___dump_triggers__ico(Vvidac___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvidac__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvidac___024root___dump_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvidac___024root___dump_triggers__act(Vvidac___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvidac__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvidac___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvidac___024root___dump_triggers__nba(Vvidac___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvidac__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvidac___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vvidac___024root___ctor_var_reset(Vvidac___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvidac__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvidac___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset_n = VL_RAND_RESET_I(1);
    vlSelf->cmd = VL_RAND_RESET_I(1);
    vlSelf->page = VL_RAND_RESET_I(1);
    vlSelf->a = VL_RAND_RESET_I(18);
    vlSelf->i = VL_RAND_RESET_I(8);
    vlSelf->o = VL_RAND_RESET_I(8);
    vlSelf->w = VL_RAND_RESET_I(1);
    vlSelf->bsy = VL_RAND_RESET_I(1);
    vlSelf->tx = VL_RAND_RESET_I(8);
    vlSelf->ty = VL_RAND_RESET_I(8);
    vlSelf->td = VL_RAND_RESET_I(8);
    vlSelf->vidac__DOT__t = VL_RAND_RESET_I(8);
    vlSelf->vidac__DOT__tn = VL_RAND_RESET_I(8);
    vlSelf->vidac__DOT__comm = VL_RAND_RESET_I(8);
    vlSelf->vidac__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->vidac__DOT__u = VL_RAND_RESET_I(18);
    vlSelf->vidac__DOT__dx = VL_RAND_RESET_I(16);
    vlSelf->vidac__DOT__dy = VL_RAND_RESET_I(16);
    vlSelf->vidac__DOT__x = VL_RAND_RESET_I(16);
    vlSelf->vidac__DOT__y = VL_RAND_RESET_I(16);
    vlSelf->vidac__DOT__err = VL_RAND_RESET_I(16);
    vlSelf->vidac__DOT__x1 = VL_RAND_RESET_I(16);
    vlSelf->vidac__DOT__y1 = VL_RAND_RESET_I(16);
    vlSelf->vidac__DOT__x2 = VL_RAND_RESET_I(16);
    vlSelf->vidac__DOT__y2 = VL_RAND_RESET_I(16);
    vlSelf->vidac__DOT___x2 = VL_RAND_RESET_I(16);
    vlSelf->vidac__DOT___y2 = VL_RAND_RESET_I(16);
    vlSelf->vidac__DOT__sub_y = VL_RAND_RESET_I(16);
    vlSelf->vidac__DOT__abs_x = VL_RAND_RESET_I(16);
    vlSelf->vidac__DOT__xlt = VL_RAND_RESET_I(1);
    vlSelf->vidac__DOT__ylt = VL_RAND_RESET_I(1);
    vlSelf->vidac__DOT__e1 = VL_RAND_RESET_I(16);
    vlSelf->vidac__DOT__e2 = VL_RAND_RESET_I(16);
    vlSelf->vidac__DOT__ax = VL_RAND_RESET_I(17);
    vlSelf->vidac__DOT__wx = VL_RAND_RESET_I(1);
    vlSelf->vidac__DOT__yof = VL_RAND_RESET_I(1);
    vlSelf->vidac__DOT__cirx = VL_RAND_RESET_I(16);
    vlSelf->vidac__DOT__dxnx = VL_RAND_RESET_I(10);
    vlSelf->vidac__DOT__dynx = VL_RAND_RESET_I(10);
    vlSelf->vidac__DOT__dxrs = VL_RAND_RESET_I(4);
    vlSelf->vidac__DOT__dyrs = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
}
