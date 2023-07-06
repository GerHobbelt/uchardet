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

/********* Language model for: Serbian *********/

/**
 * Generated by BuildLangModel.py
 * On: 2023-07-06 22:52:05.539026
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
  SYM, 19, 48, 41, 39, 23, 50, 47, 46, 21, 43, 42, 35, 38, 28, 25, /* 4X */
   40, 55, 29, 31, 32, 37, 45, 52, 54, 51, 49,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM, 19, 48, 41, 39, 23, 50, 47, 46, 21, 43, 42, 35, 38, 28, 25, /* 6X */
   40, 55, 29, 31, 32, 37, 45, 52, 54, 51, 49,SYM,SYM,SYM,SYM,CTR, /* 7X */
   44, 69,SYM, 70,SYM,SYM,SYM,SYM,SYM,SYM, 30,SYM, 26, 71, 34, 53, /* 8X */
   44,SYM,SYM,SYM,SYM,SYM,SYM,SYM,ILL,SYM, 30,SYM, 26, 72, 34, 53, /* 9X */
  SYM, 65, 65, 11,SYM, 73,SYM,SYM, 62,SYM, 74,SYM,SYM,SYM,SYM, 67, /* AX */
  SYM,SYM, 63, 63, 75,SYM,SYM,SYM, 62,SYM, 76,SYM, 11, 58, 58, 67, /* BX */
    0, 18, 10, 17, 12,  2, 33, 16,  1, 56,  9, 14, 13,  4,  3, 15, /* CX */
    5,  6,  8,  7, 36, 27, 20, 22, 24, 68, 66, 59, 60, 61, 64, 57, /* DX */
    0, 18, 10, 17, 12,  2, 33, 16,  1, 56,  9, 14, 13,  4,  3, 15, /* EX */
    5,  6,  8,  7, 36, 27, 20, 22, 24, 68, 66, 59, 60, 61, 64, 57, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_5_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM, 19, 48, 41, 39, 23, 50, 47, 46, 21, 43, 42, 35, 38, 28, 25, /* 4X */
   40, 55, 29, 31, 32, 37, 45, 52, 54, 51, 49,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM, 19, 48, 41, 39, 23, 50, 47, 46, 21, 43, 42, 35, 38, 28, 25, /* 6X */
   40, 55, 29, 31, 32, 37, 45, 52, 54, 51, 49,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM, 62, 44, 77, 78, 58, 63, 67, 11, 30, 26, 34, 79,SYM, 65, 53, /* AX */
    0, 18, 10, 17, 12,  2, 33, 16,  1, 56,  9, 14, 13,  4,  3, 15, /* BX */
    5,  6,  8,  7, 36, 27, 20, 22, 24, 68, 66, 59, 60, 61, 64, 57, /* CX */
    0, 18, 10, 17, 12,  2, 33, 16,  1, 56,  9, 14, 13,  4,  3, 15, /* DX */
    5,  6,  8,  7, 36, 27, 20, 22, 24, 68, 66, 59, 60, 61, 64, 57, /* EX */
  SYM, 62, 44, 80, 81, 58, 63, 67, 11, 30, 26, 34, 82,SYM, 65, 53, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

#define Unicode_Char_size    108

