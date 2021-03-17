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

/********* Language model for: Romanian *********/

/**
 * Generated by BuildLangModel.py
 * On: 2021-03-16 20:04:01.199893
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
static const unsigned char Iso_8859_2_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  2, 17,  9, 11,  0, 16, 15, 23,  1, 26, 27,  6, 12,  4,  8, /* 4X */
   13, 32,  3, 10,  5,  7, 20, 29, 25, 28, 22,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  2, 17,  9, 11,  0, 16, 15, 23,  1, 26, 27,  6, 12,  4,  8, /* 6X */
   13, 32,  3, 10,  5,  7, 20, 29, 25, 28, 22,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM, 63,SYM, 45,SYM, 64, 58,SYM,SYM, 34, 65, 66, 67,SYM, 35, 59, /* AX */
  SYM, 68,SYM, 45,SYM, 69, 58,SYM,SYM, 34, 70, 71, 72,SYM, 35, 59, /* BX */
   73, 30, 24, 14, 36, 74, 37, 42, 33, 31, 75, 54, 50, 39, 21, 76, /* CX */
   46, 51, 77, 38, 53, 47, 40,SYM, 52, 78, 44, 62, 41, 55, 79, 57, /* DX */
   80, 30, 24, 14, 36, 81, 37, 42, 33, 31, 82, 54, 50, 39, 21, 83, /* EX */
   46, 51, 84, 38, 53, 47, 40,SYM, 52, 85, 44, 62, 41, 55, 86,SYM, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_16_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  2, 17,  9, 11,  0, 16, 15, 23,  1, 26, 27,  6, 12,  4,  8, /* 4X */
   13, 32,  3, 10,  5,  7, 20, 29, 25, 28, 22,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  2, 17,  9, 11,  0, 16, 15, 23,  1, 26, 27,  6, 12,  4,  8, /* 6X */
   13, 32,  3, 10,  5,  7, 20, 29, 25, 28, 22,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM, 87, 88, 45,SYM,SYM, 34,SYM, 34,SYM, 19,SYM, 89,SYM, 90, 59, /* AX */
  SYM,SYM, 33, 45, 35,SYM,SYM,SYM, 35, 33, 19,SYM, 91, 92, 93, 59, /* BX */
   60, 30, 24, 14, 36, 37, 56, 42, 43, 31, 94, 54, 48, 39, 21, 49, /* CX */
   46, 51, 61, 38, 53, 47, 40, 58, 62, 95, 44, 96, 41, 97, 18, 57, /* DX */
   60, 30, 24, 14, 36, 37, 56, 42, 43, 31, 98, 54, 48, 39, 21, 49, /* EX */
   46, 51, 61, 38, 53, 47, 40, 58, 62, 99, 44,100, 41,101, 18,102, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Windows_1250_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  2, 17,  9, 11,  0, 16, 15, 23,  1, 26, 27,  6, 12,  4,  8, /* 4X */
   13, 32,  3, 10,  5,  7, 20, 29, 25, 28, 22,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  2, 17,  9, 11,  0, 16, 15, 23,  1, 26, 27,  6, 12,  4,  8, /* 6X */
   13, 32,  3, 10,  5,  7, 20, 29, 25, 28, 22,SYM,SYM,SYM,SYM,CTR, /* 7X */
  SYM,ILL,SYM,ILL,SYM,SYM,SYM,SYM,ILL,SYM, 34,SYM, 58,103, 35,104, /* 8X */
  ILL,SYM,SYM,SYM,SYM,SYM,SYM,SYM,ILL,SYM, 34,SYM, 58,105, 35,106, /* 9X */
  SYM,SYM,SYM, 45,SYM,107,SYM,SYM,SYM,SYM,108,SYM,SYM,SYM,SYM, 59, /* AX */
  SYM,SYM,SYM, 45,SYM,SYM,SYM,SYM,SYM,109,110,SYM,111,SYM,112, 59, /* BX */
  113, 30, 24, 14, 36,114, 37, 42, 33, 31,115, 54, 50, 39, 21,116, /* CX */
   46, 51,117, 38, 53, 47, 40,SYM, 52,118, 44, 62, 41, 55,119, 57, /* DX */
  120, 30, 24, 14, 36,121, 37, 42, 33, 31,122, 54, 50, 39, 21,123, /* EX */
   46, 51,124, 38, 53, 47, 40,SYM, 52,125, 44, 62, 41, 55,126,SYM, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Ibm852_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  2, 17,  9, 11,  0, 16, 15, 23,  1, 26, 27,  6, 12,  4,  8, /* 4X */
   13, 32,  3, 10,  5,  7, 20, 29, 25, 28, 22,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  2, 17,  9, 11,  0, 16, 15, 23,  1, 26, 27,  6, 12,  4,  8, /* 6X */
   13, 32,  3, 10,  5,  7, 20, 29, 25, 28, 22,SYM,SYM,SYM,SYM,CTR, /* 7X */
   42, 41, 31, 24, 36,127, 37, 42, 45, 54, 47, 47, 21,128, 36, 37, /* 8X */
   31,129,130, 53, 40,131,132, 58, 58, 40, 41,133,134, 45,SYM, 33, /* 9X */
   30, 39, 38, 44,135,136, 35, 35,137,138,SYM,139, 33,140,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM, 30, 24, 50,141,SYM,SYM,SYM,SYM, 59, 59,SYM, /* BX */
  SYM,SYM,SYM,SYM,SYM,SYM, 14, 14,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* CX */
   46, 46,142, 54,143,144, 39, 21, 50,SYM,SYM,SYM,SYM,145,146,SYM, /* DX */
   38, 57, 53, 51, 51,147, 34, 34,148, 44,149, 62, 55, 55,150,SYM, /* EX */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, 62, 52, 52,SYM,SYM, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const int Unicode_Char_size = 66;
