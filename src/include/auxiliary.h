/*******************************************************************************
 * Copyright (c) 2017, College of William & Mary
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of the College of William & Mary nor the
 *       names of its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COLLEGE OF WILLIAM & MARY BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * PRIMME: https://github.com/primme/primme
 * Contact: Andreas Stathopoulos, a n d r e a s _at_ c s . w m . e d u
 *******************************************************************************
 *   NOTE: THIS FILE IS AUTOMATICALLY GENERATED. PLEASE DON'T MODIFY
 ******************************************************************************/


#ifndef auxiliary_H
#define auxiliary_H
int Num_malloc_sprimme(PRIMME_INT n, float **x, primme_context ctx);
int Num_free_sprimme(float *x, primme_context ctx);
void Num_copy_matrix_sprimme(float *x, PRIMME_INT m, PRIMME_INT n,
      PRIMME_INT ldx, float *y, PRIMME_INT ldy,
      primme_context ctx);
void Num_zero_matrix_sprimme(float *x, PRIMME_INT m, PRIMME_INT n,
      PRIMME_INT ldx, primme_context ctx);
void Num_copy_trimatrix_sprimme(float *x, int m, int n, int ldx, int ul,
      int i0, float *y, int ldy, int zero);
void Num_copy_trimatrix_compact_sprimme(float *x, PRIMME_INT m, int n,
      PRIMME_INT ldx, int i0, float *y, int *ly);
void Num_copy_compact_trimatrix_sprimme(float *x, PRIMME_INT m, int n, int i0,
      float *y, int ldy);
int compute_submatrix_sprimme(float *X, int nX, int ldX, float *H, int nH,
                              int ldH, float *R, int ldR, primme_context ctx);
void Num_copy_matrix_columns_sprimme(float *x, PRIMME_INT m, int *xin, int n,
                                     PRIMME_INT ldx, float *y, int *yin,
                                     PRIMME_INT ldy, primme_context ctx);
int permute_vecs_sprimme(float *vecs, PRIMME_INT m, int n, PRIMME_INT ld,
                         int *perm_, primme_context ctx);
float* Num_compact_vecs_sprimme(float *vecs, PRIMME_INT m, int n,
      PRIMME_INT ld, int *perm, float *work, PRIMME_INT ldwork,
      int avoidCopy, primme_context ctx);
int Num_malloc_cprimme(PRIMME_INT n, PRIMME_COMPLEX_FLOAT **x, primme_context ctx);
int Num_free_cprimme(PRIMME_COMPLEX_FLOAT *x, primme_context ctx);
void Num_copy_matrix_cprimme(PRIMME_COMPLEX_FLOAT *x, PRIMME_INT m, PRIMME_INT n,
      PRIMME_INT ldx, PRIMME_COMPLEX_FLOAT *y, PRIMME_INT ldy,
      primme_context ctx);
void Num_zero_matrix_cprimme(PRIMME_COMPLEX_FLOAT *x, PRIMME_INT m, PRIMME_INT n,
      PRIMME_INT ldx, primme_context ctx);
void Num_copy_trimatrix_cprimme(PRIMME_COMPLEX_FLOAT *x, int m, int n, int ldx, int ul,
      int i0, PRIMME_COMPLEX_FLOAT *y, int ldy, int zero);
void Num_copy_trimatrix_compact_cprimme(PRIMME_COMPLEX_FLOAT *x, PRIMME_INT m, int n,
      PRIMME_INT ldx, int i0, PRIMME_COMPLEX_FLOAT *y, int *ly);
void Num_copy_compact_trimatrix_cprimme(PRIMME_COMPLEX_FLOAT *x, PRIMME_INT m, int n, int i0,
      PRIMME_COMPLEX_FLOAT *y, int ldy);
int compute_submatrix_cprimme(PRIMME_COMPLEX_FLOAT *X, int nX, int ldX, PRIMME_COMPLEX_FLOAT *H, int nH,
                              int ldH, PRIMME_COMPLEX_FLOAT *R, int ldR, primme_context ctx);
void Num_copy_matrix_columns_cprimme(PRIMME_COMPLEX_FLOAT *x, PRIMME_INT m, int *xin, int n,
                                     PRIMME_INT ldx, PRIMME_COMPLEX_FLOAT *y, int *yin,
                                     PRIMME_INT ldy, primme_context ctx);
