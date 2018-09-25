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


#ifndef auxiliary_eigs_H
#define auxiliary_eigs_H
void Num_compute_residual_sprimme(PRIMME_INT n, float eval, float *Bx,
   float *Ax, float *r, primme_context ctx) ;
int Num_update_VWXR_sprimme(float *V, float *W, float *BV, PRIMME_INT mV,
      int nV, PRIMME_INT ldV, float *h, int nh, int ldh, float *hVals,
      float *X0, int nX0b, int nX0e, PRIMME_INT ldX0,
      float *X1, int nX1b, int nX1e, PRIMME_INT ldX1,
      float *X2, int nX2b, int nX2e, PRIMME_INT ldX2,
      float *Wo, int nWob, int nWoe, PRIMME_INT ldWo,
      float *R, int nRb, int nRe, PRIMME_INT ldR, float *Rnorms,
      float *BX0, int nBX0b, int nBX0e, PRIMME_INT ldBX0,
      float *BX1, int nBX1b, int nBX1e, PRIMME_INT ldBX1,
      float *BX2, int nBX2b, int nBX2e, PRIMME_INT ldBX2,
      float *rnorms, int nrb, int nre,
      float *G, int nG, int ldG,
      float *H, int nH, int ldH,
      float *xnorms, int nxb, int nxe,
      primme_context ctx) ;
int applyPreconditioner_sprimme(float *V, PRIMME_INT nLocal, PRIMME_INT ldV,
      float *W, PRIMME_INT ldW, int blockSize, primme_context ctx) ;
int convTestFun_sprimme(float eval, float *evec, int givenEvec, float rNorm,
      int *isconv, primme_context ctx) ;
int globalSum_sprimme(float *sendBuf, float *recvBuf, int count,
   primme_context ctx) ;
float problemNorm_sprimme(
      int overrideUserEstimations, struct primme_params *primme) ;
float deltaEig_sprimme(
      int overrideUserEstimations, struct primme_params *primme)
;
int Num_dist_dots_sprimme(float *x, PRIMME_INT ldx, float *y, PRIMME_INT ldy,
      PRIMME_INT m, int n, float *result, primme_context ctx) ;
int Num_dist_dots_real_sprimme(float *x, PRIMME_INT ldx, float *y,
      PRIMME_INT ldy, PRIMME_INT m, int n, float *result, primme_context ctx) ;
void Num_compute_residual_cprimme(PRIMME_INT n, PRIMME_COMPLEX_FLOAT eval, PRIMME_COMPLEX_FLOAT *Bx,
   PRIMME_COMPLEX_FLOAT *Ax, PRIMME_COMPLEX_FLOAT *r, primme_context ctx) ;
int Num_update_VWXR_cprimme(PRIMME_COMPLEX_FLOAT *V, PRIMME_COMPLEX_FLOAT *W, PRIMME_COMPLEX_FLOAT *BV, PRIMME_INT mV,
      int nV, PRIMME_INT ldV, PRIMME_COMPLEX_FLOAT *h, int nh, int ldh, float *hVals,
      PRIMME_COMPLEX_FLOAT *X0, int nX0b, int nX0e, PRIMME_INT ldX0,
      PRIMME_COMPLEX_FLOAT *X1, int nX1b, int nX1e, PRIMME_INT ldX1,
      PRIMME_COMPLEX_FLOAT *X2, int nX2b, int nX2e, PRIMME_INT ldX2,
      PRIMME_COMPLEX_FLOAT *Wo, int nWob, int nWoe, PRIMME_INT ldWo,
      PRIMME_COMPLEX_FLOAT *R, int nRb, int nRe, PRIMME_INT ldR, float *Rnorms,
      PRIMME_COMPLEX_FLOAT *BX0, int nBX0b, int nBX0e, PRIMME_INT ldBX0,
      PRIMME_COMPLEX_FLOAT *BX1, int nBX1b, int nBX1e, PRIMME_INT ldBX1,
      PRIMME_COMPLEX_FLOAT *BX2, int nBX2b, int nBX2e, PRIMME_INT ldBX2,
      float *rnorms, int nrb, int nre,
      PRIMME_COMPLEX_FLOAT *G, int nG, int ldG,
      PRIMME_COMPLEX_FLOAT *H, int nH, int ldH,
      float *xnorms, int nxb, int nxe,
      primme_context ctx) ;
