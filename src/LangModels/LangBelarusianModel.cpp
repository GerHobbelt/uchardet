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

/********* Language model for: Belarusian *********/

/**
 * Generated by BuildLangModel.py
 * On: 2023-07-06 22:51:47.270138
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
  SYM, 32, 47, 41, 42, 31, 51, 48, 45, 29, 57, 54, 40, 43, 36, 34, /* 4X */
   46, 58, 35, 37, 38, 44, 50, 53, 55, 52, 56,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM, 32, 47, 41, 42, 31, 51, 48, 45, 29, 57, 54, 40, 43, 36, 34, /* 6X */
   46, 58, 35, 37, 38, 44, 50, 53, 55, 52, 56,SYM,SYM,SYM,SYM,CTR, /* 7X */
   67, 68,SYM, 69,SYM,SYM,SYM,SYM,SYM,SYM, 65,SYM, 70, 71, 66, 72, /* 8X */
   73,SYM,SYM,SYM,SYM,SYM,SYM,SYM,ILL,SYM, 65,SYM, 74, 75, 66, 76, /* 9X */
  SYM, 19, 19, 63,SYM, 64,SYM,SYM, 39,SYM, 62,SYM,SYM,SYM,SYM, 60, /* AX */
  SYM,SYM,  2,  2, 64,SYM,SYM,SYM, 39,SYM, 62,SYM, 63, 77, 78, 60, /* BX */
    0, 21, 14, 20, 11,  9, 28, 17, 49, 23,  6,  7, 13,  1, 12, 15, /* CX */
    3,  4,  8, 16, 33, 26, 18, 24, 27, 59, 61,  5, 25, 22, 30, 10, /* DX */
    0, 21, 14, 20, 11,  9, 28, 17, 49, 23,  6,  7, 13,  1, 12, 15, /* EX */
    3,  4,  8, 16, 33, 26, 18, 24, 27, 59, 61,  5, 25, 22, 30, 10, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_5_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM, 32, 47, 41, 42, 31, 51, 48, 45, 29, 57, 54, 40, 43, 36, 34, /* 4X */
   46, 58, 35, 37, 38, 44, 50, 53, 55, 52, 56,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM, 32, 47, 41, 42, 31, 51, 48, 45, 29, 57, 54, 40, 43, 36, 34, /* 6X */
   46, 58, 35, 37, 38, 44, 50, 53, 55, 52, 56,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM, 39, 79, 80, 62, 81,  2, 60, 63, 65, 82, 66, 83,SYM, 19, 84, /* AX */
    0, 21, 14, 20, 11,  9, 28, 17, 49, 23,  6,  7, 13,  1, 12, 15, /* BX */
    3,  4,  8, 16, 33, 26, 18, 24, 27, 59, 61,  5, 25, 22, 30, 10, /* CX */
    0, 21, 14, 20, 11,  9, 28, 17, 49, 23,  6,  7, 13,  1, 12, 15, /* DX */
    3,  4,  8, 16, 33, 26, 18, 24, 27, 59, 61,  5, 25, 22, 30, 10, /* EX */
  SYM, 39, 85, 86, 62, 87,  2, 60, 63, 65, 88, 66, 89,SYM, 19, 90, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

#define Unicode_Char_size    80

static const unsigned int Unicode_CharOrder[] =
{
  65, 32, 69, 31, 73, 29, 78, 36, 79, 34, 82, 35, 83, 37, 84, 38,
  97, 32, 101, 31, 105, 29, 110, 36, 111, 34, 114, 35, 115, 37, 116, 38,
  1025, 39, 1030,  2, 1038, 19, 1040,  0, 1041, 21, 1042, 14, 1043, 20, 1044, 11,
  1045,  9, 1046, 28, 1047, 17, 1049, 23, 1050,  6, 1051,  7, 1052, 13, 1053,  1,
  1054, 12, 1055, 15, 1056,  3, 1057,  4, 1058,  8, 1059, 16, 1060, 33, 1061, 26,
  1062, 18, 1063, 24, 1064, 27, 1067,  5, 1068, 25, 1069, 22, 1070, 30, 1071, 10,
  1072,  0, 1073, 21, 1074, 14, 1075, 20, 1076, 11, 1077,  9, 1078, 28, 1079, 17,
  1081, 23, 1082,  6, 1083,  7, 1084, 13, 1085,  1, 1086, 12, 1087, 15, 1088,  3,
  1089,  4, 1090,  8, 1091, 16, 1092, 33, 1093, 26, 1094, 18, 1095, 24, 1096, 27,
  1099,  5, 1100, 25, 1101, 22, 1102, 30, 1103, 10, 1105, 39, 1110,  2, 1118, 19,
};

