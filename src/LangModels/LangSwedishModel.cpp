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

/********* Language model for: Swedish *********/

/**
 * Generated by BuildLangModel.py
 * On: 2023-07-06 22:43:00.146491
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
  SYM,  1, 19, 18,  9,  0, 16, 12, 15,  6, 24, 11,  7, 10,  2,  8, /* 4X */
   17, 29,  3,  5,  4, 14, 13, 25, 26, 23, 27,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  1, 19, 18,  9,  0, 16, 12, 15,  6, 24, 11,  7, 10,  2,  8, /* 6X */
   17, 29,  3,  5,  4, 14, 13, 25, 26, 23, 27,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM, 71,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
   38, 30, 40, 46, 20, 21, 39, 36, 31, 28, 50, 48, 55, 33, 41, 52, /* CX */
   47, 37, 66, 32, 35, 68, 22,SYM, 42, 77, 43, 65, 34, 56, 61, 62, /* DX */
   38, 30, 40, 46, 20, 21, 39, 36, 31, 28, 50, 48, 55, 33, 41, 52, /* EX */
   47, 37, 66, 32, 35, 68, 22,SYM, 42, 77, 43, 65, 34, 56, 61, 78, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_4_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  1, 19, 18,  9,  0, 16, 12, 15,  6, 24, 11,  7, 10,  2,  8, /* 4X */
   17, 29,  3,  5,  4, 14, 13, 25, 26, 23, 27,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  1, 19, 18,  9,  0, 16, 12, 15,  6, 24, 11,  7, 10,  2,  8, /* 6X */
   17, 29,  3,  5,  4, 14, 13, 25, 26, 23, 27,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM, 69, 79, 80,SYM, 81, 76,SYM,SYM, 45, 59, 82, 83,SYM, 58,SYM, /* AX */
  SYM, 69,SYM, 84,SYM, 85, 76,SYM,SYM, 45, 59, 86, 87, 60, 58, 60, /* BX */
   44, 30, 40, 46, 20, 21, 39, 88, 49, 28, 73, 48, 57, 33, 41, 51, /* CX */
   74, 75, 63, 89, 35, 68, 22,SYM, 42, 90, 43, 65, 34, 91, 53, 62, /* DX */
   44, 30, 40, 46, 20, 21, 39, 92, 49, 28, 73, 48, 57, 33, 41, 51, /* EX */
   74, 75, 63, 93, 35, 68, 22,SYM, 42, 94, 43, 65, 34, 95, 53,SYM, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_9_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  1, 19, 18,  9,  0, 16, 12, 15,  6, 24, 11,  7, 10,  2,  8, /* 4X */
   17, 29,  3,  5,  4, 14, 13, 25, 26, 23, 27,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  1, 19, 18,  9,  0, 16, 12, 15,  6, 24, 11,  7, 10,  2,  8, /* 6X */
   17, 29,  3,  5,  4, 14, 13, 25, 26, 23, 27,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM, 71,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
   38, 30, 40, 46, 20, 21, 39, 36, 31, 28, 50, 48, 55, 33, 41, 52, /* CX */
   72, 37, 66, 32, 35, 68, 22,SYM, 42, 77, 43, 65, 34, 96, 67, 62, /* DX */
   38, 30, 40, 46, 20, 21, 39, 36, 31, 28, 50, 48, 55, 33, 41, 52, /* EX */
   72, 37, 66, 32, 35, 68, 22,SYM, 42, 77, 43, 65, 34, 64, 67, 97, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_15_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  1, 19, 18,  9,  0, 16, 12, 15,  6, 24, 11,  7, 10,  2,  8, /* 4X */
   17, 29,  3,  5,  4, 14, 13, 25, 26, 23, 27,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  1, 19, 18,  9,  0, 16, 12, 15,  6, 24, 11,  7, 10,  2,  8, /* 6X */
   17, 29,  3,  5,  4, 14, 13, 25, 26, 23, 27,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM, 45,SYM, 45,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM, 58, 71,SYM,SYM, 58,SYM,SYM,SYM, 54, 54, 98,SYM, /* BX */
   38, 30, 40, 46, 20, 21, 39, 36, 31, 28, 50, 48, 55, 33, 41, 52, /* CX */
   47, 37, 66, 32, 35, 68, 22,SYM, 42, 77, 43, 65, 34, 56, 61, 62, /* DX */
   38, 30, 40, 46, 20, 21, 39, 36, 31, 28, 50, 48, 55, 33, 41, 52, /* EX */
   47, 37, 66, 32, 35, 68, 22,SYM, 42, 77, 43, 65, 34, 56, 61, 99, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Windows_1252_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  1, 19, 18,  9,  0, 16, 12, 15,  6, 24, 11,  7, 10,  2,  8, /* 4X */
   17, 29,  3,  5,  4, 14, 13, 25, 26, 23, 27,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  1, 19, 18,  9,  0, 16, 12, 15,  6, 24, 11,  7, 10,  2,  8, /* 6X */
   17, 29,  3,  5,  4, 14, 13, 25, 26, 23, 27,SYM,SYM,SYM,SYM,CTR, /* 7X */
  SYM,ILL,SYM, 70,SYM,SYM,SYM,SYM,SYM,SYM, 45,SYM, 54,ILL, 58,ILL, /* 8X */
  ILL,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, 45,SYM, 54,ILL, 58,100, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM, 71,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
   38, 30, 40, 46, 20, 21, 39, 36, 31, 28, 50, 48, 55, 33, 41, 52, /* CX */
   47, 37, 66, 32, 35, 68, 22,SYM, 42, 77, 43, 65, 34, 56, 61, 62, /* DX */
   38, 30, 40, 46, 20, 21, 39, 36, 31, 28, 50, 48, 55, 33, 41, 52, /* EX */
   47, 37, 66, 32, 35, 68, 22,SYM, 42, 77, 43, 65, 34, 56, 61,101, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

