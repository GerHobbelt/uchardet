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

/********* Language model for: German *********/

/**
 * Generated by BuildLangModel.py
 * On: 2023-06-20 01:39:03.032300
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
  SYM,  6, 15, 12,  7,  0, 16, 13,  8,  2, 25, 17,  9, 14,  1, 11, /* 4X */
   19, 29,  3,  4,  5, 10, 21, 18, 28, 24, 20,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  6, 15, 12,  7,  0, 16, 13,  8,  2, 25, 17,  9, 14,  1, 11, /* 6X */
   19, 29,  3,  4,  5, 10, 21, 18, 28, 24, 20,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM, 53,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
   33, 31, 35, 48, 22, 45, 47, 37, 39, 30, 42, 56, 44, 32, 55, 59, /* CX */
   57, 40, 51, 34, 36, 60, 26,SYM, 41, 50, 49, 43, 23, 52, 54, 27, /* DX */
   33, 31, 35, 48, 22, 45, 47, 37, 39, 30, 42, 56, 44, 32, 55, 61, /* EX */
   57, 40, 51, 34, 36, 62, 26,SYM, 41, 50, 49, 43, 23, 52, 54, 63, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Windows_1252_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  6, 15, 12,  7,  0, 16, 13,  8,  2, 25, 17,  9, 14,  1, 11, /* 4X */
   19, 29,  3,  4,  5, 10, 21, 18, 28, 24, 20,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  6, 15, 12,  7,  0, 16, 13,  8,  2, 25, 17,  9, 14,  1, 11, /* 6X */
   19, 29,  3,  4,  5, 10, 21, 18, 28, 24, 20,SYM,SYM,SYM,SYM,CTR, /* 7X */
  SYM,ILL,SYM, 64,SYM,SYM,SYM,SYM,SYM,SYM, 38,SYM, 58,ILL, 46,ILL, /* 8X */
  ILL,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, 38,SYM, 58,ILL, 46, 65, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM, 53,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
   33, 31, 35, 48, 22, 45, 47, 37, 39, 30, 42, 56, 44, 32, 55, 66, /* CX */
   57, 40, 51, 34, 36, 67, 26,SYM, 41, 50, 49, 43, 23, 52, 54, 27, /* DX */
   33, 31, 35, 48, 22, 45, 47, 37, 39, 30, 42, 56, 44, 32, 55, 68, /* EX */
   57, 40, 51, 34, 36, 69, 26,SYM, 41, 50, 49, 43, 23, 52, 54, 70, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const int Unicode_Char_size = 59;
static const unsigned int Unicode_CharOrder[] =
{
  65,  6, 66, 15, 67, 12, 68,  7, 69,  0, 70, 16, 71, 13,72,  8,
  73,  2, 74, 25, 75, 17, 76,  9, 77, 14, 78,  1, 79, 11,80, 19,
  81, 29, 82,  3, 83,  4, 84,  5, 85, 10, 86, 21, 87, 18,88, 28,
  89, 24, 90, 20, 97,  6, 98, 15, 99, 12, 100,  7, 101,  0,102, 16,
  103, 13, 104,  8, 105,  2, 106, 25, 107, 17, 108,  9, 109, 14,110,  1,
  111, 11, 112, 19, 113, 29, 114,  3, 115,  4, 116,  5, 117, 10,118, 21,
  119, 18, 120, 28, 121, 24, 122, 20, 196, 22, 214, 26, 220, 23,223, 27,
  228, 22, 246, 26, 252, 23,
};


/* Model Table:
 * Total considered sequences: 1159 / 900
 * - Positive sequences: first 505 (0.9950010540185499)
 * - Probable sequences: next 147 (652-505) (0.004007652452568178)
 * - Neutral sequences: last 248 (0.0009912935288819424)
 * - Negative sequences: -259 (off-ratio)
 * Negative sequences: TODO
 */
