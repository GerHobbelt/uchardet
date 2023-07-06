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

/********* Language model for: Ukrainian *********/

/**
 * Generated by BuildLangModel.py
 * On: 2023-07-06 22:43:02.676080
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
  SYM, 29, 48, 40, 43, 28, 52, 47, 44, 31, 56, 51, 39, 42, 33, 34, /* 4X */
   46, 59, 37, 36, 38, 45, 53, 50, 55, 49, 54,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM, 29, 48, 40, 43, 28, 52, 47, 44, 31, 56, 51, 39, 42, 33, 34, /* 6X */
   46, 59, 37, 36, 38, 45, 53, 50, 55, 49, 54,SYM,SYM,SYM,SYM,CTR, /* 7X */
   67, 68,SYM, 69,SYM,SYM,SYM,SYM,SYM,SYM, 65,SYM, 70, 71, 66, 72, /* 8X */
   73,SYM,SYM,SYM,SYM,SYM,SYM,SYM,ILL,SYM, 65,SYM, 74, 75, 66, 76, /* 9X */
  SYM, 63, 63, 64,SYM, 57,SYM,SYM, 62,SYM, 32,SYM,SYM,SYM,SYM, 27, /* AX */
  SYM,SYM,  3,  3, 57,SYM,SYM,SYM, 62,SYM, 32,SYM, 64, 77, 78, 27, /* BX */
    1, 20,  6, 19, 13,  8, 26, 17,  5, 21, 10, 11, 14,  2,  0, 15, /* CX */
    4,  9,  7, 12, 35, 23, 24, 22, 30, 41, 61, 58, 18, 60, 25, 16, /* DX */
    1, 20,  6, 19, 13,  8, 26, 17,  5, 21, 10, 11, 14,  2,  0, 15, /* EX */
    4,  9,  7, 12, 35, 23, 24, 22, 30, 41, 61, 58, 18, 60, 25, 16, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

#define Unicode_Char_size    116

static const unsigned int Unicode_CharOrder[] =
{
  65, 29, 66, 48, 67, 40, 68, 43, 69, 28, 70, 52, 71, 47, 72, 44,
  73, 31, 74, 56, 75, 51, 76, 39, 77, 42, 78, 33, 79, 34, 80, 46,
  82, 37, 83, 36, 84, 38, 85, 45, 86, 53, 87, 50, 88, 55, 89, 49,
  90, 54, 97, 29, 98, 48, 99, 40, 100, 43, 101, 28, 102, 52, 103, 47,
  104, 44, 105, 31, 106, 56, 107, 51, 108, 39, 109, 42, 110, 33, 111, 34,
  112, 46, 114, 37, 115, 36, 116, 38, 117, 45, 118, 53, 119, 50, 120, 55,
  121, 49, 122, 54, 1028, 32, 1030,  3, 1031, 27, 1040,  1, 1041, 20, 1042,  6,
  1043, 19, 1044, 13, 1045,  8, 1046, 26, 1047, 17, 1048,  5, 1049, 21, 1050, 10,
  1051, 11, 1052, 14, 1053,  2, 1054,  0, 1055, 15, 1056,  4, 1057,  9, 1058,  7,
  1059, 12, 1060, 35, 1061, 23, 1062, 24, 1063, 22, 1064, 30, 1065, 41, 1068, 18,
  1070, 25, 1071, 16, 1072,  1, 1073, 20, 1074,  6, 1075, 19, 1076, 13, 1077,  8,
  1078, 26, 1079, 17, 1080,  5, 1081, 21, 1082, 10, 1083, 11, 1084, 14, 1085,  2,
  1086,  0, 1087, 15, 1088,  4, 1089,  9, 1090,  7, 1091, 12, 1092, 35, 1093, 23,
  1094, 24, 1095, 22, 1096, 30, 1097, 41, 1100, 18, 1102, 25, 1103, 16, 1108, 32,
  1110,  3, 1111, 27, 1168, 57, 1169, 57,
};

