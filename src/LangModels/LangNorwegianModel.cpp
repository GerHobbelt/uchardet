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

/********* Language model for: Norwegian *********/

/**
 * Generated by BuildLangModel.py
 * On: 2023-07-06 21:01:13.237521
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
static const unsigned char Ibm865_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  5, 17, 23,  9,  0, 14, 11, 18,  6, 21, 10,  8, 12,  2,  7, /* 4X */
   16, 29,  1,  4,  3, 15, 13, 25, 27, 20, 26,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  5, 17, 23,  9,  0, 14, 11, 18,  6, 21, 10,  8, 12,  2,  7, /* 6X */
   16, 29,  1,  4,  3, 15, 13, 25, 27, 20, 26,SYM,SYM,SYM,SYM,CTR, /* 7X */
   39, 33, 28, 54, 32, 44, 19, 39, 58, 52, 36, 56, 63, 59, 32, 19, /* 8X */
   28, 24, 24, 47, 30, 62, 67, 65, 69, 30, 33, 22,SYM, 22,SYM,SYM, /* 9X */
   31, 34, 35, 51, 55, 55,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* CX */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* DX */
   38, 53, 70, 46, 40, 40, 64, 42, 45, 71, 72, 48, 57, 45, 50,SYM, /* EX */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_15_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  5, 17, 23,  9,  0, 14, 11, 18,  6, 21, 10,  8, 12,  2,  7, /* 4X */
   16, 29,  1,  4,  3, 15, 13, 25, 27, 20, 26,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  5, 17, 23,  9,  0, 14, 11, 18,  6, 21, 10,  8, 12,  2,  7, /* 6X */
   16, 29,  1,  4,  3, 15, 13, 25, 27, 20, 26,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM, 37,SYM, 37,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM, 61, 64,SYM,SYM, 61,SYM,SYM,SYM, 68, 68, 69,SYM, /* BX */
   44, 31, 54, 43, 32, 19, 24, 39, 36, 28, 58, 52, 59, 34, 63, 56, /* CX */
   41, 55, 62, 35, 47, 66, 30,SYM, 22, 65, 51, 67, 33, 49, 60, 53, /* DX */
   44, 31, 54, 43, 32, 19, 24, 39, 36, 28, 58, 52, 59, 34, 63, 56, /* EX */
   41, 55, 62, 35, 47, 66, 30,SYM, 22, 65, 51, 67, 33, 49, 60, 69, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_1_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  5, 17, 23,  9,  0, 14, 11, 18,  6, 21, 10,  8, 12,  2,  7, /* 4X */
   16, 29,  1,  4,  3, 15, 13, 25, 27, 20, 26,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  5, 17, 23,  9,  0, 14, 11, 18,  6, 21, 10,  8, 12,  2,  7, /* 6X */
   16, 29,  1,  4,  3, 15, 13, 25, 27, 20, 26,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM, 64,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
   44, 31, 54, 43, 32, 19, 24, 39, 36, 28, 58, 52, 59, 34, 63, 56, /* CX */
   41, 55, 62, 35, 47, 66, 30,SYM, 22, 65, 51, 67, 33, 49, 60, 53, /* DX */
   44, 31, 54, 43, 32, 19, 24, 39, 36, 28, 58, 52, 59, 34, 63, 56, /* EX */
   41, 55, 62, 35, 47, 66, 30,SYM, 22, 65, 51, 67, 33, 49, 60, 69, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Windows_1252_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  5, 17, 23,  9,  0, 14, 11, 18,  6, 21, 10,  8, 12,  2,  7, /* 4X */
   16, 29,  1,  4,  3, 15, 13, 25, 27, 20, 26,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  5, 17, 23,  9,  0, 14, 11, 18,  6, 21, 10,  8, 12,  2,  7, /* 6X */
   16, 29,  1,  4,  3, 15, 13, 25, 27, 20, 26,SYM,SYM,SYM,SYM,CTR, /* 7X */
  SYM,ILL,SYM, 73,SYM,SYM,SYM,SYM,SYM,SYM, 37,SYM, 68,ILL, 61,ILL, /* 8X */
  ILL,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, 37,SYM, 68,ILL, 61, 69, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM, 64,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
   44, 31, 54, 43, 32, 19, 24, 39, 36, 28, 58, 52, 59, 34, 63, 56, /* CX */
   41, 55, 62, 35, 47, 66, 30,SYM, 22, 65, 51, 67, 33, 49, 60, 53, /* DX */
   44, 31, 54, 43, 32, 19, 24, 39, 36, 28, 58, 52, 59, 34, 63, 56, /* EX */
   41, 55, 62, 35, 47, 66, 30,SYM, 22, 65, 51, 67, 33, 49, 60, 69, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const int Unicode_Char_size = 60;
