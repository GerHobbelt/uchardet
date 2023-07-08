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

/********* Language model for: Czech *********/

/**
 * Generated by BuildLangModel.py
 * On: 2023-07-08 22:39:56.909626
 **/

/* Character Mapping Table:
 * ILL: illegal character.
 * CTR: control character specific to the charset.
 * RET: carriage/return.
 * SYM: symbol (punctuation) that does not belong to word.
 * NUM: 0 - 9.
 * IRR: irrelevant character (which does belong to a word)
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



#define IRR                     (-1)

#define CzechOrderWidth        41


static const unsigned char Iso_8859_2_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  2, 21, 15, 11,  0, 31, 29, 17,  5, 22, 10,  7, 12,  3,  1, /* 4X */
   14, 39,  8,  6,  4, 13,  9, 33, 34, 19, 18,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  2, 21, 15, 11,  0, 31, 29, 17,  5, 22, 10,  7, 12,  3,  1, /* 6X */
   14, 39,  8,  6,  4, 13,  9, 33, 34, 19, 18,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,IRR,SYM,IRR,SYM,IRR,IRR,SYM,SYM, 30,IRR, 38,IRR,SYM, 27,IRR, /* AX */
  SYM,IRR,SYM,IRR,SYM,IRR,IRR,SYM,SYM, 30,IRR, 38,IRR,SYM, 27,IRR, /* BX */
  IRR, 20,IRR,IRR,IRR,IRR,IRR,IRR, 28, 24,IRR,IRR, 23, 16,IRR, 40, /* CX */
  IRR,IRR, 36, 37,IRR,IRR,IRR,SYM, 25, 32, 35,IRR,IRR, 26,IRR,IRR, /* DX */
  IRR, 20,IRR,IRR,IRR,IRR,IRR,IRR, 28, 24,IRR,IRR, 23, 16,IRR, 40, /* EX */
  IRR,IRR, 36, 37,IRR,IRR,IRR,SYM, 25, 32, 35,IRR,IRR, 26,IRR,SYM, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Windows_1250_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  2, 21, 15, 11,  0, 31, 29, 17,  5, 22, 10,  7, 12,  3,  1, /* 4X */
   14, 39,  8,  6,  4, 13,  9, 33, 34, 19, 18,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  2, 21, 15, 11,  0, 31, 29, 17,  5, 22, 10,  7, 12,  3,  1, /* 6X */
   14, 39,  8,  6,  4, 13,  9, 33, 34, 19, 18,SYM,SYM,SYM,SYM,CTR, /* 7X */
  SYM,ILL,SYM,ILL,SYM,SYM,SYM,SYM,ILL,SYM, 30,SYM,IRR, 38, 27,IRR, /* 8X */
  ILL,SYM,SYM,SYM,SYM,SYM,SYM,SYM,ILL,SYM, 30,SYM,IRR, 38, 27,IRR, /* 9X */
  SYM,SYM,SYM,IRR,SYM,IRR,SYM,SYM,SYM,SYM,IRR,SYM,SYM,SYM,SYM,IRR, /* AX */
  SYM,SYM,SYM,IRR,SYM,SYM,SYM,SYM,SYM,IRR,IRR,SYM,IRR,SYM,IRR,IRR, /* BX */
  IRR, 20,IRR,IRR,IRR,IRR,IRR,IRR, 28, 24,IRR,IRR, 23, 16,IRR, 40, /* CX */
  IRR,IRR, 36, 37,IRR,IRR,IRR,SYM, 25, 32, 35,IRR,IRR, 26,IRR,IRR, /* DX */
  IRR, 20,IRR,IRR,IRR,IRR,IRR,IRR, 28, 24,IRR,IRR, 23, 16,IRR, 40, /* EX */
  IRR,IRR, 36, 37,IRR,IRR,IRR,SYM, 25, 32, 35,IRR,IRR, 26,IRR,SYM, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Ibm852_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  2, 21, 15, 11,  0, 31, 29, 17,  5, 22, 10,  7, 12,  3,  1, /* 4X */
   14, 39,  8,  6,  4, 13,  9, 33, 34, 19, 18,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  2, 21, 15, 11,  0, 31, 29, 17,  5, 22, 10,  7, 12,  3,  1, /* 6X */
   14, 39,  8,  6,  4, 13,  9, 33, 34, 19, 18,SYM,SYM,SYM,SYM,CTR, /* 7X */
  IRR,IRR, 24,IRR,IRR, 32,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, /* 8X */
   24,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, 38, 38,IRR,SYM, 28, /* 9X */
   20, 16, 37, 35,IRR,IRR, 27, 27,IRR,IRR,SYM,IRR, 28,IRR,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM, 20,IRR, 23,IRR,SYM,SYM,SYM,SYM,IRR,IRR,SYM, /* BX */
  SYM,SYM,SYM,SYM,SYM,SYM,IRR,IRR,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* CX */
  IRR,IRR, 40,IRR, 40, 36, 16,IRR, 23,SYM,SYM,SYM,SYM,IRR, 32,SYM, /* DX */
   37,IRR,IRR,IRR,IRR, 36, 30, 30,IRR, 35,IRR,IRR, 26, 26,IRR,SYM, /* EX */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,IRR, 25, 25,SYM,SYM, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Maccentraleurope_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  2, 21, 15, 11,  0, 31, 29, 17,  5, 22, 10,  7, 12,  3,  1, /* 4X */
   14, 39,  8,  6,  4, 13,  9, 33, 34, 19, 18,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  2, 21, 15, 11,  0, 31, 29, 17,  5, 22, 10,  7, 12,  3,  1, /* 6X */
   14, 39,  8,  6,  4, 13,  9, 33, 34, 19, 18,SYM,SYM,SYM,SYM,CTR, /* 7X */
  IRR,IRR,IRR, 24,IRR,IRR,IRR, 20,IRR, 28,IRR, 28,IRR,IRR, 24,IRR, /* 8X */
  IRR, 40, 16, 40,IRR,IRR,IRR, 37,IRR,IRR,IRR,IRR, 35, 23, 23,IRR, /* 9X */
  SYM,SYM,IRR,SYM,SYM,SYM,SYM,IRR,SYM,SYM,SYM,IRR,SYM,SYM,IRR,IRR, /* AX */
  IRR,IRR,SYM,SYM,IRR,IRR,SYM,SYM,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, /* BX */
  IRR,IRR,SYM,SYM,IRR, 36,SYM,SYM,SYM,SYM,SYM, 36,IRR,IRR,IRR,IRR, /* CX */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,IRR,IRR,IRR, 25,SYM,SYM, 25,IRR, /* DX */
  IRR, 30,SYM,SYM, 30,IRR,IRR, 20, 38, 38, 16, 27, 27,IRR, 37,IRR, /* EX */
  IRR, 32, 35, 32,IRR,IRR,IRR,IRR, 26, 26,IRR,IRR,IRR,IRR,IRR,SYM, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

