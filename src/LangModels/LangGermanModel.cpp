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

/********* Language model for: German *********/

/**
 * Generated by BuildLangModel.py
 * On: 2023-07-08 20:53:24.331591
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



#define IRR     30

#define GermanOrderWidth         (IRR + 1)


static const unsigned char Iso_8859_1_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  5, 15, 12,  7,  0, 16, 13,  8,  2, 25, 17,  9, 14,  1, 11, /* 4X */
   18, 29,  3,  4,  6, 10, 21, 19, 28, 24, 20,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  5, 15, 12,  7,  0, 16, 13,  8,  2, 25, 17,  9, 14,  1, 11, /* 6X */
   18, 29,  3,  4,  6, 10, 21, 19, 28, 24, 20,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM,IRR,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
  IRR,IRR,IRR,IRR, 22,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, /* CX */
  IRR,IRR,IRR,IRR,IRR,IRR, 26,SYM,IRR,IRR,IRR,IRR, 23,IRR,IRR, 27, /* DX */
  IRR,IRR,IRR,IRR, 22,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, /* EX */
  IRR,IRR,IRR,IRR,IRR,IRR, 26,SYM,IRR,IRR,IRR,IRR, 23,IRR,IRR,IRR, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Windows_1252_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  5, 15, 12,  7,  0, 16, 13,  8,  2, 25, 17,  9, 14,  1, 11, /* 4X */
   18, 29,  3,  4,  6, 10, 21, 19, 28, 24, 20,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  5, 15, 12,  7,  0, 16, 13,  8,  2, 25, 17,  9, 14,  1, 11, /* 6X */
   18, 29,  3,  4,  6, 10, 21, 19, 28, 24, 20,SYM,SYM,SYM,SYM,CTR, /* 7X */
  SYM,ILL,SYM,IRR,SYM,SYM,SYM,SYM,SYM,SYM,IRR,SYM,IRR,ILL,IRR,ILL, /* 8X */
  ILL,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,IRR,SYM,IRR,ILL,IRR,IRR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM,IRR,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
  IRR,IRR,IRR,IRR, 22,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, /* CX */
  IRR,IRR,IRR,IRR,IRR,IRR, 26,SYM,IRR,IRR,IRR,IRR, 23,IRR,IRR, 27, /* DX */
  IRR,IRR,IRR,IRR, 22,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, /* EX */
  IRR,IRR,IRR,IRR,IRR,IRR, 26,SYM,IRR,IRR,IRR,IRR, 23,IRR,IRR,IRR, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

#define Unicode_Char_size    59

static const PRUint32 Unicode_CharOrder[] =
{
   65,  5,  66, 15,  67, 12,  68,  7,  69,  0,  70, 16,  71, 13,  72,  8,
   73,  2,  74, 25,  75, 17,  76,  9,  77, 14,  78,  1,  79, 11,  80, 18,
   81, 29,  82,  3,  83,  4,  84,  6,  85, 10,  86, 21,  87, 19,  88, 28,
   89, 24,  90, 20,  97,  5,  98, 15,  99, 12, 100,  7, 101,  0, 102, 16,
  103, 13, 104,  8, 105,  2, 106, 25, 107, 17, 108,  9, 109, 14, 110,  1,
  111, 11, 112, 18, 113, 29, 114,  3, 115,  4, 116,  6, 117, 10, 118, 21,
  119, 19, 120, 28, 121, 24, 122, 20, 196, 22, 214, 26, 220, 23, 223, 27,
  228, 22, 246, 26, 252, 23,
};

static const float OrderToRatio[] =
{
  0.152225319f,  0.094263910f,  0.081367568f,  0.077014035f,  0.064328472f,  0.063905484f,  0.061003537f,  0.046314035f, 
  0.039918814f,  0.038967142f,  0.038888176f,  0.034317333f,  0.029212093f,  0.027802133f,  0.027464232f,  0.019927984f, 
  0.017437598f,  0.015065559f,  0.013189965f,  0.012800849f,  0.010806295f,  0.010430238f,  0.004968733f,  0.004902418f, 
  0.003742210f,  0.003527962f,  0.002441823f,  0.001360785f,  0.001173267f,  0.000436659f, 
  0
};


/* Model Table:
 * Number of web pages processed for this model: 368
 * Number of characters consumed for this model: 4900847
 * Total considered sequences: 1419 / 900
 *
 * - Positive sequences: first 536 (0.9950402613790039)
 * - Probable sequences: next 201 (737-536) (0.003963119243464708)
 * - Neutral sequences: last 163 (0.0009966193775313714)
 * - Negative sequences: -519 (off-ratio, TODO)
 */
#define GermanUnicodeCharToOrderIsReduced  0


#define GermanFCMLowerBound  65
#define GermanFCMUpperBound  252


