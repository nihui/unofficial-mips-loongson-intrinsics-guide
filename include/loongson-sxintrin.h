/* MIPS Loongson SX intrinsics include file.

   Copyright (C) 2018 Free Software Foundation, Inc.

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

#ifndef _GCC_LOONGSON_SXINTRIN_H
#define _GCC_LOONGSON_SXINTRIN_H 1

#if defined(__mips_loongson_sx)
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
typedef float v4f32 __attribute__ ((vector_size(16), aligned(16)));
typedef float v4f32_w __attribute__ ((vector_size(16), aligned(4)));
typedef double v2f64 __attribute__ ((vector_size(16), aligned(16)));
typedef double v2f64_d __attribute__ ((vector_size(16), aligned(8)));

typedef long long __m128i __attribute__ ((__vector_size__ (16), __may_alias__));
typedef float __m128 __attribute__ ((__vector_size__ (16), __may_alias__));
typedef double __m128d __attribute__ ((__vector_size__ (16), __may_alias__));


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vandn_v(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vandn_v((v16u8)_1, (v16u8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vabs_b(__m128i _1)
{
	return (__m128i)__builtin_lsx_vabs_b((v16i8)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vabs_h(__m128i _1)
{
	return (__m128i)__builtin_lsx_vabs_h((v8i16)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vabs_w(__m128i _1)
{
	return (__m128i)__builtin_lsx_vabs_w((v4i32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vabs_d(__m128i _1)
{
	return (__m128i)__builtin_lsx_vabs_d((v2i64)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vneg_b(__m128i _1)
{
	return (__m128i)__builtin_lsx_vneg_b((v16i8)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vneg_h(__m128i _1)
{
	return (__m128i)__builtin_lsx_vneg_h((v8i16)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vneg_w(__m128i _1)
{
	return (__m128i)__builtin_lsx_vneg_w((v4i32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vneg_d(__m128i _1)
{
	return (__m128i)__builtin_lsx_vneg_d((v2i64)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vaddx_s_d(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vaddx_s_d((v2i64)_1, (v2i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vaddx_s_w(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vaddx_s_w((v4i32)_1, (v4i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vaddx_s_h(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vaddx_s_h((v8i16)_1, (v8i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vaddx_u_d(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vaddx_u_d((v2u64)_1, (v2u64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vaddx_u_w(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vaddx_u_w((v4u32)_1, (v4u32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vaddx_u_h(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vaddx_u_h((v8u16)_1, (v8u16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsubx_s_d(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsubx_s_d((v2i64)_1, (v2i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsubx_s_w(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsubx_s_w((v4i32)_1, (v4i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsubx_s_h(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsubx_s_h((v8i16)_1, (v8i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsubx_u_d(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsubx_u_d((v2u64)_1, (v2u64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsubx_u_w(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsubx_u_w((v4u32)_1, (v4u32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsubx_u_h(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsubx_u_h((v8u16)_1, (v8u16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vaddxs_s_d(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vaddxs_s_d((v2i64)_1, (v2i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vaddxs_s_w(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vaddxs_s_w((v4i32)_1, (v4i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vaddxs_s_h(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vaddxs_s_h((v8i16)_1, (v8i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vaddxs_u_d(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vaddxs_u_d((v2u64)_1, (v2u64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vaddxs_u_w(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vaddxs_u_w((v4u32)_1, (v4u32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vaddxs_u_h(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vaddxs_u_h((v8u16)_1, (v8u16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsubxs_s_d(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsubxs_s_d((v2i64)_1, (v2i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsubxs_s_w(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsubxs_s_w((v4i32)_1, (v4i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsubxs_s_h(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsubxs_s_h((v8i16)_1, (v8i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsubxs_u_d(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsubxs_u_d((v2u64)_1, (v2u64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsubxs_u_w(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsubxs_u_w((v4u32)_1, (v4u32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsubxs_u_h(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsubxs_u_h((v8u16)_1, (v8u16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsubh_s_d(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsubh_s_d((v2i64)_1, (v2i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsubh_s_w(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsubh_s_w((v4i32)_1, (v4i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsubh_s_h(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsubh_s_h((v8i16)_1, (v8i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsubh_s_b(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsubh_s_b((v16i8)_1, (v16i8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsubh_u_d(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsubh_u_d((v2u64)_1, (v2u64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsubh_u_w(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsubh_u_w((v4u32)_1, (v4u32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsubh_u_h(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsubh_u_h((v8u16)_1, (v8u16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsubh_u_b(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsubh_u_b((v16u8)_1, (v16u8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vacc4b_u_h(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vacc4b_u_h((v16u8)_1, (v16u8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vacc8b_u_d(__m128i _1)
{
	return (__m128i)__builtin_lsx_vacc8b_u_d((v16u8)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vmulhi_s_d(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vmulhi_s_d((v2i64)_1, (v2i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vmulhi_s_w(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vmulhi_s_w((v4i32)_1, (v4i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vmulhi_s_h(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vmulhi_s_h((v8i16)_1, (v8i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vmulhi_s_b(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vmulhi_s_b((v16i8)_1, (v16i8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vmulhi_u_d(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vmulhi_u_d((v2u64)_1, (v2u64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vmulhi_u_w(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vmulhi_u_w((v4u32)_1, (v4u32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vmulhi_u_h(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vmulhi_u_h((v8u16)_1, (v8u16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vmulhi_u_b(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vmulhi_u_b((v16u8)_1, (v16u8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vmulx_s_d(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vmulx_s_d((v4i32)_1, (v4i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vmulx_s_w(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vmulx_s_w((v8i16)_1, (v8i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vmulx_s_h(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vmulx_s_h((v16i8)_1, (v16i8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vmulx_u_d(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vmulx_u_d((v4u32)_1, (v4u32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vmulx_u_w(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vmulx_u_w((v8u16)_1, (v8u16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vmulx_u_h(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vmulx_u_h((v16u8)_1, (v16u8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vextb_s_d(__m128i _1)
{
	return (__m128i)__builtin_lsx_vextb_s_d((v16i8)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vextb_s_w(__m128i _1)
{
	return (__m128i)__builtin_lsx_vextb_s_w((v16i8)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vextb_s_h(__m128i _1)
{
	return (__m128i)__builtin_lsx_vextb_s_h((v16i8)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vexth_s_d(__m128i _1)
{
	return (__m128i)__builtin_lsx_vexth_s_d((v8i16)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vexth_s_w(__m128i _1)
{
	return (__m128i)__builtin_lsx_vexth_s_w((v8i16)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vextw_s_d(__m128i _1)
{
	return (__m128i)__builtin_lsx_vextw_s_d((v4i32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vextb_u_d(__m128i _1)
{
	return (__m128i)__builtin_lsx_vextb_u_d((v16i8)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vextb_u_w(__m128i _1)
{
	return (__m128i)__builtin_lsx_vextb_u_w((v16i8)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vextb_u_h(__m128i _1)
{
	return (__m128i)__builtin_lsx_vextb_u_h((v16i8)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vexth_u_d(__m128i _1)
{
	return (__m128i)__builtin_lsx_vexth_u_d((v8i16)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vexth_u_w(__m128i _1)
{
	return (__m128i)__builtin_lsx_vexth_u_w((v8i16)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vextw_u_d(__m128i _1)
{
	return (__m128i)__builtin_lsx_vextw_u_d((v4i32)_1);
}

#define __lsx_vsllix_s_d(/*__m128i*/ _1, /*unsigned char*/ _2)	((__m128i)__builtin_lsx_vsllix_s_d((v4i32)(_1), (_2)))
#define __lsx_vsllix_s_w(/*__m128i*/ _1, /*unsigned char*/ _2)	((__m128i)__builtin_lsx_vsllix_s_w((v8i16)(_1), (_2)))
#define __lsx_vsllix_s_h(/*__m128i*/ _1, /*unsigned char*/ _2)	((__m128i)__builtin_lsx_vsllix_s_h((v16i8)(_1), (_2)))
#define __lsx_vsllix_u_d(/*__m128i*/ _1, /*unsigned char*/ _2)	((__m128i)__builtin_lsx_vsllix_u_d((v4u32)(_1), (_2)))
#define __lsx_vsllix_u_w(/*__m128i*/ _1, /*unsigned char*/ _2)	((__m128i)__builtin_lsx_vsllix_u_w((v8u16)(_1), (_2)))
#define __lsx_vsllix_u_h(/*__m128i*/ _1, /*unsigned char*/ _2)	((__m128i)__builtin_lsx_vsllix_u_h((v16u8)(_1), (_2)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsran_w(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsran_w((v2i64)_1, (v2i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsran_h(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsran_h((v4i32)_1, (v4i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsran_b(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsran_b((v8i16)_1, (v8i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsrans_s_w(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsrans_s_w((v2i64)_1, (v2i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsrans_s_h(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsrans_s_h((v4i32)_1, (v4i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsrans_s_b(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsrans_s_b((v8i16)_1, (v8i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsrans_u_w(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsrans_u_w((v2u64)_1, (v2u64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsrans_u_h(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsrans_u_h((v4u32)_1, (v4u32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsrans_u_b(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsrans_u_b((v8u16)_1, (v8u16)_2);
}

