/*******************************************************************************
 * Size: 10 px
 * Bpp: 8
 * Opts: --bpp 8 --size 10 --font C:\Users\fabio\Documents\SquareLine\assets\Montserrat-MediumItalic.ttf -o C:\Users\fabio\Documents\SquareLine\assets\ui_font_Label.c --format lvgl -r 0x20 -r 0x30-0x39 -r 0x41-0x5a -r 0x2e -r 0xB0 --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_LABEL
#define UI_FONT_LABEL 1
#endif

#if UI_FONT_LABEL

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+002E "." */
    0x26, 0x9, 0xc6, 0x42,

    /* U+0030 "0" */
    0x0, 0x2, 0x83, 0xd6, 0xda, 0x88, 0x0, 0x0,
    0x8d, 0xa4, 0x6, 0x8, 0xd0, 0x41, 0x18, 0xeb,
    0xc, 0x0, 0x0, 0x93, 0x6b, 0x59, 0xab, 0x0,
    0x0, 0x0, 0xab, 0x57, 0x6c, 0x92, 0x0, 0x0,
    0xc, 0xea, 0x15, 0x41, 0xce, 0x8, 0x6, 0xa4,
    0x89, 0x0, 0x0, 0x87, 0xdd, 0xd8, 0x82, 0x2,
    0x0,

    /* U+0031 "1" */
    0x1b, 0xd0, 0xf0, 0x6a, 0x0, 0x0, 0xcb, 0x37,
    0x0, 0x5, 0xf3, 0x8, 0x0, 0x30, 0xd1, 0x0,
    0x0, 0x62, 0x9e, 0x0, 0x0, 0x95, 0x6b, 0x0,
    0x0, 0xc7, 0x39, 0x0,

    /* U+0032 "2" */
    0x0, 0x3, 0x76, 0xd7, 0xd2, 0xc2, 0x1d, 0x0,
    0x6, 0x67, 0x8, 0x0, 0x83, 0x8b, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x9c, 0x71, 0x0, 0x0, 0x0,
    0x1, 0x7f, 0xc3, 0x8, 0x0, 0x0, 0xd, 0xae,
    0xa2, 0x8, 0x0, 0x0, 0x27, 0xd1, 0x6e, 0x0,
    0x0, 0x0, 0xf, 0xf1, 0xef, 0xd0, 0xd0, 0xc6,
    0x1,

    /* U+0033 "3" */
    0x0, 0x0, 0xb1, 0xd0, 0xd0, 0xf1, 0xb8, 0x0,
    0x0, 0x0, 0x0, 0x4e, 0xc8, 0x13, 0x0, 0x0,
    0x0, 0x4e, 0xc9, 0x10, 0x0, 0x0, 0x0, 0x0,
    0x95, 0xd8, 0xa0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x4, 0xe7, 0x20, 0x4, 0x5e, 0x3, 0x0, 0x2f,
    0xe5, 0x9, 0x10, 0xa7, 0xdc, 0xd9, 0xc2, 0x37,
    0x0,

    /* U+0034 "4" */
    0x0, 0x0, 0x0, 0x9, 0xb3, 0x65, 0x0, 0x0,
    0x0, 0xc, 0xbc, 0x5e, 0x0, 0x0, 0x0, 0x11,
    0xc3, 0x56, 0x23, 0x27, 0x0, 0x15, 0xc9, 0x4f,
    0x0, 0x94, 0x5c, 0x0, 0x9c, 0xdb, 0xc8, 0xc8,
    0xf5, 0xcf, 0x5f, 0x0, 0x0, 0x0, 0x7, 0xed,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x2e, 0xc8, 0x0,
    0x0,

    /* U+0035 "5" */
    0x0, 0x0, 0x38, 0xec, 0xd0, 0xd0, 0xa4, 0x0,
    0x0, 0x80, 0x6e, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xc8, 0x2e, 0x0, 0x0, 0x0, 0x0, 0xd, 0xe5,
    0xd2, 0xce, 0x7a, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x10, 0xd6, 0x3c, 0x0, 0x4d, 0x6, 0x0, 0x16,
    0xdf, 0x26, 0x4, 0x95, 0xd9, 0xd9, 0xd0, 0x57,
    0x0,

    /* U+0036 "6" */
    0x0, 0x1, 0x73, 0xcf, 0xd1, 0xd2, 0x13, 0x0,
    0x8c, 0xad, 0xe, 0x0, 0xf, 0x0, 0x1c, 0xf2,
    0xd, 0x0, 0x0, 0x0, 0x0, 0x5c, 0xd3, 0xa2,
    0xbd, 0xa9, 0x1c, 0x0, 0x68, 0xda, 0x15, 0x0,
    0x66, 0xb7, 0x0, 0x2f, 0xcd, 0x6, 0x0, 0x62,
    0xaf, 0x0, 0x0, 0x69, 0xcd, 0xc1, 0xb6, 0x20,
    0x0,

    /* U+0037 "7" */
    0x1, 0xeb, 0xd0, 0xd0, 0xd0, 0xfd, 0x54, 0x24,
    0xcb, 0x0, 0x0, 0x55, 0xc7, 0x2, 0x0, 0x0,
    0x0, 0x10, 0xe1, 0x2c, 0x0, 0x0, 0x0, 0x0,
    0x9c, 0x82, 0x0, 0x0, 0x0, 0x0, 0x40, 0xd5,
    0x7, 0x0, 0x0, 0x0, 0x8, 0xd8, 0x3b, 0x0,
    0x0, 0x0, 0x0, 0x86, 0x96, 0x0, 0x0, 0x0,
    0x0,

    /* U+0038 "8" */
    0x0, 0x20, 0xb5, 0xbf, 0xcf, 0x81, 0x0, 0x0,
    0xad, 0x63, 0x0, 0x5, 0xd6, 0x30, 0x0, 0xb0,
    0x5d, 0x0, 0x16, 0xe0, 0x1b, 0x5, 0x8e, 0xf0,
    0xca, 0xf8, 0x56, 0x0, 0x83, 0x96, 0x4, 0x0,
    0x5c, 0xb9, 0x0, 0x9f, 0x72, 0x0, 0x0, 0x5f,
    0xba, 0x0, 0x20, 0xb9, 0xc7, 0xbe, 0xb1, 0x21,
    0x0,

    /* U+0039 "9" */
    0x0, 0x5f, 0xce, 0xc9, 0xb4, 0x1a, 0x2b, 0xdc,
    0xa, 0x0, 0x53, 0xaf, 0x35, 0xda, 0xd, 0x0,
    0x6b, 0xeb, 0x0, 0x6a, 0xc1, 0xb6, 0x9e, 0xdf,
    0x0, 0x0, 0x0, 0x0, 0x84, 0x9d, 0xe, 0x1,
    0x0, 0x43, 0xe5, 0x22, 0x79, 0xda, 0xcf, 0xb5,
    0x2d, 0x0,

    /* U+0041 "A" */
    0x0, 0x0, 0x0, 0x0, 0x48, 0xfe, 0x28, 0x0,
    0x0, 0x0, 0x0, 0xd, 0xc6, 0x8f, 0x68, 0x0,
    0x0, 0x0, 0x0, 0x97, 0x46, 0x3c, 0xa9, 0x0,
    0x0, 0x0, 0x41, 0x94, 0x0, 0x5, 0xdd, 0x0,
    0x0, 0xa, 0xd1, 0xc6, 0xc0, 0xc0, 0xed, 0x2a,
    0x0, 0x90, 0x54, 0x0, 0x0, 0x0, 0x7c, 0x6a,
    0x3a, 0xcb, 0x1, 0x0, 0x0, 0x0, 0x49, 0xab,

    /* U+0042 "B" */
    0x0, 0x2e, 0xee, 0xc0, 0xc0, 0xd2, 0x9e, 0x3,
    0x0, 0x61, 0x9a, 0x0, 0x0, 0x4, 0xe3, 0x2f,
    0x0, 0x95, 0x6a, 0x0, 0x0, 0x30, 0xe2, 0xd,
    0x0, 0xc8, 0xcd, 0xc0, 0xc9, 0xf9, 0x54, 0x0,
    0x4, 0xf3, 0x8, 0x0, 0x0, 0x34, 0xdc, 0x0,
    0x2f, 0xd3, 0x0, 0x0, 0x0, 0x52, 0xc4, 0x0,
    0x62, 0xee, 0xc4, 0xc3, 0xc3, 0xb2, 0x23, 0x0,

    /* U+0043 "C" */
    0x0, 0x0, 0x55, 0xc4, 0xd3, 0xe2, 0xa7, 0x16,
    0x0, 0x75, 0xc0, 0x1e, 0x0, 0x1, 0x67, 0x19,
    0x16, 0xe8, 0x10, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x55, 0xaa, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x5a, 0xac, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x15, 0xe9, 0x45, 0x0, 0x0, 0x44, 0x46, 0x0,
    0x0, 0x34, 0xbf, 0xdf, 0xe0, 0xb2, 0x25, 0x0,

    /* U+0044 "D" */
    0x0, 0x2e, 0xf2, 0xd0, 0xd1, 0xd9, 0x94, 0xd,
    0x0, 0x0, 0x61, 0x99, 0x0, 0x0, 0x6, 0x96,
    0xa4, 0x0, 0x0, 0x95, 0x67, 0x0, 0x0, 0x0,
    0x12, 0xf6, 0x0, 0x0, 0xc8, 0x35, 0x0, 0x0,
    0x0, 0x12, 0xf0, 0x0, 0x4, 0xf2, 0x8, 0x0,
    0x0, 0x0, 0x64, 0xaf, 0x0, 0x2f, 0xd2, 0x0,
    0x0, 0x1, 0x50, 0xe1, 0x27, 0x0, 0x62, 0xf1,
    0xd0, 0xcf, 0xd3, 0xa4, 0x22, 0x0, 0x0,

    /* U+0045 "E" */
    0x0, 0x2e, 0xf2, 0xd0, 0xd0, 0xd0, 0xa0, 0x0,
    0x61, 0x9b, 0x0, 0x0, 0x0, 0x0, 0x0, 0x95,
    0x6c, 0x0, 0x0, 0x0, 0x0, 0x0, 0xc8, 0xd4,
    0xc8, 0xc8, 0x94, 0x0, 0x4, 0xf3, 0x8, 0x0,
    0x0, 0x0, 0x0, 0x2f, 0xd2, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x62, 0xf1, 0xd0, 0xd0, 0xd0, 0x90,
    0x0,

    /* U+0046 "F" */
    0x0, 0x2e, 0xf2, 0xd0, 0xd0, 0xd0, 0xa0, 0x0,
    0x61, 0x96, 0x0, 0x0, 0x0, 0x0, 0x0, 0x95,
    0x60, 0x0, 0x0, 0x0, 0x0, 0x0, 0xc8, 0xd7,
    0xd0, 0xd0, 0x8d, 0x0, 0x4, 0xec, 0x2, 0x0,
    0x0, 0x0, 0x0, 0x2f, 0xc9, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x62, 0x9b, 0x0, 0x0, 0x0, 0x0,
    0x0,

    /* U+0047 "G" */
    0x0, 0x0, 0x53, 0xc3, 0xd3, 0xe2, 0xb3, 0x26,
    0x0, 0x74, 0xc2, 0x21, 0x0, 0x0, 0x57, 0x2a,
    0x16, 0xe9, 0x10, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x55, 0xaa, 0x0, 0x0, 0x0, 0x0, 0x85, 0x1,
    0x5a, 0xac, 0x0, 0x0, 0x0, 0x22, 0xd3, 0x0,
    0x15, 0xe9, 0x46, 0x0, 0x0, 0x69, 0x9e, 0x0,
    0x0, 0x34, 0xbf, 0xdf, 0xd1, 0xaa, 0x24, 0x0,

    /* U+0048 "H" */
    0x0, 0x2e, 0xd2, 0x0, 0x0, 0x0, 0x29, 0xd6,
    0x0, 0x61, 0x9f, 0x0, 0x0, 0x0, 0x5a, 0xa3,
    0x0, 0x95, 0x6c, 0x0, 0x0, 0x0, 0x8c, 0x70,
    0x0, 0xc8, 0xe0, 0xd8, 0xd8, 0xd8, 0xf6, 0x3d,
    0x4, 0xf3, 0x9, 0x0, 0x0, 0x2, 0xf1, 0xc,
    0x2f, 0xd1, 0x0, 0x0, 0x0, 0x28, 0xd7, 0x0,
    0x62, 0x9d, 0x0, 0x0, 0x0, 0x5b, 0xa5, 0x0,

    /* U+0049 "I" */
    0x0, 0x2e, 0xd2, 0x0, 0x61, 0x9e, 0x0, 0x95,
    0x6b, 0x0, 0xc8, 0x37, 0x4, 0xf2, 0x8, 0x2f,
    0xd0, 0x0, 0x62, 0x9d, 0x0,

    /* U+004A "J" */
    0x0, 0x0, 0x78, 0xd0, 0xd7, 0xe9, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x47, 0xb5, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x7a, 0x81, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xad, 0x4d, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xe0, 0x18, 0x0, 0x11, 0x50, 0x0, 0x3a, 0xcd,
    0x0, 0x0, 0x16, 0xbc, 0xd8, 0xcd, 0x34, 0x0,
    0x0,

    /* U+004B "K" */
    0x0, 0x2e, 0xd2, 0x0, 0x0, 0x1f, 0xce, 0x60,
    0x0, 0x61, 0x9f, 0x0, 0x33, 0xd5, 0x40, 0x0,
    0x0, 0x95, 0x6d, 0x4d, 0xd1, 0x27, 0x0, 0x0,
    0x0, 0xc8, 0xa5, 0xf8, 0x5a, 0x0, 0x0, 0x0,
    0x4, 0xf7, 0xa3, 0x33, 0xdf, 0x11, 0x0, 0x0,
    0x2f, 0xd2, 0x0, 0x0, 0x78, 0xa6, 0x0, 0x0,
    0x62, 0x9d, 0x0, 0x0, 0x3, 0xc7, 0x54, 0x0,

    /* U+004C "L" */
    0x0, 0x2e, 0xd2, 0x0, 0x0, 0x0, 0x0, 0x61,
    0x9e, 0x0, 0x0, 0x0, 0x0, 0x95, 0x6b, 0x0,
    0x0, 0x0, 0x0, 0xc8, 0x38, 0x0, 0x0, 0x0,
    0x4, 0xf3, 0x9, 0x0, 0x0, 0x0, 0x2f, 0xd2,
    0x0, 0x0, 0x0, 0x0, 0x62, 0xf1, 0xd0, 0xd0,
    0xd0, 0x52,

    /* U+004D "M" */
    0x0, 0x2e, 0xe9, 0x5, 0x0, 0x0, 0x0, 0xb,
    0xd4, 0x46, 0x0, 0x61, 0xfe, 0x54, 0x0, 0x0,
    0x0, 0xa7, 0xff, 0x12, 0x0, 0x95, 0x9a, 0xb9,
    0x0, 0x0, 0x6e, 0xab, 0xde, 0x0, 0x0, 0xc8,
    0x2e, 0xcd, 0x20, 0x3a, 0xc0, 0x4e, 0xab, 0x0,
    0x4, 0xee, 0x4, 0x67, 0x9b, 0xcd, 0x1a, 0x7c,
    0x78, 0x0, 0x2f, 0xc8, 0x0, 0xc, 0xed, 0x3e,
    0x0, 0xaf, 0x44, 0x0, 0x62, 0x95, 0x0, 0x0,
    0x13, 0x0, 0x0, 0xe1, 0x12, 0x0,

    /* U+004E "N" */
    0x0, 0x2e, 0xf0, 0x15, 0x0, 0x0, 0x29, 0xd6,
    0x0, 0x61, 0xf0, 0x9b, 0x0, 0x0, 0x5c, 0xa3,
    0x0, 0x95, 0x71, 0xda, 0x32, 0x0, 0x8e, 0x70,
    0x0, 0xc8, 0x36, 0x50, 0xc4, 0x0, 0xc1, 0x3d,
    0x4, 0xf2, 0x8, 0x0, 0xbb, 0x5c, 0xef, 0xc,
    0x2f, 0xd0, 0x0, 0x0, 0x2b, 0xec, 0xd7, 0x0,
    0x62, 0x9d, 0x0, 0x0, 0x0, 0x92, 0xa5, 0x0,

    /* U+004F "O" */
    0x0, 0x0, 0x55, 0xc4, 0xd3, 0xde, 0xa8, 0x1a,
    0x0, 0x0, 0x75, 0xc0, 0x1d, 0x0, 0x2, 0x7e,
    0xc9, 0x0, 0x16, 0xe8, 0x11, 0x0, 0x0, 0x0,
    0x0, 0xef, 0x1b, 0x55, 0xaa, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xee, 0x14, 0x5b, 0xac, 0x0, 0x0,
    0x0, 0x0, 0x42, 0xcf, 0x0, 0x17, 0xeb, 0x44,
    0x0, 0x0, 0x3b, 0xdc, 0x3c, 0x0, 0x0, 0x39,
    0xc3, 0xdf, 0xd6, 0xb2, 0x32, 0x0, 0x0,

    /* U+0050 "P" */
    0x0, 0x2e, 0xf3, 0xd0, 0xd1, 0xd1, 0x4e, 0x0,
    0x0, 0x61, 0x9e, 0x0, 0x0, 0x27, 0xf1, 0x4,
    0x0, 0x95, 0x6d, 0x0, 0x0, 0x2, 0xf5, 0xa,
    0x0, 0xc8, 0x3c, 0x0, 0x5, 0x82, 0xb1, 0x0,
    0x4, 0xf5, 0xd3, 0xd0, 0xd1, 0x8f, 0xe, 0x0,
    0x2f, 0xd1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x62, 0x9d, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+0051 "Q" */
    0x0, 0x0, 0x5e, 0xc7, 0xd3, 0xdd, 0xac, 0x1f,
    0x0, 0x0, 0x87, 0xb5, 0x19, 0x0, 0x1, 0x71,
    0xd4, 0x1, 0x21, 0xe4, 0xa, 0x0, 0x0, 0x0,
    0x0, 0xec, 0x1d, 0x5b, 0xa4, 0x0, 0x0, 0x0,
    0x0, 0x5, 0xf1, 0xe, 0x4f, 0xc1, 0x0, 0x0,
    0x0, 0x0, 0x6c, 0xad, 0x0, 0x7, 0xcb, 0x9b,
    0x47, 0x46, 0x94, 0xc9, 0x16, 0x0, 0x0, 0x8,
    0x5f, 0xb6, 0xf2, 0x59, 0xd, 0x1d, 0x0, 0x0,
    0x0, 0x0, 0x3, 0x7a, 0xc1, 0xb4, 0x3c, 0x0,

    /* U+0052 "R" */
    0x0, 0x2e, 0xf3, 0xd0, 0xd1, 0xd3, 0x53, 0x0,
    0x0, 0x61, 0x9e, 0x0, 0x0, 0x24, 0xf2, 0x5,
    0x0, 0x95, 0x6d, 0x0, 0x0, 0x1, 0xf3, 0xc,
    0x0, 0xc8, 0x3d, 0x0, 0x3, 0x7b, 0xb7, 0x0,
    0x4, 0xf5, 0xcb, 0xc8, 0xf6, 0x95, 0xe, 0x0,
    0x2f, 0xd4, 0x0, 0x0, 0xa2, 0x6f, 0x0, 0x0,
    0x62, 0xa1, 0x0, 0x0, 0x1a, 0xe2, 0x13, 0x0,

    /* U+0053 "S" */
    0x0, 0x24, 0xb5, 0xcd, 0xce, 0xb9, 0x10, 0x0,
    0xc8, 0x47, 0x0, 0x0, 0x28, 0x0, 0x0, 0xdb,
    0x62, 0x2, 0x0, 0x0, 0x0, 0x0, 0x2f, 0xba,
    0xe5, 0x8d, 0xb, 0x0, 0x0, 0x0, 0x0, 0x16,
    0xaf, 0x8d, 0x0, 0x52, 0x15, 0x0, 0x0, 0x90,
    0x7b, 0x0, 0x72, 0xcf, 0xd0, 0xce, 0x92, 0x7,
    0x0,

    /* U+0054 "T" */
    0x25, 0xd0, 0xd0, 0xfa, 0xd5, 0xd0, 0x7e, 0x0,
    0x0, 0x7, 0xf3, 0x4, 0x0, 0x0, 0x0, 0x0,
    0x35, 0xca, 0x0, 0x0, 0x0, 0x0, 0x0, 0x68,
    0x98, 0x0, 0x0, 0x0, 0x0, 0x0, 0x9a, 0x65,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xcd, 0x33, 0x0,
    0x0, 0x0, 0x0, 0x5, 0xf3, 0x6, 0x0, 0x0,
    0x0,

    /* U+0055 "U" */
    0x0, 0x3e, 0xc2, 0x0, 0x0, 0x0, 0x4d, 0xae,
    0x0, 0x73, 0x8e, 0x0, 0x0, 0x0, 0x80, 0x7a,
    0x0, 0xa7, 0x5a, 0x0, 0x0, 0x0, 0xb3, 0x47,
    0x0, 0xda, 0x27, 0x0, 0x0, 0x0, 0xe5, 0x14,
    0x0, 0xfa, 0x5, 0x0, 0x0, 0x2a, 0xcf, 0x0,
    0x0, 0xd7, 0x4b, 0x0, 0xc, 0xb6, 0x5e, 0x0,
    0x0, 0x36, 0xc9, 0xd8, 0xd3, 0x6d, 0x0, 0x0,

    /* U+0056 "V" */
    0xa, 0xf4, 0x8, 0x0, 0x0, 0x0, 0x5e, 0xae,
    0x0, 0xc8, 0x3e, 0x0, 0x0, 0x15, 0xdd, 0x19,
    0x0, 0x8a, 0x7a, 0x0, 0x0, 0xa7, 0x66, 0x0,
    0x0, 0x4c, 0xb7, 0x0, 0x4b, 0xc0, 0x1, 0x0,
    0x0, 0x11, 0xee, 0xf, 0xda, 0x26, 0x0, 0x0,
    0x0, 0x0, 0xd1, 0xbe, 0x7a, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x93, 0xd1, 0x4, 0x0, 0x0, 0x0,

    /* U+0057 "W" */
    0xbf, 0x3d, 0x0, 0x0, 0x3d, 0xfd, 0x7, 0x0,
    0x0, 0x75, 0x8b, 0x9d, 0x5f, 0x0, 0x0, 0xc6,
    0xe5, 0x27, 0x0, 0x10, 0xde, 0x12, 0x7b, 0x81,
    0x0, 0x53, 0xa6, 0x9e, 0x4a, 0x0, 0x89, 0x7a,
    0x0, 0x58, 0xa4, 0x4, 0xd2, 0x21, 0x7a, 0x6d,
    0x1c, 0xdd, 0xa, 0x0, 0x36, 0xc6, 0x69, 0x8e,
    0x0, 0x56, 0x90, 0x9c, 0x69, 0x0, 0x0, 0x14,
    0xec, 0xd7, 0x12, 0x0, 0x32, 0xd6, 0xd8, 0x5,
    0x0, 0x0, 0x0, 0xf1, 0x76, 0x0, 0x0, 0xe,
    0xff, 0x58, 0x0, 0x0, 0x0,

    /* U+0058 "X" */
    0x0, 0x0, 0x8e, 0x7d, 0x0, 0x0, 0x52, 0xc4,
    0xc, 0x0, 0x0, 0x12, 0xe1, 0x15, 0x44, 0xcb,
    0x11, 0x0, 0x0, 0x0, 0x0, 0x75, 0xb6, 0xd0,
    0x18, 0x0, 0x0, 0x0, 0x0, 0x0, 0x36, 0xff,
    0x44, 0x0, 0x0, 0x0, 0x0, 0x0, 0x24, 0xd7,
    0x87, 0xaf, 0x0, 0x0, 0x0, 0x0, 0x1c, 0xd6,
    0x3a, 0x2, 0xd1, 0x3c, 0x0, 0x0, 0x14, 0xd2,
    0x4a, 0x0, 0x0, 0x49, 0xc8, 0x0, 0x0,

    /* U+0059 "Y" */
    0x7, 0xe1, 0xe, 0x0, 0x0, 0x26, 0xd3, 0x16,
    0x0, 0x8d, 0x6c, 0x0, 0xe, 0xcf, 0x34, 0x0,
    0x0, 0x26, 0xd3, 0x2, 0xb1, 0x5f, 0x0, 0x0,
    0x0, 0x0, 0xbd, 0xb3, 0x92, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x64, 0xcd, 0x4, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x80, 0x81, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xb3, 0x4d, 0x0, 0x0, 0x0, 0x0,

    /* U+005A "Z" */
    0x0, 0x0, 0x92, 0xd0, 0xd0, 0xd0, 0xee, 0xe3,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x42, 0xe0,
    0x2b, 0x0, 0x0, 0x0, 0x0, 0x0, 0x40, 0xe1,
    0x2d, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3d, 0xe1,
    0x2e, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3b, 0xe1,
    0x30, 0x0, 0x0, 0x0, 0x0, 0x0, 0x39, 0xe1,
    0x32, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7, 0xf0,
    0xea, 0xd0, 0xd0, 0xd0, 0xac, 0x0, 0x0,

    /* U+00B0 "°" */
    0x37, 0x7e, 0x60, 0x0, 0x8e, 0x0, 0x67, 0x2b,
    0x8e, 0x0, 0x67, 0x2a, 0x37, 0x7e, 0x60, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 43, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 36, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 107, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 53, .adv_w = 59, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 81, .adv_w = 92, .box_w = 7, .box_h = 7, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 130, .adv_w = 92, .box_w = 7, .box_h = 7, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 179, .adv_w = 107, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 228, .adv_w = 92, .box_w = 7, .box_h = 7, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 277, .adv_w = 99, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 326, .adv_w = 96, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 375, .adv_w = 103, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 424, .adv_w = 99, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 466, .adv_w = 117, .box_w = 8, .box_h = 7, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 522, .adv_w = 121, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 578, .adv_w = 116, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 634, .adv_w = 132, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 697, .adv_w = 107, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 746, .adv_w = 102, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 795, .adv_w = 124, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 851, .adv_w = 130, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 907, .adv_w = 50, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 928, .adv_w = 82, .box_w = 7, .box_h = 7, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 977, .adv_w = 115, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1033, .adv_w = 95, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1075, .adv_w = 153, .box_w = 10, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1145, .adv_w = 130, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1201, .adv_w = 134, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1264, .adv_w = 116, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1320, .adv_w = 134, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1392, .adv_w = 116, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1448, .adv_w = 99, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1497, .adv_w = 94, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1546, .adv_w = 127, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1602, .adv_w = 114, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1658, .adv_w = 180, .box_w = 11, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1735, .adv_w = 108, .box_w = 9, .box_h = 7, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1798, .adv_w = 104, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1854, .adv_w = 105, .box_w = 9, .box_h = 7, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1917, .adv_w = 67, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 3}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0xe
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 15, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 2, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    },
    {
        .range_start = 48, .range_length = 10, .glyph_id_start = 3,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 65, .range_length = 26, .glyph_id_start = 13,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 176, .range_length = 1, .glyph_id_start = 39,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 0, 1, 2, 0, 3, 4, 5,
    6, 7, 8, 9, 2, 10, 11, 12,
    13, 14, 15, 16, 17, 17, 18, 19,
    20, 17, 17, 13, 21, 13, 22, 23,
    24, 18, 25, 25, 26, 27, 28, 29
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 1, 2, 3, 4, 5, 6,
    7, 2, 8, 9, 10, 11, 12, 13,
    12, 12, 12, 13, 12, 12, 14, 12,
    12, 12, 12, 13, 12, 13, 12, 15,
    16, 17, 18, 18, 19, 20, 21, 22
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, -2, -2, 2, 2, -1, 0, -2,
    2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -10, -2, 0,
    0, 0, -2, 0, 0, -1, 0, 0,
    -1, 0, 0, -4, 0, -3, 0, -4,
    -5, -5, -3, 0, 2, 0, 0, 0,
    0, -3, 0, 0, 0, 0, 0, 0,
    0, 2, 0, -1, 0, -2, 0, -3,
    0, 0, 0, 0, 0, -1, -1, 0,
    -2, -2, 0, 0, 0, 0, 0, 0,
    0, -1, 0, -2, -2, -2, 0, -2,
    3, 0, -4, 0, -2, 0, 0, -8,
    2, -1, 0, 0, 2, 0, -1, -8,
    0, -8, -2, -14, -1, -5, 0, 0,
    0, -1, -1, 0, -1, -2, 0, 0,
    0, 0, 0, -2, 0, -2, 0, -1,
    -2, -1, 0, -2, 2, 0, 0, 0,
    0, 0, 0, -1, 0, 0, 1, 0,
    0, 0, 0, -2, 0, -2, -1, -2,
    0, -3, -8, -3, 2, 0, -1, -10,
    -3, 0, -3, 0, -10, 0, -3, -4,
    -1, 0, 0, 1, 0, 1, -1, 1,
    2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -1, 0, 0, 0, 0, -2,
    0, -3, -4, -4, 0, 0, 5, -1,
    -7, 0, 2, -2, 0, -8, -1, -2,
    2, 0, -2, 2, 0, -6, -2, -6,
    -5, -7, 0, -15, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, -1, -2, -2,
    0, 0, 2, -4, 2, -1, 0, -4,
    -2, 0, -2, -2, -3, 0, -2, 0,
    0, -1, 0, -1, -3, -2, 0, 2,
    -3, 0, -2, -2, -2, 0, 0, 0,
    0, 0, -2, 0, 0, -2, 0, -2,
    0, -4, -4, -5, -1, 2, 2, -2,
    0, -1, -2, -5, -1, -1, -1, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    -1, -1, 0, 0, -2, -2, 2, 0,
    0, -8, -3, 2, -3, 1, -5, 0,
    -1, -2, 0, 1, 0, 0, -3, 0,
    0, 5, 2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 0, 0, 0, 0, -1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, 0, 0, -2, 0, 0,
    -2, -2, 0, 0, 0, -4, 3, 0,
    -1, -8, 0, 0, -4, -2, -4, 0,
    -4, 0, -2, -7, -2, -6, -6, -8,
    0, -2, 5, -4, -6, 0, 0, -5,
    0, -8, -1, -2, 0, 0, -2, 0,
    -1, -10, -2, -8, -2, -12, 0, -10,
    -4, 0, 0, -1, -2, -5, -2, 0,
    -1, 0, -7, -2, 0, -5, 0, -5,
    -1, -3, -4, -2, -3, 3, 0, 0,
    0, 0, -1, -3, 0, 0, 0, 0,
    0, 0, 0, -2, 0, -2, 0, 0,
    -3, -2, 0, 2, 3, 0, -2, 0,
    -1, 2, 0, -2, 0, -2, 0, 0,
    0, 0, 0, -2, 0, 0, -2, -2,
    0, -2, -5, -3, 6, 3, 2, -14,
    -1, 3, -2, 0, -6, 0, -2, -2,
    -1, 2, -2, -1, -5, -1, 0, 6,
    -6, -4, 5, 0, 0, -12, -1, 2,
    -3, -1, -6, -2, -4, -2, -2, -1,
    0, 0, -4, -3, -2, 4, 0, -5,
    2, 0, 0, -8, 0, -2, -4, -3,
    -5, -4, -4, 0, -2, -5, -2, -4,
    -3, -5, -2, -3, -6, -5, 5, -2,
    1, -15, -3, 3, -4, -3, -7, -2,
    -5, -2, -2, -1, -2, -3, -5, 0,
    0, 3, 3, -3, 3, 0, 0, -5,
    0, 0, 0, 0, 0, 0, -1, 0,
    0, 0, 0, 0, -2, 0, 0, 0,
    -10, 0, 7, 5, 3, -6, 1, 7,
    0, 6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 29,
    .right_class_cnt     = 22,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 4,
    .bpp = 8,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t ui_font_Label = {
#else
lv_font_t ui_font_Label = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 8,          /*The maximum line height required by the font*/
    .base_line = 1,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_LABEL*/

