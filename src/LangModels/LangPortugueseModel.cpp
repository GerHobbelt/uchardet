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

/********* Language model for: Portuguese *********/

/**
 * Generated by BuildLangModel.py
 * On: 2022-12-15 00:16:37.498251
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
  SYM,  0, 17, 10,  6,  1, 16, 14, 18,  4, 28, 33, 12,  9,  7,  2, /* 4X */
   13, 21,  5,  3,  8, 11, 15, 34, 25, 31, 26,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 17, 10,  6,  1, 16, 14, 18,  4, 28, 33, 12,  9,  7,  2, /* 6X */
   13, 21,  5,  3,  8, 11, 15, 34, 25, 31, 26,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM, 52,SYM, 53,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM, 54, 55,SYM,SYM, 56,SYM,SYM,SYM, 49, 49, 57,SYM, /* BX */
   36, 24, 35, 19, 40, 45, 44, 20, 42, 22, 29, 46, 58, 23, 43, 59, /* CX */
   60, 41, 51, 27, 37, 30, 38,SYM, 48, 61, 32, 47, 39, 62, 63, 50, /* DX */
   36, 24, 35, 19, 40, 45, 44, 20, 42, 22, 29, 46, 64, 23, 43, 65, /* EX */
   66, 41, 51, 27, 37, 30, 38,SYM, 48, 67, 32, 47, 39, 68, 69, 70, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_1_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 17, 10,  6,  1, 16, 14, 18,  4, 28, 33, 12,  9,  7,  2, /* 4X */
   13, 21,  5,  3,  8, 11, 15, 34, 25, 31, 26,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 17, 10,  6,  1, 16, 14, 18,  4, 28, 33, 12,  9,  7,  2, /* 6X */
   13, 21,  5,  3,  8, 11, 15, 34, 25, 31, 26,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM, 71,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
   36, 24, 35, 19, 40, 45, 44, 20, 42, 22, 29, 46, 72, 23, 43, 73, /* CX */
   74, 41, 51, 27, 37, 30, 38,SYM, 48, 75, 32, 47, 39, 76, 77, 50, /* DX */
   36, 24, 35, 19, 40, 45, 44, 20, 42, 22, 29, 46, 78, 23, 43, 79, /* EX */
   80, 41, 51, 27, 37, 30, 38,SYM, 48, 81, 32, 47, 39, 82, 83, 84, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Windows_1252_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 17, 10,  6,  1, 16, 14, 18,  4, 28, 33, 12,  9,  7,  2, /* 4X */
   13, 21,  5,  3,  8, 11, 15, 34, 25, 31, 26,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 17, 10,  6,  1, 16, 14, 18,  4, 28, 33, 12,  9,  7,  2, /* 6X */
   13, 21,  5,  3,  8, 11, 15, 34, 25, 31, 26,SYM,SYM,SYM,SYM,CTR, /* 7X */
  SYM,ILL,SYM, 85,SYM,SYM,SYM,SYM,SYM,SYM, 86,SYM, 49,ILL, 87,ILL, /* 8X */
  ILL,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, 88,SYM, 49,ILL, 89, 90, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM, 91,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
   36, 24, 35, 19, 40, 45, 44, 20, 42, 22, 29, 46, 92, 23, 43, 93, /* CX */
   94, 41, 51, 27, 37, 30, 38,SYM, 48, 95, 32, 47, 39, 96, 97, 50, /* DX */
   36, 24, 35, 19, 40, 45, 44, 20, 42, 22, 29, 46, 98, 23, 43, 99, /* EX */
  100, 41, 51, 27, 37, 30, 38,SYM, 48,101, 32, 47, 39,102,103,104, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_9_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 17, 10,  6,  1, 16, 14, 18,  4, 28, 33, 12,  9,  7,  2, /* 4X */
   13, 21,  5,  3,  8, 11, 15, 34, 25, 31, 26,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 17, 10,  6,  1, 16, 14, 18,  4, 28, 33, 12,  9,  7,  2, /* 6X */
   13, 21,  5,  3,  8, 11, 15, 34, 25, 31, 26,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM,105,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
   36, 24, 35, 19, 40, 45, 44, 20, 42, 22, 29, 46,106, 23, 43,107, /* CX */
  108, 41, 51, 27, 37, 30, 38,SYM, 48,109, 32, 47, 39,110,111, 50, /* DX */
   36, 24, 35, 19, 40, 45, 44, 20, 42, 22, 29, 46,112, 23, 43,113, /* EX */
  114, 41, 51, 27, 37, 30, 38,SYM, 48,115, 32, 47, 39,116,117,118, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const int Unicode_Char_size = 76;