#define Unicode_Char_size    82

static const PRUint32 Unicode_CharOrder[] =
{
   65,  2,  66, 21,  67, 15,  68, 11,  69,  0,  70, 31,  71, 29,  72, 17,
   73,  5,  74, 22,  75, 10,  76,  7,  77, 12,  78,  3,  79,  1,  80, 14,
   81, 39,  82,  8,  83,  6,  84,  4,  85, 13,  86,  9,  87, 33,  88, 34,
   89, 19,  90, 18,  97,  2,  98, 21,  99, 15, 100, 11, 101,  0, 102, 31,
  103, 29, 104, 17, 105,  5, 106, 22, 107, 10, 108,  7, 109, 12, 110,  3,
  111,  1, 112, 14, 113, 39, 114,  8, 115,  6, 116,  4, 117, 13, 118,  9,
  119, 33, 120, 34, 121, 19, 122, 18, 193, 20, 201, 24, 205, 16, 211, 37,
  218, 35, 221, 26, 225, 20, 233, 24, 237, 16, 243, 37, 250, 35, 253, 26,
  268, 28, 269, 28, 270, 40, 271, 40, 282, 23, 283, 23, 327, 36, 328, 36,
  344, 25, 345, 25, 352, 30, 353, 30, 356, 38, 357, 38, 366, 32, 367, 32,
  381, 27, 382, 27,
};

