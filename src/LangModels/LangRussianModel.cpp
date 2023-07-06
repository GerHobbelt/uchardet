/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* ***** BEGIN LICENSE BLOCK *****
 * Version: MPL 1.1/GPL 2.0/LGPL 2.1
 *
 * The contents of this file are subject to the Mozilla Public License Version
 * 1.1 (the "License"); you may not use this file except in compliance with
 * the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS" basis,
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
 * for the specific language governing rights and limitations under the
 * License.
 *
 * The Original Code is Mozilla Communicator client code.
 *
 * The Initial Developer of the Original Code is
 * Netscape Communications Corporation.
 * Portions created by the Initial Developer are Copyright (C) 1998
 * the Initial Developer. All Rights Reserved.
 *
 * Contributor(s):
 *
 * Alternatively, the contents of this file may be used under the terms of
 * either the GNU General Public License Version 2 or later (the "GPL"), or
 * the GNU Lesser General Public License Version 2.1 or later (the "LGPL"),
 * in which case the provisions of the GPL or the LGPL are applicable instead
 * of those above. If you wish to allow use of your version of this file only
 * under the terms of either the GPL or the LGPL, and not to allow others to
 * use your version of this file under the terms of the MPL, indicate your
 * decision by deleting the provisions above and replace them with the notice
 * and other provisions required by the GPL or the LGPL. If you do not delete
 * the provisions above, a recipient may use your version of this file under
 * the terms of any one of the MPL, the GPL or the LGPL.
 *
 * ***** END LICENSE BLOCK ***** */

#include "../nsSBCharSetProber.h"
#include "../nsSBCharSetProber-generated.h"
#include "../nsLanguageDetector.h"

#include "../nsLanguageDetector-generated.h"

/********* Language model for: Russian *********/

/**
 * Generated by BuildLangModel.py
 * On: 2023-07-06 22:52:08.012147
 **/

/* Character Mapping Table:
 * ILL: illegal character.
 * CTR: control character specific to the charset.
 * RET: carriage/return.
 * SYM: symbol (punctuation) that does not belong to word.
 * NUM: 0 - 9.
 *
 * Other characters are ordered by probabilities
 * (0 is the most common character in the language).
 *
 * Orders are generic to a language. So the codepoint with order X in
 * CHARSET1 maps to the same character as the codepoint with the same
 * order X in CHARSET2 for the same language.
 * As such, it is possible to get missing order. For instance the
 * ligature of 'o' and 'e' exists in ISO-8859-15 but not in ISO-8859-1
 * even though they are both used for French. Same for the euro sign.
 */
