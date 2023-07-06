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

/********* Language model for: Slovak *********/

/**
 * Generated by BuildLangModel.py
 * On: 2023-07-06 22:52:02.895791
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
  SYM,  1, 17, 15, 12,  2, 30, 27, 16,  4, 19, 10,  9, 11,  3,  0, /* 4X */
   13, 40,  5,  6,  7, 14,  8, 33, 35, 21, 18,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  1, 17, 15, 12,  2, 30, 27, 16,  4, 19, 10,  9, 11,  3,  0, /* 6X */
   13, 40,  5,  6,  7, 14,  8, 33, 35, 21, 18,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM, 64,SYM, 58,SYM, 32, 56,SYM,SYM, 26, 67, 31, 71,SYM, 29, 62, /* AX */
  SYM, 64,SYM, 58,SYM, 32, 56,SYM,SYM, 26, 67, 31, 72,SYM, 29, 62, /* BX */
   43, 20, 55, 65, 39, 41, 49, 52, 24, 25, 66, 51, 45, 23, 59, 38, /* CX */
   68, 57, 37, 34, 36, 48, 44,SYM, 42, 47, 28, 61, 46, 22, 73, 53, /* DX */
   43, 20, 55, 65, 39, 41, 49, 52, 24, 25, 66, 51, 45, 23, 59, 38, /* EX */
   68, 57, 37, 34, 36, 48, 44,SYM, 42, 47, 28, 61, 46, 22, 74,SYM, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Windows_1250_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  1, 17, 15, 12,  2, 30, 27, 16,  4, 19, 10,  9, 11,  3,  0, /* 4X */
   13, 40,  5,  6,  7, 14,  8, 33, 35, 21, 18,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  1, 17, 15, 12,  2, 30, 27, 16,  4, 19, 10,  9, 11,  3,  0, /* 6X */
   13, 40,  5,  6,  7, 14,  8, 33, 35, 21, 18,SYM,SYM,SYM,SYM,CTR, /* 7X */
  SYM,ILL,SYM,ILL,SYM,SYM,SYM,SYM,ILL,SYM, 26,SYM, 56, 31, 29, 75, /* 8X */
  ILL,SYM,SYM,SYM,SYM,SYM,SYM,SYM,ILL,SYM, 26,SYM, 56, 31, 29, 76, /* 9X */
  SYM,SYM,SYM, 58,SYM, 64,SYM,SYM,SYM,SYM, 67,SYM,SYM,SYM,SYM, 62, /* AX */
  SYM,SYM,SYM, 58,SYM,SYM,SYM,SYM,SYM, 64, 67,SYM, 32,SYM, 32, 62, /* BX */
   43, 20, 55, 65, 39, 41, 49, 52, 24, 25, 66, 51, 45, 23, 59, 38, /* CX */
   68, 57, 37, 34, 36, 48, 44,SYM, 42, 47, 28, 61, 46, 22, 77, 53, /* DX */
   43, 20, 55, 65, 39, 41, 49, 52, 24, 25, 66, 51, 45, 23, 59, 38, /* EX */
   68, 57, 37, 34, 36, 48, 44,SYM, 42, 47, 28, 61, 46, 22, 78,SYM, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Ibm852_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  1, 17, 15, 12,  2, 30, 27, 16,  4, 19, 10,  9, 11,  3,  0, /* 4X */
   13, 40,  5,  6,  7, 14,  8, 33, 35, 21, 18,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  1, 17, 15, 12,  2, 30, 27, 16,  4, 19, 10,  9, 11,  3,  0, /* 6X */
   13, 40,  5,  6,  7, 14,  8, 33, 35, 21, 18,SYM,SYM,SYM,SYM,CTR, /* 7X */
   52, 46, 25, 55, 39, 47, 49, 52, 58, 51, 48, 48, 59, 79, 39, 49, /* 8X */
   25, 41, 41, 36, 44, 32, 32, 56, 56, 44, 46, 31, 31, 58,SYM, 24, /* 9X */
   20, 23, 34, 28, 64, 64, 29, 29, 66, 66,SYM, 80, 24, 67,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM, 20, 55, 45, 67,SYM,SYM,SYM,SYM, 62, 62,SYM, /* BX */
  SYM,SYM,SYM,SYM,SYM,SYM, 65, 65,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* CX */
   68, 68, 38, 51, 38, 37, 23, 59, 45,SYM,SYM,SYM,SYM, 81, 47,SYM, /* DX */
   34, 53, 36, 57, 57, 37, 26, 26, 43, 28, 43, 61, 22, 22, 82,SYM, /* EX */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, 61, 42, 42,SYM,SYM, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Maccentraleurope_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  1, 17, 15, 12,  2, 30, 27, 16,  4, 19, 10,  9, 11,  3,  0, /* 4X */
   13, 40,  5,  6,  7, 14,  8, 33, 35, 21, 18,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  1, 17, 15, 12,  2, 30, 27, 16,  4, 19, 10,  9, 11,  3,  0, /* 6X */
   13, 40,  5,  6,  7, 14,  8, 33, 35, 21, 18,SYM,SYM,SYM,SYM,CTR, /* 7X */
   39, 54, 54, 25, 64, 44, 46, 20, 64, 24, 39, 24, 49, 49, 25, 83, /* 8X */
   84, 38, 23, 38, 60, 60, 85, 34, 86, 36, 44, 69, 28, 45, 45, 46, /* 9X */
  SYM,SYM, 66,SYM,SYM,SYM,SYM, 53,SYM,SYM,SYM, 66,SYM,SYM, 87, 88, /* AX */
   89, 90,SYM,SYM, 91, 92,SYM,SYM, 58, 93, 94, 32, 32, 41, 41, 95, /* BX */
   96, 57,SYM,SYM, 57, 37,SYM,SYM,SYM,SYM,SYM, 37, 48, 69, 48, 50, /* CX */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, 50, 43, 43, 42,SYM,SYM, 42, 97, /* DX */
   98, 26,SYM,SYM, 26, 56, 56, 20, 31, 31, 23, 29, 29, 63, 34, 36, /* EX */
   63, 47, 28, 47, 61, 61, 70, 70, 22, 22, 99, 62, 58, 62,100,SYM, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

