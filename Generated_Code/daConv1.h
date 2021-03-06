/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : daConv1.h
**     Project     : TestKSDKProjectSerial
**     Processor   : MK64FN1M0VLL12
**     Component   : fsl_dac
**     Version     : Component 1.2.0, Driver 01.00, CPU db: 3.00.000
**     Repository  : KSDK 1.2.0
**     Compiler    : GNU C Compiler
**     Date/Time   : 2015-10-18, 12:52, # CodeGen: 62
**     Contents    :
**         DAC_DRV_StructInitUserConfigNormal - dac_status_t DAC_DRV_StructInitUserConfigNormal(dac_converter_config_t *...
**         DAC_DRV_Init                       - dac_status_t DAC_DRV_Init(uint32_t instance,const dac_converter_config_t *...
**         DAC_DRV_Deinit                     - dac_status_t DAC_DRV_Deinit(uint32_t instance);
**         DAC_DRV_Output                     - void DAC_DRV_Output(uint32_t instance,uint16_t value);
**         DAC_DRV_ConfigBuffer               - dac_status_t DAC_DRV_ConfigBuffer(uint32_t instance,const dac_buffer_config_t...
**         DAC_DRV_SetBuffValue               - dac_status_t DAC_DRV_SetBuffValue(uint32_t instance,uint8_t start,uint8_t...
**         DAC_DRV_SoftTriggerBuffCmd         - void DAC_DRV_SoftTriggerBuffCmd(uint32_t instance);
**         DAC_DRV_ClearBuffFlag              - void DAC_DRV_ClearBuffFlag(uint32_t instance,dac_flag_t flag);
**         DAC_DRV_GetBuffFlag                - bool DAC_DRV_GetBuffFlag(uint32_t instance,dac_flag_t flag);
**         DAC_DRV_SetBuffCurIdx              - void DAC_DRV_SetBuffCurIdx(uint32_t instance,uint8_t idx);
**         DAC_DRV_GetBuffCurIdx              - uint8_t DAC_DRV_GetBuffCurIdx(uint32_t instance);
**
**     Copyright : 1997 - 2015 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file daConv1.h
** @version 01.00
*/         
/*!
**  @addtogroup daConv1_module daConv1 module documentation
**  @{
*/         
#ifndef __daConv1_H
#define __daConv1_H
/* MODULE daConv1. */

/* Include inherited beans */
#include "clockMan1.h"
#include "Cpu.h"

/*! @brief Device instance number */
#define FSL_DACONV1 0

/*! @brief Basic configuration declaration */
extern dac_converter_config_t daConv1_InitConfig0;
    

#endif
/* ifndef __daConv1_H */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