int applyPreconditioner_cprimme(PRIMME_COMPLEX_FLOAT *V, PRIMME_INT nLocal, PRIMME_INT ldV,
      PRIMME_COMPLEX_FLOAT *W, PRIMME_INT ldW, int blockSize, primme_context ctx) ;
int convTestFun_cprimme(float eval, PRIMME_COMPLEX_FLOAT *evec, int givenEvec, float rNorm,
      int *isconv, primme_context ctx) ;
int globalSum_cprimme(PRIMME_COMPLEX_FLOAT *sendBuf, PRIMME_COMPLEX_FLOAT *recvBuf, int count,
   primme_context ctx) ;
float problemNorm_cprimme(
      int overrideUserEstimations, struct primme_params *primme) ;
float deltaEig_cprimme(
      int overrideUserEstimations, struct primme_params *primme)
;
int Num_dist_dots_cprimme(PRIMME_COMPLEX_FLOAT *x, PRIMME_INT ldx, PRIMME_COMPLEX_FLOAT *y, PRIMME_INT ldy,
      PRIMME_INT m, int n, PRIMME_COMPLEX_FLOAT *result, primme_context ctx) ;
int Num_dist_dots_real_cprimme(PRIMME_COMPLEX_FLOAT *x, PRIMME_INT ldx, PRIMME_COMPLEX_FLOAT *y,
      PRIMME_INT ldy, PRIMME_INT m, int n, float *result, primme_context ctx) ;
#if !defined(CHECK_TEMPLATE) && !defined(primme_get_contextSprimme)
#  define primme_get_contextSprimme CONCAT(primme_get_context,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(primme_get_contextRprimme)
#  define primme_get_contextRprimme CONCAT(primme_get_context,REAL_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(primme_get_contextSHprimme)
#  define primme_get_contextSHprimme CONCAT(primme_get_context,HOST_SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(primme_get_contextRHprimme)
#  define primme_get_contextRHprimme CONCAT(primme_get_context,HOST_REAL_SUF)
#endif
primme_context primme_get_context(primme_params *primme) ;
#if !defined(CHECK_TEMPLATE) && !defined(primme_free_contextSprimme)
#  define primme_free_contextSprimme CONCAT(primme_free_context,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(primme_free_contextRprimme)
#  define primme_free_contextRprimme CONCAT(primme_free_context,REAL_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(primme_free_contextSHprimme)
#  define primme_free_contextSHprimme CONCAT(primme_free_context,HOST_SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(primme_free_contextRHprimme)
#  define primme_free_contextRHprimme CONCAT(primme_free_context,HOST_REAL_SUF)
#endif
void primme_free_context(primme_context ctx) ;
#if !defined(CHECK_TEMPLATE) && !defined(Num_compute_residual_Sprimme)
#  define Num_compute_residual_Sprimme CONCAT(Num_compute_residual_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_compute_residual_Rprimme)
#  define Num_compute_residual_Rprimme CONCAT(Num_compute_residual_,REAL_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_compute_residual_SHprimme)
#  define Num_compute_residual_SHprimme CONCAT(Num_compute_residual_,HOST_SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_compute_residual_RHprimme)
#  define Num_compute_residual_RHprimme CONCAT(Num_compute_residual_,HOST_REAL_SUF)
#endif
void Num_compute_residual_dprimme(PRIMME_INT n, double eval, double *Bx,
   double *Ax, double *r, primme_context ctx) ;