#define Unicode_Char_size    88

static const unsigned int Unicode_CharOrder[] =
{
  65,  1, 66, 17, 67, 15, 68, 12, 69,  2, 70, 30, 71, 27, 72, 16,
  73,  4, 74, 19, 75, 10, 76,  9, 77, 11, 78,  3, 79,  0, 80, 13,
  81, 40, 82,  5, 83,  6, 84,  7, 85, 14, 86,  8, 87, 33, 88, 35,
  89, 21, 90, 18, 97,  1, 98, 17, 99, 15, 100, 12, 101,  2, 102, 30,
  103, 27, 104, 16, 105,  4, 106, 19, 107, 10, 108,  9, 109, 11, 110,  3,
  111,  0, 112, 13, 113, 40, 114,  5, 115,  6, 116,  7, 117, 14, 118,  8,
  119, 33, 120, 35, 121, 21, 122, 18, 193, 20, 196, 39, 201, 25, 205, 23,
  211, 34, 212, 36, 218, 28, 221, 22, 225, 20, 228, 39, 233, 25, 237, 23,
  243, 34, 244, 36, 250, 28, 253, 22, 268, 24, 269, 24, 270, 38, 271, 38,
  313, 41, 314, 41, 317, 32, 318, 32, 327, 37, 328, 37, 340, 43, 341, 43,
  344, 42, 345, 42, 352, 26, 353, 26, 356, 31, 357, 31, 381, 29, 382, 29,
};