static const float OrderToRatio[] =
{
  0.086396118,  0.086396118,  0.078197605,  0.078197605,  0.065872542,  0.065872542,  0.059187522,  0.059187522, 
  0.052652553,  0.052652553,  0.052581321,  0.052581321,  0.049197198,  0.049197198,  0.044675568,  0.044675568, 
  0.043434274,  0.043434274,  0.041756533,  0.041756533,  0.037863506,  0.037863506,  0.036464327,  0.036464327, 
  0.031302590,  0.031302590,  0.030228483,  0.030228483,  0.028130204,  0.028130204,  0.026626992,  0.026626992, 
  0.019235284,  0.019235284,  0.019221576,  0.019221576,  0.016801163,  0.016801163,  0.015764507,  0.015764507, 
  0.014064980,  0.014064980,  0.012210015,  0.012210015,  0.010426282,  0.010426282,  0.009638081,  0.009638081, 
  0.008392381,  0.008392381,  0.007972334,  0.007972334,  0.007415697,  0.007415697,  0.007331003,  0.007331003, 
  0.006828708,  0.006828708,  0.006628476,  0.006628476,  0.006232417,  0.006232417,  0.005837582,  0.005837582, 
  0.004777672,  0.004777672,  0.004768860,  0.004768860,  0.004681717,  0.004681717,  0.004432284,  0.004432284, 
  0.004406826,  0.004406826,  0.004394098,  0.004394098,  0.003943207,  0.003943207,  0.003156230,  0.003156230, 
  0.003075207,  0.003075207,  0.002902635,  0.002902635,  0.002526404,  0.002526404,  0.002310261,  0.002310261, 
  0.002298756,  0.002298756,  0.002042468,  0.002042468,  0.001653998,  0.001653998,  0.001565876,  0.001565876, 
  0.001541398,  0.001541398,  0.001188421,  0.001188421,  0.001093935,  0.001093935,  0.001030536,  0.001030536, 
  0.000999693,  0.000999693,  0.000960773,  0.000960773,  0.000450156,  0.000450156,  0.000439140,  0.000439140, 
  0.000253840,  0.000253840,  0.000215899,  0.000215899, 
};


/* Model Table:
 * Number of web pages processed for this model: 1115
 * Number of characters consumed for this model: 4085253
 * Total considered sequences: 1830 / 3364
 *
 * - Positive sequences: first 932 (0.9950171325661958)
 * - Probable sequences: next 290 (1222-932) (0.003983406353119223)
 * - Neutral sequences: last 2142 (0.000999461080684938)
 * - Negative sequences: 1534 (off-ratio, TODO)
 */


#define UkrainianUnicodeAlphabetWidth         58
#define UkrainianUnicodeCharToOrderIsReduced  0


#define UkrainianFCMLowerBound  97
#define UkrainianFCMUpperBound  1169


static const PRUint8 UkrainianUnicodeCharToOrder[] =
{
  30,49,41,44,29,53,48,45,32,57,52,40,43,34,35,47,0,38,37,39,
  46,54,51,56,50,55,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
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
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,21,7,20,14,
  9,27,18,6,22,11,12,15,3,1,16,5,10,8,13,36,24,25,23,31,
  42,0,0,19,0,26,17,0,0,0,0,33,0,4,28,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,58,
};

