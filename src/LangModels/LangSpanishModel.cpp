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

/********* Language model for: Spanish *********/

/**
 * Generated by BuildLangModel.py
 * On: 2023-07-06 22:42:27.902737
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
static const unsigned char Iso_8859_15_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  1, 14, 10,  8,  0, 19, 15, 17,  5, 23, 27,  7, 12,  3,  2, /* 4X */
   13, 21,  6,  4,  9, 11, 18, 28, 29, 16, 25,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  1, 14, 10,  8,  0, 19, 15, 17,  5, 23, 27,  7, 12,  3,  2, /* 6X */
   13, 21,  6,  4,  9, 11, 18, 28, 29, 16, 25,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM, 38,SYM, 38,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM, 49, 58,SYM,SYM, 49,SYM,SYM,SYM, 59, 59, 60,SYM, /* BX */
   39, 24, 50, 43, 36, 37, 45, 40, 34, 26, 46, 41, 48, 22, 57, 53, /* CX */
   55, 30, 51, 20, 42, 56, 33,SYM, 35, 52, 31, 54, 32, 47, 61, 44, /* DX */
   39, 24, 50, 43, 36, 37, 45, 40, 34, 26, 46, 41, 48, 22, 57, 53, /* EX */
   55, 30, 51, 20, 42, 56, 33,SYM, 35, 52, 31, 54, 32, 47, 62, 60, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_1_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  1, 14, 10,  8,  0, 19, 15, 17,  5, 23, 27,  7, 12,  3,  2, /* 4X */
   13, 21,  6,  4,  9, 11, 18, 28, 29, 16, 25,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  1, 14, 10,  8,  0, 19, 15, 17,  5, 23, 27,  7, 12,  3,  2, /* 6X */
   13, 21,  6,  4,  9, 11, 18, 28, 29, 16, 25,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM, 58,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
   39, 24, 50, 43, 36, 37, 45, 40, 34, 26, 46, 41, 48, 22, 57, 53, /* CX */
   55, 30, 51, 20, 42, 56, 33,SYM, 35, 52, 31, 54, 32, 47, 63, 44, /* DX */
   39, 24, 50, 43, 36, 37, 45, 40, 34, 26, 46, 41, 48, 22, 57, 53, /* EX */
   55, 30, 51, 20, 42, 56, 33,SYM, 35, 52, 31, 54, 32, 47, 64, 60, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Windows_1252_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  1, 14, 10,  8,  0, 19, 15, 17,  5, 23, 27,  7, 12,  3,  2, /* 4X */
   13, 21,  6,  4,  9, 11, 18, 28, 29, 16, 25,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  1, 14, 10,  8,  0, 19, 15, 17,  5, 23, 27,  7, 12,  3,  2, /* 6X */
   13, 21,  6,  4,  9, 11, 18, 28, 29, 16, 25,SYM,SYM,SYM,SYM,CTR, /* 7X */
  SYM,ILL,SYM, 65,SYM,SYM,SYM,SYM,SYM,SYM, 38,SYM, 59,ILL, 49,ILL, /* 8X */
  ILL,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, 38,SYM, 59,ILL, 49, 60, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM, 58,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
   39, 24, 50, 43, 36, 37, 45, 40, 34, 26, 46, 41, 48, 22, 57, 53, /* CX */
   55, 30, 51, 20, 42, 56, 33,SYM, 35, 52, 31, 54, 32, 47, 66, 44, /* DX */
   39, 24, 50, 43, 36, 37, 45, 40, 34, 26, 46, 41, 48, 22, 57, 53, /* EX */
   55, 30, 51, 20, 42, 56, 33,SYM, 35, 52, 31, 54, 32, 47, 67, 60, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

#define Unicode_Char_size    66

static const unsigned int Unicode_CharOrder[] =
{
  65,  1, 66, 14, 67, 10, 68,  8, 69,  0, 70, 19, 71, 15, 72, 17,
  73,  5, 74, 23, 75, 27, 76,  7, 77, 12, 78,  3, 79,  2, 80, 13,
  81, 21, 82,  6, 83,  4, 84,  9, 85, 11, 86, 18, 87, 28, 88, 29,
  89, 16, 90, 25, 97,  1, 98, 14, 99, 10, 100,  8, 101,  0, 102, 19,
  103, 15, 104, 17, 105,  5, 106, 23, 107, 27, 108,  7, 109, 12, 110,  3,
  111,  2, 112, 13, 113, 21, 114,  6, 115,  4, 116,  9, 117, 11, 118, 18,
  119, 28, 120, 29, 121, 16, 122, 25, 193, 24, 201, 26, 205, 22, 209, 30,
  211, 20, 218, 31, 220, 32, 225, 24, 233, 26, 237, 22, 241, 30, 243, 20,
  250, 31, 252, 32,
};

