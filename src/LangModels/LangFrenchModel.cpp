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

/********* Language model for: French *********/

/**
 * Generated by BuildLangModel.py
 * On: 2023-06-20 02:42:33.818024
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
  SYM,  2, 19, 11, 10,  0, 18, 16, 17,  4, 23, 26,  7, 12,  3,  8, /* 4X */
   13, 20,  6,  1,  5,  9, 15, 27, 22, 21, 28,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  2, 19, 11, 10,  0, 18, 16, 17,  4, 23, 26,  7, 12,  3,  8, /* 6X */
   13, 20,  6,  1,  5,  9, 15, 27, 22, 21, 28,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM, 44,SYM, 44,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM, 49, 52,SYM,SYM, 49,SYM,SYM,SYM, 34, 34, 58,SYM, /* BX */
   24, 42, 33, 55, 41, 54, 48, 30, 25, 14, 29, 39, 57, 43, 32, 37, /* CX */
   59, 46, 51, 45, 31, 60, 40,SYM, 56, 35, 50, 36, 38, 53, 61, 47, /* DX */
   24, 42, 33, 55, 41, 54, 48, 30, 25, 14, 29, 39, 57, 43, 32, 37, /* EX */
   62, 46, 51, 45, 31, 63, 40,SYM, 56, 35, 50, 36, 38, 53, 64, 58, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_1_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  2, 19, 11, 10,  0, 18, 16, 17,  4, 23, 26,  7, 12,  3,  8, /* 4X */
   13, 20,  6,  1,  5,  9, 15, 27, 22, 21, 28,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  2, 19, 11, 10,  0, 18, 16, 17,  4, 23, 26,  7, 12,  3,  8, /* 6X */
   13, 20,  6,  1,  5,  9, 15, 27, 22, 21, 28,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM, 52,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
   24, 42, 33, 55, 41, 54, 48, 30, 25, 14, 29, 39, 57, 43, 32, 37, /* CX */
   65, 46, 51, 45, 31, 66, 40,SYM, 56, 35, 50, 36, 38, 53, 67, 47, /* DX */
   24, 42, 33, 55, 41, 54, 48, 30, 25, 14, 29, 39, 57, 43, 32, 37, /* EX */
   68, 46, 51, 45, 31, 69, 40,SYM, 56, 35, 50, 36, 38, 53, 70, 58, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Windows_1252_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  2, 19, 11, 10,  0, 18, 16, 17,  4, 23, 26,  7, 12,  3,  8, /* 4X */
   13, 20,  6,  1,  5,  9, 15, 27, 22, 21, 28,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  2, 19, 11, 10,  0, 18, 16, 17,  4, 23, 26,  7, 12,  3,  8, /* 6X */
   13, 20,  6,  1,  5,  9, 15, 27, 22, 21, 28,SYM,SYM,SYM,SYM,CTR, /* 7X */
  SYM,ILL,SYM, 71,SYM,SYM,SYM,SYM,SYM,SYM, 44,SYM, 34,ILL, 49,ILL, /* 8X */
  ILL,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, 44,SYM, 34,ILL, 49, 58, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM, 52,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
   24, 42, 33, 55, 41, 54, 48, 30, 25, 14, 29, 39, 57, 43, 32, 37, /* CX */
   72, 46, 51, 45, 31, 73, 40,SYM, 56, 35, 50, 36, 38, 53, 74, 47, /* DX */
   24, 42, 33, 55, 41, 54, 48, 30, 25, 14, 29, 39, 57, 43, 32, 37, /* EX */
   75, 46, 51, 45, 31, 76, 40,SYM, 56, 35, 50, 36, 38, 53, 77, 58, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const int Unicode_Char_size = 76;
static const unsigned int Unicode_CharOrder[] =
{
  65,  2, 66, 19, 67, 11, 68, 10, 69,  0, 70, 18, 71, 16,72, 17,
  73,  4, 74, 23, 75, 26, 76,  7, 77, 12, 78,  3, 79,  8,80, 13,
  81, 20, 82,  6, 83,  1, 84,  5, 85,  9, 86, 15, 87, 27,88, 22,
  89, 21, 90, 28, 97,  2, 98, 19, 99, 11, 100, 10, 101,  0,102, 18,
  103, 16, 104, 17, 105,  4, 106, 23, 107, 26, 108,  7, 109, 12,110,  3,
  111,  8, 112, 13, 113, 20, 114,  6, 115,  1, 116,  5, 117,  9,118, 15,
  119, 27, 120, 22, 121, 21, 122, 28, 192, 24, 194, 33, 199, 30,200, 25,
  201, 14, 202, 29, 206, 32, 207, 37, 212, 31, 217, 35, 219, 36,224, 24,
  226, 33, 231, 30, 232, 25, 233, 14, 234, 29, 238, 32, 239, 37,244, 31,
  249, 35, 251, 36, 338, 34, 339, 34,
};


/* Model Table:
 * Total considered sequences: 1151 / 1444
 * - Positive sequences: first 479 (0.9950134954320737)
 * - Probable sequences: next 183 (662-479) (0.003987696018795117)
 * - Neutral sequences: last 782 (0.0009988085491311471)
 * - Negative sequences: 293 (off-ratio)
 * Negative sequences: TODO
 */
