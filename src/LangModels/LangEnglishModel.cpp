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

/********* Language model for: English *********/

/**
 * Generated by BuildLangModel.py
 * On: 2023-07-06 22:42:31.123164
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
static const unsigned char Iso_8859_1_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  1, 18, 11, 10,  0, 15, 16,  8,  3, 23, 21,  9, 12,  4,  5, /* 4X */
   14, 25,  7,  6,  2, 13, 20, 19, 22, 17, 24,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  1, 18, 11, 10,  0, 15, 16,  8,  3, 23, 21,  9, 12,  4,  5, /* 6X */
   14, 25,  7,  6,  2, 13, 20, 19, 22, 17, 24,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM, 59,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
   36, 27, 35, 39, 31, 46, 42, 34, 33, 26, 47, 44, 60, 29, 45, 49, /* CX */
   50, 40, 57, 32, 43, 58, 30,SYM, 37, 53, 41, 56, 28, 54, 55, 48, /* DX */
   36, 27, 35, 39, 31, 46, 42, 34, 33, 26, 47, 44, 60, 29, 45, 49, /* EX */
   50, 40, 57, 32, 43, 58, 30,SYM, 37, 53, 41, 56, 28, 54, 55, 61, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Windows_1252_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  1, 18, 11, 10,  0, 15, 16,  8,  3, 23, 21,  9, 12,  4,  5, /* 4X */
   14, 25,  7,  6,  2, 13, 20, 19, 22, 17, 24,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  1, 18, 11, 10,  0, 15, 16,  8,  3, 23, 21,  9, 12,  4,  5, /* 6X */
   14, 25,  7,  6,  2, 13, 20, 19, 22, 17, 24,SYM,SYM,SYM,SYM,CTR, /* 7X */
  SYM,ILL,SYM, 62,SYM,SYM,SYM,SYM,SYM,SYM, 38,SYM, 51,ILL, 52,ILL, /* 8X */
  ILL,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, 38,SYM, 51,ILL, 52, 61, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM, 59,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
   36, 27, 35, 39, 31, 46, 42, 34, 33, 26, 47, 44, 60, 29, 45, 49, /* CX */
   50, 40, 57, 32, 43, 58, 30,SYM, 37, 53, 41, 56, 28, 54, 55, 48, /* DX */
   36, 27, 35, 39, 31, 46, 42, 34, 33, 26, 47, 44, 60, 29, 45, 49, /* EX */
   50, 40, 57, 32, 43, 58, 30,SYM, 37, 53, 41, 56, 28, 54, 55, 61, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

#define Unicode_Char_size    52

static const unsigned int Unicode_CharOrder[] =
{
  65,  1, 66, 18, 67, 11, 68, 10, 69,  0, 70, 15, 71, 16, 72,  8,
  73,  3, 74, 23, 75, 21, 76,  9, 77, 12, 78,  4, 79,  5, 80, 14,
  81, 25, 82,  7, 83,  6, 84,  2, 85, 13, 86, 20, 87, 19, 88, 22,
  89, 17, 90, 24, 97,  1, 98, 18, 99, 11, 100, 10, 101,  0, 102, 15,
  103, 16, 104,  8, 105,  3, 106, 23, 107, 21, 108,  9, 109, 12, 110,  4,
  111,  5, 112, 14, 113, 25, 114,  7, 115,  6, 116,  2, 117, 13, 118, 20,
  119, 19, 120, 22, 121, 17, 122, 24,
};

static const float OrderToRatio[] =
{
  0.119645748,  0.119645748,  0.086398039,  0.086398039,  0.084658267,  0.084658267,  0.076047653,  0.076047653, 
  0.073822906,  0.073822906,  0.072539388,  0.072539388,  0.068177359,  0.068177359,  0.066832615,  0.066832615, 
  0.043998216,  0.043998216,  0.043481910,  0.043481910,  0.038505145,  0.038505145,  0.036642139,  0.036642139, 
  0.027670698,  0.027670698,  0.027126456,  0.027126456,  0.021911708,  0.021911708,  0.021776986,  0.021776986, 
  0.020140605,  0.020140605,  0.015672182,  0.015672182,  0.015657561,  0.015657561,  0.014973897,  0.014973897, 
  0.010516831,  0.010516831,  0.006417981,  0.006417981,  0.002411948,  0.002411948,  0.002038982,  0.002038982, 
  0.001360931,  0.001360931,  0.001045796,  0.001045796, 
};


/* Model Table:
 * Number of web pages processed for this model: 878
 * Number of characters consumed for this model: 7660197
 * Total considered sequences: 1313 / 676
 *
 * - Positive sequences: first 384 (0.9950339883124476)
 * - Probable sequences: next 174 (558-384) (0.003967951897527966)
 * - Neutral sequences: last 118 (0.0009980597900244303)
 * - Negative sequences: -637 (off-ratio, TODO)
 */


