/*
 * unicycle_kin_trajCont.cpp
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

#include "unicycle_kin_trajCont.h"
#include "unicycle_kin_trajCont_private.h"

/* Block signals (default storage) */
B_unicycle_kin_trajCont_T unicycle_kin_trajCont_B;

/* Block states (default storage) */
DW_unicycle_kin_trajCont_T unicycle_kin_trajCont_DW;

/* Real-time model */
RT_MODEL_unicycle_kin_trajCon_T unicycle_kin_trajCont_M_ =
  RT_MODEL_unicycle_kin_trajCon_T();
RT_MODEL_unicycle_kin_trajCon_T *const unicycle_kin_trajCont_M =
  &unicycle_kin_trajCont_M_;

/* Forward declaration for local functions */
static void matlabCodegenHandle_matlabCod_k(ros_slros_internal_block_Subs_T *obj);
static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_Publ_T *obj);

/*
 * System initialize for enable system:
 *    '<S10>/Enabled Subsystem'
 *    '<S11>/Enabled Subsystem'
 */
void unicycle__EnabledSubsystem_Init(B_EnabledSubsystem_unicycle_k_T *localB,
  P_EnabledSubsystem_unicycle_k_T *localP)
{
  /* SystemInitialize for Outport: '<S12>/Out1' */
  localB->In1 = localP->Out1_Y0;
}

/*
 * Output and update for enable system:
 *    '<S10>/Enabled Subsystem'
 *    '<S11>/Enabled Subsystem'
 */
void unicycle_kin_t_EnabledSubsystem(boolean_T rtu_Enable, const
  SL_Bus_unicycle_kin_trajCont_geometry_msgs_Point *rtu_In1,
  B_EnabledSubsystem_unicycle_k_T *localB)
{
  /* Outputs for Enabled SubSystem: '<S10>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S12>/Enable'
   */
  if (rtu_Enable) {
    /* Inport: '<S12>/In1' */
    localB->In1 = *rtu_In1;
  }

  /* End of Outputs for SubSystem: '<S10>/Enabled Subsystem' */
}

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  int32_T u0_0;
  int32_T u1_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    if (u0 > 0.0) {
      u0_0 = 1;
    } else {
      u0_0 = -1;
    }

    if (u1 > 0.0) {
      u1_0 = 1;
    } else {
      u1_0 = -1;
    }

    y = atan2(static_cast<real_T>(u0_0), static_cast<real_T>(u1_0));
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