static const float OrderToRatio[] =
{
  0.154363849,  0.154363849,  0.066316992,  0.066316992,  0.055497512,  0.055497512,  0.049642880,  0.049642880, 
  0.043778500,  0.043778500,  0.043313259,  0.043313259,  0.038374000,  0.038374000,  0.037946534,  0.037946534, 
  0.034971085,  0.034971085,  0.034837289,  0.034837289,  0.031555497,  0.031555497,  0.031065641,  0.031065641, 
  0.029964075,  0.029964075,  0.029312396,  0.029312396,  0.028568107,  0.028568107,  0.027023477,  0.027023477, 
  0.025978694,  0.025978694,  0.022874080,  0.022874080,  0.021042116,  0.021042116,  0.020359486,  0.020359486, 
  0.019817964,  0.019817964,  0.013932868,  0.013932868,  0.013080616,  0.013080616,  0.011852565,  0.011852565, 
  0.011613242,  0.011613242,  0.010693483,  0.010693483,  0.010274546,  0.010274546,  0.008127466,  0.008127466, 
  0.005703532,  0.005703532,  0.005282889,  0.005282889,  0.005262418,  0.005262418,  0.005236097,  0.005236097, 
  0.004846406,  0.004846406,  0.004248343,  0.004248343,  0.003818439,  0.003818439,  0.003774328,  0.003774328, 
  0.003694879,  0.003694879,  0.003513803,  0.003513803,  0.003503079,  0.003503079,  0.003169441,  0.003169441, 
};


/* Model Table:
 * Number of web pages processed for this model: 1453
 * Number of characters consumed for this model: 4103247
 * Total considered sequences: 1885 / 1600
 *
 * - Positive sequences: first 942 (0.9950044996073815)
 * - Probable sequences: next 299 (1241-942) (0.003996107751846334)
 * - Neutral sequences: last 359 (0.000999392640772201)
 * - Negative sequences: -285 (off-ratio, TODO)
 */


#define BelarusianUnicodeAlphabetWidth         40
#define BelarusianUnicodeCharToOrderIsReduced  0


#define BelarusianFCMLowerBound  97
#define BelarusianFCMUpperBound  1118


static const PRUint8 BelarusianUnicodeCharToOrder[] =
{
  33,0,0,0,32,0,0,0,30,0,0,0,0,37,35,0,0,36,38,39,
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
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,22,15,21,12,
  10,29,18,0,24,7,8,14,2,13,16,4,5,9,17,34,27,19,25,28,
  0,0,6,26,23,31,11,0,40,0,0,0,0,3,0,0,0,0,0,0,
  0,20,
};

