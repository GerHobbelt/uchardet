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

/********* Language model for: Swedish *********/

/**
 * Generated by BuildLangModel.py
 * On: 2023-07-08 17:16:15.900324
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


static const unsigned char Iso_8859_1_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  1, 19, 18,  9,  0, 16, 12, 15,  6, 24, 11,  7, 10,  2,  8, /* 4X */
   17, 29,  3,  5,  4, 14, 13, 25, 26, 23, 27,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  1, 19, 18,  9,  0, 16, 12, 15,  6, 24, 11,  7, 10,  2,  8, /* 6X */
   17, 29,  3,  5,  4, 14, 13, 25, 26, 23, 27,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM,IRR,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
  IRR,IRR,IRR,IRR, 20, 21,IRR,IRR,IRR, 28,IRR,IRR,IRR,IRR,IRR,IRR, /* CX */
  IRR,IRR,IRR,IRR,IRR,IRR, 22,SYM,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, /* DX */
  IRR,IRR,IRR,IRR, 20, 21,IRR,IRR,IRR, 28,IRR,IRR,IRR,IRR,IRR,IRR, /* EX */
  IRR,IRR,IRR,IRR,IRR,IRR, 22,SYM,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_4_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  1, 19, 18,  9,  0, 16, 12, 15,  6, 24, 11,  7, 10,  2,  8, /* 4X */
   17, 29,  3,  5,  4, 14, 13, 25, 26, 23, 27,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  1, 19, 18,  9,  0, 16, 12, 15,  6, 24, 11,  7, 10,  2,  8, /* 6X */
   17, 29,  3,  5,  4, 14, 13, 25, 26, 23, 27,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,IRR,IRR,IRR,SYM,IRR,IRR,SYM,SYM,IRR,IRR,IRR,IRR,SYM,IRR,SYM, /* AX */
  SYM,IRR,SYM,IRR,SYM,IRR,IRR,SYM,SYM,IRR,IRR,IRR,IRR,IRR,IRR,IRR, /* BX */
  IRR,IRR,IRR,IRR, 20, 21,IRR,IRR,IRR, 28,IRR,IRR,IRR,IRR,IRR,IRR, /* CX */
  IRR,IRR,IRR,IRR,IRR,IRR, 22,SYM,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, /* DX */
  IRR,IRR,IRR,IRR, 20, 21,IRR,IRR,IRR, 28,IRR,IRR,IRR,IRR,IRR,IRR, /* EX */
  IRR,IRR,IRR,IRR,IRR,IRR, 22,SYM,IRR,IRR,IRR,IRR,IRR,IRR,IRR,SYM, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_9_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  1, 19, 18,  9,  0, 16, 12, 15,  6, 24, 11,  7, 10,  2,  8, /* 4X */
   17, 29,  3,  5,  4, 14, 13, 25, 26, 23, 27,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  1, 19, 18,  9,  0, 16, 12, 15,  6, 24, 11,  7, 10,  2,  8, /* 6X */
   17, 29,  3,  5,  4, 14, 13, 25, 26, 23, 27,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM,IRR,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
  IRR,IRR,IRR,IRR, 20, 21,IRR,IRR,IRR, 28,IRR,IRR,IRR,IRR,IRR,IRR, /* CX */
  IRR,IRR,IRR,IRR,IRR,IRR, 22,SYM,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, /* DX */
  IRR,IRR,IRR,IRR, 20, 21,IRR,IRR,IRR, 28,IRR,IRR,IRR,IRR,IRR,IRR, /* EX */
  IRR,IRR,IRR,IRR,IRR,IRR, 22,SYM,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_15_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  1, 19, 18,  9,  0, 16, 12, 15,  6, 24, 11,  7, 10,  2,  8, /* 4X */
   17, 29,  3,  5,  4, 14, 13, 25, 26, 23, 27,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  1, 19, 18,  9,  0, 16, 12, 15,  6, 24, 11,  7, 10,  2,  8, /* 6X */
   17, 29,  3,  5,  4, 14, 13, 25, 26, 23, 27,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,IRR,SYM,IRR,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,IRR,IRR,SYM,SYM,IRR,SYM,SYM,SYM,IRR,IRR,IRR,SYM, /* BX */
  IRR,IRR,IRR,IRR, 20, 21,IRR,IRR,IRR, 28,IRR,IRR,IRR,IRR,IRR,IRR, /* CX */
  IRR,IRR,IRR,IRR,IRR,IRR, 22,SYM,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, /* DX */
  IRR,IRR,IRR,IRR, 20, 21,IRR,IRR,IRR, 28,IRR,IRR,IRR,IRR,IRR,IRR, /* EX */
  IRR,IRR,IRR,IRR,IRR,IRR, 22,SYM,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Windows_1252_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  1, 19, 18,  9,  0, 16, 12, 15,  6, 24, 11,  7, 10,  2,  8, /* 4X */
   17, 29,  3,  5,  4, 14, 13, 25, 26, 23, 27,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  1, 19, 18,  9,  0, 16, 12, 15,  6, 24, 11,  7, 10,  2,  8, /* 6X */
   17, 29,  3,  5,  4, 14, 13, 25, 26, 23, 27,SYM,SYM,SYM,SYM,CTR, /* 7X */
  SYM,ILL,SYM,IRR,SYM,SYM,SYM,SYM,SYM,SYM,IRR,SYM,IRR,ILL,IRR,ILL, /* 8X */
  ILL,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,IRR,SYM,IRR,ILL,IRR,IRR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM,IRR,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
  IRR,IRR,IRR,IRR, 20, 21,IRR,IRR,IRR, 28,IRR,IRR,IRR,IRR,IRR,IRR, /* CX */
  IRR,IRR,IRR,IRR,IRR,IRR, 22,SYM,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, /* DX */
  IRR,IRR,IRR,IRR, 20, 21,IRR,IRR,IRR, 28,IRR,IRR,IRR,IRR,IRR,IRR, /* EX */
  IRR,IRR,IRR,IRR,IRR,IRR, 22,SYM,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

