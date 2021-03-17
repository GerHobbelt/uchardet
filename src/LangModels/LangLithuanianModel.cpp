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
#include "../nsLanguageDetector.h"

/********* Language model for: Lithuanian *********/

/**
 * Generated by BuildLangModel.py
 * On: 2021-03-16 19:26:36.950339
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
static const unsigned char Iso_8859_4_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  1, 18, 23, 12,  4, 25, 16, 29,  0, 14,  9, 10, 11,  7,  3, /* 4X */
   15, 39,  5,  2,  6,  8, 13, 33, 32, 19, 28,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  1, 18, 23, 12,  4, 25, 16, 29,  0, 14,  9, 10, 11,  7,  3, /* 6X */
   15, 39,  5,  2,  6,  8, 13, 33, 32, 19, 28,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM, 27, 68, 69,SYM, 40, 60,SYM,SYM, 21, 56, 70, 71,SYM, 22,SYM, /* AX */
  SYM, 27,SYM, 72,SYM, 40, 60,SYM,SYM, 21, 56, 73, 74, 67, 22, 67, /* BX */
   45, 35, 75, 37, 41, 49, 54, 30, 24, 36, 31, 76, 17, 43, 77, 50, /* CX */
   63, 61, 42, 78, 62, 46, 38,SYM, 55, 20, 52, 79, 51, 44, 26, 59, /* DX */
   45, 35, 80, 37, 41, 49, 54, 30, 24, 36, 31, 81, 17, 43, 82, 50, /* EX */
   63, 61, 42, 83, 62, 46, 38,SYM, 55, 20, 52, 84, 51, 44, 26,SYM, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_10_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  1, 18, 23, 12,  4, 25, 16, 29,  0, 14,  9, 10, 11,  7,  3, /* 4X */
   15, 39,  5,  2,  6,  8, 13, 33, 32, 19, 28,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  1, 18, 23, 12,  4, 25, 16, 29,  0, 14,  9, 10, 11,  7,  3, /* 6X */
   15, 39,  5,  2,  6,  8, 13, 33, 32, 19, 28,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM, 27, 56, 85, 50, 40, 86,SYM, 60, 63, 21, 87, 22,SYM, 26, 67, /* AX */
  SYM, 27, 56, 88, 50, 40, 89,SYM, 60, 63, 21, 90, 22, 91, 26, 67, /* BX */
   45, 35, 92, 37, 41, 49, 54, 30, 24, 36, 31, 93, 17, 43, 94, 58, /* CX */
   65, 61, 42, 34, 62, 46, 38, 44, 55, 20, 52, 95, 51, 48, 96, 59, /* DX */
   45, 35, 97, 37, 41, 49, 54, 30, 24, 36, 31, 98, 17, 43, 99, 58, /* EX */
   65, 61, 42, 34, 62, 46, 38, 44, 55, 20, 52,100, 51, 48,101,102, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_13_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  1, 18, 23, 12,  4, 25, 16, 29,  0, 14,  9, 10, 11,  7,  3, /* 4X */
   15, 39,  5,  2,  6,  8, 13, 33, 32, 19, 28,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  1, 18, 23, 12,  4, 25, 16, 29,  0, 14,  9, 10, 11,  7,  3, /* 6X */
   15, 39,  5,  2,  6,  8, 13, 33, 32, 19, 28,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, 55,SYM,103,SYM,SYM,SYM,SYM, 54, /* AX */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, 55,SYM,104,SYM,SYM,SYM,SYM, 54, /* BX */
   27, 30, 45, 53, 41, 49, 31, 56, 24, 36,105, 17,106,107, 50, 60, /* CX */
   21, 57, 61, 34, 42, 46, 38,SYM, 20, 47, 64, 26, 51, 66, 22, 59, /* DX */
   27, 30, 45, 53, 41, 49, 31, 56, 24, 36,108, 17,109,110, 50, 60, /* EX */
   21, 57, 61, 34, 42, 46, 38,SYM, 20, 47, 64, 26, 51, 66, 22,SYM, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const int Unicode_Char_size = 80;
