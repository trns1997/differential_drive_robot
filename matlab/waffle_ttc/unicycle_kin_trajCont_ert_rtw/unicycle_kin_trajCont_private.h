/*
 * unicycle_kin_trajCont_private.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "unicycle_kin_trajCont".
 *
 * Model version              : 1.48
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C++ source code generated on : Fri Jan  8 13:58:36 2021
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_unicycle_kin_trajCont_private_h_
#define RTW_HEADER_unicycle_kin_trajCont_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "unicycle_kin_trajCont.h"

extern real_T rt_atan2d_snf(real_T u0, real_T u1);
extern void unicycle__EnabledSubsystem_Init(B_EnabledSubsystem_unicycle_k_T
  *localB, P_EnabledSubsystem_unicycle_k_T *localP);
extern void unicycle_kin_t_EnabledSubsystem(boolean_T rtu_Enable, const
  SL_Bus_unicycle_kin_trajCont_geometry_msgs_Point *rtu_In1,
  B_EnabledSubsystem_unicycle_k_T *localB);

#endif                         /* RTW_HEADER_unicycle_kin_trajCont_private_h_ */
