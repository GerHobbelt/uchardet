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

/********* Language model for: Italian *********/

/**
 * Generated by BuildLangModel.py
 * On: 2023-06-20 03:32:57.541309
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
  SYM,  2, 17,  9, 10,  0, 18, 14, 16,  1, 26, 23,  6, 12,  4,  3, /* 4X */
   13, 22,  7,  8,  5, 11, 15, 21, 28, 20, 19,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  2, 17,  9, 10,  0, 18, 14, 16,  1, 26, 23,  6, 12,  4,  3, /* 6X */
   13, 22,  7,  8,  5, 11, 15, 21, 28, 20, 19,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM, 61,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
   25, 35, 46, 47, 39, 43, 33, 42, 24, 31, 44, 50, 30, 37, 62, 57, /* CX */
   40, 45, 27, 36, 52, 63, 32,SYM, 48, 29, 41, 64, 34, 53, 54, 49, /* DX */
   25, 35, 46, 47, 39, 43, 33, 42, 24, 31, 44, 50, 30, 37, 65, 57, /* EX */
   40, 45, 27, 36, 52, 66, 32,SYM, 48, 29, 41, 67, 34, 53, 54, 68, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_3_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  2, 17,  9, 10,  0, 18, 14, 16,  1, 26, 23,  6, 12,  4,  3, /* 4X */
   13, 22,  7,  8,  5, 11, 15, 21, 28, 20, 19,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  2, 17,  9, 10,  0, 18, 14, 16,  1, 26, 23,  6, 12,  4,  3, /* 6X */
   13, 22,  7,  8,  5, 11, 15, 21, 28, 20, 19,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM, 69,SYM,SYM,SYM,ILL, 70,SYM,SYM, 58, 55, 71, 72,SYM,ILL, 73, /* AX */
  SYM, 74,SYM,SYM,SYM,SYM, 75,SYM,SYM, 60, 55, 76, 77,SYM,ILL, 78, /* BX */
   25, 35, 46,ILL, 39, 79, 80, 42, 24, 31, 44, 50, 30, 37, 81, 57, /* CX */
  ILL, 45, 27, 36, 52, 82, 32,SYM, 83, 29, 41, 84, 34, 56, 85, 49, /* DX */
   25, 35, 46,ILL, 39, 86, 87, 42, 24, 31, 44, 50, 30, 37, 88, 57, /* EX */
  ILL, 45, 27, 36, 52, 89, 32,SYM, 90, 29, 41, 91, 34, 56, 92,SYM, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_9_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  2, 17,  9, 10,  0, 18, 14, 16,  1, 26, 23,  6, 12,  4,  3, /* 4X */
   13, 22,  7,  8,  5, 11, 15, 21, 28, 20, 19,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  2, 17,  9, 10,  0, 18, 14, 16,  1, 26, 23,  6, 12,  4,  3, /* 6X */
   13, 22,  7,  8,  5, 11, 15, 21, 28, 20, 19,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM, 93,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
   25, 35, 46, 47, 39, 43, 33, 42, 24, 31, 44, 50, 30, 37, 94, 57, /* CX */
   95, 45, 27, 36, 52, 96, 32,SYM, 48, 29, 41, 97, 34, 58, 55, 49, /* DX */
   25, 35, 46, 47, 39, 43, 33, 42, 24, 31, 44, 50, 30, 37, 98, 57, /* EX */
   99, 45, 27, 36, 52,100, 32,SYM, 48, 29, 41,101, 34, 60, 55,102, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_15_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  2, 17,  9, 10,  0, 18, 14, 16,  1, 26, 23,  6, 12,  4,  3, /* 4X */
   13, 22,  7,  8,  5, 11, 15, 21, 28, 20, 19,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  2, 17,  9, 10,  0, 18, 14, 16,  1, 26, 23,  6, 12,  4,  3, /* 6X */
   13, 22,  7,  8,  5, 11, 15, 21, 28, 20, 19,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM, 38,SYM, 38,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM, 51,103,SYM,SYM, 51,SYM,SYM,SYM, 59, 59,104,SYM, /* BX */
   25, 35, 46, 47, 39, 43, 33, 42, 24, 31, 44, 50, 30, 37,105, 57, /* CX */
   40, 45, 27, 36, 52,106, 32,SYM, 48, 29, 41,107, 34, 53, 54, 49, /* DX */
   25, 35, 46, 47, 39, 43, 33, 42, 24, 31, 44, 50, 30, 37,108, 57, /* EX */
   40, 45, 27, 36, 52,109, 32,SYM, 48, 29, 41,110, 34, 53, 54,111, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Windows_1252_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  2, 17,  9, 10,  0, 18, 14, 16,  1, 26, 23,  6, 12,  4,  3, /* 4X */
   13, 22,  7,  8,  5, 11, 15, 21, 28, 20, 19,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  2, 17,  9, 10,  0, 18, 14, 16,  1, 26, 23,  6, 12,  4,  3, /* 6X */
   13, 22,  7,  8,  5, 11, 15, 21, 28, 20, 19,SYM,SYM,SYM,SYM,CTR, /* 7X */
  SYM,ILL,SYM,112,SYM,SYM,SYM,SYM,SYM,SYM, 38,SYM, 59,ILL, 51,ILL, /* 8X */
  ILL,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, 38,SYM, 59,ILL, 51,113, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM,114,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
   25, 35, 46, 47, 39, 43, 33, 42, 24, 31, 44, 50, 30, 37,115, 57, /* CX */
   40, 45, 27, 36, 52,116, 32,SYM, 48, 29, 41,117, 34, 53, 54, 49, /* DX */
   25, 35, 46, 47, 39, 43, 33, 42, 24, 31, 44, 50, 30, 37,118, 57, /* EX */
   40, 45, 27, 36, 52,119, 32,SYM, 48, 29, 41,120, 34, 53, 54,121, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const int Unicode_Char_size = 74;
