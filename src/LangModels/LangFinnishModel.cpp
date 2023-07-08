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

/********* Language model for: Finnish *********/

/**
 * Generated by BuildLangModel.py
 * On: 2023-07-08 20:53:29.873558
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



#define IRR     29

#define FinnishOrderWidth         (IRR + 1)


static const unsigned char Iso_8859_1_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 21, 20, 18,  4, 23, 19, 15,  1, 14,  9,  6, 11,  2,  7, /* 4X */
   16, 28, 10,  5,  3,  8, 13, 24, 26, 17, 25,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 21, 20, 18,  4, 23, 19, 15,  1, 14,  9,  6, 11,  2,  7, /* 6X */
   16, 28, 10,  5,  3,  8, 13, 24, 26, 17, 25,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM,IRR,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
  IRR,IRR,IRR,IRR, 12,IRR,IRR,IRR,IRR, 27,IRR,IRR,IRR,IRR,IRR,IRR, /* CX */
  IRR,IRR,IRR,IRR,IRR,IRR, 22,SYM,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, /* DX */
  IRR,IRR,IRR,IRR, 12,IRR,IRR,IRR,IRR, 27,IRR,IRR,IRR,IRR,IRR,IRR, /* EX */
  IRR,IRR,IRR,IRR,IRR,IRR, 22,SYM,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_4_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 21, 20, 18,  4, 23, 19, 15,  1, 14,  9,  6, 11,  2,  7, /* 4X */
   16, 28, 10,  5,  3,  8, 13, 24, 26, 17, 25,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 21, 20, 18,  4, 23, 19, 15,  1, 14,  9,  6, 11,  2,  7, /* 6X */
   16, 28, 10,  5,  3,  8, 13, 24, 26, 17, 25,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,IRR,IRR,IRR,SYM,IRR,IRR,SYM,SYM,IRR,IRR,IRR,IRR,SYM,IRR,SYM, /* AX */
  SYM,IRR,SYM,IRR,SYM,IRR,IRR,SYM,SYM,IRR,IRR,IRR,IRR,IRR,IRR,IRR, /* BX */
  IRR,IRR,IRR,IRR, 12,IRR,IRR,IRR,IRR, 27,IRR,IRR,IRR,IRR,IRR,IRR, /* CX */
  IRR,IRR,IRR,IRR,IRR,IRR, 22,SYM,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, /* DX */
  IRR,IRR,IRR,IRR, 12,IRR,IRR,IRR,IRR, 27,IRR,IRR,IRR,IRR,IRR,IRR, /* EX */
  IRR,IRR,IRR,IRR,IRR,IRR, 22,SYM,IRR,IRR,IRR,IRR,IRR,IRR,IRR,SYM, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_9_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 21, 20, 18,  4, 23, 19, 15,  1, 14,  9,  6, 11,  2,  7, /* 4X */
   16, 28, 10,  5,  3,  8, 13, 24, 26, 17, 25,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 21, 20, 18,  4, 23, 19, 15,  1, 14,  9,  6, 11,  2,  7, /* 6X */
   16, 28, 10,  5,  3,  8, 13, 24, 26, 17, 25,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM,IRR,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
  IRR,IRR,IRR,IRR, 12,IRR,IRR,IRR,IRR, 27,IRR,IRR,IRR,IRR,IRR,IRR, /* CX */
  IRR,IRR,IRR,IRR,IRR,IRR, 22,SYM,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, /* DX */
  IRR,IRR,IRR,IRR, 12,IRR,IRR,IRR,IRR, 27,IRR,IRR,IRR,IRR,IRR,IRR, /* EX */
  IRR,IRR,IRR,IRR,IRR,IRR, 22,SYM,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_13_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 21, 20, 18,  4, 23, 19, 15,  1, 14,  9,  6, 11,  2,  7, /* 4X */
   16, 28, 10,  5,  3,  8, 13, 24, 26, 17, 25,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 21, 20, 18,  4, 23, 19, 15,  1, 14,  9,  6, 11,  2,  7, /* 6X */
   16, 28, 10,  5,  3,  8, 13, 24, 26, 17, 25,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,IRR,SYM,IRR,SYM,SYM,SYM,SYM,IRR, /* AX */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,IRR,SYM,IRR,SYM,SYM,SYM,SYM,IRR, /* BX */
  IRR,IRR,IRR,IRR, 12,IRR,IRR,IRR,IRR, 27,IRR,IRR,IRR,IRR,IRR,IRR, /* CX */
  IRR,IRR,IRR,IRR,IRR,IRR, 22,SYM,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, /* DX */
  IRR,IRR,IRR,IRR, 12,IRR,IRR,IRR,IRR, 27,IRR,IRR,IRR,IRR,IRR,IRR, /* EX */
  IRR,IRR,IRR,IRR,IRR,IRR, 22,SYM,IRR,IRR,IRR,IRR,IRR,IRR,IRR,SYM, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_15_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 21, 20, 18,  4, 23, 19, 15,  1, 14,  9,  6, 11,  2,  7, /* 4X */
   16, 28, 10,  5,  3,  8, 13, 24, 26, 17, 25,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 21, 20, 18,  4, 23, 19, 15,  1, 14,  9,  6, 11,  2,  7, /* 6X */
   16, 28, 10,  5,  3,  8, 13, 24, 26, 17, 25,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,IRR,SYM,IRR,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,IRR,IRR,SYM,SYM,IRR,SYM,SYM,SYM,IRR,IRR,IRR,SYM, /* BX */
  IRR,IRR,IRR,IRR, 12,IRR,IRR,IRR,IRR, 27,IRR,IRR,IRR,IRR,IRR,IRR, /* CX */
  IRR,IRR,IRR,IRR,IRR,IRR, 22,SYM,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, /* DX */
  IRR,IRR,IRR,IRR, 12,IRR,IRR,IRR,IRR, 27,IRR,IRR,IRR,IRR,IRR,IRR, /* EX */
  IRR,IRR,IRR,IRR,IRR,IRR, 22,SYM,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Windows_1252_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 21, 20, 18,  4, 23, 19, 15,  1, 14,  9,  6, 11,  2,  7, /* 4X */
   16, 28, 10,  5,  3,  8, 13, 24, 26, 17, 25,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 21, 20, 18,  4, 23, 19, 15,  1, 14,  9,  6, 11,  2,  7, /* 6X */
   16, 28, 10,  5,  3,  8, 13, 24, 26, 17, 25,SYM,SYM,SYM,SYM,CTR, /* 7X */
  SYM,ILL,SYM,IRR,SYM,SYM,SYM,SYM,SYM,SYM,IRR,SYM,IRR,ILL,IRR,ILL, /* 8X */
  ILL,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,IRR,SYM,IRR,ILL,IRR,IRR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM,IRR,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
  IRR,IRR,IRR,IRR, 12,IRR,IRR,IRR,IRR, 27,IRR,IRR,IRR,IRR,IRR,IRR, /* CX */
  IRR,IRR,IRR,IRR,IRR,IRR, 22,SYM,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, /* DX */
  IRR,IRR,IRR,IRR, 12,IRR,IRR,IRR,IRR, 27,IRR,IRR,IRR,IRR,IRR,IRR, /* EX */
  IRR,IRR,IRR,IRR,IRR,IRR, 22,SYM,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