static const PRUint8 BelarusianCompactedLangModel[] =
{
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,3,3,3,3,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,3,3,1,3,0,0,3,0,1,1,0,1,3,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,2,3,3,3,0,3,3,3,1,3,3,3,3,3,1,3,0,0,3,1,0,0,0,0,3,
  0,3,3,3,3,3,0,3,3,3,3,3,3,2,3,3,3,2,3,3,3,3,3,2,3,3,0,3,3,3,0,3,1,0,3,0,0,1,0,1,3,
  0,3,3,2,2,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,1,3,3,3,1,3,2,3,3,3,0,1,0,0,3,0,0,0,0,0,1,
  0,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,0,3,1,1,3,3,0,2,3,3,2,0,1,3,0,0,3,0,0,0,0,0,3,
  0,2,3,3,3,3,1,3,3,3,3,3,3,2,3,3,3,2,3,3,3,3,3,2,3,3,0,3,3,3,1,3,0,0,3,1,1,0,1,0,3,
  0,3,3,3,3,3,2,2,3,3,3,1,2,3,3,3,2,3,3,3,1,3,2,3,0,2,0,2,3,1,1,1,0,0,2,0,0,0,0,0,2,
  0,3,3,3,2,3,3,3,3,3,3,3,3,3,3,2,2,3,2,2,0,3,3,3,0,2,3,2,1,2,1,3,0,0,3,0,0,0,0,0,3,
  0,3,3,2,3,3,3,3,3,2,3,1,1,3,3,3,2,3,1,3,1,2,3,3,1,3,2,2,1,1,1,1,1,1,3,0,0,1,0,0,0,
  0,3,3,3,3,3,0,3,3,3,3,3,3,3,3,3,3,1,3,3,3,3,3,1,3,3,0,3,3,3,0,3,0,0,3,0,1,0,1,0,1,
  0,1,3,1,3,3,1,3,3,3,3,3,3,1,3,3,3,1,3,3,3,3,3,1,3,3,0,3,3,3,0,3,0,0,3,0,0,0,0,1,1,
  0,3,3,2,3,3,3,3,3,3,3,1,3,3,3,3,3,3,3,3,1,3,3,3,0,3,1,2,3,3,0,1,0,0,2,0,0,0,0,0,1,
  0,2,3,3,3,3,0,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,2,3,3,1,3,3,3,0,3,0,0,3,0,1,0,0,0,1,
  0,3,3,3,2,3,3,3,3,1,3,3,1,3,3,3,3,3,2,3,1,2,3,3,0,2,1,1,2,1,1,3,1,0,3,0,0,0,0,0,3,
  0,3,3,3,2,3,3,3,2,2,3,3,1,3,2,1,2,3,1,1,1,1,1,3,0,1,2,0,1,0,1,3,0,0,1,0,0,0,0,0,3,
  0,3,3,3,3,3,3,3,3,3,3,3,1,3,1,1,2,3,2,3,0,1,2,3,0,2,1,1,3,1,1,1,0,0,1,0,0,0,0,0,2,
  0,3,3,3,3,3,0,3,3,3,3,3,3,3,3,3,3,1,3,3,3,3,3,3,3,3,1,3,3,3,0,3,0,0,2,0,0,0,0,0,1,
  0,3,3,3,3,3,3,3,3,1,3,3,3,3,3,3,2,3,2,2,0,3,3,3,0,3,3,0,3,1,1,3,0,0,0,0,0,0,0,0,3,
  0,3,3,3,1,2,3,3,2,3,3,3,1,3,1,3,1,3,2,3,0,1,2,3,0,0,3,1,1,1,1,3,0,0,1,0,0,0,0,0,3,
  0,2,3,2,3,3,0,3,3,3,2,3,3,1,3,3,3,1,3,3,0,3,3,2,1,3,0,2,3,3,1,1,0,0,2,0,0,0,0,0,1,
  0,3,3,3,3,3,2,3,3,3,3,1,3,3,3,3,1,3,1,2,0,3,2,3,1,3,0,1,1,1,1,1,0,0,1,0,0,0,0,0,2,
  0,3,3,3,3,3,3,3,3,2,3,3,2,3,3,3,1,3,1,2,0,2,1,3,0,2,1,3,3,1,1,3,0,0,1,0,0,0,0,0,2,
  0,3,3,3,3,3,0,3,3,3,2,3,3,3,3,3,3,1,3,3,3,3,3,1,3,3,0,3,3,3,0,2,0,0,3,0,0,0,0,0,1,
  0,2,3,1,2,3,1,3,3,3,1,1,3,2,3,3,2,1,3,3,0,3,3,0,0,3,0,2,3,0,0,1,0,0,2,0,0,0,0,0,1,
  0,3,3,1,1,1,3,3,3,1,3,0,1,3,2,3,1,3,0,2,0,1,3,3,0,3,1,1,1,2,0,0,0,0,1,0,0,0,0,0,1,
  0,1,3,2,1,3,1,3,2,3,3,3,3,1,3,3,3,0,2,3,0,3,3,1,0,2,0,2,3,1,0,3,0,0,3,0,0,0,0,0,3,
  0,3,3,3,3,3,1,2,3,3,3,1,2,3,3,3,2,3,1,2,0,2,2,3,0,1,1,2,1,0,1,1,0,0,1,0,0,1,1,1,1,
  0,3,3,1,2,2,3,3,3,3,2,0,1,3,3,3,2,3,0,3,0,1,1,3,1,3,1,1,2,0,0,1,0,1,1,0,0,0,0,0,0,
  0,3,3,0,2,3,3,3,2,1,2,0,3,3,1,3,1,3,3,3,1,2,3,3,0,3,1,1,0,3,0,0,0,0,0,0,0,0,0,0,1,
  0,0,1,1,1,1,0,1,1,1,0,1,1,0,1,0,0,0,1,1,1,1,1,0,1,1,0,1,0,1,3,0,3,3,0,3,3,3,3,3,0,
  0,2,3,2,3,3,0,3,3,3,2,0,3,1,3,2,2,0,3,3,1,2,3,2,1,3,0,3,2,2,0,3,0,0,1,0,0,0,0,0,0,
  0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,0,0,1,0,1,1,0,0,0,1,0,1,3,0,3,3,0,3,3,3,3,3,0,
  0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,1,0,0,0,0,3,0,3,2,0,2,3,3,3,3,0,
  0,3,2,3,3,3,2,2,3,3,3,2,1,3,1,1,0,3,1,1,0,2,1,2,0,0,1,0,1,0,1,2,0,0,1,0,0,0,0,0,2,
  0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,3,0,2,3,0,3,3,3,3,3,0,
  0,1,0,1,0,1,0,1,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,3,0,3,3,0,3,3,3,3,3,0,
  0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1,3,0,3,3,0,3,2,3,3,3,0,
  0,1,0,1,1,0,0,1,0,0,0,0,0,1,1,0,1,1,0,0,0,0,0,0,0,1,0,0,0,1,3,0,3,3,0,3,2,2,3,3,0,
  0,1,0,0,0,0,0,0,1,0,1,0,1,0,0,1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,3,0,3,3,0,3,3,2,3,3,0,
  0,1,3,0,3,3,0,3,3,3,1,1,3,0,3,3,2,0,3,2,3,3,1,1,3,1,0,2,1,1,0,2,0,0,2,0,0,0,0,0,1,
};