static const unsigned int Unicode_CharOrder[] =
{
   65,  1,  66, 18,  67, 23,  68, 12,  69,  4,  70, 25,  71, 16, 72, 29,
   73,  0,  74, 14,  75,  9,  76, 10,  77, 11,  78,  7,  79,  3, 80, 15,
   81, 39,  82,  5,  83,  2,  84,  6,  85,  8,  86, 13,  87, 33, 88, 32,
   89, 19,  90, 28,  97,  1,  98, 18,  99, 23, 100, 12, 101,  4,102, 25,
  103, 16, 104, 29, 105,  0, 106, 14, 107,  9, 108, 10, 109, 11,110,  7,
  111,  3, 112, 15, 113, 39, 114,  5, 115,  2, 116,  6, 117,  8,118, 13,
  119, 33, 120, 32, 121, 19, 122, 28, 193, 35, 195, 37, 201, 36,211, 34,
  214, 38, 225, 35, 227, 37, 233, 36, 243, 34, 246, 38, 260, 27,261, 27,
  268, 24, 269, 24, 278, 17, 279, 17, 280, 31, 281, 31, 302, 30,303, 30,
  352, 21, 353, 21, 362, 26, 363, 26, 370, 20, 371, 20, 381, 22,382, 22,
};


/* Model Table:
 * Total sequences: 1138
 * First 512 sequences: 0.9919219576954762
 * Next 512 sequences (512-1024): 0.007740222486946524
 * Rest: 0.00033781981757727893
 * Negative sequences: TODO
 */