#define Unicode_Char_size    58

static const PRUint32 Unicode_CharOrder[] =
{
   65,  0,  66, 21,  67, 20,  68, 18,  69,  4,  70, 23,  71, 19,  72, 15,
   73,  1,  74, 14,  75,  9,  76,  6,  77, 11,  78,  2,  79,  7,  80, 16,
   81, 28,  82, 10,  83,  5,  84,  3,  85,  8,  86, 13,  87, 24,  88, 26,
   89, 17,  90, 25,  97,  0,  98, 21,  99, 20, 100, 18, 101,  4, 102, 23,
  103, 19, 104, 15, 105,  1, 106, 14, 107,  9, 108,  6, 109, 11, 110,  2,
  111,  7, 112, 16, 113, 28, 114, 10, 115,  5, 116,  3, 117,  8, 118, 13,
  119, 24, 120, 26, 121, 17, 122, 25, 196, 12, 201, 27, 214, 22, 228, 12,
  233, 27, 246, 22,
};

static const float OrderToRatio[] =
{
  0.120885407f,  0.106393325f,  0.086229213f,  0.084926769f,  0.081535610f,  0.076523626f,  0.059019059f,  0.056241377f, 
  0.050481848f,  0.047580147f,  0.032070178f,  0.031328760f,  0.030949351f,  0.021998171f,  0.020489355f,  0.019609458f, 
  0.018478091f,  0.016482513f,  0.012193074f,  0.005564922f,  0.005028405f,  0.004715907f,  0.003932088f,  0.003190670f, 
  0.001784305f,  0.000669114f,  0.000476958f,  0.000220342f,  0.000165685f, 
  0
};


