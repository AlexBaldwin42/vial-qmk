// Copyright 2023 Simian (@Simian)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once
#define VIAL_UNLOCK_COMBO_ROWS {0, 0}
#define VIAL_UNLOCK_COMBO_COLS {0, 1}
#define VIAL_KEYBOARD_UID {0x31, 0x19, 0x28, 0x01, 0x70, 0x29, 0x3B, 0x48}
#define VENDOR_ID 0xEEEE
#define PRODUCT_ID 0x0001
#define PRODUCT PuttzPadd

#define MATRIX_ROWS 5
#define MATRIC_COLS 4

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
