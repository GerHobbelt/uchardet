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
 * On: 2023-06-20 01:51:51.743646
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
  SYM,  2, 18, 10, 11,  0, 15, 16,  9,  3, 23, 21,  8, 12,  5,  4, /* 4X */
   14, 25,  7,  6,  1, 13, 20, 19, 22, 17, 24,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  2, 18, 10, 11,  0, 15, 16,  9,  3, 23, 21,  8, 12,  5,  4, /* 6X */
   14, 25,  7,  6,  1, 13, 20, 19, 22, 17, 24,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM, 50,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
   49, 27, 53, 46, 35, 36, 34, 32, 38, 26, 40, 42, 56, 28, 57, 58, /* CX */
   48, 41, 47, 31, 45, 54, 33,SYM, 29, 60, 39, 52, 30, 43, 44, 37, /* DX */
   49, 27, 53, 46, 35, 36, 34, 32, 38, 26, 40, 42, 56, 28, 57, 58, /* EX */
   48, 41, 47, 31, 45, 54, 33,SYM, 29, 61, 39, 52, 30, 43, 44, 59, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Windows_1252_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  2, 18, 10, 11,  0, 15, 16,  9,  3, 23, 21,  8, 12,  5,  4, /* 4X */
   14, 25,  7,  6,  1, 13, 20, 19, 22, 17, 24,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  2, 18, 10, 11,  0, 15, 16,  9,  3, 23, 21,  8, 12,  5,  4, /* 6X */
   14, 25,  7,  6,  1, 13, 20, 19, 22, 17, 24,SYM,SYM,SYM,SYM,CTR, /* 7X */
  SYM,ILL,SYM, 62,SYM,SYM,SYM,SYM,SYM,SYM, 51,SYM, 63,ILL, 55,ILL, /* 8X */
  ILL,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, 51,SYM, 64,ILL, 55, 59, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM, 50,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
   49, 27, 53, 46, 35, 36, 34, 32, 38, 26, 40, 42, 56, 28, 57, 58, /* CX */
   48, 41, 47, 31, 45, 54, 33,SYM, 29, 65, 39, 52, 30, 43, 44, 37, /* DX */
   49, 27, 53, 46, 35, 36, 34, 32, 38, 26, 40, 42, 56, 28, 57, 58, /* EX */
   48, 41, 47, 31, 45, 54, 33,SYM, 29, 66, 39, 52, 30, 43, 44, 59, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const int Unicode_Char_size = 52;
static const unsigned int Unicode_CharOrder[] =
{
  65,  2, 66, 18, 67, 10, 68, 11, 69,  0, 70, 15, 71, 16,72,  9,
  73,  3, 74, 23, 75, 21, 76,  8, 77, 12, 78,  5, 79,  4,80, 14,
  81, 25, 82,  7, 83,  6, 84,  1, 85, 13, 86, 20, 87, 19,88, 22,
  89, 17, 90, 24, 97,  2, 98, 18, 99, 10, 100, 11, 101,  0,102, 15,
  103, 16, 104,  9, 105,  3, 106, 23, 107, 21, 108,  8, 109, 12,110,  5,
  111,  4, 112, 14, 113, 25, 114,  7, 115,  6, 116,  1, 117, 13,118, 20,
  119, 19, 120, 22, 121, 17, 122, 24,
};


/* Model Table:
 * Total considered sequences: 927 / 676
 * - Positive sequences: first 359 (0.995064567830709)
 * - Probable sequences: next 121 (480-359) (0.003945363100581467)
 * - Neutral sequences: last 196 (0.000990069068709576)
 * - Negative sequences: -251 (off-ratio)
 * Negative sequences: TODO
 */
static const PRUint8 EnglishLangModel[] =
{
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,3,
  3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,2,3,2,3,2,2,1,1,2,1,
  3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,
  3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,2,3,2,3,3,3,2,3,3,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,1,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,3,3,2,2,2,2,
  3,3,3,3,3,3,3,2,3,3,3,2,3,3,3,3,2,3,3,3,1,3,1,1,2,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,1,1,1,
  3,3,3,3,3,2,3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,1,1,1,1,
  3,3,3,3,3,3,3,3,3,1,2,2,3,3,2,2,1,3,2,2,2,1,1,1,1,1,
  3,3,3,3,3,2,3,3,3,3,3,2,2,3,2,2,1,3,2,2,1,3,1,1,1,2,
  3,2,3,3,3,2,3,3,3,2,2,3,3,3,2,2,3,3,2,3,3,1,1,2,1,1,
  3,2,3,3,3,2,3,2,2,1,3,2,3,3,3,2,2,3,3,1,1,1,1,0,1,1,
  3,3,3,3,3,3,3,3,3,2,3,3,3,2,3,3,3,2,3,1,2,3,2,1,2,1,
  3,3,3,3,3,2,3,3,3,3,2,2,3,3,3,1,2,3,2,2,1,1,1,0,1,0,
  3,3,3,3,3,1,2,3,3,1,1,1,2,3,1,3,1,3,1,1,0,1,1,0,0,1,
  3,3,3,3,3,3,3,3,3,3,1,2,3,3,2,2,3,3,2,2,1,1,1,1,1,1,
  3,3,3,3,3,3,3,3,3,1,3,3,3,2,3,1,2,1,3,2,1,1,2,0,2,0,
  3,2,3,3,3,3,3,3,3,1,3,2,3,3,1,2,2,3,3,1,2,1,0,3,1,1,
  3,2,3,3,3,3,3,3,3,3,2,2,1,1,1,1,1,2,2,2,1,1,1,1,1,0,
  3,1,3,3,3,1,2,1,1,1,1,1,1,2,1,1,1,2,1,1,1,1,0,0,1,1,
  3,2,3,3,3,3,3,2,3,2,1,2,2,2,2,2,2,3,2,2,1,1,1,1,1,1,
  3,3,3,3,2,1,1,1,1,2,3,1,1,2,3,2,1,2,1,1,1,0,1,1,0,1,
  3,1,3,2,3,1,1,1,1,1,1,1,1,3,1,1,0,0,1,0,1,1,1,1,0,0,
  3,1,3,3,3,1,1,1,1,2,1,1,1,1,1,1,1,2,1,1,0,1,1,1,2,0,
  1,1,1,1,1,0,1,1,1,0,0,1,1,3,1,0,0,0,1,1,0,0,0,0,0,1,
};


const SequenceModel Iso_8859_1EnglishModel =
{
  Iso_8859_1_CharToOrderMap,
  EnglishLangModel,
  26,
  (float)0.9990099309312904,
  PR_TRUE,
  "ISO-8859-1",
  "en"
};

const SequenceModel Windows_1252EnglishModel =
{
  Windows_1252_CharToOrderMap,
  EnglishLangModel,
  26,
  (float)0.9990099309312904,
  PR_TRUE,
  "WINDOWS-1252",
  "en"
};

const LanguageModel EnglishModel =
{
  "en",
  Unicode_CharOrder,
  52,
  EnglishLangModel,
  26,
  5,
  (float)0.4401441955972748,
  18,
  (float)0.036312533558372315,
  (float)0.9998016910586665,
};