#define __lsx_vsrain_w(/*__m128i*/ _1, /*unsigned char*/ _2)	((__m128i)__builtin_lsx_vsrain_w((v2i64)(_1), (_2)))
#define __lsx_vsrain_h(/*__m128i*/ _1, /*unsigned char*/ _2)	((__m128i)__builtin_lsx_vsrain_h((v4i32)(_1), (_2)))
#define __lsx_vsrain_b(/*__m128i*/ _1, /*unsigned char*/ _2)	((__m128i)__builtin_lsx_vsrain_b((v8i16)(_1), (_2)))
#define __lsx_vsrains_s_w(/*__m128i*/ _1, /*unsigned char*/ _2)	((__m128i)__builtin_lsx_vsrains_s_w((v2i64)(_1), (_2)))
#define __lsx_vsrains_s_h(/*__m128i*/ _1, /*unsigned char*/ _2)	((__m128i)__builtin_lsx_vsrains_s_h((v4i32)(_1), (_2)))
#define __lsx_vsrains_s_b(/*__m128i*/ _1, /*unsigned char*/ _2)	((__m128i)__builtin_lsx_vsrains_s_b((v8i16)(_1), (_2)))
#define __lsx_vsrains_u_w(/*__m128i*/ _1, /*unsigned char*/ _2)	((__m128i)__builtin_lsx_vsrains_u_w((v2u64)(_1), (_2)))
#define __lsx_vsrains_u_h(/*__m128i*/ _1, /*unsigned char*/ _2)	((__m128i)__builtin_lsx_vsrains_u_h((v4u32)(_1), (_2)))
#define __lsx_vsrains_u_b(/*__m128i*/ _1, /*unsigned char*/ _2)	((__m128i)__builtin_lsx_vsrains_u_b((v8u16)(_1), (_2)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsrarn_w(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsrarn_w((v2i64)_1, (v2i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsrarn_h(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsrarn_h((v4i32)_1, (v4i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsrarn_b(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsrarn_b((v8i16)_1, (v8i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsrarns_s_w(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsrarns_s_w((v2i64)_1, (v2i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsrarns_s_h(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsrarns_s_h((v4i32)_1, (v4i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsrarns_s_b(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsrarns_s_b((v8i16)_1, (v8i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsrarns_u_w(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsrarns_u_w((v2u64)_1, (v2u64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsrarns_u_h(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsrarns_u_h((v4u32)_1, (v4u32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsrarns_u_b(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsrarns_u_b((v8u16)_1, (v8u16)_2);
}

