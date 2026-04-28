/* MIPS MSA CRYPTO intrinsics include file.

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

#ifndef _GCC_MSA_CRYPTOINTRIN_H
#define _GCC_MSA_CRYPTOINTRIN_H 1

#if defined(__mips_msa_crypto)

typedef long long v2i64 __attribute__ ((vector_size(16), aligned(16)));

typedef long long __m128i __attribute__ ((__vector_size__ (16), __may_alias__));


extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__crypto_aes128_enc (__m128i __X, __m128i __Y)
{
  return (__m128i) __builtin_crypto_aes128_enc ((v2i64)__X, (v2i64)__Y);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__crypto_aes128_dec (__m128i __X, __m128i __Y)
{
  return (__m128i) __builtin_crypto_aes128_dec ((v2i64)__X, (v2i64)__Y);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__crypto_aes192_enc (__m128i __X, __m128i __Y, __m128i __Z)
{
  return (__m128i) __builtin_crypto_aes192_enc ((v2i64)__X, (v2i64)__Y, (v2i64)__Z);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__crypto_aes192_dec (__m128i __X, __m128i __Y, __m128i __Z)
{
  return (__m128i) __builtin_crypto_aes192_dec ((v2i64)__X, (v2i64)__Y, (v2i64)__Z);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__crypto_aes256_enc (__m128i __X, __m128i __Y, __m128i __Z)
{
  return (__m128i) __builtin_crypto_aes256_enc ((v2i64)__X, (v2i64)__Y, (v2i64)__Z);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__crypto_aes256_dec (__m128i __X, __m128i __Y, __m128i __Z)
{
  return (__m128i) __builtin_crypto_aes256_dec ((v2i64)__X, (v2i64)__Y, (v2i64)__Z);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__crypto_aes_kg (__m128i __X, __m128i __Y)
{
  return (__m128i) __builtin_crypto_aes_kg ((v2i64)__X, (v2i64)__Y);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__crypto_aes_fr_enc (__m128i __X, __m128i __Y)
{
  return (__m128i) __builtin_crypto_aes_fr_enc ((v2i64)__X, (v2i64)__Y);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__crypto_aes_fr_dec (__m128i __X, __m128i __Y)
{
  return (__m128i) __builtin_crypto_aes_fr_dec ((v2i64)__X, (v2i64)__Y);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__crypto_aes_lr_enc (__m128i __X, __m128i __Y)
{
  return (__m128i) __builtin_crypto_aes_lr_enc ((v2i64)__X, (v2i64)__Y);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__crypto_aes_lr_dec (__m128i __X, __m128i __Y)
{
  return (__m128i) __builtin_crypto_aes_lr_dec ((v2i64)__X, (v2i64)__Y);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__crypto_aes_mc_enc (__m128i __X)
{
  return (__m128i) __builtin_crypto_aes_mc_enc ((v2i64)__X);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__crypto_aes_mc_dec (__m128i __X)
{
  return (__m128i) __builtin_crypto_aes_mc_dec ((v2i64)__X);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__crypto_aes_sb_enc (__m128i __X)
{
  return (__m128i) __builtin_crypto_aes_sb_enc ((v2i64)__X);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__crypto_aes_sb_dec (__m128i __X)
{
  return (__m128i) __builtin_crypto_aes_sb_dec ((v2i64)__X);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__crypto_aes_sr_enc (__m128i __X)
{
  return (__m128i) __builtin_crypto_aes_sr_enc ((v2i64)__X);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__crypto_aes_sr_dec (__m128i __X)
{
  return (__m128i) __builtin_crypto_aes_sr_dec ((v2i64)__X);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__crypto_md5_ms (__m128i __X, __m128i __Y, __m128i __Z)
{
  return (__m128i) __builtin_crypto_md5_ms ((v2i64)__X, (v2i64)__Y, (v2i64)__Z);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__crypto_md5_4r (__m128i __X, __m128i __Y, __m128i __Z)
{
  return (__m128i) __builtin_crypto_md5_4r ((v2i64)__X, (v2i64)__Y, (v2i64)__Z);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__crypto_sha1_ms_1 (__m128i __X, __m128i __Y, __m128i __Z)
{
  return (__m128i) __builtin_crypto_sha1_ms_1 ((v2i64)__X, (v2i64)__Y, (v2i64)__Z);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__crypto_sha1_ms_2 (__m128i __X, __m128i __Y)
{
  return (__m128i) __builtin_crypto_sha1_ms_2 ((v2i64)__X, (v2i64)__Y);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__crypto_sha1_hash_4r (__m128i __X, __m128i __Y, __m128i __Z)
{
  return (__m128i) __builtin_crypto_sha1_hash_4r ((v2i64)__X, (v2i64)__Y, (v2i64)__Z);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__crypto_sha256_ms_1 (__m128i __X, __m128i __Y)
{
  return (__m128i) __builtin_crypto_sha256_ms_1 ((v2i64)__X, (v2i64)__Y);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__crypto_sha256_ms_2 (__m128i __X, __m128i __Y)
{
  return (__m128i) __builtin_crypto_sha256_ms_2 ((v2i64)__X, (v2i64)__Y);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__crypto_sha256_hash_2r (__m128i __X, __m128i __Y, __m128i __Z)
{
  return (__m128i) __builtin_crypto_sha256_hash_2r ((v2i64)__X, (v2i64)__Y, (v2i64)__Z);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__crypto_sha512_ms_1 (__m128i __X, __m128i __Y, __m128i __Z)
{
  return (__m128i) __builtin_crypto_sha512_ms_1 ((v2i64)__X, (v2i64)__Y, (v2i64)__Z);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__crypto_sha512_ms_2 (__m128i __X, __m128i __Y, __m128i __Z)
{
  return (__m128i) __builtin_crypto_sha512_ms_2 ((v2i64)__X, (v2i64)__Y, (v2i64)__Z);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__crypto_sha512_hash_r_1 (__m128i __X, __m128i __Y, __m128i __Z)
{
  return (__m128i) __builtin_crypto_sha512_hash_r_1 ((v2i64)__X, (v2i64)__Y, (v2i64)__Z);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__crypto_sha512_hash_r_2 (__m128i __X, __m128i __Y, __m128i __Z)
{
  return (__m128i) __builtin_crypto_sha512_hash_r_2 ((v2i64)__X, (v2i64)__Y, (v2i64)__Z);
}

#endif /* defined(__mips_msa_crypto) */
#endif /* _GCC_MSA_CRYPTOINTRIN_H */