static const float OrderToRatio[] =
{
  0.080836610f,  0.078774119f,  0.075954598f,  0.066251820f,  0.052331503f,  0.050912534f,  0.048275363f,  0.047304671f, 
  0.046451632f,  0.040229163f,  0.035227196f,  0.034286205f,  0.030695841f,  0.030563913f,  0.030257233f,  0.027170635f, 
  0.025488500f,  0.023862545f,  0.018851369f,  0.018847685f,  0.018253205f,  0.017645141f,  0.016383656f,  0.012106946f, 
  0.010509079f,  0.009324724f,  0.007943514f,  0.007662621f,  0.007638906f,  0.007110966f,  0.005814253f,  0.005648250f, 
  0.004318153f,  0.002551751f,  0.001458571f,  0.001267472f,  0.000525868f,  0.000329243f,  0.000258560f,  0.000223563f, 
  0.000151958f, 
  0    /* value slot for out-of-bounds index values; range: 0..freq_count(41) */
};


/* Model Table:
 * Number of web pages processed for this model: 703
 * Number of characters consumed for this model: 4343292
 * Total considered sequences: 1640 / 1681
 *
 * - Positive sequences: first 779 (0.995009604797878)
 * - Probable sequences: next 235 (1014-779) (0.0039913052781319625)
 * - Neutral sequences: last 667 (0.0009990899239900042)
 * - Negative sequences: 41 (off-ratio, TODO)
 */
#define CzechUnicodeCharToOrderIsReduced  0


#define CzechFCMLowerBound  65
#define CzechFCMUpperBound  382


static const PRInt16 CzechUnicodeCharToOrder[] =
{
  2,21,15,11,0,31,29,17,5,22,10,7,12,3,1,14,39,8,6,4,
  13,9,33,34,19,18,IRR,IRR,IRR,IRR,IRR,IRR,2,21,15,11,0,31,29,17,
  5,22,10,7,12,3,1,14,39,8,6,4,13,9,33,34,19,18,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,20,IRR,IRR,IRR,IRR,IRR,IRR,IRR,24,IRR,IRR,IRR,
  16,IRR,IRR,IRR,IRR,IRR,37,IRR,IRR,IRR,IRR,IRR,IRR,35,IRR,IRR,26,IRR,IRR,IRR,
  20,IRR,IRR,IRR,IRR,IRR,IRR,IRR,24,IRR,IRR,IRR,16,IRR,IRR,IRR,IRR,IRR,37,IRR,
  IRR,IRR,IRR,IRR,IRR,35,IRR,IRR,26,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,28,28,40,40,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,23,23,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,36,36,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,25,
  25,IRR,IRR,IRR,IRR,IRR,IRR,30,30,IRR,IRR,38,38,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,32,32,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,27,27,
};



#define CzechUnicodeCharToOrderFirstTableChunkSize    58
#define CzechUnicodeCharToOrderSecondTableChunkOffset 128
#define CzechUnicodeCharToOrderSecondTableChunkSize   190


static const PRInt16 CzechUnicodeCharToOrder2[] =
{
  20,IRR,IRR,IRR,IRR,IRR,IRR,IRR,24,IRR,IRR,IRR,16,IRR,IRR,IRR,IRR,IRR,37,IRR,
  IRR,IRR,IRR,IRR,IRR,35,IRR,IRR,26,IRR,IRR,IRR,20,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  24,IRR,IRR,IRR,16,IRR,IRR,IRR,IRR,IRR,37,IRR,IRR,IRR,IRR,IRR,IRR,35,IRR,IRR,
  26,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,28,28,40,40,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,23,23,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,36,36,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,25,25,IRR,IRR,IRR,IRR,IRR,IRR,30,
  30,IRR,IRR,38,38,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,32,32,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,27,27,
};

