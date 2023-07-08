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

/********* Language model for: Romanian *********/

/**
 * Generated by BuildLangModel.py
 * On: 2023-07-08 21:08:14.505750
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



#define IRR     31

#define RomanianOrderWidth         (IRR + 1)


static const unsigned char Iso_8859_2_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  2, 16,  9, 11,  0, 15, 17, 23,  1, 25, 27,  7, 12,  4,  8, /* 4X */
   13, 30,  3, 10,  5,  6, 18, 29, 26, 28, 22,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  2, 16,  9, 11,  0, 15, 17, 23,  1, 25, 27,  7, 12,  4,  8, /* 6X */
   13, 30,  3, 10,  5,  6, 18, 29, 26, 28, 22,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,IRR,SYM,IRR,SYM,IRR,IRR,SYM,SYM,IRR,IRR,IRR,IRR,SYM,IRR,IRR, /* AX */
  SYM,IRR,SYM,IRR,SYM,IRR,IRR,SYM,SYM,IRR,IRR,IRR,IRR,SYM,IRR,IRR, /* BX */
  IRR,IRR, 24, 14,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, 20,IRR, /* CX */
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,SYM,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, /* DX */
  IRR,IRR, 24, 14,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, 20,IRR, /* EX */
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,SYM,IRR,IRR,IRR,IRR,IRR,IRR,IRR,SYM, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_16_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  2, 16,  9, 11,  0, 15, 17, 23,  1, 25, 27,  7, 12,  4,  8, /* 4X */
   13, 30,  3, 10,  5,  6, 18, 29, 26, 28, 22,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  2, 16,  9, 11,  0, 15, 17, 23,  1, 25, 27,  7, 12,  4,  8, /* 6X */
   13, 30,  3, 10,  5,  6, 18, 29, 26, 28, 22,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,IRR,IRR,IRR,SYM,SYM,IRR,SYM,IRR,SYM, 19,SYM,IRR,SYM,IRR,IRR, /* AX */
  SYM,SYM,IRR,IRR,IRR,SYM,SYM,SYM,IRR,IRR, 19,SYM,IRR,IRR,IRR,IRR, /* BX */
  IRR,IRR, 24, 14,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, 20,IRR, /* CX */
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, 21,IRR, /* DX */
  IRR,IRR, 24, 14,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, 20,IRR, /* EX */
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, 21,IRR, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Windows_1250_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  2, 16,  9, 11,  0, 15, 17, 23,  1, 25, 27,  7, 12,  4,  8, /* 4X */
   13, 30,  3, 10,  5,  6, 18, 29, 26, 28, 22,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  2, 16,  9, 11,  0, 15, 17, 23,  1, 25, 27,  7, 12,  4,  8, /* 6X */
   13, 30,  3, 10,  5,  6, 18, 29, 26, 28, 22,SYM,SYM,SYM,SYM,CTR, /* 7X */
  SYM,ILL,SYM,ILL,SYM,SYM,SYM,SYM,ILL,SYM,IRR,SYM,IRR,IRR,IRR,IRR, /* 8X */
  ILL,SYM,SYM,SYM,SYM,SYM,SYM,SYM,ILL,SYM,IRR,SYM,IRR,IRR,IRR,IRR, /* 9X */
  SYM,SYM,SYM,IRR,SYM,IRR,SYM,SYM,SYM,SYM,IRR,SYM,SYM,SYM,SYM,IRR, /* AX */
  SYM,SYM,SYM,IRR,SYM,SYM,SYM,SYM,SYM,IRR,IRR,SYM,IRR,SYM,IRR,IRR, /* BX */
  IRR,IRR, 24, 14,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, 20,IRR, /* CX */
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,SYM,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, /* DX */
  IRR,IRR, 24, 14,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, 20,IRR, /* EX */
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,SYM,IRR,IRR,IRR,IRR,IRR,IRR,IRR,SYM, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Ibm852_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  2, 16,  9, 11,  0, 15, 17, 23,  1, 25, 27,  7, 12,  4,  8, /* 4X */
   13, 30,  3, 10,  5,  6, 18, 29, 26, 28, 22,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  2, 16,  9, 11,  0, 15, 17, 23,  1, 25, 27,  7, 12,  4,  8, /* 6X */
   13, 30,  3, 10,  5,  6, 18, 29, 26, 28, 22,SYM,SYM,SYM,SYM,CTR, /* 7X */
  IRR,IRR,IRR, 24,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, 20,IRR,IRR,IRR, /* 8X */
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,SYM,IRR, /* 9X */
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,SYM,IRR,IRR,IRR,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM,IRR, 24,IRR,IRR,SYM,SYM,SYM,SYM,IRR,IRR,SYM, /* BX */
  SYM,SYM,SYM,SYM,SYM,SYM, 14, 14,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* CX */
  IRR,IRR,IRR,IRR,IRR,IRR,IRR, 20,IRR,SYM,SYM,SYM,SYM,IRR,IRR,SYM, /* DX */
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,SYM, /* EX */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,IRR,IRR,IRR,SYM,SYM, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

