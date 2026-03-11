#-------------------------------------------------------------------------------
# SPDX-FileCopyrightText: Copyright The TrustedFirmware-M Contributors
#
# SPDX-License-Identifier: BSD-3-Clause
#
#-------------------------------------------------------------------------------

set(CC3XX_TARGET_NAME ${CC3XX_TARGET_PREFIX}cc3xx)

add_subdirectory(low_level_driver)
add_subdirectory(psa_driver_api)

# CC3XX_TESTS can be added only when building for the runtime regression
if (TEST_CC3XX AND CC3XX_TARGET_NAME STREQUAL "crypto_service_cc3xx")
    add_subdirectory(tests)
endif()
