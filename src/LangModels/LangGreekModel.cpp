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

/********* Language model for: Greek *********/

/**
 * Generated by BuildLangModel.py
 * On: 2022-12-15 00:00:15.231612
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
static const unsigned char Iso_8859_7_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM, 32, 48, 40, 41, 31, 50, 49, 44, 33, 55, 54, 39, 43, 34, 36, /* 4X */
   47, 59, 35, 37, 38, 45, 52, 53, 58, 51, 57,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM, 32, 48, 40, 41, 31, 50, 49, 44, 33, 55, 54, 39, 43, 34, 36, /* 6X */
   47, 59, 35, 37, 38, 45, 52, 53, 58, 51, 57,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,ILL,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM,SYM, 17,SYM, 19, 22, 15,SYM, 16,SYM, 24, 27, /* BX */
   56,  0, 26, 18, 20,  5, 30,  9, 25,  3,  8, 14, 12,  4, 29,  1, /* CX */
   11,  6,ILL,  7,  2, 13, 28, 23, 42, 21, 46, 60, 17, 19, 22, 15, /* DX */
   61,  0, 26, 18, 20,  5, 30,  9, 25,  3,  8, 14, 12,  4, 29,  1, /* EX */
   11,  6, 10,  7,  2, 13, 28, 23, 42, 21, 46, 60, 16, 24, 27,ILL, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Windows_1253_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM, 32, 48, 40, 41, 31, 50, 49, 44, 33, 55, 54, 39, 43, 34, 36, /* 4X */
   47, 59, 35, 37, 38, 45, 52, 53, 58, 51, 57,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM, 32, 48, 40, 41, 31, 50, 49, 44, 33, 55, 54, 39, 43, 34, 36, /* 6X */
   47, 59, 35, 37, 38, 45, 52, 53, 58, 51, 57,SYM,SYM,SYM,SYM,CTR, /* 7X */
  SYM,ILL,SYM,SYM,SYM,SYM,SYM,SYM,ILL,SYM,ILL,SYM,ILL,ILL,ILL,ILL, /* 8X */
  ILL,SYM,SYM,SYM,SYM,SYM,SYM,SYM,ILL,SYM,ILL,SYM,ILL,ILL,ILL,ILL, /* 9X */
  SYM,SYM, 17,SYM,SYM,SYM,SYM,SYM,SYM,SYM,ILL,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM, 62,SYM,SYM, 19, 22, 15,SYM, 16,SYM, 24, 27, /* BX */
   56,  0, 26, 18, 20,  5, 30,  9, 25,  3,  8, 14, 12,  4, 29,  1, /* CX */
   11,  6,ILL,  7,  2, 13, 28, 23, 42, 21, 46, 60, 17, 19, 22, 15, /* DX */
   61,  0, 26, 18, 20,  5, 30,  9, 25,  3,  8, 14, 12,  4, 29,  1, /* EX */
   11,  6, 10,  7,  2, 13, 28, 23, 42, 21, 46, 60, 16, 24, 27,ILL, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const int Unicode_Char_size = 86;
static const unsigned int Unicode_CharOrder[] =
{
   65, 32,  67, 40,  68, 41,  69, 31,  73, 33,  76, 39,  78, 34, 79, 36,
   82, 35,  83, 37,  84, 38,  97, 32,  99, 40, 100, 41, 101, 31,105, 33,
  108, 39, 110, 34, 111, 36, 114, 35, 115, 37, 116, 38, 902, 17,904, 19,
  905, 22, 906, 15, 908, 16, 910, 24, 911, 27, 913,  0, 914, 26,915, 18,
  916, 20, 917,  5, 918, 30, 919,  9, 920, 25, 921,  3, 922,  8,923, 14,
  924, 12, 925,  4, 926, 29, 927,  1, 928, 11, 929,  6, 931,  7,931, 10,
  932,  2, 933, 13, 934, 28, 935, 23, 936, 42, 937, 21, 940, 17,941, 19,
  942, 22, 943, 15, 945,  0, 946, 26, 947, 18, 948, 20, 949,  5,950, 30,
  951,  9, 952, 25, 953,  3, 954,  8, 955, 14, 956, 12, 957,  4,958, 29,
  959,  1, 960, 11, 961,  6, 962, 10, 963,  7, 964,  2, 965, 13,966, 28,
  967, 23, 968, 42, 969, 21, 972, 16, 973, 24, 974, 27,
};