static const unsigned int Unicode_CharOrder[] =
{
  65,  2, 66, 17, 67,  9, 68, 10, 69,  0, 70, 18, 71, 14,72, 16,
  73,  1, 74, 26, 75, 23, 76,  6, 77, 12, 78,  4, 79,  3,80, 13,
  81, 22, 82,  7, 83,  8, 84,  5, 85, 11, 86, 15, 87, 21,88, 28,
  89, 20, 90, 19, 97,  2, 98, 17, 99,  9, 100, 10, 101,  0,102, 18,
  103, 14, 104, 16, 105,  1, 106, 26, 107, 23, 108,  6, 109, 12,110,  4,
  111,  3, 112, 13, 113, 22, 114,  7, 115,  8, 116,  5, 117, 11,118, 15,
  119, 21, 120, 28, 121, 20, 122, 19, 192, 25, 193, 35, 198, 33,200, 24,
  201, 31, 204, 30, 210, 27, 211, 36, 214, 32, 217, 29, 220, 34,224, 25,
  225, 35, 230, 33, 232, 24, 233, 31, 236, 30, 242, 27, 243, 36,246, 32,
  249, 29, 252, 34,
};


/* Model Table:
 * Total considered sequences: 1068 / 1369
 * - Positive sequences: first 373 (0.995000374673396)
 * - Probable sequences: next 162 (535-373) (0.004006534962792019)
 * - Neutral sequences: last 834 (0.0009930903638120103)
 * - Negative sequences: 301 (off-ratio)
 * Negative sequences: TODO
 */