static const float OrderToRatio[] =
{
  0.091838529,  0.091838529,  0.089309585,  0.089309585,  0.077843610,  0.077843610,  0.062562879,  0.062562879, 
  0.061338772,  0.061338772,  0.055581151,  0.055581151,  0.048552595,  0.048552595,  0.047248978,  0.047248978, 
  0.043446905,  0.043446905,  0.042654735,  0.042654735,  0.038806809,  0.038806809,  0.031646794,  0.031646794, 
  0.030714628,  0.030714628,  0.030154890,  0.030154890,  0.028349582,  0.028349582,  0.026178676,  0.026178676, 
  0.023378277,  0.023378277,  0.017608462,  0.017608462,  0.017604072,  0.017604072,  0.017527001,  0.017527001, 
  0.017349202,  0.017349202,  0.015306584,  0.015306584,  0.010174065,  0.010174065,  0.009385066,  0.009385066, 
  0.008534361,  0.008534361,  0.008486314,  0.008486314,  0.007260500,  0.007260500,  0.006622959,  0.006622959, 
  0.006603691,  0.006603691,  0.006321261,  0.006321261,  0.005256417,  0.005256417,  0.003293309,  0.003293309, 
  0.003163314,  0.003163314,  0.001837990,  0.001837990,  0.001721652,  0.001721652,  0.001337274,  0.001337274, 
  0.001255082,  0.001255082,  0.001105087,  0.001105087,  0.000955091,  0.000955091,  0.000866558,  0.000866558, 
  0.000249748,  0.000249748,  0.000090241,  0.000090241,  0.000087314,  0.000087314,  0.000076583,  0.000076583, 
};


/* Model Table:
 * Number of web pages processed for this model: 976
 * Number of characters consumed for this model: 4100131
 * Total considered sequences: 1735 / 1936
 *
 * - Positive sequences: first 800 (0.9950255427143826)
 * - Probable sequences: next 269 (1069-800) (0.003977380292430666)
 * - Neutral sequences: last 867 (0.0009970769931867407)
 * - Negative sequences: 201 (off-ratio, TODO)
 */


#define SlovakUnicodeAlphabetWidth         44
#define SlovakUnicodeCharToOrderIsReduced  0


#define SlovakFCMLowerBound  97
#define SlovakFCMUpperBound  382


static const PRUint8 SlovakUnicodeCharToOrder[] =
{
  2,18,16,13,3,31,28,17,5,20,11,10,12,4,1,14,41,6,7,8,
  15,9,34,36,22,19,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,21,0,0,40,0,0,0,0,26,0,0,0,
  24,0,0,0,0,0,35,37,0,0,0,0,0,29,0,0,23,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,25,0,39,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,42,0,0,
  0,33,0,0,0,0,0,0,0,0,0,38,0,0,0,0,0,0,0,0,
  0,0,0,0,44,0,0,0,43,0,0,0,0,0,0,0,27,0,0,0,
  32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,30,
};