static const float OrderToRatio[] =
{
  0.126911020,  0.126911020,  0.113074768,  0.113074768,  0.080877664,  0.080877664,  0.072491143,  0.072491143, 
  0.070439482,  0.070439482,  0.067029951,  0.067029951,  0.066609139,  0.066609139,  0.057852098,  0.057852098, 
  0.051214552,  0.051214552,  0.046978368,  0.046978368,  0.045841312,  0.045841312,  0.037942969,  0.037942969, 
  0.028551786,  0.028551786,  0.025471372,  0.025471372,  0.013848415,  0.013848415,  0.013523743,  0.013523743, 
  0.010035148,  0.010035148,  0.009900413,  0.009900413,  0.009837491,  0.009837491,  0.009145339,  0.009145339, 
  0.007893898,  0.007893898,  0.005385404,  0.005385404,  0.004719450,  0.004719450,  0.004451619,  0.004451619, 
  0.003751514,  0.003751514,  0.003584967,  0.003584967,  0.002915037,  0.002915037,  0.002632703,  0.002632703, 
  0.002171424,  0.002171424,  0.002021953,  0.002021953,  0.001570499,  0.001570499,  0.001117641,  0.001117641, 
  0.000084209,  0.000084209, 
};


/* Model Table:
 * Number of web pages processed for this model: 629
 * Number of characters consumed for this model: 4275074
 * Total considered sequences: 1176 / 1089
 *
 * - Positive sequences: first 499 (0.9950396061884504)
 * - Probable sequences: next 163 (662-499) (0.003963984105436302)
 * - Neutral sequences: last 427 (0.0009964097061132549)
 * - Negative sequences: -87 (off-ratio, TODO)
 */


#define SpanishUnicodeAlphabetWidth         33
#define SpanishUnicodeCharToOrderIsReduced  0


#define SpanishFCMLowerBound  97
#define SpanishFCMUpperBound  252


static const PRUint8 SpanishUnicodeCharToOrder[] =
{
  2,15,11,9,1,20,16,18,6,24,28,8,13,4,3,14,22,7,5,10,
  12,19,29,30,17,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,27,0,0,0,
  23,0,0,0,31,0,21,0,0,0,0,0,0,32,0,33,
};

