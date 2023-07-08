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

/********* Language model for: Irish *********/

/**
 * Generated by BuildLangModel.py
 * On: 2023-07-08 23:28:33.900395
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

#define IrishOrderWidth        31


static const unsigned char Iso_8859_15_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 15,  8, 11,  5, 19, 12,  3,  1, 27, 25,  9, 13,  2, 10, /* 4X */
   20, 30,  4,  6,  7, 14, 24, 26, 28, 23, 29,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 15,  8, 11,  5, 19, 12,  3,  1, 27, 25,  9, 13,  2, 10, /* 6X */
   20, 30,  4,  6,  7, 14, 24, 26, 28, 23, 29,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,249,SYM,249,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,249,249,SYM,SYM,249,SYM,SYM,SYM,249,249,249,SYM, /* BX */
  249, 17,249,249,249,249,249,249,249, 18,249,249,249, 16,249,249, /* CX */
  249,249,249, 21,249,249,249,SYM,249,249, 22,249,249,249,249,249, /* DX */
  249, 17,249,249,249,249,249,249,249, 18,249,249,249, 16,249,249, /* EX */
  249,249,249, 21,249,249,249,SYM,249,249, 22,249,249,249,249,249, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_1_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 15,  8, 11,  5, 19, 12,  3,  1, 27, 25,  9, 13,  2, 10, /* 4X */
   20, 30,  4,  6,  7, 14, 24, 26, 28, 23, 29,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 15,  8, 11,  5, 19, 12,  3,  1, 27, 25,  9, 13,  2, 10, /* 6X */
   20, 30,  4,  6,  7, 14, 24, 26, 28, 23, 29,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM,249,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
  249, 17,249,249,249,249,249,249,249, 18,249,249,249, 16,249,249, /* CX */
  249,249,249, 21,249,249,249,SYM,249,249, 22,249,249,249,249,249, /* DX */
  249, 17,249,249,249,249,249,249,249, 18,249,249,249, 16,249,249, /* EX */
  249,249,249, 21,249,249,249,SYM,249,249, 22,249,249,249,249,249, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_9_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 15,  8, 11,  5, 19, 12,  3,  1, 27, 25,  9, 13,  2, 10, /* 4X */
   20, 30,  4,  6,  7, 14, 24, 26, 28, 23, 29,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 15,  8, 11,  5, 19, 12,  3,  1, 27, 25,  9, 13,  2, 10, /* 6X */
   20, 30,  4,  6,  7, 14, 24, 26, 28, 23, 29,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM,249,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
  249, 17,249,249,249,249,249,249,249, 18,249,249,249, 16,249,249, /* CX */
  249,249,249, 21,249,249,249,SYM,249,249, 22,249,249,249,249,249, /* DX */
  249, 17,249,249,249,249,249,249,249, 18,249,249,249, 16,249,249, /* EX */
  249,249,249, 21,249,249,249,SYM,249,249, 22,249,249,249,249,249, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Windows_1252_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 15,  8, 11,  5, 19, 12,  3,  1, 27, 25,  9, 13,  2, 10, /* 4X */
   20, 30,  4,  6,  7, 14, 24, 26, 28, 23, 29,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 15,  8, 11,  5, 19, 12,  3,  1, 27, 25,  9, 13,  2, 10, /* 6X */
   20, 30,  4,  6,  7, 14, 24, 26, 28, 23, 29,SYM,SYM,SYM,SYM,CTR, /* 7X */
  SYM,ILL,SYM,249,SYM,SYM,SYM,SYM,SYM,SYM,249,SYM,249,ILL,249,ILL, /* 8X */
  ILL,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,249,SYM,249,ILL,249,249, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM,249,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
  249, 17,249,249,249,249,249,249,249, 18,249,249,249, 16,249,249, /* CX */
  249,249,249, 21,249,249,249,SYM,249,249, 22,249,249,249,249,249, /* DX */
  249, 17,249,249,249,249,249,249,249, 18,249,249,249, 16,249,249, /* EX */
  249,249,249, 21,249,249,249,SYM,249,249, 22,249,249,249,249,249, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

#define Unicode_Char_size    62