static const unsigned int Unicode_CharOrder[] =
{
   65,  2,  66, 17,  67,  9,  68, 11,  69,  0,  70, 16,  71, 15, 72, 23,
   73,  1,  74, 26,  75, 27,  76,  6,  77, 12,  78,  4,  79,  8, 80, 13,
   81, 32,  82,  3,  83, 10,  84,  5,  85,  7,  86, 20,  87, 29, 88, 25,
   89, 28,  90, 22,  97,  2,  98, 17,  99,  9, 100, 11, 101,  0,102, 16,
  103, 15, 104, 23, 105,  1, 106, 26, 107, 27, 108,  6, 109, 12,110,  4,
  111,  8, 112, 13, 113, 32, 114,  3, 115, 10, 116,  5, 117,  7,118, 20,
  119, 29, 120, 25, 121, 28, 122, 22, 193, 30, 194, 24, 201, 31,206, 21,
  225, 30, 226, 24, 233, 31, 238, 21, 258, 14, 259, 14, 536, 19,537, 19,
  538, 18, 539, 18,
};


/* Model Table:
 * Total sequences: 1066
 * First 512 sequences: 0.9975318123681904
 * Next 512 sequences (512-1024): 0.002424831763747681
 * Rest: 4.3355868061878584e-05
 * Negative sequences: TODO
 */