static const PRUint8 SlovakCompactedLangModel[] =
{
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,1,1,3,2,3,3,2,3,3,1,3,3,1,3,0,3,3,0,2,0,2,0,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,0,1,3,1,3,3,2,3,3,3,3,3,1,3,1,3,3,0,2,0,1,0,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,2,3,0,3,3,3,3,3,3,3,3,3,3,0,3,3,0,3,1,1,0,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,2,3,2,2,0,1,0,1,0,0,0,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,0,3,3,3,3,3,1,3,3,3,2,2,3,3,0,2,1,0,2,0,2,1,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,1,2,3,2,3,3,1,1,2,0,0,0,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,2,3,2,3,1,3,3,2,3,3,3,3,3,1,2,2,0,1,2,1,0,0,
  0,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,1,3,3,3,3,2,3,2,2,3,1,2,1,2,3,3,1,1,3,2,1,1,2,2,1,
  0,3,3,3,3,3,3,3,3,1,3,3,2,3,3,3,3,3,3,3,1,3,3,3,3,3,3,3,2,3,2,1,1,2,0,1,1,3,2,3,3,1,1,1,1,
  0,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,2,3,3,3,3,2,3,1,0,2,3,1,2,2,0,1,1,0,0,0,
  0,3,3,3,3,3,3,3,3,3,3,2,3,3,2,3,3,2,2,2,1,3,3,3,3,3,3,1,2,3,2,2,1,2,2,3,1,3,3,0,1,1,2,2,1,
  0,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,2,3,1,2,3,3,3,3,2,3,2,2,3,2,3,0,1,2,3,1,3,1,0,3,1,0,0,2,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,2,0,3,3,3,1,3,3,1,1,1,3,2,1,
  0,3,3,3,3,3,3,3,3,2,3,3,2,2,3,3,3,3,2,1,2,3,3,2,3,2,3,3,2,3,0,2,1,2,1,3,1,3,2,0,3,1,2,2,1,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,0,1,3,1,3,3,1,3,3,3,3,2,1,3,0,1,3,0,1,1,1,0,
  0,3,3,3,3,3,3,3,3,2,3,3,3,3,2,3,3,3,2,2,1,2,3,0,3,1,3,0,2,3,1,1,2,1,1,1,1,1,1,0,0,2,0,0,0,
  0,3,3,3,3,3,3,3,3,3,3,3,3,2,2,3,3,1,2,2,1,3,3,3,2,1,3,3,1,3,1,2,1,3,2,2,1,2,1,0,2,1,2,1,3,
  0,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,2,3,2,3,3,3,3,3,3,2,2,1,3,2,1,1,2,2,2,1,2,2,0,1,1,1,2,1,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,1,2,3,2,3,0,1,3,2,1,3,1,1,2,1,1,1,0,0,0,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,2,3,2,3,1,0,3,3,1,3,1,3,1,1,1,1,1,2,0,1,1,1,1,1,0,0,0,
  0,1,0,0,3,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,1,0,0,3,0,3,3,0,3,1,2,3,1,0,0,0,2,2,0,0,0,1,0,
  0,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,1,3,0,3,2,2,3,2,3,1,2,0,2,0,3,0,0,1,0,1,0,
  0,1,1,0,3,0,3,3,3,3,3,3,3,2,3,2,3,3,3,3,2,0,0,0,0,2,0,3,1,0,3,1,1,1,0,0,1,0,2,0,0,0,0,1,0,
  0,1,2,0,3,0,3,3,3,3,3,3,3,3,3,1,3,3,3,3,3,0,0,0,1,3,0,3,1,0,3,1,3,2,1,0,1,0,1,1,0,0,0,1,0,
  0,3,3,3,3,3,2,3,3,1,3,3,2,1,1,3,1,1,2,1,0,2,1,0,3,0,1,3,0,2,0,0,0,1,0,0,0,0,2,0,0,0,0,0,1,
  0,2,1,2,3,1,3,3,3,2,3,2,3,3,2,1,3,3,2,3,1,0,0,0,0,2,1,1,3,0,3,2,1,0,1,0,0,0,0,0,0,0,0,1,0,
  0,3,3,3,3,3,1,3,3,3,3,3,2,1,3,3,1,1,1,0,0,2,0,0,3,2,2,3,0,1,1,1,3,2,0,1,0,0,2,0,0,0,0,0,0,
  0,3,3,3,3,3,3,3,3,2,3,2,3,2,2,3,2,3,2,1,1,3,3,1,2,1,3,1,3,1,1,2,0,1,2,3,1,1,0,1,1,1,0,1,0,
  0,1,1,0,3,0,3,3,3,3,3,3,3,3,3,0,3,3,3,3,1,0,0,0,0,3,0,3,1,0,3,2,3,1,0,0,0,0,1,0,0,0,0,0,0,
  0,3,3,3,3,3,2,3,1,1,2,3,2,3,1,3,1,1,3,0,1,3,1,0,3,0,2,3,0,1,0,0,0,1,0,0,0,1,3,2,0,0,0,0,0,
  0,3,3,3,2,3,3,2,3,1,3,2,2,1,2,3,2,1,2,2,1,3,3,1,2,0,3,0,2,2,0,3,0,1,0,3,1,0,0,0,1,0,0,0,0,
  0,3,3,1,1,1,2,1,1,1,1,2,2,2,1,2,0,1,1,0,1,1,0,0,0,1,0,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,3,1,3,0,1,3,1,3,0,3,3,1,1,3,0,1,3,0,1,1,0,1,0,2,1,2,1,3,0,0,0,0,0,0,0,1,2,0,0,0,0,0,0,
  0,3,3,3,3,3,3,3,1,1,2,2,2,2,1,2,2,3,2,1,1,1,2,0,0,0,1,1,1,0,0,1,0,0,3,1,1,0,0,0,1,0,0,0,0,
  0,1,1,0,3,0,3,2,3,1,3,1,3,3,3,1,2,1,3,3,2,0,0,0,0,1,1,1,3,0,1,2,0,0,1,1,1,0,1,0,0,0,0,0,0,
  0,3,3,3,2,3,1,2,3,2,1,2,1,1,3,3,2,1,1,0,0,1,2,0,1,0,1,0,1,1,0,2,0,0,1,3,2,0,0,0,0,1,0,0,0,
  0,0,0,0,1,0,3,3,2,3,3,2,1,3,1,0,2,1,3,3,2,0,0,0,0,1,0,1,1,0,3,1,0,1,0,0,0,0,2,0,0,0,0,0,0,
  0,3,3,1,0,0,0,1,1,0,0,1,2,0,0,3,0,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,
  0,3,3,1,1,0,0,1,1,0,0,0,2,0,0,2,0,0,0,0,1,1,0,0,0,0,0,0,0,0,3,0,0,1,0,0,0,0,0,0,0,0,0,0,0,
  0,1,0,0,2,1,1,2,3,0,1,1,1,1,0,1,1,1,1,3,0,0,0,0,0,3,0,0,1,0,0,1,3,0,0,0,0,0,0,0,1,0,0,0,0,
  0,1,2,1,0,1,0,1,0,2,1,0,1,1,1,3,1,1,1,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,
  0,0,0,1,1,0,0,0,0,1,0,1,0,0,2,0,0,1,2,1,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,2,0,0,0,0,0,0,
  0,1,1,2,1,2,0,1,0,0,0,1,1,0,0,0,0,0,1,0,0,2,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,1,0,0,0,2,1,1,0,1,1,1,0,1,0,1,0,0,0,0,0,1,1,0,1,0,0,1,0,0,0,0,0,0,0,3,0,0,0,0,0,0,
};


