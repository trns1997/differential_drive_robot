/*
 * unicycle_kin_trajCont.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "unicycle_kin_trajCont".
 *
 * Model version              : 1.73
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C++ source code generated on : Tue Feb  2 21:01:49 2021
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
 *    '<S8>/Enabled Subsystem'
 *    '<S9>/Enabled Subsystem'
 */
void unicycle__EnabledSubsystem_Init(B_EnabledSubsystem_unicycle_k_T *localB,
  P_EnabledSubsystem_unicycle_k_T *localP)
{
  /* SystemInitialize for Outport: '<S11>/Out1' */
  localB->In1 = localP->Out1_Y0;
}

/*
 * Output and update for enable system:
 *    '<S8>/Enabled Subsystem'
 *    '<S9>/Enabled Subsystem'
 */
void unicycle_kin_t_EnabledSubsystem(boolean_T rtu_Enable, const
  SL_Bus_unicycle_kin_trajCont_std_msgs_Float64 *rtu_In1,
  B_EnabledSubsystem_unicycle_k_T *localB)
{
  /* Outputs for Enabled SubSystem: '<S8>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S11>/Enable'
   */
  if (rtu_Enable) {
    /* Inport: '<S11>/In1' */
    localB->In1 = *rtu_In1;
  }

  /* End of Outputs for SubSystem: '<S8>/Enabled Subsystem' */
}

/*
 * System initialize for enable system:
 *    '<S14>/Enabled Subsystem'
 *    '<S15>/Enabled Subsystem'
 */
void unicycl_EnabledSubsystem_d_Init(B_EnabledSubsystem_unicycle_m_T *localB,
  P_EnabledSubsystem_unicycle_l_T *localP)
{
  /* SystemInitialize for Outport: '<S16>/Out1' */
  localB->In1 = localP->Out1_Y0;
}

/*
 * Output and update for enable system:
 *    '<S14>/Enabled Subsystem'
 *    '<S15>/Enabled Subsystem'
 */