#define Unicode_Char_size    60

static const PRUint32 Unicode_CharOrder[] =
{
   65,  1,  66, 19,  67, 18,  68,  9,  69,  0,  70, 16,  71, 12,  72, 15,
   73,  6,  74, 24,  75, 11,  76,  7,  77, 10,  78,  2,  79,  8,  80, 17,
   81, 29,  82,  3,  83,  5,  84,  4,  85, 14,  86, 13,  87, 25,  88, 26,
   89, 23,  90, 27,  97,  1,  98, 19,  99, 18, 100,  9, 101,  0, 102, 16,
  103, 12, 104, 15, 105,  6, 106, 24, 107, 11, 108,  7, 109, 10, 110,  2,
  111,  8, 112, 17, 113, 29, 114,  3, 115,  5, 116,  4, 117, 14, 118, 13,
  119, 25, 120, 26, 121, 23, 122, 27, 196, 20, 197, 21, 201, 28, 214, 22,
  228, 20, 229, 21, 233, 28, 246, 22,
};

static const float OrderToRatio[] =
{
  0.104394862f,  0.093121778f,  0.084224636f,  0.083888863f,  0.075555315f,  0.065550680f,  0.061034153f,  0.053218488f, 
  0.048652846f,  0.044967364f,  0.034259575f,  0.029550239f,  0.027487944f,  0.022543980f,  0.021410715f,  0.020648478f, 
  0.019439597f,  0.018842450f,  0.017024266f,  0.015386733f,  0.015196356f,  0.011865854f,  0.011568497f,  0.007486213f, 
  0.005952013f,  0.002425300f,  0.001678380f,  0.000923924f,  0.000787037f,  0.000291522f, 
  0
};


/* Model Table:
 * Number of web pages processed for this model: 1386
 * Number of characters consumed for this model: 4112894
 * Total considered sequences: 1438 / 900
 *
 * - Positive sequences: first 535 (0.9950446309034944)
 * - Probable sequences: next 208 (743-535) (0.00395629796903918)
 * - Neutral sequences: last 157 (0.0009990711274664443)
 * - Negative sequences: -538 (off-ratio, TODO)
 */


#define SwedishUnicodeAlphabetWidth         60
#define SwedishUnicodeCharToOrderIsReduced  0


#define SwedishOrderMatrixWidth         (IRR + 1)


#define SwedishFCMLowerBound  65
#define SwedishFCMUpperBound  246


static const PRUint8 SwedishUnicodeCharToOrder[] =
{
  1,19,18,9,0,16,12,15,6,24,11,7,10,2,8,17,29,3,5,4,
  14,13,25,26,23,27,IRR,IRR,IRR,IRR,IRR,IRR,1,19,18,9,0,16,12,15,
  6,24,11,7,10,2,8,17,29,3,5,4,14,13,25,26,23,27,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,20,21,IRR,IRR,IRR,28,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,22,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,20,21,IRR,IRR,IRR,28,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,22,
};