#define EnglishUnicodeAlphabetWidth         26
#define EnglishUnicodeCharToOrderIsReduced  0


#define EnglishFCMLowerBound  97
#define EnglishFCMUpperBound  122


static const PRUint8 EnglishUnicodeCharToOrder[] =
{
  2,19,12,11,1,16,17,9,4,24,22,10,13,5,6,15,26,8,7,3,
  14,21,20,23,18,25,
};

static const PRUint8 EnglishCompactedLangModel[] =
{
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,
  0,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,
  0,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,2,3,3,3,2,2,1,1,3,1,
  0,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,2,3,2,3,3,3,2,3,3,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,2,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,
  0,3,3,3,3,3,3,3,2,3,3,2,3,3,3,3,3,3,3,3,3,2,3,1,1,2,3,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,1,2,2,
  0,3,3,3,3,3,3,3,3,2,3,2,2,3,3,2,2,1,3,2,3,2,2,1,1,2,1,
  0,3,3,3,3,2,3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,1,2,2,1,
  0,3,3,2,3,3,3,3,3,3,3,3,3,3,3,2,2,3,3,3,3,3,1,1,3,1,1,
  0,3,3,3,3,2,3,3,3,3,3,2,3,2,3,2,2,2,3,2,2,1,3,1,1,2,2,
  0,3,3,2,3,3,3,3,2,2,3,2,3,3,3,3,2,2,3,3,2,1,1,1,1,1,1,
  0,3,3,3,3,3,3,3,3,2,3,3,3,3,2,3,3,3,2,3,1,2,3,2,2,2,2,
  0,3,3,3,3,2,3,3,3,3,3,2,2,3,3,3,2,2,3,2,2,2,2,1,1,1,0,
  0,3,3,3,3,1,3,3,3,1,3,2,2,2,3,1,3,2,3,2,1,1,1,1,1,0,1,
  0,3,3,3,3,3,3,3,3,3,3,2,2,3,3,2,2,3,3,2,2,1,1,1,1,1,1,
  0,3,3,3,3,3,3,3,3,1,3,3,3,3,2,3,2,2,1,3,2,2,2,2,1,2,1,
  0,3,3,3,3,3,3,3,3,2,3,2,3,3,3,1,1,2,3,3,2,2,1,1,3,1,1,
  0,3,3,2,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,1,2,1,1,1,1,
  0,3,3,1,3,1,3,2,2,2,2,2,1,1,2,1,1,1,3,1,1,1,1,0,1,1,1,
  0,3,3,2,3,3,3,3,3,3,3,2,1,2,3,2,2,2,3,2,2,2,2,1,1,1,1,
  0,3,3,3,3,1,2,1,1,2,1,1,3,1,3,3,2,1,2,1,1,2,0,1,1,0,1,
  0,3,3,1,3,1,3,2,2,1,1,1,1,1,3,1,1,0,1,1,1,1,1,1,1,0,0,
  0,3,3,2,3,1,3,1,1,2,2,1,1,1,2,1,1,1,2,1,1,1,1,1,1,2,1,
  0,1,2,1,2,0,1,1,1,1,1,1,0,1,3,1,1,0,1,1,1,1,0,0,0,1,1,
};


const SequenceModel Iso_8859_1EnglishModel =
{
  Iso_8859_1_CharToOrderMap,
  EnglishFCMLowerBound,
  EnglishFCMUpperBound,
  EnglishUnicodeCharToOrder,
  EnglishCompactedLangModel,
  26,
  (float)0.9990019402099756,
  PR_TRUE,
  "ISO-8859-1",
  "en"
};

const SequenceModel Windows_1252EnglishModel =
{
  Windows_1252_CharToOrderMap,
  EnglishFCMLowerBound,
  EnglishFCMUpperBound,
  EnglishUnicodeCharToOrder,
  EnglishCompactedLangModel,
  26,
  (float)0.9990019402099756,
  PR_TRUE,
  "WINDOWS-1252",
  "en"
};

const LanguageModel EnglishModel =
{
  "en",
  Unicode_CharOrder,
  52,
  EnglishFCMLowerBound,
  EnglishFCMUpperBound,
  EnglishUnicodeCharToOrderIsReduced,

  EnglishUnicodeCharToOrder,
  OrderToRatio,
  EnglishCompactedLangModel,
  26,
  5,
  (float)0.44057261190541186,
  18,
  (float)0.03876636593027569,
  (float)0.9994719456953914,
};