int permute_vecs_cprimme(PRIMME_COMPLEX_FLOAT *vecs, PRIMME_INT m, int n, PRIMME_INT ld,
                         int *perm_, primme_context ctx);
PRIMME_COMPLEX_FLOAT* Num_compact_vecs_cprimme(PRIMME_COMPLEX_FLOAT *vecs, PRIMME_INT m, int n,
      PRIMME_INT ld, int *perm, PRIMME_COMPLEX_FLOAT *work, PRIMME_INT ldwork,
      int avoidCopy, primme_context ctx);
#if !defined(CHECK_TEMPLATE) && !defined(Num_malloc_Sprimme)
#  define Num_malloc_Sprimme CONCAT(Num_malloc_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_malloc_Rprimme)
#  define Num_malloc_Rprimme CONCAT(Num_malloc_,REAL_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_malloc_SHprimme)
#  define Num_malloc_SHprimme CONCAT(Num_malloc_,HOST_SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_malloc_RHprimme)
#  define Num_malloc_RHprimme CONCAT(Num_malloc_,HOST_REAL_SUF)
#endif
int Num_malloc_dprimme(PRIMME_INT n, double **x, primme_context ctx);
#if !defined(CHECK_TEMPLATE) && !defined(Num_free_Sprimme)
#  define Num_free_Sprimme CONCAT(Num_free_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_free_Rprimme)
#  define Num_free_Rprimme CONCAT(Num_free_,REAL_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_free_SHprimme)
#  define Num_free_SHprimme CONCAT(Num_free_,HOST_SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_free_RHprimme)
#  define Num_free_RHprimme CONCAT(Num_free_,HOST_REAL_SUF)
#endif
int Num_free_dprimme(double *x, primme_context ctx);
#if !defined(CHECK_TEMPLATE) && !defined(Num_malloc_iprimmeSprimme)
#  define Num_malloc_iprimmeSprimme CONCAT(Num_malloc_iprimme,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_malloc_iprimmeRprimme)
#  define Num_malloc_iprimmeRprimme CONCAT(Num_malloc_iprimme,REAL_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_malloc_iprimmeSHprimme)
#  define Num_malloc_iprimmeSHprimme CONCAT(Num_malloc_iprimme,HOST_SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_malloc_iprimmeRHprimme)
#  define Num_malloc_iprimmeRHprimme CONCAT(Num_malloc_iprimme,HOST_REAL_SUF)
#endif
int Num_malloc_iprimme(PRIMME_INT n, int **x, primme_context ctx);
#if !defined(CHECK_TEMPLATE) && !defined(Num_free_iprimmeSprimme)
#  define Num_free_iprimmeSprimme CONCAT(Num_free_iprimme,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_free_iprimmeRprimme)
#  define Num_free_iprimmeRprimme CONCAT(Num_free_iprimme,REAL_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_free_iprimmeSHprimme)
#  define Num_free_iprimmeSHprimme CONCAT(Num_free_iprimme,HOST_SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_free_iprimmeRHprimme)
#  define Num_free_iprimmeRHprimme CONCAT(Num_free_iprimme,HOST_REAL_SUF)
#endif
int Num_free_iprimme(int *x, primme_context ctx);
#if !defined(CHECK_TEMPLATE) && !defined(Num_copy_matrix_Sprimme)
#  define Num_copy_matrix_Sprimme CONCAT(Num_copy_matrix_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_copy_matrix_Rprimme)
#  define Num_copy_matrix_Rprimme CONCAT(Num_copy_matrix_,REAL_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_copy_matrix_SHprimme)
#  define Num_copy_matrix_SHprimme CONCAT(Num_copy_matrix_,HOST_SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_copy_matrix_RHprimme)
#  define Num_copy_matrix_RHprimme CONCAT(Num_copy_matrix_,HOST_REAL_SUF)
#endif
void Num_copy_matrix_dprimme(double *x, PRIMME_INT m, PRIMME_INT n,
      PRIMME_INT ldx, double *y, PRIMME_INT ldy,
      primme_context ctx);