static const unsigned char Windows_1251_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM, 28, 48, 41, 42, 27, 51, 47, 46, 29, 57, 53, 39, 43, 33, 32, /* 4X */
   45, 58, 36, 34, 35, 44, 50, 52, 54, 49, 55,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM, 28, 48, 41, 42, 27, 51, 47, 46, 29, 57, 53, 39, 43, 33, 32, /* 6X */
   45, 58, 36, 34, 35, 44, 50, 52, 54, 49, 55,SYM,SYM,SYM,SYM,CTR, /* 7X */
   65, 66,SYM, 67,SYM,SYM,SYM,SYM,SYM,SYM, 68,SYM, 64, 69, 70, 71, /* 8X */
   72,SYM,SYM,SYM,SYM,SYM,SYM,SYM,ILL,SYM, 73,SYM, 64, 74, 75, 76, /* 9X */
  SYM, 63, 63, 62,SYM, 77,SYM,SYM, 40,SYM, 61,SYM,SYM,SYM,SYM, 60, /* AX */
  SYM,SYM, 59, 59, 78,SYM,SYM,SYM, 40,SYM, 61,SYM, 62, 79, 80, 60, /* BX */
    1, 19,  8, 16, 12,  3, 24, 18,  2, 20, 10,  9, 11,  4,  0, 13, /* CX */
    7,  5,  6, 14, 31, 23, 26, 22, 30, 37, 56, 17, 21, 38, 25, 15, /* DX */
    1, 19,  8, 16, 12,  3, 24, 18,  2, 20, 10,  9, 11,  4,  0, 13, /* EX */
    7,  5,  6, 14, 31, 23, 26, 22, 30, 37, 56, 17, 21, 38, 25, 15, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_5_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM, 28, 48, 41, 42, 27, 51, 47, 46, 29, 57, 53, 39, 43, 33, 32, /* 4X */
   45, 58, 36, 34, 35, 44, 50, 52, 54, 49, 55,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM, 28, 48, 41, 42, 27, 51, 47, 46, 29, 57, 53, 39, 43, 33, 32, /* 6X */
   45, 58, 36, 34, 35, 44, 50, 52, 54, 49, 55,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM, 40, 81, 82, 61, 83, 59, 60, 62, 84, 64, 85, 86,SYM, 63, 87, /* AX */
    1, 19,  8, 16, 12,  3, 24, 18,  2, 20, 10,  9, 11,  4,  0, 13, /* BX */
    7,  5,  6, 14, 31, 23, 26, 22, 30, 37, 56, 17, 21, 38, 25, 15, /* CX */
    1, 19,  8, 16, 12,  3, 24, 18,  2, 20, 10,  9, 11,  4,  0, 13, /* DX */
    7,  5,  6, 14, 31, 23, 26, 22, 30, 37, 56, 17, 21, 38, 25, 15, /* EX */
  SYM, 40, 88, 89, 61, 90, 59, 60, 62, 91, 64, 92, 93,SYM, 63, 94, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Koi8_R_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM, 28, 48, 41, 42, 27, 51, 47, 46, 29, 57, 53, 39, 43, 33, 32, /* 4X */
   45, 58, 36, 34, 35, 44, 50, 52, 54, 49, 55,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM, 28, 48, 41, 42, 27, 51, 47, 46, 29, 57, 53, 39, 43, 33, 32, /* 6X */
   45, 58, 36, 34, 35, 44, 50, 52, 54, 49, 55,SYM,SYM,SYM,SYM,CTR, /* 7X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 8X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 9X */
  SYM,SYM,SYM, 40,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM, 40,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
   25,  1, 19, 26, 12,  3, 31, 16, 23,  2, 20, 10,  9, 11,  4,  0, /* CX */
   13, 15,  7,  5,  6, 14, 24,  8, 21, 17, 18, 30, 38, 37, 22, 56, /* DX */
   25,  1, 19, 26, 12,  3, 31, 16, 23,  2, 20, 10,  9, 11,  4,  0, /* EX */
   13, 15,  7,  5,  6, 14, 24,  8, 21, 17, 18, 30, 38, 37, 22, 56, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Ibm855_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM, 28, 48, 41, 42, 27, 51, 47, 46, 29, 57, 53, 39, 43, 33, 32, /* 4X */
   45, 58, 36, 34, 35, 44, 50, 52, 54, 49, 55,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM, 28, 48, 41, 42, 27, 51, 47, 46, 29, 57, 53, 39, 43, 33, 32, /* 6X */
   45, 58, 36, 34, 35, 44, 50, 52, 54, 49, 55,SYM,SYM,SYM,SYM,CTR, /* 7X */
   95, 96, 97, 98, 40, 40, 61, 61, 99,100, 59, 59, 60, 60, 62, 62, /* 8X */
  101,102, 64, 64,103,104,105,106, 63, 63,107,108, 25, 25, 56, 56, /* 9X */
    1,  1, 19, 19, 26, 26, 12, 12,  3,  3, 31, 31, 16, 16,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM, 23, 23,  2,  2,SYM,SYM,SYM,SYM, 20, 20,SYM, /* BX */
  SYM,SYM,SYM,SYM,SYM,SYM, 10, 10,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* CX */
    9,  9, 11, 11,  4,  4,  0,  0, 13,SYM,SYM,SYM,SYM, 13, 15,SYM, /* DX */
   15,  7,  7,  5,  5,  6,  6, 14, 14, 24, 24,  8,  8, 21, 21,SYM, /* EX */
  SYM, 17, 17, 18, 18, 30, 30, 38, 38, 37, 37, 22, 22,SYM,SYM,SYM, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Ibm866_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM, 28, 48, 41, 42, 27, 51, 47, 46, 29, 57, 53, 39, 43, 33, 32, /* 4X */
   45, 58, 36, 34, 35, 44, 50, 52, 54, 49, 55,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM, 28, 48, 41, 42, 27, 51, 47, 46, 29, 57, 53, 39, 43, 33, 32, /* 6X */
   45, 58, 36, 34, 35, 44, 50, 52, 54, 49, 55,SYM,SYM,SYM,SYM,CTR, /* 7X */
    1, 19,  8, 16, 12,  3, 24, 18,  2, 20, 10,  9, 11,  4,  0, 13, /* 8X */
    7,  5,  6, 14, 31, 23, 26, 22, 30, 37, 56, 17, 21, 38, 25, 15, /* 9X */
    1, 19,  8, 16, 12,  3, 24, 18,  2, 20, 10,  9, 11,  4,  0, 13, /* AX */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* CX */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* DX */
    7,  5,  6, 14, 31, 23, 26, 22, 30, 37, 56, 17, 21, 38, 25, 15, /* EX */
   40, 40, 61, 61, 60, 60, 63, 63,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Mac_Cyrillic_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM, 28, 48, 41, 42, 27, 51, 47, 46, 29, 57, 53, 39, 43, 33, 32, /* 4X */
   45, 58, 36, 34, 35, 44, 50, 52, 54, 49, 55,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM, 28, 48, 41, 42, 27, 51, 47, 46, 29, 57, 53, 39, 43, 33, 32, /* 6X */
   45, 58, 36, 34, 35, 44, 50, 52, 54, 49, 55,SYM,SYM,SYM,SYM,CTR, /* 7X */
    1, 19,  8, 16, 12,  3, 24, 18,  2, 20, 10,  9, 11,  4,  0, 13, /* 8X */
    7,  5,  6, 14, 31, 23, 26, 22, 30, 37, 56, 17, 21, 38, 25, 15, /* 9X */
  SYM,SYM,109,SYM,SYM,SYM,SYM, 59,SYM,SYM,SYM,110,111,SYM,112,113, /* AX */
  SYM,SYM,SYM,SYM, 59,SYM,114, 62, 61, 61, 60, 60,115,116, 64, 64, /* BX */
   62,117,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,118,119,120,121,122, /* CX */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, 63, 63,123,124,SYM, 40, 40, 15, /* DX */
    1, 19,  8, 16, 12,  3, 24, 18,  2, 20, 10,  9, 11,  4,  0, 13, /* EX */
    7,  5,  6, 14, 31, 23, 26, 22, 30, 37, 56, 17, 21, 38, 25,SYM, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