#if !defined(CHECK_TEMPLATE) && !defined(Num_update_VWXR_Sprimme)
#  define Num_update_VWXR_Sprimme CONCAT(Num_update_VWXR_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_update_VWXR_Rprimme)
#  define Num_update_VWXR_Rprimme CONCAT(Num_update_VWXR_,REAL_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_update_VWXR_SHprimme)
#  define Num_update_VWXR_SHprimme CONCAT(Num_update_VWXR_,HOST_SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_update_VWXR_RHprimme)
#  define Num_update_VWXR_RHprimme CONCAT(Num_update_VWXR_,HOST_REAL_SUF)
#endif
int Num_update_VWXR_dprimme(double *V, double *W, double *BV, PRIMME_INT mV,
      int nV, PRIMME_INT ldV, double *h, int nh, int ldh, double *hVals,
      double *X0, int nX0b, int nX0e, PRIMME_INT ldX0,
      double *X1, int nX1b, int nX1e, PRIMME_INT ldX1,
      double *X2, int nX2b, int nX2e, PRIMME_INT ldX2,
      double *Wo, int nWob, int nWoe, PRIMME_INT ldWo,
      double *R, int nRb, int nRe, PRIMME_INT ldR, double *Rnorms,
      double *BX0, int nBX0b, int nBX0e, PRIMME_INT ldBX0,
      double *BX1, int nBX1b, int nBX1e, PRIMME_INT ldBX1,
      double *BX2, int nBX2b, int nBX2e, PRIMME_INT ldBX2,
      double *rnorms, int nrb, int nre,
      double *G, int nG, int ldG,
      double *H, int nH, int ldH,
      double *xnorms, int nxb, int nxe,
      primme_context ctx) ;
#if !defined(CHECK_TEMPLATE) && !defined(applyPreconditioner_Sprimme)
#  define applyPreconditioner_Sprimme CONCAT(applyPreconditioner_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(applyPreconditioner_Rprimme)
#  define applyPreconditioner_Rprimme CONCAT(applyPreconditioner_,REAL_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(applyPreconditioner_SHprimme)
#  define applyPreconditioner_SHprimme CONCAT(applyPreconditioner_,HOST_SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(applyPreconditioner_RHprimme)
#  define applyPreconditioner_RHprimme CONCAT(applyPreconditioner_,HOST_REAL_SUF)
#endif
int applyPreconditioner_dprimme(double *V, PRIMME_INT nLocal, PRIMME_INT ldV,
      double *W, PRIMME_INT ldW, int blockSize, primme_context ctx) ;
#if !defined(CHECK_TEMPLATE) && !defined(convTestFun_Sprimme)
#  define convTestFun_Sprimme CONCAT(convTestFun_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(convTestFun_Rprimme)
#  define convTestFun_Rprimme CONCAT(convTestFun_,REAL_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(convTestFun_SHprimme)
#  define convTestFun_SHprimme CONCAT(convTestFun_,HOST_SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(convTestFun_RHprimme)
#  define convTestFun_RHprimme CONCAT(convTestFun_,HOST_REAL_SUF)
#endif
int convTestFun_dprimme(double eval, double *evec, int givenEvec, double rNorm,
      int *isconv, primme_context ctx) ;
#if !defined(CHECK_TEMPLATE) && !defined(globalSum_Sprimme)
#  define globalSum_Sprimme CONCAT(globalSum_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(globalSum_Rprimme)
#  define globalSum_Rprimme CONCAT(globalSum_,REAL_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(globalSum_SHprimme)
#  define globalSum_SHprimme CONCAT(globalSum_,HOST_SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(globalSum_RHprimme)
#  define globalSum_RHprimme CONCAT(globalSum_,HOST_REAL_SUF)
#endif
int globalSum_dprimme(double *sendBuf, double *recvBuf, int count,
   primme_context ctx) ;
#if !defined(CHECK_TEMPLATE) && !defined(problemNorm_Sprimme)
#  define problemNorm_Sprimme CONCAT(problemNorm_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(problemNorm_Rprimme)
#  define problemNorm_Rprimme CONCAT(problemNorm_,REAL_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(problemNorm_SHprimme)
#  define problemNorm_SHprimme CONCAT(problemNorm_,HOST_SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(problemNorm_RHprimme)
#  define problemNorm_RHprimme CONCAT(problemNorm_,HOST_REAL_SUF)
#endif
double problemNorm_dprimme(
      int overrideUserEstimations, struct primme_params *primme) ;