#define __lsx_vsrarin_w(/*__m128i*/ _1, /*unsigned char*/ _2)	((__m128i)__builtin_lsx_vsrarin_w((v2i64)(_1), (_2)))
#define __lsx_vsrarin_h(/*__m128i*/ _1, /*unsigned char*/ _2)	((__m128i)__builtin_lsx_vsrarin_h((v4i32)(_1), (_2)))
#define __lsx_vsrarin_b(/*__m128i*/ _1, /*unsigned char*/ _2)	((__m128i)__builtin_lsx_vsrarin_b((v8i16)(_1), (_2)))
#define __lsx_vsrarins_s_w(/*__m128i*/ _1, /*unsigned char*/ _2)	((__m128i)__builtin_lsx_vsrarins_s_w((v2i64)(_1), (_2)))
#define __lsx_vsrarins_s_h(/*__m128i*/ _1, /*unsigned char*/ _2)	((__m128i)__builtin_lsx_vsrarins_s_h((v4i32)(_1), (_2)))
#define __lsx_vsrarins_s_b(/*__m128i*/ _1, /*unsigned char*/ _2)	((__m128i)__builtin_lsx_vsrarins_s_b((v8i16)(_1), (_2)))
#define __lsx_vsrarins_u_w(/*__m128i*/ _1, /*unsigned char*/ _2)	((__m128i)__builtin_lsx_vsrarins_u_w((v2u64)(_1), (_2)))
#define __lsx_vsrarins_u_h(/*__m128i*/ _1, /*unsigned char*/ _2)	((__m128i)__builtin_lsx_vsrarins_u_h((v4u32)(_1), (_2)))
#define __lsx_vsrarins_u_b(/*__m128i*/ _1, /*unsigned char*/ _2)	((__m128i)__builtin_lsx_vsrarins_u_b((v8u16)(_1), (_2)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsrln_w(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsrln_w((v2i64)_1, (v2i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsrln_h(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsrln_h((v4i32)_1, (v4i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsrln_b(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsrln_b((v8i16)_1, (v8i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsrlns_u_w(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsrlns_u_w((v2u64)_1, (v2u64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsrlns_u_h(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsrlns_u_h((v4u32)_1, (v4u32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsrlns_u_b(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsrlns_u_b((v8u16)_1, (v8u16)_2);
}

