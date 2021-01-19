/*
 * unicycle_kin_trajCont_test_1.cpp
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

/* Block states (default storage) */
DW_unicycle_kin_trajCont_test_T unicycle_kin_trajCont_test_1_DW;

/* Real-time model */
RT_MODEL_unicycle_kin_trajCon_T unicycle_kin_trajCont_test_1_M_ =
  RT_MODEL_unicycle_kin_trajCon_T();
RT_MODEL_unicycle_kin_trajCon_T *const unicycle_kin_trajCont_test_1_M =
  &unicycle_kin_trajCont_test_1_M_;

/* Forward declaration for local functions */
static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_Curr_T *obj);
static void matlabCodegenHandle_matlabCod_k(ros_slros_internal_block_Publ_T *obj);
static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_Curr_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void matlabCodegenHandle_matlabCod_k(ros_slros_internal_block_Publ_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

/* Model step function */
void unicycle_kin_trajCont_test_1_step(void)
{
  SL_Bus_unicycle_kin_trajCont_test_1_geometry_msgs_Point rtb_BusAssignment;
  real_T rtb_dy;
  real_T rtb_dx;
  real_T rtb_y;
  real_T rtb_x;

  /* MATLABSystem: '<S1>/Current Time' */
  currentROSTimeDouble(&rtb_y);

  /* MATLAB Function: '<S1>/MATLAB Function' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S1>/Constant1'
   *  Constant: '<S1>/Constant2'
   *  Constant: '<S1>/Constant3'
   *  MATLABSystem: '<S1>/Current Time'
   */
  rtb_dx = unicycle_kin_trajCont_test_1_P.Squaretrajectory_L /
    unicycle_kin_trajCont_test_1_P.Squaretrajectory_v;
  if (rtb_y < rtb_dx) {
    rtb_x = unicycle_kin_trajCont_test_1_P.Squaretrajectory_v * rtb_y +
      unicycle_kin_trajCont_test_1_P.Constant_Value_g;
    rtb_y = unicycle_kin_trajCont_test_1_P.Constant1_Value;
    rtb_dx = unicycle_kin_trajCont_test_1_P.Squaretrajectory_v;
    rtb_dy = 0.0;
  } else if ((rtb_y >= rtb_dx) && (rtb_y < 2.0 *
              unicycle_kin_trajCont_test_1_P.Squaretrajectory_L /
              unicycle_kin_trajCont_test_1_P.Squaretrajectory_v)) {
    rtb_x = unicycle_kin_trajCont_test_1_P.Constant_Value_g +
      unicycle_kin_trajCont_test_1_P.Squaretrajectory_L;
    rtb_y = (rtb_y - rtb_dx) * unicycle_kin_trajCont_test_1_P.Squaretrajectory_v
      + unicycle_kin_trajCont_test_1_P.Constant1_Value;
    rtb_dx = 0.0;
    rtb_dy = unicycle_kin_trajCont_test_1_P.Squaretrajectory_v;
  } else {
    rtb_dx = 2.0 * unicycle_kin_trajCont_test_1_P.Squaretrajectory_L /
      unicycle_kin_trajCont_test_1_P.Squaretrajectory_v;
    if ((rtb_y >= rtb_dx) && (rtb_y < 3.0 *
         unicycle_kin_trajCont_test_1_P.Squaretrajectory_L /
         unicycle_kin_trajCont_test_1_P.Squaretrajectory_v)) {
      rtb_x = (unicycle_kin_trajCont_test_1_P.Constant_Value_g +
               unicycle_kin_trajCont_test_1_P.Squaretrajectory_L) - (rtb_y -
        rtb_dx) * unicycle_kin_trajCont_test_1_P.Squaretrajectory_v;
      rtb_y = unicycle_kin_trajCont_test_1_P.Constant1_Value +
        unicycle_kin_trajCont_test_1_P.Squaretrajectory_L;
      rtb_dx = -unicycle_kin_trajCont_test_1_P.Squaretrajectory_v;
      rtb_dy = 0.0;
    } else {
      rtb_dx = 3.0 * unicycle_kin_trajCont_test_1_P.Squaretrajectory_L /
        unicycle_kin_trajCont_test_1_P.Squaretrajectory_v;
      if ((rtb_y >= rtb_dx) && (rtb_y < 4.0 *
           unicycle_kin_trajCont_test_1_P.Squaretrajectory_L /
           unicycle_kin_trajCont_test_1_P.Squaretrajectory_v)) {
        rtb_x = unicycle_kin_trajCont_test_1_P.Constant_Value_g;
        rtb_y = (unicycle_kin_trajCont_test_1_P.Constant1_Value +
                 unicycle_kin_trajCont_test_1_P.Squaretrajectory_L) - (rtb_y -
          rtb_dx) * unicycle_kin_trajCont_test_1_P.Squaretrajectory_v;
        rtb_dx = 0.0;
        rtb_dy = -unicycle_kin_trajCont_test_1_P.Squaretrajectory_v;
      } else {
        rtb_x = unicycle_kin_trajCont_test_1_P.Constant_Value_g;
        rtb_y = unicycle_kin_trajCont_test_1_P.Constant1_Value;
        rtb_dx = 0.0;
        rtb_dy = 0.0;
      }
    }
  }

  /* End of MATLAB Function: '<S1>/MATLAB Function' */

  /* BusAssignment: '<S2>/Bus Assignment' incorporates:
   *  Constant: '<S4>/Constant'
   */
  rtb_BusAssignment = unicycle_kin_trajCont_test_1_P.Constant_Value;
  rtb_BusAssignment.X = rtb_x;
  rtb_BusAssignment.Y = rtb_y;

  /* Outputs for Atomic SubSystem: '<S2>/Publish' */
  /* MATLABSystem: '<S6>/SinkBlock' */
  Pub_unicycle_kin_trajCont_test_1_29.publish(&rtb_BusAssignment);

  /* End of Outputs for SubSystem: '<S2>/Publish' */

  /* BusAssignment: '<S2>/Bus Assignment1' incorporates:
   *  Constant: '<S5>/Constant'
   */
  rtb_BusAssignment = unicycle_kin_trajCont_test_1_P.Constant_Value_e;
  rtb_BusAssignment.X = rtb_dx;
  rtb_BusAssignment.Y = rtb_dy;

  /* Outputs for Atomic SubSystem: '<S2>/Publish1' */
  /* MATLABSystem: '<S7>/SinkBlock' */
  Pub_unicycle_kin_trajCont_test_1_34.publish(&rtb_BusAssignment);

  /* End of Outputs for SubSystem: '<S2>/Publish1' */
}

/* Model initialize function */
void unicycle_kin_trajCont_test_1_initialize(void)
{
  /* Registration code */

  /* states (dwork) */
  (void) memset(static_cast<void *>(&unicycle_kin_trajCont_test_1_DW), 0,
                sizeof(DW_unicycle_kin_trajCont_test_T));

  {
    char_T tmp[18];
    int32_T i;
    static const char_T tmp_0[17] = { '/', 'd', 'e', 's', 'i', 'r', 'e', 'd',
      '_', 'p', 'o', 's', 'i', 't', 'i', 'o', 'n' };

    static const char_T tmp_1[17] = { '/', 'd', 'e', 's', 'i', 'r', 'e', 'd',
      '_', 'v', 'e', 'l', 'o', 'c', 'i', 't', 'y' };

    /* Start for MATLABSystem: '<S1>/Current Time' */
    unicycle_kin_trajCont_test_1_DW.obj.matlabCodegenIsDeleted = false;
    unicycle_kin_trajCont_test_1_DW.objisempty_h = true;
    unicycle_kin_trajCont_test_1_DW.obj.isInitialized = 1;
    unicycle_kin_trajCont_test_1_DW.obj.isSetupComplete = true;

    /* Start for Atomic SubSystem: '<S2>/Publish' */
    /* Start for MATLABSystem: '<S6>/SinkBlock' */
    unicycle_kin_trajCont_test_1_DW.obj_j.matlabCodegenIsDeleted = false;
    unicycle_kin_trajCont_test_1_DW.objisempty_l = true;
    unicycle_kin_trajCont_test_1_DW.obj_j.isInitialized = 1;
    for (i = 0; i < 17; i++) {
      tmp[i] = tmp_0[i];
    }

    tmp[17] = '\x00';
    Pub_unicycle_kin_trajCont_test_1_29.createPublisher(tmp, 1);
    unicycle_kin_trajCont_test_1_DW.obj_j.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S6>/SinkBlock' */
    /* End of Start for SubSystem: '<S2>/Publish' */

    /* Start for Atomic SubSystem: '<S2>/Publish1' */
    /* Start for MATLABSystem: '<S7>/SinkBlock' */
    unicycle_kin_trajCont_test_1_DW.obj_e.matlabCodegenIsDeleted = false;
    unicycle_kin_trajCont_test_1_DW.objisempty = true;
    unicycle_kin_trajCont_test_1_DW.obj_e.isInitialized = 1;
    for (i = 0; i < 17; i++) {
      tmp[i] = tmp_1[i];
    }

    tmp[17] = '\x00';
    Pub_unicycle_kin_trajCont_test_1_34.createPublisher(tmp, 1);
    unicycle_kin_trajCont_test_1_DW.obj_e.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S7>/SinkBlock' */
    /* End of Start for SubSystem: '<S2>/Publish1' */
  }
}

/* Model terminate function */
void unicycle_kin_trajCont_test_1_terminate(void)
{
  /* Terminate for MATLABSystem: '<S1>/Current Time' */
  matlabCodegenHandle_matlabCodeg(&unicycle_kin_trajCont_test_1_DW.obj);

  /* Terminate for Atomic SubSystem: '<S2>/Publish' */
  /* Terminate for MATLABSystem: '<S6>/SinkBlock' */
  matlabCodegenHandle_matlabCod_k(&unicycle_kin_trajCont_test_1_DW.obj_j);

  /* End of Terminate for SubSystem: '<S2>/Publish' */

  /* Terminate for Atomic SubSystem: '<S2>/Publish1' */
  /* Terminate for MATLABSystem: '<S7>/SinkBlock' */
  matlabCodegenHandle_matlabCod_k(&unicycle_kin_trajCont_test_1_DW.obj_e);

  /* End of Terminate for SubSystem: '<S2>/Publish1' */
}