#if !defined(CHECK_TEMPLATE) && !defined(Num_zero_matrix_Sprimme)
#  define Num_zero_matrix_Sprimme CONCAT(Num_zero_matrix_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_zero_matrix_Rprimme)
#  define Num_zero_matrix_Rprimme CONCAT(Num_zero_matrix_,REAL_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_zero_matrix_SHprimme)
#  define Num_zero_matrix_SHprimme CONCAT(Num_zero_matrix_,HOST_SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_zero_matrix_RHprimme)
#  define Num_zero_matrix_RHprimme CONCAT(Num_zero_matrix_,HOST_REAL_SUF)
#endif
void Num_zero_matrix_dprimme(double *x, PRIMME_INT m, PRIMME_INT n,
      PRIMME_INT ldx, primme_context ctx);
#if !defined(CHECK_TEMPLATE) && !defined(Num_copy_trimatrix_Sprimme)
#  define Num_copy_trimatrix_Sprimme CONCAT(Num_copy_trimatrix_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_copy_trimatrix_Rprimme)
#  define Num_copy_trimatrix_Rprimme CONCAT(Num_copy_trimatrix_,REAL_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_copy_trimatrix_SHprimme)
#  define Num_copy_trimatrix_SHprimme CONCAT(Num_copy_trimatrix_,HOST_SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_copy_trimatrix_RHprimme)
#  define Num_copy_trimatrix_RHprimme CONCAT(Num_copy_trimatrix_,HOST_REAL_SUF)
#endif
void Num_copy_trimatrix_dprimme(double *x, int m, int n, int ldx, int ul,
      int i0, double *y, int ldy, int zero);
#if !defined(CHECK_TEMPLATE) && !defined(Num_copy_trimatrix_compact_Sprimme)
#  define Num_copy_trimatrix_compact_Sprimme CONCAT(Num_copy_trimatrix_compact_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_copy_trimatrix_compact_Rprimme)
#  define Num_copy_trimatrix_compact_Rprimme CONCAT(Num_copy_trimatrix_compact_,REAL_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_copy_trimatrix_compact_SHprimme)
#  define Num_copy_trimatrix_compact_SHprimme CONCAT(Num_copy_trimatrix_compact_,HOST_SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_copy_trimatrix_compact_RHprimme)
#  define Num_copy_trimatrix_compact_RHprimme CONCAT(Num_copy_trimatrix_compact_,HOST_REAL_SUF)
#endif
void Num_copy_trimatrix_compact_dprimme(double *x, PRIMME_INT m, int n,
      PRIMME_INT ldx, int i0, double *y, int *ly);
#if !defined(CHECK_TEMPLATE) && !defined(Num_copy_compact_trimatrix_Sprimme)
#  define Num_copy_compact_trimatrix_Sprimme CONCAT(Num_copy_compact_trimatrix_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_copy_compact_trimatrix_Rprimme)
#  define Num_copy_compact_trimatrix_Rprimme CONCAT(Num_copy_compact_trimatrix_,REAL_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_copy_compact_trimatrix_SHprimme)
#  define Num_copy_compact_trimatrix_SHprimme CONCAT(Num_copy_compact_trimatrix_,HOST_SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_copy_compact_trimatrix_RHprimme)
#  define Num_copy_compact_trimatrix_RHprimme CONCAT(Num_copy_compact_trimatrix_,HOST_REAL_SUF)
#endif
void Num_copy_compact_trimatrix_dprimme(double *x, PRIMME_INT m, int n, int i0,
      double *y, int ldy);
#if !defined(CHECK_TEMPLATE) && !defined(compute_submatrix_Sprimme)
#  define compute_submatrix_Sprimme CONCAT(compute_submatrix_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(compute_submatrix_Rprimme)
#  define compute_submatrix_Rprimme CONCAT(compute_submatrix_,REAL_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(compute_submatrix_SHprimme)
#  define compute_submatrix_SHprimme CONCAT(compute_submatrix_,HOST_SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(compute_submatrix_RHprimme)
#  define compute_submatrix_RHprimme CONCAT(compute_submatrix_,HOST_REAL_SUF)
#endif
int compute_submatrix_dprimme(double *X, int nX, int ldX, double *H, int nH,
                              int ldH, double *R, int ldR, primme_context ctx);
