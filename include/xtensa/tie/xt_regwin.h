// Customer ID=16669; Build=0x8c05c; Copyright (c) 2017-2019 Cadence Design Systems, Inc.
//
// Permission is hereby granted, free of charge, to any person obtaining
// a copy of this software and associated documentation files (the
// "Software"), to deal in the Software without restriction, including
// without limitation the rights to use, copy, modify, merge, publish,
// distribute, sublicense, and/or sell copies of the Software, and to
// permit persons to whom the Software is furnished to do so, subject to
// the following conditions:
//
// The above copyright notice and this permission notice shall be included
// in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
// IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
// CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
// TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
// SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

/* Definitions for the xt_regwin TIE package */

/* Do not modify. This is automatically generated.*/

/* parasoft-begin-suppress ALL "This file not MISRA checked." */

#ifndef _XTENSA_xt_regwin_HEADER
#define _XTENSA_xt_regwin_HEADER

#ifdef __XTENSA__
#ifdef __XCC__

#ifndef _ASMLANGUAGE
#ifndef _NOCLANGUAGE
#ifndef __ASSEMBLER__

#include <xtensa/tie/xt_core.h>

/*
 * The following prototypes describe intrinsic functions
 * corresponding to TIE instructions.  Some TIE instructions
 * may produce multiple results (designated as "out" operands
 * in the iclass section) or may have operands used as both
 * inputs and outputs (designated as "inout").  However, the C
 * and C++ languages do not provide syntax that can express
 * the in/out/inout constraints of TIE intrinsics.
 * Nevertheless, the compiler understands these constraints
 * and will check that the intrinsic functions are used
 * correctly.  To improve the readability of these prototypes,
 * the "out" and "inout" parameters are marked accordingly
 * with comments.
 */

extern int _TIE_xt_regwin_L32E(const int * s, immediate o);
extern int _TIE_xt_regwin_MOVSP(int s);
extern void _TIE_xt_regwin_ROTW(immediate simm4);
extern unsigned _TIE_xt_regwin_RSR_WINDOWBASE(void);
extern unsigned _TIE_xt_regwin_RSR_WINDOWSTART(void);
extern void _TIE_xt_regwin_S32E(int t, int * s, immediate o);
extern void _TIE_xt_regwin_WSR_WINDOWBASE(unsigned t);
extern void _TIE_xt_regwin_WSR_WINDOWSTART(unsigned t);
extern void _TIE_xt_regwin_XSR_WINDOWBASE(unsigned t /*inout*/);
extern void _TIE_xt_regwin_XSR_WINDOWSTART(unsigned t /*inout*/);

#endif /*__ASSEMBLER__*/
#endif /*_NOCLANGUAGE*/
#endif /*_ASMLANGUAGE*/

#define XT_L32E _TIE_xt_regwin_L32E
#define XT_MOVSP _TIE_xt_regwin_MOVSP
#define XT_ROTW _TIE_xt_regwin_ROTW
#define XT_RSR_WINDOWBASE _TIE_xt_regwin_RSR_WINDOWBASE
#define XT_RSR_WINDOWSTART _TIE_xt_regwin_RSR_WINDOWSTART
#define XT_S32E _TIE_xt_regwin_S32E
#define XT_WSR_WINDOWBASE _TIE_xt_regwin_WSR_WINDOWBASE
#define XT_WSR_WINDOWSTART _TIE_xt_regwin_WSR_WINDOWSTART
#define XT_XSR_WINDOWBASE _TIE_xt_regwin_XSR_WINDOWBASE
#define XT_XSR_WINDOWSTART _TIE_xt_regwin_XSR_WINDOWSTART

#endif /* __XCC__ */

#endif /* __XTENSA__ */

#endif /* !_XTENSA_xt_regwin_HEADER */

/* parasoft-end-suppress ALL "This file not MISRA checked." */