static void matlabCodegenHandle_matlabCod_k(ros_slros_internal_block_Subs_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_Publ_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

/* Model step function */
void unicycle_kin_trajCont_step(void)
{
  boolean_T x[4];
  int32_T k;
  boolean_T b_varargout_1;
  real_T rtb_theta;
  real_T rtb_v_xP;
  real_T z1_idx_0;
  real_T z1_idx_2;
  boolean_T exitg1;

  /* Outputs for Atomic SubSystem: '<S4>/Subscribe' */
  /* MATLABSystem: '<S15>/SourceBlock' incorporates:
   *  Inport: '<S16>/In1'
   */
  b_varargout_1 = Sub_unicycle_kin_trajCont_53.getLatestMessage
    (&unicycle_kin_trajCont_B.b_varargout_2);

  /* Outputs for Enabled SubSystem: '<S15>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S16>/Enable'
   */
  if (b_varargout_1) {
    unicycle_kin_trajCont_B.In1 = unicycle_kin_trajCont_B.b_varargout_2;
  }

  /* End of MATLABSystem: '<S15>/SourceBlock' */
  /* End of Outputs for SubSystem: '<S15>/Enabled Subsystem' */
  /* End of Outputs for SubSystem: '<S4>/Subscribe' */

  /* MATLAB Function: '<S4>/Conversion' */
  x[0] = (unicycle_kin_trajCont_B.In1.Pose.Pose.Orientation.X == 0.0);
  x[1] = (unicycle_kin_trajCont_B.In1.Pose.Pose.Orientation.Y == 0.0);
  x[2] = (unicycle_kin_trajCont_B.In1.Pose.Pose.Orientation.Z == 0.0);
  x[3] = (unicycle_kin_trajCont_B.In1.Pose.Pose.Orientation.W == 0.0);
  b_varargout_1 = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 4)) {
    if (!x[k]) {
      b_varargout_1 = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  if (b_varargout_1) {
    rtb_theta = 0.0;
  } else {
    rtb_theta = 1.0 / sqrt(((unicycle_kin_trajCont_B.In1.Pose.Pose.Orientation.X
      * unicycle_kin_trajCont_B.In1.Pose.Pose.Orientation.X +
      unicycle_kin_trajCont_B.In1.Pose.Pose.Orientation.Y *
      unicycle_kin_trajCont_B.In1.Pose.Pose.Orientation.Y) +
      unicycle_kin_trajCont_B.In1.Pose.Pose.Orientation.Z *
      unicycle_kin_trajCont_B.In1.Pose.Pose.Orientation.Z) +
      unicycle_kin_trajCont_B.In1.Pose.Pose.Orientation.W *
      unicycle_kin_trajCont_B.In1.Pose.Pose.Orientation.W);
    z1_idx_0 = unicycle_kin_trajCont_B.In1.Pose.Pose.Orientation.X * rtb_theta;
    rtb_v_xP = unicycle_kin_trajCont_B.In1.Pose.Pose.Orientation.Y * rtb_theta;
    z1_idx_2 = unicycle_kin_trajCont_B.In1.Pose.Pose.Orientation.Z * rtb_theta;
    rtb_theta *= unicycle_kin_trajCont_B.In1.Pose.Pose.Orientation.W;
    rtb_theta = rt_atan2d_snf((z1_idx_2 * rtb_theta + z1_idx_0 * rtb_v_xP) * 2.0,
      ((z1_idx_0 * z1_idx_0 - rtb_v_xP * rtb_v_xP) - z1_idx_2 * z1_idx_2) +
      rtb_theta * rtb_theta);
  }

  /* Outputs for Atomic SubSystem: '<S3>/Subscribe' */
  /* MATLABSystem: '<S10>/SourceBlock' */
  b_varargout_1 = Sub_unicycle_kin_trajCont_39.getLatestMessage
    (&unicycle_kin_trajCont_B.b_varargout_2_m);

  /* Outputs for Enabled SubSystem: '<S10>/Enabled Subsystem' */
  unicycle_kin_t_EnabledSubsystem(b_varargout_1,
    &unicycle_kin_trajCont_B.b_varargout_2_m,
    &unicycle_kin_trajCont_B.EnabledSubsystem);

  /* End of Outputs for SubSystem: '<S10>/Enabled Subsystem' */
  /* End of Outputs for SubSystem: '<S3>/Subscribe' */

  /* Outputs for Atomic SubSystem: '<S3>/Subscribe1' */
  /* MATLABSystem: '<S11>/SourceBlock' */
  b_varargout_1 = Sub_unicycle_kin_trajCont_45.getLatestMessage
    (&unicycle_kin_trajCont_B.b_varargout_2_m);

  /* Outputs for Enabled SubSystem: '<S11>/Enabled Subsystem' */
  unicycle_kin_t_EnabledSubsystem(b_varargout_1,
    &unicycle_kin_trajCont_B.b_varargout_2_m,
    &unicycle_kin_trajCont_B.EnabledSubsystem_e);

  /* End of Outputs for SubSystem: '<S11>/Enabled Subsystem' */
  /* End of Outputs for SubSystem: '<S3>/Subscribe1' */

  /* MATLAB Function: '<S2>/P+velocity feedforward' incorporates:
   *  Constant: '<S2>/Constant'
   *  Constant: '<S2>/Constant1'
   *  MATLAB Function: '<S4>/Conversion'
   *  MATLAB Function: '<S8>/Unicycle kinematic feedback linearization'
   */
  z1_idx_0 = cos(rtb_theta);
  rtb_v_xP = ((unicycle_kin_trajCont_P.Pvelocityfeedforwardbasedonfe_m *
               z1_idx_0 + unicycle_kin_trajCont_B.EnabledSubsystem.In1.X) -
              (unicycle_kin_trajCont_P.Pvelocityfeedforwardbasedonfe_m * cos
               (rtb_theta) + unicycle_kin_trajCont_B.In1.Pose.Pose.Position.X)) *
    unicycle_kin_trajCont_P.Pvelocityfeedforwardbasedonfeed +
    unicycle_kin_trajCont_B.EnabledSubsystem_e.In1.X;
  z1_idx_2 = sin(rtb_theta);
  rtb_theta = ((unicycle_kin_trajCont_P.Pvelocityfeedforwardbasedonfe_m *
                z1_idx_2 + unicycle_kin_trajCont_B.EnabledSubsystem.In1.Y) -
               (unicycle_kin_trajCont_P.Pvelocityfeedforwardbasedonfe_m * sin
                (rtb_theta) + unicycle_kin_trajCont_B.In1.Pose.Pose.Position.Y))
    * unicycle_kin_trajCont_P.Pvelocityfeedforwardbasedonfeed +
    unicycle_kin_trajCont_B.EnabledSubsystem_e.In1.Y;

  /* BusAssignment: '<S1>/Bus Assignment' incorporates:
   *  Constant: '<S2>/Constant1'
   *  Constant: '<S5>/Constant'
   *  MATLAB Function: '<S8>/Unicycle kinematic feedback linearization'
   */
  unicycle_kin_trajCont_B.BusAssignment =
    unicycle_kin_trajCont_P.Constant_Value_a;
  unicycle_kin_trajCont_B.BusAssignment.Linear.X = rtb_v_xP * z1_idx_0 +
    rtb_theta * z1_idx_2;
  unicycle_kin_trajCont_B.BusAssignment.Angular.Z = (rtb_theta * z1_idx_0 -
    rtb_v_xP * z1_idx_2) /
    unicycle_kin_trajCont_P.Pvelocityfeedforwardbasedonfe_m;

  /* Outputs for Atomic SubSystem: '<S1>/Publish' */
  /* MATLABSystem: '<S6>/SinkBlock' */
  Pub_unicycle_kin_trajCont_9.publish(&unicycle_kin_trajCont_B.BusAssignment);

  /* End of Outputs for SubSystem: '<S1>/Publish' */
}

/* Model initialize function */
void unicycle_kin_trajCont_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* block I/O */
  (void) memset((static_cast<void *>(&unicycle_kin_trajCont_B)), 0,
                sizeof(B_unicycle_kin_trajCont_T));

  /* states (dwork) */
  (void) memset(static_cast<void *>(&unicycle_kin_trajCont_DW), 0,
                sizeof(DW_unicycle_kin_trajCont_T));

  {
    char_T tmp[6];
    char_T tmp_0[18];
    char_T tmp_1[9];
    int32_T i;
    static const char_T tmp_2[5] = { '/', 'o', 'd', 'o', 'm' };

    static const char_T tmp_3[17] = { '/', 'd', 'e', 's', 'i', 'r', 'e', 'd',
      '_', 'p', 'o', 's', 'i', 't', 'i', 'o', 'n' };

    static const char_T tmp_4[17] = { '/', 'd', 'e', 's', 'i', 'r', 'e', 'd',
      '_', 'v', 'e', 'l', 'o', 'c', 'i', 't', 'y' };

    static const char_T tmp_5[8] = { '/', 'c', 'm', 'd', '_', 'v', 'e', 'l' };

    /* Start for Atomic SubSystem: '<S4>/Subscribe' */
    /* Start for MATLABSystem: '<S15>/SourceBlock' */
    unicycle_kin_trajCont_DW.obj_p.matlabCodegenIsDeleted = false;
    unicycle_kin_trajCont_DW.objisempty = true;
    unicycle_kin_trajCont_DW.obj_p.isInitialized = 1;
    for (i = 0; i < 5; i++) {
      tmp[i] = tmp_2[i];
    }

    tmp[5] = '\x00';
    Sub_unicycle_kin_trajCont_53.createSubscriber(tmp, 1);
    unicycle_kin_trajCont_DW.obj_p.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S15>/SourceBlock' */
    /* End of Start for SubSystem: '<S4>/Subscribe' */

    /* Start for Atomic SubSystem: '<S3>/Subscribe' */
    /* Start for MATLABSystem: '<S10>/SourceBlock' */
    unicycle_kin_trajCont_DW.obj_k.matlabCodegenIsDeleted = false;
    unicycle_kin_trajCont_DW.objisempty_e = true;
    unicycle_kin_trajCont_DW.obj_k.isInitialized = 1;
    for (i = 0; i < 17; i++) {
      tmp_0[i] = tmp_3[i];
    }

    tmp_0[17] = '\x00';
    Sub_unicycle_kin_trajCont_39.createSubscriber(tmp_0, 1);
    unicycle_kin_trajCont_DW.obj_k.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S10>/SourceBlock' */
    /* End of Start for SubSystem: '<S3>/Subscribe' */

    /* Start for Atomic SubSystem: '<S3>/Subscribe1' */
    /* Start for MATLABSystem: '<S11>/SourceBlock' */
    unicycle_kin_trajCont_DW.obj_o.matlabCodegenIsDeleted = false;
    unicycle_kin_trajCont_DW.objisempty_f = true;
    unicycle_kin_trajCont_DW.obj_o.isInitialized = 1;
    for (i = 0; i < 17; i++) {
      tmp_0[i] = tmp_4[i];
    }

    tmp_0[17] = '\x00';
    Sub_unicycle_kin_trajCont_45.createSubscriber(tmp_0, 1);
    unicycle_kin_trajCont_DW.obj_o.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S11>/SourceBlock' */
    /* End of Start for SubSystem: '<S3>/Subscribe1' */

    /* Start for Atomic SubSystem: '<S1>/Publish' */
    /* Start for MATLABSystem: '<S6>/SinkBlock' */
    unicycle_kin_trajCont_DW.obj.matlabCodegenIsDeleted = false;
    unicycle_kin_trajCont_DW.objisempty_k = true;
    unicycle_kin_trajCont_DW.obj.isInitialized = 1;
    for (i = 0; i < 8; i++) {
      tmp_1[i] = tmp_5[i];
    }

    tmp_1[8] = '\x00';
    Pub_unicycle_kin_trajCont_9.createPublisher(tmp_1, 1);
    unicycle_kin_trajCont_DW.obj.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S6>/SinkBlock' */
    /* End of Start for SubSystem: '<S1>/Publish' */
  }

  /* SystemInitialize for Atomic SubSystem: '<S4>/Subscribe' */
  /* SystemInitialize for Enabled SubSystem: '<S15>/Enabled Subsystem' */
  /* SystemInitialize for Outport: '<S16>/Out1' */
  unicycle_kin_trajCont_B.In1 = unicycle_kin_trajCont_P.Out1_Y0;

  /* End of SystemInitialize for SubSystem: '<S15>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<S4>/Subscribe' */

  /* SystemInitialize for Atomic SubSystem: '<S3>/Subscribe' */
  /* SystemInitialize for Enabled SubSystem: '<S10>/Enabled Subsystem' */
  unicycle__EnabledSubsystem_Init(&unicycle_kin_trajCont_B.EnabledSubsystem,
    &unicycle_kin_trajCont_P.EnabledSubsystem);

  /* End of SystemInitialize for SubSystem: '<S10>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<S3>/Subscribe' */

  /* SystemInitialize for Atomic SubSystem: '<S3>/Subscribe1' */
  /* SystemInitialize for Enabled SubSystem: '<S11>/Enabled Subsystem' */
  unicycle__EnabledSubsystem_Init(&unicycle_kin_trajCont_B.EnabledSubsystem_e,
    &unicycle_kin_trajCont_P.EnabledSubsystem_e);

  /* End of SystemInitialize for SubSystem: '<S11>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<S3>/Subscribe1' */
}