static const PRUint8 LithuanianLangModel[] =
{
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,2,3,3,3,3,3,3,3,3,3,2,0,2,3,2,2,2,2,2,2,2,
  3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,3,0,3,3,3,3,3,0,0,3,3,0,0,1,3,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,2,3,3,3,3,2,0,3,3,2,3,3,2,3,2,2,0,2,2,2,2,2,2,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,2,0,3,3,3,2,3,0,0,3,3,0,0,2,2,0,0,0,2,0,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,3,0,3,3,3,3,3,0,0,3,2,2,0,2,3,0,0,0,0,0,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,2,3,3,2,2,3,3,1,2,2,2,2,2,2,2,
  3,3,3,3,3,3,3,3,3,3,3,3,0,3,2,2,2,3,3,3,3,2,2,2,0,2,3,3,2,3,3,3,0,2,0,2,2,1,2,0,
  3,3,3,3,3,3,3,3,3,3,2,2,3,2,2,2,3,3,3,3,3,2,3,3,3,3,2,3,3,3,3,3,2,1,2,0,2,2,0,1,
  3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,0,3,2,0,3,3,3,3,2,0,0,3,2,0,0,0,2,0,2,0,0,0,0,
  3,3,3,3,3,3,3,3,3,2,3,3,3,3,2,2,2,3,1,3,3,3,0,3,1,2,3,3,2,3,2,3,0,2,1,2,1,2,1,0,
  3,3,3,3,3,2,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,2,2,2,2,3,3,3,2,3,3,3,0,2,1,2,2,0,2,0,
  3,3,3,3,3,2,3,2,3,2,2,3,2,2,2,3,2,3,3,3,3,2,3,2,1,2,3,3,2,0,0,3,0,2,3,2,2,2,1,0,
  3,3,3,3,3,3,2,2,3,3,2,3,2,3,2,2,2,3,2,3,3,1,3,2,0,2,2,3,2,2,2,3,0,2,2,2,2,0,2,2,
  3,3,3,3,3,2,2,2,3,2,3,2,2,0,2,2,2,3,0,3,3,2,0,2,0,0,2,3,3,0,2,3,0,0,2,2,2,0,0,0,
  3,3,2,3,3,2,2,2,3,2,0,0,0,0,0,2,2,3,0,2,3,1,0,0,0,0,3,3,0,0,3,3,0,0,2,2,2,0,2,0,
  3,3,3,3,3,3,3,2,3,3,3,2,2,3,3,2,2,3,0,3,2,3,2,2,2,2,2,2,0,3,2,2,0,1,0,1,2,1,0,0,
  3,3,3,3,3,3,3,3,3,2,3,3,3,3,2,3,2,3,2,3,3,2,2,2,0,0,3,3,3,3,2,2,0,2,0,0,0,2,2,0,
  2,0,3,0,0,3,3,3,2,3,3,3,3,3,3,2,3,0,2,0,0,2,3,2,2,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,2,3,2,3,0,2,2,2,0,0,3,2,2,3,2,2,2,0,0,3,3,2,2,1,3,0,2,0,1,0,0,1,0,
  2,3,3,2,2,3,3,3,2,3,3,3,3,3,3,3,3,0,3,2,0,3,2,2,3,2,2,0,3,0,0,0,0,0,0,2,0,0,0,0,
  0,0,2,0,0,0,0,0,0,0,0,0,1,2,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,2,3,2,3,2,1,2,2,3,1,2,2,0,0,3,2,0,0,0,0,0,1,0,0,
  3,3,3,3,3,2,3,3,3,2,2,3,3,3,2,2,2,3,2,3,2,2,0,0,0,2,2,2,0,0,2,2,0,0,0,0,0,1,0,0,
  3,3,2,3,3,2,3,0,3,3,3,2,2,2,0,0,2,2,2,2,0,0,0,2,0,2,3,2,2,3,0,0,0,0,0,2,2,0,0,2,
  3,3,0,2,3,0,0,0,2,2,0,0,1,0,0,2,0,2,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,
  3,3,2,3,3,3,2,0,3,2,3,2,0,0,2,0,2,2,2,2,2,0,0,2,0,2,2,1,0,0,0,0,0,0,0,1,0,0,2,0,
  1,0,3,0,0,3,3,3,0,3,2,3,3,2,0,2,2,0,2,0,0,3,2,0,3,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,
  0,0,3,0,0,2,0,0,0,2,2,2,0,2,3,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,2,3,3,2,2,2,3,2,3,3,3,2,0,2,2,2,2,3,3,0,0,2,0,0,2,2,2,2,0,2,0,2,0,2,2,0,0,0,
  3,3,2,3,3,3,3,3,3,2,2,2,2,2,2,0,0,1,2,3,2,0,0,0,0,2,2,2,0,0,0,0,0,2,0,2,0,0,0,0,
  0,2,3,0,2,3,3,2,0,3,3,2,2,3,0,3,3,2,2,0,0,2,2,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,
  3,2,0,0,2,2,2,0,2,0,0,0,0,3,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,
  3,3,2,2,3,2,0,2,2,0,2,0,0,0,0,0,0,0,0,2,0,0,0,1,0,0,0,0,0,2,0,0,0,2,0,0,0,0,1,0,
  1,0,0,0,0,2,2,2,0,3,2,0,2,0,2,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,
  2,0,2,0,2,2,0,2,2,0,2,2,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,
  2,0,2,0,0,2,1,2,0,0,1,2,2,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,1,
  0,0,1,2,0,1,2,2,0,2,2,2,2,2,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,2,0,0,2,2,2,0,2,2,2,2,0,0,0,2,0,0,0,0,0,0,1,0,2,0,0,2,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,2,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
};


const SequenceModel Iso_8859_4LithuanianModel =
{
  Iso_8859_4_CharToOrderMap,
  LithuanianLangModel,
  40,
  (float)0.9919219576954762,
  PR_TRUE,
  "ISO-8859-4",
  "lt"
};

const SequenceModel Iso_8859_10LithuanianModel =
{
  Iso_8859_10_CharToOrderMap,
  LithuanianLangModel,
  40,
  (float)0.9919219576954762,
  PR_TRUE,
  "ISO-8859-10",
  "lt"
};

const SequenceModel Iso_8859_13LithuanianModel =
{
  Iso_8859_13_CharToOrderMap,
  LithuanianLangModel,
  40,
  (float)0.9919219576954762,
  PR_TRUE,
  "ISO-8859-13",
  "lt"
};

const LanguageModel LithuanianModel =
{
  "lt",
  Unicode_CharOrder,
  80,
  LithuanianLangModel,
  40,
  (float)0.9919219576954762,
};
