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

/********* Language model for: Turkish *********/

/**
 * Generated by BuildLangModel.py
 * On: 2021-03-16 20:34:51.083622
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
static const unsigned char Iso_8859_3_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 15, 22,  9,  1, 27, 21, 19,  6, 28,  7,  5, 11,  3, 14, /* 4X */
   23, 35,  4, 10,  8, 12, 18, 29, 33, 13, 20,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 15, 22,  9,  1, 27, 21, 19,  2, 28,  7,  5, 11,  3, 14, /* 6X */
   23, 35,  4, 10,  8, 12, 18, 29, 33, 13, 20,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM, 54,SYM,SYM,SYM,ILL, 55,SYM,SYM,  2, 17, 26, 56,SYM,ILL, 50, /* AX */
  SYM, 57,SYM,SYM,SYM,SYM, 58,SYM,SYM,  6, 17, 26, 59,SYM,ILL, 50, /* BX */
   48, 36, 30,ILL, 39, 60, 61, 24, 40, 34, 62, 44, 63, 37, 31, 64, /* CX */
  ILL, 41, 52, 38, 46, 51, 25,SYM, 65, 66, 45, 32, 16, 67, 68, 69, /* DX */
   48, 36, 30,ILL, 39, 70, 71, 24, 40, 34, 72, 44, 73, 37, 31, 74, /* EX */
  ILL, 41, 52, 38, 46, 51, 25,SYM, 75, 76, 45, 32, 16, 77, 78,SYM, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_9_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 15, 22,  9,  1, 27, 21, 19,  6, 28,  7,  5, 11,  3, 14, /* 4X */
   23, 35,  4, 10,  8, 12, 18, 29, 33, 13, 20,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 15, 22,  9,  1, 27, 21, 19,  2, 28,  7,  5, 11,  3, 14, /* 6X */
   23, 35,  4, 10,  8, 12, 18, 29, 33, 13, 20,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM, 79,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
   48, 36, 30, 47, 39, 42, 49, 24, 40, 34, 80, 44, 81, 37, 31, 82, /* CX */
   26, 41, 52, 38, 46, 83, 25,SYM, 43, 84, 45, 32, 16,  2, 17, 85, /* DX */
   48, 36, 30, 47, 39, 42, 49, 24, 40, 34, 86, 44, 87, 37, 31, 88, /* EX */
   26, 41, 52, 38, 46, 89, 25,SYM, 43, 90, 45, 32, 16,  6, 17, 53, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const int Unicode_Char_size = 66;
static const unsigned int Unicode_CharOrder[] =
{
   65,  0,  66, 15,  67, 22,  68,  9,  69,  1,  70, 27,  71, 21, 72, 19,
   73,  2,  73,  6,  74, 28,  75,  7,  76,  5,  77, 11,  78,  3, 79, 14,
   80, 23,  82,  4,  83, 10,  84,  8,  85, 12,  86, 18,  87, 29, 89, 13,
   90, 20,  97,  0,  98, 15,  99, 22, 100,  9, 101,  1, 102, 27,103, 21,
  104, 19, 105,  2, 106, 28, 107,  7, 108,  5, 109, 11, 110,  3,111, 14,
  112, 23, 114,  4, 115, 10, 116,  8, 117, 12, 118, 18, 119, 29,121, 13,
  122, 20, 194, 30, 199, 24, 206, 31, 214, 25, 219, 32, 220, 16,226, 30,
  231, 24, 238, 31, 246, 25, 251, 32, 252, 16, 286, 26, 287, 26,305,  6,
  350, 17, 351, 17,
};


/* Model Table:
 * Total sequences: 1097
 * First 512 sequences: 0.9923593121944019
 * Next 512 sequences (512-1024): 0.007545326169453709
 * Rest: 9.536163614441446e-05
 * Negative sequences: TODO
 */
