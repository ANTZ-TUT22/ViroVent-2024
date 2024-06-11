/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: middle.c
 *
 * Code generated for Simulink model 'middle'.
 *
 * Model version                  : 1.8
 * Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
 * C/C++ source code generated on : Tue Oct  3 13:11:11 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "middle.h"
#include <string.h>
#include "rtwtypes.h"
#include <stddef.h>
#include "middle_types.h"
#include "MW_I2C.h"
#include "middle_private.h"

/* Block signals (default storage) */
B_middle_T middle_B;

/* Block states (default storage) */
DW_middle_T middle_DW;

/* Real-time model */
static RT_MODEL_middle_T middle_M_;
RT_MODEL_middle_T *const middle_M = &middle_M_;

/* Model step function */
void middle_step(void)
{
  uint8_T output_raw;

  /* MATLABSystem: '<Root>/I2C Master Read1' */
  if (middle_DW.obj.SampleTime != middle_P.I2CMasterRead1_SampleTime) {
    middle_DW.obj.SampleTime = middle_P.I2CMasterRead1_SampleTime;
  }

  MW_I2C_MasterRead(middle_DW.obj.MW_I2C_HANDLE, 17U, &output_raw, 1U, false,
                    false);
  memcpy((void *)&middle_B.I2C_Rx, (void *)&output_raw, (uint32_T)((size_t)1 *
          sizeof(uint8_T)));

  /* End of MATLABSystem: '<Root>/I2C Master Read1' */

  /* Saturate: '<Root>/Saturation' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion2'
   */
  if (middle_B.I2C_Rx > middle_P.Saturation_UpperSat) {
    /* Saturate: '<Root>/Saturation' */
    middle_B.limited = middle_P.Saturation_UpperSat;
  } else if (middle_B.I2C_Rx < middle_P.Saturation_LowerSat) {
    /* Saturate: '<Root>/Saturation' */
    middle_B.limited = middle_P.Saturation_LowerSat;
  } else {
    /* Saturate: '<Root>/Saturation' */
    middle_B.limited = middle_B.I2C_Rx;
  }

  /* End of Saturate: '<Root>/Saturation' */
  {                                    /* Sample time: [0.1s, 0.0s] */
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  middle_M->Timing.taskTime0 =
    ((time_T)(++middle_M->Timing.clockTick0)) * middle_M->Timing.stepSize0;
}

/* Model initialize function */
void middle_initialize(void)
{
  /* Registration code */
  rtmSetTFinal(middle_M, 30.0);
  middle_M->Timing.stepSize0 = 0.1;

  /* External mode info */
  middle_M->Sizes.checksums[0] = (2557635047U);
  middle_M->Sizes.checksums[1] = (3286164739U);
  middle_M->Sizes.checksums[2] = (1285494113U);
  middle_M->Sizes.checksums[3] = (1329350566U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[2];
    middle_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(middle_M->extModeInfo,
      &middle_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(middle_M->extModeInfo, middle_M->Sizes.checksums);
    rteiSetTPtr(middle_M->extModeInfo, rtmGetTPtr(middle_M));
  }

  {
    MW_I2C_Mode_Type ModeType;
    uint32_T i2cname;
    mbed_I2CMasterRead_middle_T *obj;

    /* Start for MATLABSystem: '<Root>/I2C Master Read1' */
    middle_DW.obj.matlabCodegenIsDeleted = true;
    middle_DW.obj.DefaultMaximumBusSpeedInHz = 400000.0;
    middle_DW.obj.isInitialized = 0;
    middle_DW.obj.SampleTime = -1.0;
    middle_DW.obj.matlabCodegenIsDeleted = false;
    middle_DW.obj.SampleTime = middle_P.I2CMasterRead1_SampleTime;
    obj = &middle_DW.obj;
    middle_DW.obj.isSetupComplete = false;
    middle_DW.obj.isInitialized = 1;
    ModeType = MW_I2C_MASTER;
    i2cname = 0;
    obj->MW_I2C_HANDLE = MW_I2C_Open(i2cname, ModeType);
    middle_DW.obj.BusSpeed = 100000U;
    MW_I2C_SetBusSpeed(middle_DW.obj.MW_I2C_HANDLE, middle_DW.obj.BusSpeed);
    middle_DW.obj.isSetupComplete = true;
  }
}

/* Model terminate function */
void middle_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/I2C Master Read1' */
  if (!middle_DW.obj.matlabCodegenIsDeleted) {
    middle_DW.obj.matlabCodegenIsDeleted = true;
    if ((middle_DW.obj.isInitialized == 1) && middle_DW.obj.isSetupComplete) {
      MW_I2C_Close(middle_DW.obj.MW_I2C_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/I2C Master Read1' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
