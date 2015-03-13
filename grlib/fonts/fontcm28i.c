//*****************************************************************************
//
// fontcm28i.c - Font definition for the 28pt Cm italic font.
//
// Copyright (c) 2011-2014 Texas Instruments Incorporated.  All rights reserved.
// Software License Agreement
// 
// Texas Instruments (TI) is supplying this software for use solely and
// exclusively on TI's microcontroller products. The software is owned by
// TI and/or its suppliers, and is protected under applicable copyright
// laws. You may not combine this software with "viral" open-source
// software in order to form a larger program.
// 
// THIS SOFTWARE IS PROVIDED "AS IS" AND WITH ALL FAULTS.
// NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT
// NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. TI SHALL NOT, UNDER ANY
// CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
// DAMAGES, FOR ANY REASON WHATSOEVER.
// 
// This is part of revision 2.1.0.12573 of the Tiva Graphics Library.
//
//*****************************************************************************

//*****************************************************************************
//
// This file is generated by ftrasterize; DO NOT EDIT BY HAND!
//
//*****************************************************************************

#include <stdint.h>
#include <stdbool.h>
#include "grlib/grlib.h"

//*****************************************************************************
//
// Details of this font:
//     Characters: 32 to 126 inclusive
//     Style: cm
//     Size: 28 point
//     Bold: no
//     Italic: yes
//     Memory usage: 3536 bytes
//
//*****************************************************************************