static const PRUint8 RomanianLangModel[] =
{
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,2,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,3,3,3,3,3,0,3,3,2,3,3,3,2,2,2,0,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,3,3,3,3,3,1,3,3,0,3,3,3,3,3,0,2,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,2,3,3,3,3,2,2,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,2,3,3,3,2,3,3,3,3,2,2,2,
  3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,2,3,3,0,2,3,2,3,3,3,0,2,2,3,3,2,3,0,
  3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,0,3,2,3,0,3,3,3,2,2,2,0,
  3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,2,2,3,3,3,2,2,0,2,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,3,3,3,3,3,0,3,3,0,3,3,3,3,3,2,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,2,2,3,3,2,2,3,2,3,2,2,3,3,2,2,3,3,2,0,2,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,2,2,3,3,3,0,2,3,3,3,2,2,2,
  3,3,3,3,3,2,3,3,3,2,3,3,3,2,3,3,3,3,0,0,3,0,2,2,3,0,2,2,3,3,3,2,0,
  3,3,3,2,3,3,3,3,3,3,3,2,3,3,3,2,2,3,3,2,2,2,2,2,3,2,2,0,3,2,2,2,0,
  3,3,3,3,2,3,3,3,3,2,3,2,2,3,3,0,0,2,3,0,0,2,0,3,3,0,2,2,2,0,2,2,0,
  2,3,1,3,3,3,3,3,0,3,3,3,3,3,0,3,1,3,3,3,3,2,3,0,0,0,2,2,0,0,0,0,0,
  3,3,3,3,3,2,3,3,3,2,3,3,3,2,3,3,2,3,0,0,3,1,2,3,3,0,1,2,3,2,1,2,0,
  3,3,3,3,2,3,3,3,3,2,2,2,3,2,3,3,3,1,0,0,0,0,0,2,3,0,2,1,2,2,2,2,0,
  3,3,3,3,3,2,3,3,3,3,3,3,2,2,3,2,2,3,3,2,2,2,2,2,3,0,2,2,3,2,2,2,0,
  3,3,3,0,0,0,0,3,2,2,2,0,0,0,3,0,0,0,0,0,2,2,0,0,2,0,0,2,0,0,0,0,0,
  3,3,3,0,3,3,2,3,3,3,0,0,2,2,2,0,0,0,0,0,2,0,0,0,2,0,0,2,0,0,0,0,0,
  3,3,3,3,3,2,3,3,3,2,2,3,2,1,3,2,0,2,0,0,0,2,2,2,3,0,2,2,2,0,2,0,0,
  0,3,0,2,3,0,3,0,0,2,0,0,3,0,0,2,0,0,2,3,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,2,2,2,2,3,3,0,2,3,2,2,3,2,0,3,0,0,3,0,3,2,3,0,2,2,2,2,2,2,2,
  3,3,3,3,3,3,3,3,3,2,3,3,2,2,3,0,2,3,0,0,2,0,2,0,2,0,2,2,3,2,2,2,0,
  0,3,0,3,3,3,3,3,0,1,2,0,3,0,0,0,0,0,2,3,0,0,2,0,0,0,0,0,0,0,0,0,0,
  3,3,3,2,2,3,0,3,3,3,2,2,2,3,3,0,3,2,0,0,3,0,0,0,2,3,0,0,3,2,0,0,0,
  3,3,3,2,2,2,3,3,3,2,2,2,2,0,2,0,0,2,0,0,1,0,2,0,2,0,0,2,0,0,2,0,0,
  3,3,3,3,2,2,3,3,3,2,3,1,3,2,2,2,2,2,1,2,2,0,2,3,2,0,2,2,3,2,2,2,0,
  3,2,3,3,3,2,3,2,3,3,3,3,3,2,0,2,2,2,0,0,2,0,2,2,0,2,2,2,0,2,2,0,0,
  3,3,3,3,3,2,3,2,3,2,3,2,2,2,0,0,2,2,0,0,0,0,0,3,0,0,0,2,2,3,0,0,0,
  2,3,0,2,3,2,2,0,0,2,2,2,2,2,0,2,0,0,0,0,2,0,2,2,0,0,0,2,2,0,0,0,0,
  0,3,2,2,1,2,2,0,2,2,2,2,2,2,0,2,0,2,0,0,2,0,2,0,0,0,2,2,0,0,0,0,0,
  0,2,2,0,0,2,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,
};


const SequenceModel Iso_8859_2RomanianModel =
{
  Iso_8859_2_CharToOrderMap,
  RomanianLangModel,
  33,
  (float)0.9975318123681904,
  PR_TRUE,
  "ISO-8859-2",
  "ro"
};

const SequenceModel Iso_8859_16RomanianModel =
{
  Iso_8859_16_CharToOrderMap,
  RomanianLangModel,
  33,
  (float)0.9975318123681904,
  PR_TRUE,
  "ISO-8859-16",
  "ro"
};

const SequenceModel Windows_1250RomanianModel =
{
  Windows_1250_CharToOrderMap,
  RomanianLangModel,
  33,
  (float)0.9975318123681904,
  PR_TRUE,
  "WINDOWS-1250",
  "ro"
};

const SequenceModel Ibm852RomanianModel =
{
  Ibm852_CharToOrderMap,
  RomanianLangModel,
  33,
  (float)0.9975318123681904,
  PR_TRUE,
  "IBM852",
  "ro"
};

const LanguageModel RomanianModel =
{
  "ro",
  Unicode_CharOrder,
  66,
  RomanianLangModel,
  33,
  (float)0.9975318123681904,
};