#define Unicode_Char_size    62

static const PRUint32 Unicode_CharOrder[] =
{
   65,  2,  66, 16,  67,  9,  68, 11,  69,  0,  70, 15,  71, 17,  72, 23,
   73,  1,  74, 25,  75, 27,  76,  7,  77, 12,  78,  4,  79,  8,  80, 13,
   81, 30,  82,  3,  83, 10,  84,  5,  85,  6,  86, 18,  87, 29,  88, 26,
   89, 28,  90, 22,  97,  2,  98, 16,  99,  9, 100, 11, 101,  0, 102, 15,
  103, 17, 104, 23, 105,  1, 106, 25, 107, 27, 108,  7, 109, 12, 110,  4,
  111,  8, 112, 13, 113, 30, 114,  3, 115, 10, 116,  5, 117,  6, 118, 18,
  119, 29, 120, 26, 121, 28, 122, 22, 194, 24, 206, 20, 226, 24, 238, 20,
  258, 14, 259, 14, 536, 19, 537, 19, 538, 21, 539, 21,
};

static const float OrderToRatio[] =
{
  0.115128636f,  0.108086687f,  0.103110536f,  0.074540556f,  0.066621212f,  0.065164688f,  0.054728103f,  0.054373224f, 
  0.051048438f,  0.047448914f,  0.040469705f,  0.034188491f,  0.029070682f,  0.028464104f,  0.021161876f,  0.012818049f, 
  0.011653418f,  0.011083112f,  0.010893663f,  0.009831967f,  0.009646684f,  0.009382486f,  0.007546574f,  0.007310805f, 
  0.003810540f,  0.002488321f,  0.002470430f,  0.002441510f,  0.002154764f,  0.001754789f,  0.000207585f, 
  0
};


/* Model Table:
 * Number of web pages processed for this model: 905
 * Number of characters consumed for this model: 4080262
 * Total considered sequences: 1485 / 961
 *
 * - Positive sequences: first 480 (0.9950004665264973)
 * - Probable sequences: next 282 (762-480) (0.004001861274647078)
 * - Neutral sequences: last 199 (0.0009976721988556037)
 * - Negative sequences: -524 (off-ratio, TODO)
 */
#define RomanianUnicodeCharToOrderIsReduced  0


#define RomanianFCMLowerBound  65
#define RomanianFCMUpperBound  539


static const PRUint8 RomanianUnicodeCharToOrder[] =
{
  2,16,9,11,0,15,17,23,1,25,27,7,12,4,8,13,30,3,10,5,
  6,18,29,26,28,22,IRR,IRR,IRR,IRR,IRR,IRR,2,16,9,11,0,15,17,23,
  1,25,27,7,12,4,8,13,30,3,10,5,6,18,29,26,28,22,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,24,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,20,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,24,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,20,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,14,14,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,19,19,21,21,
};



#define RomanianUnicodeCharToOrderFirstTableChunkSize    195
#define RomanianUnicodeCharToOrderSecondTableChunkOffset 471
#define RomanianUnicodeCharToOrderSecondTableChunkSize   4


static const PRUint8 RomanianUnicodeCharToOrder2[] =
{
  19,19,21,21,
};

