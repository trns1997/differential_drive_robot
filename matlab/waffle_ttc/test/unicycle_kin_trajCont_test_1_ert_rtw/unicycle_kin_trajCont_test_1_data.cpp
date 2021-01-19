/*
 * unicycle_kin_trajCont_test_1_data.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "unicycle_kin_trajCont_test_1".
 *
 * Model version              : 1.27
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C++ source code generated on : Fri Jan  8 13:29:27 2021
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "unicycle_kin_trajCont_test_1.h"
#include "unicycle_kin_trajCont_test_1_private.h"

/* Block parameters (default storage) */
P_unicycle_kin_trajCont_test__T unicycle_kin_trajCont_test_1_P = {
  /* Mask Parameter: Squaretrajectory_L
   * Referenced by: '<S1>/Constant2'
   */
  3.0,

  /* Mask Parameter: Squaretrajectory_v
   * Referenced by: '<S1>/Constant3'
   */
  0.2,

  /* Computed Parameter: Constant_Value
   * Referenced by: '<S4>/Constant'
   */
  {
    0.0,                               /* X */
    0.0,                               /* Y */
    0.0                                /* Z */
  },

  /* Computed Parameter: Constant_Value_e
   * Referenced by: '<S5>/Constant'
   */
  {
    0.0,                               /* X */
    0.0,                               /* Y */
    0.0                                /* Z */
  },

  /* Expression: start(1)
   * Referenced by: '<S1>/Constant'
   */
  0.0,

  /* Expression: start(2)
   * Referenced by: '<S1>/Constant1'
   */
  0.0
};