#if !defined(CHECK_TEMPLATE) && !defined(deltaEig_Sprimme)
#  define deltaEig_Sprimme CONCAT(deltaEig_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(deltaEig_Rprimme)
#  define deltaEig_Rprimme CONCAT(deltaEig_,REAL_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(deltaEig_SHprimme)
#  define deltaEig_SHprimme CONCAT(deltaEig_,HOST_SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(deltaEig_RHprimme)
#  define deltaEig_RHprimme CONCAT(deltaEig_,HOST_REAL_SUF)
#endif
double deltaEig_dprimme(
      int overrideUserEstimations, struct primme_params *primme)
;
#if !defined(CHECK_TEMPLATE) && !defined(Num_dist_dots_Sprimme)
#  define Num_dist_dots_Sprimme CONCAT(Num_dist_dots_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_dist_dots_Rprimme)
#  define Num_dist_dots_Rprimme CONCAT(Num_dist_dots_,REAL_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_dist_dots_SHprimme)
#  define Num_dist_dots_SHprimme CONCAT(Num_dist_dots_,HOST_SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_dist_dots_RHprimme)
#  define Num_dist_dots_RHprimme CONCAT(Num_dist_dots_,HOST_REAL_SUF)
#endif
int Num_dist_dots_dprimme(double *x, PRIMME_INT ldx, double *y, PRIMME_INT ldy,
      PRIMME_INT m, int n, double *result, primme_context ctx) ;
#if !defined(CHECK_TEMPLATE) && !defined(Num_dist_dots_real_Sprimme)
#  define Num_dist_dots_real_Sprimme CONCAT(Num_dist_dots_real_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_dist_dots_real_Rprimme)
#  define Num_dist_dots_real_Rprimme CONCAT(Num_dist_dots_real_,REAL_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_dist_dots_real_SHprimme)
#  define Num_dist_dots_real_SHprimme CONCAT(Num_dist_dots_real_,HOST_SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_dist_dots_real_RHprimme)
#  define Num_dist_dots_real_RHprimme CONCAT(Num_dist_dots_real_,HOST_REAL_SUF)
#endif
int Num_dist_dots_real_dprimme(double *x, PRIMME_INT ldx, double *y,
      PRIMME_INT ldy, PRIMME_INT m, int n, double *result, primme_context ctx) ;
void Num_compute_residual_zprimme(PRIMME_INT n, PRIMME_COMPLEX_DOUBLE eval, PRIMME_COMPLEX_DOUBLE *Bx,
   PRIMME_COMPLEX_DOUBLE *Ax, PRIMME_COMPLEX_DOUBLE *r, primme_context ctx) ;
int Num_update_VWXR_zprimme(PRIMME_COMPLEX_DOUBLE *V, PRIMME_COMPLEX_DOUBLE *W, PRIMME_COMPLEX_DOUBLE *BV, PRIMME_INT mV,
      int nV, PRIMME_INT ldV, PRIMME_COMPLEX_DOUBLE *h, int nh, int ldh, double *hVals,
      PRIMME_COMPLEX_DOUBLE *X0, int nX0b, int nX0e, PRIMME_INT ldX0,
      PRIMME_COMPLEX_DOUBLE *X1, int nX1b, int nX1e, PRIMME_INT ldX1,
      PRIMME_COMPLEX_DOUBLE *X2, int nX2b, int nX2e, PRIMME_INT ldX2,
      PRIMME_COMPLEX_DOUBLE *Wo, int nWob, int nWoe, PRIMME_INT ldWo,
      PRIMME_COMPLEX_DOUBLE *R, int nRb, int nRe, PRIMME_INT ldR, double *Rnorms,
      PRIMME_COMPLEX_DOUBLE *BX0, int nBX0b, int nBX0e, PRIMME_INT ldBX0,
      PRIMME_COMPLEX_DOUBLE *BX1, int nBX1b, int nBX1e, PRIMME_INT ldBX1,
      PRIMME_COMPLEX_DOUBLE *BX2, int nBX2b, int nBX2e, PRIMME_INT ldBX2,
      double *rnorms, int nrb, int nre,
      PRIMME_COMPLEX_DOUBLE *G, int nG, int ldG,
      PRIMME_COMPLEX_DOUBLE *H, int nH, int ldH,
      double *xnorms, int nxb, int nxe,
      primme_context ctx) ;