#define Unicode_Char_size    60

static const unsigned int Unicode_CharOrder[] =
{
  65,  1, 66, 19, 67, 18, 68,  9, 69,  0, 70, 16, 71, 12, 72, 15,
  73,  6, 74, 24, 75, 11, 76,  7, 77, 10, 78,  2, 79,  8, 80, 17,
  81, 29, 82,  3, 83,  5, 84,  4, 85, 14, 86, 13, 87, 25, 88, 26,
  89, 23, 90, 27, 97,  1, 98, 19, 99, 18, 100,  9, 101,  0, 102, 16,
  103, 12, 104, 15, 105,  6, 106, 24, 107, 11, 108,  7, 109, 10, 110,  2,
  111,  8, 112, 17, 113, 29, 114,  3, 115,  5, 116,  4, 117, 14, 118, 13,
  119, 25, 120, 26, 121, 23, 122, 27, 196, 20, 197, 21, 201, 28, 214, 22,
  228, 20, 229, 21, 233, 28, 246, 22,
};

static const float OrderToRatio[] =
{
  0.104394862,  0.104394862,  0.093121778,  0.093121778,  0.084224636,  0.084224636,  0.083888863,  0.083888863, 
  0.075555315,  0.075555315,  0.065550680,  0.065550680,  0.061034153,  0.061034153,  0.053218488,  0.053218488, 
  0.048652846,  0.048652846,  0.044967364,  0.044967364,  0.034259575,  0.034259575,  0.029550239,  0.029550239, 
  0.027487944,  0.027487944,  0.022543980,  0.022543980,  0.021410715,  0.021410715,  0.020648478,  0.020648478, 
  0.019439597,  0.019439597,  0.018842450,  0.018842450,  0.017024266,  0.017024266,  0.015386733,  0.015386733, 
  0.015196356,  0.015196356,  0.011865854,  0.011865854,  0.011568497,  0.011568497,  0.007486213,  0.007486213, 
  0.005952013,  0.005952013,  0.002425300,  0.002425300,  0.001678380,  0.001678380,  0.000923924,  0.000923924, 
  0.000787037,  0.000787037,  0.000291522,  0.000291522, 
};


/* Model Table:
 * Number of web pages processed for this model: 1386
 * Number of characters consumed for this model: 4112894
 * Total considered sequences: 1438 / 900
 *
 * - Positive sequences: first 535 (0.9950446309034944)
 * - Probable sequences: next 208 (743-535) (0.00395629796903918)
 * - Neutral sequences: last 157 (0.0009990711274664443)
 * - Negative sequences: -538 (off-ratio, TODO)
 */


#define SwedishUnicodeAlphabetWidth         30
#define SwedishUnicodeCharToOrderIsReduced  0


#define SwedishFCMLowerBound  97
#define SwedishFCMUpperBound  246


static const PRUint8 SwedishUnicodeCharToOrder[] =
{
  2,20,19,10,1,17,13,16,7,25,12,8,11,3,9,18,30,4,6,5,
  15,14,26,27,24,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,21,22,0,0,0,29,0,0,0,
  0,0,0,0,0,0,0,0,0,23,
};