#if !defined(CHECK_TEMPLATE) && !defined(Num_copy_matrix_columns_Sprimme)
#  define Num_copy_matrix_columns_Sprimme CONCAT(Num_copy_matrix_columns_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_copy_matrix_columns_Rprimme)
#  define Num_copy_matrix_columns_Rprimme CONCAT(Num_copy_matrix_columns_,REAL_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_copy_matrix_columns_SHprimme)
#  define Num_copy_matrix_columns_SHprimme CONCAT(Num_copy_matrix_columns_,HOST_SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_copy_matrix_columns_RHprimme)
#  define Num_copy_matrix_columns_RHprimme CONCAT(Num_copy_matrix_columns_,HOST_REAL_SUF)
#endif
void Num_copy_matrix_columns_dprimme(double *x, PRIMME_INT m, int *xin, int n,
                                     PRIMME_INT ldx, double *y, int *yin,
                                     PRIMME_INT ldy, primme_context ctx);
#if !defined(CHECK_TEMPLATE) && !defined(permute_vecs_Sprimme)
#  define permute_vecs_Sprimme CONCAT(permute_vecs_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(permute_vecs_Rprimme)
#  define permute_vecs_Rprimme CONCAT(permute_vecs_,REAL_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(permute_vecs_SHprimme)
#  define permute_vecs_SHprimme CONCAT(permute_vecs_,HOST_SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(permute_vecs_RHprimme)
#  define permute_vecs_RHprimme CONCAT(permute_vecs_,HOST_REAL_SUF)
#endif
int permute_vecs_dprimme(double *vecs, PRIMME_INT m, int n, PRIMME_INT ld,
                         int *perm_, primme_context ctx);
#if !defined(CHECK_TEMPLATE) && !defined(permute_vecs_iprimmeSprimme)
#  define permute_vecs_iprimmeSprimme CONCAT(permute_vecs_iprimme,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(permute_vecs_iprimmeRprimme)
#  define permute_vecs_iprimmeRprimme CONCAT(permute_vecs_iprimme,REAL_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(permute_vecs_iprimmeSHprimme)
#  define permute_vecs_iprimmeSHprimme CONCAT(permute_vecs_iprimme,HOST_SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(permute_vecs_iprimmeRHprimme)
#  define permute_vecs_iprimmeRHprimme CONCAT(permute_vecs_iprimme,HOST_REAL_SUF)
#endif
int permute_vecs_iprimme(int *vecs, int n, int *perm_, primme_context ctx);
#if !defined(CHECK_TEMPLATE) && !defined(Num_compact_vecs_Sprimme)
#  define Num_compact_vecs_Sprimme CONCAT(Num_compact_vecs_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_compact_vecs_Rprimme)
#  define Num_compact_vecs_Rprimme CONCAT(Num_compact_vecs_,REAL_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_compact_vecs_SHprimme)
#  define Num_compact_vecs_SHprimme CONCAT(Num_compact_vecs_,HOST_SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_compact_vecs_RHprimme)
#  define Num_compact_vecs_RHprimme CONCAT(Num_compact_vecs_,HOST_REAL_SUF)
#endif
double* Num_compact_vecs_dprimme(double *vecs, PRIMME_INT m, int n,
      PRIMME_INT ld, int *perm, double *work, PRIMME_INT ldwork,
      int avoidCopy, primme_context ctx);
int Num_malloc_zprimme(PRIMME_INT n, PRIMME_COMPLEX_DOUBLE **x, primme_context ctx);
int Num_free_zprimme(PRIMME_COMPLEX_DOUBLE *x, primme_context ctx);
void Num_copy_matrix_zprimme(PRIMME_COMPLEX_DOUBLE *x, PRIMME_INT m, PRIMME_INT n,
      PRIMME_INT ldx, PRIMME_COMPLEX_DOUBLE *y, PRIMME_INT ldy,
      primme_context ctx);
void Num_zero_matrix_zprimme(PRIMME_COMPLEX_DOUBLE *x, PRIMME_INT m, PRIMME_INT n,
      PRIMME_INT ldx, primme_context ctx);
void Num_copy_trimatrix_zprimme(PRIMME_COMPLEX_DOUBLE *x, int m, int n, int ldx, int ul,
      int i0, PRIMME_COMPLEX_DOUBLE *y, int ldy, int zero);
void Num_copy_trimatrix_compact_zprimme(PRIMME_COMPLEX_DOUBLE *x, PRIMME_INT m, int n,
      PRIMME_INT ldx, int i0, PRIMME_COMPLEX_DOUBLE *y, int *ly);
