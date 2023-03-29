// Copyright 2023 Alexander Ireland (@XanderIRE)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

#define USE_SERIAL
#define SOFT_SERIAL_PIN D2

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 5

#define DIRECT_PINS {{F7, F6, F5, F4, D3}, \
                     {D1, B1, B3, B2, B6}, \
                     {D0, D4, C6, D7, E6}, \
                     {NO_PIN, NO_PIN, NO_PIN, B4, B5}}
#define DIRECT_PINS_RIGHT {{F7, F6, F5, F4, D3}, \
                     {D1, B1, B3, B2, B6}, \
                     {D0, D4, C6, D7, E6}, \
                     {NO_PIN, NO_PIN, NO_PIN, B4, B5}}

/* Top left key on left half */
#define BOOTMAGIC_LITE_ROW    0
#define BOOTMAGIC_LITE_COLUMN 0
/* Top right key on right half */
#define BOOTMAGIC_LITE_ROW_RIGHT    0
#define BOOTMAGIC_LITE_COLUMN_RIGHT 4

/* Mod-tap / Layer-tap Useability Settings */
#define TAPPING_TERM 225
#define IGNORE_MOD_TAP_INTERRUPT
#define PERMISSIVE_HOLD
#define RETRO_TAPPING_PER_KEY