int applyPreconditioner_zprimme(PRIMME_COMPLEX_DOUBLE *V, PRIMME_INT nLocal, PRIMME_INT ldV,
      PRIMME_COMPLEX_DOUBLE *W, PRIMME_INT ldW, int blockSize, primme_context ctx) ;
int convTestFun_zprimme(double eval, PRIMME_COMPLEX_DOUBLE *evec, int givenEvec, double rNorm,
      int *isconv, primme_context ctx) ;
int globalSum_zprimme(PRIMME_COMPLEX_DOUBLE *sendBuf, PRIMME_COMPLEX_DOUBLE *recvBuf, int count,
   primme_context ctx) ;
double problemNorm_zprimme(
      int overrideUserEstimations, struct primme_params *primme) ;
double deltaEig_zprimme(
      int overrideUserEstimations, struct primme_params *primme)
;
int Num_dist_dots_zprimme(PRIMME_COMPLEX_DOUBLE *x, PRIMME_INT ldx, PRIMME_COMPLEX_DOUBLE *y, PRIMME_INT ldy,
      PRIMME_INT m, int n, PRIMME_COMPLEX_DOUBLE *result, primme_context ctx) ;
int Num_dist_dots_real_zprimme(PRIMME_COMPLEX_DOUBLE *x, PRIMME_INT ldx, PRIMME_COMPLEX_DOUBLE *y,
      PRIMME_INT ldy, PRIMME_INT m, int n, double *result, primme_context ctx) ;
void Num_compute_residual_smagmaprimme(PRIMME_INT n, float eval, magma_float *Bx,
   magma_float *Ax, magma_float *r, primme_context ctx) ;
int Num_update_VWXR_smagmaprimme(magma_float *V, magma_float *W, magma_float *BV, PRIMME_INT mV,
      int nV, PRIMME_INT ldV, float *h, int nh, int ldh, float *hVals,
      magma_float *X0, int nX0b, int nX0e, PRIMME_INT ldX0,
      magma_float *X1, int nX1b, int nX1e, PRIMME_INT ldX1,
      magma_float *X2, int nX2b, int nX2e, PRIMME_INT ldX2,
      magma_float *Wo, int nWob, int nWoe, PRIMME_INT ldWo,
      magma_float *R, int nRb, int nRe, PRIMME_INT ldR, float *Rnorms,
      magma_float *BX0, int nBX0b, int nBX0e, PRIMME_INT ldBX0,
      magma_float *BX1, int nBX1b, int nBX1e, PRIMME_INT ldBX1,
      magma_float *BX2, int nBX2b, int nBX2e, PRIMME_INT ldBX2,
      float *rnorms, int nrb, int nre,
      float *G, int nG, int ldG,
      float *H, int nH, int ldH,
      float *xnorms, int nxb, int nxe,
      primme_context ctx) ;
int applyPreconditioner_smagmaprimme(magma_float *V, PRIMME_INT nLocal, PRIMME_INT ldV,
      magma_float *W, PRIMME_INT ldW, int blockSize, primme_context ctx) ;
int convTestFun_smagmaprimme(float eval, magma_float *evec, int givenEvec, float rNorm,
      int *isconv, primme_context ctx) ;
magma_float problemNorm_smagmaprimme(
      int overrideUserEstimations, struct primme_params *primme) ;
magma_float deltaEig_smagmaprimme(
      int overrideUserEstimations, struct primme_params *primme)
;
int Num_dist_dots_smagmaprimme(magma_float *x, PRIMME_INT ldx, magma_float *y, PRIMME_INT ldy,
      PRIMME_INT m, int n, float *result, primme_context ctx) ;