#define Unicode_Char_size    114

static const unsigned int Unicode_CharOrder[] =
{
  65, 28, 66, 48, 67, 41, 68, 42, 69, 27, 70, 51, 71, 47, 72, 46,
  73, 29, 75, 53, 76, 39, 77, 43, 78, 33, 79, 32, 80, 45, 82, 36,
  83, 34, 84, 35, 85, 44, 86, 50, 87, 52, 88, 54, 89, 49, 90, 55,
  97, 28, 98, 48, 99, 41, 100, 42, 101, 27, 102, 51, 103, 47, 104, 46,
  105, 29, 107, 53, 108, 39, 109, 43, 110, 33, 111, 32, 112, 45, 114, 36,
  115, 34, 116, 35, 117, 44, 118, 50, 119, 52, 120, 54, 121, 49, 122, 55,
  1025, 40, 1040,  1, 1041, 19, 1042,  8, 1043, 16, 1044, 12, 1045,  3, 1046, 24,
  1047, 18, 1048,  2, 1049, 20, 1050, 10, 1051,  9, 1052, 11, 1053,  4, 1054,  0,
  1055, 13, 1056,  7, 1057,  5, 1058,  6, 1059, 14, 1060, 31, 1061, 23, 1062, 26,
  1063, 22, 1064, 30, 1065, 37, 1066, 56, 1067, 17, 1068, 21, 1069, 38, 1070, 25,
  1071, 15, 1072,  1, 1073, 19, 1074,  8, 1075, 16, 1076, 12, 1077,  3, 1078, 24,
  1079, 18, 1080,  2, 1081, 20, 1082, 10, 1083,  9, 1084, 11, 1085,  4, 1086,  0,
  1087, 13, 1088,  7, 1089,  5, 1090,  6, 1091, 14, 1092, 31, 1093, 23, 1094, 26,
  1095, 22, 1096, 30, 1097, 37, 1098, 56, 1099, 17, 1100, 21, 1101, 38, 1102, 25,
  1103, 15, 1105, 40,
};