/* Model Table:
 * Total considered sequences: 1515 / 1849
 * - Positive sequences: first 852 (0.9950198012242328)
 * - Probable sequences: next 229 (1081-852) (0.003981133733535591)
 * - Neutral sequences: last 768 (0.0009990650422315728)
 * - Negative sequences: 334 (off-ratio)
 * Negative sequences: TODO
 */
static const PRUint8 GreekLangModel[] =
{
  2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,
   0,3,3,3,3,3,2,3,3,3,0,0,0,0,0,0,0,0,0,0,0,3,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,
   2,3,3,3,3,3,2,3,3,3,0,0,0,0,0,0,0,0,0,0,0,3,
  3,3,3,3,3,3,3,3,1,3,3,1,3,3,3,3,3,3,2,3,0,
   3,3,2,3,3,2,3,2,0,3,0,0,0,0,0,2,0,0,0,0,0,0,
  3,3,3,2,3,3,3,3,3,3,3,3,3,1,3,2,3,3,3,3,3,
   3,3,3,1,3,3,3,3,3,3,0,0,0,0,0,1,0,0,0,0,0,3,
  3,3,3,3,3,3,2,3,3,3,3,1,2,3,3,3,3,3,3,3,3,
   3,3,3,3,3,1,3,2,1,3,0,1,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,2,3,
   3,2,3,3,3,3,3,3,3,3,1,0,0,0,0,0,0,0,0,0,0,3,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
   3,3,3,3,3,3,3,3,3,2,0,0,0,0,0,1,0,0,0,0,0,1,
  3,3,3,3,2,3,3,3,3,3,0,3,3,3,3,3,3,3,2,3,3,
   3,3,3,3,3,3,3,3,0,1,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,1,3,3,
   3,3,2,3,2,2,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  1,1,3,1,3,3,3,3,3,0,3,3,3,0,3,1,0,0,3,1,3,
   0,0,3,1,3,2,0,3,3,0,1,0,0,0,0,0,0,0,0,0,0,3,
  1,1,1,0,0,1,0,0,0,2,0,0,1,0,0,0,0,0,0,0,0,
   0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,1,1,3,1,3,0,3,3,3,3,3,1,3,1,
   3,3,1,3,1,1,3,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,2,3,3,3,1,3,1,3,2,3,3,3,1,3,3,3,1,3,0,
   3,3,1,3,0,3,3,3,0,1,0,0,0,0,0,1,1,0,0,0,0,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,3,3,3,3,3,3,
   0,3,3,0,3,3,2,3,3,3,0,0,0,0,0,0,0,0,0,0,0,3,
  3,3,3,3,3,3,1,3,3,3,2,3,3,3,3,3,3,3,3,3,3,
   3,3,2,3,3,3,3,3,1,1,0,0,0,0,0,1,0,0,0,0,0,2,
  3,3,3,1,3,3,3,3,3,3,3,3,3,0,3,0,0,0,3,0,3,
   3,0,3,0,3,3,0,3,3,3,0,0,0,0,0,0,0,0,0,0,0,3,
  2,3,3,2,3,3,3,3,3,2,3,3,3,1,3,0,0,0,3,0,3,
   2,0,3,0,3,3,0,3,3,3,0,0,0,0,0,0,0,0,0,0,0,2,
  3,3,3,3,3,3,3,3,3,2,3,3,3,1,3,0,0,0,3,1,3,
   1,0,3,0,3,3,0,3,3,3,0,0,0,0,0,0,0,0,0,0,0,2,
  3,3,1,3,3,3,3,0,3,3,0,0,3,3,3,3,3,3,3,3,3,
   3,3,3,3,0,1,3,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,1,3,3,3,1,3,0,0,0,3,0,3,
   3,0,3,0,3,3,0,3,3,3,0,0,0,0,0,0,0,0,0,0,0,3,
  3,3,0,3,2,3,3,0,1,3,0,0,1,3,0,3,3,3,1,3,1,
   3,3,0,3,0,0,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  1,2,3,2,3,1,3,3,3,1,3,3,3,1,3,2,1,3,3,1,3,
   0,3,2,0,3,3,1,2,3,2,0,0,0,0,0,0,0,0,0,0,0,0,
  1,1,3,2,3,2,3,3,3,1,3,3,3,0,3,0,0,0,3,1,3,
   0,0,3,0,3,1,0,3,2,1,0,0,0,0,0,0,0,0,0,0,0,2,
  3,3,3,3,3,3,3,1,0,3,1,0,3,3,3,3,3,3,0,3,0,
   3,3,0,3,3,1,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,2,3,3,3,3,3,2,3,3,3,0,3,0,0,0,3,0,3,
   2,0,3,0,3,3,0,3,3,3,0,0,0,0,0,0,0,0,0,0,0,3,
  3,3,0,3,3,3,3,0,1,3,1,0,3,3,3,3,3,3,0,3,0,
   3,3,0,3,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,1,3,1,3,3,1,1,3,1,0,1,3,3,3,3,3,2,3,3,
   3,3,0,2,0,2,2,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,
  2,2,3,2,3,1,3,3,2,3,3,3,3,0,3,0,0,0,1,0,3,
   2,0,2,0,3,3,0,1,2,2,0,0,0,0,0,0,0,0,0,0,0,1,
  3,3,3,3,2,3,3,2,0,3,0,0,1,3,3,3,3,3,2,3,0,
   3,3,0,3,3,0,3,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,1,3,0,3,0,0,1,3,0,2,1,3,0,3,2,3,1,3,0,
   3,3,0,3,0,0,1,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,
  3,3,1,3,2,3,1,1,1,3,0,1,2,2,1,3,3,3,1,3,1,
   3,3,1,2,0,1,3,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,
  0,1,1,0,0,0,0,1,1,1,0,1,0,0,0,0,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,3,3,3,3,3,3,3,3,3,3,3,0,
  0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,3,2,3,3,3,2,3,3,3,3,3,0,
  0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,3,3,2,3,3,3,3,3,3,3,3,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,
   0,0,0,0,0,0,0,0,0,0,3,3,3,3,2,3,3,3,2,3,3,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,1,0,0,0,0,0,0,0,3,3,3,3,3,3,3,3,3,3,3,0,
  0,1,1,0,1,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,
   0,0,0,0,1,1,0,0,0,0,2,2,2,3,3,3,3,3,3,3,3,0,
  0,1,1,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,1,0,
   0,0,0,0,0,0,0,0,0,0,3,3,3,2,2,3,3,3,2,3,1,0,
  0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,3,3,3,1,3,3,3,3,2,1,1,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,3,3,3,1,1,3,2,2,3,2,3,0,
  0,1,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,3,3,3,1,3,3,2,3,3,2,1,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,3,3,3,2,3,3,2,1,2,1,2,0,
  3,3,1,2,0,3,0,0,0,3,0,0,0,3,0,3,2,2,0,1,0,
   2,3,0,1,0,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
};


const SequenceModel Iso_8859_7GreekModel =
{
  Iso_8859_7_CharToOrderMap,
  GreekLangModel,
  43,
  (float)0.9990009349577684,
  PR_FALSE,
  "ISO-8859-7",
  "el"
};

const SequenceModel Windows_1253GreekModel =
{
  Windows_1253_CharToOrderMap,
  GreekLangModel,
  43,
  (float)0.9990009349577684,
  PR_FALSE,
  "WINDOWS-1253",
  "el"
};

const LanguageModel GreekModel =
{
  "el",
  Unicode_CharOrder,
  86,
  GreekLangModel,
  43,
  6,
  (float)0.440545731568196,
  27,
  (float)0.03465402569480207,
};