int Num_dist_dots_real_smagmaprimme(magma_float *x, PRIMME_INT ldx, magma_float *y,
      PRIMME_INT ldy, PRIMME_INT m, int n, float *result, primme_context ctx) ;
void Num_compute_residual_cmagmaprimme(PRIMME_INT n, PRIMME_COMPLEX_FLOAT eval, magma_complex_float *Bx,
   magma_complex_float *Ax, magma_complex_float *r, primme_context ctx) ;
int Num_update_VWXR_cmagmaprimme(magma_complex_float *V, magma_complex_float *W, magma_complex_float *BV, PRIMME_INT mV,
      int nV, PRIMME_INT ldV, PRIMME_COMPLEX_FLOAT *h, int nh, int ldh, float *hVals,
      magma_complex_float *X0, int nX0b, int nX0e, PRIMME_INT ldX0,
      magma_complex_float *X1, int nX1b, int nX1e, PRIMME_INT ldX1,
      magma_complex_float *X2, int nX2b, int nX2e, PRIMME_INT ldX2,
      magma_complex_float *Wo, int nWob, int nWoe, PRIMME_INT ldWo,
      magma_complex_float *R, int nRb, int nRe, PRIMME_INT ldR, float *Rnorms,
      magma_complex_float *BX0, int nBX0b, int nBX0e, PRIMME_INT ldBX0,
      magma_complex_float *BX1, int nBX1b, int nBX1e, PRIMME_INT ldBX1,
      magma_complex_float *BX2, int nBX2b, int nBX2e, PRIMME_INT ldBX2,
      float *rnorms, int nrb, int nre,
      PRIMME_COMPLEX_FLOAT *G, int nG, int ldG,
      PRIMME_COMPLEX_FLOAT *H, int nH, int ldH,
      float *xnorms, int nxb, int nxe,
      primme_context ctx) ;
int applyPreconditioner_cmagmaprimme(magma_complex_float *V, PRIMME_INT nLocal, PRIMME_INT ldV,
      magma_complex_float *W, PRIMME_INT ldW, int blockSize, primme_context ctx) ;
int convTestFun_cmagmaprimme(float eval, magma_complex_float *evec, int givenEvec, float rNorm,
      int *isconv, primme_context ctx) ;
magma_float problemNorm_cmagmaprimme(
      int overrideUserEstimations, struct primme_params *primme) ;
magma_float deltaEig_cmagmaprimme(
      int overrideUserEstimations, struct primme_params *primme)
;
int Num_dist_dots_cmagmaprimme(magma_complex_float *x, PRIMME_INT ldx, magma_complex_float *y, PRIMME_INT ldy,
      PRIMME_INT m, int n, PRIMME_COMPLEX_FLOAT *result, primme_context ctx) ;
int Num_dist_dots_real_cmagmaprimme(magma_complex_float *x, PRIMME_INT ldx, magma_complex_float *y,
      PRIMME_INT ldy, PRIMME_INT m, int n, float *result, primme_context ctx) ;
void Num_compute_residual_dmagmaprimme(PRIMME_INT n, double eval, magma_double *Bx,
   magma_double *Ax, magma_double *r, primme_context ctx) ;
int Num_update_VWXR_dmagmaprimme(magma_double *V, magma_double *W, magma_double *BV, PRIMME_INT mV,
      int nV, PRIMME_INT ldV, double *h, int nh, int ldh, double *hVals,
      magma_double *X0, int nX0b, int nX0e, PRIMME_INT ldX0,
      magma_double *X1, int nX1b, int nX1e, PRIMME_INT ldX1,
      magma_double *X2, int nX2b, int nX2e, PRIMME_INT ldX2,
      magma_double *Wo, int nWob, int nWoe, PRIMME_INT ldWo,
      magma_double *R, int nRb, int nRe, PRIMME_INT ldR, double *Rnorms,
      magma_double *BX0, int nBX0b, int nBX0e, PRIMME_INT ldBX0,
      magma_double *BX1, int nBX1b, int nBX1e, PRIMME_INT ldBX1,
      magma_double *BX2, int nBX2b, int nBX2e, PRIMME_INT ldBX2,
      double *rnorms, int nrb, int nre,
      double *G, int nG, int ldG,
      double *H, int nH, int ldH,
      double *xnorms, int nxb, int nxe,
      primme_context ctx) ;