static const unsigned int Unicode_CharOrder[] =
{
  65,  5, 66, 17, 67, 23, 68,  9, 69,  0, 70, 14, 71, 11, 72, 18,
  73,  6, 74, 21, 75, 10, 76,  8, 77, 12, 78,  2, 79,  7, 80, 16,
  81, 29, 82,  1, 83,  4, 84,  3, 85, 15, 86, 13, 87, 25, 88, 27,
  89, 20, 90, 26, 97,  5, 98, 17, 99, 23, 100,  9, 101,  0, 102, 14,
  103, 11, 104, 18, 105,  6, 106, 21, 107, 10, 108,  8, 109, 12, 110,  2,
  111,  7, 112, 16, 113, 29, 114,  1, 115,  4, 116,  3, 117, 15, 118, 13,
  119, 25, 120, 27, 121, 20, 122, 26, 197, 19, 198, 24, 201, 28, 216, 22,
  229, 19, 230, 24, 233, 28, 248, 22,
};


/* Model Table:
 * Number of web pages processed for this model: 869
 * Number of characters consumed for this model: 4112512
 * Total considered sequences: 1334 / 900
 *
 * - Positive sequences: first 487 (0.9950235309034227)
 * - Probable sequences: next 203 (690-487) (0.0039815332751586)
 * - Neutral sequences: last 210 (0.000994935821418741)
 * - Negative sequences: -434 (off-ratio, TODO)
 */


#define NorwegianFCMLowerBound  97
#define NorwegianFCMUpperBound  248


static const PRUint8 NorwegianFrequentCharMapping[] =
{
  6,18,24,10,1,15,12,19,7,22,11,9,13,3,8,17,30,2,5,4,
  16,14,26,28,21,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,20,25,0,0,29,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,23,
};