static const PRUint8 SwedishCompactedLangModel[] =
{
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,2,3,3,3,3,3,1,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,2,1,3,3,3,3,3,1,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,3,3,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,3,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,3,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,2,2,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,2,2,3,2,3,3,2,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,1,2,3,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,1,1,3,3,3,3,2,1,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,1,2,3,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,1,1,1,3,0,
  3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,2,2,3,3,3,3,3,2,2,1,1,1,0,
  3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,2,3,3,3,3,3,3,2,1,1,2,0,
  3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,2,2,1,3,3,3,2,2,3,0,0,1,1,0,
  3,3,3,3,3,3,3,3,2,3,3,3,3,3,2,2,3,3,3,3,0,1,2,2,2,2,3,2,2,0,
  3,3,3,3,3,3,3,3,3,2,3,2,1,2,3,1,2,2,1,2,3,3,3,3,3,2,0,1,2,0,
  3,3,2,3,3,3,3,3,3,1,2,2,2,2,3,1,3,2,3,2,3,3,3,3,3,2,1,1,2,0,
  3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,2,2,2,3,2,2,2,1,1,1,2,0,
  3,3,2,3,3,3,3,3,3,2,2,3,2,1,3,3,2,1,3,2,0,0,0,3,1,1,1,1,2,0,
  3,3,3,3,3,3,3,3,3,2,2,2,1,1,3,2,2,3,2,3,3,3,3,3,3,1,1,1,2,0,
  1,1,3,3,3,3,1,3,1,3,3,3,3,3,1,1,3,3,3,2,1,0,0,0,1,0,3,1,0,0,
  3,2,3,3,3,3,1,3,1,3,2,3,3,3,1,2,2,2,1,3,0,1,1,0,1,0,0,0,0,0,
  2,3,3,3,3,3,1,3,1,3,3,3,3,3,1,2,2,3,2,2,0,1,1,1,3,1,0,1,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,3,3,3,3,3,1,1,2,1,1,2,2,2,1,0,
  3,3,2,2,2,3,3,3,3,3,1,2,1,0,3,1,1,1,1,1,3,1,3,1,1,1,1,0,2,0,
  3,3,3,3,2,3,3,2,3,1,1,1,1,1,2,3,2,1,1,2,1,1,1,2,1,3,1,1,1,0,
  3,3,2,1,3,2,3,2,2,1,1,2,1,2,2,2,2,3,2,1,1,1,0,2,1,1,2,0,1,0,
  3,3,1,1,2,1,3,1,3,1,2,1,1,1,2,2,1,1,1,1,0,0,1,2,2,1,1,3,1,0,
  3,3,3,3,2,3,1,2,2,2,2,1,2,2,2,1,2,2,2,2,0,1,0,0,1,0,1,1,1,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
};


const SequenceModel Iso_8859_1SwedishModel =
{
  Iso_8859_1_CharToOrderMap,
  SwedishCompactedLangModel,
  30,
  0.9990009288725336f,
  PR_TRUE,
  "ISO-8859-1",
  "sv"
};

const SequenceModel Iso_8859_4SwedishModel =
{
  Iso_8859_4_CharToOrderMap,
  SwedishCompactedLangModel,
  30,
  0.9990009288725336f,
  PR_TRUE,
  "ISO-8859-4",
  "sv"
};

const SequenceModel Iso_8859_9SwedishModel =
{
  Iso_8859_9_CharToOrderMap,
  SwedishCompactedLangModel,
  30,
  0.9990009288725336f,
  PR_TRUE,
  "ISO-8859-9",
  "sv"
};

const SequenceModel Iso_8859_15SwedishModel =
{
  Iso_8859_15_CharToOrderMap,
  SwedishCompactedLangModel,
  30,
  0.9990009288725336f,
  PR_TRUE,
  "ISO-8859-15",
  "sv"
};

const SequenceModel Windows_1252SwedishModel =
{
  Windows_1252_CharToOrderMap,
  SwedishCompactedLangModel,
  30,
  0.9990009288725336f,
  PR_TRUE,
  "WINDOWS-1252",
  "sv"
};

const LanguageModel SwedishModel =
{
  "sv",
  Unicode_CharOrder,
  Unicode_Char_size,

  SwedishFCMLowerBound,
  SwedishFCMUpperBound,
  SwedishUnicodeAlphabetWidth,
  SwedishUnicodeCharToOrderIsReduced,
  SwedishOrderMatrixWidth,
  SwedishUnicodeCharToOrder,
  OrderToRatio,
  SwedishCompactedLangModel,
  30,
  5,
  0.4411854523846226f,
  21,
  0.03111288547674703f,
  0.9993780535068495f,
};
