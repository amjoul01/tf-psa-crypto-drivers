#####################
TF PSA Crypto drivers
#####################

************
Introduction
************

This repository contains cryptographic drivers that implement the
PSA Cryptoprocessor Driver Interface, for example, to be further integrated
within `Trusted-Firmware-M`_ based platforms.

The `PSA Cryptoprocessor Driver Interface`_ is designed to interface with a
PSA Crypto core component, such as the reference implementation available
in `TF-PSA-Crypto`_. For more details on the capabilities implemented through
such interfaces please refer directly to their respective documentation.
The PSA Crypto core component exposes PSA Crypto APIs, for example
the `PSA Cryptography API 1.1`_.

*********
Licensing
*********

The software in this repository is provided under the :doc:`BSD-3-Clause license <license>`.
Other licensing schemes are allowed, as those described by the `OSI licences`_
and explicitly stated in the corresponding source code.

.. _PSA Cryptography API 1.1: https://developer.arm.com/documentation/ihi0086/latest/
.. _OSI licences: https://opensource.org/licenses
.. _Trusted-Firmware-M : https://git.trustedfirmware.org/TF-M/trusted-firmware-m.git/
.. _PSA Cryptoprocessor Driver Interface: https://github.com/Mbed-TLS/TF-PSA-Crypto/blob/development/docs/proposed/psa-driver-interface.md
.. _TF-PSA-Crypto: https://github.com/Mbed-TLS/TF-PSA-Crypto/

--------------

SPDX-FileCopyrightText: Copyright The TrustedFirmware-M Contributors