static const float OrderToRatio[] =
{
  0.097445328,  0.097445328,  0.077875699,  0.077875699,  0.077856657,  0.077856657,  0.074648273,  0.074648273, 
  0.063240712,  0.063240712,  0.053402677,  0.053402677,  0.053326263,  0.053326263,  0.052336063,  0.052336063, 
  0.043961112,  0.043961112,  0.042025877,  0.042025877,  0.034296410,  0.034296410,  0.029177448,  0.029177448, 
  0.027889163,  0.027889163,  0.026992954,  0.026992954,  0.021312977,  0.021312977,  0.018636312,  0.018636312, 
  0.018399748,  0.018399748,  0.018105081,  0.018105081,  0.015151571,  0.015151571,  0.014338122,  0.014338122, 
  0.013737558,  0.013737558,  0.012705123,  0.012705123,  0.011380218,  0.011380218,  0.009038503,  0.009038503, 
  0.007049070,  0.007049070,  0.005933875,  0.005933875,  0.005730513,  0.005730513,  0.005573048,  0.005573048, 
  0.004961008,  0.004961008,  0.004901440,  0.004901440,  0.004878004,  0.004878004,  0.004517665,  0.004517665, 
  0.003938339,  0.003938339,  0.003877306,  0.003877306,  0.003688348,  0.003688348,  0.003680780,  0.003680780, 
  0.003582394,  0.003582394,  0.003139051,  0.003139051,  0.002761378,  0.002761378,  0.002717923,  0.002717923, 
  0.002595368,  0.002595368,  0.002213302,  0.002213302,  0.001974785,  0.001974785,  0.001889827,  0.001889827, 
  0.001718202,  0.001718202,  0.001598577,  0.001598577,  0.001498483,  0.001498483,  0.001285111,  0.001285111, 
  0.001125205,  0.001125205,  0.001090782,  0.001090782,  0.000887420,  0.000887420,  0.000854218,  0.000854218, 
  0.000798068,  0.000798068,  0.000738988,  0.000738988,  0.000494123,  0.000494123,  0.000352038,  0.000352038, 
  0.000307851,  0.000307851, 
};


/* Model Table:
 * Number of web pages processed for this model: 579
 * Number of characters consumed for this model: 4096143
 * Total considered sequences: 1879 / 3249
 *
 * - Positive sequences: first 925 (0.9950163795787177)
 * - Probable sequences: next 290 (1215-925) (0.003988818378443448)
 * - Neutral sequences: last 2034 (0.0009948020428388604)
 * - Negative sequences: 1370 (off-ratio, TODO)
 */


#define RussianUnicodeAlphabetWidth         57
#define RussianUnicodeCharToOrderIsReduced  0


#define RussianFCMLowerBound  97
#define RussianFCMUpperBound  1105


static const PRUint8 RussianUnicodeCharToOrder[] =
{
  29,49,42,43,28,52,48,47,30,0,54,40,44,34,33,46,0,37,35,36,
  45,51,53,55,50,56,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,20,9,17,13,
  4,25,19,3,21,11,10,12,5,1,14,8,6,7,15,32,24,27,23,31,
  38,57,18,22,39,26,16,0,41,
};

