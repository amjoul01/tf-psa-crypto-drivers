/*
 * Copyright (c) 2026, The TrustedFirmware-M Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 */

#ifndef CC3XX_FATAL_ERROR_H
#define CC3XX_FATAL_ERROR_H

#ifndef CC3XX_CONFIG_FILE
#include "cc3xx_config.h"
#else
#include CC3XX_CONFIG_FILE
#endif

#ifdef CC3XX_CONFIG_ENABLE_FATAL_ERROR
#include "fatal_error.h"
#else
#define FATAL_ERR(err) do { (void)(err); } while (0)
#define NONFATAL_ERR(err) do { (void)(err); } while (0)
#endif /* CC3XX_CONFIG_ENABLE_FATAL_ERROR */

#endif /* CC3XX_FATAL_ERROR_H */