static const PRUint8 CzechCompactedLangModel[] =
{
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,
  3,3,0,1,3,1,3,3,3,3,3,1,3,3,2,3,1,1,2,2,3,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,3,3,2,3,
  3,0,1,3,0,3,3,3,3,3,0,3,3,1,2,0,3,1,3,3,3,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,3,3,1,3,3,
  0,1,3,1,3,3,3,3,3,0,3,3,2,3,1,3,2,2,3,3,3,
  3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,
  3,0,3,3,3,3,3,3,3,2,2,1,1,2,0,2,1,3,3,3,3,
  3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,2,3,3,
  3,3,1,2,2,3,3,3,3,1,2,2,2,0,1,0,3,3,3,3,3,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,3,3,0,3,3,
  0,3,3,3,3,3,1,2,3,1,2,3,1,2,1,3,3,3,3,3,3,
  3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,2,1,3,1,2,
  1,2,2,1,3,3,3,1,1,2,3,2,3,0,3,3,3,3,3,3,3,
  3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,2,0,3,0,3,2,
  3,3,3,3,3,2,1,1,2,2,0,1,1,3,3,3,3,3,3,3,3,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,0,3,0,3,3,3,
  3,3,3,3,2,2,2,2,2,2,2,1,3,3,3,3,2,3,3,3,3,
  1,3,3,1,3,2,3,3,3,3,3,3,3,1,3,3,3,3,3,3,2,
  3,2,3,1,1,1,2,1,0,0,0,3,3,3,3,3,3,3,3,3,3,
  2,3,3,3,1,3,1,2,2,3,3,2,1,0,3,3,3,3,3,2,1,
  2,3,2,0,1,1,3,0,0,0,3,3,3,3,3,3,3,3,3,3,3,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
  3,3,1,1,2,1,0,1,0,3,3,3,3,3,3,3,3,3,2,3,3,
  3,3,3,3,3,2,2,3,3,3,2,3,3,3,3,3,2,2,2,2,3,
  2,1,1,1,2,0,1,0,3,3,3,3,3,3,3,3,3,3,3,3,3,
  2,3,3,1,3,3,2,3,3,3,0,1,3,0,3,3,3,3,3,1,2,
  3,1,3,1,2,1,2,3,3,3,3,3,3,3,3,3,1,3,2,2,3,
  3,3,3,3,1,3,3,2,2,3,3,3,2,0,2,1,3,2,3,1,1,
  1,2,2,1,1,0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,
  3,3,3,3,3,2,2,1,0,3,0,0,1,1,2,0,1,3,1,1,1,
  1,1,0,2,0,1,1,2,3,3,1,3,3,3,3,3,3,3,1,3,3,
  1,3,3,1,0,3,3,0,1,3,0,3,3,1,3,1,0,0,0,0,2,
  0,2,1,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,1,
  1,1,3,3,2,1,0,3,3,3,3,2,1,1,1,3,2,1,1,1,1,
  1,1,0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
  3,3,3,3,3,0,2,3,3,1,2,1,3,2,3,2,2,2,2,3,0,
  1,0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,3,
  1,1,3,3,0,0,3,0,3,3,2,3,2,2,2,2,2,2,0,1,1,
  0,1,0,0,3,3,1,3,3,3,3,3,3,3,1,3,3,1,3,3,0,
  0,3,3,0,0,3,0,3,3,2,3,1,0,0,0,0,1,1,1,1,2,
  3,3,3,3,3,3,3,3,3,3,3,3,2,3,1,3,3,2,2,3,3,
  3,3,3,2,3,3,2,3,1,2,1,2,1,0,1,1,2,0,0,0,3,
  3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,2,3,1,3,2,
  1,0,0,0,0,2,3,1,3,1,3,1,1,2,2,2,0,1,1,0,1,
  0,3,3,0,3,3,3,3,3,3,3,1,3,3,0,3,3,0,0,1,3,
  0,0,3,0,3,3,0,3,0,0,0,0,0,2,0,2,0,2,2,1,1,
  3,3,1,3,3,3,3,3,3,3,1,2,2,0,3,3,0,0,2,1,0,
  0,3,0,3,3,1,1,2,0,1,1,0,0,0,0,0,0,3,3,3,3,
  1,3,3,1,1,1,3,1,2,2,1,1,3,2,0,0,3,2,0,0,0,
  0,0,0,2,0,1,0,3,0,0,1,1,0,0,0,0,0,0,0,3,3,
  0,3,2,3,3,3,3,3,2,2,3,0,3,3,0,0,3,3,0,0,2,
  0,2,2,0,3,1,0,0,0,0,0,0,0,0,0,3,3,3,3,2,3,
  3,2,2,1,3,3,2,3,1,2,3,1,0,0,3,3,0,0,1,0,0,
  0,0,0,3,0,3,0,0,0,3,0,0,0,2,3,3,3,3,3,3,2,
  3,2,1,3,1,1,3,1,2,3,1,0,0,3,2,1,0,0,0,0,0,
  1,0,0,1,3,0,0,1,1,0,1,0,0,3,3,3,3,3,3,3,3,
  3,2,2,2,3,3,2,1,1,3,1,3,3,3,1,0,2,1,0,0,1,
  3,1,2,2,2,0,0,0,2,0,1,0,3,3,3,3,3,3,3,3,2,
  3,3,0,2,3,3,2,3,0,0,0,2,1,1,0,2,0,0,0,1,0,
  3,0,1,0,0,1,1,1,3,0,0,3,3,3,2,3,3,2,3,3,1,
  2,2,2,3,2,2,1,1,1,3,3,1,1,0,3,0,0,0,0,2,0,
  3,1,1,1,2,0,1,0,1,0,1,1,0,2,2,0,3,3,3,3,3,
  3,3,0,1,2,0,1,3,0,0,3,3,0,0,2,0,3,2,0,1,0,
  0,0,0,0,1,0,0,0,0,3,3,3,3,2,3,3,3,3,0,2,1,
  2,2,1,1,0,3,1,3,1,2,1,1,0,0,0,0,1,2,0,1,0,
  3,0,0,0,1,0,0,0,3,3,3,2,3,3,2,2,1,2,2,1,2,
  3,3,2,1,1,0,2,1,2,0,0,1,0,0,0,0,1,0,2,1,1,
  2,0,0,0,0,0,0,0,1,1,3,3,1,3,2,3,2,2,3,3,0,
  3,1,0,2,3,0,0,2,1,0,0,3,0,2,3,1,1,1,0,0,0,
  0,0,0,1,0,0,0,3,2,0,1,0,2,0,0,0,3,1,1,3,0,
  1,0,1,0,0,2,0,0,0,0,0,0,0,0,0,1,0,2,0,0,0,
  0,0,0,0,0,1,1,1,3,2,0,1,3,2,1,1,3,1,0,2,1,
  0,1,3,0,0,1,1,0,0,0,0,1,1,1,1,1,0,1,0,0,0,
  0,0,0,0,0,2,3,0,0,2,1,0,0,0,1,0,1,2,0,0,0,
  0,0,0,2,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,
  0,0,0,1,1,1,0,0,1,1,1,1,1,0,1,1,3,1,0,1,0,
  0,1,0,1,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,
  1,0,0,2,3,0,1,0,1,0,0,0,1,0,1,1,0,0,0,0,0,
  0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,
};


