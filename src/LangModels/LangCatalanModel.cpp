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

/********* Language model for: Catalan *********/

/**
 * Generated by BuildLangModel.py
 * On: 2023-07-08 20:53:24.177049
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



#define IRR     36

#define CatalanOrderWidth         (IRR + 1)


static const unsigned char Iso_8859_1_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  1, 15,  9, 10,  0, 18, 14, 17,  3, 24, 28,  6, 12,  5,  8, /* 4X */
   13, 19,  4,  2,  7, 11, 16, 31, 21, 20, 29,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  1, 15,  9, 10,  0, 18, 14, 17,  3, 24, 28,  6, 12,  5,  8, /* 6X */
   13, 19,  4,  2,  7, 11, 16, 31, 21, 20, 29,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM,IRR,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
   25,IRR,IRR,IRR,IRR,IRR,IRR, 32, 26, 23,IRR,IRR,IRR, 27,IRR, 34, /* CX */
  IRR,IRR, 30, 22,IRR,IRR,IRR,SYM,IRR,IRR, 33,IRR, 35,IRR,IRR,IRR, /* DX */
   25,IRR,IRR,IRR,IRR,IRR,IRR, 32, 26, 23,IRR,IRR,IRR, 27,IRR, 34, /* EX */
  IRR,IRR, 30, 22,IRR,IRR,IRR,SYM,IRR,IRR, 33,IRR, 35,IRR,IRR,IRR, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Windows_1252_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  1, 15,  9, 10,  0, 18, 14, 17,  3, 24, 28,  6, 12,  5,  8, /* 4X */
   13, 19,  4,  2,  7, 11, 16, 31, 21, 20, 29,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  1, 15,  9, 10,  0, 18, 14, 17,  3, 24, 28,  6, 12,  5,  8, /* 6X */
   13, 19,  4,  2,  7, 11, 16, 31, 21, 20, 29,SYM,SYM,SYM,SYM,CTR, /* 7X */
  SYM,ILL,SYM,IRR,SYM,SYM,SYM,SYM,SYM,SYM,IRR,SYM,IRR,ILL,IRR,ILL, /* 8X */
  ILL,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,IRR,SYM,IRR,ILL,IRR,IRR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM,IRR,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
   25,IRR,IRR,IRR,IRR,IRR,IRR, 32, 26, 23,IRR,IRR,IRR, 27,IRR, 34, /* CX */
  IRR,IRR, 30, 22,IRR,IRR,IRR,SYM,IRR,IRR, 33,IRR, 35,IRR,IRR,IRR, /* DX */
   25,IRR,IRR,IRR,IRR,IRR,IRR, 32, 26, 23,IRR,IRR,IRR, 27,IRR, 34, /* EX */
  IRR,IRR, 30, 22,IRR,IRR,IRR,SYM,IRR,IRR, 33,IRR, 35,IRR,IRR,IRR, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

#define Unicode_Char_size    72

static const PRUint32 Unicode_CharOrder[] =
{
   65,  1,  66, 15,  67,  9,  68, 10,  69,  0,  70, 18,  71, 14,  72, 17,
   73,  3,  74, 24,  75, 28,  76,  6,  77, 12,  78,  5,  79,  8,  80, 13,
   81, 19,  82,  4,  83,  2,  84,  7,  85, 11,  86, 16,  87, 31,  88, 21,
   89, 20,  90, 29,  97,  1,  98, 15,  99,  9, 100, 10, 101,  0, 102, 18,
  103, 14, 104, 17, 105,  3, 106, 24, 107, 28, 108,  6, 109, 12, 110,  5,
  111,  8, 112, 13, 113, 19, 114,  4, 115,  2, 116,  7, 117, 11, 118, 16,
  119, 31, 120, 21, 121, 20, 122, 29, 192, 25, 199, 32, 200, 26, 201, 23,
  205, 27, 207, 34, 210, 30, 211, 22, 218, 33, 220, 35, 224, 25, 231, 32,
  232, 26, 233, 23, 237, 27, 239, 34, 242, 30, 243, 22, 250, 33, 252, 35,
};

static const float OrderToRatio[] =
{
  0.123957851f,  0.123124306f,  0.075912824f,  0.075438345f,  0.070286014f,  0.064416638f,  0.064174508f,  0.058324694f, 
  0.052836336f,  0.043252196f,  0.040394885f,  0.035641178f,  0.031344996f,  0.028721122f,  0.014649096f,  0.014571501f, 
  0.014457826f,  0.010712850f,  0.009742590f,  0.006749652f,  0.005680062f,  0.004561786f,  0.004249668f,  0.003787143f, 
  0.003291145f,  0.003079010f,  0.002870786f,  0.002722770f,  0.002649305f,  0.002009420f,  0.001855969f,  0.001742512f, 
  0.001035465f,  0.000729651f,  0.000471437f,  0.000251694f, 
  0
};