static const PRUint8 RussianCompactedLangModel[] =
{
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,3,3,0,3,3,3,3,3,0,1,
  0,3,3,0,0,0,0,0,3,3,0,3,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,3,3,0,3,3,3,3,3,0,0,
  0,3,3,0,0,1,0,0,3,3,0,3,0,0,1,0,1,0,0,0,0,0,0,0,0,0,1,0,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,3,3,0,3,3,3,3,3,1,1,
  0,3,3,0,0,0,1,0,3,2,0,2,1,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,3,3,0,3,3,3,3,3,0,0,
  0,3,3,0,0,1,1,0,3,2,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,3,3,3,3,3,3,3,3,3,3,2,3,2,3,3,3,3,3,3,0,3,3,3,3,3,3,1,2,
  0,3,3,1,0,0,0,0,3,3,0,3,1,1,0,0,1,0,0,0,0,0,1,0,0,0,0,1,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,1,3,1,3,3,3,2,3,3,0,0,
  0,3,3,0,0,0,0,0,1,3,1,3,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,3,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,2,3,0,3,3,3,1,3,3,1,1,
  0,2,3,1,0,0,0,0,2,2,0,3,1,0,0,0,1,0,0,0,0,1,0,0,0,0,0,2,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,3,3,3,3,3,0,0,
  0,3,3,0,0,0,0,0,2,3,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,0,3,2,3,1,2,3,1,1,
  0,3,1,1,0,0,0,0,2,1,0,3,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,2,
  0,3,3,3,3,3,3,3,3,2,3,3,3,3,2,3,3,3,3,2,3,0,3,2,2,3,3,0,1,1,
  0,2,3,1,0,0,0,0,2,3,0,3,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
  0,3,3,3,3,3,3,3,3,3,3,3,3,2,2,3,1,3,1,3,2,0,1,1,2,3,2,3,1,1,
  0,3,2,2,0,1,0,0,0,3,0,2,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,
  0,3,3,3,3,3,3,2,2,3,3,3,3,2,3,3,3,3,3,2,3,0,3,2,1,1,2,2,1,1,
  0,1,3,1,0,0,0,0,1,3,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,3,3,3,3,3,1,1,
  1,3,1,1,0,0,0,0,0,3,0,3,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,3,
  0,3,3,3,3,3,3,3,3,2,3,3,1,2,3,3,3,1,3,1,3,0,3,2,1,0,1,3,1,1,
  0,2,2,1,0,0,0,0,1,2,0,2,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,3,0,3,3,3,0,3,3,3,3,3,0,1,
  0,3,3,0,0,0,0,0,3,3,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,1,1,2,3,3,3,3,3,3,3,3,3,3,3,1,3,3,0,3,3,3,0,3,3,3,3,3,1,0,
  0,2,1,0,0,1,1,0,3,1,0,0,1,0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,
  0,3,3,3,3,3,3,2,3,3,3,3,3,3,2,3,1,3,1,1,2,0,1,2,1,1,2,2,1,1,
  0,2,2,1,0,0,0,0,0,2,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,1,1,3,3,3,3,3,3,3,3,3,3,3,3,1,2,3,0,3,3,3,0,3,3,2,1,2,1,1,
  0,3,1,0,0,0,0,0,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,
  0,3,3,3,3,3,3,1,3,3,3,3,3,3,1,3,3,3,3,2,3,0,3,2,0,3,2,2,1,1,
  0,1,0,1,0,0,0,0,0,1,0,3,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,2,
  0,3,3,3,3,3,3,2,3,3,3,3,3,2,2,3,3,1,3,2,2,0,2,1,3,2,3,1,0,1,
  0,2,1,1,0,0,0,0,3,3,0,2,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,3,
  0,3,3,2,3,3,3,3,3,3,3,3,3,3,2,1,2,2,1,3,3,0,0,3,2,0,1,3,0,0,
  0,3,2,0,0,0,0,0,1,1,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,1,3,3,3,3,3,1,3,1,3,3,3,3,0,3,3,0,3,3,0,0,2,1,1,3,3,1,0,
  0,3,3,0,0,0,0,0,2,1,0,3,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,
  0,3,3,3,3,3,2,3,3,2,3,3,1,1,1,3,1,0,1,0,0,0,3,2,2,1,0,0,1,1,
  0,3,0,0,0,0,0,0,0,2,0,3,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,
  0,3,3,3,3,3,3,3,3,3,3,2,3,1,2,3,1,2,0,1,1,1,2,1,1,1,1,1,0,1,
  0,1,1,0,0,0,0,0,0,2,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,
  0,3,3,3,3,3,3,1,2,1,2,3,2,3,1,3,0,2,1,1,3,0,3,2,0,1,2,1,1,1,
  0,1,0,0,0,0,0,0,0,1,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
  0,1,2,2,1,3,3,3,3,2,3,3,3,3,2,0,0,3,0,3,3,2,0,3,2,3,2,3,0,0,
  0,2,2,0,0,0,0,0,3,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,3,3,3,1,3,1,1,3,2,3,1,1,2,3,1,2,3,1,2,0,1,1,1,0,1,2,1,1,
  0,1,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,1,1,0,1,2,1,1,0,1,1,1,1,1,1,1,0,1,0,1,1,1,0,1,1,1,0,0,3,3,
  3,1,0,3,3,3,3,3,0,0,3,0,3,3,3,3,3,2,3,3,3,3,3,3,3,3,2,0,
  0,0,1,0,0,1,0,1,0,1,1,1,1,1,1,0,1,1,0,1,0,1,0,1,1,0,1,0,3,2,
  3,0,0,2,3,3,3,3,1,0,3,1,3,3,3,3,3,2,3,3,3,3,3,3,3,2,3,0,
  0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,3,3,
  3,0,0,3,3,3,3,3,0,0,3,0,3,3,3,3,3,2,3,3,1,3,3,2,3,3,2,0,
  0,3,3,3,3,3,2,3,3,3,3,3,2,1,2,3,1,1,1,0,1,0,3,1,1,0,1,1,1,1,
  0,1,1,1,0,0,0,0,0,1,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,3,3,3,2,3,3,3,1,3,2,2,1,1,3,1,2,2,1,1,0,2,0,1,0,1,1,1,1,
  0,1,3,0,0,0,0,0,0,2,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,1,0,1,0,1,0,1,0,2,1,1,1,1,1,0,1,1,0,1,1,1,0,1,0,1,0,1,2,3,
  3,1,0,3,3,3,3,3,0,0,3,0,3,3,3,3,3,2,3,3,2,3,3,3,3,3,2,0,
  0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,3,3,
  3,0,0,3,3,3,3,2,0,0,2,0,3,3,3,3,2,2,3,2,3,2,3,1,3,1,2,0,
  0,1,1,1,0,0,1,1,0,1,1,1,1,1,1,0,0,0,0,0,1,0,0,0,0,0,0,0,3,3,
  3,0,0,3,2,3,3,2,0,1,2,0,3,2,3,3,3,3,2,3,3,2,1,2,3,1,3,0,
  0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,
  3,0,0,3,2,3,3,3,0,0,3,0,3,2,2,3,2,3,2,2,3,3,2,3,1,1,2,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,3,3,
  3,0,0,3,3,3,3,3,0,0,3,0,3,3,3,3,3,2,3,2,3,3,3,2,3,1,3,0,
  0,1,3,3,3,3,1,0,1,1,0,0,1,0,0,3,1,0,0,0,0,0,3,0,0,0,0,0,1,1,
  0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,1,1,1,0,3,3,3,3,3,3,3,3,3,3,2,1,2,0,2,2,3,0,1,2,0,0,1,0,0,
  0,2,3,0,0,0,0,0,0,1,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,1,0,1,0,0,1,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,
  3,0,0,3,1,3,3,1,0,0,3,0,2,3,3,3,2,1,2,3,3,2,2,1,2,1,2,0,
  0,0,0,1,0,3,3,3,3,3,3,2,3,3,2,1,0,3,0,3,2,2,0,1,3,3,0,1,0,0,
  0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,1,0,1,1,1,1,1,0,1,1,1,1,0,1,0,1,0,0,0,0,0,1,0,0,0,1,0,3,3,
  3,0,1,3,2,2,3,3,0,0,3,0,3,2,2,3,1,3,2,2,3,1,1,2,3,1,3,0,
  0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,
  3,0,0,3,2,3,2,3,0,0,2,0,2,2,2,3,2,1,2,2,3,2,2,2,1,0,2,0,
  0,1,1,0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,1,0,0,3,3,
  3,0,0,3,2,3,3,2,0,0,2,0,2,2,3,3,3,1,2,3,3,1,1,1,1,0,1,0,
  0,0,0,0,0,1,1,0,0,0,1,0,1,0,0,0,0,0,0,0,1,0,0,1,1,0,0,0,3,3,
  3,0,1,2,3,3,3,3,0,0,3,0,3,3,3,1,3,2,3,3,1,2,2,1,2,2,2,0,
  0,1,0,1,0,1,0,0,0,1,0,0,0,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,3,3,
  3,1,0,3,1,3,3,3,0,1,3,0,2,2,2,3,3,3,1,1,2,1,1,1,1,1,1,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,
  3,0,0,3,3,2,3,3,0,0,2,0,1,3,2,3,1,1,1,1,3,1,1,2,1,0,1,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,
  3,1,0,3,3,3,2,3,0,0,3,0,2,2,2,3,2,3,2,2,2,0,1,1,0,1,1,0,
  0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,
  3,0,0,3,3,2,2,3,0,0,3,0,2,1,2,3,1,1,1,2,3,1,1,1,1,0,1,0,
  0,0,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,1,0,1,1,0,0,1,0,1,0,0,3,2,
  2,1,0,3,2,3,2,2,1,0,2,0,2,2,2,2,3,1,2,3,1,1,1,2,2,1,1,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,
  3,0,0,3,1,1,1,2,0,0,1,0,1,2,1,2,1,2,1,1,1,1,1,0,3,0,1,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,
  3,0,0,3,1,1,3,3,0,0,3,0,2,1,1,3,2,1,1,1,1,1,3,1,1,1,1,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,3,3,
  3,0,0,3,2,3,1,2,0,0,1,0,1,1,1,1,1,3,1,1,2,1,1,2,1,0,1,0,
  0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,
  3,0,0,3,2,3,2,2,0,0,2,0,1,1,1,2,1,1,1,1,2,1,1,1,2,1,0,0,
  0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,
  3,0,0,2,0,1,2,1,0,0,1,0,1,0,1,1,2,1,1,1,3,3,2,1,0,3,1,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,
  3,0,0,3,1,1,1,1,0,0,1,0,1,2,1,2,1,1,1,1,2,1,1,2,1,1,2,0,
  0,0,0,1,3,0,0,0,0,0,0,0,0,0,0,1,3,0,0,0,0,0,0,0,0,0,2,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
};


