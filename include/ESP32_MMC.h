//////////////////////////////////////////////////////////////////
// MMC DRIVER - ESP32
//
// LIBRARY FOR MMC OPERATIONS ON ESP32
// SUPPORT FOR FAT FILE SYSTEM
//
// SEPTEMBER 4, 2018
//
// ANKIT BHATNAGAR
// ANKIT.BHATNAGARINDIA@GMAIL.COM
//////////////////////////////////////////////////////////////////

#ifndef _ESP32_MMC_
#define _ESP32_MMC_

#include "esp_system.h"
#include "esp_err.h"
#include "esp_log.h"

#define ESP32_MMC_TAG       "ESP32:MMC"

void ESP32_MMC_SetDebug(bool enable);

esp_err_t ESP32_MMC_Initialize(void);

#endif