void unicycle_kin_EnabledSubsystem_o(boolean_T rtu_Enable, const
  SL_Bus_unicycle_kin_trajCont_geometry_msgs_Point *rtu_In1,
  B_EnabledSubsystem_unicycle_m_T *localB)
{
  /* Outputs for Enabled SubSystem: '<S14>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S16>/Enable'
   */
  if (rtu_Enable) {
    /* Inport: '<S16>/In1' */
    localB->In1 = *rtu_In1;
  }

  /* End of Outputs for SubSystem: '<S14>/Enabled Subsystem' */
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
  SL_Bus_unicycle_kin_trajCont_std_msgs_Float64 b_varargout_2;
  boolean_T b_varargout_1;
  real_T rtb_theta;
  real_T rtb_v_xP;
  real_T z1_idx_0;
  real_T z1_idx_2;
  boolean_T exitg1;

  /* Outputs for Atomic SubSystem: '<S2>/Subscribe' */
  /* MATLABSystem: '<S8>/SourceBlock' */
  b_varargout_1 = Sub_unicycle_kin_trajCont_76.getLatestMessage(&b_varargout_2);

  /* Outputs for Enabled SubSystem: '<S8>/Enabled Subsystem' */
  unicycle_kin_t_EnabledSubsystem(b_varargout_1, &b_varargout_2,
    &unicycle_kin_trajCont_B.EnabledSubsystem);

  /* End of Outputs for SubSystem: '<S8>/Enabled Subsystem' */
  /* End of Outputs for SubSystem: '<S2>/Subscribe' */

  /* Outputs for Atomic SubSystem: '<S4>/Subscribe' */
  /* MATLABSystem: '<S19>/SourceBlock' incorporates:
   *  Inport: '<S20>/In1'
   */
  b_varargout_1 = Sub_unicycle_kin_trajCont_53.getLatestMessage
    (&unicycle_kin_trajCont_B.b_varargout_2);

  /* Outputs for Enabled SubSystem: '<S19>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S20>/Enable'
   */
  if (b_varargout_1) {
    unicycle_kin_trajCont_B.In1 = unicycle_kin_trajCont_B.b_varargout_2;
  }

  /* End of MATLABSystem: '<S19>/SourceBlock' */
  /* End of Outputs for SubSystem: '<S19>/Enabled Subsystem' */
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

  /* Outputs for Atomic SubSystem: '<S2>/Subscribe1' */
  /* MATLABSystem: '<S9>/SourceBlock' */
  b_varargout_1 = Sub_unicycle_kin_trajCont_81.getLatestMessage(&b_varargout_2);

  /* Outputs for Enabled SubSystem: '<S9>/Enabled Subsystem' */
  unicycle_kin_t_EnabledSubsystem(b_varargout_1, &b_varargout_2,
    &unicycle_kin_trajCont_B.EnabledSubsystem_i);

  /* End of Outputs for SubSystem: '<S9>/Enabled Subsystem' */
  /* End of Outputs for SubSystem: '<S2>/Subscribe1' */

  /* Outputs for Atomic SubSystem: '<S3>/Subscribe' */
  /* MATLABSystem: '<S14>/SourceBlock' */
  b_varargout_1 = Sub_unicycle_kin_trajCont_39.getLatestMessage
    (&unicycle_kin_trajCont_B.b_varargout_2_m);

  /* Outputs for Enabled SubSystem: '<S14>/Enabled Subsystem' */
  unicycle_kin_EnabledSubsystem_o(b_varargout_1,
    &unicycle_kin_trajCont_B.b_varargout_2_m,
    &unicycle_kin_trajCont_B.EnabledSubsystem_o);

  /* End of Outputs for SubSystem: '<S14>/Enabled Subsystem' */
  /* End of Outputs for SubSystem: '<S3>/Subscribe' */

  /* Outputs for Atomic SubSystem: '<S3>/Subscribe1' */
  /* MATLABSystem: '<S15>/SourceBlock' */
  b_varargout_1 = Sub_unicycle_kin_trajCont_45.getLatestMessage
    (&unicycle_kin_trajCont_B.b_varargout_2_m);

  /* Outputs for Enabled SubSystem: '<S15>/Enabled Subsystem' */
  unicycle_kin_EnabledSubsystem_o(b_varargout_1,
    &unicycle_kin_trajCont_B.b_varargout_2_m,
    &unicycle_kin_trajCont_B.EnabledSubsystem_e);

  /* End of Outputs for SubSystem: '<S15>/Enabled Subsystem' */
  /* End of Outputs for SubSystem: '<S3>/Subscribe1' */

  /* MATLAB Function: '<S2>/P+velocity feedforward' incorporates:
   *  MATLAB Function: '<S10>/Unicycle kinematic feedback linearization'
   *  MATLAB Function: '<S4>/Conversion'
   */
  unicycle_kin_trajCont_B.KP =
    unicycle_kin_trajCont_B.EnabledSubsystem_i.In1.Data;
  unicycle_kin_trajCont_B.P_dist =
    unicycle_kin_trajCont_B.EnabledSubsystem.In1.Data;
  if (unicycle_kin_trajCont_B.EnabledSubsystem.In1.Data == 0.0) {
    unicycle_kin_trajCont_B.P_dist = 0.1;
    unicycle_kin_trajCont_B.KP = 1.5;
  }

  z1_idx_0 = cos(rtb_theta);
  rtb_v_xP = ((unicycle_kin_trajCont_B.P_dist * z1_idx_0 +
               unicycle_kin_trajCont_B.EnabledSubsystem_o.In1.X) -
              (unicycle_kin_trajCont_B.P_dist * cos(rtb_theta) +
               unicycle_kin_trajCont_B.In1.Pose.Pose.Position.X)) *
    unicycle_kin_trajCont_B.KP +
    unicycle_kin_trajCont_B.EnabledSubsystem_e.In1.X;
  z1_idx_2 = sin(rtb_theta);
  rtb_theta = ((unicycle_kin_trajCont_B.P_dist * z1_idx_2 +
                unicycle_kin_trajCont_B.EnabledSubsystem_o.In1.Y) -
               (unicycle_kin_trajCont_B.P_dist * sin(rtb_theta) +
                unicycle_kin_trajCont_B.In1.Pose.Pose.Position.Y)) *
    unicycle_kin_trajCont_B.KP +
    unicycle_kin_trajCont_B.EnabledSubsystem_e.In1.Y;

  /* End of MATLAB Function: '<S2>/P+velocity feedforward' */

  /* MATLAB Function: '<S10>/Unicycle kinematic feedback linearization' */
  unicycle_kin_trajCont_B.KP = unicycle_kin_trajCont_B.EnabledSubsystem.In1.Data;
  if (unicycle_kin_trajCont_B.EnabledSubsystem.In1.Data == 0.0) {
    unicycle_kin_trajCont_B.KP = 0.1;
  }

  /* BusAssignment: '<S1>/Bus Assignment' incorporates:
   *  Constant: '<S5>/Constant'
   *  MATLAB Function: '<S10>/Unicycle kinematic feedback linearization'
   */
  unicycle_kin_trajCont_B.BusAssignment =
    unicycle_kin_trajCont_P.Constant_Value_a;
  unicycle_kin_trajCont_B.BusAssignment.Linear.X = rtb_v_xP * z1_idx_0 +
    rtb_theta * z1_idx_2;
  unicycle_kin_trajCont_B.BusAssignment.Angular.Z = (rtb_theta * z1_idx_0 -
    rtb_v_xP * z1_idx_2) / unicycle_kin_trajCont_B.KP;

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
    char_T tmp[9];
    char_T tmp_0[6];
    char_T tmp_1[4];
    char_T tmp_2[18];
    int32_T i;
    static const char_T tmp_3[8] = { '/', 'e', 'p', 's', 'i', 'l', 'o', 'n' };

    static const char_T tmp_4[5] = { '/', 'o', 'd', 'o', 'm' };

    static const char_T tmp_5[17] = { '/', 'd', 'e', 's', 'i', 'r', 'e', 'd',
      '_', 'p', 'o', 's', 'i', 't', 'i', 'o', 'n' };

    static const char_T tmp_6[17] = { '/', 'd', 'e', 's', 'i', 'r', 'e', 'd',
      '_', 'v', 'e', 'l', 'o', 'c', 'i', 't', 'y' };

    static const char_T tmp_7[8] = { '/', 'c', 'm', 'd', '_', 'v', 'e', 'l' };

    /* Start for Atomic SubSystem: '<S2>/Subscribe' */
    /* Start for MATLABSystem: '<S8>/SourceBlock' */
    unicycle_kin_trajCont_DW.obj_d.matlabCodegenIsDeleted = false;
    unicycle_kin_trajCont_DW.objisempty_i = true;
    unicycle_kin_trajCont_DW.obj_d.isInitialized = 1;
    for (i = 0; i < 8; i++) {
      tmp[i] = tmp_3[i];
    }

    tmp[8] = '\x00';
    Sub_unicycle_kin_trajCont_76.createSubscriber(tmp, 1);
    unicycle_kin_trajCont_DW.obj_d.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S8>/SourceBlock' */
    /* End of Start for SubSystem: '<S2>/Subscribe' */

    /* Start for Atomic SubSystem: '<S4>/Subscribe' */
    /* Start for MATLABSystem: '<S19>/SourceBlock' */
    unicycle_kin_trajCont_DW.obj_p.matlabCodegenIsDeleted = false;
    unicycle_kin_trajCont_DW.objisempty = true;
    unicycle_kin_trajCont_DW.obj_p.isInitialized = 1;
    for (i = 0; i < 5; i++) {
      tmp_0[i] = tmp_4[i];
    }

    tmp_0[5] = '\x00';
    Sub_unicycle_kin_trajCont_53.createSubscriber(tmp_0, 1);
    unicycle_kin_trajCont_DW.obj_p.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S19>/SourceBlock' */
    /* End of Start for SubSystem: '<S4>/Subscribe' */

    /* Start for Atomic SubSystem: '<S2>/Subscribe1' */
    /* Start for MATLABSystem: '<S9>/SourceBlock' */
    unicycle_kin_trajCont_DW.obj_e.matlabCodegenIsDeleted = false;
    unicycle_kin_trajCont_DW.objisempty_m = true;
    unicycle_kin_trajCont_DW.obj_e.isInitialized = 1;
    tmp_1[0] = '/';
    tmp_1[1] = 'K';
    tmp_1[2] = 'p';
    tmp_1[3] = '\x00';
    Sub_unicycle_kin_trajCont_81.createSubscriber(tmp_1, 1);
    unicycle_kin_trajCont_DW.obj_e.isSetupComplete = true;

    /* End of Start for SubSystem: '<S2>/Subscribe1' */

    /* Start for Atomic SubSystem: '<S3>/Subscribe' */
    /* Start for MATLABSystem: '<S14>/SourceBlock' */
    unicycle_kin_trajCont_DW.obj_k.matlabCodegenIsDeleted = false;
    unicycle_kin_trajCont_DW.objisempty_e = true;
    unicycle_kin_trajCont_DW.obj_k.isInitialized = 1;
    for (i = 0; i < 17; i++) {
      tmp_2[i] = tmp_5[i];
    }

    tmp_2[17] = '\x00';
    Sub_unicycle_kin_trajCont_39.createSubscriber(tmp_2, 1);
    unicycle_kin_trajCont_DW.obj_k.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S14>/SourceBlock' */
    /* End of Start for SubSystem: '<S3>/Subscribe' */

    /* Start for Atomic SubSystem: '<S3>/Subscribe1' */
    /* Start for MATLABSystem: '<S15>/SourceBlock' */
    unicycle_kin_trajCont_DW.obj_o.matlabCodegenIsDeleted = false;
    unicycle_kin_trajCont_DW.objisempty_f = true;
    unicycle_kin_trajCont_DW.obj_o.isInitialized = 1;
    for (i = 0; i < 17; i++) {
      tmp_2[i] = tmp_6[i];
    }

    tmp_2[17] = '\x00';
    Sub_unicycle_kin_trajCont_45.createSubscriber(tmp_2, 1);
    unicycle_kin_trajCont_DW.obj_o.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S15>/SourceBlock' */
    /* End of Start for SubSystem: '<S3>/Subscribe1' */

    /* Start for Atomic SubSystem: '<S1>/Publish' */
    /* Start for MATLABSystem: '<S6>/SinkBlock' */
    unicycle_kin_trajCont_DW.obj.matlabCodegenIsDeleted = false;
    unicycle_kin_trajCont_DW.objisempty_k = true;
    unicycle_kin_trajCont_DW.obj.isInitialized = 1;
    for (i = 0; i < 8; i++) {
      tmp[i] = tmp_7[i];
    }

    tmp[8] = '\x00';
    Pub_unicycle_kin_trajCont_9.createPublisher(tmp, 1);
    unicycle_kin_trajCont_DW.obj.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S6>/SinkBlock' */
    /* End of Start for SubSystem: '<S1>/Publish' */
  }

  /* SystemInitialize for Atomic SubSystem: '<S2>/Subscribe' */
  /* SystemInitialize for Enabled SubSystem: '<S8>/Enabled Subsystem' */
  unicycle__EnabledSubsystem_Init(&unicycle_kin_trajCont_B.EnabledSubsystem,
    &unicycle_kin_trajCont_P.EnabledSubsystem);

  /* End of SystemInitialize for SubSystem: '<S8>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<S2>/Subscribe' */

  /* SystemInitialize for Atomic SubSystem: '<S4>/Subscribe' */
  /* SystemInitialize for Enabled SubSystem: '<S19>/Enabled Subsystem' */
  /* SystemInitialize for Outport: '<S20>/Out1' */
  unicycle_kin_trajCont_B.In1 = unicycle_kin_trajCont_P.Out1_Y0;

  /* End of SystemInitialize for SubSystem: '<S19>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<S4>/Subscribe' */

  /* SystemInitialize for Atomic SubSystem: '<S2>/Subscribe1' */
  /* SystemInitialize for Enabled SubSystem: '<S9>/Enabled Subsystem' */
  unicycle__EnabledSubsystem_Init(&unicycle_kin_trajCont_B.EnabledSubsystem_i,
    &unicycle_kin_trajCont_P.EnabledSubsystem_i);

  /* End of SystemInitialize for SubSystem: '<S9>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<S2>/Subscribe1' */

  /* SystemInitialize for Atomic SubSystem: '<S3>/Subscribe' */
  /* SystemInitialize for Enabled SubSystem: '<S14>/Enabled Subsystem' */
  unicycl_EnabledSubsystem_d_Init(&unicycle_kin_trajCont_B.EnabledSubsystem_o,
    &unicycle_kin_trajCont_P.EnabledSubsystem_o);

  /* End of SystemInitialize for SubSystem: '<S14>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<S3>/Subscribe' */

  /* SystemInitialize for Atomic SubSystem: '<S3>/Subscribe1' */
  /* SystemInitialize for Enabled SubSystem: '<S15>/Enabled Subsystem' */
  unicycl_EnabledSubsystem_d_Init(&unicycle_kin_trajCont_B.EnabledSubsystem_e,
    &unicycle_kin_trajCont_P.EnabledSubsystem_e);

  /* End of SystemInitialize for SubSystem: '<S15>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<S3>/Subscribe1' */
}

