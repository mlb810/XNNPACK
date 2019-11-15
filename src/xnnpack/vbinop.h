// Copyright (c) Facebook, Inc. and its affiliates.
// All rights reserved.
//
// Copyright 2019 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.

#pragma once

#include <stddef.h>
#include <stdint.h>

#include <xnnpack/params.h>
#include <xnnpack/common.h>

#ifdef __cplusplus
extern "C" {
#endif


#define DECLARE_F32_VBINOP_UKERNEL_FUNCTION(fn_name) \
  XNN_INTERNAL void fn_name(                         \
      size_t n,                                      \
      const float* a,                                \
      const float* b,                                \
      float* y,                                      \
      const union xnn_f32_output_params* params);

DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vadd_ukernel__neon_x4)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vadd_ukernel__neon_x8)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vadd_ukernel__psimd_x4)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vadd_ukernel__psimd_x8)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vadd_ukernel__scalar_x1)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vadd_ukernel__scalar_x2)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vadd_ukernel__scalar_x4)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vadd_ukernel__sse_x4)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vadd_ukernel__sse_x8)

DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vmul_ukernel__neon_x4)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vmul_ukernel__neon_x8)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vmul_ukernel__psimd_x4)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vmul_ukernel__psimd_x8)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vmul_ukernel__scalar_x1)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vmul_ukernel__scalar_x2)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vmul_ukernel__scalar_x4)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vmul_ukernel__sse_x4)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vmul_ukernel__sse_x8)

DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vsub_ukernel__neon_x4)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vsub_ukernel__neon_x8)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vsub_ukernel__psimd_x4)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vsub_ukernel__psimd_x8)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vsub_ukernel__scalar_x1)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vsub_ukernel__scalar_x2)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vsub_ukernel__scalar_x4)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vsub_ukernel__sse_x4)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vsub_ukernel__sse_x8)

DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vaddc_ukernel__neon_x4)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vaddc_ukernel__neon_x8)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vaddc_ukernel__psimd_x4)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vaddc_ukernel__psimd_x8)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vaddc_ukernel__scalar_x1)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vaddc_ukernel__scalar_x2)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vaddc_ukernel__scalar_x4)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vaddc_ukernel__sse_x4)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vaddc_ukernel__sse_x8)

DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vmulc_ukernel__neon_x4)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vmulc_ukernel__neon_x8)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vmulc_ukernel__psimd_x4)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vmulc_ukernel__psimd_x8)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vmulc_ukernel__scalar_x1)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vmulc_ukernel__scalar_x2)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vmulc_ukernel__scalar_x4)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vmulc_ukernel__sse_x4)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vmulc_ukernel__sse_x8)

DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vsubc_ukernel__neon_x4)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vsubc_ukernel__neon_x8)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vsubc_ukernel__psimd_x4)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vsubc_ukernel__psimd_x8)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vsubc_ukernel__scalar_x1)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vsubc_ukernel__scalar_x2)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vsubc_ukernel__scalar_x4)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vsubc_ukernel__sse_x4)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vsubc_ukernel__sse_x8)

DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vrsubc_ukernel__neon_x4)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vrsubc_ukernel__neon_x8)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vrsubc_ukernel__psimd_x4)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vrsubc_ukernel__psimd_x8)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vrsubc_ukernel__scalar_x1)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vrsubc_ukernel__scalar_x2)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vrsubc_ukernel__scalar_x4)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vrsubc_ukernel__sse_x4)
DECLARE_F32_VBINOP_UKERNEL_FUNCTION(xnn_f32_vrsubc_ukernel__sse_x8)


#ifdef __cplusplus
}  // extern "C"
#endif