const SequenceModel Windows_1251RussianModel =
{
  Windows_1251_CharToOrderMap,
  RussianFCMLowerBound,
  RussianFCMUpperBound,
  RussianUnicodeCharToOrder,
  RussianCompactedLangModel,
  57,
  0.9990051979571611f,
  PR_FALSE,
  "WINDOWS-1251",
  "ru"
};

const SequenceModel Iso_8859_5RussianModel =
{
  Iso_8859_5_CharToOrderMap,
  RussianFCMLowerBound,
  RussianFCMUpperBound,
  RussianUnicodeCharToOrder,
  RussianCompactedLangModel,
  57,
  0.9990051979571611f,
  PR_FALSE,
  "ISO-8859-5",
  "ru"
};

const SequenceModel Koi8_RRussianModel =
{
  Koi8_R_CharToOrderMap,
  RussianFCMLowerBound,
  RussianFCMUpperBound,
  RussianUnicodeCharToOrder,
  RussianCompactedLangModel,
  57,
  0.9990051979571611f,
  PR_FALSE,
  "KOI8-R",
  "ru"
};

const SequenceModel Ibm855RussianModel =
{
  Ibm855_CharToOrderMap,
  RussianFCMLowerBound,
  RussianFCMUpperBound,
  RussianUnicodeCharToOrder,
  RussianCompactedLangModel,
  57,
  0.9990051979571611f,
  PR_FALSE,
  "IBM855",
  "ru"
};

const SequenceModel Ibm866RussianModel =
{
  Ibm866_CharToOrderMap,
  RussianFCMLowerBound,
  RussianFCMUpperBound,
  RussianUnicodeCharToOrder,
  RussianCompactedLangModel,
  57,
  0.9990051979571611f,
  PR_FALSE,
  "IBM866",
  "ru"
};

const SequenceModel Mac_CyrillicRussianModel =
{
  Mac_Cyrillic_CharToOrderMap,
  RussianFCMLowerBound,
  RussianFCMUpperBound,
  RussianUnicodeCharToOrder,
  RussianCompactedLangModel,
  57,
  0.9990051979571611f,
  PR_FALSE,
  "MAC-CYRILLIC",
  "ru"
};

const LanguageModel RussianModel =
{
  "ru",
  Unicode_CharOrder,
  Unicode_Char_size,
  RussianFCMLowerBound,
  RussianFCMUpperBound,
  RussianUnicodeCharToOrderIsReduced,

  RussianUnicodeCharToOrder,
  OrderToRatio,
  RussianCompactedLangModel,
  57,
  6,
  0.44446934591883147f,
  36,
  0.03004069926269664f,
  0.9996323370546389f,
};