/* Model Table:
 * Number of web pages processed for this model: 1244
 * Number of characters consumed for this model: 4080021
 * Total considered sequences: 1536 / 841
 *
 * - Positive sequences: first 447 (0.9950232626824478)
 * - Probable sequences: next 267 (714-447) (0.003977259546809164)
 * - Neutral sequences: last 127 (0.0009994777707430513)
 * - Negative sequences: -695 (off-ratio, TODO)
 */
#define FinnishUnicodeCharToOrderIsReduced  0


#define FinnishFCMLowerBound  65
#define FinnishFCMUpperBound  246


static const PRUint8 FinnishUnicodeCharToOrder[] =
{
  0,21,20,18,4,23,19,15,1,14,9,6,11,2,7,16,28,10,5,3,
  8,13,24,26,17,25,IRR,IRR,IRR,IRR,IRR,IRR,0,21,20,18,4,23,19,15,
  1,14,9,6,11,2,7,16,28,10,5,3,8,13,24,26,17,25,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,12,IRR,IRR,IRR,IRR,27,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,22,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,12,IRR,IRR,IRR,IRR,27,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,22,
};



#define FinnishUnicodeCharToOrderFirstTableChunkSize    58
#define FinnishUnicodeCharToOrderSecondTableChunkOffset 131
#define FinnishUnicodeCharToOrderSecondTableChunkSize   51


static const PRUint8 FinnishUnicodeCharToOrder2[] =
{
  12,IRR,IRR,IRR,IRR,27,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,22,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,12,IRR,IRR,IRR,IRR,27,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,22,
};