static const unsigned int Unicode_CharOrder[] =
{
   65,  0,  66, 17,  67, 10,  68,  6,  69,  1,  70, 16,  71, 14, 72, 18,
   73,  4,  74, 28,  75, 33,  76, 12,  77,  9,  78,  7,  79,  2, 80, 13,
   81, 21,  82,  5,  83,  3,  84,  8,  85, 11,  86, 15,  87, 34, 88, 25,
   89, 31,  90, 26,  97,  0,  98, 17,  99, 10, 100,  6, 101,  1,102, 16,
  103, 14, 104, 18, 105,  4, 106, 28, 107, 33, 108, 12, 109,  9,110,  7,
  111,  2, 112, 13, 113, 21, 114,  5, 115,  3, 116,  8, 117, 11,118, 15,
  119, 34, 120, 25, 121, 31, 122, 26, 192, 36, 193, 24, 194, 35,195, 19,
  199, 20, 201, 22, 202, 29, 205, 23, 211, 27, 212, 37, 213, 30,218, 32,
  224, 36, 225, 24, 226, 35, 227, 19, 231, 20, 233, 22, 234, 29,237, 23,
  243, 27, 244, 37, 245, 30, 250, 32,
};


/* Model Table:
 * Total considered sequences: 1068 / 1444
 * - Positive sequences: first 514 (0.9950108744191293)
 * - Probable sequences: next 183 (697-514) (0.003990843236141739)
 * - Neutral sequences: last 747 (0.0009982823447289846)
 * - Negative sequences: 376 (off-ratio)
 * Negative sequences: TODO
 */