//*****************************************************************************
//
// The compressed data for the 28 point Cm italic font.
// Contains characters 32 to 126 inclusive.
//
//*****************************************************************************
static const uint8_t g_pui8Cm28iData[3336] =
{
      5,  11,   0,  38,  64,  24,   9, 226,  99,  99,  99,  98,
    114, 114,  98, 114, 114, 113, 129, 129, 113, 129, 240, 162,
     99,  98,   0,   8,  96,  22,  11, 240, 146,  50,  51,  35,
     51,  35,  81,  65,  65,  65,  81,  65,  65,  65,  65,  65,
      0,  25,  48,  54,  21,   0,   6,  97,  81, 209,  81, 225,
     81, 209,  81, 225,  81, 209,  81, 225,  81, 210,  65, 225,
     81, 127,   3, 145,  66, 210,  65, 225,  81, 210,  65, 159,
      3, 113,  81, 225,  81, 209,  81, 225,  81, 209,  81, 225,
     81, 209,  81, 225,  81, 209,  81,   0,   7,  44,  19,   0,
      6,  36, 210,  50, 178,  81, 177,  97, 162,  82, 162,  82,
    161, 240,  34, 240,  34, 246, 241, 240,  34, 240,  34, 240,
     34, 240,  18, 229, 113,  81,  50,  97,  81,  49,  19,  49,
    100,  68,   0,  17,  64,  71,  21,  98, 161,  98,  33, 129,
    113,  51,  67,  98,  49,  38, 114,  49,  82, 114,  65,  66,
    130,  65,  65, 146,  49,  66, 146,  49,  50, 162,  33,  50,
    193,  33,  34, 226,  49,  65, 225,  65,  17, 194,  49,  49,
    162,  50,  49, 146,  66,  49, 145,  66,  65, 129,  82,  65,
    114,  82,  49, 114,  98,  49,  98, 114,  49,  97, 145,  33,
     97, 163,   0,  14,  59,  21, 240, 212, 242,  50,  82,  98,
     81,  97,  97,  82,  81,  98,  82,  81,  98, 177, 113, 177,
    114,  19,  98, 131,  33,  65,  17, 129,  65,  49,  49,  99,
     34,  33,  65,  82,  20,  49,  65,  82, 130,  49,  66, 161,
     49,  66, 209,  82, 209,  82, 193, 114, 161, 146, 114, 199,
      0,  19,  80,  13,   6, 226,  51,  51,  81,  65,  81,  65,
     65,   0,  14,  16,  31,  12, 145, 161, 161, 162, 161, 161,
    162, 146, 162, 146, 162, 162, 146, 162, 162, 162, 146, 162,
    162, 162, 162, 162, 162, 177, 177, 178, 177, 193, 128,  31,
     12,  97, 193, 178, 177, 178, 162, 162, 162, 162, 162, 162,
    162, 147, 146, 162, 162, 146, 162, 162, 146, 162, 146, 161,
    162, 161, 161, 161, 161, 176,  24,  12,  97, 177, 161, 114,
     33,  34,  66,  17,  17, 131, 131, 129,  17,  18,  66,  33,
     34, 113, 161, 177,   0,  25,  41,  18,   0,  12,  49, 240,
     33, 240,  33, 240,  33, 240,  33, 240,  17, 240,  33, 240,
     33, 240,  33, 159,   1, 145, 240,  33, 240,  33, 240,  33,
    240,  17, 240,  33, 240,  33, 240,  33,   0,  12,  80,  14,
      6,   0,  13,  98,  51,  51,  81,  65,  81,  65,  65, 240,
     32,   8,   9,   0,  16, 119,   0,  13,  96,  10,   5,   0,
     11,  50,  35,  34, 240, 240, 128,  59,  18, 241, 240,  18,
    240,  17, 240,  17, 240,  33, 240,  17, 240,  33, 240,  17,
    240,  18, 240,  17, 240,  18, 240,  17, 240,  17, 240,  33,
    240,  17, 240,  33, 240,  17, 240,  18, 240,  17, 240,  18,
    240,  17, 240,  17, 240,  33, 240,  17, 240,  33, 240,  17,
    240,  18, 240,  17, 240,  32,  43,  14, 240, 240,  68, 146,
     34, 114,  66,  82,  82,  82,  82,  66,  98,  66,  98,  51,
     83,  50,  99,  50,  98,  66,  98,  51,  83,  50,  98,  66,
     98,  66,  83,  66,  82,  82,  66, 114,  34, 148,   0,  13,
     32,  25,  11, 240, 240, 177, 146, 131,  98,  17, 146, 146,
    146, 145, 161, 146, 146, 145, 161, 146, 146, 146, 130, 104,
      0,  10,  44,  15, 240, 240, 116, 146,  50, 114,  82,  97,
     98,  81,  33,  66,  81,  33,  66,  65,  49,  66,  65,  33,
     67,  65,  33,  66,  83,  66, 194, 178, 194, 178, 194, 113,
     66, 113,  81, 114,  74,  81,  68,   0,  13, 112,  40,  16,
    240, 240, 149, 146,  66, 114,  98,  97, 114,  81,  33,  82,
     81,  33,  82,  81,  33,  66, 114,  81, 210, 164, 242, 242,
    226, 226,  82, 114,  82,  98,  97,  99, 113,  66, 165,   0,
     15,  16,  38,  14, 240, 240, 130, 194, 193, 194, 194, 193,
    194, 193, 194, 193, 194, 193, 194,  33, 145,  34, 129,  50,
    113,  65, 113,  81, 101,  18,  81,  85, 161, 209, 194, 194,
    193, 240, 240,  80,  36,  15, 240, 240,  81,  82, 104, 118,
    145, 225, 209, 225, 225,  20, 129,  17,  50, 114,  82, 210,
    210, 210,  66,  99,  66,  98,  81,  99,  81,  98, 113,  51,
    133,   0,  14,  32,  40,  14, 240, 240,  84, 146,  49, 114,
     50,  98,  66,  82, 179, 178, 179,  20, 100,  50,  83,  81,
     82,  97,  67,  97,  67,  82,  66,  98,  66,  98,  66,  82,
     82,  81, 114,  49, 148,   0,  13,  32,  38,  15, 240, 240,
     49,  19,  65,  65,  20,  49,  83,  33,  49,  81,  65,  33,
     81,  99,  81, 113,  81, 129,  81, 113, 225, 209, 210, 209,
    210, 210, 209, 210, 210, 195, 194,   0,  14,  48,  41,  15,
    240, 240, 116, 146,  50, 114,  82,  97,  98,  82,  98,  82,
     82,  99,  65, 131,  33, 164, 180, 146,  35, 114,  67,  82,
     98,  66, 114,  66, 114,  66, 113,  82,  97, 114,  65, 149,
      0,  14,  16,  40,  15, 240, 240, 116, 146,  50, 114,  82,
     98,  82,  82,  98,  82,  98,  67,  98,  66,  99,  66,  99,
     66,  83,  82,  83,  98,  52, 116,  18, 210, 194, 209, 114,
     65, 113,  66, 149,   0,  14,  32,  15,   7,   0,   8,  34,
     67,  66,   0,   5,  98,  67,  66,   0,   6,  96,  19,   8,
      0,   9,  66,  83,  82,   0,   6,  66,  98,  98, 113, 113,
     97,  97, 113, 240, 128,  25,   9,   0,   8,  66,  99,  98,
    240, 161, 129, 113, 129, 129, 114, 114, 114,  98, 114, 114,
     99,  99,  99,  98, 240,  16,  13,  20,   0,  27,  95,   2,
      0,  10,  47,   2,   0,  27, 112,  35,  12,   0,  11,  66,
    147, 146, 240, 240,  50, 145,  33, 113,  49, 162, 146, 131,
    130, 146,  66,  50,  82,  34, 113,  33, 113,  49, 113,  49,
     97,  81,  65, 116, 240,  48,  33,  11, 243, 113,  49,  81,
     81,  49,  97,  33, 113,  33,  98,  34,  81,  50,  50, 130,
    130, 130, 130, 145,  33, 113,  17, 146, 240, 242, 131, 130,
      0,  10,  96,  68,  19,   0,   5, 117, 178,  82, 146, 129,
    113,  52,  49,  97,  35,  49,  49,  65,  34,  81,  49,  65,
     34,  97,  33,  49,  34, 113,  33,  49,  34, 113,  33,  33,
     34, 114,  33,  33,  34, 114,  33,  33,  34, 113,  33,  49,
     34,  98,  33,  49,  34,  83,  33,  49,  50,  49,  18,  17,
     81,  52,  51,  82, 240,  50, 115, 151,   0,  17,  80,  45,
     19, 240, 240,  17, 240,  49, 240,  34, 240,  34, 240,  20,
    225,  34, 225,  34, 209,  50, 209,  50, 193,  66, 193,  66,
    177,  82, 161,  98, 169, 145, 114, 145, 114, 129, 130, 129,
    130, 113, 147,  69,  87,   0,  16, 112,  42,  20, 240, 240,
    236, 178,  98, 146, 114, 146, 115, 130, 115, 130, 114, 130,
    130, 130, 114, 146,  83, 168, 178, 114, 146, 130, 130, 130,
    130, 130, 114, 146, 114, 130, 130, 115, 130,  99, 108,   0,
     18,  64,  44,  19,   0,   5, 101, 195,  65,  33, 114, 115,
     98, 146,  82, 161,  82, 177,  81, 193,  66, 240,  34, 240,
     18, 240,  34, 240,  34, 240,  34, 177,  82, 177,  82, 161,
    114, 145, 114, 114, 146,  81, 213,   0,  17, 112,  43,  21,
      0,   5, 123, 194,  98, 162, 130, 146, 145, 146, 146, 130,
    146, 114, 162, 114, 162, 114, 162, 114, 147,  98, 162, 114,
    162, 114, 162, 114, 146, 114, 146, 130, 146, 130, 130, 146,
     98, 139,   0,  19,  80,  42,  20, 240, 240, 238, 131, 114,
    130, 145, 130, 145, 130, 145, 115, 240,  34,  81, 194,  81,
    194,  65, 200, 194,  81, 194,  81, 194, 240,  35, 145, 114,
    161, 114, 145, 130, 130, 115, 114, 110,   0,  18,  32,  41,
     20, 240, 240, 238, 131,  99, 130, 129, 146, 129, 146, 129,
    131, 129, 130,  81, 194,  65, 210,  65, 200, 194,  81, 194,
     81, 194, 240,  35, 240,  34, 240,  50, 240,  50, 240,  35,
    247,   0,  19,  16,  47,  20,   0,   6,   5,  65, 131,  66,
     17, 130, 115, 114, 146,  98, 162,  82, 177,  98, 177,  82,
    240,  50, 240,  35, 240,  34, 240,  50, 134,  66, 162,  98,
    162,  98, 162, 114, 146, 114, 130, 147,  66,  17, 181,  49,
      0,  18,  48,  43,  23,   0,   6,  54,  55, 146, 114, 178,
    130, 178, 130, 178, 130, 178, 114, 179, 114, 178, 130, 178,
    130, 187, 179, 114, 178, 130, 178, 130, 178, 114, 178, 130,
    178, 130, 178, 130, 178, 114, 151,  54,   0,  21,  26,  14,
    240, 240,  55, 146, 194, 194, 178, 194, 194, 179, 178, 194,
    194, 179, 178, 194, 194, 178, 194, 194, 151,   0,  13,  16,
     29,  16, 240, 240, 151, 194, 226, 226, 226, 210, 226, 226,
    226, 210, 226, 226, 211, 210, 226, 115,  66, 115,  50, 129,
     66, 165,   0,  15,  32,  48,  23,   0,   6,  39,  85, 131,
    130, 162, 129, 194, 113, 210,  97, 211,  81, 226,  66, 242,
     49, 240,  34,  35, 243,  17,  18, 242,  17,  35, 227,  66,
    226,  82, 211,  98, 194, 114, 194, 114, 194, 130, 163, 130,
    135,  70,   0,  20, 112,  32,  17, 240, 240, 136, 179, 226,
    242, 242, 227, 226, 242, 242, 227, 226, 242, 242, 129,  82,
    129,  98, 129,  98, 114,  98, 113,  99,  83,  77,   0,  15,
     48,  74,  27,   0,   7,  37, 181, 146, 163, 177,  17, 145,
     18, 177,  17, 145,  18, 177,  18, 113,  18, 177,  34, 113,
     18, 177,  34,  97,  34, 177,  34,  97,  34, 177,  34,  81,
     49, 177,  50,  65,  50, 177,  50,  65,  50, 177,  50,  49,
     66, 177,  50,  49,  65, 177,  81,  33,  66, 177,  83,  82,
    177,  83,  82, 177,  82,  97, 178,  82,  82, 150,  49,  70,
      0,  24,  64,  56,  23,   0,   6,  37, 102, 131, 130, 164,
    113, 177,  18, 113, 177,  18,  97, 177,  35,  81, 177,  50,
     81, 177,  50,  81, 177,  51,  49, 177,  82,  49, 177,  82,
     49, 177,  98,  33, 177,  98,  17, 177, 114,  17, 177, 131,
    177, 131, 177, 130, 178, 145, 149, 129,   0,  21,  32,  43,
     19,   0,   5, 102, 178,  82, 146, 114, 114, 145,  98, 162,
     66, 178,  66, 178,  50, 194,  50, 194,  35, 179,  34, 194,
     50, 194,  50, 178,  66, 178,  66, 162,  98, 130, 114, 114,
    146,  67, 182,   0,  17, 112,  41,  20, 240, 240, 251, 178,
     98, 162, 114, 146, 114, 130, 130, 130, 130, 130, 114, 145,
    130, 130,  98, 169, 178, 240,  50, 240,  34, 240,  50, 240,
     50, 240,  50, 240,  34, 240,  50, 247,   0,  19,  16,  55,
     19,   0,   5, 101, 195,  66, 146, 114, 114, 130,  98, 162,
     66, 178,  66, 178,  50, 194,  50, 194,  50, 194,  34, 194,
     50, 194,  50, 178,  66, 178,  66, 162,  97,  51,  65, 114,
     18,  33,  18, 147,  50, 198, 240,  49,  65, 209,  65, 210,
     33, 229, 243, 240, 240, 240,  44,  19, 240, 240, 202, 179,
     82, 146, 114, 130, 114, 130, 114, 114, 130, 114, 114, 130,
    113, 146,  82, 152, 178,  82, 162,  98, 146,  98, 130, 114,
    130, 114, 130,  99, 130,  99,  33,  66, 115,  33,  39,  84,
      0,  17,  42,  18, 240, 240, 213,  49, 130,  65,  17, 129,
    114, 114, 114,  98, 130,  98, 129, 114, 240,  19, 240,  22,
    215, 244, 240,  18,  97, 146,  97, 146,  97, 146,  82, 130,
     98, 114, 113,  18,  66, 181,   0,  17,  47,  19, 240, 240,
    175,  50,  82,  82,  49,  98,  81,  65,  82,  97,  49,  98,
     97,  49,  98,  97, 162, 240,  18, 240,  34, 240,  34, 240,
     34, 240,  18, 240,  34, 240,  34, 240,  34, 240,  18, 240,
     34, 240,  34, 217,   0,  17, 112,  44,  19, 240, 240, 151,
     69,  82, 145, 114, 145, 114, 129, 114, 145, 114, 145, 114,
    129, 115, 129, 114, 145, 114, 145, 114, 129, 115, 129, 114,
    145, 114, 145, 114, 129, 130, 129, 145, 113, 162,  66, 212,
      0,  18,  16,  44,  19, 240, 240, 134, 101,  66, 161,  98,
    145, 114, 145, 114, 129, 130, 113, 146, 113, 146,  97, 162,
     97, 163,  65, 194,  49, 210,  49, 210,  33, 226,  33, 226,
     17, 243, 240,  19, 240,  18, 240,  33,   0,  18,  64,  69,
     26,   0,   6,  70,  54,  69,  51, 114, 129,  83, 114, 113,
    114, 114, 113, 114,  99,  97, 130,  81,  18,  97, 130,  81,
     18,  81, 146,  65,  34,  81, 146,  65,  34,  65, 162,  49,
     50,  65, 162,  49,  50,  49, 178,  33,  66,  33, 194,  33,
     66,  33, 194,  17,  82,  17, 211,  98,  17, 211,  99, 226,
    115, 226, 114, 241, 130,   0,  24,  48,  51,  23,   0,   6,
     55,  69, 147, 114, 194,  97, 226,  81, 243,  65, 240,  18,
     49, 240,  35,  17, 240,  67, 240,  82, 240,  99, 240,  65,
     18, 240,  49,  34, 240,  49,  35, 240,  17,  66, 241,  83,
    209, 114, 193, 130, 178, 131, 118,  87,   0,  20,  96,  44,
     20, 240, 240, 166, 117,  66, 161, 114, 145, 131, 113, 162,
     97, 178,  97, 179,  65, 210,  49, 226,  33, 244, 240,  34,
    240,  50, 240,  49, 240,  50, 240,  50, 240,  50, 240,  50,
    240,  34, 240,  22,   0,  19,  16,  44,  19, 240, 240, 220,
    115,  98, 129, 114, 129, 130, 129, 114, 145,  98, 240,  18,
    240,  18, 240,  18, 240,  34, 240,  18, 240,  18, 240,  18,
     97, 146, 113, 130, 113, 146, 113, 130, 114, 114, 115, 108,
      0,  17,  64,  31,  12, 115, 129, 177, 177, 177, 161, 177,
    177, 177, 161, 177, 177, 177, 161, 177, 177, 177, 161, 177,
    177, 177, 161, 177, 177, 177, 161, 177, 179, 144,  20,  10,
    240, 193,  65,  49,  65,  49,  65,  49,  81,  49,  83,  19,
     51,  19,  50,  34,   0,  23,  31,  12, 100, 161, 177, 177,
    177, 161, 177, 177, 177, 161, 177, 177, 177, 161, 177, 177,
    177, 161, 177, 177, 177, 161, 177, 177, 177, 177, 161, 147,
    144,  12,   9, 240, 113,  98,  17,  65,  49,  49,  81,   0,
     25,   8,   5, 178,  35,  34,   0,  14,  96,  12,   6, 241,
     65,  65,  65,  81,  83,  51,  50,   0,  14,  34,  13,   0,
     15,  20, 130,  33,  17,  82,  66,  66,  82,  66,  82,  51,
     81,  66,  82,  66,  82,  66,  81,  82,  66,  33,  49,  49,
     17,  33,  67,  50,   0,  11,  96,  36,  12, 240, 180, 161,
    162, 162, 162, 161, 162, 162,  19,  99,  34,  67,  66,  50,
     82,  50,  82,  35,  82,  34,  83,  34,  82,  50,  82,  50,
     66,  82,  34, 116,   0,  11,  32,  25,  11,   0,  12, 116,
     98,  49,  66,  50,  50,  66,  50, 131, 130, 146, 146,  97,
     34,  82,  50,  50,  84,   0,  10,  32,  42,  14, 240, 240,
    100, 194, 194, 193, 209, 194, 194, 116,  17, 114,  33,  17,
     98,  66,  82,  82,  82,  81,  83,  81,  82,  82,  82,  82,
     82,  81,  98,  66,  33,  65,  49,  17,  33,  83,  50,   0,
     12,  96,  25,  11,   0,  12, 116,  98,  49,  66,  65,  50,
     81,  50,  50,  55,  66, 146, 146, 146,  97,  50,  50,  84,
      0,  10,  32,  33,  15, 240, 240, 148, 162,  18, 162, 209,
    210, 210, 210, 167, 162, 210, 210, 210, 209, 210, 210, 210,
    210, 209, 210, 210, 209, 210, 162,  17, 179, 240, 240, 192,
     37,  14,   0,  16,  68, 146,  33,  17,  98,  66,  82,  82,
     82,  82,  67,  81,  82,  82,  82,  82,  82,  82,  82,  66,
    114,  35, 131,  18, 193, 194, 194,  83,  50, 117, 240, 240,
     96,  42,  15, 240, 240,  36, 210, 210, 209, 225, 210, 210,
    210,  20, 129,  17,  50,  99,  66,  98,  82,  98,  82,  82,
     83,  82,  82,  98,  82,  98,  66,  49,  34,  82,  33,  50,
     82,  18,  50,  99,   0,  13,  80,  29,   9, 240, 240,  34,
     99, 240, 240, 163,  81,  34,  49,  50,  49,  35,  98, 114,
     98, 114,  99,  33,  50,  49,  50,  33,  83,   0,   8,  48,
     33,  13,   0,   6,   2, 163,   0,   7,  67, 145,  34, 113,
     50,  97,  66,  97,  66, 162, 178, 178, 163, 162, 178, 178,
    162, 178, 163,  98,  19, 116, 240, 240,  80,  41,  13, 240,
    227, 178, 178, 178, 177, 193, 178, 178,  51,  81,  49,  33,
     66,  33,  34,  66,  17, 147, 161,  18, 130,  50,  98,  50,
     98,  50,  17,  65,  66,  17,  50,  66,  17,  50,  82,   0,
     11, 112,  28,   8, 240,  52,  98,  98,  97,  98,  98,  98,
     82,  98,  98,  98,  82,  98,  98,  82,  98,  33,  50,  33,
     50,  33,  67,   0,   7,  64,  51,  23,   0,  26,  18,  52,
     52,  97,  18,  17,  50,  17,  50,  65,  50,  67,  66,  65,
     34,  82,  82, 114,  82,  82, 113,  97,  83,  98,  82,  82,
    114,  82,  82, 114,  82,  66,  49,  65,  82,  82,  33,  66,
     82,  82,  18,  66,  82,  99,   0,  20,  80,  38,  16,   0,
     18,  34,  52,  97,  18,  17,  50,  65,  35,  66,  65,  34,
     82, 114,  82, 113,  83,  98,  82, 114,  82, 114,  66,  49,
     50,  82,  33,  66,  82,  18,  66,  99,   0,  14,  64,  29,
     13,   0,  15,  36, 114,  50,  82,  82,  50,  98,  50,  98,
     35,  98,  34,  99,  34,  98,  50,  98,  50,  82,  82,  50,
    116,   0,  12,  32,  40,  16,   0,  18,  66,  51, 113,  33,
     17,  34,  97,  34,  66,  65,  49,  82, 114,  82, 114,  82,
    113,  83,  98,  82, 114,  82, 114,  66, 130,  50, 130,  20,
    146, 225, 241, 226, 198, 240, 240, 192,  36,  13,   0,  15,
     20,  33,  82,  33,  17,  82,  66,  66,  82,  66,  82,  51,
     81,  66,  82,  66,  82,  66,  82,  66,  66,  97,  51, 115,
     18, 177, 193, 178, 178, 150, 240, 240,  26,  13,   0,  14,
    114,  51,  65,  33,  17,  34,  49,  34,  50,  33,  34, 178,
    178, 177, 178, 178, 177, 193, 178,   0,  12,  80,  25,  12,
      0,  14,   4, 113,  65,  82,  66,  65,  66,  82, 165, 149,
    162,  50,  82,  50,  81,  65,  82,  85,   0,  11,  32,  29,
     10, 240, 240,  82, 129, 145, 130, 130, 130,  72,  82, 130,
    130, 114, 130, 130, 115,  49,  50,  49,  66,  49,  66,  33,
     99,   0,   9,  48,  38,  15,   0,  17,  19,  97,  66,  18,
     66,  65,  34,  66,  49,  50,  66,  98,  81, 114,  66,  99,
     66,  98,  81, 114,  66,  33,  66,  66,  33,  66,  49,  17,
     17, 100,  35,   0,  13,  64,  33,  13,   0,  14, 115,  66,
     50,  18,  50,  49,  34,  65,  33,  50,  65,  82,  81,  82,
     65,  83,  65,  82,  81,  82,  65,  98,  65,  99,  33, 147,
      0,  12,  16,  46,  18,   0,  20,  67,  81,  50,  50,  18,
     66,  34,  49,  34,  50,  65,  33,  50,  50,  65,  82,  66,
     65,  82,  66,  49,  83,  50,  65,  82,  66,  65,  82,  66,
     65,  82,  66,  49, 114,  33,  17,  49, 131,  36,   0,  16,
     48,  31,  15,   0,  17,  36,  35,  82,  35,  49,  65,  51,
     34,  49,  66, 210, 210, 194, 210, 210,  65,  50,  34,  65,
     65,  51,  34,  83,  36,   0,  13,  96,  41,  14,   0,  16,
      3,  97,  50,  18,  66,  49,  34,  66,  33,  50,  66,  82,
     66,  98,  66,  83,  66,  82,  81,  98,  66,  98,  66,  98,
     51, 116,  17, 194, 194,  98,  50, 114,  34, 132, 240, 240,
    112,  25,  12,   0,  14,   2, 148,  33,  65,  51, 161, 161,
    161, 161, 161, 161,  81,  67,  50,  49,  52,  65,  51,   0,
     11,  16,   8,  14,   0,  22, 108,   0,  24,  96,   9,  27,
      0,  43, 127,  10,   0,  47,  64,  16,  10, 240, 114,  34,
     66,  34,  50,  34,  65,  49,  65,  49,   0,  26, 112,  13,
     11, 240, 147,  49,  49,  33,  33,  49,  66,   0,  32,  16,};

