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

********************
Repository structure
********************

PSA Crypto drivers in this repository are organized by vendor.
All vendor implementations are located under the ``/vendor`` directory.
Each vendor has its own subdirectory, which may contain one or more
PSA Crypto drivers provided by that vendor.

A typical layout looks like:

.. code-block:: text

    vendor/
        vendor_a/
            driver_1/
            driver_2/
        vendor_b/
            driver_1/

Each driver resides in its own directory and includes documentation
describing its functionality and usage. The documentation structure
within a vendo directory is defined by the vendor.

*******
License
*******

The software in this repository is provided under the `BSD-3-Clause license <license.rst>`_.
Other licensing schemes are allowed, as those described by the `OSI licences`_
and explicitly stated in the corresponding source code.

.. note::
   Individual files contain the following tag instead of the full license text.

   SPDX-License-Identifier:    BSD-3-Clause

This enables machine processing of license information based on the SPDX
License Identifiers that are here available: http://spdx.org/licenses/

.. _PSA Cryptography API 1.1: https://developer.arm.com/documentation/ihi0086/latest/
.. _OSI licences: https://opensource.org/licenses
.. _Trusted-Firmware-M : https://git.trustedfirmware.org/TF-M/trusted-firmware-m.git/
.. _PSA Cryptoprocessor Driver Interface: https://github.com/Mbed-TLS/TF-PSA-Crypto/blob/development/docs/proposed/psa-driver-interface.md
.. _TF-PSA-Crypto: https://github.com/Mbed-TLS/TF-PSA-Crypto/

--------------

SPDX-FileCopyrightText: Copyright The TrustedFirmware-M Contributors