static const PRUint8 FinnishCompactedLangModel[] =
{
  3,3,3,3,3,3,3,3,3,3,3,3,1,3,3,3,3,3,3,3,3,3,1,3,3,3,3,1,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,1,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,1,2,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,2,3,3,2,3,2,3,3,1,2,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,3,3,3,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,2,3,2,1,2,0,
  3,3,2,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,2,3,3,3,2,2,1,2,0,
  3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,1,3,3,3,3,1,0,
  3,3,3,3,3,3,3,3,3,3,3,3,1,3,3,3,3,2,3,3,3,3,1,2,2,2,3,1,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,3,2,3,2,2,1,2,3,2,2,1,0,2,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,2,0,
  3,3,2,2,3,3,2,3,3,2,2,3,3,2,2,2,3,3,2,2,3,3,2,2,2,1,1,2,0,
  3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,1,1,1,1,1,1,0,1,0,0,
  3,3,2,2,3,3,2,3,3,2,2,2,3,1,2,2,2,3,2,2,1,1,2,1,0,0,1,1,0,
  3,3,2,1,3,2,1,3,3,2,2,1,3,1,1,1,1,3,1,1,1,0,3,1,0,1,0,1,0,
  3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,1,2,3,3,1,2,2,2,2,2,2,1,2,0,
  3,3,2,3,3,3,3,3,3,2,3,2,3,1,2,3,3,3,2,1,2,2,3,2,1,1,1,2,0,
  3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,2,3,2,3,2,2,2,1,1,0,
  3,3,3,2,3,3,3,3,3,1,3,2,3,3,2,2,2,3,3,3,2,2,2,2,3,2,1,2,0,
  3,3,3,2,3,3,3,3,3,2,3,2,1,1,1,3,2,3,2,3,1,2,2,2,2,1,1,2,0,
  3,3,2,3,3,3,3,3,3,3,3,2,0,1,1,3,2,3,2,2,3,2,1,1,1,2,1,2,0,
  3,3,3,2,3,3,3,3,3,2,3,2,2,1,2,2,0,3,2,1,2,3,1,1,2,0,1,2,0,
  3,3,3,3,2,3,3,2,1,3,3,3,3,3,3,3,3,3,2,2,2,1,3,1,1,1,1,0,0,
  3,3,3,3,3,2,3,3,3,2,3,2,2,2,2,1,1,3,1,2,2,2,2,3,1,1,1,1,0,
  3,3,3,2,3,3,2,3,1,2,2,1,1,0,0,3,1,2,2,1,2,2,1,2,2,0,0,0,0,
  3,3,2,1,3,1,1,3,2,1,1,2,0,1,2,2,1,2,1,1,1,2,1,1,1,2,1,1,0,
  3,3,1,2,2,1,2,2,1,1,1,2,0,1,1,1,2,1,0,0,1,2,0,2,1,1,2,1,0,
  2,1,2,2,2,2,2,2,1,1,2,2,0,2,1,1,2,0,2,1,2,1,0,1,0,1,1,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
};


const SequenceModel Iso_8859_1FinnishModel =
{
  Iso_8859_1_CharToOrderMap,
  FinnishCompactedLangModel,
  FinnishOrderWidth,
  0.999000522229257f,
  PR_TRUE,
  "ISO-8859-1",
  "fi"
};

const SequenceModel Iso_8859_4FinnishModel =
{
  Iso_8859_4_CharToOrderMap,
  FinnishCompactedLangModel,
  FinnishOrderWidth,
  0.999000522229257f,
  PR_TRUE,
  "ISO-8859-4",
  "fi"
};

const SequenceModel Iso_8859_9FinnishModel =
{
  Iso_8859_9_CharToOrderMap,
  FinnishCompactedLangModel,
  FinnishOrderWidth,
  0.999000522229257f,
  PR_TRUE,
  "ISO-8859-9",
  "fi"
};

const SequenceModel Iso_8859_13FinnishModel =
{
  Iso_8859_13_CharToOrderMap,
  FinnishCompactedLangModel,
  FinnishOrderWidth,
  0.999000522229257f,
  PR_TRUE,
  "ISO-8859-13",
  "fi"
};

const SequenceModel Iso_8859_15FinnishModel =
{
  Iso_8859_15_CharToOrderMap,
  FinnishCompactedLangModel,
  FinnishOrderWidth,
  0.999000522229257f,
  PR_TRUE,
  "ISO-8859-15",
  "fi"
};

const SequenceModel Windows_1252FinnishModel =
{
  Windows_1252_CharToOrderMap,
  FinnishCompactedLangModel,
  FinnishOrderWidth,
  0.999000522229257f,
  PR_TRUE,
  "WINDOWS-1252",
  "fi"
};

const LanguageModel FinnishModel =
{
  "fi",
  Unicode_CharOrder,
  Unicode_Char_size,

  FinnishFCMLowerBound,
  FinnishFCMUpperBound,
  FinnishUnicodeCharToOrderIsReduced,
  FinnishUnicodeCharToOrder,
  FinnishUnicodeCharToOrderFirstTableChunkSize,
  FinnishUnicodeCharToOrderSecondTableChunkOffset,
  FinnishUnicodeCharToOrderSecondTableChunkSize,
  FinnishUnicodeCharToOrder2,
  OrderToRatio,
  FinnishCompactedLangModel,
  FinnishOrderWidth,
  5,
  0.47997032368215753f,
  17,
  0.037941471379681624f,
  0.9991637297945279f,
};