static const unsigned int Unicode_CharOrder[] =
{
  65, 19, 66, 48, 67, 41, 68, 39, 69, 23, 70, 50, 71, 47, 72, 46,
  73, 21, 74, 43, 75, 42, 76, 35, 77, 38, 78, 28, 79, 25, 80, 40,
  82, 29, 83, 31, 84, 32, 85, 37, 86, 45, 87, 52, 89, 51, 90, 49,
  97, 19, 98, 48, 99, 41, 100, 39, 101, 23, 102, 50, 103, 47, 104, 46,
  105, 21, 106, 43, 107, 42, 108, 35, 109, 38, 110, 28, 111, 25, 112, 40,
  114, 29, 115, 31, 116, 32, 117, 37, 118, 45, 119, 52, 121, 51, 122, 49,
  1026, 44, 1032, 11, 1033, 30, 1034, 26, 1035, 34, 1039, 53, 1040,  0, 1041, 18,
  1042, 10, 1043, 17, 1044, 12, 1045,  2, 1046, 33, 1047, 16, 1048,  1, 1050,  9,
  1051, 14, 1052, 13, 1053,  4, 1054,  3, 1055, 15, 1056,  5, 1057,  6, 1058,  8,
  1059,  7, 1060, 36, 1061, 27, 1062, 20, 1063, 22, 1064, 24, 1072,  0, 1073, 18,
  1074, 10, 1075, 17, 1076, 12, 1077,  2, 1078, 33, 1079, 16, 1080,  1, 1082,  9,
  1083, 14, 1084, 13, 1085,  4, 1086,  3, 1087, 15, 1088,  5, 1089,  6, 1090,  8,
  1091,  7, 1092, 36, 1093, 27, 1094, 20, 1095, 22, 1096, 24, 1106, 44, 1112, 11,
  1113, 30, 1114, 26, 1115, 34, 1119, 53,
};

static const float OrderToRatio[] =
{
  0.107437107,  0.107437107,  0.091199241,  0.091199241,  0.083565979,  0.083565979,  0.082901184,  0.082901184, 
  0.055479171,  0.055479171,  0.049803539,  0.049803539,  0.046530530,  0.046530530,  0.038528482,  0.038528482, 
  0.038248890,  0.038248890,  0.035641657,  0.035641657,  0.033535778,  0.033535778,  0.031437984,  0.031437984, 
  0.030570540,  0.030570540,  0.028678091,  0.028678091,  0.027401674,  0.027401674,  0.027161289,  0.027161289, 
  0.016589499,  0.016589499,  0.016583618,  0.016583618,  0.012905313,  0.012905313,  0.010226283,  0.010226283, 
  0.009106447,  0.009106447,  0.008477673,  0.008477673,  0.008303939,  0.008303939,  0.008048361,  0.008048361, 
  0.008003274,  0.008003274,  0.007487218,  0.007487218,  0.006647954,  0.006647954,  0.006165469,  0.006165469, 
  0.005885387,  0.005885387,  0.005345808,  0.005345808,  0.005265924,  0.005265924,  0.004840534,  0.004840534, 
  0.004780499,  0.004780499,  0.004633719,  0.004633719,  0.004026509,  0.004026509,  0.003870173,  0.003870173, 
  0.003445027,  0.003445027,  0.003299718,  0.003299718,  0.003156614,  0.003156614,  0.002952005,  0.002952005, 
  0.002497455,  0.002497455,  0.002308528,  0.002308528,  0.002303627,  0.002303627,  0.002269322,  0.002269322, 
  0.002117887,  0.002117887,  0.002003943,  0.002003943,  0.001642998,  0.001642998,  0.001626090,  0.001626090, 
  0.001423686,  0.001423686,  0.001003687,  0.001003687,  0.000921353,  0.000921353,  0.000699836,  0.000699836, 
  0.000423185,  0.000423185,  0.000298215,  0.000298215, 
};


/* Model Table:
 * Number of web pages processed for this model: 1770
 * Number of characters consumed for this model: 4080955
 * Total considered sequences: 1759 / 2916
 *
 * - Positive sequences: first 763 (0.9950177234421822)
 * - Probable sequences: next 236 (999-763) (0.0039828162543616985)
 * - Neutral sequences: last 1917 (0.0009994603034561012)
 * - Negative sequences: 1157 (off-ratio, TODO)
 */


#define SerbianUnicodeAlphabetWidth         54
#define SerbianUnicodeCharToOrderIsReduced  0


#define SerbianFCMLowerBound  97
#define SerbianFCMUpperBound  1119


static const PRUint8 SerbianUnicodeCharToOrder[] =
{
  20,49,42,40,24,51,48,47,22,44,43,36,39,29,26,41,0,30,32,33,
  38,46,53,0,52,50,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
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
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,19,11,18,13,
  3,34,17,2,0,10,15,14,5,4,16,6,7,9,8,37,28,21,23,25,
  0,0,0,0,0,0,0,0,0,45,0,0,0,0,0,12,31,27,35,0,
  0,0,54,
};