const SequenceModel Iso_8859_2SlovakModel =
{
  Iso_8859_2_CharToOrderMap,
  SlovakFCMLowerBound,
  SlovakFCMUpperBound,
  SlovakUnicodeCharToOrder,
  SlovakCompactedLangModel,
  44,
  0.9990029230068133f,
  PR_TRUE,
  "ISO-8859-2",
  "sk"
};

const SequenceModel Windows_1250SlovakModel =
{
  Windows_1250_CharToOrderMap,
  SlovakFCMLowerBound,
  SlovakFCMUpperBound,
  SlovakUnicodeCharToOrder,
  SlovakCompactedLangModel,
  44,
  0.9990029230068133f,
  PR_TRUE,
  "WINDOWS-1250",
  "sk"
};

const SequenceModel Ibm852SlovakModel =
{
  Ibm852_CharToOrderMap,
  SlovakFCMLowerBound,
  SlovakFCMUpperBound,
  SlovakUnicodeCharToOrder,
  SlovakCompactedLangModel,
  44,
  0.9990029230068133f,
  PR_TRUE,
  "IBM852",
  "sk"
};

const SequenceModel MaccentraleuropeSlovakModel =
{
  Maccentraleurope_CharToOrderMap,
  SlovakFCMLowerBound,
  SlovakFCMUpperBound,
  SlovakUnicodeCharToOrder,
  SlovakCompactedLangModel,
  44,
  0.9990029230068133f,
  PR_TRUE,
  "MacCentralEurope",
  "sk"
};

const LanguageModel SlovakModel =
{
  "sk",
  Unicode_CharOrder,
  Unicode_Char_size,
  SlovakFCMLowerBound,
  SlovakFCMUpperBound,
  SlovakUnicodeCharToOrderIsReduced,

  SlovakUnicodeCharToOrder,
  OrderToRatio,
  SlovakCompactedLangModel,
  44,
  6,
  0.43847452678950993f,
  27,
  0.034220613926725756f,
  0.9996865953795138f,
};
