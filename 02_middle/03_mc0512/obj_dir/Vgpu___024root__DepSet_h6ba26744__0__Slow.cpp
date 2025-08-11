// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vgpu.h for the primary calling header

#include "Vgpu__pch.h"
#include "Vgpu___024root.h"

VL_ATTR_COLD void Vgpu___024root___eval_static__TOP(Vgpu___024root* vlSelf);

VL_ATTR_COLD void Vgpu___024root___eval_static(Vgpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vgpu___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vgpu___024root___eval_static__TOP(Vgpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu___024root___eval_static__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gpu__DOT__x = 0U;
    vlSelfRef.gpu__DOT__y = 0U;
}

VL_ATTR_COLD void Vgpu___024root___eval_initial(Vgpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
}

VL_ATTR_COLD void Vgpu___024root___eval_final(Vgpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vgpu___024root___dump_triggers__stl(Vgpu___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vgpu___024root___eval_phase__stl(Vgpu___024root* vlSelf);

VL_ATTR_COLD void Vgpu___024root___eval_settle(Vgpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu___024root___eval_settle\n"); );
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
            Vgpu___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("gpu.v", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vgpu___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vgpu___024root___dump_triggers__stl(Vgpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu___024root___dump_triggers__stl\n"); );
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

VL_ATTR_COLD void Vgpu___024root___stl_sequent__TOP__0(Vgpu___024root* vlSelf);

VL_ATTR_COLD void Vgpu___024root___eval_stl(Vgpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vgpu___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vgpu___024root___stl_sequent__TOP__0(Vgpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ gpu__DOT__kcolor;
    gpu__DOT__kcolor = 0;
    // Body
    vlSelfRef.hs = (0x2c0U > (IData)(vlSelfRef.gpu__DOT__x));
    vlSelfRef.vs = (0x1bfU <= (IData)(vlSelfRef.gpu__DOT__y));
    vlSelfRef.gpu__DOT__xmax = (0x31fU == (IData)(vlSelfRef.gpu__DOT__x));
    vlSelfRef.gpu__DOT__ymax = (0x1c0U == (IData)(vlSelfRef.gpu__DOT__y));
    vlSelfRef.gpu__DOT__cwin = ((0x30U <= (IData)(vlSelfRef.gpu__DOT__x)) 
                                & ((0x2b0U > (IData)(vlSelfRef.gpu__DOT__x)) 
                                   & ((0x23U <= (IData)(vlSelfRef.gpu__DOT__y)) 
                                      & (0x1b3U > (IData)(vlSelfRef.gpu__DOT__y)))));
    vlSelfRef.gpu__DOT__id = (0x7ffU & ((0x7fU & (((IData)(8U) 
                                                   + 
                                                   ((IData)(vlSelfRef.gpu__DOT__x) 
                                                    - (IData)(0x30U))) 
                                                  >> 3U)) 
                                        + ((IData)(0x50U) 
                                           * (0x1fU 
                                              & (((IData)(vlSelfRef.gpu__DOT__y) 
                                                  - (IData)(0x23U)) 
                                                 >> 4U)))));
    gpu__DOT__kcolor = (0xfU & ((1U & (((IData)(vlSelfRef.gpu__DOT__char) 
                                        >> (7U & (~ (IData)(vlSelfRef.gpu__DOT__x)))) 
                                       | ((~ (IData)(vlSelfRef.gpu__DOT__flash)) 
                                          & (((IData)(vlSelfRef.gpu__DOT__id) 
                                              == ((IData)(1U) 
                                                  + (IData)(vlSelfRef.cursor))) 
                                             & (0xeU 
                                                <= 
                                                (0xfU 
                                                 & ((IData)(vlSelfRef.gpu__DOT__y) 
                                                    - (IData)(3U))))))))
                                 ? ((((IData)(vlSelfRef.gpu__DOT__attr) 
                                      >> 7U) & (IData)(vlSelfRef.gpu__DOT__flash))
                                     ? (7U & ((IData)(vlSelfRef.gpu__DOT__attr) 
                                              >> 4U))
                                     : (IData)(vlSelfRef.gpu__DOT__attr))
                                 : (7U & ((IData)(vlSelfRef.gpu__DOT__attr) 
                                          >> 4U))));
    vlSelfRef.gpu__DOT__color = ((0U == (IData)(gpu__DOT__kcolor))
                                  ? 0x111U : ((1U == (IData)(gpu__DOT__kcolor))
                                               ? 8U
                                               : ((2U 
                                                   == (IData)(gpu__DOT__kcolor))
                                                   ? 0x80U
                                                   : 
                                                  ((3U 
                                                    == (IData)(gpu__DOT__kcolor))
                                                    ? 0x88U
                                                    : 
                                                   ((4U 
                                                     == (IData)(gpu__DOT__kcolor))
                                                     ? 0x800U
                                                     : 
                                                    ((5U 
                                                      == (IData)(gpu__DOT__kcolor))
                                                      ? 0x808U
                                                      : 
                                                     ((6U 
                                                       == (IData)(gpu__DOT__kcolor))
                                                       ? 0x880U
                                                       : 
                                                      ((7U 
                                                        == (IData)(gpu__DOT__kcolor))
                                                        ? 0xcccU
                                                        : 
                                                       ((8U 
                                                         == (IData)(gpu__DOT__kcolor))
                                                         ? 0x888U
                                                         : 
                                                        ((9U 
                                                          == (IData)(gpu__DOT__kcolor))
                                                          ? 0xfU
                                                          : 
                                                         ((0xaU 
                                                           == (IData)(gpu__DOT__kcolor))
                                                           ? 0xf0U
                                                           : 
                                                          ((0xbU 
                                                            == (IData)(gpu__DOT__kcolor))
                                                            ? 0xffU
                                                            : 
                                                           ((0xcU 
                                                             == (IData)(gpu__DOT__kcolor))
                                                             ? 0xf00U
                                                             : 
                                                            ((0xdU 
                                                              == (IData)(gpu__DOT__kcolor))
                                                              ? 0xf0fU
                                                              : 
                                                             ((0xeU 
                                                               == (IData)(gpu__DOT__kcolor))
                                                               ? 0xff0U
                                                               : 0xfffU)))))))))))))));
}

VL_ATTR_COLD void Vgpu___024root___eval_triggers__stl(Vgpu___024root* vlSelf);

VL_ATTR_COLD bool Vgpu___024root___eval_phase__stl(Vgpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vgpu___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vgpu___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vgpu___024root___dump_triggers__ico(Vgpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vgpu___024root___dump_triggers__act(Vgpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void Vgpu___024root___dump_triggers__nba(Vgpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu___024root___dump_triggers__nba\n"); );
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

VL_ATTR_COLD void Vgpu___024root___ctor_var_reset(Vgpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->r = VL_RAND_RESET_I(4);
    vlSelf->g = VL_RAND_RESET_I(4);
    vlSelf->b = VL_RAND_RESET_I(4);
    vlSelf->hs = VL_RAND_RESET_I(1);
    vlSelf->vs = VL_RAND_RESET_I(1);
    vlSelf->char_address = VL_RAND_RESET_I(12);
    vlSelf->font_address = VL_RAND_RESET_I(12);
    vlSelf->char_data = VL_RAND_RESET_I(8);
    vlSelf->font_data = VL_RAND_RESET_I(8);
    vlSelf->cursor = VL_RAND_RESET_I(11);
    vlSelf->gpu__DOT__xmax = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__ymax = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__cwin = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__x = VL_RAND_RESET_I(11);
    vlSelf->gpu__DOT__y = VL_RAND_RESET_I(11);
    vlSelf->gpu__DOT__flash = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__attr = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__char = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__timer = VL_RAND_RESET_I(24);
    vlSelf->gpu__DOT__id = VL_RAND_RESET_I(11);
    vlSelf->gpu__DOT__color = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
}