static const PRUint8 SwedishCompactedLangModel[] =
{
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,2,3,3,3,3,3,1,2,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,2,1,3,3,3,3,3,1,2,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,3,3,2,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,3,2,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,3,1,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,2,2,2,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,2,2,3,2,3,3,2,2,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,1,2,3,2,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,1,1,3,3,3,3,2,1,2,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,1,2,3,2,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,1,1,1,3,2,
  0,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,2,2,3,3,3,3,3,2,2,1,1,1,0,
  0,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,2,3,3,3,3,3,3,2,1,1,2,1,
  0,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,2,2,1,3,3,3,2,2,3,0,0,1,1,0,
  0,3,3,3,3,3,3,3,3,2,3,3,3,3,3,2,2,3,3,3,3,0,1,2,2,2,2,3,2,2,1,
  0,3,3,3,3,3,3,3,3,3,2,3,2,1,2,3,1,2,2,1,2,3,3,3,3,3,2,0,1,2,1,
  0,3,3,2,3,3,3,3,3,3,1,2,2,2,2,3,1,3,2,3,2,3,3,3,3,3,2,1,1,2,1,
  0,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,2,2,2,3,2,2,2,1,1,1,2,1,
  0,3,3,2,3,3,3,3,3,3,2,2,3,2,1,3,3,2,1,3,2,0,0,0,3,1,1,1,1,2,2,
  0,3,3,3,3,3,3,3,3,3,2,2,2,1,1,3,2,2,3,2,3,3,3,3,3,3,1,1,1,2,1,
  0,1,1,3,3,3,3,1,3,1,3,3,3,3,3,1,1,3,3,3,2,1,0,0,0,1,0,3,1,0,0,
  0,3,2,3,3,3,3,1,3,1,3,2,3,3,3,1,2,2,2,1,3,0,1,1,0,1,0,0,0,0,0,
  0,2,3,3,3,3,3,1,3,1,3,3,3,3,3,1,2,2,3,2,2,0,1,1,1,3,1,0,1,0,1,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,3,3,3,3,3,1,1,2,1,1,2,2,2,1,1,
  0,3,3,2,2,2,3,3,3,3,3,1,2,1,0,3,1,1,1,1,1,3,1,3,1,1,1,1,0,2,0,
  0,3,3,3,3,2,3,3,2,3,1,1,1,1,1,2,3,2,1,1,2,1,1,1,2,1,3,1,1,1,0,
  0,3,3,2,1,3,2,3,2,2,1,1,2,1,2,2,2,2,3,2,1,1,1,0,2,1,1,2,0,1,1,
  0,3,3,1,1,2,1,3,1,3,1,2,1,1,1,2,2,1,1,1,1,0,0,1,2,2,1,1,3,1,1,
  0,3,3,3,3,2,3,1,2,2,2,2,1,2,2,2,1,2,2,2,2,0,1,0,0,1,0,1,1,1,1,
  0,1,2,0,1,1,1,1,1,1,1,1,1,1,2,3,1,1,1,1,1,0,0,0,1,0,1,1,1,0,1,
};


const SequenceModel Iso_8859_1SwedishModel =
{
  Iso_8859_1_CharToOrderMap,
  SwedishFCMLowerBound,
  SwedishFCMUpperBound,
  SwedishUnicodeCharToOrder,
  SwedishCompactedLangModel,
  30,
  (float)0.9990009288725336,
  PR_TRUE,
  "ISO-8859-1",
  "sv"
};

const SequenceModel Iso_8859_4SwedishModel =
{
  Iso_8859_4_CharToOrderMap,
  SwedishFCMLowerBound,
  SwedishFCMUpperBound,
  SwedishUnicodeCharToOrder,
  SwedishCompactedLangModel,
  30,
  (float)0.9990009288725336,
  PR_TRUE,
  "ISO-8859-4",
  "sv"
};

const SequenceModel Iso_8859_9SwedishModel =
{
  Iso_8859_9_CharToOrderMap,
  SwedishFCMLowerBound,
  SwedishFCMUpperBound,
  SwedishUnicodeCharToOrder,
  SwedishCompactedLangModel,
  30,
  (float)0.9990009288725336,
  PR_TRUE,
  "ISO-8859-9",
  "sv"
};

const SequenceModel Iso_8859_15SwedishModel =
{
  Iso_8859_15_CharToOrderMap,
  SwedishFCMLowerBound,
  SwedishFCMUpperBound,
  SwedishUnicodeCharToOrder,
  SwedishCompactedLangModel,
  30,
  (float)0.9990009288725336,
  PR_TRUE,
  "ISO-8859-15",
  "sv"
};

const SequenceModel Windows_1252SwedishModel =
{
  Windows_1252_CharToOrderMap,
  SwedishFCMLowerBound,
  SwedishFCMUpperBound,
  SwedishUnicodeCharToOrder,
  SwedishCompactedLangModel,
  30,
  (float)0.9990009288725336,
  PR_TRUE,
  "WINDOWS-1252",
  "sv"
};

const LanguageModel SwedishModel =
{
  "sv",
  Unicode_CharOrder,
  60,
  SwedishFCMLowerBound,
  SwedishFCMUpperBound,
  SwedishUnicodeCharToOrderIsReduced,

  SwedishUnicodeCharToOrder,
  OrderToRatio,
  SwedishCompactedLangModel,
  30,
  5,
  (float)0.4411854523846226,
  21,
  (float)0.03111288547674703,
  (float)0.9993780535068495,
};
