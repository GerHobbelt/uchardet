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

/********* Language model for: Hebrew *********/

/**
 * Generated by BuildLangModel.py
 * On: 2022-12-14 23:55:24.014547
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
static const unsigned char Iso_8859_8_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM, 45, 51, 42, 52, 57, 62, 58, 67, 48, 72, 70, 59, 53, 60, 64, /* 4X */
   56, 78, 61, 46, 50, 65, 66, 69, 76, 74, 77,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM, 28, 47, 37, 38, 27, 55, 41, 40, 29, 73, 54, 34, 39, 31, 32, /* 6X */
   44, 75, 30, 35, 33, 36, 43, 68, 71, 49, 63,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,CTR,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM, 80,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,CTR, /* BX */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* CX */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,SYM, /* DX */
    8,  5, 20, 12,  2,  1, 23, 16, 19,  0, 24, 18,  4, 11,  7, 22, /* EX */
   10, 17, 13, 25, 15, 26, 21, 14,  3,  9,  6,CTR,CTR,SYM,SYM,CTR, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Windows_1255_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM, 45, 51, 42, 52, 57, 62, 58, 67, 48, 72, 70, 59, 53, 60, 64, /* 4X */
   56, 78, 61, 46, 50, 65, 66, 69, 76, 74, 77,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM, 28, 47, 37, 38, 27, 55, 41, 40, 29, 73, 54, 34, 39, 31, 32, /* 6X */
   44, 75, 30, 35, 33, 36, 43, 68, 71, 49, 63,SYM,SYM,SYM,SYM,CTR, /* 7X */
  SYM,CTR,SYM, 81,SYM,SYM,SYM,SYM, 82,SYM,CTR,SYM,CTR,CTR,CTR,CTR, /* 8X */
  CTR,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,CTR,SYM,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM, 83,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM, 84,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* CX */
  SYM,SYM,SYM,SYM, 85, 86, 79,SYM,SYM,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* DX */
    8,  5, 20, 12,  2,  1, 23, 16, 19,  0, 24, 18,  4, 11,  7, 22, /* EX */
   10, 17, 13, 25, 15, 26, 21, 14,  3,  9,  6,CTR,CTR,SYM,SYM,CTR, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const int Unicode_Char_size = 64;
static const unsigned int Unicode_CharOrder[] =
{
    65, 45,   66, 51,   67, 42,   68, 52,   69, 57,   70, 62,   71, 58,  73, 48,
    76, 59,   77, 53,   78, 60,   80, 56,   82, 61,   83, 46,   84, 50,  97, 28,
    98, 47,   99, 37,  100, 38,  101, 27,  102, 55,  103, 41,  104, 40, 105, 29,
   107, 54,  108, 34,  109, 39,  110, 31,  111, 32,  112, 44,  114, 30, 115, 35,
   116, 33,  117, 36,  118, 43,  121, 49,  122, 63, 1488,  8, 1489,  5,1490, 20,
  1491, 12, 1492,  2, 1493,  1, 1494, 23, 1495, 16, 1496, 19, 1497,  0,1498, 24,
  1499, 18, 1500,  4, 1501, 11, 1502,  7, 1503, 22, 1504, 10, 1505, 17,1506, 13,
  1507, 25, 1508, 15, 1509, 26, 1510, 21, 1511, 14, 1512,  3, 1513,  9,1514,  6,
};


/* Model Table:
 * Total considered sequences: 1571 / 4096
 * - Positive sequences: first 663 (0.9950033744779837)
 * - Probable sequences: next 339 (1002-663) (0.003997985590807662)
 * - Neutral sequences: last 3094 (0.0009986399312086336)
 * - Negative sequences: 2525 (off-ratio)
 * Negative sequences: TODO
 */