/* Model Table:
 * Number of web pages processed for this model: 696
 * Number of characters consumed for this model: 4600830
 * Total considered sequences: 1330 / 1296
 *
 * - Positive sequences: first 559 (0.9950027158857442)
 * - Probable sequences: next 216 (775-559) (0.004003859573898039)
 * - Neutral sequences: last 521 (0.000993424540357779)
 * - Negative sequences: -34 (off-ratio, TODO)
 */
#define CatalanUnicodeCharToOrderIsReduced  0


#define CatalanFCMLowerBound  65
#define CatalanFCMUpperBound  252


static const PRUint8 CatalanUnicodeCharToOrder[] =
{
  1,15,9,10,0,18,14,17,3,24,28,6,12,5,8,13,19,4,2,7,
  11,16,31,21,20,29,IRR,IRR,IRR,IRR,IRR,IRR,1,15,9,10,0,18,14,17,
  3,24,28,6,12,5,8,13,19,4,2,7,11,16,31,21,20,29,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,25,IRR,IRR,IRR,IRR,IRR,IRR,32,26,23,IRR,IRR,IRR,
  27,IRR,34,IRR,IRR,30,22,IRR,IRR,IRR,IRR,IRR,IRR,33,IRR,35,IRR,IRR,IRR,25,
  IRR,IRR,IRR,IRR,IRR,IRR,32,26,23,IRR,IRR,IRR,27,IRR,34,IRR,IRR,30,22,IRR,
  IRR,IRR,IRR,IRR,IRR,33,IRR,35,
};



#define CatalanUnicodeCharToOrderFirstTableChunkSize    58
#define CatalanUnicodeCharToOrderSecondTableChunkOffset 127
#define CatalanUnicodeCharToOrderSecondTableChunkSize   61


static const PRUint8 CatalanUnicodeCharToOrder2[] =
{
  25,IRR,IRR,IRR,IRR,IRR,IRR,32,26,23,IRR,IRR,IRR,27,IRR,34,IRR,IRR,30,22,
  IRR,IRR,IRR,IRR,IRR,IRR,33,IRR,35,IRR,IRR,IRR,25,IRR,IRR,IRR,IRR,IRR,IRR,32,
  26,23,IRR,IRR,IRR,27,IRR,34,IRR,IRR,30,22,IRR,IRR,IRR,IRR,IRR,IRR,33,IRR,
  35,
};