#define __lsx_vsrlin_w(/*__m128i*/ _1, /*unsigned char*/ _2)	((__m128i)__builtin_lsx_vsrlin_w((v2i64)(_1), (_2)))
#define __lsx_vsrlin_h(/*__m128i*/ _1, /*unsigned char*/ _2)	((__m128i)__builtin_lsx_vsrlin_h((v4i32)(_1), (_2)))
#define __lsx_vsrlin_b(/*__m128i*/ _1, /*unsigned char*/ _2)	((__m128i)__builtin_lsx_vsrlin_b((v8i16)(_1), (_2)))
#define __lsx_vsrlins_u_w(/*__m128i*/ _1, /*unsigned char*/ _2)	((__m128i)__builtin_lsx_vsrlins_u_w((v2u64)(_1), (_2)))
#define __lsx_vsrlins_u_h(/*__m128i*/ _1, /*unsigned char*/ _2)	((__m128i)__builtin_lsx_vsrlins_u_h((v4u32)(_1), (_2)))
#define __lsx_vsrlins_u_b(/*__m128i*/ _1, /*unsigned char*/ _2)	((__m128i)__builtin_lsx_vsrlins_u_b((v8u16)(_1), (_2)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsrlrn_w(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsrlrn_w((v2i64)_1, (v2i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsrlrn_h(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsrlrn_h((v4i32)_1, (v4i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsrlrn_b(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsrlrn_b((v8i16)_1, (v8i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsrlrns_u_w(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsrlrns_u_w((v2u64)_1, (v2u64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsrlrns_u_h(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsrlrns_u_h((v4u32)_1, (v4u32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsrlrns_u_b(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsrlrns_u_b((v8u16)_1, (v8u16)_2);
}