//*****************************************************************************
//
// The font definition for the 28 point Cm italic font.
//
//*****************************************************************************
const tFont g_sFontCm28i =
{
    //
    // The format of the font.
    //
    FONT_FMT_PIXEL_RLE,

    //
    // The maximum width of the font.
    //
    24,

    //
    // The height of the font.
    //
    28,

    //
    // The baseline of the font.
    //
    21,

    //
    // The offset to each character in the font.
    //
    {
           0,    5,   29,   51,  105,  149,  220,  279,
         292,  323,  354,  378,  419,  433,  441,  451,
         510,  553,  578,  622,  662,  700,  736,  776,
         814,  855,  895,  910,  929,  954,  967, 1002,
        1035, 1103, 1148, 1190, 1234, 1277, 1319, 1360,
        1407, 1450, 1476, 1505, 1553, 1585, 1659, 1715,
        1758, 1799, 1854, 1898, 1940, 1987, 2031, 2075,
        2144, 2195, 2239, 2283, 2314, 2334, 2365, 2377,
        2385, 2397, 2431, 2467, 2492, 2534, 2559, 2592,
        2629, 2671, 2700, 2733, 2774, 2802, 2853, 2891,
        2920, 2960, 2996, 3022, 3047, 3076, 3114, 3147,
        3193, 3224, 3265, 3290, 3298, 3307, 3323,
    },

    //
    // A pointer to the actual font data
    //
    g_pui8Cm28iData
};