static const PRUint8 SerbianCompactedLangModel[] =
{
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,1,3,1,3,1,3,3,1,1,3,1,1,3,3,1,3,0,1,1,1,1,1,1,3,1,1,1,1,0,1,1,1,2,
  0,3,2,2,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,0,3,0,3,0,3,1,3,3,0,0,3,0,0,3,3,0,3,0,0,0,0,1,0,1,3,0,0,0,0,0,0,1,0,2,
  0,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,0,3,1,3,1,3,3,1,0,3,0,1,3,3,0,3,0,0,0,0,0,0,0,3,0,0,1,0,0,1,0,1,2,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,0,3,0,3,0,3,3,0,0,3,0,0,3,3,1,3,0,0,0,0,0,0,1,3,0,0,0,0,0,0,0,0,2,
  0,3,3,3,3,1,3,3,3,3,3,3,2,3,2,2,3,3,3,2,1,3,0,3,1,2,1,0,3,0,0,2,0,0,2,1,0,3,1,0,0,0,1,0,0,3,0,0,0,0,0,0,0,0,2,
  0,3,3,3,3,3,1,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,0,3,1,3,1,3,3,0,0,2,0,1,3,2,0,3,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,3,
  0,3,3,3,3,3,3,2,3,3,3,3,3,2,3,3,3,1,1,2,1,3,0,1,0,0,0,1,3,0,0,2,0,0,1,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,0,3,0,3,1,3,0,3,3,1,0,3,1,0,3,3,0,3,0,0,0,1,0,0,1,3,0,1,0,0,0,1,0,0,2,
  0,3,3,3,3,3,3,3,3,1,3,3,3,3,3,3,3,2,1,2,1,2,0,1,1,1,1,3,3,0,0,3,0,0,1,0,0,2,1,0,0,1,0,0,1,0,0,1,0,0,0,0,1,1,0,
  0,3,3,3,3,3,3,3,3,3,1,3,2,2,3,3,2,1,1,1,1,3,0,2,1,3,1,3,2,0,0,3,0,0,1,2,1,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,3,3,3,3,3,3,3,2,3,1,3,3,1,3,2,1,3,2,1,3,0,2,1,3,1,2,1,0,0,3,0,0,0,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,
  0,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,2,3,1,3,0,3,1,2,0,2,2,0,0,1,0,0,1,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,2,
  0,3,3,3,3,3,3,3,3,2,2,3,3,1,3,3,2,2,3,3,1,1,0,1,1,1,1,3,2,0,0,3,0,0,1,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
  0,3,3,3,3,3,3,3,3,2,2,2,3,2,2,3,3,2,1,3,1,3,0,2,1,1,0,2,1,0,0,3,0,0,0,1,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
  0,3,3,3,3,3,1,3,3,3,3,3,1,3,3,2,2,2,3,3,1,3,0,2,1,1,1,1,2,0,0,1,0,0,1,1,0,3,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,1,
  0,3,3,3,3,3,3,3,3,3,2,2,3,1,2,3,1,1,1,1,1,3,0,2,0,3,1,2,2,0,0,3,0,0,0,2,0,2,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,
  0,3,3,3,3,3,3,0,3,1,1,3,3,3,3,3,1,0,3,3,1,0,0,1,1,0,1,1,1,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,3,3,3,3,3,2,3,3,1,3,1,3,3,3,1,2,1,2,0,1,0,1,1,0,1,2,1,0,0,3,0,0,0,1,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,1,
  0,3,3,3,3,3,3,2,3,1,1,1,3,3,1,3,1,3,0,1,0,1,0,1,0,0,1,1,1,0,0,3,0,0,1,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,1,
  0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,2,0,3,1,3,1,3,0,1,3,3,0,3,3,1,0,3,1,3,3,3,3,3,3,3,0,3,3,3,3,3,3,3,2,0,
  0,3,3,3,3,2,3,1,3,1,2,3,2,1,1,2,2,0,2,1,1,0,1,0,1,1,0,1,1,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,
  0,0,0,1,0,0,0,0,0,0,1,0,1,0,1,1,0,1,0,0,3,0,3,0,3,0,3,0,0,3,3,0,3,3,0,0,3,1,3,3,3,3,3,3,3,0,3,3,3,3,3,3,1,1,0,
  0,3,3,3,3,3,1,1,3,1,3,3,3,0,3,3,0,0,0,0,0,2,0,0,1,1,0,2,1,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,
  0,1,0,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,0,1,3,0,3,0,3,1,3,0,1,3,3,0,3,3,1,0,3,0,3,3,3,3,3,3,3,0,3,2,3,3,3,3,2,3,0,
  0,3,3,3,3,3,2,1,3,3,3,3,1,1,2,3,3,0,1,0,0,2,0,2,0,0,0,3,1,0,0,3,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,1,0,0,0,1,1,1,1,1,1,1,1,1,1,1,2,0,1,1,3,0,3,0,2,0,3,0,0,3,3,0,3,3,0,0,3,0,3,3,3,3,3,3,3,0,3,2,3,3,3,3,2,3,0,
  0,3,3,3,3,0,1,3,3,0,1,1,0,1,0,1,0,0,0,0,0,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,3,3,3,3,3,2,3,3,1,3,1,1,2,3,0,1,0,1,0,1,0,1,0,1,0,1,1,0,0,1,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,1,0,0,0,0,1,1,0,1,1,0,0,0,0,1,0,0,1,1,3,0,3,0,3,0,3,0,0,3,2,0,3,3,1,0,2,0,3,2,3,2,3,3,3,0,2,2,3,2,2,3,2,1,0,
  0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1,1,0,0,1,3,0,3,0,3,0,3,0,0,3,3,0,3,3,0,0,3,0,3,3,3,3,3,3,1,0,3,3,3,3,2,2,3,1,0,
  0,3,3,3,3,3,0,3,3,1,3,0,0,1,0,1,0,0,0,0,0,1,0,1,0,2,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,1,1,1,1,0,1,1,0,1,1,1,0,1,0,1,0,0,0,1,3,0,3,0,3,0,3,0,1,3,3,0,3,3,0,0,3,1,3,3,1,3,3,3,1,0,3,3,1,3,1,2,2,2,0,
  0,1,0,1,0,1,1,1,0,1,0,0,0,0,0,1,1,0,0,1,3,0,3,0,3,0,3,0,0,3,3,0,3,3,0,0,3,0,3,2,1,2,2,3,2,0,3,3,1,2,2,1,3,2,0,
  0,3,3,3,3,3,3,1,3,0,1,2,3,3,1,2,0,0,1,3,0,1,0,0,0,0,0,3,0,0,0,2,0,0,0,0,0,1,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,
  0,3,3,3,3,3,0,1,3,0,3,0,0,1,0,0,0,0,0,0,1,1,0,0,1,1,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,
  0,0,0,1,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,3,0,3,0,3,0,3,0,0,3,1,0,3,3,0,0,3,0,3,3,3,2,2,2,3,0,2,1,2,2,1,2,3,3,0,
  0,3,3,3,3,2,3,3,3,3,2,1,1,1,1,3,1,1,1,1,0,1,0,1,0,0,0,0,1,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,1,1,1,0,0,1,1,0,1,1,1,0,1,1,1,1,0,1,1,3,0,3,1,3,0,2,0,1,3,3,1,3,3,1,0,3,1,1,3,3,3,3,3,3,0,2,2,3,3,3,1,1,1,0,
  0,1,1,1,0,1,1,0,0,1,0,1,1,0,1,1,1,0,0,1,3,0,3,0,3,0,3,0,0,3,2,0,3,1,0,0,2,0,3,3,2,3,2,1,1,0,1,1,1,3,1,1,2,1,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,3,0,3,0,3,0,3,0,0,3,3,0,3,1,0,0,2,0,3,2,1,2,1,1,2,0,3,1,2,2,1,2,2,2,0,
  0,0,1,1,1,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,3,0,3,0,3,1,3,0,0,2,3,0,3,3,0,0,3,0,3,1,2,2,2,1,1,0,1,3,2,1,0,1,2,2,0,
  0,0,0,0,0,0,0,0,0,1,1,1,0,0,1,0,0,0,0,0,3,0,3,0,3,0,3,0,0,2,3,0,2,3,0,0,3,0,3,2,2,1,2,3,1,0,1,3,1,1,2,1,3,1,0,
  0,1,1,0,0,0,1,1,1,1,0,0,0,0,1,1,0,0,0,0,3,0,3,0,3,0,3,0,1,2,3,0,3,3,0,0,3,0,3,3,1,1,2,1,1,0,2,1,2,1,0,1,1,1,0,
  0,0,1,1,1,0,1,0,1,0,1,0,0,0,0,0,0,0,0,0,3,0,3,0,3,0,3,0,0,2,1,0,3,1,0,0,2,0,3,1,1,2,1,2,1,0,2,1,0,2,1,1,1,0,0,
  0,3,3,3,3,2,1,2,3,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,3,0,3,0,3,0,3,0,0,3,3,0,2,1,0,0,3,0,3,1,1,1,2,1,1,0,0,1,1,1,0,0,1,0,0,
  0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,3,0,3,0,3,0,3,0,1,2,3,0,1,3,0,0,2,0,3,2,1,1,1,1,1,0,2,1,1,1,1,1,3,1,0,
  0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,3,0,3,0,3,1,3,0,1,3,3,0,2,2,0,0,3,0,3,2,2,1,2,1,1,0,1,2,2,2,1,1,2,1,0,
  0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,3,0,3,0,3,0,3,0,0,3,3,0,2,1,0,0,3,0,3,2,2,1,2,0,2,0,0,1,1,2,1,1,3,1,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,3,0,3,0,3,0,0,3,2,0,1,1,0,0,3,0,3,3,3,1,1,1,1,0,3,1,2,2,1,1,1,0,0,
  0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,1,0,0,0,0,3,0,3,0,3,0,3,0,0,1,3,0,1,2,0,0,2,0,2,1,1,1,1,1,0,0,0,1,1,1,1,2,1,1,0,
  0,1,0,1,0,1,0,1,0,1,1,0,1,1,0,1,1,1,1,0,2,0,1,0,2,0,3,0,0,2,2,0,3,2,0,0,3,1,2,2,2,2,3,1,0,0,1,1,2,3,1,2,1,1,0,
  0,1,1,1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,3,0,3,1,3,0,3,0,0,2,1,0,2,1,0,0,1,0,1,1,0,1,1,1,0,0,0,2,0,1,0,1,1,2,0,
  0,3,3,3,3,0,0,0,2,1,0,1,0,1,1,1,0,0,1,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
};


const SequenceModel Windows_1251SerbianModel =
{
  Windows_1251_CharToOrderMap,
  SerbianFCMLowerBound,
  SerbianFCMUpperBound,
  SerbianUnicodeCharToOrder,
  SerbianCompactedLangModel,
  54,
  0.9990005396965439f,
  PR_FALSE,
  "WINDOWS-1251",
  "sr"
};

const SequenceModel Iso_8859_5SerbianModel =
{
  Iso_8859_5_CharToOrderMap,
  SerbianFCMLowerBound,
  SerbianFCMUpperBound,
  SerbianUnicodeCharToOrder,
  SerbianCompactedLangModel,
  54,
  0.9990005396965439f,
  PR_FALSE,
  "ISO-8859-5",
  "sr"
};

const LanguageModel SerbianModel =
{
  "sr",
  Unicode_CharOrder,
  Unicode_Char_size,
  SerbianFCMLowerBound,
  SerbianFCMUpperBound,
  SerbianUnicodeCharToOrderIsReduced,

  SerbianUnicodeCharToOrder,
  OrderToRatio,
  SerbianCompactedLangModel,
  54,
  5,
  0.4205826822398189f,
  36,
  0.03094814816629931f,
  0.9997079115060076f,
};
