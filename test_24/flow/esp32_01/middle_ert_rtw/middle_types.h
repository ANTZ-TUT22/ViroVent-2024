/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: middle_types.h
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

#ifndef RTW_HEADER_middle_types_h_
#define RTW_HEADER_middle_types_h_
#include "rtwtypes.h"
#include "MW_SVD.h"

/* Model Code Variants */

/* Custom Type definition for MATLABSystem: '<Root>/I2C Master Read1' */
#include "MW_SVD.h"
#include "MW_I2C.h"
#ifndef struct_tag_H1xN04M2SFjxqRFFmCjSXC
#define struct_tag_H1xN04M2SFjxqRFFmCjSXC

struct tag_H1xN04M2SFjxqRFFmCjSXC
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  uint32_T BusSpeed;
  real_T DefaultMaximumBusSpeedInHz;
  MW_Handle_Type MW_I2C_HANDLE;
  real_T SampleTime;
};

#endif                                 /* struct_tag_H1xN04M2SFjxqRFFmCjSXC */

#ifndef typedef_mbed_I2CMasterRead_middle_T
#define typedef_mbed_I2CMasterRead_middle_T

typedef struct tag_H1xN04M2SFjxqRFFmCjSXC mbed_I2CMasterRead_middle_T;

#endif                                 /* typedef_mbed_I2CMasterRead_middle_T */

/* Parameters (default storage) */
typedef struct P_middle_T_ P_middle_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_middle_T RT_MODEL_middle_T;

#endif                                 /* RTW_HEADER_middle_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