static const PRUint8 NorwegianCompactedLangModel[] =
{
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,2,2,3,2,3,2,3,0,2,
  
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,
  
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,2,2,1,
  
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,1,2,1,
  
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,1,2,2,
  
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,3,1,3,0,3,3,3,2,2,
  
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,3,3,3,2,2,3,3,1,2,
  
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,3,1,3,0,3,2,3,1,1,
  
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,2,2,1,2,1,
  
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,2,2,2,2,0,2,1,
  
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,1,1,2,1,0,1,1,
  
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,2,1,1,2,1,1,1,1,
  
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,2,2,2,1,1,2,1,
  
  0,3,3,3,3,3,3,3,3,3,3,2,3,3,3,2,3,2,3,3,3,2,3,3,1,3,0,1,0,1,0,
  
  0,3,3,2,3,2,3,3,3,3,1,2,2,2,2,3,3,1,2,2,3,3,3,3,2,3,1,0,1,1,0,
  
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,2,1,2,2,1,3,1,2,2,2,1,1,
  
  0,3,3,3,3,3,3,3,3,3,3,2,3,2,2,3,3,3,2,3,3,3,2,2,2,1,1,1,1,2,1,
  
  0,3,3,3,2,3,3,3,3,3,2,1,1,2,1,2,3,1,3,2,3,3,3,3,3,3,2,0,0,1,0,
  
  0,3,3,3,3,3,3,3,3,3,2,2,1,3,3,2,3,1,2,2,3,3,3,3,2,3,2,1,0,1,1,
  
  0,3,3,3,3,3,1,2,1,3,3,3,3,2,3,2,1,3,2,1,1,0,0,1,1,0,0,0,0,0,0,
  
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,2,1,1,1,1,3,1,2,1,1,0,1,
  
  0,3,2,2,2,2,3,3,3,1,2,2,1,1,1,2,3,1,1,1,2,1,1,3,1,3,0,0,0,2,0,
  
  0,3,3,3,3,3,1,2,1,3,3,3,2,3,3,2,1,3,2,2,0,3,1,1,0,1,0,0,0,0,0,
  
  0,3,3,2,3,3,3,3,3,3,2,3,2,2,1,1,3,2,2,3,0,3,0,1,3,3,1,1,0,1,2,
  
  0,1,3,2,2,3,0,1,1,2,2,1,2,1,1,2,1,2,1,1,0,1,0,0,1,0,0,0,0,0,0,
  
  0,3,2,2,2,2,3,3,3,2,1,1,1,1,0,2,2,1,2,3,0,1,1,1,1,1,2,0,0,0,0,
  
  0,3,1,1,2,1,3,3,3,1,2,1,1,1,1,1,2,1,1,3,0,2,2,0,1,1,1,2,0,1,1,
  
  0,2,1,1,2,1,2,3,2,1,1,1,1,1,1,2,2,2,1,1,0,2,0,0,2,0,1,0,2,1,0,
  
  0,2,2,3,2,2,1,1,2,1,1,1,2,1,1,1,1,1,1,1,0,0,0,0,1,0,0,1,1,0,1,
  
  0,1,1,0,1,1,2,2,1,1,1,0,1,0,1,1,3,0,1,0,0,0,1,0,1,0,0,0,0,0,1,
  
};


const SequenceModel Ibm865NorwegianModel =
{
  Ibm865_CharToOrderMap,
  NorwegianFCMLowerBound,
  NorwegianFCMUpperBound,
  NorwegianFrequentCharMapping,
  NorwegianCompactedLangModel,
  30,
  (float)0.9990050641785813,
  PR_TRUE,
  "IBM865",
  "no"
};

const SequenceModel Iso_8859_15NorwegianModel =
{
  Iso_8859_15_CharToOrderMap,
  NorwegianFCMLowerBound,
  NorwegianFCMUpperBound,
  NorwegianFrequentCharMapping,
  NorwegianCompactedLangModel,
  30,
  (float)0.9990050641785813,
  PR_TRUE,
  "ISO-8859-15",
  "no"
};

const SequenceModel Iso_8859_1NorwegianModel =
{
  Iso_8859_1_CharToOrderMap,
  NorwegianFCMLowerBound,
  NorwegianFCMUpperBound,
  NorwegianFrequentCharMapping,
  NorwegianCompactedLangModel,
  30,
  (float)0.9990050641785813,
  PR_TRUE,
  "ISO-8859-1",
  "no"
};

const SequenceModel Windows_1252NorwegianModel =
{
  Windows_1252_CharToOrderMap,
  NorwegianFCMLowerBound,
  NorwegianFCMUpperBound,
  NorwegianFrequentCharMapping,
  NorwegianCompactedLangModel,
  30,
  (float)0.9990050641785813,
  PR_TRUE,
  "WINDOWS-1252",
  "no"
};

const LanguageModel NorwegianModel =
{
  "no",
  Unicode_CharOrder,
  60,
  NorwegianFCMLowerBound,
  NorwegianFCMUpperBound,
  NorwegianFrequentCharMapping,
  NorwegianCompactedLangModel,
  30,
  5,
  (float)0.4625321458028573,
  19,
  (float)0.03407625315135858,
  (float)0.9994351384263439,
};