static const PRUint8 GermanUnicodeCharToOrder[] =
{
  5,15,12,7,0,16,13,8,2,25,17,9,14,1,11,18,29,3,4,6,
  10,21,19,28,24,20,IRR,IRR,IRR,IRR,IRR,IRR,5,15,12,7,0,16,13,8,
  2,25,17,9,14,1,11,18,29,3,4,6,10,21,19,28,24,20,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,22,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,26,IRR,IRR,IRR,IRR,IRR,23,IRR,IRR,27,IRR,
  IRR,IRR,IRR,22,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,26,IRR,IRR,IRR,IRR,IRR,23,
};



#define GermanUnicodeCharToOrderFirstTableChunkSize    58
#define GermanUnicodeCharToOrderSecondTableChunkOffset 131
#define GermanUnicodeCharToOrderSecondTableChunkSize   57


static const PRUint8 GermanUnicodeCharToOrder2[] =
{
  22,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,26,IRR,
  IRR,IRR,IRR,IRR,23,IRR,IRR,27,IRR,IRR,IRR,IRR,22,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,26,IRR,IRR,IRR,IRR,IRR,23,
};

static const PRUint8 GermanCompactedLangModel[] =
{
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,1,3,3,1,3,3,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,1,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,2,1,2,3,2,3,3,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,1,3,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,0,1,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,1,3,3,0,3,3,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,0,1,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,2,3,3,3,3,2,2,0,1,0,
  3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,2,3,3,3,3,3,3,2,3,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,0,1,0,
  3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,1,1,3,2,1,3,3,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,1,3,3,1,3,3,0,
  3,2,3,3,3,3,3,3,3,3,3,3,3,2,2,2,1,3,2,1,2,1,1,0,3,1,1,0,1,0,
  3,3,3,3,3,3,3,2,3,3,3,3,2,3,3,3,2,3,2,2,2,2,3,3,3,2,2,0,1,0,
  3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,2,2,3,3,3,1,3,0,1,0,
  3,3,3,3,3,3,3,2,3,3,3,3,2,3,2,3,2,2,2,3,3,2,3,3,3,2,2,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,2,3,2,3,3,2,3,2,3,2,3,3,1,2,3,0,1,0,
  3,3,3,3,3,3,3,2,3,3,3,3,1,3,3,2,3,3,3,3,3,2,3,3,3,1,3,0,1,0,
  3,2,3,3,3,3,3,2,3,3,3,3,2,1,2,2,3,2,3,2,2,1,3,1,2,1,2,0,0,0,
  3,3,3,3,3,3,2,2,3,3,3,3,1,1,2,2,1,2,1,2,1,1,3,3,2,2,3,0,0,0,
  3,2,3,2,2,3,3,2,2,3,3,3,2,2,2,3,2,2,2,3,3,2,3,3,2,1,3,0,0,0,
  3,1,3,2,2,3,1,2,1,2,2,3,2,2,2,1,1,1,2,2,1,1,1,1,2,1,3,0,1,0,
  2,3,3,3,3,1,3,3,3,3,3,2,3,3,3,2,3,2,2,0,1,1,1,0,0,0,0,3,1,0,
  1,3,1,3,3,1,3,3,3,3,0,0,3,3,2,3,2,1,2,1,1,1,0,1,1,0,0,2,0,0,
  3,3,2,3,3,3,3,3,2,3,2,3,3,3,3,2,1,2,3,2,1,2,1,1,2,0,1,0,1,0,
  3,1,3,2,1,3,1,1,1,1,3,3,1,1,1,1,1,1,1,1,1,1,3,3,1,1,2,0,0,0,
  1,3,1,3,3,0,3,3,3,3,0,0,3,3,3,2,3,3,2,1,2,1,0,0,1,0,1,3,1,0,
  3,3,3,2,2,1,3,1,1,3,2,1,0,2,2,3,2,1,1,1,1,2,1,0,0,0,0,0,0,0,
  3,1,3,0,2,3,3,1,1,1,2,2,1,1,1,1,2,1,3,1,1,2,0,0,2,1,0,0,2,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
};


const SequenceModel Iso_8859_1GermanModel =
{
  Iso_8859_1_CharToOrderMap,
  GermanCompactedLangModel,
  GermanOrderWidth,
  0.9990033806224686f,
  PR_TRUE,
  "ISO-8859-1",
  "de"
};

const SequenceModel Windows_1252GermanModel =
{
  Windows_1252_CharToOrderMap,
  GermanCompactedLangModel,
  GermanOrderWidth,
  0.9990033806224686f,
  PR_TRUE,
  "WINDOWS-1252",
  "de"
};

const LanguageModel GermanModel =
{
  "de",
  Unicode_CharOrder,
  Unicode_Char_size,

  GermanFCMLowerBound,
  GermanFCMUpperBound,
  GermanUnicodeCharToOrderIsReduced,
  GermanUnicodeCharToOrder,
  GermanUnicodeCharToOrderFirstTableChunkSize,
  GermanUnicodeCharToOrderSecondTableChunkOffset,
  GermanUnicodeCharToOrderSecondTableChunkSize,
  GermanUnicodeCharToOrder2,
  OrderToRatio,
  GermanCompactedLangModel,
  GermanOrderWidth,
  4,
  0.4048708315113694f,
  20,
  0.032984094382052735f,
  0.9992046272817743f,
};
