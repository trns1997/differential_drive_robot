/*
 * waffle_kin_sim_test.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "waffle_kin_sim_test".
 *
 * Model version              : 1.26
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C++ source code generated on : Sat Jan  2 13:27:00 2021
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "waffle_kin_sim_test.h"
#include "waffle_kin_sim_test_private.h"

/* Block states (default storage) */
DW_waffle_kin_sim_test_T waffle_kin_sim_test_DW;

/* Real-time model */
RT_MODEL_waffle_kin_sim_test_T waffle_kin_sim_test_M_ =
  RT_MODEL_waffle_kin_sim_test_T();
RT_MODEL_waffle_kin_sim_test_T *const waffle_kin_sim_test_M =
  &waffle_kin_sim_test_M_;

/* Forward declaration for local functions */
static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_Curr_T *obj);
static void matlabCodegenHandle_matlabCod_n(ros_slros_internal_block_Publ_T *obj);
static void rate_scheduler(void);

/*
 *   This function updates active task flag for each subrate.
 * The function is called at model base rate, hence the
 * generated code self-manages all its subrates.
 */
static void rate_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (waffle_kin_sim_test_M->Timing.TaskCounters.TID[1])++;
  if ((waffle_kin_sim_test_M->Timing.TaskCounters.TID[1]) > 3) {/* Sample time: [0.04s, 0.0s] */
    waffle_kin_sim_test_M->Timing.TaskCounters.TID[1] = 0;
  }
}

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
void waffle_kin_sim_test_step(void)
{
  SL_Bus_waffle_kin_sim_test_geometry_msgs_Twist rtb_BusAssignment;
  real_T rtb_w;
  real_T rtb_v;
  if (waffle_kin_sim_test_M->Timing.TaskCounters.TID[1] == 0) {
    /* MATLABSystem: '<Root>/Current Time' */
    currentROSTimeDouble(&rtb_v);

    /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
     *  MATLABSystem: '<Root>/Current Time'
     */
    if (rtb_v <= 10.0) {
      rtb_v = 0.2;
      rtb_w = 0.0;
    } else if (rtb_v <= 20.0) {
      rtb_v = 0.0;
      rtb_w = 0.15707963267948966;
    } else if (rtb_v <= 30.0) {
      rtb_v = 0.2;
      rtb_w = 0.0;
    } else if (rtb_v <= 40.0) {
      rtb_v = 0.0;
      rtb_w = 0.15707963267948966;
    } else if (rtb_v <= 50.0) {
      rtb_v = 0.2;
      rtb_w = 0.0;
    } else if (rtb_v <= 60.0) {
      rtb_v = 0.0;
      rtb_w = 0.15707963267948966;
    } else if (rtb_v <= 70.0) {
      rtb_v = 0.2;
      rtb_w = 0.0;
    } else {
      rtb_v = 0.0;
      rtb_w = 0.0;
    }

    /* End of MATLAB Function: '<Root>/MATLAB Function' */

    /* BusAssignment: '<S2>/Bus Assignment' incorporates:
     *  Constant: '<S3>/Constant'
     */
    rtb_BusAssignment = waffle_kin_sim_test_P.Constant_Value;
    rtb_BusAssignment.Linear.X = rtb_v;
    rtb_BusAssignment.Angular.Z = rtb_w;

    /* Outputs for Atomic SubSystem: '<S2>/Publish' */
    /* MATLABSystem: '<S4>/SinkBlock' */
    Pub_waffle_kin_sim_test_2.publish(&rtb_BusAssignment);

    /* End of Outputs for SubSystem: '<S2>/Publish' */
  }

  rate_scheduler();
}

/* Model initialize function */
void waffle_kin_sim_test_initialize(void)
{
  /* Registration code */

  /* states (dwork) */
  (void) memset(static_cast<void *>(&waffle_kin_sim_test_DW), 0,
                sizeof(DW_waffle_kin_sim_test_T));

  {
    char_T tmp[9];
    int32_T i;
    static const char_T tmp_0[8] = { '/', 'c', 'm', 'd', '_', 'v', 'e', 'l' };

    /* Start for MATLABSystem: '<Root>/Current Time' */
    waffle_kin_sim_test_DW.obj.matlabCodegenIsDeleted = false;
    waffle_kin_sim_test_DW.objisempty_b = true;
    waffle_kin_sim_test_DW.obj.isInitialized = 1;
    waffle_kin_sim_test_DW.obj.isSetupComplete = true;

    /* Start for Atomic SubSystem: '<S2>/Publish' */
    /* Start for MATLABSystem: '<S4>/SinkBlock' */
    waffle_kin_sim_test_DW.obj_j.matlabCodegenIsDeleted = false;
    waffle_kin_sim_test_DW.objisempty = true;
    waffle_kin_sim_test_DW.obj_j.isInitialized = 1;
    for (i = 0; i < 8; i++) {
      tmp[i] = tmp_0[i];
    }

    tmp[8] = '\x00';
    Pub_waffle_kin_sim_test_2.createPublisher(tmp, 1);
    waffle_kin_sim_test_DW.obj_j.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S4>/SinkBlock' */
    /* End of Start for SubSystem: '<S2>/Publish' */
  }
}

/* Model terminate function */
void waffle_kin_sim_test_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Current Time' */
  matlabCodegenHandle_matlabCodeg(&waffle_kin_sim_test_DW.obj);

  /* Terminate for Atomic SubSystem: '<S2>/Publish' */
  /* Terminate for MATLABSystem: '<S4>/SinkBlock' */
  matlabCodegenHandle_matlabCod_n(&waffle_kin_sim_test_DW.obj_j);

  /* End of Terminate for SubSystem: '<S2>/Publish' */
}
