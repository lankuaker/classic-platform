/*
* Configuration of module: Mcu (Mcu_Cfg.c)
*
* Created by:              
* Copyright:               
*
* Configured for (MCU):    MPC560x
*
* Module vendor:           ArcCore
* Generator version:       2.0.2
*
* Generated by Arctic Studio (http://arccore.com) 
*/


#ifndef MCU_CFG_C_
#define MCU_CFG_C_

#include "Mcu.h"


Mcu_RamSectorSettingConfigType Mcu_RamSectorSettingConfigData[] = {
};

Mcu_ClockSettingConfigType Mcu_ClockSettingConfigData[] =
{
  {
    .McuClockReferencePointFrequency = 8000000UL,
    .Pll1    = 0,
    .Pll2    = 64,
    .Pll3    = 2,
  },
};


const Mcu_ConfigType McuConfigData[] = {
  {
	.McuClockSrcFailureNotification = 0,
	.McuRamSectors = MCU_NBR_OF_RAM_SECTIONS,
	.McuClockSettings = 1,
	.McuDefaultClockSettings = 0,
	.McuClockSettingConfig = &Mcu_ClockSettingConfigData[0],
	.McuRamSectorSettingConfig = &Mcu_RamSectorSettingConfigData[0],
  }
};

#endif /*MCU_CFG_C_*/
