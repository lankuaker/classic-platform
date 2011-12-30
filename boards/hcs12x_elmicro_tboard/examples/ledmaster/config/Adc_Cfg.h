/*
* Configuration of module: Adc (Adc_Cfg.h)
*
* Created by:              
* Copyright:               
*
* Configured for (MCU):    HCS12
*
* Module vendor:           ArcCore
* Generator version:       2.0.0
*
* Generated by Arctic Studio (http://arccore.com) 
*/


#if !(((ADC_SW_MAJOR_VERSION == 1) && (ADC_SW_MINOR_VERSION == 0)) )
#error Adc: Configuration file expected BSW module version to be 1.0.*
#endif


#ifndef ADC_CFG_H_
#define ADC_CFG_H_

#define ADC_DEINIT_API                    STD_OFF
#define ADC_DEV_ERROR_DETECT              STD_OFF
#define ADC_ENABLE_QUEUING                STD_OFF
#define ADC_ENABLE_START_STOP_GROUP_API   STD_ON
#define ADC_GRP_NOTIF_CAPABILITY          STD_OFF
#define ADC_HW_TRIGGER_API                STD_OFF           /* Not implemented. */
#define ADC_PRIORITY_IMPLEMENTATION       0                 /* Not implemented. */
#define ADC_READ_GROUP_API                STD_ON
#define ADC_VERSION_API                   STD_ON            /* Not implemented. */

#include "Adc_ConfigTypes.h"


typedef enum
{
  ADC_MainGroup,
  ADC_NBR_OF_GROUPS
}Adc_GroupType;

typedef enum
{
	ADC_MainGroup_ADC_CH2,
	ADC_NBR_OF_MAINGROUP_CHANNELS
}Adc_MainGroupSignalType;


#endif /* ADC_CFG_H_ */