static const PRUint8 ItalianLangModel[] =
{
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,0,2,2,3,0,1,0,1,0,0,0,1,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,2,2,3,3,1,3,2,3,3,3,0,1,0,0,0,1,1,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,0,0,2,0,3,0,0,1,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,2,0,2,0,3,0,0,0,0,0,1,0,0,
  3,3,3,3,3,3,3,2,3,3,3,3,3,2,3,3,2,3,3,3,3,2,3,3,1,0,2,3,1,1,2,2,1,1,1,1,1,
  3,3,3,3,3,3,3,3,3,3,2,3,3,3,2,3,3,2,2,3,3,3,1,2,1,3,1,3,1,2,2,2,1,0,1,1,1,
  3,3,3,3,2,3,3,2,3,3,3,3,3,3,3,3,2,3,3,2,3,2,1,3,1,2,1,2,0,1,2,1,1,0,1,1,1,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,2,1,3,1,3,1,3,1,1,3,2,1,0,1,1,1,
  3,3,3,3,3,3,3,2,3,3,2,3,3,3,2,3,3,3,3,1,3,3,3,3,1,0,1,2,1,2,3,2,1,1,0,1,1,
  3,3,3,3,3,3,3,3,3,3,2,3,2,2,2,1,3,3,1,2,3,2,3,3,1,0,1,3,1,0,2,3,0,0,0,0,0,
  3,3,3,3,3,2,3,3,3,2,3,3,3,2,3,3,2,3,2,1,3,3,1,2,1,2,2,2,1,1,2,1,2,0,1,1,1,
  3,3,3,3,3,3,3,3,3,3,3,1,3,3,3,2,2,3,3,3,2,1,1,2,0,1,1,3,2,0,2,1,0,0,0,1,0,
  3,3,3,3,2,2,3,2,3,3,3,3,3,3,2,1,1,3,2,1,3,2,1,1,0,0,1,2,1,0,1,1,1,1,1,1,1,
  3,3,3,3,2,3,3,3,3,2,2,3,2,3,1,1,3,2,2,1,2,1,0,2,1,1,1,2,0,0,1,1,0,2,0,1,0,
  3,3,3,3,3,2,3,3,3,2,2,3,3,2,3,1,3,2,1,1,3,2,1,1,1,0,1,2,0,0,1,1,1,0,1,1,1,
  3,3,3,3,1,1,2,3,2,1,2,3,1,1,1,3,1,0,2,1,2,1,0,0,0,0,1,2,0,1,1,0,1,0,0,1,0,
  3,3,3,3,3,3,2,3,2,1,2,3,3,1,1,2,1,2,1,1,3,2,1,1,1,0,1,0,1,0,0,3,1,1,1,1,1,
  3,3,3,3,3,2,3,3,3,3,2,3,2,1,1,1,2,3,1,1,3,1,1,1,0,1,3,1,1,1,2,1,1,0,1,0,1,
  3,3,3,3,1,3,3,3,2,1,1,3,2,1,1,0,1,1,3,1,2,1,0,1,1,1,1,1,1,0,0,1,1,1,1,1,0,
  3,3,3,3,1,1,1,1,1,1,1,2,1,1,1,1,2,1,1,3,1,1,0,1,0,0,0,2,1,0,0,1,0,0,0,1,0,
  3,2,3,3,3,2,3,2,3,3,2,2,3,3,2,1,2,2,1,1,1,2,0,2,0,0,1,0,2,0,0,0,0,0,0,0,0,
  3,3,3,3,3,2,2,3,3,2,2,1,1,1,1,1,3,2,2,1,2,2,0,2,0,0,0,0,1,0,0,0,0,0,1,0,0,
  1,1,1,0,0,1,2,1,1,1,0,3,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,2,3,3,3,2,1,3,2,1,2,1,2,2,1,1,3,2,1,2,0,0,1,1,0,0,0,1,1,0,1,1,1,
  0,1,0,0,1,1,0,1,1,1,1,1,1,0,0,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  1,1,0,0,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,1,1,1,2,1,1,1,3,1,1,0,1,1,1,1,1,1,1,1,1,0,1,1,1,0,0,0,1,3,1,1,0,1,
  0,1,0,0,1,1,0,0,1,0,1,0,0,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  2,3,2,2,1,3,1,1,2,2,1,2,2,2,1,2,2,1,2,1,2,1,1,0,0,0,1,0,2,0,0,0,0,0,0,0,0,
  0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  1,0,1,0,0,1,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  2,1,1,1,1,1,2,1,1,1,1,0,1,1,1,1,0,1,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,
  0,1,0,0,2,1,1,3,1,1,1,0,1,1,0,0,1,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,1,0,1,1,1,1,0,2,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  1,0,0,0,1,1,1,1,1,1,0,0,1,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,
  1,1,0,0,1,1,1,1,0,0,0,1,0,0,1,1,0,1,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,
  1,0,0,0,1,1,1,1,1,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
};


const SequenceModel Iso_8859_1ItalianModel =
{
  Iso_8859_1_CharToOrderMap,
  ItalianLangModel,
  37,
  (float)0.999006909636188,
  PR_TRUE,
  "ISO-8859-1",
  "it"
};

const SequenceModel Iso_8859_3ItalianModel =
{
  Iso_8859_3_CharToOrderMap,
  ItalianLangModel,
  37,
  (float)0.999006909636188,
  PR_TRUE,
  "ISO-8859-3",
  "it"
};

const SequenceModel Iso_8859_9ItalianModel =
{
  Iso_8859_9_CharToOrderMap,
  ItalianLangModel,
  37,
  (float)0.999006909636188,
  PR_TRUE,
  "ISO-8859-9",
  "it"
};

const SequenceModel Iso_8859_15ItalianModel =
{
  Iso_8859_15_CharToOrderMap,
  ItalianLangModel,
  37,
  (float)0.999006909636188,
  PR_TRUE,
  "ISO-8859-15",
  "it"
};

const SequenceModel Windows_1252ItalianModel =
{
  Windows_1252_CharToOrderMap,
  ItalianLangModel,
  37,
  (float)0.999006909636188,
  PR_TRUE,
  "WINDOWS-1252",
  "it"
};

const LanguageModel ItalianModel =
{
  "it",
  Unicode_CharOrder,
  74,
  ItalianLangModel,
  37,
  4,
  (float)0.41213952556462097,
  17,
  (float)0.04041959913225866,
  (float)0.9999171265753439,
};