/* Model terminate function */
void unicycle_kin_trajCont_terminate(void)
{
  /* Terminate for Atomic SubSystem: '<S4>/Subscribe' */
  /* Terminate for MATLABSystem: '<S15>/SourceBlock' */
  matlabCodegenHandle_matlabCod_k(&unicycle_kin_trajCont_DW.obj_p);

  /* End of Terminate for SubSystem: '<S4>/Subscribe' */

  /* Terminate for Atomic SubSystem: '<S3>/Subscribe' */
  /* Terminate for MATLABSystem: '<S10>/SourceBlock' */
  matlabCodegenHandle_matlabCod_k(&unicycle_kin_trajCont_DW.obj_k);

  /* End of Terminate for SubSystem: '<S3>/Subscribe' */

  /* Terminate for Atomic SubSystem: '<S3>/Subscribe1' */
  /* Terminate for MATLABSystem: '<S11>/SourceBlock' */
  matlabCodegenHandle_matlabCod_k(&unicycle_kin_trajCont_DW.obj_o);

  /* End of Terminate for SubSystem: '<S3>/Subscribe1' */

  /* Terminate for Atomic SubSystem: '<S1>/Publish' */
  /* Terminate for MATLABSystem: '<S6>/SinkBlock' */
  matlabCodegenHandle_matlabCodeg(&unicycle_kin_trajCont_DW.obj);

  /* End of Terminate for SubSystem: '<S1>/Publish' */
}
