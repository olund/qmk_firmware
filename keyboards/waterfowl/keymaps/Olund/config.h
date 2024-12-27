/*
Copyright 2020 Pierre Chevalier <pierrechevalier83@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#define OLED_DISPLAY_128X64

#define SPLIT_USB_DETECT

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U // Timeout window in ms in which the double tap can occur.


// Pick good defaults for enabling homerow modifiers
#define TAPPING_TERM 200
#define PERMISSIVE_HOLD

#define QUICK_TAP_TERM 0

/* Miryoku */
#define BILATERAL_COMBINATIONS
#define BILATERAL_COMBINATIONS_LIMIT_CHORD_TO_N_KEYS 4 /* GUI, Alt, Ctrl, Shift */
#define BILATERAL_COMBINATIONS_DELAY_MODS_THAT_MATCH MOD_MASK_GUI
#define BILATERAL_COMBINATIONS_DELAY_MATCHED_MODS_BY 120 /* ms */
#define BILATERAL_COMBINATIONS_ALLOW_CROSSOVER_AFTER 80  /* ms */
#define BILATERAL_COMBINATIONS_ALLOW_SAMESIDED_AFTER 500 /* ms */
#define BILATERAL_COMBINATIONS_TYPING_STREAK_TIMEOUT 100 /* ms */
#define BILATERAL_COMBINATIONS_TYPING_STREAK_MODMASK (~MOD_MASK_SHIFT)

// #define UNICODE_SELECTED_MODES UNICODE_MODE_WINCOMPOSE
#define UNICODE_SELECTED_MODES UNICODE_MODE_MACOS, UNICODE_MODE_LINUX, UNICODE_MODE_WINCOMPOSE