/* Model terminate function */
void unicycle_kin_trajCont_terminate(void)
{
  /* Terminate for Atomic SubSystem: '<S2>/Subscribe' */
  /* Terminate for MATLABSystem: '<S8>/SourceBlock' */
  matlabCodegenHandle_matlabCod_k(&unicycle_kin_trajCont_DW.obj_d);

  /* End of Terminate for SubSystem: '<S2>/Subscribe' */

  /* Terminate for Atomic SubSystem: '<S4>/Subscribe' */
  /* Terminate for MATLABSystem: '<S19>/SourceBlock' */
  matlabCodegenHandle_matlabCod_k(&unicycle_kin_trajCont_DW.obj_p);

  /* End of Terminate for SubSystem: '<S4>/Subscribe' */

  /* Terminate for Atomic SubSystem: '<S2>/Subscribe1' */
  /* Terminate for MATLABSystem: '<S9>/SourceBlock' */
  matlabCodegenHandle_matlabCod_k(&unicycle_kin_trajCont_DW.obj_e);

  /* End of Terminate for SubSystem: '<S2>/Subscribe1' */

  /* Terminate for Atomic SubSystem: '<S3>/Subscribe' */
  /* Terminate for MATLABSystem: '<S14>/SourceBlock' */
  matlabCodegenHandle_matlabCod_k(&unicycle_kin_trajCont_DW.obj_k);

  /* End of Terminate for SubSystem: '<S3>/Subscribe' */

  /* Terminate for Atomic SubSystem: '<S3>/Subscribe1' */
  /* Terminate for MATLABSystem: '<S15>/SourceBlock' */
  matlabCodegenHandle_matlabCod_k(&unicycle_kin_trajCont_DW.obj_o);

  /* End of Terminate for SubSystem: '<S3>/Subscribe1' */

  /* Terminate for Atomic SubSystem: '<S1>/Publish' */
  /* Terminate for MATLABSystem: '<S6>/SinkBlock' */
  matlabCodegenHandle_matlabCodeg(&unicycle_kin_trajCont_DW.obj);

  /* End of Terminate for SubSystem: '<S1>/Publish' */
}