const SequenceModel Windows_1251BelarusianModel =
{
  Windows_1251_CharToOrderMap,
  BelarusianFCMLowerBound,
  BelarusianFCMUpperBound,
  BelarusianUnicodeCharToOrder,
  BelarusianCompactedLangModel,
  40,
  0.9990006073592278f,
  PR_FALSE,
  "WINDOWS-1251",
  "be"
};

const SequenceModel Iso_8859_5BelarusianModel =
{
  Iso_8859_5_CharToOrderMap,
  BelarusianFCMLowerBound,
  BelarusianFCMUpperBound,
  BelarusianUnicodeCharToOrder,
  BelarusianCompactedLangModel,
  40,
  0.9990006073592278f,
  PR_FALSE,
  "ISO-8859-5",
  "be"
};

const LanguageModel BelarusianModel =
{
  "be",
  Unicode_CharOrder,
  Unicode_Char_size,
  BelarusianFCMLowerBound,
  BelarusianFCMUpperBound,
  BelarusianUnicodeCharToOrderIsReduced,

  BelarusianUnicodeCharToOrder,
  OrderToRatio,
  BelarusianCompactedLangModel,
  40,
  6,
  0.4129129930516004f,
  31,
  0.03056871789585175f,
  0.9782318734407166f,
};