static const PRUint8 CatalanCompactedLangModel[] =
{
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,1,3,2,0,1,3,3,2,3,2,1,3,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,1,3,1,2,3,3,3,1,3,3,1,3,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,2,3,3,2,3,3,3,3,2,3,3,0,2,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,2,3,3,2,3,3,3,1,3,3,3,2,2,1,1,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,2,3,2,3,3,1,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,2,3,3,0,0,
  3,3,3,3,2,2,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,2,3,3,2,3,3,3,3,2,3,2,2,2,0,0,
  3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,2,1,3,3,3,3,3,3,3,3,2,3,3,3,0,2,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,1,3,2,1,1,3,3,1,3,1,0,2,0,
  3,3,3,3,3,3,3,3,3,3,2,3,2,2,2,2,1,3,2,2,3,1,2,3,1,3,3,3,3,2,3,1,0,2,1,0,
  3,3,3,3,3,3,3,2,3,2,3,3,3,1,3,2,3,3,2,3,3,1,2,3,3,3,3,3,1,2,3,3,0,3,0,0,
  3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,2,3,2,2,3,1,3,3,3,3,3,3,2,1,2,1,0,3,0,
  3,3,3,3,2,3,2,3,3,3,2,3,3,3,1,3,1,2,3,1,3,1,3,3,1,3,3,3,2,1,3,1,0,3,0,0,
  3,3,3,3,3,2,3,3,3,3,2,3,2,3,2,2,1,3,2,1,3,1,3,2,1,3,3,3,1,1,3,1,2,3,0,0,
  3,3,3,3,3,3,3,3,3,2,2,3,3,1,3,2,1,3,1,0,3,1,2,2,1,3,3,3,1,1,2,2,0,2,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,1,1,3,1,3,1,0,3,1,2,3,3,3,3,2,1,1,2,1,0,2,0,0,
  3,3,2,3,2,1,2,1,3,1,2,3,1,1,1,1,1,1,1,0,2,1,0,3,1,2,2,3,1,1,1,0,0,0,1,0,
  3,3,2,3,3,3,3,3,3,2,2,3,3,1,1,2,1,1,1,1,3,1,1,2,1,2,2,2,2,2,2,2,1,0,0,0,
  3,3,2,3,3,2,3,3,3,3,1,3,2,1,2,2,1,1,3,1,1,2,2,2,1,3,2,3,1,1,3,1,0,1,0,0,
  1,3,1,1,1,0,0,1,1,1,0,3,1,0,0,1,1,0,1,1,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,1,2,0,1,2,1,1,1,2,1,0,2,2,0,2,0,0,0,0,
  3,3,2,3,1,1,1,3,3,3,1,3,2,3,1,1,3,2,2,1,3,3,1,1,1,2,3,3,1,0,3,1,0,1,0,0,
  1,1,3,1,2,3,2,1,1,1,1,0,1,2,1,2,2,0,1,0,0,0,0,0,0,0,0,0,1,1,0,1,0,0,0,0,
  2,1,3,3,3,2,2,2,2,2,2,3,2,1,1,1,1,1,1,1,0,1,0,0,1,0,0,1,1,1,0,0,0,0,0,0,
  3,3,1,3,2,2,1,1,3,1,1,3,1,1,1,1,0,1,1,0,1,0,1,1,1,3,1,1,2,0,1,1,0,2,0,0,
  1,1,3,2,3,3,3,3,0,3,2,2,3,3,3,3,2,1,3,2,1,3,0,0,1,0,0,0,1,1,0,1,0,0,0,0,
  0,0,3,3,3,3,3,3,1,3,3,1,3,3,3,1,2,0,2,1,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  1,3,3,2,3,3,3,3,3,3,3,0,3,2,3,2,2,1,3,2,0,1,0,0,1,0,0,0,2,1,0,0,0,0,0,0,
  3,3,3,3,3,2,3,2,3,1,1,3,3,1,2,2,1,3,1,1,3,1,2,2,1,1,1,2,2,1,1,2,1,1,0,0,
  3,3,1,3,1,2,2,1,3,1,1,3,1,1,1,1,1,2,1,1,2,1,2,2,1,2,1,0,1,3,2,1,0,1,0,0,
  1,0,3,1,3,3,3,3,0,3,2,0,3,3,3,3,1,0,3,2,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,2,3,2,2,3,1,2,2,2,1,1,1,1,3,2,0,2,0,0,1,0,1,1,0,2,1,0,2,0,0,0,0,
  1,3,0,0,0,0,1,0,3,0,0,2,1,0,0,0,0,0,0,0,0,0,2,0,0,2,0,0,0,0,1,0,0,0,0,0,
  1,1,3,1,2,3,3,2,0,1,1,0,3,2,0,3,1,1,1,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,
  2,2,3,1,1,3,2,3,0,2,3,1,1,0,1,1,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
};


const SequenceModel Iso_8859_1CatalanModel =
{
  Iso_8859_1_CharToOrderMap,
  CatalanCompactedLangModel,
  CatalanOrderWidth,
  0.9990065754596422f,
  PR_TRUE,
  "ISO-8859-1",
  "ca"
};

const SequenceModel Windows_1252CatalanModel =
{
  Windows_1252_CharToOrderMap,
  CatalanCompactedLangModel,
  CatalanOrderWidth,
  0.9990065754596422f,
  PR_TRUE,
  "WINDOWS-1252",
  "ca"
};

const LanguageModel CatalanModel =
{
  "ca",
  Unicode_CharOrder,
  Unicode_Char_size,

  CatalanFCMLowerBound,
  CatalanFCMUpperBound,
  CatalanUnicodeCharToOrderIsReduced,
  CatalanUnicodeCharToOrder,
  CatalanUnicodeCharToOrderFirstTableChunkSize,
  CatalanUnicodeCharToOrderSecondTableChunkOffset,
  CatalanUnicodeCharToOrderSecondTableChunkSize,
  CatalanUnicodeCharToOrder2,
  OrderToRatio,
  CatalanCompactedLangModel,
  CatalanOrderWidth,
  5,
  0.46871933977130215f,
  21,
  0.030745974095978335f,
  0.9996972285435456f,
};
