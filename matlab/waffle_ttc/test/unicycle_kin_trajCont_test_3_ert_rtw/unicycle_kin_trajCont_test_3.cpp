/*
 * unicycle_kin_trajCont_test_3.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "unicycle_kin_trajCont_test_3".
 *
 * Model version              : 1.45
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C++ source code generated on : Sun Feb 21 17:07:23 2021
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "unicycle_kin_trajCont_test_3.h"
#include "unicycle_kin_trajCont_test_3_private.h"

/* Block states (default storage) */
DW_unicycle_kin_trajCont_test_T unicycle_kin_trajCont_test_3_DW;

/* Real-time model */
RT_MODEL_unicycle_kin_trajCon_T unicycle_kin_trajCont_test_3_M_ =
  RT_MODEL_unicycle_kin_trajCon_T();
RT_MODEL_unicycle_kin_trajCon_T *const unicycle_kin_trajCont_test_3_M =
  &unicycle_kin_trajCont_test_3_M_;

/* Forward declaration for local functions */
static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_Curr_T *obj);
static void matlabCodegenHandle_matlabCod_n(ros_slros_internal_block_Publ_T *obj);
static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_Curr_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void matlabCodegenHandle_matlabCod_n(ros_slros_internal_block_Publ_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

/* Model step function */
void unicycle_kin_trajCont_test_3_step(void)
{
  real_T rtb_CurrentTime_0;
  SL_Bus_unicycle_kin_trajCont_test_3_geometry_msgs_Point rtb_BusAssignment;
  real_T rtb_BusAssignment_tmp;

  /* MATLABSystem: '<S1>/Current Time' */
  currentROSTimeDouble(&rtb_CurrentTime_0);

  /* BusAssignment: '<S2>/Bus Assignment' incorporates:
   *  Constant: '<S4>/Constant'
   */
  rtb_BusAssignment = unicycle_kin_trajCont_test_3_P.Constant_Value;

  /* MATLAB Function: '<S1>/MATLAB Function' incorporates:
   *  MATLABSystem: '<S1>/Current Time'
   */
  rtb_BusAssignment_tmp = 6.2831853071795862 * rtb_CurrentTime_0 * 0.01;

  /* BusAssignment: '<S2>/Bus Assignment' incorporates:
   *  MATLAB Function: '<S1>/MATLAB Function'
   */
  rtb_BusAssignment.X = sin(rtb_BusAssignment_tmp) * 3.0;

  /* MATLAB Function: '<S1>/MATLAB Function' incorporates:
   *  MATLABSystem: '<S1>/Current Time'
   */
  rtb_CurrentTime_0 = 12.566370614359172 * rtb_CurrentTime_0 * 0.01;

  /* BusAssignment: '<S2>/Bus Assignment' incorporates:
   *  MATLAB Function: '<S1>/MATLAB Function'
   */
  rtb_BusAssignment.Y = sin(rtb_CurrentTime_0) * 3.0;

  /* Outputs for Atomic SubSystem: '<S2>/Publish' */
  /* MATLABSystem: '<S6>/SinkBlock' */
  Pub_unicycle_kin_trajCont_test_3_29.publish(&rtb_BusAssignment);

  /* End of Outputs for SubSystem: '<S2>/Publish' */

  /* BusAssignment: '<S2>/Bus Assignment1' incorporates:
   *  Constant: '<S5>/Constant'
   *  MATLAB Function: '<S1>/MATLAB Function'
   */
  rtb_BusAssignment = unicycle_kin_trajCont_test_3_P.Constant_Value_e;
  rtb_BusAssignment.X = cos(rtb_BusAssignment_tmp) * 3.0 * 2.0 *
    3.1415926535897931 * 0.01;
  rtb_BusAssignment.Y = cos(rtb_CurrentTime_0) * 3.0 * 4.0 * 3.1415926535897931 *
    0.01;

  /* Outputs for Atomic SubSystem: '<S2>/Publish1' */
  /* MATLABSystem: '<S7>/SinkBlock' */
  Pub_unicycle_kin_trajCont_test_3_34.publish(&rtb_BusAssignment);

  /* End of Outputs for SubSystem: '<S2>/Publish1' */
}

/* Model initialize function */
void unicycle_kin_trajCont_test_3_initialize(void)
{
  /* Registration code */

  /* states (dwork) */
  (void) memset(static_cast<void *>(&unicycle_kin_trajCont_test_3_DW), 0,
                sizeof(DW_unicycle_kin_trajCont_test_T));

  {
    char_T tmp[18];
    int32_T i;
    static const char_T tmp_0[17] = { '/', 'd', 'e', 's', 'i', 'r', 'e', 'd',
      '_', 'p', 'o', 's', 'i', 't', 'i', 'o', 'n' };

    static const char_T tmp_1[17] = { '/', 'd', 'e', 's', 'i', 'r', 'e', 'd',
      '_', 'v', 'e', 'l', 'o', 'c', 'i', 't', 'y' };

    /* Start for MATLABSystem: '<S1>/Current Time' */
    unicycle_kin_trajCont_test_3_DW.obj.matlabCodegenIsDeleted = false;
    unicycle_kin_trajCont_test_3_DW.objisempty_h = true;
    unicycle_kin_trajCont_test_3_DW.obj.isInitialized = 1;
    unicycle_kin_trajCont_test_3_DW.obj.isSetupComplete = true;

    /* Start for Atomic SubSystem: '<S2>/Publish' */
    /* Start for MATLABSystem: '<S6>/SinkBlock' */
    unicycle_kin_trajCont_test_3_DW.obj_j.matlabCodegenIsDeleted = false;
    unicycle_kin_trajCont_test_3_DW.objisempty_l = true;
    unicycle_kin_trajCont_test_3_DW.obj_j.isInitialized = 1;
    for (i = 0; i < 17; i++) {
      tmp[i] = tmp_0[i];
    }

    tmp[17] = '\x00';
    Pub_unicycle_kin_trajCont_test_3_29.createPublisher(tmp, 1);
    unicycle_kin_trajCont_test_3_DW.obj_j.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S6>/SinkBlock' */
    /* End of Start for SubSystem: '<S2>/Publish' */

    /* Start for Atomic SubSystem: '<S2>/Publish1' */
    /* Start for MATLABSystem: '<S7>/SinkBlock' */
    unicycle_kin_trajCont_test_3_DW.obj_e.matlabCodegenIsDeleted = false;
    unicycle_kin_trajCont_test_3_DW.objisempty = true;
    unicycle_kin_trajCont_test_3_DW.obj_e.isInitialized = 1;
    for (i = 0; i < 17; i++) {
      tmp[i] = tmp_1[i];
    }

    tmp[17] = '\x00';
    Pub_unicycle_kin_trajCont_test_3_34.createPublisher(tmp, 1);
    unicycle_kin_trajCont_test_3_DW.obj_e.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S7>/SinkBlock' */
    /* End of Start for SubSystem: '<S2>/Publish1' */
  }
}

/* Model terminate function */
void unicycle_kin_trajCont_test_3_terminate(void)
{
  /* Terminate for MATLABSystem: '<S1>/Current Time' */
  matlabCodegenHandle_matlabCodeg(&unicycle_kin_trajCont_test_3_DW.obj);

  /* Terminate for Atomic SubSystem: '<S2>/Publish' */
  /* Terminate for MATLABSystem: '<S6>/SinkBlock' */
  matlabCodegenHandle_matlabCod_n(&unicycle_kin_trajCont_test_3_DW.obj_j);

  /* End of Terminate for SubSystem: '<S2>/Publish' */

  /* Terminate for Atomic SubSystem: '<S2>/Publish1' */
  /* Terminate for MATLABSystem: '<S7>/SinkBlock' */
  matlabCodegenHandle_matlabCod_n(&unicycle_kin_trajCont_test_3_DW.obj_e);

  /* End of Terminate for SubSystem: '<S2>/Publish1' */
}