static const PRUint8 SpanishCompactedLangModel[] =
{
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
  3,3,3,3,3,3,3,2,3,1,3,3,3,3,2,0,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
  3,3,3,1,3,3,3,1,3,2,3,3,3,3,2,0,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
  3,3,3,1,3,2,3,1,3,1,3,3,3,2,1,0,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,3,3,
  3,3,3,3,3,3,3,3,3,3,3,2,1,0,3,0,
  0,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,
  3,2,3,3,3,3,1,3,2,3,3,3,1,0,2,1,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,
  2,3,3,3,3,0,3,3,3,3,3,2,3,3,1,0,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
  2,3,3,3,3,3,2,3,3,3,3,2,2,0,2,1,
  0,3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,
  2,3,3,3,3,3,1,3,2,3,3,2,1,0,2,1,
  0,3,3,3,3,3,3,3,3,3,2,2,3,3,1,2,3,3,
  2,3,2,3,2,3,2,3,1,3,1,3,1,0,2,1,
  0,3,3,3,3,3,3,3,3,2,3,3,3,3,2,3,2,3,
  3,3,2,3,1,3,1,3,2,3,2,3,1,0,2,1,
  0,3,3,3,3,3,3,3,3,2,3,3,3,2,2,2,2,3,
  3,2,2,3,2,3,1,3,1,3,3,2,1,0,2,0,
  0,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,
  2,3,3,3,2,3,3,2,3,3,3,1,2,2,0,0,
  0,3,3,3,3,3,3,2,2,2,2,3,3,3,3,3,2,3,
  1,1,1,3,0,3,1,3,1,3,1,2,1,0,3,2,
  0,3,3,3,2,3,3,3,3,2,3,3,3,2,3,2,1,2,
  3,1,1,3,0,2,1,3,1,3,1,1,1,0,3,0,
  0,3,3,3,3,3,3,3,3,2,3,3,3,2,1,3,1,3,
  2,2,1,3,1,3,3,2,1,3,1,1,0,0,2,1,
  0,3,3,3,3,3,3,3,3,2,3,1,3,3,1,2,3,3,
  3,1,1,3,1,3,1,2,1,3,1,2,1,0,3,3,
  0,3,3,3,3,3,2,3,3,2,3,2,3,2,2,2,2,1,
  1,1,1,3,1,0,0,1,1,1,1,3,1,0,1,0,
  0,3,3,3,3,2,3,3,3,2,3,2,3,3,2,2,1,3,
  1,1,2,2,1,3,1,2,1,3,1,2,1,0,2,1,
  0,3,3,3,1,2,3,2,1,2,1,1,3,1,1,1,1,2,
  1,1,1,3,1,3,1,2,1,3,1,1,1,0,0,0,
  0,3,3,3,1,2,3,3,3,1,3,2,3,2,2,1,1,1,
  1,1,3,2,1,3,1,2,1,2,1,1,1,0,3,1,
  0,1,0,0,3,3,0,3,3,3,3,2,0,3,3,1,3,0,
  1,3,2,0,1,0,1,0,1,0,1,0,2,0,0,0,
  0,1,1,0,0,1,1,1,1,0,1,0,3,1,0,1,0,0,
  0,1,1,0,1,0,0,0,0,0,0,0,1,0,0,0,
  0,1,3,3,3,3,0,3,2,3,3,3,0,3,2,2,3,0,
  0,2,3,0,2,0,1,0,2,0,1,0,1,1,0,0,
  0,3,3,3,1,1,3,2,1,1,1,1,3,1,1,1,0,1,
  1,1,1,3,0,1,1,1,0,2,1,1,0,1,1,1,
  0,1,0,0,3,3,2,3,3,1,3,3,2,3,3,2,3,1,
  1,2,3,0,2,0,3,0,1,0,1,0,2,1,0,0,
  0,3,3,3,1,1,3,1,1,1,1,3,3,1,1,1,2,2,
  2,1,1,3,2,1,1,2,2,1,1,1,1,0,1,1,
  0,1,3,1,3,3,2,3,3,3,3,3,1,2,3,1,2,1,
  1,1,2,0,1,0,1,0,1,0,1,0,3,0,0,0,
  0,3,3,3,2,3,3,3,3,1,2,2,3,3,1,1,2,3,
  2,1,1,1,0,1,1,1,0,1,2,2,0,0,0,1,
  0,3,3,3,3,3,3,2,2,1,2,1,2,1,1,1,1,2,
  3,1,1,0,1,1,0,2,1,1,1,2,1,0,0,1,
  0,2,3,3,1,1,3,1,1,1,3,3,3,1,3,2,1,2,
  2,2,2,1,1,2,1,1,1,0,1,1,3,0,0,0,
  0,3,3,3,0,0,1,0,0,0,0,0,1,0,0,0,0,0,
  0,0,0,2,0,3,1,1,0,1,0,0,0,0,0,0,
  0,1,3,2,3,3,1,2,3,1,3,2,0,3,1,3,1,0,
  1,0,1,0,0,0,1,0,0,0,0,0,1,1,0,0,
  0,2,0,0,1,1,2,1,2,1,1,1,0,1,0,1,1,0,
  1,0,0,0,0,2,0,0,0,1,1,0,0,0,0,0,
};


const SequenceModel Iso_8859_15SpanishModel =
{
  Iso_8859_15_CharToOrderMap,
  SpanishFCMLowerBound,
  SpanishFCMUpperBound,
  SpanishUnicodeCharToOrder,
  SpanishCompactedLangModel,
  33,
  (float)0.9990035902938867,
  PR_TRUE,
  "ISO-8859-15",
  "es"
};

const SequenceModel Iso_8859_1SpanishModel =
{
  Iso_8859_1_CharToOrderMap,
  SpanishFCMLowerBound,
  SpanishFCMUpperBound,
  SpanishUnicodeCharToOrder,
  SpanishCompactedLangModel,
  33,
  (float)0.9990035902938867,
  PR_TRUE,
  "ISO-8859-1",
  "es"
};

const SequenceModel Windows_1252SpanishModel =
{
  Windows_1252_CharToOrderMap,
  SpanishFCMLowerBound,
  SpanishFCMUpperBound,
  SpanishUnicodeCharToOrder,
  SpanishCompactedLangModel,
  33,
  (float)0.9990035902938867,
  PR_TRUE,
  "WINDOWS-1252",
  "es"
};

const LanguageModel SpanishModel =
{
  "es",
  Unicode_CharOrder,
  66,
  SpanishFCMLowerBound,
  SpanishFCMUpperBound,
  SpanishUnicodeCharToOrderIsReduced,

  SpanishUnicodeCharToOrder,
  OrderToRatio,
  SpanishCompactedLangModel,
  33,
  5,
  (float)0.46379407701480724,
  20,
  (float)0.0344064219707074,
  (float)0.9998764933659626,
};