static const PRUint8 HebrewLangModel[] =
{
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,0,0,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,0,3,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,2,2,3,0,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,2,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,1,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  1,0,1,1,1,2,1,2,2,1,1,0,0,1,1,1,0,1,1,0,1,1,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,0,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,2,3,3,3,3,0,3,3,0,3,3,3,3,3,3,3,1,1,3,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,2,3,3,3,0,3,2,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,3,0,3,3,3,3,3,3,3,0,2,3,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,1,3,3,3,3,3,3,3,3,3,3,3,2,3,1,3,3,0,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,2,1,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,2,2,3,3,3,3,3,3,3,3,2,3,2,0,2,1,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,2,3,0,3,3,1,3,3,0,3,1,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,1,3,3,3,3,3,3,3,1,1,3,3,3,2,1,1,2,2,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  1,0,1,0,1,1,0,1,2,0,1,0,0,0,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,1,3,3,3,3,3,2,2,2,3,1,3,3,3,2,2,3,1,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,1,0,0,1,0,1,1,0,1,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3,3,3,3,
   2,3,3,3,2,3,3,3,2,3,0,2,2,0,0,2,0,2,0,1,0,2,2,2,0,0,0,0,1,0,0,2,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,1,3,3,3,
   1,3,3,3,3,3,3,3,2,3,0,3,2,0,1,2,0,2,0,0,0,1,2,2,0,0,0,0,0,0,0,2,
  0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,2,3,3,
   3,3,3,3,3,3,3,3,1,3,0,3,2,0,0,3,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,2,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,2,2,
   3,3,2,3,3,2,3,2,1,3,1,2,1,0,0,2,0,2,0,0,0,1,2,2,0,0,0,1,0,0,0,2,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,2,3,
   3,3,1,3,3,3,3,1,1,3,0,1,0,0,1,2,0,2,0,0,0,0,2,2,0,0,0,0,0,0,1,1,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,3,3,
   3,3,3,3,3,3,2,3,1,3,0,3,3,0,0,2,0,2,2,0,0,1,2,3,0,0,0,0,0,0,0,1,
  0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,3,1,
   3,3,2,3,3,1,1,1,3,0,0,1,1,0,0,0,0,3,0,0,0,0,1,0,0,0,0,0,0,0,0,2,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,0,1,
   3,3,3,2,3,1,2,2,0,2,0,2,2,0,0,2,0,2,0,0,0,1,1,2,0,0,0,0,0,0,0,1,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,2,3,2,1,
   2,3,2,3,2,3,1,2,2,2,0,2,2,0,0,2,0,2,0,0,0,0,2,1,0,0,0,0,0,0,0,2,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,2,2,3,3,
   2,3,3,3,1,2,2,3,0,2,0,2,2,0,0,2,0,0,0,0,0,0,1,1,0,1,0,0,0,0,0,1,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,2,0,
   3,3,2,1,3,2,1,0,3,0,0,0,0,0,0,0,0,2,0,1,0,0,2,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,2,1,
   2,1,1,2,2,1,1,2,0,1,1,0,0,0,0,1,2,1,0,0,0,0,0,1,0,0,0,0,0,0,0,1,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,1,2,
   3,1,1,1,2,1,1,2,1,0,0,0,2,0,0,2,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,2,1,
   2,2,2,1,1,0,0,1,0,0,1,0,0,0,0,1,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,2,2,
   2,1,2,2,2,0,1,1,2,1,0,1,0,0,0,0,0,2,0,0,0,0,0,1,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3,2,2,0,
   3,0,2,0,2,0,0,0,2,0,2,0,0,1,1,0,2,1,0,1,2,1,0,0,1,1,0,1,1,1,1,1,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,2,0,
   2,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,2,2,0,
   2,2,2,2,3,0,0,1,2,0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,1,
  0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,1,1,2,2,
   0,1,2,1,2,1,1,1,1,2,2,1,1,1,1,1,1,0,2,1,1,0,1,2,1,0,0,2,2,2,1,1,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,0,0,
   2,2,1,0,2,2,0,1,1,0,1,1,2,2,1,0,1,1,2,0,0,0,1,1,1,1,1,1,0,0,1,1,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,2,2,2,0,
   2,0,2,1,3,0,0,0,0,0,0,0,0,0,0,2,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,0,1,2,
   1,1,1,2,1,0,0,1,0,0,2,0,1,2,2,0,2,0,2,1,1,1,0,0,1,1,1,1,1,1,2,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,1,1,2,
   1,2,2,2,2,2,0,2,0,1,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,1,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,1,2,3,0,
   2,0,0,0,1,0,0,0,3,0,2,0,0,1,2,0,2,1,1,1,0,1,0,0,0,2,0,0,0,1,0,1,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,1,
   2,0,2,0,2,0,0,0,1,0,1,0,0,2,1,0,2,1,1,1,1,1,0,0,0,1,1,0,2,1,1,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3,2,1,0,
   2,0,0,0,2,0,0,0,0,0,0,0,0,1,0,1,1,0,1,0,0,1,0,0,1,1,0,0,1,1,1,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3,2,0,0,
   2,0,0,0,2,0,0,0,0,0,1,0,0,2,1,0,1,1,1,0,1,0,0,0,1,1,0,1,0,0,0,0,
  0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,2,2,2,1,
   2,2,1,2,2,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,0,
   2,2,2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,1,2,0,
   2,0,2,1,1,0,0,0,1,0,1,0,0,1,1,0,1,0,0,0,1,0,0,0,1,1,0,1,1,0,1,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,2,2,
   0,1,2,1,2,1,1,1,0,1,2,1,0,1,1,1,1,0,1,0,1,1,0,1,1,0,1,1,1,1,1,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,1,2,0,
   2,0,1,0,1,0,0,0,1,0,0,0,0,1,1,0,1,2,0,1,1,1,0,0,1,1,0,1,2,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,0,0,
   2,1,0,0,1,0,0,0,0,0,1,0,0,1,1,0,2,0,1,1,0,0,0,0,1,1,0,1,0,1,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,1,0,0,
   2,0,0,0,0,0,0,0,0,0,1,0,0,2,1,0,2,0,1,2,2,1,0,0,0,1,0,0,1,0,1,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,1,0,
   2,0,0,0,1,0,0,0,1,0,1,0,0,2,0,0,1,1,1,1,1,1,0,0,0,2,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,0,
   2,0,2,0,1,0,0,0,0,0,1,0,0,1,1,0,1,0,0,1,1,0,0,0,1,0,1,1,0,1,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,1,0,
   2,1,0,1,1,0,1,0,0,0,0,1,1,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
};


const SequenceModel Iso_8859_8HebrewModel =
{
  Iso_8859_8_CharToOrderMap,
  HebrewLangModel,
  64,
  (float)0.9990013600687914,
  PR_FALSE,
  "ISO-8859-8",
  "he"
};

const SequenceModel Windows_1255HebrewModel =
{
  Windows_1255_CharToOrderMap,
  HebrewLangModel,
  64,
  (float)0.9990013600687914,
  PR_FALSE,
  "WINDOWS-1255",
  "he"
};

const LanguageModel HebrewModel =
{
  "he",
  Unicode_CharOrder,
  64,
  HebrewLangModel,
  64,
  5,
  (float)0.44272429757612475,
  21,
  (float)0.04068630985148685,
};