static const PRUint32 Unicode_CharOrder[] =
{
   65,  0,  66, 15,  67,  8,  68, 11,  69,  5,  70, 19,  71, 12,  72,  3,
   73,  1,  74, 27,  75, 25,  76,  9,  77, 13,  78,  2,  79, 10,  80, 20,
   81, 30,  82,  4,  83,  6,  84,  7,  85, 14,  86, 24,  87, 26,  88, 28,
   89, 23,  90, 29,  97,  0,  98, 15,  99,  8, 100, 11, 101,  5, 102, 19,
  103, 12, 104,  3, 105,  1, 106, 27, 107, 25, 108,  9, 109, 13, 110,  2,
  111, 10, 112, 20, 113, 30, 114,  4, 115,  6, 116,  7, 117, 14, 118, 24,
  119, 26, 120, 28, 121, 23, 122, 29, 193, 17, 201, 18, 205, 16, 211, 21,
  218, 22, 225, 17, 233, 18, 237, 16, 243, 21, 250, 22,
};

static const float OrderToRatio[] =
{
  0.154195118f,  0.098714796f,  0.082883709f,  0.074005114f,  0.063844082f,  0.061332847f,  0.052971047f,  0.052026610f, 
  0.045417996f,  0.043343956f,  0.042572192f,  0.032635268f,  0.031615392f,  0.025252440f,  0.023786308f,  0.021618461f, 
  0.017563944f,  0.016434096f,  0.012776360f,  0.011611243f,  0.008644201f,  0.008197209f,  0.007253261f,  0.002794370f, 
  0.002168092f,  0.002125964f,  0.001900142f,  0.000869490f,  0.000535655f,  0.000405844f,  0.000176837f, 
  0    /* value slot for out-of-bounds index values; range: 0..freq_count(31) */
};


/* Model Table:
 * Number of web pages processed for this model: 4161
 * Number of characters consumed for this model: 4082853
 * Total considered sequences: 1272 / 961
 *
 * - Positive sequences: first 477 (0.9950321789489702)
 * - Probable sequences: next 173 (650-477) (0.003968392373599805)
 * - Neutral sequences: last 311 (0.0009994286774299699)
 * - Negative sequences: -311 (off-ratio, TODO)
 */
#define IrishUnicodeCharToOrderIsReduced  0


#define IrishFCMLowerBound  65
#define IrishFCMUpperBound  250


static const PRInt16 IrishUnicodeCharToOrder[] =
{
  0,15,8,11,5,19,12,3,1,27,25,9,13,2,10,20,30,4,6,7,
  14,24,26,28,23,29,IRR,IRR,IRR,IRR,IRR,IRR,0,15,8,11,5,19,12,3,
  1,27,25,9,13,2,10,20,30,4,6,7,14,24,26,28,23,29,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,17,IRR,IRR,IRR,IRR,IRR,IRR,IRR,18,IRR,IRR,IRR,
  16,IRR,IRR,IRR,IRR,IRR,21,IRR,IRR,IRR,IRR,IRR,IRR,22,IRR,IRR,IRR,IRR,IRR,IRR,
  17,IRR,IRR,IRR,IRR,IRR,IRR,IRR,18,IRR,IRR,IRR,16,IRR,IRR,IRR,IRR,IRR,21,IRR,
  IRR,IRR,IRR,IRR,IRR,22,
};



#define IrishUnicodeCharToOrderFirstTableChunkSize    58
#define IrishUnicodeCharToOrderSecondTableChunkOffset 128
#define IrishUnicodeCharToOrderSecondTableChunkSize   58


static const PRInt16 IrishUnicodeCharToOrder2[] =
{
  17,IRR,IRR,IRR,IRR,IRR,IRR,IRR,18,IRR,IRR,IRR,16,IRR,IRR,IRR,IRR,IRR,21,IRR,
  IRR,IRR,IRR,IRR,IRR,22,IRR,IRR,IRR,IRR,IRR,IRR,17,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  18,IRR,IRR,IRR,16,IRR,IRR,IRR,IRR,IRR,21,IRR,IRR,IRR,IRR,IRR,IRR,22,
};