static const PRUint8 GermanLangModel[] =
{
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,1,3,2,1,3,3,3,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,0,1,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,1,0,1,2,2,3,3,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,1,1,1,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,0,1,3,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,0,1,1,
  3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,1,1,3,2,0,3,3,1,
  3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,2,3,2,2,2,2,3,3,2,2,0,1,1,
  3,3,3,3,3,3,3,3,2,3,3,3,2,3,3,3,3,3,3,2,3,2,3,3,3,1,3,0,1,1,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,0,1,1,
  3,3,3,3,3,3,3,3,3,3,2,2,3,3,3,3,3,3,2,3,3,3,1,1,2,1,1,3,2,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,0,3,3,1,3,3,1,
  3,1,3,3,3,3,3,3,3,3,3,3,3,1,2,2,1,3,1,1,2,1,0,0,3,1,0,0,1,2,
  3,3,3,3,3,3,3,2,3,3,3,3,1,3,3,3,2,3,2,2,2,1,3,3,3,2,2,0,1,1,
  3,2,3,3,3,3,3,3,2,3,3,3,2,3,3,3,3,3,2,3,2,2,3,3,3,1,3,0,1,1,
  3,3,3,3,3,3,3,2,3,3,3,3,2,3,2,3,2,2,3,2,3,2,3,3,2,3,2,0,0,1,
  3,3,3,3,3,3,3,2,2,3,3,3,2,3,2,3,3,2,2,2,3,2,3,3,1,1,3,0,0,1,
  3,3,3,3,3,3,3,2,3,3,3,3,1,3,3,3,3,3,3,2,3,2,3,3,2,1,3,0,1,1,
  3,3,3,3,3,1,3,2,3,2,3,3,1,1,1,1,1,2,2,1,1,1,3,3,1,2,3,0,0,0,
  3,2,3,3,3,3,3,2,3,3,3,3,2,1,2,2,3,2,1,3,2,2,3,1,2,1,1,0,1,1,
  3,2,3,1,2,3,3,2,3,3,3,3,1,2,2,2,2,2,3,2,3,2,3,3,3,1,3,0,1,0,
  3,1,3,1,2,1,3,2,1,1,2,3,2,2,1,1,1,1,1,2,1,1,1,0,2,1,3,0,0,0,
  1,3,3,3,3,3,1,3,3,3,3,2,3,3,3,2,3,2,0,1,1,1,0,0,0,0,0,3,0,1,
  1,3,0,3,3,3,1,3,3,3,0,0,3,3,2,3,2,1,0,2,0,0,0,1,0,0,0,2,0,0,
  3,3,2,3,3,3,3,2,1,3,2,3,3,2,3,2,1,2,2,3,2,1,0,1,1,1,1,0,1,0,
  3,1,3,1,1,1,3,1,1,0,3,3,1,1,1,0,1,1,1,1,0,1,3,2,1,1,1,0,0,0,
  1,3,1,3,3,3,0,2,3,3,0,0,3,3,3,1,3,2,1,2,1,1,0,0,1,0,1,3,0,0,
  3,2,3,1,2,3,1,1,1,3,1,1,1,2,1,3,2,1,1,1,1,1,0,0,0,0,0,0,0,0,
  3,1,3,1,2,3,2,1,2,1,2,2,2,1,3,1,2,2,1,3,1,1,0,0,2,0,0,0,2,1,
  0,0,1,1,0,1,1,1,0,2,3,0,0,1,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,
};


const SequenceModel Iso_8859_1GermanModel =
{
  Iso_8859_1_CharToOrderMap,
  GermanLangModel,
  30,
  (float)0.9990087064711181,
  PR_TRUE,
  "ISO-8859-1",
  "de"
};

const SequenceModel Windows_1252GermanModel =
{
  Windows_1252_CharToOrderMap,
  GermanLangModel,
  30,
  (float)0.9990087064711181,
  PR_TRUE,
  "WINDOWS-1252",
  "de"
};

const LanguageModel GermanModel =
{
  "de",
  Unicode_CharOrder,
  59,
  GermanLangModel,
  30,
  4,
  (float)0.4094196886815634,
  20,
  (float)0.031248223134711244,
  (float)0.9996731399150695,
};
