// Auto-generated file. Do not edit!
//   Template: src/f32-dwconv/up-avx.c.in
//   Generator: tools/xngen
//
// Copyright 2019 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.

#include <assert.h>

#include <immintrin.h>

#include <xnnpack/dwconv.h>


static const int32_t mask_table[14] = {-1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0};

void xnn_f32_dwconv_ukernel_up16x9__fma3(
    size_t channels,
    size_t output_width,
    const float** input,
    const float* weights,
    float* output,
    size_t input_stride,
    size_t output_increment,
    const union xnn_f32_output_params params[restrict static 1])
{
  assert(channels != 0);
  assert(output_width != 0);

  const __m256 vmax = _mm256_broadcast_ps((const __m128*) params->sse.max);
  const __m256 vmin = _mm256_broadcast_ps((const __m128*) params->sse.min);
  do {
    const float* i0 = input[0];
    const float* i1 = input[1];
    const float* i2 = input[2];
    const float* i3 = input[3];
    const float* i4 = input[4];
    const float* i5 = input[5];
    const float* i6 = input[6];
    const float* i7 = input[7];
    const float* i8 = input[8];
    input = (const float**) ((uintptr_t) input + input_stride);

    size_t c = channels;
    const float* w = weights;
    for (; c >= 16; c -= 16) {
      __m256 vacc01234567p0 = _mm256_load_ps(w);
      __m256 vacc89ABCDEFp0 = _mm256_load_ps(w + 8);


      const __m256 vi0x01234567 = _mm256_loadu_ps(i0);
      const __m256 vi0x89ABCDEF = _mm256_loadu_ps(i0 + 8);
      i0 += 16;

      const __m256 vk0x01234567 = _mm256_load_ps(w + 16);
      const __m256 vk0x89ABCDEF = _mm256_load_ps(w + 24);
      vacc01234567p0 = _mm256_fmadd_ps(vi0x01234567, vk0x01234567, vacc01234567p0);
      vacc89ABCDEFp0 = _mm256_fmadd_ps(vi0x89ABCDEF, vk0x89ABCDEF, vacc89ABCDEFp0);

      const __m256 vi1x01234567 = _mm256_loadu_ps(i1);
      const __m256 vi1x89ABCDEF = _mm256_loadu_ps(i1 + 8);
      i1 += 16;

      const __m256 vk1x01234567 = _mm256_load_ps(w + 32);
      const __m256 vk1x89ABCDEF = _mm256_load_ps(w + 40);
      vacc01234567p0 = _mm256_fmadd_ps(vi1x01234567, vk1x01234567, vacc01234567p0);
      vacc89ABCDEFp0 = _mm256_fmadd_ps(vi1x89ABCDEF, vk1x89ABCDEF, vacc89ABCDEFp0);

      const __m256 vi2x01234567 = _mm256_loadu_ps(i2);
      const __m256 vi2x89ABCDEF = _mm256_loadu_ps(i2 + 8);
      i2 += 16;

      const __m256 vk2x01234567 = _mm256_load_ps(w + 48);
      const __m256 vk2x89ABCDEF = _mm256_load_ps(w + 56);
      vacc01234567p0 = _mm256_fmadd_ps(vi2x01234567, vk2x01234567, vacc01234567p0);
      vacc89ABCDEFp0 = _mm256_fmadd_ps(vi2x89ABCDEF, vk2x89ABCDEF, vacc89ABCDEFp0);

      const __m256 vi3x01234567 = _mm256_loadu_ps(i3);
      const __m256 vi3x89ABCDEF = _mm256_loadu_ps(i3 + 8);
      i3 += 16;

      const __m256 vk3x01234567 = _mm256_load_ps(w + 64);
      const __m256 vk3x89ABCDEF = _mm256_load_ps(w + 72);
      vacc01234567p0 = _mm256_fmadd_ps(vi3x01234567, vk3x01234567, vacc01234567p0);
      vacc89ABCDEFp0 = _mm256_fmadd_ps(vi3x89ABCDEF, vk3x89ABCDEF, vacc89ABCDEFp0);

      const __m256 vi4x01234567 = _mm256_loadu_ps(i4);
      const __m256 vi4x89ABCDEF = _mm256_loadu_ps(i4 + 8);
      i4 += 16;

      const __m256 vk4x01234567 = _mm256_load_ps(w + 80);
      const __m256 vk4x89ABCDEF = _mm256_load_ps(w + 88);
      vacc01234567p0 = _mm256_fmadd_ps(vi4x01234567, vk4x01234567, vacc01234567p0);
      vacc89ABCDEFp0 = _mm256_fmadd_ps(vi4x89ABCDEF, vk4x89ABCDEF, vacc89ABCDEFp0);

      const __m256 vi5x01234567 = _mm256_loadu_ps(i5);
      const __m256 vi5x89ABCDEF = _mm256_loadu_ps(i5 + 8);
      i5 += 16;

      const __m256 vk5x01234567 = _mm256_load_ps(w + 96);
      const __m256 vk5x89ABCDEF = _mm256_load_ps(w + 104);
      vacc01234567p0 = _mm256_fmadd_ps(vi5x01234567, vk5x01234567, vacc01234567p0);
      vacc89ABCDEFp0 = _mm256_fmadd_ps(vi5x89ABCDEF, vk5x89ABCDEF, vacc89ABCDEFp0);

      const __m256 vi6x01234567 = _mm256_loadu_ps(i6);
      const __m256 vi6x89ABCDEF = _mm256_loadu_ps(i6 + 8);
      i6 += 16;

      const __m256 vk6x01234567 = _mm256_load_ps(w + 112);
      const __m256 vk6x89ABCDEF = _mm256_load_ps(w + 120);
      vacc01234567p0 = _mm256_fmadd_ps(vi6x01234567, vk6x01234567, vacc01234567p0);
      vacc89ABCDEFp0 = _mm256_fmadd_ps(vi6x89ABCDEF, vk6x89ABCDEF, vacc89ABCDEFp0);

      const __m256 vi7x01234567 = _mm256_loadu_ps(i7);
      const __m256 vi7x89ABCDEF = _mm256_loadu_ps(i7 + 8);
      i7 += 16;

      const __m256 vk7x01234567 = _mm256_load_ps(w + 128);
      const __m256 vk7x89ABCDEF = _mm256_load_ps(w + 136);
      vacc01234567p0 = _mm256_fmadd_ps(vi7x01234567, vk7x01234567, vacc01234567p0);
      vacc89ABCDEFp0 = _mm256_fmadd_ps(vi7x89ABCDEF, vk7x89ABCDEF, vacc89ABCDEFp0);

      const __m256 vi8x01234567 = _mm256_loadu_ps(i8);
      const __m256 vi8x89ABCDEF = _mm256_loadu_ps(i8 + 8);
      i8 += 16;

      const __m256 vk8x01234567 = _mm256_load_ps(w + 144);
      const __m256 vk8x89ABCDEF = _mm256_load_ps(w + 152);
      vacc01234567p0 = _mm256_fmadd_ps(vi8x01234567, vk8x01234567, vacc01234567p0);
      vacc89ABCDEFp0 = _mm256_fmadd_ps(vi8x89ABCDEF, vk8x89ABCDEF, vacc89ABCDEFp0);

      w += 160;


      __m256 vacc01234567 = _mm256_max_ps(vacc01234567p0, vmin);
      __m256 vacc89ABCDEF = _mm256_max_ps(vacc89ABCDEFp0, vmin);
      vacc01234567 = _mm256_min_ps(vacc01234567, vmax);
      vacc89ABCDEF = _mm256_min_ps(vacc89ABCDEF, vmax);

      _mm256_storeu_ps(output, vacc01234567);
      _mm256_storeu_ps(output + 8, vacc89ABCDEF);
      output += 16;
    }
    for (; c >= 8; c -= 8) {
      __m256 vacc01234567p0 = _mm256_load_ps(w);

      const __m256 vi0x01234567 = _mm256_loadu_ps(i0);
      i0 += 8;

      const __m256 vk0x01234567 = _mm256_load_ps(w + 16);
      vacc01234567p0 = _mm256_fmadd_ps(vi0x01234567, vk0x01234567, vacc01234567p0);

      const __m256 vi1x01234567 = _mm256_loadu_ps(i1);
      i1 += 8;

      const __m256 vk1x01234567 = _mm256_load_ps(w + 32);
      vacc01234567p0 = _mm256_fmadd_ps(vi1x01234567, vk1x01234567, vacc01234567p0);

      const __m256 vi2x01234567 = _mm256_loadu_ps(i2);
      i2 += 8;

      const __m256 vk2x01234567 = _mm256_load_ps(w + 48);
      vacc01234567p0 = _mm256_fmadd_ps(vi2x01234567, vk2x01234567, vacc01234567p0);

      const __m256 vi3x01234567 = _mm256_loadu_ps(i3);
      i3 += 8;

      const __m256 vk3x01234567 = _mm256_load_ps(w + 64);
      vacc01234567p0 = _mm256_fmadd_ps(vi3x01234567, vk3x01234567, vacc01234567p0);

      const __m256 vi4x01234567 = _mm256_loadu_ps(i4);
      i4 += 8;

      const __m256 vk4x01234567 = _mm256_load_ps(w + 80);
      vacc01234567p0 = _mm256_fmadd_ps(vi4x01234567, vk4x01234567, vacc01234567p0);

      const __m256 vi5x01234567 = _mm256_loadu_ps(i5);
      i5 += 8;

      const __m256 vk5x01234567 = _mm256_load_ps(w + 96);
      vacc01234567p0 = _mm256_fmadd_ps(vi5x01234567, vk5x01234567, vacc01234567p0);

      const __m256 vi6x01234567 = _mm256_loadu_ps(i6);
      i6 += 8;

      const __m256 vk6x01234567 = _mm256_load_ps(w + 112);
      vacc01234567p0 = _mm256_fmadd_ps(vi6x01234567, vk6x01234567, vacc01234567p0);

      const __m256 vi7x01234567 = _mm256_loadu_ps(i7);
      i7 += 8;

      const __m256 vk7x01234567 = _mm256_load_ps(w + 128);
      vacc01234567p0 = _mm256_fmadd_ps(vi7x01234567, vk7x01234567, vacc01234567p0);

      const __m256 vi8x01234567 = _mm256_loadu_ps(i8);
      i8 += 8;

      const __m256 vk8x01234567 = _mm256_load_ps(w + 144);
      vacc01234567p0 = _mm256_fmadd_ps(vi8x01234567, vk8x01234567, vacc01234567p0);

      w += 8;


      __m256 vacc01234567 = _mm256_max_ps(vacc01234567p0, vmin);
      vacc01234567 = _mm256_min_ps(vacc01234567, vmax);

      _mm256_storeu_ps(output, vacc01234567);
      output += 8;
    }
    if XNN_UNLIKELY(c != 0) {
      assert(c >= 1);
      assert(c <= 7);
      __m256i vmask = _mm256_loadu_si256((const __m256i*) &mask_table[7 - c]);

      __m256 vacc01234567p0 = _mm256_load_ps(w);

      const __m256 vi0x01234567 = _mm256_maskload_ps(i0, vmask);
      const __m256 vk0x01234567 = _mm256_load_ps(w + 16);
      vacc01234567p0 = _mm256_fmadd_ps(vi0x01234567, vk0x01234567, vacc01234567p0);

      const __m256 vi1x01234567 = _mm256_maskload_ps(i1, vmask);
      const __m256 vk1x01234567 = _mm256_load_ps(w + 32);
      vacc01234567p0 = _mm256_fmadd_ps(vi1x01234567, vk1x01234567, vacc01234567p0);

      const __m256 vi2x01234567 = _mm256_maskload_ps(i2, vmask);
      const __m256 vk2x01234567 = _mm256_load_ps(w + 48);
      vacc01234567p0 = _mm256_fmadd_ps(vi2x01234567, vk2x01234567, vacc01234567p0);

      const __m256 vi3x01234567 = _mm256_maskload_ps(i3, vmask);
      const __m256 vk3x01234567 = _mm256_load_ps(w + 64);
      vacc01234567p0 = _mm256_fmadd_ps(vi3x01234567, vk3x01234567, vacc01234567p0);

      const __m256 vi4x01234567 = _mm256_maskload_ps(i4, vmask);
      const __m256 vk4x01234567 = _mm256_load_ps(w + 80);
      vacc01234567p0 = _mm256_fmadd_ps(vi4x01234567, vk4x01234567, vacc01234567p0);

      const __m256 vi5x01234567 = _mm256_maskload_ps(i5, vmask);
      const __m256 vk5x01234567 = _mm256_load_ps(w + 96);
      vacc01234567p0 = _mm256_fmadd_ps(vi5x01234567, vk5x01234567, vacc01234567p0);

      const __m256 vi6x01234567 = _mm256_maskload_ps(i6, vmask);
      const __m256 vk6x01234567 = _mm256_load_ps(w + 112);
      vacc01234567p0 = _mm256_fmadd_ps(vi6x01234567, vk6x01234567, vacc01234567p0);

      const __m256 vi7x01234567 = _mm256_maskload_ps(i7, vmask);
      const __m256 vk7x01234567 = _mm256_load_ps(w + 128);
      vacc01234567p0 = _mm256_fmadd_ps(vi7x01234567, vk7x01234567, vacc01234567p0);

      const __m256 vi8x01234567 = _mm256_maskload_ps(i8, vmask);
      const __m256 vk8x01234567 = _mm256_load_ps(w + 144);
      vacc01234567p0 = _mm256_fmadd_ps(vi8x01234567, vk8x01234567, vacc01234567p0);


      __m256 vacc01234567 = _mm256_max_ps(vacc01234567p0, vmin);
      vacc01234567 = _mm256_min_ps(vacc01234567, vmax);

      _mm256_maskstore_ps(output, vmask, vacc01234567);
      output += c;
    }

    output = (float*) ((uintptr_t) output + output_increment);
  } while (--output_width != 0);
}