static const PRUint8 UkrainianCompactedLangModel[] =
{
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,0,3,3,3,3,3,3,3,3,3,0,0,3,0,3,0,0,3,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,
  0,3,3,3,2,3,2,3,3,3,3,3,3,3,3,3,3,3,3,1,3,3,3,3,3,3,3,3,3,0,0,3,0,3,0,0,3,1,0,0,0,1,3,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,2,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,3,3,3,3,3,0,3,2,3,3,3,1,0,0,3,0,3,0,0,3,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,
  0,3,3,3,3,3,1,3,3,3,3,3,3,3,3,3,3,3,3,0,3,3,3,3,3,3,3,3,3,0,0,3,0,3,1,0,3,1,1,0,0,0,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,0,0,0,3,0,1,0,0,3,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,
  0,2,2,3,1,3,2,3,3,3,3,3,3,2,3,3,3,3,3,0,3,3,3,3,3,3,1,3,3,0,0,3,0,3,0,0,3,0,0,0,0,1,3,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,3,1,3,3,3,2,3,1,0,1,3,1,1,0,0,1,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,2,3,1,3,2,3,0,3,3,3,3,2,1,0,0,2,0,3,0,0,3,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,3,3,2,3,1,3,3,2,3,3,3,3,3,3,3,3,3,0,3,3,3,3,3,3,3,3,3,0,0,3,0,3,0,0,3,0,0,0,0,1,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,2,3,1,1,3,3,3,1,0,0,0,3,0,2,0,0,3,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,2,1,3,1,3,2,0,1,1,3,2,1,1,0,0,3,1,1,0,1,2,0,0,0,0,0,3,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,
  0,3,3,3,3,2,3,2,3,3,3,3,3,3,3,3,1,3,3,3,3,3,0,2,2,2,3,1,1,0,0,1,0,2,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,2,3,3,1,3,1,3,3,3,3,3,3,1,3,3,3,2,3,0,3,3,3,3,3,3,3,3,3,0,1,3,0,3,0,0,2,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,0,0,0,3,0,1,0,0,2,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
  0,3,3,3,3,3,3,3,2,3,3,3,3,3,2,3,3,2,1,1,2,3,1,2,1,3,2,1,0,0,0,2,0,1,0,0,3,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,
  0,3,3,3,3,3,3,1,3,3,3,3,3,3,1,1,3,2,2,1,1,3,1,2,0,3,1,1,0,0,0,2,0,1,0,0,2,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,1,1,3,0,3,0,3,3,1,3,3,3,1,3,3,3,1,3,0,3,3,2,3,3,3,3,3,2,0,0,2,1,3,0,0,1,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,2,2,2,2,1,1,0,0,3,0,1,0,0,2,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
  0,3,0,3,1,2,1,3,3,2,3,3,1,1,3,3,3,3,2,0,3,3,3,2,1,3,3,1,2,0,0,3,0,3,0,0,3,0,0,0,1,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,1,1,1,2,2,0,1,1,2,2,1,0,0,0,2,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,3,3,3,3,3,2,3,3,3,3,3,3,2,3,1,1,1,1,2,3,1,2,3,2,3,2,0,0,0,2,0,2,0,0,1,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,
  0,3,2,3,1,3,0,3,3,1,3,3,3,1,3,3,3,2,3,1,3,3,0,2,2,3,1,3,1,0,0,3,0,2,0,0,2,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
  0,3,3,3,3,1,3,2,2,3,1,3,3,3,1,2,1,3,0,2,1,1,0,3,1,2,2,2,0,0,0,1,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,3,3,3,3,3,3,3,3,2,1,3,3,1,3,1,0,0,1,1,1,0,1,2,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
  0,3,3,2,3,1,3,2,3,3,1,2,2,3,1,1,1,3,2,3,1,2,0,0,1,1,3,0,0,0,0,3,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,1,2,3,1,3,1,3,3,2,3,3,3,0,3,3,2,0,3,0,3,3,2,3,2,3,3,3,3,1,1,2,0,3,0,0,2,1,0,0,0,0,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,
  0,3,3,3,3,1,3,2,1,3,1,3,3,3,3,1,1,3,1,1,2,3,0,3,0,2,1,3,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
  0,1,1,3,0,2,0,3,3,0,3,2,3,0,3,3,1,1,3,0,1,1,3,2,3,1,0,3,3,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,1,1,1,0,1,0,1,0,1,0,1,1,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,3,3,0,3,0,3,3,1,3,3,3,3,3,0,3,3,3,3,3,3,3,3,3,3,3,3,2,3,2,0,
  0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,3,3,0,3,0,3,2,0,3,3,3,3,3,0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,0,
  0,3,3,3,3,2,3,3,3,3,1,3,3,3,0,3,2,1,0,1,1,1,0,0,1,1,1,0,0,0,0,1,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,3,3,0,3,0,3,3,0,3,3,3,3,3,0,3,3,2,3,3,3,3,2,1,3,3,3,3,3,2,0,
  0,0,1,3,1,3,0,3,3,1,3,3,3,0,3,3,3,1,2,0,3,1,1,1,1,2,3,1,3,0,0,1,0,2,0,0,2,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,0,3,0,3,3,1,3,2,3,3,3,0,2,3,2,3,1,3,2,3,1,3,3,2,2,1,2,0,
  0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,0,3,0,3,3,0,3,3,3,3,3,0,3,3,3,3,3,3,3,3,3,3,3,3,2,3,2,0,
  0,3,3,2,3,3,3,1,3,3,3,1,3,3,1,1,1,1,0,1,2,1,1,0,1,0,2,0,0,0,0,1,0,1,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,1,0,0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,3,3,0,3,1,2,3,0,3,2,3,3,3,0,3,2,3,3,3,2,3,3,2,3,2,2,3,1,1,0,
  0,1,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,0,3,0,3,3,1,3,3,3,3,3,0,3,3,2,3,3,3,3,3,2,3,2,3,3,1,2,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,3,3,0,3,0,2,3,0,3,3,3,3,3,0,2,2,3,3,2,2,2,3,3,2,2,3,2,1,1,0,
  0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,3,3,0,3,0,2,3,0,3,1,3,3,2,0,3,3,2,3,2,2,3,3,2,3,3,3,1,1,1,0,
  0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,0,3,0,2,3,0,3,3,3,3,3,0,2,2,3,3,1,1,2,3,1,3,1,1,3,1,1,0,
  0,3,3,2,3,0,3,1,0,3,1,0,1,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,1,0,0,0,1,0,1,1,0,1,0,0,0,0,1,0,0,1,0,1,0,0,0,0,0,0,0,0,3,3,0,3,0,2,3,1,3,1,2,1,2,0,3,3,1,3,3,2,3,3,1,1,1,1,1,1,0,0,
  0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,3,3,0,3,0,2,3,0,3,3,2,2,2,0,2,2,2,3,1,3,3,2,3,2,2,3,2,1,2,0,
  0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,0,3,0,3,3,1,2,3,3,3,1,0,2,2,1,3,1,1,1,3,2,1,1,1,1,1,1,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,3,3,0,3,0,3,1,1,3,3,3,3,3,0,3,3,2,1,3,3,3,1,1,3,2,2,2,2,2,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,0,3,0,1,3,0,3,3,3,3,3,0,2,1,3,3,3,2,2,2,1,1,1,1,2,1,1,0,
  0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,0,3,0,3,3,0,3,3,2,3,2,0,2,1,3,3,2,2,1,2,1,1,1,1,1,0,1,0,
  0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,0,3,0,3,3,0,2,3,1,3,2,0,1,2,1,3,1,1,2,3,1,1,1,1,1,0,1,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,0,2,0,2,3,0,3,2,2,3,3,0,2,2,1,2,2,1,3,1,2,2,1,1,2,1,1,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,0,3,0,3,3,0,3,2,1,2,1,0,1,1,3,1,1,2,1,2,2,1,1,1,1,0,1,0,
  0,1,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,3,3,0,3,0,2,3,1,3,3,2,2,1,0,2,1,2,3,1,1,1,2,1,1,2,1,0,0,1,0,
  0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,3,3,0,3,0,1,3,0,2,3,3,3,2,0,1,1,1,3,1,1,1,1,1,1,3,0,1,1,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,3,3,0,3,0,1,3,0,1,1,1,1,1,0,1,2,1,1,1,1,0,1,0,1,1,1,1,1,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,0,3,0,2,3,0,1,1,1,1,1,0,1,1,1,2,0,1,1,2,2,2,1,0,2,0,1,0,
  0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,3,0,1,2,0,1,0,2,1,1,0,1,1,1,1,2,1,3,2,1,0,2,3,1,3,0,0,
  0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,0,2,0,1,3,0,1,1,1,1,1,0,1,1,1,2,1,1,1,1,1,1,1,0,1,0,1,0,
  0,2,3,1,2,3,1,2,1,2,1,0,1,2,1,2,1,0,1,1,1,1,0,0,1,0,1,1,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
};


const SequenceModel Windows_1251UkrainianModel =
{
  Windows_1251_CharToOrderMap,
  UkrainianFCMLowerBound,
  UkrainianFCMUpperBound,
  UkrainianUnicodeCharToOrder,
  UkrainianCompactedLangModel,
  58,
  (float)0.9990005389193151,
  PR_FALSE,
  "WINDOWS-1251",
  "uk"
};

const LanguageModel UkrainianModel =
{
  "uk",
  Unicode_CharOrder,
  116,
  UkrainianFCMLowerBound,
  UkrainianFCMUpperBound,
  UkrainianUnicodeCharToOrderIsReduced,

  UkrainianUnicodeCharToOrder,
  OrderToRatio,
  UkrainianCompactedLangModel,
  58,
  7,
  (float)0.4440848583918793,
  37,
  (float)0.033648833988984286,
  (float)0.9996781105111484,
};