int applyPreconditioner_dmagmaprimme(magma_double *V, PRIMME_INT nLocal, PRIMME_INT ldV,
      magma_double *W, PRIMME_INT ldW, int blockSize, primme_context ctx) ;
int convTestFun_dmagmaprimme(double eval, magma_double *evec, int givenEvec, double rNorm,
      int *isconv, primme_context ctx) ;
magma_double problemNorm_dmagmaprimme(
      int overrideUserEstimations, struct primme_params *primme) ;
magma_double deltaEig_dmagmaprimme(
      int overrideUserEstimations, struct primme_params *primme)
;
int Num_dist_dots_dmagmaprimme(magma_double *x, PRIMME_INT ldx, magma_double *y, PRIMME_INT ldy,
      PRIMME_INT m, int n, double *result, primme_context ctx) ;
int Num_dist_dots_real_dmagmaprimme(magma_double *x, PRIMME_INT ldx, magma_double *y,
      PRIMME_INT ldy, PRIMME_INT m, int n, double *result, primme_context ctx) ;
void Num_compute_residual_zmagmaprimme(PRIMME_INT n, PRIMME_COMPLEX_DOUBLE eval, magma_complex_double *Bx,
   magma_complex_double *Ax, magma_complex_double *r, primme_context ctx) ;
int Num_update_VWXR_zmagmaprimme(magma_complex_double *V, magma_complex_double *W, magma_complex_double *BV, PRIMME_INT mV,
      int nV, PRIMME_INT ldV, PRIMME_COMPLEX_DOUBLE *h, int nh, int ldh, double *hVals,
      magma_complex_double *X0, int nX0b, int nX0e, PRIMME_INT ldX0,
      magma_complex_double *X1, int nX1b, int nX1e, PRIMME_INT ldX1,
      magma_complex_double *X2, int nX2b, int nX2e, PRIMME_INT ldX2,
      magma_complex_double *Wo, int nWob, int nWoe, PRIMME_INT ldWo,
      magma_complex_double *R, int nRb, int nRe, PRIMME_INT ldR, double *Rnorms,
      magma_complex_double *BX0, int nBX0b, int nBX0e, PRIMME_INT ldBX0,
      magma_complex_double *BX1, int nBX1b, int nBX1e, PRIMME_INT ldBX1,
      magma_complex_double *BX2, int nBX2b, int nBX2e, PRIMME_INT ldBX2,
      double *rnorms, int nrb, int nre,
      PRIMME_COMPLEX_DOUBLE *G, int nG, int ldG,
      PRIMME_COMPLEX_DOUBLE *H, int nH, int ldH,
      double *xnorms, int nxb, int nxe,
      primme_context ctx) ;
int applyPreconditioner_zmagmaprimme(magma_complex_double *V, PRIMME_INT nLocal, PRIMME_INT ldV,
      magma_complex_double *W, PRIMME_INT ldW, int blockSize, primme_context ctx) ;
int convTestFun_zmagmaprimme(double eval, magma_complex_double *evec, int givenEvec, double rNorm,
      int *isconv, primme_context ctx) ;
magma_double problemNorm_zmagmaprimme(
      int overrideUserEstimations, struct primme_params *primme) ;
magma_double deltaEig_zmagmaprimme(
      int overrideUserEstimations, struct primme_params *primme)
;
int Num_dist_dots_zmagmaprimme(magma_complex_double *x, PRIMME_INT ldx, magma_complex_double *y, PRIMME_INT ldy,
      PRIMME_INT m, int n, PRIMME_COMPLEX_DOUBLE *result, primme_context ctx) ;
int Num_dist_dots_real_zmagmaprimme(magma_complex_double *x, PRIMME_INT ldx, magma_complex_double *y,
      PRIMME_INT ldy, PRIMME_INT m, int n, double *result, primme_context ctx) ;
#endif