static const PRUint8 RomanianCompactedLangModel[] =
{
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,3,3,3,3,3,3,3,3,1,3,3,3,3,3,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,3,3,3,3,1,3,3,3,1,3,3,3,2,2,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,3,3,3,3,1,3,3,3,0,3,3,3,3,3,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,2,2,3,3,2,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,2,3,3,3,3,3,2,3,3,2,0,
  3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,2,3,1,2,1,3,3,3,1,1,2,3,3,0,
  3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,3,2,2,3,3,3,2,2,0,
  3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,2,3,2,2,3,2,1,3,3,2,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,3,3,3,3,1,3,3,3,0,3,3,3,3,3,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,2,2,2,3,2,2,3,2,3,3,2,1,3,3,2,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,0,2,3,3,3,3,1,1,3,3,3,0,
  3,3,3,3,3,2,3,3,3,2,3,3,3,2,3,3,2,3,3,0,1,0,2,2,3,3,1,1,3,3,0,
  3,3,3,2,3,2,3,2,3,2,3,2,3,3,3,2,3,2,3,1,2,2,1,2,3,1,1,1,3,3,0,
  3,3,3,3,2,3,3,3,3,2,3,2,2,3,3,2,2,2,1,2,2,3,1,3,3,2,0,1,2,2,0,
  1,3,1,3,3,3,3,3,1,3,3,3,3,3,0,0,3,3,3,3,1,3,3,1,0,2,0,0,0,0,0,
  3,3,3,3,1,3,3,3,3,2,2,2,2,1,3,3,2,2,0,0,1,0,1,1,3,1,1,1,2,1,0,
  3,3,3,3,3,2,3,3,3,2,3,2,3,1,3,0,3,1,2,1,1,3,1,2,2,2,0,1,3,1,0,
  3,3,3,3,3,3,3,3,3,2,3,2,3,2,3,2,2,3,2,1,1,0,1,3,3,1,1,1,3,2,0,
  3,3,3,3,2,1,3,3,3,2,2,2,1,1,3,1,1,2,1,0,2,1,1,1,3,1,1,2,2,0,0,
  3,3,3,0,2,3,3,2,3,3,0,1,2,1,2,1,1,0,1,0,1,0,0,0,1,0,0,1,0,1,0,
  1,3,0,2,3,2,1,3,1,1,1,1,3,1,0,0,1,0,1,3,1,1,1,1,0,1,0,2,1,0,0,
  3,3,3,0,0,1,3,1,2,1,1,0,0,0,3,0,0,0,1,0,2,0,0,1,2,0,0,1,0,0,0,
  3,3,3,1,2,2,3,2,3,1,2,3,2,2,3,1,3,2,3,0,1,0,3,2,3,0,1,2,2,1,0,
  3,3,3,3,3,3,3,3,3,1,2,2,3,2,2,2,2,2,2,0,1,0,2,1,2,1,0,1,3,2,0,
  0,3,0,3,3,3,3,3,0,1,2,1,3,1,0,1,1,1,1,3,0,2,1,0,0,0,0,0,0,0,0,
  3,3,3,2,2,1,3,3,3,1,2,2,2,2,2,1,2,1,1,0,1,0,0,1,1,1,0,1,1,0,0,
  3,3,3,1,0,3,3,1,3,3,1,1,1,3,2,2,1,1,3,0,0,0,0,1,1,1,3,0,2,1,0,
  3,3,3,3,2,2,3,3,3,1,3,1,3,1,1,2,2,2,2,1,2,0,1,3,1,1,0,2,3,2,0,
  3,2,3,3,3,3,2,3,3,3,3,2,2,3,0,2,3,2,2,0,0,0,2,2,0,1,1,2,2,2,0,
  3,3,3,2,3,2,2,2,3,1,3,1,1,1,0,1,1,1,0,0,0,0,0,3,0,1,1,2,2,3,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
};


const SequenceModel Iso_8859_2RomanianModel =
{
  Iso_8859_2_CharToOrderMap,
  RomanianCompactedLangModel,
  RomanianOrderWidth,
  0.9990023278011444f,
  PR_TRUE,
  "ISO-8859-2",
  "ro"
};

const SequenceModel Iso_8859_16RomanianModel =
{
  Iso_8859_16_CharToOrderMap,
  RomanianCompactedLangModel,
  RomanianOrderWidth,
  0.9990023278011444f,
  PR_TRUE,
  "ISO-8859-16",
  "ro"
};

const SequenceModel Windows_1250RomanianModel =
{
  Windows_1250_CharToOrderMap,
  RomanianCompactedLangModel,
  RomanianOrderWidth,
  0.9990023278011444f,
  PR_TRUE,
  "WINDOWS-1250",
  "ro"
};

const SequenceModel Ibm852RomanianModel =
{
  Ibm852_CharToOrderMap,
  RomanianCompactedLangModel,
  RomanianOrderWidth,
  0.9990023278011444f,
  PR_TRUE,
  "IBM852",
  "ro"
};

const LanguageModel RomanianModel =
{
  "ro",
  Unicode_CharOrder,
  Unicode_Char_size,

  RomanianFCMLowerBound,
  RomanianFCMUpperBound,
  RomanianUnicodeCharToOrderIsReduced,
  RomanianUnicodeCharToOrder,
  RomanianUnicodeCharToOrderFirstTableChunkSize,
  RomanianUnicodeCharToOrderSecondTableChunkOffset,
  RomanianUnicodeCharToOrderSecondTableChunkSize,
  RomanianUnicodeCharToOrder2,
  OrderToRatio,
  RomanianCompactedLangModel,
  RomanianOrderWidth,
  4,
  0.4008664149508046f,
  21,
  0.030185316531144323f,
  0.9991005479550088f,
};