static const PRUint8 IrishCompactedLangModel[] =
{
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,1,3,3,1,0,3,3,3,3,2,3,3,2,
  3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,1,2,2,3,3,3,3,2,3,3,1,2,3,3,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,2,2,1,2,2,
  3,3,3,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,1,2,1,0,1,1,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,1,1,2,1,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,1,3,3,2,1,3,3,3,3,2,3,2,2,
  3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,1,1,2,2,
  3,3,3,3,3,3,3,3,3,3,3,2,2,3,3,3,3,3,3,2,3,3,3,3,2,2,3,2,1,2,1,
  3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,2,3,3,3,2,2,3,3,3,1,3,1,1,1,2,2,
  3,3,2,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,1,2,1,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,1,3,3,0,2,3,3,3,3,2,3,2,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,2,2,3,2,1,2,0,
  3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,2,3,3,3,2,1,3,2,3,1,1,2,1,1,1,1,
  3,3,3,3,3,3,3,3,3,3,3,2,2,3,3,3,3,3,3,2,3,3,3,3,1,1,2,1,1,1,1,
  3,3,3,2,3,3,3,3,3,3,2,3,3,3,2,3,3,2,1,3,3,1,1,2,2,3,1,2,2,2,1,
  3,3,3,3,3,3,2,2,2,3,3,2,1,1,3,3,3,3,3,1,3,3,2,3,1,1,1,1,0,0,0,
  2,1,3,1,3,1,3,3,3,3,3,3,3,2,1,3,0,1,1,2,1,1,3,1,1,1,0,0,0,0,0,
  1,3,3,1,3,2,3,3,3,3,1,3,3,3,1,3,2,1,0,3,3,0,1,1,1,1,0,0,0,1,0,
  3,3,2,0,2,2,2,2,2,2,2,2,1,2,1,2,1,1,1,1,1,1,2,0,1,0,0,1,1,1,0,
  3,3,2,3,3,3,2,3,2,3,3,1,1,2,3,1,3,3,3,3,1,3,2,2,0,1,1,1,0,1,0,
  3,3,1,3,3,3,3,3,2,3,3,2,1,2,3,2,3,3,3,2,3,3,2,2,1,1,1,1,1,1,0,
  1,3,3,1,3,2,3,3,3,3,0,3,3,3,1,2,1,1,0,2,2,0,1,0,2,1,1,0,0,1,0,
  2,3,3,0,3,0,3,3,3,3,1,3,2,2,1,2,1,1,0,1,3,1,1,0,0,0,0,0,0,0,1,
  3,2,3,1,3,3,3,2,2,3,3,3,2,3,2,3,0,1,0,2,2,1,1,1,1,2,2,1,1,1,1,
  3,3,1,1,2,3,2,1,1,2,3,1,1,0,2,1,3,2,3,1,1,3,0,2,1,1,1,1,0,0,0,
  3,3,2,2,2,3,3,2,1,3,3,1,1,3,3,1,1,1,1,1,1,1,1,2,1,3,2,1,1,0,0,
  3,3,3,3,2,3,2,2,2,2,3,2,1,1,2,1,0,1,0,1,1,1,0,2,0,1,3,0,0,0,0,
  3,3,1,1,2,3,2,1,1,1,3,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,0,
  3,2,1,1,1,2,1,3,2,1,2,1,1,1,1,1,0,1,1,2,2,0,1,1,2,1,1,0,1,0,0,
  3,2,1,2,1,3,1,1,1,1,3,1,2,1,2,2,0,1,1,1,1,1,1,2,1,1,1,1,0,2,0,
  1,1,0,0,0,0,1,1,1,0,0,0,0,0,3,1,0,0,0,0,0,0,0,0,1,0,0,0,1,0,1,
};


const SequenceModel Iso_8859_15IrishModel =
{
  Iso_8859_15_CharToOrderMap,
  IrishCompactedLangModel,
  IrishOrderWidth,
  0.99900057132257f,
  PR_TRUE,
  "ISO-8859-15",
  "ga"
};

const SequenceModel Iso_8859_1IrishModel =
{
  Iso_8859_1_CharToOrderMap,
  IrishCompactedLangModel,
  IrishOrderWidth,
  0.99900057132257f,
  PR_TRUE,
  "ISO-8859-1",
  "ga"
};

const SequenceModel Iso_8859_9IrishModel =
{
  Iso_8859_9_CharToOrderMap,
  IrishCompactedLangModel,
  IrishOrderWidth,
  0.99900057132257f,
  PR_TRUE,
  "ISO-8859-9",
  "ga"
};

const SequenceModel Windows_1252IrishModel =
{
  Windows_1252_CharToOrderMap,
  IrishCompactedLangModel,
  IrishOrderWidth,
  0.99900057132257f,
  PR_TRUE,
  "WINDOWS-1252",
  "ga"
};

const LanguageModel IrishModel =
{
  "ga",
  Unicode_CharOrder,
  Unicode_Char_size,

  IrishFCMLowerBound,
  IrishFCMUpperBound,
  IrishUnicodeCharToOrderIsReduced,
  IrishUnicodeCharToOrder,
  IrishUnicodeCharToOrderFirstTableChunkSize,
  IrishUnicodeCharToOrderSecondTableChunkOffset,
  IrishUnicodeCharToOrderSecondTableChunkSize,
  IrishUnicodeCharToOrder2,
  OrderToRatio,
  IrishCompactedLangModel,
  IrishOrderWidth,
  4,
  0.4097987363248199f,
  19,
  0.03507106427784688f,
  0.9996720430542074f,
};