static const PRUint8 PortugueseLangModel[] =
{
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,3,2,3,0,3,3,1,3,1,0,3,3,3,2,1,0,1,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,3,3,0,3,1,3,3,3,3,0,1,3,2,3,3,1,0,1,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,2,3,3,3,2,3,1,0,3,0,2,3,0,0,0,
  3,3,3,3,3,2,3,3,3,3,3,3,3,3,2,2,3,3,3,3,1,3,3,3,3,0,1,3,0,2,3,2,1,3,2,0,0,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,2,0,3,3,3,3,2,3,3,1,1,3,1,2,0,1,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,2,3,1,3,3,3,2,3,3,3,0,2,
  3,3,3,3,3,3,2,3,2,3,2,3,2,1,2,2,2,2,2,3,0,2,3,3,3,1,2,3,2,3,1,3,3,1,2,2,0,2,
  3,3,3,3,3,3,3,3,3,2,3,3,2,2,3,3,3,2,3,3,3,3,3,3,3,1,3,3,3,2,0,2,3,3,2,2,0,3,
  3,3,3,3,3,3,1,3,3,3,3,3,3,2,1,1,1,2,3,3,0,0,3,3,3,0,2,3,1,3,2,3,2,1,2,3,0,3,
  3,3,3,2,3,1,1,3,2,3,2,3,2,3,2,1,1,3,1,3,0,0,3,3,3,1,1,3,0,2,2,2,3,1,2,2,0,3,
  3,3,3,2,3,3,3,3,3,2,3,3,3,1,2,1,2,2,3,2,3,1,3,3,3,1,1,3,2,3,2,2,1,3,1,3,0,2,
  3,3,3,3,3,3,3,3,3,3,3,1,3,3,3,3,3,3,1,1,3,3,2,3,3,3,3,1,3,3,0,2,0,2,2,1,0,0,
  3,3,3,3,3,2,3,2,3,3,3,3,3,3,3,3,3,3,3,2,1,3,3,3,3,1,2,3,1,3,1,3,2,2,1,3,1,3,
  3,3,3,3,3,3,1,2,3,2,2,3,3,3,1,1,2,1,3,2,2,1,3,2,3,0,1,3,0,2,3,1,3,1,0,2,0,2,
  3,3,3,2,3,3,1,3,3,3,1,3,3,2,2,1,1,2,3,3,0,0,3,2,2,0,1,3,1,3,1,3,0,1,1,2,0,1,
  3,3,3,1,3,3,1,0,0,1,1,3,1,1,0,0,0,1,0,2,0,0,3,3,3,0,0,1,1,3,1,1,0,0,0,1,0,1,
  3,3,3,1,3,3,1,1,2,2,1,3,3,1,1,1,3,1,1,1,0,0,3,3,3,0,0,3,1,3,0,1,1,1,0,2,0,1,
  3,3,3,3,3,3,3,2,3,2,3,3,3,1,2,2,2,2,2,1,0,0,3,2,3,1,1,2,3,1,0,3,2,0,1,1,0,2,
  3,3,3,2,3,3,1,3,3,2,1,3,2,1,1,1,1,2,1,3,0,1,2,2,3,0,1,3,0,0,3,3,2,1,2,0,0,1,
  0,3,3,2,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,0,3,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,3,0,0,0,0,1,0,0,1,0,0,3,0,2,0,0,0,0,0,
  1,0,0,1,1,1,0,0,0,0,0,3,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  1,2,1,3,2,3,3,3,3,3,3,2,3,3,3,2,2,1,0,0,0,1,0,0,0,3,1,0,1,0,0,0,0,1,0,0,0,0,
  3,1,3,3,0,3,3,3,3,3,3,0,3,3,3,3,3,3,1,0,2,2,0,0,0,0,2,0,0,0,0,0,0,1,0,0,0,0,
  0,0,0,3,1,3,2,2,3,1,3,3,3,3,3,3,3,3,1,0,1,3,0,0,0,3,2,0,0,0,0,0,0,1,0,0,0,0,
  3,3,3,0,3,0,0,1,3,0,3,3,1,3,0,3,1,1,1,2,0,0,2,2,1,3,0,1,0,0,1,1,0,0,1,0,0,1,
  3,3,3,1,3,1,1,1,1,1,2,3,1,1,1,0,0,2,2,2,0,0,2,1,2,0,1,2,0,1,2,1,1,1,1,1,0,2,
  0,0,0,3,3,3,2,3,3,3,3,0,3,3,3,2,3,2,0,0,0,2,0,0,0,3,0,0,0,0,0,1,0,1,0,0,0,0,
  3,3,3,1,2,1,1,0,0,0,1,3,0,1,0,0,1,1,0,1,0,0,0,0,3,0,0,1,1,0,1,0,2,1,0,0,0,1,
  0,1,0,3,1,1,0,3,0,3,0,2,1,0,0,1,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,2,3,3,1,3,2,3,2,2,2,2,3,2,2,1,1,0,1,0,0,0,0,0,1,2,1,0,0,0,0,1,0,1,1,1,0,0,
  1,0,0,3,0,2,3,3,2,3,3,0,3,1,1,2,1,3,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,
  3,3,3,2,3,2,1,1,2,3,1,2,2,1,2,1,1,1,2,0,0,0,0,1,1,0,0,0,0,0,0,2,0,1,1,0,0,0,
  3,3,3,2,3,1,1,2,2,0,0,1,2,0,1,0,1,1,2,0,0,0,0,0,1,0,1,0,0,0,0,1,0,1,2,0,0,0,
  0,0,0,0,0,0,0,3,1,3,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,
  0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,1,0,2,0,1,1,3,1,3,0,0,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
};


const SequenceModel Iso_8859_15PortugueseModel =
{
  Iso_8859_15_CharToOrderMap,
  PortugueseLangModel,
  38,
  (float)0.999001717655271,
  PR_TRUE,
  "ISO-8859-15",
  "pt"
};

const SequenceModel Iso_8859_1PortugueseModel =
{
  Iso_8859_1_CharToOrderMap,
  PortugueseLangModel,
  38,
  (float)0.999001717655271,
  PR_TRUE,
  "ISO-8859-1",
  "pt"
};

const SequenceModel Windows_1252PortugueseModel =
{
  Windows_1252_CharToOrderMap,
  PortugueseLangModel,
  38,
  (float)0.999001717655271,
  PR_TRUE,
  "WINDOWS-1252",
  "pt"
};

const SequenceModel Iso_8859_9PortugueseModel =
{
  Iso_8859_9_CharToOrderMap,
  PortugueseLangModel,
  38,
  (float)0.999001717655271,
  PR_TRUE,
  "ISO-8859-9",
  "pt"
};

const LanguageModel PortugueseModel =
{
  "pt",
  Unicode_CharOrder,
  76,
  PortugueseLangModel,
  38,
  4,
  (float)0.415799487769479,
  21,
  (float)0.03464523042358283,
};