static const PRUint8 TurkishLangModel[] =
{
  3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,2,3,3,3,2,2,0,0,
  3,3,3,3,3,3,0,3,3,3,3,3,3,3,3,3,0,3,3,3,3,3,3,3,3,0,3,3,3,3,0,0,0,
  3,3,3,3,3,3,0,3,3,3,3,3,3,3,3,3,0,3,3,3,3,3,3,3,3,2,3,3,2,2,2,2,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,2,3,3,0,3,2,2,2,2,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,0,3,3,2,2,3,1,
  3,3,3,2,2,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,2,3,3,3,3,2,2,3,2,2,3,3,2,
  2,2,0,3,3,3,3,3,3,3,3,3,2,3,2,3,0,3,2,2,3,2,3,3,2,2,3,3,2,2,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,2,3,3,2,2,2,2,3,3,0,2,2,2,3,2,3,
  3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,0,3,3,2,2,2,2,3,3,0,2,2,2,2,2,0,
  3,3,3,2,3,3,3,2,2,3,3,2,3,3,3,2,3,0,2,2,2,2,2,2,0,3,0,2,2,2,2,2,0,
  3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,0,3,3,2,2,3,3,3,3,0,2,1,2,2,2,2,
  3,3,3,2,3,3,3,2,2,3,3,3,3,3,3,3,3,2,2,3,3,2,3,3,2,3,0,2,2,2,2,3,2,
  3,3,3,3,3,3,0,3,3,3,3,3,2,3,2,3,0,3,3,3,3,3,3,3,3,0,3,3,2,0,0,0,0,
  3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,2,3,2,2,3,3,2,2,3,0,2,2,2,2,0,2,
  2,2,2,3,3,3,0,3,3,3,3,3,3,3,3,3,0,3,3,3,3,3,3,3,2,0,3,3,3,3,0,1,0,
  3,3,3,2,3,3,3,2,2,3,2,3,3,3,3,3,3,2,2,2,2,2,2,0,0,3,0,2,2,2,2,2,2,
  2,2,2,3,3,3,0,3,3,3,3,3,0,3,1,3,0,3,3,2,3,2,3,3,3,2,3,3,2,0,0,0,0,
  3,3,3,2,2,3,3,3,3,2,2,3,3,2,2,3,3,1,2,2,0,3,2,2,3,2,0,2,0,0,2,2,1,
  3,3,3,2,3,3,3,2,2,3,2,2,3,3,3,2,2,2,3,2,2,2,3,0,2,0,0,2,2,0,2,2,0,
  3,3,3,3,3,3,3,3,3,2,3,3,3,2,3,2,3,2,2,2,2,0,2,2,3,2,0,2,2,2,3,2,0,
  3,3,3,2,2,3,3,2,2,3,2,3,3,3,3,2,3,0,2,2,2,3,3,2,1,2,0,1,0,2,2,2,1,
  3,3,3,2,3,3,3,2,2,2,2,2,3,2,3,2,3,0,2,3,2,2,1,2,0,3,0,0,0,2,2,0,0,
  3,3,3,2,3,3,3,3,2,2,2,2,3,2,3,3,3,0,0,3,2,2,2,1,0,2,0,2,0,0,2,0,0,
  3,3,3,2,3,3,3,2,3,2,3,3,3,2,3,2,2,1,0,3,2,2,1,2,3,0,0,2,0,0,2,0,0,
  3,3,3,0,2,3,3,2,3,0,2,3,3,2,3,2,3,0,0,2,0,2,2,0,2,2,0,0,0,0,0,0,0,
  0,0,0,3,3,3,0,3,3,3,3,3,0,3,0,2,0,2,2,2,3,2,2,2,2,0,3,2,0,2,0,0,0,
  3,3,3,2,3,3,3,0,1,3,2,3,3,0,2,2,3,0,2,0,2,2,2,0,0,0,0,1,0,0,0,0,0,
  3,3,3,2,3,3,3,3,3,0,2,2,3,3,3,2,2,1,0,2,2,3,2,0,2,2,0,2,1,0,2,2,0,
  3,3,3,2,2,2,2,2,0,2,2,0,3,2,3,0,2,0,0,0,0,2,2,2,0,2,0,1,0,0,0,0,0,
  3,3,3,2,2,2,0,2,0,2,2,2,2,2,2,0,0,2,0,2,0,0,1,2,0,0,0,2,0,2,0,0,0,
  2,2,2,3,2,3,0,2,2,2,2,2,0,2,0,2,0,2,2,2,2,0,0,0,0,0,2,2,0,0,0,2,0,
  0,0,0,2,2,2,0,2,1,2,2,2,0,2,0,0,0,0,1,0,2,0,0,0,0,0,0,0,0,0,0,0,0,
  2,0,0,2,2,2,0,2,2,2,2,3,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,
};


const SequenceModel Iso_8859_3TurkishModel =
{
  Iso_8859_3_CharToOrderMap,
  TurkishLangModel,
  33,
  (float)0.9923593121944019,
  PR_FALSE,
  "ISO-8859-3",
  "tr"
};

const SequenceModel Iso_8859_9TurkishModel =
{
  Iso_8859_9_CharToOrderMap,
  TurkishLangModel,
  33,
  (float)0.9923593121944019,
  PR_FALSE,
  "ISO-8859-9",
  "tr"
};

const LanguageModel TurkishModel =
{
  "tr",
  Unicode_CharOrder,
  66,
  TurkishLangModel,
  33,
  (float)0.9923593121944019,
};