void Num_copy_compact_trimatrix_zprimme(PRIMME_COMPLEX_DOUBLE *x, PRIMME_INT m, int n, int i0,
      PRIMME_COMPLEX_DOUBLE *y, int ldy);
int compute_submatrix_zprimme(PRIMME_COMPLEX_DOUBLE *X, int nX, int ldX, PRIMME_COMPLEX_DOUBLE *H, int nH,
                              int ldH, PRIMME_COMPLEX_DOUBLE *R, int ldR, primme_context ctx);
void Num_copy_matrix_columns_zprimme(PRIMME_COMPLEX_DOUBLE *x, PRIMME_INT m, int *xin, int n,
                                     PRIMME_INT ldx, PRIMME_COMPLEX_DOUBLE *y, int *yin,
                                     PRIMME_INT ldy, primme_context ctx);
int permute_vecs_zprimme(PRIMME_COMPLEX_DOUBLE *vecs, PRIMME_INT m, int n, PRIMME_INT ld,
                         int *perm_, primme_context ctx);
PRIMME_COMPLEX_DOUBLE* Num_compact_vecs_zprimme(PRIMME_COMPLEX_DOUBLE *vecs, PRIMME_INT m, int n,
      PRIMME_INT ld, int *perm, PRIMME_COMPLEX_DOUBLE *work, PRIMME_INT ldwork,
      int avoidCopy, primme_context ctx);
void Num_copy_matrix_columns_smagmaprimme(magma_float *x, PRIMME_INT m, int *xin, int n,
                                     PRIMME_INT ldx, magma_float *y, int *yin,
                                     PRIMME_INT ldy, primme_context ctx);
int permute_vecs_smagmaprimme(magma_float *vecs, PRIMME_INT m, int n, PRIMME_INT ld,
                         int *perm_, primme_context ctx);
magma_float* Num_compact_vecs_smagmaprimme(magma_float *vecs, PRIMME_INT m, int n,
      PRIMME_INT ld, int *perm, magma_float *work, PRIMME_INT ldwork,
      int avoidCopy, primme_context ctx);
void Num_copy_matrix_columns_cmagmaprimme(magma_complex_float *x, PRIMME_INT m, int *xin, int n,
                                     PRIMME_INT ldx, magma_complex_float *y, int *yin,
                                     PRIMME_INT ldy, primme_context ctx);
int permute_vecs_cmagmaprimme(magma_complex_float *vecs, PRIMME_INT m, int n, PRIMME_INT ld,
                         int *perm_, primme_context ctx);
magma_complex_float* Num_compact_vecs_cmagmaprimme(magma_complex_float *vecs, PRIMME_INT m, int n,
      PRIMME_INT ld, int *perm, magma_complex_float *work, PRIMME_INT ldwork,
      int avoidCopy, primme_context ctx);
void Num_copy_matrix_columns_dmagmaprimme(magma_double *x, PRIMME_INT m, int *xin, int n,
                                     PRIMME_INT ldx, magma_double *y, int *yin,
                                     PRIMME_INT ldy, primme_context ctx);
int permute_vecs_dmagmaprimme(magma_double *vecs, PRIMME_INT m, int n, PRIMME_INT ld,
                         int *perm_, primme_context ctx);
magma_double* Num_compact_vecs_dmagmaprimme(magma_double *vecs, PRIMME_INT m, int n,
      PRIMME_INT ld, int *perm, magma_double *work, PRIMME_INT ldwork,
      int avoidCopy, primme_context ctx);
void Num_copy_matrix_columns_zmagmaprimme(magma_complex_double *x, PRIMME_INT m, int *xin, int n,
                                     PRIMME_INT ldx, magma_complex_double *y, int *yin,
                                     PRIMME_INT ldy, primme_context ctx);
int permute_vecs_zmagmaprimme(magma_complex_double *vecs, PRIMME_INT m, int n, PRIMME_INT ld,
                         int *perm_, primme_context ctx);
magma_complex_double* Num_compact_vecs_zmagmaprimme(magma_complex_double *vecs, PRIMME_INT m, int n,
      PRIMME_INT ld, int *perm, magma_complex_double *work, PRIMME_INT ldwork,
      int avoidCopy, primme_context ctx);
#endif