const SequenceModel Iso_8859_2CzechModel =
{
  Iso_8859_2_CharToOrderMap,
  CzechCompactedLangModel,
  CzechOrderWidth,
  0.99900091007601f,
  PR_TRUE,
  "ISO-8859-2",
  "cs"
};

const SequenceModel Windows_1250CzechModel =
{
  Windows_1250_CharToOrderMap,
  CzechCompactedLangModel,
  CzechOrderWidth,
  0.99900091007601f,
  PR_TRUE,
  "WINDOWS-1250",
  "cs"
};

const SequenceModel Ibm852CzechModel =
{
  Ibm852_CharToOrderMap,
  CzechCompactedLangModel,
  CzechOrderWidth,
  0.99900091007601f,
  PR_TRUE,
  "IBM852",
  "cs"
};

const SequenceModel MaccentraleuropeCzechModel =
{
  Maccentraleurope_CharToOrderMap,
  CzechCompactedLangModel,
  CzechOrderWidth,
  0.99900091007601f,
  PR_TRUE,
  "MacCentralEurope",
  "cs"
};

const LanguageModel CzechModel =
{
  "cs",
  Unicode_CharOrder,
  Unicode_Char_size,

  CzechFCMLowerBound,
  CzechFCMUpperBound,
  CzechUnicodeCharToOrderIsReduced,
  CzechUnicodeCharToOrder,
  CzechUnicodeCharToOrderFirstTableChunkSize,
  CzechUnicodeCharToOrderSecondTableChunkOffset,
  CzechUnicodeCharToOrderSecondTableChunkSize,
  CzechUnicodeCharToOrder2,
  OrderToRatio,
  CzechCompactedLangModel,
  CzechOrderWidth,
  6,
  0.40506118400512786f,
  27,
  0.0372975153408981f,
  0.9996995366648155f,
};