#define __lsx_vsrlrin_w(/*__m128i*/ _1, /*unsigned char*/ _2)	((__m128i)__builtin_lsx_vsrlrin_w((v2i64)(_1), (_2)))
#define __lsx_vsrlrin_h(/*__m128i*/ _1, /*unsigned char*/ _2)	((__m128i)__builtin_lsx_vsrlrin_h((v4i32)(_1), (_2)))
#define __lsx_vsrlrin_b(/*__m128i*/ _1, /*unsigned char*/ _2)	((__m128i)__builtin_lsx_vsrlrin_b((v8i16)(_1), (_2)))
#define __lsx_vsrlrins_u_w(/*__m128i*/ _1, /*unsigned char*/ _2)	((__m128i)__builtin_lsx_vsrlrins_u_w((v2u64)(_1), (_2)))
#define __lsx_vsrlrins_u_h(/*__m128i*/ _1, /*unsigned char*/ _2)	((__m128i)__builtin_lsx_vsrlrins_u_h((v4u32)(_1), (_2)))
#define __lsx_vsrlrins_u_b(/*__m128i*/ _1, /*unsigned char*/ _2)	((__m128i)__builtin_lsx_vsrlrins_u_b((v8u16)(_1), (_2)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vhminposh_u_d(__m128i _1)
{
	return (__m128i)__builtin_lsx_vhminposh_u_d((v8i16)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vhminposh_u_w(__m128i _1)
{
	return (__m128i)__builtin_lsx_vhminposh_u_w((v8i16)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vhminposh_u_q(__m128i _1)
{
	return (__m128i)__builtin_lsx_vhminposh_u_q((v8i16)_1);
}

#define __lsx_vrorsigni_h(/*__m128i*/ _1, /*__m128i*/ _2, /*unsigned char*/ _3)	((__m128i)__builtin_lsx_vrorsigni_h((v8i16)(_1), (v8i16)(_2), (_3)))
#define __lsx_vrorsigni_b(/*__m128i*/ _1, /*__m128i*/ _2, /*unsigned char*/ _3)	((__m128i)__builtin_lsx_vrorsigni_b((v16i8)(_1), (v16i8)(_2), (_3)))
#define __lsx_vrandsigni_h(/*__m128i*/ _1, /*__m128i*/ _2, /*unsigned char*/ _3)	((__m128i)__builtin_lsx_vrandsigni_h((v8i16)(_1), (v8i16)(_2), (_3)))
#define __lsx_vrandsigni_b(/*__m128i*/ _1, /*__m128i*/ _2, /*unsigned char*/ _3)	((__m128i)__builtin_lsx_vrandsigni_b((v16i8)(_1), (v16i8)(_2), (_3)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vrorsignv_h(__m128i _1, __m128i _2, __m128i _3)
{
	return (__m128i)__builtin_lsx_vrorsignv_h((v8i16)_1, (v8i16)_2, (v8i16)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vrorsignv_b(__m128i _1, __m128i _2, __m128i _3)
{
	return (__m128i)__builtin_lsx_vrorsignv_b((v16i8)_1, (v16i8)_2, (v16i8)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vrandsignv_h(__m128i _1, __m128i _2, __m128i _3)
{
	return (__m128i)__builtin_lsx_vrandsignv_h((v8i16)_1, (v8i16)_2, (v8i16)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vrandsignv_b(__m128i _1, __m128i _2, __m128i _3)
{
	return (__m128i)__builtin_lsx_vrandsignv_b((v16i8)_1, (v16i8)_2, (v16i8)_3);
}

#define __lsx_vfrstii_h(/*__m128i*/ _1, /*__m128i*/ _2, /*unsigned char*/ _3)	((__m128i)__builtin_lsx_vfrstii_h((v8i16)(_1), (v8i16)(_2), (_3)))
#define __lsx_vfrstii_b(/*__m128i*/ _1, /*__m128i*/ _2, /*unsigned char*/ _3)	((__m128i)__builtin_lsx_vfrstii_b((v16i8)(_1), (v16i8)(_2), (_3)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vfrstiv_h(__m128i _1, __m128i _2, __m128i _3)
{
	return (__m128i)__builtin_lsx_vfrstiv_h((v8i16)_1, (v8i16)_2, (v8i16)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vfrstiv_b(__m128i _1, __m128i _2, __m128i _3)
{
	return (__m128i)__builtin_lsx_vfrstiv_b((v16i8)_1, (v16i8)_2, (v16i8)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vfrstm_h(__m128i _1)
{
	return (__m128i)__builtin_lsx_vfrstm_h((v8i16)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vfrstm_b(__m128i _1)
{
	return (__m128i)__builtin_lsx_vfrstm_b((v16i8)_1);
}

#define __lsx_vclrstri_v(/*__m128i*/ _1, /*unsigned char*/ _2)	((__m128i)__builtin_lsx_vclrstri_v((v16i8)(_1), (_2)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vclrstrv_v(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vclrstrv_v((v16i8)_1, (v16i8)_2);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vclrstrr_v(__m128i _1,long int _2)
{
        return (__m128i)__builtin_lsx_vclrstrr_v((v16i8)_1, _2);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vclrtail_h(__m128i _1)
{
	return (__m128i)__builtin_lsx_vclrtail_h((v8i16)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vclrtail_b(__m128i _1)
{
	return (__m128i)__builtin_lsx_vclrtail_b((v16i8)_1);
}

#define __lsx_shf_d(/*__m128i*/ _1, /*__m128i*/ _2, /*unsigned int*/ _3)	((__m128i)__builtin_lsx_shf_d((v2i64)(_1), (v2i64)(_2), (_3)))
#define __lsx_vshufirr_b(/*__m128i*/ _1, /*__m128i*/ _2, /*unsigned int*/ _3)	((__m128i)__builtin_lsx_vshufirr_b((v16i8)(_1), (v16i8)(_2), (_3)))
#define __lsx_vshufirl_b(/*__m128i*/ _1, /*__m128i*/ _2, /*unsigned int*/ _3)	((__m128i)__builtin_lsx_vshufirl_b((v16i8)(_1), (v16i8)(_2), (_3)))
#define __lsx_vshufilr_b(/*__m128i*/ _1, /*__m128i*/ _2, /*unsigned int*/ _3)	((__m128i)__builtin_lsx_vshufilr_b((v16i8)(_1), (v16i8)(_2), (_3)))
#define __lsx_vshufill_b(/*__m128i*/ _1, /*__m128i*/ _2, /*unsigned int*/ _3)	((__m128i)__builtin_lsx_vshufill_b((v16i8)(_1), (v16i8)(_2), (_3)))
#define __lsx_vshufir_h(/*__m128i*/ _1, /*__m128i*/ _2, /*unsigned int*/ _3)	((__m128i)__builtin_lsx_vshufir_h((v8i16)(_1), (v8i16)(_2), (_3)))
#define __lsx_vshufil_h(/*__m128i*/ _1, /*__m128i*/ _2, /*unsigned int*/ _3)	((__m128i)__builtin_lsx_vshufil_h((v8i16)(_1), (v8i16)(_2), (_3)))
#define __lsx_vmepatmsk_v(/*unsigned char*/ _1, /*unsigned char*/ _2)	((__m128i)__builtin_lsx_vmepatmsk_v((_1), (_2)))
#define __lsx_vbsrl_v(/*__m128i*/ _1, /*unsigned char*/ _2)	((__m128i)__builtin_lsx_vbsrl_v((v16i8)(_1), (_2)))
#define __lsx_vbsll_v(/*__m128i*/ _1, /*unsigned char*/ _2)	((__m128i)__builtin_lsx_vbsll_v((v16i8)(_1), (_2)))
#define __lsx_vextrins_d(/*__m128i*/ _1, /*__m128i*/ _2, /*unsigned char*/ _3, /*unsigned char*/ _4)	((__m128i)__builtin_lsx_vextrins_d((v2i64)(_1), (v2i64)(_2), (_3), (_4)))
#define __lsx_vextrins_w(/*__m128i*/ _1, /*__m128i*/ _2, /*unsigned char*/ _3, /*unsigned char*/ _4)	((__m128i)__builtin_lsx_vextrins_w((v4i32)(_1), (v4i32)(_2), (_3), (_4)))
#define __lsx_vextrins_h(/*__m128i*/ _1, /*__m128i*/ _2, /*unsigned char*/ _3, /*unsigned char*/ _4)	((__m128i)__builtin_lsx_vextrins_h((v8i16)(_1), (v8i16)(_2), (_3), (_4)))
#define __lsx_vextrins_b(/*__m128i*/ _1, /*__m128i*/ _2, /*unsigned char*/ _3, /*unsigned char*/ _4)	((__m128i)__builtin_lsx_vextrins_b((v16i8)(_1), (v16i8)(_2), (_3), (_4)))
#define __lsx_vextr_v(/*__m128i*/ _1, /*__m128i*/ _2, /*unsigned char*/ _3)	((__m128i)__builtin_lsx_vextr_v((v16i8)(_1), (v16i8)(_2), (_3)))
#define __lsx_vsel_d(/*__m128i*/ _1, /*__m128i*/ _2, /*unsigned int*/ _3)	((__m128i)__builtin_lsx_vsel_d((v2i64)(_1), (v2i64)(_2), (_3)))
#define __lsx_vsel_w(/*__m128i*/ _1, /*__m128i*/ _2, /*unsigned int*/ _3)	((__m128i)__builtin_lsx_vsel_w((v4i32)(_1), (v4i32)(_2), (_3)))
#define __lsx_vsel_h(/*__m128i*/ _1, /*__m128i*/ _2, /*unsigned int*/ _3)	((__m128i)__builtin_lsx_vsel_h((v8i16)(_1), (v8i16)(_2), (_3)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vgetsign_d(__m128i _1)
{
	return (__m128i)__builtin_lsx_vgetsign_d((v2i64)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vgetsign_w(__m128i _1)
{
	return (__m128i)__builtin_lsx_vgetsign_w((v4i32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vgetsign_h(__m128i _1)
{
	return (__m128i)__builtin_lsx_vgetsign_h((v8i16)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vgetsign_b(__m128i _1)
{
	return (__m128i)__builtin_lsx_vgetsign_b((v16i8)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsignfill_d(__m128i _1)
{
	return (__m128i)__builtin_lsx_vsignfill_d((v2i64)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsignfill_w(__m128i _1)
{
	return (__m128i)__builtin_lsx_vsignfill_w((v4i32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsignfill_h(__m128i _1)
{
	return (__m128i)__builtin_lsx_vsignfill_h((v8i16)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsignfill_b(__m128i _1)
{
	return (__m128i)__builtin_lsx_vsignfill_b((v16i8)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsigncov_d(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsigncov_d((v2i64)_1, (v2i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsigncov_w(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsigncov_w((v4i32)_1, (v4i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsigncov_h(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsigncov_h((v8i16)_1, (v8i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vsigncov_b(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vsigncov_b((v16i8)_1, (v16i8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128 __lsx_vfabs_w(__m128 _1)
{
	return (__m128)__builtin_lsx_vfabs_w((v4f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128d __lsx_vfabs_d(__m128d _1)
{
	return (__m128d)__builtin_lsx_vfabs_d((v2f64)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128 __lsx_vfneg_w(__m128 _1)
{
	return (__m128)__builtin_lsx_vfneg_w((v4f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128d __lsx_vfneg_d(__m128d _1)
{
	return (__m128d)__builtin_lsx_vfneg_d((v2f64)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128d __lsx_vfaddsub_d(__m128d _1, __m128d _2)
{
	return (__m128d)__builtin_lsx_vfaddsub_d((v2f64)_1, (v2f64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128 __lsx_vfaddsub_w(__m128 _1, __m128 _2)
{
	return (__m128)__builtin_lsx_vfaddsub_w((v4f32)_1, (v4f32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128d __lsx_vfsubadd_d(__m128d _1, __m128d _2)
{
	return (__m128d)__builtin_lsx_vfsubadd_d((v2f64)_1, (v2f64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128 __lsx_vfsubadd_w(__m128 _1, __m128 _2)
{
	return (__m128)__builtin_lsx_vfsubadd_w((v4f32)_1, (v4f32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128d __lsx_vfmaddsub_d(__m128d _1, __m128d _2, __m128d _3)
{
	return (__m128d)__builtin_lsx_vfmaddsub_d((v2f64)_1, (v2f64)_2, (v2f64)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128 __lsx_vfmaddsub_w(__m128 _1, __m128 _2, __m128 _3)
{
	return (__m128)__builtin_lsx_vfmaddsub_w((v4f32)_1, (v4f32)_2, (v4f32)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128d __lsx_vfmadd_d(__m128d _1, __m128d _2, __m128d _3)
{
	return (__m128d)__builtin_lsx_vfmadd_d((v2f64)_1, (v2f64)_2, (v2f64)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128 __lsx_vfmadd_w(__m128 _1, __m128 _2, __m128 _3)
{
	return (__m128)__builtin_lsx_vfmadd_w((v4f32)_1, (v4f32)_2, (v4f32)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128d __lsx_vfmsub_d(__m128d _1, __m128d _2, __m128d _3)
{
	return (__m128d)__builtin_lsx_vfmsub_d((v2f64)_1, (v2f64)_2, (v2f64)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128 __lsx_vfmsub_w(__m128 _1, __m128 _2, __m128 _3)
{
	return (__m128)__builtin_lsx_vfmsub_w((v4f32)_1, (v4f32)_2, (v4f32)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128d __lsx_vfnmadd_d(__m128d _1, __m128d _2, __m128d _3)
{
	return (__m128d)__builtin_lsx_vfnmadd_d((v2f64)_1, (v2f64)_2, (v2f64)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128 __lsx_vfnmadd_w(__m128 _1, __m128 _2, __m128 _3)
{
	return (__m128)__builtin_lsx_vfnmadd_w((v4f32)_1, (v4f32)_2, (v4f32)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128d __lsx_vfnmsub_d(__m128d _1, __m128d _2, __m128d _3)
{
	return (__m128d)__builtin_lsx_vfnmsub_d((v2f64)_1, (v2f64)_2, (v2f64)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128 __lsx_vfnmsub_w(__m128 _1, __m128 _2, __m128 _3)
{
	return (__m128)__builtin_lsx_vfnmsub_w((v4f32)_1, (v4f32)_2, (v4f32)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128d __lsx_vfmsubadd_d(__m128d _1, __m128d _2, __m128d _3)
{
	return (__m128d)__builtin_lsx_vfmsubadd_d((v2f64)_1, (v2f64)_2, (v2f64)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128 __lsx_vfmsubadd_w(__m128 _1, __m128 _2, __m128 _3)
{
	return (__m128)__builtin_lsx_vfmsubadd_w((v4f32)_1, (v4f32)_2, (v4f32)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vfround_w(__m128 _1)
{
	return (__m128i)__builtin_lsx_vfround_w((v4f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vfround_d(__m128d _1)
{
	return (__m128i)__builtin_lsx_vfround_d((v2f64)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vfceil_w(__m128 _1)
{
	return (__m128i)__builtin_lsx_vfceil_w((v4f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vfceil_d(__m128d _1)
{
	return (__m128i)__builtin_lsx_vfceil_d((v2f64)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vffloor_w(__m128 _1)
{
	return (__m128i)__builtin_lsx_vffloor_w((v4f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vffloor_d(__m128d _1)
{
	return (__m128i)__builtin_lsx_vffloor_d((v2f64)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vftintdo_w(__m128d _1, __m128d _2)
{
	return (__m128i)__builtin_lsx_vftintdo_w((v2f64)_1, (v2f64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128 __lsx_vffintdo_w(__m128i _1, __m128i _2)
{
	return (__m128)__builtin_lsx_vffintdo_w((v2i64)_1, (v2i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vftruncdo_w(__m128d _1, __m128d _2)
{
	return (__m128i)__builtin_lsx_vftruncdo_w((v2f64)_1, (v2f64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vfceildo_w(__m128d _1, __m128d _2)
{
	return (__m128i)__builtin_lsx_vfceildo_w((v2f64)_1, (v2f64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vffloordo_w(__m128d _1, __m128d _2)
{
	return (__m128i)__builtin_lsx_vffloordo_w((v2f64)_1, (v2f64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vfrounddo_w(__m128d _1, __m128d _2)
{
	return (__m128i)__builtin_lsx_vfrounddo_w((v2f64)_1, (v2f64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vftintupl_d(__m128 _1)
{
	return (__m128i)__builtin_lsx_vftintupl_d((v4f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vftintupr_d(__m128 _1)
{
	return (__m128i)__builtin_lsx_vftintupr_d((v4f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128d __lsx_vffintupl_d(__m128i _1)
{
	return (__m128d)__builtin_lsx_vffintupl_d((v4i32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128d __lsx_vffintupr_d(__m128i _1)
{
	return (__m128d)__builtin_lsx_vffintupr_d((v4i32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vftruncupl_d(__m128 _1)
{
	return (__m128i)__builtin_lsx_vftruncupl_d((v4f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vftruncupr_d(__m128 _1)
{
	return (__m128i)__builtin_lsx_vftruncupr_d((v4f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vfceilupl_d(__m128 _1)
{
	return (__m128i)__builtin_lsx_vfceilupl_d((v4f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vfceilupr_d(__m128 _1)
{
	return (__m128i)__builtin_lsx_vfceilupr_d((v4f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vffloorupl_d(__m128 _1)
{
	return (__m128i)__builtin_lsx_vffloorupl_d((v4f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vffloorupr_d(__m128 _1)
{
	return (__m128i)__builtin_lsx_vffloorupr_d((v4f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vfroundupl_d(__m128 _1)
{
	return (__m128i)__builtin_lsx_vfroundupl_d((v4f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vfroundupr_d(__m128 _1)
{
	return (__m128i)__builtin_lsx_vfroundupr_d((v4f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vfrint_rm00_w(__m128 _1)
{
	return (__m128i)__builtin_lsx_vfrint_rm00_w((v4f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vfrint_rm00_d(__m128d _1)
{
	return (__m128i)__builtin_lsx_vfrint_rm00_d((v2f64)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vfrint_rm01_w(__m128 _1)
{
	return (__m128i)__builtin_lsx_vfrint_rm01_w((v4f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vfrint_rm01_d(__m128d _1)
{
	return (__m128i)__builtin_lsx_vfrint_rm01_d((v2f64)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vfrint_rm10_w(__m128 _1)
{
	return (__m128i)__builtin_lsx_vfrint_rm10_w((v4f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vfrint_rm10_d(__m128d _1)
{
	return (__m128i)__builtin_lsx_vfrint_rm10_d((v2f64)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vfrint_rm11_w(__m128 _1)
{
	return (__m128i)__builtin_lsx_vfrint_rm11_w((v4f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vfrint_rm11_d(__m128d _1)
{
	return (__m128i)__builtin_lsx_vfrint_rm11_d((v2f64)_1);
}

#define __lsx_vseti_d(/*unsigned char*/ _1, /*unsigned int*/ _2)	((__m128i)__builtin_lsx_vseti_d((_1), (_2)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vmulhi_us_w(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vmulhi_us_w((v4i32)_1, (v4i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vmulhi_us_h(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vmulhi_us_h((v8i16)_1, (v8i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vmulhi_us_b(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vmulhi_us_b((v16i8)_1, (v16i8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vselr_d(__m128i _1, __m128i _2, __m128i _3)
{
	return (__m128i)__builtin_lsx_vselr_d((v2i64)_1, (v2i64)_2, (v2i64)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vselr_w(__m128i _1, __m128i _2, __m128i _3)
{
	return (__m128i)__builtin_lsx_vselr_w((v4i32)_1, (v4i32)_2, (v4i32)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vperml_d(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vperml_d((v2i64)_1, (v2i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m128i __lsx_vperml_w(__m128i _1, __m128i _2)
{
	return (__m128i)__builtin_lsx_vperml_w((v4i32)_1, (v4i32)_2);
}

#define __lsx_vblb(/*int*/ _1, /*const volatile void **/ _2)	((__m128i)__builtin_lsx_vblb((_1), (_2)))
#define __lsx_vblh(/*int*/ _1, /*const volatile void **/ _2)	((__m128i)__builtin_lsx_vblh((_1), (_2)))
#define __lsx_vblw(/*int*/ _1, /*const volatile void **/ _2)	((__m128i)__builtin_lsx_vblw((_1), (_2)))
#define __lsx_vbld(/*int*/ _1, /*const volatile void **/ _2)	((__m128i)__builtin_lsx_vbld((_1), (_2)))
#define __lsx_vsb(/*__m128i*/ _1, /*unsigned char*/ _2, /*int*/ _3, /*const volatile void **/ _4)	((void)__builtin_lsx_vsb((v16i8)(_1), (_2), (_3), (_4)))
#define __lsx_vsh(/*__m128i*/ _1, /*unsigned char*/ _2, /*int*/ _3, /*const volatile void **/ _4)	((void)__builtin_lsx_vsh((v8i16)(_1), (_2), (_3), (_4)))
#define __lsx_vsw(/*__m128i*/ _1, /*unsigned char*/ _2, /*int*/ _3, /*const volatile void **/ _4)	((void)__builtin_lsx_vsw((v4i32)(_1), (_2), (_3), (_4)))
#define __lsx_vsd(/*__m128i*/ _1, /*unsigned char*/ _2, /*int*/ _3, /*const volatile void **/ _4)	((void)__builtin_lsx_vsd((v2i64)(_1), (_2), (_3), (_4)))

#endif /* defined(__mips_loongson_sx) */
#endif /* _GCC_LOONGSON_SXINTRIN_H */