static const PRUint8 FrenchLangModel[] =
{
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,3,3,3,3,3,3,3,3,1,0,3,3,3,0,3,0,0,0,0,0,1,1,
  3,3,3,3,3,3,2,3,3,3,2,3,3,3,3,2,2,3,3,3,3,3,1,1,0,3,3,3,2,0,0,0,0,0,2,0,2,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,0,3,3,3,0,3,1,3,0,0,0,0,3,
  3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,2,3,1,3,3,2,3,2,3,1,1,1,2,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,2,3,2,1,3,3,2,3,1,1,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,1,3,3,2,3,3,2,3,2,2,0,3,0,2,0,3,2,3,3,3,0,3,1,2,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,0,3,3,3,2,3,3,3,0,3,0,0,2,0,
  3,3,3,2,3,3,2,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,1,1,3,3,3,2,2,1,1,2,0,2,1,1,1,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,0,3,3,3,2,1,0,0,2,0,0,3,3,3,
  3,3,3,3,3,3,3,3,3,1,3,3,3,3,3,3,3,3,3,3,2,2,3,3,0,2,2,2,3,3,1,0,2,0,0,0,0,1,
  3,3,3,2,3,2,3,3,3,3,3,2,3,1,3,2,3,2,2,2,1,3,1,2,1,3,1,3,1,0,0,1,1,1,0,0,2,0,
  3,3,3,2,3,3,3,3,3,3,2,3,2,2,3,1,2,3,2,2,3,3,1,1,0,3,3,2,1,2,0,3,0,2,2,0,0,0,
  3,3,3,3,3,3,2,2,3,3,2,3,3,3,3,1,2,2,1,3,1,3,1,1,0,3,1,2,1,3,0,1,1,2,1,0,1,0,
  3,3,3,2,3,3,3,3,3,3,2,2,2,3,3,1,1,3,2,2,0,2,0,1,0,3,1,1,1,2,1,2,2,2,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,0,0,3,0,0,1,0,1,0,1,0,0,2,0,0,0,0,
  3,2,3,2,3,1,3,1,3,3,2,1,1,1,3,1,1,1,3,1,2,2,0,0,0,2,1,1,1,2,0,1,0,0,1,0,0,0,
  3,3,3,3,3,3,3,3,3,3,2,1,3,1,3,1,3,3,1,2,1,3,1,1,0,3,2,1,1,1,0,0,1,1,1,0,0,0,
  3,3,3,3,3,3,3,3,3,3,1,2,3,1,3,1,1,1,2,2,1,3,1,1,0,3,1,2,2,1,1,3,1,2,2,0,0,0,
  3,3,3,1,3,3,3,3,3,3,2,1,2,1,3,1,1,1,3,2,1,1,1,1,0,2,1,1,1,2,1,0,0,1,0,0,1,0,
  3,3,3,3,3,3,3,3,3,3,2,2,3,2,3,2,1,2,2,3,1,3,1,3,0,2,1,1,1,2,0,1,1,2,2,0,1,0,
  1,1,2,1,2,1,1,1,1,3,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,
  3,3,3,3,2,3,3,3,3,2,3,3,3,3,3,2,2,1,1,2,1,2,1,1,0,1,1,2,1,0,0,0,0,0,0,0,0,0,
  3,1,3,1,3,3,1,1,2,3,1,3,1,3,3,3,1,2,2,2,2,2,3,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,
  3,1,3,1,3,1,2,1,3,3,1,1,1,1,2,1,1,1,1,1,0,1,1,1,3,0,1,1,1,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,0,3,0,3,3,3,0,0,3,3,3,1,0,3,3,0,0,2,2,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,
  3,3,3,2,3,2,3,3,3,3,1,1,3,1,2,1,2,3,2,2,1,3,1,1,0,0,2,3,1,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,1,2,2,3,2,1,1,1,1,1,1,1,3,1,1,0,2,0,1,0,0,2,3,0,0,0,0,0,0,0,0,0,0,
  3,2,3,1,3,1,1,2,3,2,1,1,1,1,2,1,1,3,1,1,1,2,0,1,0,0,1,2,3,0,0,0,0,0,0,0,0,0,
  0,0,0,1,0,3,0,2,0,0,0,2,3,1,0,2,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,
  1,0,3,0,1,0,0,1,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,1,0,2,0,3,0,3,0,0,1,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,
  0,1,0,3,0,3,0,2,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  1,1,0,1,1,3,1,2,0,0,0,3,2,1,0,0,3,0,0,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,1,0,0,2,1,0,0,0,3,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,1,0,3,2,2,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  2,2,1,2,0,2,0,1,1,1,2,2,2,0,0,1,1,0,1,1,2,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,
};


const SequenceModel Iso_8859_15FrenchModel =
{
  Iso_8859_15_CharToOrderMap,
  FrenchLangModel,
  38,
  (float)0.9990011914508689,
  PR_TRUE,
  "ISO-8859-15",
  "fr"
};

const SequenceModel Iso_8859_1FrenchModel =
{
  Iso_8859_1_CharToOrderMap,
  FrenchLangModel,
  38,
  (float)0.9990011914508689,
  PR_TRUE,
  "ISO-8859-1",
  "fr"
};

const SequenceModel Windows_1252FrenchModel =
{
  Windows_1252_CharToOrderMap,
  FrenchLangModel,
  38,
  (float)0.9990011914508689,
  PR_TRUE,
  "WINDOWS-1252",
  "fr"
};

const LanguageModel FrenchModel =
{
  "fr",
  Unicode_CharOrder,
  76,
  FrenchLangModel,
  38,
  5,
  (float)0.442911204311326,
  20,
  (float)0.030664469566532397,
  (float)0.9997801567482385,
};
