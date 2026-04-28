/*
   Copyright (C) 2015-2017 Free Software Foundation, Inc.
   Contributed by Imagination Technologies Ltd.

   This file is part of GCC.

   GCC is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published
   by the Free Software Foundation; either version 3, or (at your
   option) any later version.

   GCC is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   Under Section 7 of GPL version 3, you are granted additional
   permissions described in the GCC Runtime Library Exception, version
   3.1, as published by the Free Software Foundation.

   You should have received a copy of the GNU General Public License and
   a copy of the GCC Runtime Library Exception along with this program;
   see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _MSA2_H
#define _MSA2_H 1

#if defined(__mips_msa)

typedef signed char v16i8 __attribute__ ((vector_size(16), aligned(16)));
typedef signed char v16i8_b __attribute__ ((vector_size(16), aligned(1)));
typedef unsigned char v16u8 __attribute__ ((vector_size(16), aligned(16)));
typedef unsigned char v16u8_b __attribute__ ((vector_size(16), aligned(1)));
typedef short v8i16 __attribute__ ((vector_size(16), aligned(16)));
typedef short v8i16_h __attribute__ ((vector_size(16), aligned(2)));
typedef unsigned short v8u16 __attribute__ ((vector_size(16), aligned(16)));
typedef unsigned short v8u16_h __attribute__ ((vector_size(16), aligned(2)));
typedef int v4i32 __attribute__ ((vector_size(16), aligned(16)));
typedef int v4i32_w __attribute__ ((vector_size(16), aligned(4)));
typedef unsigned int v4u32 __attribute__ ((vector_size(16), aligned(16)));
typedef unsigned int v4u32_w __attribute__ ((vector_size(16), aligned(4)));
typedef long long v2i64 __attribute__ ((vector_size(16), aligned(16)));
typedef long long v2i64_d __attribute__ ((vector_size(16), aligned(8)));
typedef unsigned long long v2u64 __attribute__ ((vector_size(16), aligned(16)));
typedef unsigned long long v2u64_d __attribute__ ((vector_size(16), aligned(8)));

typedef long long __m128i __attribute__ ((__vector_size__ (16), __may_alias__));

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__msa2_bsel (__m128i a, __m128i b, __m128i c)
{
  return (__m128i) __builtin_msa2_bsel ((v16i8) a, (v16i8) b, (v16i8) c);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__msa2_dotp_s_q (__m128i a, __m128i b)
{
  return (__m128i) __builtin_msa2_dotp_s_q ((v2i64) a, (v2i64) b);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__msa2_dotp_u_q (__m128i a, __m128i b)
{
  return (__m128i) __builtin_msa2_dotp_u_q ((v2u64) a, (v2u64) b);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__msa2_dotp_us_h (__m128i a, __m128i b)
{
  return (__m128i) __builtin_msa2_dotp_us_h ((v16u8) a, (v16i8) b);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__msa2_dotp_us_w (__m128i a, __m128i b)
{
  return (__m128i) __builtin_msa2_dotp_us_w ((v8u16) a, (v8i16) b);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__msa2_dotp_us_d (__m128i a, __m128i b)
{
  return (__m128i) __builtin_msa2_dotp_us_d ((v4u32) a, (v4i32) b);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__msa2_dotp_us_q (__m128i a, __m128i b)
{
  return (__m128i) __builtin_msa2_dotp_us_q ((v2u64) a, (v2i64) b);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__msa2_dpadd_s_q (__m128i ret, __m128i a, __m128i b)
{
  return (__m128i) __builtin_msa2_dpadd_s_q ((v2i64) ret, (v2i64) a, (v2i64) b);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__msa2_dpadd_u_q (__m128i ret, __m128i a, __m128i b)
{
  return (__m128i) __builtin_msa2_dpadd_u_q ((v2u64) ret, (v2u64) a, (v2u64) b);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__msa2_dpadd_us_h (__m128i ret, __m128i a, __m128i b)
{
  return (__m128i) __builtin_msa2_dpadd_us_h ((v8u16) ret, (v16u8) a, (v16i8) b);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__msa2_dpadd_us_w (__m128i ret, __m128i a, __m128i b)
{
  return (__m128i) __builtin_msa2_dpadd_us_w ((v4u32) ret, (v8u16) a, (v8i16) b);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__msa2_dpadd_us_d (__m128i ret, __m128i a, __m128i b)
{
  return (__m128i) __builtin_msa2_dpadd_us_d ((v2u64) ret, (v4u32) a, (v4i32) b);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__msa2_dpadd_us_q (__m128i ret, __m128i a, __m128i b)
{
  return (__m128i) __builtin_msa2_dpadd_us_q ((v2u64) ret, (v2u64) a, (v2i64) b);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__msa2_dpsub_s_q (__m128i ret, __m128i a, __m128i b)
{
  return (__m128i) __builtin_msa2_dpsub_s_q ((v2i64) ret, (v2i64) a, (v2i64) b);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__msa2_dpsub_u_q (__m128i ret, __m128i a, __m128i b)
{
  return (__m128i) __builtin_msa2_dpsub_u_q ((v2u64) ret, (v2u64) a, (v2u64) b);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__msa2_hadd_s_q (__m128i a, __m128i b)
{
  return (__m128i) __builtin_msa2_hadd_s_q ((v2i64) a, (v2i64) b);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__msa2_hadd_u_q (__m128i a, __m128i b)
{
  return (__m128i) __builtin_msa2_hadd_u_q ((v2u64) a, (v2u64) b);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__msa2_hsub_s_q (__m128i a, __m128i b)
{
  return (__m128i) __builtin_msa2_hsub_s_q ((v2i64) a, (v2i64) b);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__msa2_hsub_u_q (__m128i a, __m128i b)
{
  return (__m128i) __builtin_msa2_hsub_u_q ((v2u64) a, (v2u64) b);
}

#define __msa2_n2x_sx_sc_b(a, m)				\
  (__m128i) __builtin_msa2_n2x_sx_sc_b ((v16i8) a, m);

#define __msa2_n2x_sx_sc_h(a, m)				\
  (__m128i) __builtin_msa2_n2x_sx_sc_h ((v8i16) a, m);

#define __msa2_n2x_sx_sc_w(a, m)				\
  (__m128i) __builtin_msa2_n2x_sx_sc_w ((v4i32) a, m);

#define __msa2_n2x_sx_sc_d(a, m)				\
  (__m128i) __builtin_msa2_n2x_sx_sc_d ((v2i64) a, m);

#define __msa2_n2x_sx_uc_b(a, m)				\
  (__m128i) __builtin_msa2_n2x_sx_uc_b ((v16i8) a, m);

#define __msa2_n2x_sx_uc_h(a, m)				\
  (__m128i) __builtin_msa2_n2x_sx_uc_h ((v8i16) a, m);

#define __msa2_n2x_sx_uc_w(a, m)				\
  (__m128i) __builtin_msa2_n2x_sx_uc_w ((v4i32) a, m);

#define __msa2_n2x_sx_uc_d(a, m)				\
  (__m128i) __builtin_msa2_n2x_sx_uc_d ((v2i64) a, m);

#define __msa2_n2x_sx_nc_b(a, m)				\
  (__m128i) __builtin_msa2_n2x_sx_nc_b ((v16i8) a, m);

#define __msa2_n2x_sx_nc_h(a, m)				\
  (__m128i) __builtin_msa2_n2x_sx_nc_h ((v8i16) a, m);

#define __msa2_n2x_sx_nc_w(a, m)				\
  (__m128i) __builtin_msa2_n2x_sx_nc_w ((v4i32) a, m);

#define __msa2_n2x_sx_nc_d(a, m)				\
  (__m128i) __builtin_msa2_n2x_sx_nc_d ((v2i64) a, m);

#define __msa2_n2x_ux_sc_b(a, m)				\
  (__m128i) __builtin_msa2_n2x_ux_sc_b ((v16i8) a, m);

#define __msa2_n2x_ux_sc_h(a, m)				\
  (__m128i) __builtin_msa2_n2x_ux_sc_h ((v8i16) a, m);

#define __msa2_n2x_ux_sc_w(a, m)				\
  (__m128i) __builtin_msa2_n2x_ux_sc_w ((v4i32) a, m);

#define __msa2_n2x_ux_sc_d(a, m)				\
  (__m128i) __builtin_msa2_n2x_ux_sc_d ((v2i64) a, m);

#define __msa2_n2x_ux_uc_b(a, m)				\
  (__m128i) __builtin_msa2_n2x_ux_uc_b ((v16i8) a, m);

#define __msa2_n2x_ux_uc_h(a, m)				\
  (__m128i) __builtin_msa2_n2x_ux_uc_h ((v8i16) a, m);

#define __msa2_n2x_ux_uc_w(a, m)				\
  (__m128i) __builtin_msa2_n2x_ux_uc_w ((v4i32) a, m);

#define __msa2_n2x_ux_uc_d(a, m)				\
  (__m128i) __builtin_msa2_n2x_ux_uc_d ((v2i64) a, m);

#define __msa2_n2x_ux_nc_b(a, m)				\
  (__m128i) __builtin_msa2_n2x_ux_nc_b ((v16i8) a, m);

#define __msa2_n2x_ux_nc_h(a, m)				\
  (__m128i) __builtin_msa2_n2x_ux_nc_h ((v8i16) a, m);

#define __msa2_n2x_ux_nc_w(a, m)				\
  (__m128i) __builtin_msa2_n2x_ux_nc_w ((v4i32) a, m);

#define __msa2_n2x_ux_nc_d(a, m)				\
  (__m128i) __builtin_msa2_n2x_ux_nc_d ((v2i64) a, m);

#define __msa2_n2x_rnd_sx_sc_b(a, m)				\
  (__m128i) __builtin_msa2_n2x_rnd_sx_sc_b ((v16i8) a, m);

#define __msa2_n2x_rnd_sx_sc_h(a, m)				\
  (__m128i) __builtin_msa2_n2x_rnd_sx_sc_h ((v8i16) a, m);

#define __msa2_n2x_rnd_sx_sc_w(a, m)				\
  (__m128i) __builtin_msa2_n2x_rnd_sx_sc_w ((v4i32) a, m);

#define __msa2_n2x_rnd_sx_sc_d(a, m)				\
  (__m128i) __builtin_msa2_n2x_rnd_sx_sc_d ((v2i64) a, m);

#define __msa2_n2x_rnd_sx_uc_b(a, m)				\
  (__m128i) __builtin_msa2_n2x_rnd_sx_uc_b ((v16i8) a, m);

#define __msa2_n2x_rnd_sx_uc_h(a, m)				\
  (__m128i) __builtin_msa2_n2x_rnd_sx_uc_h ((v8i16) a, m);

#define __msa2_n2x_rnd_sx_uc_w(a, m)				\
  (__m128i) __builtin_msa2_n2x_rnd_sx_uc_w ((v4i32) a, m);

#define __msa2_n2x_rnd_sx_uc_d(a, m)				\
  (__m128i) __builtin_msa2_n2x_rnd_sx_uc_d ((v2i64) a, m);

#define __msa2_n2x_rnd_sx_nc_b(a, m)				\
  (__m128i) __builtin_msa2_n2x_rnd_sx_nc_b ((v16i8) a, m);

#define __msa2_n2x_rnd_sx_nc_h(a, m)				\
  (__m128i) __builtin_msa2_n2x_rnd_sx_nc_h ((v8i16) a, m);

#define __msa2_n2x_rnd_sx_nc_w(a, m)				\
  (__m128i) __builtin_msa2_n2x_rnd_sx_nc_w ((v4i32) a, m);

#define __msa2_n2x_rnd_sx_nc_d(a, m)				\
  (__m128i) __builtin_msa2_n2x_rnd_sx_nc_d ((v2i64) a, m);

#define __msa2_n2x_rnd_ux_sc_b(a, m)				\
  (__m128i) __builtin_msa2_n2x_rnd_ux_sc_b ((v16i8) a, m);

#define __msa2_n2x_rnd_ux_sc_h(a, m)				\
  (__m128i) __builtin_msa2_n2x_rnd_ux_sc_h ((v8i16) a, m);

#define __msa2_n2x_rnd_ux_sc_w(a, m)				\
  (__m128i) __builtin_msa2_n2x_rnd_ux_sc_w ((v4i32) a, m);

#define __msa2_n2x_rnd_ux_sc_d(a, m)				\
  (__m128i) __builtin_msa2_n2x_rnd_ux_sc_d ((v2i64) a, m);

#define __msa2_n2x_rnd_ux_uc_b(a, m)				\
  (__m128i) __builtin_msa2_n2x_rnd_ux_uc_b ((v16i8) a, m);

#define __msa2_n2x_rnd_ux_uc_h(a, m)				\
  (__m128i) __builtin_msa2_n2x_rnd_ux_uc_h ((v8i16) a, m);

#define __msa2_n2x_rnd_ux_uc_w(a, m)				\
  (__m128i) __builtin_msa2_n2x_rnd_ux_uc_w ((v4i32) a, m);

#define __msa2_n2x_rnd_ux_uc_d(a, m)				\
  (__m128i) __builtin_msa2_n2x_rnd_ux_uc_d ((v2i64) a, m);

#define __msa2_n2x_rnd_ux_nc_b(a, m)				\
  (__m128i) __builtin_msa2_n2x_rnd_ux_nc_b ((v16i8) a, m);

#define __msa2_n2x_rnd_ux_nc_h(a, m)				\
  (__m128i) __builtin_msa2_n2x_rnd_ux_nc_h ((v8i16) a, m);

#define __msa2_n2x_rnd_ux_nc_w(a, m)				\
  (__m128i) __builtin_msa2_n2x_rnd_ux_nc_w ((v4i32) a, m);

#define __msa2_n2x_rnd_ux_nc_d(a, m)				\
  (__m128i) __builtin_msa2_n2x_rnd_ux_nc_d ((v2i64) a, m);

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__msa2_nxbits_any_b (__m128i a)
{
  return (__m128i) __builtin_msa2_nxbits_any_b ((v16i8) a);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__msa2_nxbits_ge0_b (__m128i a)
{
  return (__m128i) __builtin_msa2_nxbits_ge0_b ((v16i8) a);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__msa2_nxbits_lt0_b (__m128i a)
{
  return (__m128i) __builtin_msa2_nxbits_lt0_b ((v16i8) a);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__msa2_ror_b (__m128i a, __m128i b)
{
  return (__m128i) __builtin_msa2_ror_b ((v16i8) a, (v16i8) b);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__msa2_ror_h (__m128i a, __m128i b)
{
  return (__m128i) __builtin_msa2_ror_h ((v8i16) a, (v8i16) b);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__msa2_ror_w (__m128i a, __m128i b)
{
  return (__m128i) __builtin_msa2_ror_w ((v4i32) a, (v4i32) b);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__msa2_ror_d (__m128i a, __m128i b)
{
  return (__m128i) __builtin_msa2_ror_d ((v2i64) a, (v2i64) b);
}

#define __msa2_rori_b(a, m)			\
  (__m128i) __builtin_msa2_rori_b ((v16i8) a, m);

#define __msa2_rori_h(a, m)			\
  (__m128i) __builtin_msa2_rori_h ((v8i16) a, m);

#define __msa2_rori_w(a, m)			\
  (__m128i) __builtin_msa2_rori_w ((v4i32) a, m);

#define __msa2_rori_d(a, m)			\
  (__m128i) __builtin_msa2_rori_d ((v2i64) a, m);

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__msa2_subssu_u_b (__m128i a, __m128i b)
{
  return (__m128i) __builtin_msa2_subssu_u_b ((v16i8) a, (v16u8) b);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__msa2_subssu_u_h (__m128i a, __m128i b)
{
  return (__m128i) __builtin_msa2_subssu_u_h ((v8i16) a, (v8u16) b);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__msa2_subssu_u_w (__m128i a, __m128i b)
{
  return (__m128i) __builtin_msa2_subssu_u_w ((v4i32) a, (v4u32) b);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__msa2_subssu_u_d (__m128i a, __m128i b)
{
  return (__m128i) __builtin_msa2_subssu_u_d ((v2i64) a, (v2u64) b);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__msa2_vadd_el0_q (__m128i a, __m128i b)
{
  return (__m128i) __builtin_msa2_vadd_el0_q ((v2i64) a, (v2i64) b);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__msa2_vperm_b (__m128i a, __m128i b, __m128i c)
{
  return (__m128i) __builtin_msa2_vperm_b ((v16i8) a, (v16i8) b, (v16i8) c);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__msa2_vsub_el0_q (__m128i a, __m128i b)
{
  return (__m128i) __builtin_msa2_vsub_el0_q ((v2i64) a, (v2i64) b);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__msa2_w2x_lo_s_b (__m128i a)
{
  return (__m128i) __builtin_msa2_w2x_lo_s_b ((v16i8) a);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__msa2_w2x_lo_s_h (__m128i a)
{
  return (__m128i) __builtin_msa2_w2x_lo_s_h ((v8i16) a);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__msa2_w2x_lo_s_w (__m128i a)
{
  return (__m128i) __builtin_msa2_w2x_lo_s_w ((v4i32) a);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__msa2_w2x_lo_s_d (__m128i a)
{
  return (__m128i) __builtin_msa2_w2x_lo_s_d ((v2i64) a);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__msa2_w2x_hi_s_b (__m128i a)
{
  return (__m128i) __builtin_msa2_w2x_hi_s_b ((v16i8) a);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__msa2_w2x_hi_s_h (__m128i a)
{
  return (__m128i) __builtin_msa2_w2x_hi_s_h ((v8i16) a);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__msa2_w2x_hi_s_w (__m128i a)
{
  return (__m128i) __builtin_msa2_w2x_hi_s_w ((v4i32) a);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__msa2_w2x_hi_s_d (__m128i a)
{
  return (__m128i) __builtin_msa2_w2x_hi_s_d ((v2i64) a);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__msa2_wxbits_01_b (__m128i a)
{
  return (__m128i) __builtin_msa2_wxbits_01_b ((v16i8) a);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__msa2_wxbits_mask_b (__m128i a)
{
  return (__m128i) __builtin_msa2_wxbits_mask_b ((v16i8) a);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_muhv_s_d(v2i64 a, v2i64 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "muhv.s.d\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_muhv_s_d(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_muhv_s_d((v2i64) a, (v2i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_muhv_u_d(v2u64 a, v2u64 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "muhv.u.d\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_muhv_u_d(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_muhv_u_d((v2u64) a, (v2u64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_muhv_us_d(v2u64 a, v2i64 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "muhv.us.d\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_muhv_us_d(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_muhv_us_d((v2u64) a, (v2i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i16 __builtin_msa2_sad_adj2_s_w2x_b(v16i8 a, v16i8 b)
{ 
    v8i16 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "sad.adj2.s.w2x.b\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_sad_adj2_s_w2x_b(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_sad_adj2_s_w2x_b((v16i8) a, (v16i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i32 __builtin_msa2_sad_adj2_s_w2x_h(v8i16 a, v8i16 b)
{ 
    v4i32 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "sad.adj2.s.w2x.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_sad_adj2_s_w2x_h(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_sad_adj2_s_w2x_h((v8i16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_sad_adj2_s_w2x_w(v4i32 a, v4i32 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "sad.adj2.s.w2x.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_sad_adj2_s_w2x_w(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_sad_adj2_s_w2x_w((v4i32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u16 __builtin_msa2_sad_adj2_u_w2x_b(v16u8 a, v16u8 b)
{ 
    v8u16 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "sad.adj2.u.w2x.b\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_sad_adj2_u_w2x_b(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_sad_adj2_u_w2x_b((v16u8) a, (v16u8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u32 __builtin_msa2_sad_adj2_u_w2x_h(v8u16 a, v8u16 b)
{ 
    v4u32 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "sad.adj2.u.w2x.h\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_sad_adj2_u_w2x_h(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_sad_adj2_u_w2x_h((v8u16) a, (v8u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_sad_adj2_u_w2x_w(v4u32 a, v4u32 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "sad.adj2.u.w2x.w\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_sad_adj2_u_w2x_w(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_sad_adj2_u_w2x_w((v4u32) a, (v4u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i16 __builtin_msa2_sad_adj2_s_acc_w2x_b(v8i16 ret, v16i8 a, v16i8 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "sad.adj2.s.acc.w2x.b\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_sad_adj2_s_acc_w2x_b(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_sad_adj2_s_acc_w2x_b((v8i16) ret, (v16i8) a, (v16i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i32 __builtin_msa2_sad_adj2_s_acc_w2x_h(v4i32 ret, v8i16 a, v8i16 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "sad.adj2.s.acc.w2x.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_sad_adj2_s_acc_w2x_h(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_sad_adj2_s_acc_w2x_h((v4i32) ret, (v8i16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_sad_adj2_s_acc_w2x_w(v2i64 ret, v4i32 a, v4i32 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "sad.adj2.s.acc.w2x.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_sad_adj2_s_acc_w2x_w(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_sad_adj2_s_acc_w2x_w((v2i64) ret, (v4i32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u16 __builtin_msa2_sad_adj2_u_acc_w2x_b(v8u16 ret, v16u8 a, v16u8 b)
{ 
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "sad.adj2.u.acc.w2x.b\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_sad_adj2_u_acc_w2x_b(__m128i ret, __m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_sad_adj2_u_acc_w2x_b((v8u16) ret, (v16u8) a, (v16u8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u32 __builtin_msa2_sad_adj2_u_acc_w2x_h(v4u32 ret, v8u16 a, v8u16 b)
{ 
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "sad.adj2.u.acc.w2x.h\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_sad_adj2_u_acc_w2x_h(__m128i ret, __m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_sad_adj2_u_acc_w2x_h((v4u32) ret, (v8u16) a, (v8u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_sad_adj2_u_acc_w2x_w(v2u64 ret, v4u32 a, v4u32 b)
{ 
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "sad.adj2.u.acc.w2x.w\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_sad_adj2_u_acc_w2x_w(__m128i ret, __m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_sad_adj2_u_acc_w2x_w((v2u64) ret, (v4u32) a, (v4u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vadd_el0_s_wx_h(v8i16 a, v8i16 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vadd.el0.s.wx.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_el0_s_wx_h(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vadd_el0_s_wx_h((v8i16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vadd_el0_s_wx_w(v4i32 a, v4i32 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vadd.el0.s.wx.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_el0_s_wx_w(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vadd_el0_s_wx_w((v4i32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vadd_el0_s_wx_d(v2i64 a, v2i64 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vadd.el0.s.wx.d\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_el0_s_wx_d(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vadd_el0_s_wx_d((v2i64) a, (v2i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vadd_el0_u_wx_h(v8u16 a, v8u16 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vadd.el0.u.wx.h\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_el0_u_wx_h(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vadd_el0_u_wx_h((v8u16) a, (v8u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vadd_el0_u_wx_w(v4u32 a, v4u32 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vadd.el0.u.wx.w\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_el0_u_wx_w(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vadd_el0_u_wx_w((v4u32) a, (v4u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vadd_el0_u_wx_d(v2u64 a, v2u64 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vadd.el0.u.wx.d\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_el0_u_wx_d(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vadd_el0_u_wx_d((v2u64) a, (v2u64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vadd_el0_us_wx_h(v8u16 a, v8i16 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vadd.el0.us.wx.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_el0_us_wx_h(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vadd_el0_us_wx_h((v8u16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vadd_el0_us_wx_w(v4u32 a, v4i32 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vadd.el0.us.wx.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_el0_us_wx_w(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vadd_el0_us_wx_w((v4u32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vadd_el0_us_wx_d(v2u64 a, v2i64 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vadd.el0.us.wx.d\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_el0_us_wx_d(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vadd_el0_us_wx_d((v2u64) a, (v2i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i16 __builtin_msa2_vadd_even_s_w2x_b(v16i8 a, v16i8 b)
{ 
    v8i16 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vadd.even.s.w2x.b\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_even_s_w2x_b(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vadd_even_s_w2x_b((v16i8) a, (v16i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i32 __builtin_msa2_vadd_even_s_w2x_h(v8i16 a, v8i16 b)
{ 
    v4i32 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vadd.even.s.w2x.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_even_s_w2x_h(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vadd_even_s_w2x_h((v8i16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vadd_even_s_w2x_w(v4i32 a, v4i32 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vadd.even.s.w2x.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_even_s_w2x_w(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vadd_even_s_w2x_w((v4i32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vadd_even_s_w2x_d(v2i64 a, v2i64 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vadd.even.s.w2x.d\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_even_s_w2x_d(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vadd_even_s_w2x_d((v2i64) a, (v2i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u16 __builtin_msa2_vadd_even_u_w2x_b(v16u8 a, v16u8 b)
{ 
    v8u16 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vadd.even.u.w2x.b\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_even_u_w2x_b(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vadd_even_u_w2x_b((v16u8) a, (v16u8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u32 __builtin_msa2_vadd_even_u_w2x_h(v8u16 a, v8u16 b)
{ 
    v4u32 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vadd.even.u.w2x.h\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_even_u_w2x_h(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vadd_even_u_w2x_h((v8u16) a, (v8u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vadd_even_u_w2x_w(v4u32 a, v4u32 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vadd.even.u.w2x.w\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_even_u_w2x_w(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vadd_even_u_w2x_w((v4u32) a, (v4u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vadd_even_u_w2x_d(v2u64 a, v2u64 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vadd.even.u.w2x.d\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_even_u_w2x_d(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vadd_even_u_w2x_d((v2u64) a, (v2u64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u16 __builtin_msa2_vadd_even_us_w2x_b(v16u8 a, v16i8 b)
{ 
    v8u16 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vadd.even.us.w2x.b\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_even_us_w2x_b(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vadd_even_us_w2x_b((v16u8) a, (v16i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u32 __builtin_msa2_vadd_even_us_w2x_h(v8u16 a, v8i16 b)
{ 
    v4u32 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vadd.even.us.w2x.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_even_us_w2x_h(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vadd_even_us_w2x_h((v8u16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vadd_even_us_w2x_w(v4u32 a, v4i32 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vadd.even.us.w2x.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_even_us_w2x_w(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vadd_even_us_w2x_w((v4u32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vadd_even_us_w2x_d(v2u64 a, v2i64 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vadd.even.us.w2x.d\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_even_us_w2x_d(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vadd_even_us_w2x_d((v2u64) a, (v2i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i16 __builtin_msa2_vadd_odd_s_w2x_b(v16i8 a, v16i8 b)
{ 
    v8i16 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vadd.odd.s.w2x.b\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_odd_s_w2x_b(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vadd_odd_s_w2x_b((v16i8) a, (v16i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i32 __builtin_msa2_vadd_odd_s_w2x_h(v8i16 a, v8i16 b)
{ 
    v4i32 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vadd.odd.s.w2x.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_odd_s_w2x_h(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vadd_odd_s_w2x_h((v8i16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vadd_odd_s_w2x_w(v4i32 a, v4i32 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vadd.odd.s.w2x.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_odd_s_w2x_w(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vadd_odd_s_w2x_w((v4i32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vadd_odd_s_w2x_d(v2i64 a, v2i64 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vadd.odd.s.w2x.d\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_odd_s_w2x_d(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vadd_odd_s_w2x_d((v2i64) a, (v2i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u16 __builtin_msa2_vadd_odd_u_w2x_b(v16u8 a, v16u8 b)
{ 
    v8u16 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vadd.odd.u.w2x.b\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_odd_u_w2x_b(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vadd_odd_u_w2x_b((v16u8) a, (v16u8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u32 __builtin_msa2_vadd_odd_u_w2x_h(v8u16 a, v8u16 b)
{ 
    v4u32 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vadd.odd.u.w2x.h\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_odd_u_w2x_h(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vadd_odd_u_w2x_h((v8u16) a, (v8u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vadd_odd_u_w2x_w(v4u32 a, v4u32 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vadd.odd.u.w2x.w\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_odd_u_w2x_w(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vadd_odd_u_w2x_w((v4u32) a, (v4u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vadd_odd_u_w2x_d(v2u64 a, v2u64 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vadd.odd.u.w2x.d\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_odd_u_w2x_d(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vadd_odd_u_w2x_d((v2u64) a, (v2u64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u16 __builtin_msa2_vadd_odd_us_w2x_b(v16u8 a, v16i8 b)
{ 
    v8u16 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vadd.odd.us.w2x.b\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_odd_us_w2x_b(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vadd_odd_us_w2x_b((v16u8) a, (v16i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u32 __builtin_msa2_vadd_odd_us_w2x_h(v8u16 a, v8i16 b)
{ 
    v4u32 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vadd.odd.us.w2x.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_odd_us_w2x_h(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vadd_odd_us_w2x_h((v8u16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vadd_odd_us_w2x_w(v4u32 a, v4i32 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vadd.odd.us.w2x.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_odd_us_w2x_w(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vadd_odd_us_w2x_w((v4u32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vadd_odd_us_w2x_d(v2u64 a, v2i64 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vadd.odd.us.w2x.d\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_odd_us_w2x_d(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vadd_odd_us_w2x_d((v2u64) a, (v2i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i16 __builtin_msa2_vadd_lo_s_w2x_b(v16i8 a, v16i8 b)
{ 
    v8i16 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vadd.lo.s.w2x.b\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_lo_s_w2x_b(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vadd_lo_s_w2x_b((v16i8) a, (v16i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i32 __builtin_msa2_vadd_lo_s_w2x_h(v8i16 a, v8i16 b)
{ 
    v4i32 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vadd.lo.s.w2x.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_lo_s_w2x_h(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vadd_lo_s_w2x_h((v8i16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vadd_lo_s_w2x_w(v4i32 a, v4i32 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vadd.lo.s.w2x.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_lo_s_w2x_w(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vadd_lo_s_w2x_w((v4i32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vadd_lo_s_w2x_d(v2i64 a, v2i64 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vadd.lo.s.w2x.d\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_lo_s_w2x_d(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vadd_lo_s_w2x_d((v2i64) a, (v2i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u16 __builtin_msa2_vadd_lo_u_w2x_b(v16u8 a, v16u8 b)
{ 
    v8u16 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vadd.lo.u.w2x.b\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_lo_u_w2x_b(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vadd_lo_u_w2x_b((v16u8) a, (v16u8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u32 __builtin_msa2_vadd_lo_u_w2x_h(v8u16 a, v8u16 b)
{ 
    v4u32 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vadd.lo.u.w2x.h\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_lo_u_w2x_h(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vadd_lo_u_w2x_h((v8u16) a, (v8u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vadd_lo_u_w2x_w(v4u32 a, v4u32 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vadd.lo.u.w2x.w\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_lo_u_w2x_w(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vadd_lo_u_w2x_w((v4u32) a, (v4u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vadd_lo_u_w2x_d(v2u64 a, v2u64 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vadd.lo.u.w2x.d\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_lo_u_w2x_d(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vadd_lo_u_w2x_d((v2u64) a, (v2u64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u16 __builtin_msa2_vadd_lo_us_w2x_b(v16u8 a, v16i8 b)
{ 
    v8u16 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vadd.lo.us.w2x.b\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_lo_us_w2x_b(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vadd_lo_us_w2x_b((v16u8) a, (v16i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u32 __builtin_msa2_vadd_lo_us_w2x_h(v8u16 a, v8i16 b)
{ 
    v4u32 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vadd.lo.us.w2x.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_lo_us_w2x_h(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vadd_lo_us_w2x_h((v8u16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vadd_lo_us_w2x_w(v4u32 a, v4i32 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vadd.lo.us.w2x.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_lo_us_w2x_w(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vadd_lo_us_w2x_w((v4u32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vadd_lo_us_w2x_d(v2u64 a, v2i64 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vadd.lo.us.w2x.d\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_lo_us_w2x_d(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vadd_lo_us_w2x_d((v2u64) a, (v2i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i16 __builtin_msa2_vadd_hi_s_w2x_b(v16i8 a, v16i8 b)
{ 
    v8i16 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vadd.hi.s.w2x.b\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_hi_s_w2x_b(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vadd_hi_s_w2x_b((v16i8) a, (v16i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i32 __builtin_msa2_vadd_hi_s_w2x_h(v8i16 a, v8i16 b)
{ 
    v4i32 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vadd.hi.s.w2x.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_hi_s_w2x_h(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vadd_hi_s_w2x_h((v8i16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vadd_hi_s_w2x_w(v4i32 a, v4i32 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vadd.hi.s.w2x.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_hi_s_w2x_w(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vadd_hi_s_w2x_w((v4i32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vadd_hi_s_w2x_d(v2i64 a, v2i64 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vadd.hi.s.w2x.d\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_hi_s_w2x_d(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vadd_hi_s_w2x_d((v2i64) a, (v2i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u16 __builtin_msa2_vadd_hi_u_w2x_b(v16u8 a, v16u8 b)
{ 
    v8u16 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vadd.hi.u.w2x.b\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_hi_u_w2x_b(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vadd_hi_u_w2x_b((v16u8) a, (v16u8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u32 __builtin_msa2_vadd_hi_u_w2x_h(v8u16 a, v8u16 b)
{ 
    v4u32 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vadd.hi.u.w2x.h\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_hi_u_w2x_h(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vadd_hi_u_w2x_h((v8u16) a, (v8u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vadd_hi_u_w2x_w(v4u32 a, v4u32 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vadd.hi.u.w2x.w\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_hi_u_w2x_w(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vadd_hi_u_w2x_w((v4u32) a, (v4u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vadd_hi_u_w2x_d(v2u64 a, v2u64 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vadd.hi.u.w2x.d\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_hi_u_w2x_d(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vadd_hi_u_w2x_d((v2u64) a, (v2u64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u16 __builtin_msa2_vadd_hi_us_w2x_b(v16u8 a, v16i8 b)
{ 
    v8u16 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vadd.hi.us.w2x.b\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_hi_us_w2x_b(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vadd_hi_us_w2x_b((v16u8) a, (v16i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u32 __builtin_msa2_vadd_hi_us_w2x_h(v8u16 a, v8i16 b)
{ 
    v4u32 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vadd.hi.us.w2x.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_hi_us_w2x_h(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vadd_hi_us_w2x_h((v8u16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vadd_hi_us_w2x_w(v4u32 a, v4i32 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vadd.hi.us.w2x.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_hi_us_w2x_w(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vadd_hi_us_w2x_w((v4u32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vadd_hi_us_w2x_d(v2u64 a, v2i64 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vadd.hi.us.w2x.d\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vadd_hi_us_w2x_d(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vadd_hi_us_w2x_d((v2u64) a, (v2i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i32 __builtin_msa2_vmuhp_w(v4i32 a, v4i32 b)
{ 
    v4i32 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmuhp.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmuhp_w(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmuhp_w((v4i32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmuhp_d(v2i64 a, v2i64 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmuhp.d\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmuhp_d(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmuhp_d((v2i64) a, (v2i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i32 __builtin_msa2_vmulp_w(v4i32 a, v4i32 b)
{ 
    v4i32 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmulp.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmulp_w(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmulp_w((v4i32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmulp_d(v2i64 a, v2i64 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmulp.d\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmulp_d(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmulp_d((v2i64) a, (v2i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i32 __builtin_msa2_vmuhp_xacc_w(v4i32 ret, v4i32 a, v4i32 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmuhp.xacc.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmuhp_xacc_w(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmuhp_xacc_w((v4i32) ret, (v4i32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmuhp_xacc_d(v2i64 ret, v2i64 a, v2i64 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmuhp.xacc.d\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmuhp_xacc_d(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmuhp_xacc_d((v2i64) ret, (v2i64) a, (v2i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i32 __builtin_msa2_vmulp_xacc_w(v4i32 ret, v4i32 a, v4i32 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmulp.xacc.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmulp_xacc_w(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmulp_xacc_w((v4i32) ret, (v4i32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmulp_xacc_d(v2i64 ret, v2i64 a, v2i64 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmulp.xacc.d\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmulp_xacc_d(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmulp_xacc_d((v2i64) ret, (v2i64) a, (v2i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmult_el0_s_wx_h(v8i16 a, v8i16 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.el0.s.wx.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_el0_s_wx_h(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_el0_s_wx_h((v8i16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmult_el0_s_wx_w(v4i32 a, v4i32 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.el0.s.wx.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_el0_s_wx_w(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_el0_s_wx_w((v4i32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmult_el0_s_wx_d(v2i64 a, v2i64 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.el0.s.wx.d\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_el0_s_wx_d(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_el0_s_wx_d((v2i64) a, (v2i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_el0_u_wx_h(v8u16 a, v8u16 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vmult.el0.u.wx.h\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_el0_u_wx_h(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vmult_el0_u_wx_h((v8u16) a, (v8u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_el0_u_wx_w(v4u32 a, v4u32 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vmult.el0.u.wx.w\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_el0_u_wx_w(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vmult_el0_u_wx_w((v4u32) a, (v4u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_el0_u_wx_d(v2u64 a, v2u64 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vmult.el0.u.wx.d\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_el0_u_wx_d(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vmult_el0_u_wx_d((v2u64) a, (v2u64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_el0_us_wx_h(v8u16 a, v8i16 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.el0.us.wx.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_el0_us_wx_h(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_el0_us_wx_h((v8u16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_el0_us_wx_w(v4u32 a, v4i32 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.el0.us.wx.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_el0_us_wx_w(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_el0_us_wx_w((v4u32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_el0_us_wx_d(v2u64 a, v2i64 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.el0.us.wx.d\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_el0_us_wx_d(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_el0_us_wx_d((v2u64) a, (v2i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmult_el0_acc_s_wx_h(v2i64 ret, v8i16 a, v8i16 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.el0.acc.s.wx.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_el0_acc_s_wx_h(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_el0_acc_s_wx_h((v2i64) ret, (v8i16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmult_el0_acc_s_wx_w(v2i64 ret, v4i32 a, v4i32 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.el0.acc.s.wx.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_el0_acc_s_wx_w(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_el0_acc_s_wx_w((v2i64) ret, (v4i32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmult_el0_acc_s_wx_d(v2i64 ret, v2i64 a, v2i64 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.el0.acc.s.wx.d\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_el0_acc_s_wx_d(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_el0_acc_s_wx_d((v2i64) ret, (v2i64) a, (v2i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_el0_acc_u_wx_h(v2u64 ret, v8u16 a, v8u16 b)
{ 
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vmult.el0.acc.u.wx.h\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_el0_acc_u_wx_h(__m128i ret, __m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vmult_el0_acc_u_wx_h((v2u64) ret, (v8u16) a, (v8u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_el0_acc_u_wx_w(v2u64 ret, v4u32 a, v4u32 b)
{ 
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vmult.el0.acc.u.wx.w\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_el0_acc_u_wx_w(__m128i ret, __m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vmult_el0_acc_u_wx_w((v2u64) ret, (v4u32) a, (v4u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_el0_acc_u_wx_d(v2u64 ret, v2u64 a, v2u64 b)
{ 
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vmult.el0.acc.u.wx.d\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_el0_acc_u_wx_d(__m128i ret, __m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vmult_el0_acc_u_wx_d((v2u64) ret, (v2u64) a, (v2u64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_el0_acc_us_wx_h(v2u64 ret, v8u16 a, v8i16 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.el0.acc.us.wx.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_el0_acc_us_wx_h(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_el0_acc_us_wx_h((v2u64) ret, (v8u16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_el0_acc_us_wx_w(v2u64 ret, v4u32 a, v4i32 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.el0.acc.us.wx.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_el0_acc_us_wx_w(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_el0_acc_us_wx_w((v2u64) ret, (v4u32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_el0_acc_us_wx_d(v2u64 ret, v2u64 a, v2i64 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.el0.acc.us.wx.d\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_el0_acc_us_wx_d(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_el0_acc_us_wx_d((v2u64) ret, (v2u64) a, (v2i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i32 __builtin_msa2_vmult_hadd_adj4_s_w4x_b(v16i8 a, v16i8 b)
{ 
    v4i32 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.hadd.adj4.s.w4x.b\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_hadd_adj4_s_w4x_b(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_hadd_adj4_s_w4x_b((v16i8) a, (v16i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmult_hadd_adj4_s_w4x_h(v8i16 a, v8i16 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.hadd.adj4.s.w4x.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_hadd_adj4_s_w4x_h(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_hadd_adj4_s_w4x_h((v8i16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmult_hadd_adj4_s_w4x_w(v4i32 a, v4i32 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.hadd.adj4.s.w4x.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_hadd_adj4_s_w4x_w(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_hadd_adj4_s_w4x_w((v4i32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u32 __builtin_msa2_vmult_hadd_adj4_u_w4x_b(v16u8 a, v16u8 b)
{ 
    v4u32 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vmult.hadd.adj4.u.w4x.b\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_hadd_adj4_u_w4x_b(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vmult_hadd_adj4_u_w4x_b((v16u8) a, (v16u8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_hadd_adj4_u_w4x_h(v8u16 a, v8u16 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vmult.hadd.adj4.u.w4x.h\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_hadd_adj4_u_w4x_h(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vmult_hadd_adj4_u_w4x_h((v8u16) a, (v8u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_hadd_adj4_u_w4x_w(v4u32 a, v4u32 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vmult.hadd.adj4.u.w4x.w\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_hadd_adj4_u_w4x_w(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vmult_hadd_adj4_u_w4x_w((v4u32) a, (v4u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u32 __builtin_msa2_vmult_hadd_adj4_us_w4x_b(v16u8 a, v16i8 b)
{ 
    v4u32 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.hadd.adj4.us.w4x.b\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_hadd_adj4_us_w4x_b(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_hadd_adj4_us_w4x_b((v16u8) a, (v16i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_hadd_adj4_us_w4x_h(v8u16 a, v8i16 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.hadd.adj4.us.w4x.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_hadd_adj4_us_w4x_h(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_hadd_adj4_us_w4x_h((v8u16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_hadd_adj4_us_w4x_w(v4u32 a, v4i32 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.hadd.adj4.us.w4x.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_hadd_adj4_us_w4x_w(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_hadd_adj4_us_w4x_w((v4u32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i32 __builtin_msa2_vmult_hadd_adj4_acc_s_w4x_b(v4i32 ret, v16i8 a, v16i8 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.hadd.adj4.acc.s.w4x.b\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_hadd_adj4_acc_s_w4x_b(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_hadd_adj4_acc_s_w4x_b((v4i32) ret, (v16i8) a, (v16i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmult_hadd_adj4_acc_s_w4x_h(v2i64 ret, v8i16 a, v8i16 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.hadd.adj4.acc.s.w4x.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_hadd_adj4_acc_s_w4x_h(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_hadd_adj4_acc_s_w4x_h((v2i64) ret, (v8i16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmult_hadd_adj4_acc_s_w4x_w(v2i64 ret, v4i32 a, v4i32 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.hadd.adj4.acc.s.w4x.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_hadd_adj4_acc_s_w4x_w(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_hadd_adj4_acc_s_w4x_w((v2i64) ret, (v4i32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u32 __builtin_msa2_vmult_hadd_adj4_acc_u_w4x_b(v4u32 ret, v16u8 a, v16u8 b)
{ 
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vmult.hadd.adj4.acc.u.w4x.b\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_hadd_adj4_acc_u_w4x_b(__m128i ret, __m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vmult_hadd_adj4_acc_u_w4x_b((v4u32) ret, (v16u8) a, (v16u8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_hadd_adj4_acc_u_w4x_h(v2u64 ret, v8u16 a, v8u16 b)
{ 
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vmult.hadd.adj4.acc.u.w4x.h\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_hadd_adj4_acc_u_w4x_h(__m128i ret, __m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vmult_hadd_adj4_acc_u_w4x_h((v2u64) ret, (v8u16) a, (v8u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_hadd_adj4_acc_u_w4x_w(v2u64 ret, v4u32 a, v4u32 b)
{ 
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vmult.hadd.adj4.acc.u.w4x.w\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_hadd_adj4_acc_u_w4x_w(__m128i ret, __m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vmult_hadd_adj4_acc_u_w4x_w((v2u64) ret, (v4u32) a, (v4u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u32 __builtin_msa2_vmult_hadd_adj4_acc_us_w4x_b(v4u32 ret, v16u8 a, v16i8 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.hadd.adj4.acc.us.w4x.b\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_hadd_adj4_acc_us_w4x_b(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_hadd_adj4_acc_us_w4x_b((v4u32) ret, (v16u8) a, (v16i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_hadd_adj4_acc_us_w4x_h(v2u64 ret, v8u16 a, v8i16 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.hadd.adj4.acc.us.w4x.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_hadd_adj4_acc_us_w4x_h(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_hadd_adj4_acc_us_w4x_h((v2u64) ret, (v8u16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_hadd_adj4_acc_us_w4x_w(v2u64 ret, v4u32 a, v4i32 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.hadd.adj4.acc.us.w4x.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_hadd_adj4_acc_us_w4x_w(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_hadd_adj4_acc_us_w4x_w((v2u64) ret, (v4u32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i16 __builtin_msa2_vmult_even_s_w2x_b(v16i8 a, v16i8 b)
{ 
    v8i16 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.even.s.w2x.b\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_even_s_w2x_b(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_even_s_w2x_b((v16i8) a, (v16i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i32 __builtin_msa2_vmult_even_s_w2x_h(v8i16 a, v8i16 b)
{ 
    v4i32 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.even.s.w2x.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_even_s_w2x_h(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_even_s_w2x_h((v8i16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmult_even_s_w2x_w(v4i32 a, v4i32 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.even.s.w2x.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_even_s_w2x_w(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_even_s_w2x_w((v4i32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmult_even_s_w2x_d(v2i64 a, v2i64 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.even.s.w2x.d\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_even_s_w2x_d(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_even_s_w2x_d((v2i64) a, (v2i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u16 __builtin_msa2_vmult_even_u_w2x_b(v16u8 a, v16u8 b)
{ 
    v8u16 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vmult.even.u.w2x.b\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_even_u_w2x_b(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vmult_even_u_w2x_b((v16u8) a, (v16u8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u32 __builtin_msa2_vmult_even_u_w2x_h(v8u16 a, v8u16 b)
{ 
    v4u32 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vmult.even.u.w2x.h\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_even_u_w2x_h(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vmult_even_u_w2x_h((v8u16) a, (v8u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_even_u_w2x_w(v4u32 a, v4u32 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vmult.even.u.w2x.w\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_even_u_w2x_w(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vmult_even_u_w2x_w((v4u32) a, (v4u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_even_u_w2x_d(v2u64 a, v2u64 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vmult.even.u.w2x.d\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_even_u_w2x_d(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vmult_even_u_w2x_d((v2u64) a, (v2u64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u16 __builtin_msa2_vmult_even_us_w2x_b(v16u8 a, v16i8 b)
{ 
    v8u16 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.even.us.w2x.b\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_even_us_w2x_b(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_even_us_w2x_b((v16u8) a, (v16i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u32 __builtin_msa2_vmult_even_us_w2x_h(v8u16 a, v8i16 b)
{ 
    v4u32 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.even.us.w2x.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_even_us_w2x_h(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_even_us_w2x_h((v8u16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_even_us_w2x_w(v4u32 a, v4i32 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.even.us.w2x.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_even_us_w2x_w(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_even_us_w2x_w((v4u32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_even_us_w2x_d(v2u64 a, v2i64 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.even.us.w2x.d\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_even_us_w2x_d(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_even_us_w2x_d((v2u64) a, (v2i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i16 __builtin_msa2_vmult_odd_s_w2x_b(v16i8 a, v16i8 b)
{ 
    v8i16 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.odd.s.w2x.b\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_odd_s_w2x_b(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_odd_s_w2x_b((v16i8) a, (v16i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i32 __builtin_msa2_vmult_odd_s_w2x_h(v8i16 a, v8i16 b)
{ 
    v4i32 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.odd.s.w2x.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_odd_s_w2x_h(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_odd_s_w2x_h((v8i16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmult_odd_s_w2x_w(v4i32 a, v4i32 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.odd.s.w2x.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_odd_s_w2x_w(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_odd_s_w2x_w((v4i32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmult_odd_s_w2x_d(v2i64 a, v2i64 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.odd.s.w2x.d\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_odd_s_w2x_d(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_odd_s_w2x_d((v2i64) a, (v2i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u16 __builtin_msa2_vmult_odd_u_w2x_b(v16u8 a, v16u8 b)
{ 
    v8u16 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vmult.odd.u.w2x.b\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_odd_u_w2x_b(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vmult_odd_u_w2x_b((v16u8) a, (v16u8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u32 __builtin_msa2_vmult_odd_u_w2x_h(v8u16 a, v8u16 b)
{ 
    v4u32 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vmult.odd.u.w2x.h\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_odd_u_w2x_h(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vmult_odd_u_w2x_h((v8u16) a, (v8u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_odd_u_w2x_w(v4u32 a, v4u32 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vmult.odd.u.w2x.w\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_odd_u_w2x_w(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vmult_odd_u_w2x_w((v4u32) a, (v4u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_odd_u_w2x_d(v2u64 a, v2u64 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vmult.odd.u.w2x.d\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_odd_u_w2x_d(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vmult_odd_u_w2x_d((v2u64) a, (v2u64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u16 __builtin_msa2_vmult_odd_us_w2x_b(v16u8 a, v16i8 b)
{ 
    v8u16 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.odd.us.w2x.b\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_odd_us_w2x_b(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_odd_us_w2x_b((v16u8) a, (v16i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u32 __builtin_msa2_vmult_odd_us_w2x_h(v8u16 a, v8i16 b)
{ 
    v4u32 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.odd.us.w2x.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_odd_us_w2x_h(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_odd_us_w2x_h((v8u16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_odd_us_w2x_w(v4u32 a, v4i32 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.odd.us.w2x.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_odd_us_w2x_w(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_odd_us_w2x_w((v4u32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_odd_us_w2x_d(v2u64 a, v2i64 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.odd.us.w2x.d\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_odd_us_w2x_d(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_odd_us_w2x_d((v2u64) a, (v2i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i16 __builtin_msa2_vmult_even_acc_s_w2x_b(v8i16 ret, v16i8 a, v16i8 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.even.acc.s.w2x.b\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_even_acc_s_w2x_b(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_even_acc_s_w2x_b((v8i16) ret, (v16i8) a, (v16i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i32 __builtin_msa2_vmult_even_acc_s_w2x_h(v4i32 ret, v8i16 a, v8i16 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.even.acc.s.w2x.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_even_acc_s_w2x_h(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_even_acc_s_w2x_h((v4i32) ret, (v8i16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmult_even_acc_s_w2x_w(v2i64 ret, v4i32 a, v4i32 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.even.acc.s.w2x.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_even_acc_s_w2x_w(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_even_acc_s_w2x_w((v2i64) ret, (v4i32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmult_even_acc_s_w2x_d(v2i64 ret, v2i64 a, v2i64 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.even.acc.s.w2x.d\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_even_acc_s_w2x_d(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_even_acc_s_w2x_d((v2i64) ret, (v2i64) a, (v2i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u16 __builtin_msa2_vmult_even_acc_u_w2x_b(v8u16 ret, v16u8 a, v16u8 b)
{ 
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vmult.even.acc.u.w2x.b\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_even_acc_u_w2x_b(__m128i ret, __m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vmult_even_acc_u_w2x_b((v8u16) ret, (v16u8) a, (v16u8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u32 __builtin_msa2_vmult_even_acc_u_w2x_h(v4u32 ret, v8u16 a, v8u16 b)
{ 
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vmult.even.acc.u.w2x.h\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_even_acc_u_w2x_h(__m128i ret, __m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vmult_even_acc_u_w2x_h((v4u32) ret, (v8u16) a, (v8u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_even_acc_u_w2x_w(v2u64 ret, v4u32 a, v4u32 b)
{ 
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vmult.even.acc.u.w2x.w\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_even_acc_u_w2x_w(__m128i ret, __m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vmult_even_acc_u_w2x_w((v2u64) ret, (v4u32) a, (v4u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_even_acc_u_w2x_d(v2u64 ret, v2u64 a, v2u64 b)
{ 
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vmult.even.acc.u.w2x.d\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_even_acc_u_w2x_d(__m128i ret, __m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vmult_even_acc_u_w2x_d((v2u64) ret, (v2u64) a, (v2u64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u16 __builtin_msa2_vmult_even_acc_us_w2x_b(v8u16 ret, v16u8 a, v16i8 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.even.acc.us.w2x.b\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_even_acc_us_w2x_b(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_even_acc_us_w2x_b((v8u16) ret, (v16u8) a, (v16i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u32 __builtin_msa2_vmult_even_acc_us_w2x_h(v4u32 ret, v8u16 a, v8i16 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.even.acc.us.w2x.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_even_acc_us_w2x_h(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_even_acc_us_w2x_h((v4u32) ret, (v8u16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_even_acc_us_w2x_w(v2u64 ret, v4u32 a, v4i32 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.even.acc.us.w2x.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_even_acc_us_w2x_w(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_even_acc_us_w2x_w((v2u64) ret, (v4u32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_even_acc_us_w2x_d(v2u64 ret, v2u64 a, v2i64 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.even.acc.us.w2x.d\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_even_acc_us_w2x_d(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_even_acc_us_w2x_d((v2u64) ret, (v2u64) a, (v2i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i16 __builtin_msa2_vmult_odd_acc_s_w2x_b(v8i16 ret, v16i8 a, v16i8 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.odd.acc.s.w2x.b\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_odd_acc_s_w2x_b(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_odd_acc_s_w2x_b((v8i16) ret, (v16i8) a, (v16i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i32 __builtin_msa2_vmult_odd_acc_s_w2x_h(v4i32 ret, v8i16 a, v8i16 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.odd.acc.s.w2x.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_odd_acc_s_w2x_h(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_odd_acc_s_w2x_h((v4i32) ret, (v8i16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmult_odd_acc_s_w2x_w(v2i64 ret, v4i32 a, v4i32 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.odd.acc.s.w2x.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_odd_acc_s_w2x_w(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_odd_acc_s_w2x_w((v2i64) ret, (v4i32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmult_odd_acc_s_w2x_d(v2i64 ret, v2i64 a, v2i64 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.odd.acc.s.w2x.d\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_odd_acc_s_w2x_d(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_odd_acc_s_w2x_d((v2i64) ret, (v2i64) a, (v2i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u16 __builtin_msa2_vmult_odd_acc_u_w2x_b(v8u16 ret, v16u8 a, v16u8 b)
{ 
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vmult.odd.acc.u.w2x.b\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_odd_acc_u_w2x_b(__m128i ret, __m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vmult_odd_acc_u_w2x_b((v8u16) ret, (v16u8) a, (v16u8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u32 __builtin_msa2_vmult_odd_acc_u_w2x_h(v4u32 ret, v8u16 a, v8u16 b)
{ 
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vmult.odd.acc.u.w2x.h\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_odd_acc_u_w2x_h(__m128i ret, __m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vmult_odd_acc_u_w2x_h((v4u32) ret, (v8u16) a, (v8u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_odd_acc_u_w2x_w(v2u64 ret, v4u32 a, v4u32 b)
{ 
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vmult.odd.acc.u.w2x.w\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_odd_acc_u_w2x_w(__m128i ret, __m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vmult_odd_acc_u_w2x_w((v2u64) ret, (v4u32) a, (v4u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_odd_acc_u_w2x_d(v2u64 ret, v2u64 a, v2u64 b)
{ 
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vmult.odd.acc.u.w2x.d\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_odd_acc_u_w2x_d(__m128i ret, __m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vmult_odd_acc_u_w2x_d((v2u64) ret, (v2u64) a, (v2u64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u16 __builtin_msa2_vmult_odd_acc_us_w2x_b(v8u16 ret, v16u8 a, v16i8 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.odd.acc.us.w2x.b\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_odd_acc_us_w2x_b(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_odd_acc_us_w2x_b((v8u16) ret, (v16u8) a, (v16i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u32 __builtin_msa2_vmult_odd_acc_us_w2x_h(v4u32 ret, v8u16 a, v8i16 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.odd.acc.us.w2x.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_odd_acc_us_w2x_h(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_odd_acc_us_w2x_h((v4u32) ret, (v8u16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_odd_acc_us_w2x_w(v2u64 ret, v4u32 a, v4i32 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.odd.acc.us.w2x.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_odd_acc_us_w2x_w(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_odd_acc_us_w2x_w((v2u64) ret, (v4u32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_odd_acc_us_w2x_d(v2u64 ret, v2u64 a, v2i64 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.odd.acc.us.w2x.d\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_odd_acc_us_w2x_d(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_odd_acc_us_w2x_d((v2u64) ret, (v2u64) a, (v2i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i16 __builtin_msa2_vmult_lo_s_w2x_b(v16i8 a, v16i8 b)
{ 
    v8i16 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.lo.s.w2x.b\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_lo_s_w2x_b(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_lo_s_w2x_b((v16i8) a, (v16i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i32 __builtin_msa2_vmult_lo_s_w2x_h(v8i16 a, v8i16 b)
{ 
    v4i32 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.lo.s.w2x.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_lo_s_w2x_h(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_lo_s_w2x_h((v8i16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmult_lo_s_w2x_w(v4i32 a, v4i32 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.lo.s.w2x.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_lo_s_w2x_w(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_lo_s_w2x_w((v4i32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmult_lo_s_w2x_d(v2i64 a, v2i64 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.lo.s.w2x.d\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_lo_s_w2x_d(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_lo_s_w2x_d((v2i64) a, (v2i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u16 __builtin_msa2_vmult_lo_u_w2x_b(v16u8 a, v16u8 b)
{ 
    v8u16 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vmult.lo.u.w2x.b\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_lo_u_w2x_b(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vmult_lo_u_w2x_b((v16u8) a, (v16u8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u32 __builtin_msa2_vmult_lo_u_w2x_h(v8u16 a, v8u16 b)
{ 
    v4u32 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vmult.lo.u.w2x.h\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_lo_u_w2x_h(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vmult_lo_u_w2x_h((v8u16) a, (v8u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_lo_u_w2x_w(v4u32 a, v4u32 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vmult.lo.u.w2x.w\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_lo_u_w2x_w(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vmult_lo_u_w2x_w((v4u32) a, (v4u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_lo_u_w2x_d(v2u64 a, v2u64 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vmult.lo.u.w2x.d\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_lo_u_w2x_d(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vmult_lo_u_w2x_d((v2u64) a, (v2u64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u16 __builtin_msa2_vmult_lo_us_w2x_b(v16u8 a, v16i8 b)
{ 
    v8u16 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.lo.us.w2x.b\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_lo_us_w2x_b(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_lo_us_w2x_b((v16u8) a, (v16i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u32 __builtin_msa2_vmult_lo_us_w2x_h(v8u16 a, v8i16 b)
{ 
    v4u32 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.lo.us.w2x.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_lo_us_w2x_h(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_lo_us_w2x_h((v8u16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_lo_us_w2x_w(v4u32 a, v4i32 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.lo.us.w2x.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_lo_us_w2x_w(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_lo_us_w2x_w((v4u32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_lo_us_w2x_d(v2u64 a, v2i64 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.lo.us.w2x.d\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_lo_us_w2x_d(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_lo_us_w2x_d((v2u64) a, (v2i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i16 __builtin_msa2_vmult_hi_s_w2x_b(v16i8 a, v16i8 b)
{ 
    v8i16 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.hi.s.w2x.b\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_hi_s_w2x_b(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_hi_s_w2x_b((v16i8) a, (v16i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i32 __builtin_msa2_vmult_hi_s_w2x_h(v8i16 a, v8i16 b)
{ 
    v4i32 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.hi.s.w2x.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_hi_s_w2x_h(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_hi_s_w2x_h((v8i16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmult_hi_s_w2x_w(v4i32 a, v4i32 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.hi.s.w2x.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_hi_s_w2x_w(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_hi_s_w2x_w((v4i32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmult_hi_s_w2x_d(v2i64 a, v2i64 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.hi.s.w2x.d\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_hi_s_w2x_d(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_hi_s_w2x_d((v2i64) a, (v2i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u16 __builtin_msa2_vmult_hi_u_w2x_b(v16u8 a, v16u8 b)
{ 
    v8u16 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vmult.hi.u.w2x.b\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_hi_u_w2x_b(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vmult_hi_u_w2x_b((v16u8) a, (v16u8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u32 __builtin_msa2_vmult_hi_u_w2x_h(v8u16 a, v8u16 b)
{ 
    v4u32 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vmult.hi.u.w2x.h\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_hi_u_w2x_h(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vmult_hi_u_w2x_h((v8u16) a, (v8u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_hi_u_w2x_w(v4u32 a, v4u32 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vmult.hi.u.w2x.w\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_hi_u_w2x_w(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vmult_hi_u_w2x_w((v4u32) a, (v4u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_hi_u_w2x_d(v2u64 a, v2u64 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vmult.hi.u.w2x.d\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_hi_u_w2x_d(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vmult_hi_u_w2x_d((v2u64) a, (v2u64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u16 __builtin_msa2_vmult_hi_us_w2x_b(v16u8 a, v16i8 b)
{ 
    v8u16 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.hi.us.w2x.b\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_hi_us_w2x_b(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_hi_us_w2x_b((v16u8) a, (v16i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u32 __builtin_msa2_vmult_hi_us_w2x_h(v8u16 a, v8i16 b)
{ 
    v4u32 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.hi.us.w2x.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_hi_us_w2x_h(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_hi_us_w2x_h((v8u16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_hi_us_w2x_w(v4u32 a, v4i32 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.hi.us.w2x.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_hi_us_w2x_w(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_hi_us_w2x_w((v4u32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_hi_us_w2x_d(v2u64 a, v2i64 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.hi.us.w2x.d\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_hi_us_w2x_d(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_hi_us_w2x_d((v2u64) a, (v2i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i16 __builtin_msa2_vmult_lo_acc_s_w2x_b(v8i16 ret, v16i8 a, v16i8 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.lo.acc.s.w2x.b\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_lo_acc_s_w2x_b(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_lo_acc_s_w2x_b((v8i16) ret, (v16i8) a, (v16i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i32 __builtin_msa2_vmult_lo_acc_s_w2x_h(v4i32 ret, v8i16 a, v8i16 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.lo.acc.s.w2x.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_lo_acc_s_w2x_h(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_lo_acc_s_w2x_h((v4i32) ret, (v8i16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmult_lo_acc_s_w2x_w(v2i64 ret, v4i32 a, v4i32 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.lo.acc.s.w2x.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_lo_acc_s_w2x_w(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_lo_acc_s_w2x_w((v2i64) ret, (v4i32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmult_lo_acc_s_w2x_d(v2i64 ret, v2i64 a, v2i64 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.lo.acc.s.w2x.d\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_lo_acc_s_w2x_d(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_lo_acc_s_w2x_d((v2i64) ret, (v2i64) a, (v2i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u16 __builtin_msa2_vmult_lo_acc_u_w2x_b(v8u16 ret, v16u8 a, v16u8 b)
{ 
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vmult.lo.acc.u.w2x.b\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_lo_acc_u_w2x_b(__m128i ret, __m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vmult_lo_acc_u_w2x_b((v8u16) ret, (v16u8) a, (v16u8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u32 __builtin_msa2_vmult_lo_acc_u_w2x_h(v4u32 ret, v8u16 a, v8u16 b)
{ 
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vmult.lo.acc.u.w2x.h\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_lo_acc_u_w2x_h(__m128i ret, __m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vmult_lo_acc_u_w2x_h((v4u32) ret, (v8u16) a, (v8u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_lo_acc_u_w2x_w(v2u64 ret, v4u32 a, v4u32 b)
{ 
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vmult.lo.acc.u.w2x.w\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_lo_acc_u_w2x_w(__m128i ret, __m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vmult_lo_acc_u_w2x_w((v2u64) ret, (v4u32) a, (v4u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_lo_acc_u_w2x_d(v2u64 ret, v2u64 a, v2u64 b)
{ 
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vmult.lo.acc.u.w2x.d\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_lo_acc_u_w2x_d(__m128i ret, __m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vmult_lo_acc_u_w2x_d((v2u64) ret, (v2u64) a, (v2u64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u16 __builtin_msa2_vmult_lo_acc_us_w2x_b(v8u16 ret, v16u8 a, v16i8 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.lo.acc.us.w2x.b\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_lo_acc_us_w2x_b(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_lo_acc_us_w2x_b((v8u16) ret, (v16u8) a, (v16i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u32 __builtin_msa2_vmult_lo_acc_us_w2x_h(v4u32 ret, v8u16 a, v8i16 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.lo.acc.us.w2x.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_lo_acc_us_w2x_h(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_lo_acc_us_w2x_h((v4u32) ret, (v8u16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_lo_acc_us_w2x_w(v2u64 ret, v4u32 a, v4i32 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.lo.acc.us.w2x.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_lo_acc_us_w2x_w(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_lo_acc_us_w2x_w((v2u64) ret, (v4u32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_lo_acc_us_w2x_d(v2u64 ret, v2u64 a, v2i64 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.lo.acc.us.w2x.d\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_lo_acc_us_w2x_d(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_lo_acc_us_w2x_d((v2u64) ret, (v2u64) a, (v2i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i16 __builtin_msa2_vmult_hi_acc_s_w2x_b(v8i16 ret, v16i8 a, v16i8 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.hi.acc.s.w2x.b\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_hi_acc_s_w2x_b(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_hi_acc_s_w2x_b((v8i16) ret, (v16i8) a, (v16i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i32 __builtin_msa2_vmult_hi_acc_s_w2x_h(v4i32 ret, v8i16 a, v8i16 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.hi.acc.s.w2x.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_hi_acc_s_w2x_h(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_hi_acc_s_w2x_h((v4i32) ret, (v8i16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmult_hi_acc_s_w2x_w(v2i64 ret, v4i32 a, v4i32 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.hi.acc.s.w2x.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_hi_acc_s_w2x_w(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_hi_acc_s_w2x_w((v2i64) ret, (v4i32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmult_hi_acc_s_w2x_d(v2i64 ret, v2i64 a, v2i64 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.hi.acc.s.w2x.d\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_hi_acc_s_w2x_d(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_hi_acc_s_w2x_d((v2i64) ret, (v2i64) a, (v2i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u16 __builtin_msa2_vmult_hi_acc_u_w2x_b(v8u16 ret, v16u8 a, v16u8 b)
{ 
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vmult.hi.acc.u.w2x.b\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_hi_acc_u_w2x_b(__m128i ret, __m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vmult_hi_acc_u_w2x_b((v8u16) ret, (v16u8) a, (v16u8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u32 __builtin_msa2_vmult_hi_acc_u_w2x_h(v4u32 ret, v8u16 a, v8u16 b)
{ 
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vmult.hi.acc.u.w2x.h\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_hi_acc_u_w2x_h(__m128i ret, __m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vmult_hi_acc_u_w2x_h((v4u32) ret, (v8u16) a, (v8u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_hi_acc_u_w2x_w(v2u64 ret, v4u32 a, v4u32 b)
{ 
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vmult.hi.acc.u.w2x.w\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_hi_acc_u_w2x_w(__m128i ret, __m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vmult_hi_acc_u_w2x_w((v2u64) ret, (v4u32) a, (v4u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_hi_acc_u_w2x_d(v2u64 ret, v2u64 a, v2u64 b)
{ 
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vmult.hi.acc.u.w2x.d\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_hi_acc_u_w2x_d(__m128i ret, __m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vmult_hi_acc_u_w2x_d((v2u64) ret, (v2u64) a, (v2u64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u16 __builtin_msa2_vmult_hi_acc_us_w2x_b(v8u16 ret, v16u8 a, v16i8 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.hi.acc.us.w2x.b\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_hi_acc_us_w2x_b(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_hi_acc_us_w2x_b((v8u16) ret, (v16u8) a, (v16i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u32 __builtin_msa2_vmult_hi_acc_us_w2x_h(v4u32 ret, v8u16 a, v8i16 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.hi.acc.us.w2x.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_hi_acc_us_w2x_h(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_hi_acc_us_w2x_h((v4u32) ret, (v8u16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_hi_acc_us_w2x_w(v2u64 ret, v4u32 a, v4i32 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.hi.acc.us.w2x.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_hi_acc_us_w2x_w(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_hi_acc_us_w2x_w((v2u64) ret, (v4u32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vmult_hi_acc_us_w2x_d(v2u64 ret, v2u64 a, v2i64 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmult.hi.acc.us.w2x.d\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmult_hi_acc_us_w2x_d(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmult_hi_acc_us_w2x_d((v2u64) ret, (v2u64) a, (v2i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmultc_im_haddc_adjc2_s_w4x_w(v4i32 a, v4i32 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmultc.im.haddc.adjc2.s.w4x.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmultc_im_haddc_adjc2_s_w4x_w(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmultc_im_haddc_adjc2_s_w4x_w((v4i32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmultc_im_haddc_adjc2_acc_s_w4x_w(v2i64 ret, v4i32 a, v4i32 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmultc.im.haddc.adjc2.acc.s.w4x.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmultc_im_haddc_adjc2_acc_s_w4x_w(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmultc_im_haddc_adjc2_acc_s_w4x_w((v2i64) ret, (v4i32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmultc_im_haddc_adjc4_s_w4x_h(v8i16 a, v8i16 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmultc.im.haddc.adjc4.s.w4x.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmultc_im_haddc_adjc4_s_w4x_h(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmultc_im_haddc_adjc4_s_w4x_h((v8i16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmultc_im_haddc_adjc4_acc_s_w4x_h(v2i64 ret, v8i16 a, v8i16 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmultc.im.haddc.adjc4.acc.s.w4x.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmultc_im_haddc_adjc4_acc_s_w4x_h(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmultc_im_haddc_adjc4_acc_s_w4x_h((v2i64) ret, (v8i16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmultc_re_haddc_adjc2_s_w4x_w(v4i32 a, v4i32 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmultc.re.haddc.adjc2.s.w4x.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmultc_re_haddc_adjc2_s_w4x_w(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmultc_re_haddc_adjc2_s_w4x_w((v4i32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmultc_re_haddc_adjc2_acc_s_w4x_w(v2i64 ret, v4i32 a, v4i32 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmultc.re.haddc.adjc2.acc.s.w4x.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmultc_re_haddc_adjc2_acc_s_w4x_w(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmultc_re_haddc_adjc2_acc_s_w4x_w((v2i64) ret, (v4i32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmultc_re_haddc_adjc4_s_w4x_h(v8i16 a, v8i16 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmultc.re.haddc.adjc4.s.w4x.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmultc_re_haddc_adjc4_s_w4x_h(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmultc_re_haddc_adjc4_s_w4x_h((v8i16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmultc_re_haddc_adjc4_acc_s_w4x_h(v2i64 ret, v8i16 a, v8i16 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmultc.re.haddc.adjc4.acc.s.w4x.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmultc_re_haddc_adjc4_acc_s_w4x_h(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmultc_re_haddc_adjc4_acc_s_w4x_h((v2i64) ret, (v8i16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmultp_hxor_adj2_w2x_d(v2i64 a, v2i64 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmultp.hxor.adj2.w2x.d\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmultp_hxor_adj2_w2x_d(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmultp_hxor_adj2_w2x_d((v2i64) a, (v2i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmultp_hxor_adj2_xacc_w2x_d(v2i64 ret, v2i64 a, v2i64 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmultp.hxor.adj2.xacc.w2x.d\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmultp_hxor_adj2_xacc_w2x_d(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmultp_hxor_adj2_xacc_w2x_d((v2i64) ret, (v2i64) a, (v2i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i16 __builtin_msa2_vmultp_lo_w2x_b(v16i8 a, v16i8 b)
{ 
    v8i16 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmultp.lo.w2x.b\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmultp_lo_w2x_b(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmultp_lo_w2x_b((v16i8) a, (v16i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i32 __builtin_msa2_vmultp_lo_w2x_h(v8i16 a, v8i16 b)
{ 
    v4i32 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmultp.lo.w2x.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmultp_lo_w2x_h(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmultp_lo_w2x_h((v8i16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmultp_lo_w2x_w(v4i32 a, v4i32 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmultp.lo.w2x.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmultp_lo_w2x_w(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmultp_lo_w2x_w((v4i32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmultp_lo_w2x_d(v2i64 a, v2i64 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmultp.lo.w2x.d\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmultp_lo_w2x_d(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmultp_lo_w2x_d((v2i64) a, (v2i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i16 __builtin_msa2_vmultp_hi_w2x_b(v16i8 a, v16i8 b)
{ 
    v8i16 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmultp.hi.w2x.b\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmultp_hi_w2x_b(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmultp_hi_w2x_b((v16i8) a, (v16i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i32 __builtin_msa2_vmultp_hi_w2x_h(v8i16 a, v8i16 b)
{ 
    v4i32 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmultp.hi.w2x.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmultp_hi_w2x_h(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmultp_hi_w2x_h((v8i16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmultp_hi_w2x_w(v4i32 a, v4i32 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmultp.hi.w2x.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmultp_hi_w2x_w(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmultp_hi_w2x_w((v4i32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmultp_hi_w2x_d(v2i64 a, v2i64 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmultp.hi.w2x.d\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmultp_hi_w2x_d(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmultp_hi_w2x_d((v2i64) a, (v2i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i16 __builtin_msa2_vmultp_lo_xacc_w2x_b(v8i16 ret, v16i8 a, v16i8 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmultp.lo.xacc.w2x.b\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmultp_lo_xacc_w2x_b(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmultp_lo_xacc_w2x_b((v8i16) ret, (v16i8) a, (v16i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i32 __builtin_msa2_vmultp_lo_xacc_w2x_h(v4i32 ret, v8i16 a, v8i16 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmultp.lo.xacc.w2x.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmultp_lo_xacc_w2x_h(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmultp_lo_xacc_w2x_h((v4i32) ret, (v8i16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmultp_lo_xacc_w2x_w(v2i64 ret, v4i32 a, v4i32 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmultp.lo.xacc.w2x.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmultp_lo_xacc_w2x_w(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmultp_lo_xacc_w2x_w((v2i64) ret, (v4i32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmultp_lo_xacc_w2x_d(v2i64 ret, v2i64 a, v2i64 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmultp.lo.xacc.w2x.d\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmultp_lo_xacc_w2x_d(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmultp_lo_xacc_w2x_d((v2i64) ret, (v2i64) a, (v2i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i16 __builtin_msa2_vmultp_hi_xacc_w2x_b(v8i16 ret, v16i8 a, v16i8 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmultp.hi.xacc.w2x.b\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmultp_hi_xacc_w2x_b(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmultp_hi_xacc_w2x_b((v8i16) ret, (v16i8) a, (v16i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i32 __builtin_msa2_vmultp_hi_xacc_w2x_h(v4i32 ret, v8i16 a, v8i16 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmultp.hi.xacc.w2x.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmultp_hi_xacc_w2x_h(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmultp_hi_xacc_w2x_h((v4i32) ret, (v8i16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmultp_hi_xacc_w2x_w(v2i64 ret, v4i32 a, v4i32 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmultp.hi.xacc.w2x.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmultp_hi_xacc_w2x_w(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmultp_hi_xacc_w2x_w((v2i64) ret, (v4i32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vmultp_hi_xacc_w2x_d(v2i64 ret, v2i64 a, v2i64 b)
{ 
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vmultp.hi.xacc.w2x.d\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vmultp_hi_xacc_w2x_d(__m128i ret, __m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vmultp_hi_xacc_w2x_d((v2i64) ret, (v2i64) a, (v2i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vsub_el0_s_wx_h(v8i16 a, v8i16 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vsub.el0.s.wx.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vsub_el0_s_wx_h(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vsub_el0_s_wx_h((v8i16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vsub_el0_s_wx_w(v4i32 a, v4i32 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vsub.el0.s.wx.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vsub_el0_s_wx_w(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vsub_el0_s_wx_w((v4i32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vsub_el0_s_wx_d(v2i64 a, v2i64 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vsub.el0.s.wx.d\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vsub_el0_s_wx_d(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vsub_el0_s_wx_d((v2i64) a, (v2i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vsub_el0_u_wx_h(v8u16 a, v8u16 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vsub.el0.u.wx.h\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vsub_el0_u_wx_h(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vsub_el0_u_wx_h((v8u16) a, (v8u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vsub_el0_u_wx_w(v4u32 a, v4u32 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vsub.el0.u.wx.w\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vsub_el0_u_wx_w(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vsub_el0_u_wx_w((v4u32) a, (v4u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vsub_el0_u_wx_d(v2u64 a, v2u64 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vsub.el0.u.wx.d\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vsub_el0_u_wx_d(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vsub_el0_u_wx_d((v2u64) a, (v2u64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i16 __builtin_msa2_vsub_even_s_w2x_b(v16i8 a, v16i8 b)
{ 
    v8i16 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vsub.even.s.w2x.b\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vsub_even_s_w2x_b(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vsub_even_s_w2x_b((v16i8) a, (v16i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i32 __builtin_msa2_vsub_even_s_w2x_h(v8i16 a, v8i16 b)
{ 
    v4i32 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vsub.even.s.w2x.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vsub_even_s_w2x_h(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vsub_even_s_w2x_h((v8i16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vsub_even_s_w2x_w(v4i32 a, v4i32 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vsub.even.s.w2x.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vsub_even_s_w2x_w(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vsub_even_s_w2x_w((v4i32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vsub_even_s_w2x_d(v2i64 a, v2i64 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vsub.even.s.w2x.d\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vsub_even_s_w2x_d(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vsub_even_s_w2x_d((v2i64) a, (v2i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u16 __builtin_msa2_vsub_even_u_w2x_b(v16u8 a, v16u8 b)
{ 
    v8u16 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vsub.even.u.w2x.b\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vsub_even_u_w2x_b(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vsub_even_u_w2x_b((v16u8) a, (v16u8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u32 __builtin_msa2_vsub_even_u_w2x_h(v8u16 a, v8u16 b)
{ 
    v4u32 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vsub.even.u.w2x.h\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vsub_even_u_w2x_h(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vsub_even_u_w2x_h((v8u16) a, (v8u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vsub_even_u_w2x_w(v4u32 a, v4u32 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vsub.even.u.w2x.w\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vsub_even_u_w2x_w(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vsub_even_u_w2x_w((v4u32) a, (v4u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vsub_even_u_w2x_d(v2u64 a, v2u64 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vsub.even.u.w2x.d\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vsub_even_u_w2x_d(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vsub_even_u_w2x_d((v2u64) a, (v2u64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i16 __builtin_msa2_vsub_odd_s_w2x_b(v16i8 a, v16i8 b)
{ 
    v8i16 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vsub.odd.s.w2x.b\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vsub_odd_s_w2x_b(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vsub_odd_s_w2x_b((v16i8) a, (v16i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i32 __builtin_msa2_vsub_odd_s_w2x_h(v8i16 a, v8i16 b)
{ 
    v4i32 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vsub.odd.s.w2x.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vsub_odd_s_w2x_h(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vsub_odd_s_w2x_h((v8i16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vsub_odd_s_w2x_w(v4i32 a, v4i32 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vsub.odd.s.w2x.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vsub_odd_s_w2x_w(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vsub_odd_s_w2x_w((v4i32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vsub_odd_s_w2x_d(v2i64 a, v2i64 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vsub.odd.s.w2x.d\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vsub_odd_s_w2x_d(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vsub_odd_s_w2x_d((v2i64) a, (v2i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u16 __builtin_msa2_vsub_odd_u_w2x_b(v16u8 a, v16u8 b)
{ 
    v8u16 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vsub.odd.u.w2x.b\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vsub_odd_u_w2x_b(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vsub_odd_u_w2x_b((v16u8) a, (v16u8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u32 __builtin_msa2_vsub_odd_u_w2x_h(v8u16 a, v8u16 b)
{ 
    v4u32 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vsub.odd.u.w2x.h\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vsub_odd_u_w2x_h(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vsub_odd_u_w2x_h((v8u16) a, (v8u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vsub_odd_u_w2x_w(v4u32 a, v4u32 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vsub.odd.u.w2x.w\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vsub_odd_u_w2x_w(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vsub_odd_u_w2x_w((v4u32) a, (v4u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vsub_odd_u_w2x_d(v2u64 a, v2u64 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vsub.odd.u.w2x.d\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vsub_odd_u_w2x_d(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vsub_odd_u_w2x_d((v2u64) a, (v2u64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i16 __builtin_msa2_vsub_lo_s_w2x_b(v16i8 a, v16i8 b)
{ 
    v8i16 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vsub.lo.s.w2x.b\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vsub_lo_s_w2x_b(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vsub_lo_s_w2x_b((v16i8) a, (v16i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i32 __builtin_msa2_vsub_lo_s_w2x_h(v8i16 a, v8i16 b)
{ 
    v4i32 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vsub.lo.s.w2x.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vsub_lo_s_w2x_h(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vsub_lo_s_w2x_h((v8i16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vsub_lo_s_w2x_w(v4i32 a, v4i32 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vsub.lo.s.w2x.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vsub_lo_s_w2x_w(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vsub_lo_s_w2x_w((v4i32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vsub_lo_s_w2x_d(v2i64 a, v2i64 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vsub.lo.s.w2x.d\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vsub_lo_s_w2x_d(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vsub_lo_s_w2x_d((v2i64) a, (v2i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u16 __builtin_msa2_vsub_lo_u_w2x_b(v16u8 a, v16u8 b)
{ 
    v8u16 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vsub.lo.u.w2x.b\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vsub_lo_u_w2x_b(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vsub_lo_u_w2x_b((v16u8) a, (v16u8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u32 __builtin_msa2_vsub_lo_u_w2x_h(v8u16 a, v8u16 b)
{ 
    v4u32 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vsub.lo.u.w2x.h\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vsub_lo_u_w2x_h(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vsub_lo_u_w2x_h((v8u16) a, (v8u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vsub_lo_u_w2x_w(v4u32 a, v4u32 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vsub.lo.u.w2x.w\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vsub_lo_u_w2x_w(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vsub_lo_u_w2x_w((v4u32) a, (v4u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vsub_lo_u_w2x_d(v2u64 a, v2u64 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vsub.lo.u.w2x.d\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vsub_lo_u_w2x_d(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vsub_lo_u_w2x_d((v2u64) a, (v2u64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i16 __builtin_msa2_vsub_hi_s_w2x_b(v16i8 a, v16i8 b)
{ 
    v8i16 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vsub.hi.s.w2x.b\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vsub_hi_s_w2x_b(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vsub_hi_s_w2x_b((v16i8) a, (v16i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i32 __builtin_msa2_vsub_hi_s_w2x_h(v8i16 a, v8i16 b)
{ 
    v4i32 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vsub.hi.s.w2x.h\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vsub_hi_s_w2x_h(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vsub_hi_s_w2x_h((v8i16) a, (v8i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vsub_hi_s_w2x_w(v4i32 a, v4i32 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vsub.hi.s.w2x.w\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vsub_hi_s_w2x_w(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vsub_hi_s_w2x_w((v4i32) a, (v4i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2i64 __builtin_msa2_vsub_hi_s_w2x_d(v2i64 a, v2i64 b)
{ 
    v2i64 ret;
    __asm__ volatile (
        "move.v\t$w0,%w1\n\t"
        "move.v\t$w1,%w2\n\t"
        "vsub.hi.s.w2x.d\t%w0,$w0,$w1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vsub_hi_s_w2x_d(__m128i a, __m128i b)
{
   return (__m128i)__builtin_msa2_vsub_hi_s_w2x_d((v2i64) a, (v2i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u16 __builtin_msa2_vsub_hi_u_w2x_b(v16u8 a, v16u8 b)
{ 
    v8u16 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vsub.hi.u.w2x.b\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vsub_hi_u_w2x_b(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vsub_hi_u_w2x_b((v16u8) a, (v16u8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u32 __builtin_msa2_vsub_hi_u_w2x_h(v8u16 a, v8u16 b)
{ 
    v4u32 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vsub.hi.u.w2x.h\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vsub_hi_u_w2x_h(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vsub_hi_u_w2x_h((v8u16) a, (v8u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vsub_hi_u_w2x_w(v4u32 a, v4u32 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vsub.hi.u.w2x.w\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vsub_hi_u_w2x_w(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vsub_hi_u_w2x_w((v4u32) a, (v4u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v2u64 __builtin_msa2_vsub_hi_u_w2x_d(v2u64 a, v2u64 b)
{ 
    v2u64 ret;
    __asm__ volatile (
        "move.v\t$w1,%w1\n\t"
        "move.v\t$w0,%w2\n\t"
        "vsub.hi.u.w2x.d\t%w0,$w1,$w0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __msa2_vsub_hi_u_w2x_d(__m128i a, __m128i b)
{
    return (__m128i)__builtin_msa2_vsub_hi_u_w2x_d((v2u64) a, (v2u64) b);
}

#endif //__mips_msa
#endif //_MSA2_H
