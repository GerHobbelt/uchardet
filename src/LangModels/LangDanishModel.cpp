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

/********* Language model for: Danish *********/

/**
 * Generated by BuildLangModel.py
 * On: 2023-07-08 23:28:26.211121
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

#define DanishOrderWidth        30


static const unsigned char Iso_8859_15_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  4, 16, 19,  7,  0, 13, 10, 17,  5, 24, 12,  9, 11,  2,  8, /* 4X */
   18, 29,  1,  6,  3, 15, 14, 25, 27, 20, 26,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  4, 16, 19,  7,  0, 13, 10, 17,  5, 24, 12,  9, 11,  2,  8, /* 6X */
   18, 29,  1,  6,  3, 15, 14, 25, 27, 20, 26,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,249,SYM,249,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,249,249,SYM,SYM,249,SYM,SYM,SYM,249,249,249,SYM, /* BX */
  249,249,249,249,249, 21, 23,249,249, 28,249,249,249,249,249,249, /* CX */
  249,249,249,249,249,249,249,SYM, 22,249,249,249,249,249,249,249, /* DX */
  249,249,249,249,249, 21, 23,249,249, 28,249,249,249,249,249,249, /* EX */
  249,249,249,249,249,249,249,SYM, 22,249,249,249,249,249,249,249, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_1_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  4, 16, 19,  7,  0, 13, 10, 17,  5, 24, 12,  9, 11,  2,  8, /* 4X */
   18, 29,  1,  6,  3, 15, 14, 25, 27, 20, 26,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  4, 16, 19,  7,  0, 13, 10, 17,  5, 24, 12,  9, 11,  2,  8, /* 6X */
   18, 29,  1,  6,  3, 15, 14, 25, 27, 20, 26,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM,249,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
  249,249,249,249,249, 21, 23,249,249, 28,249,249,249,249,249,249, /* CX */
  249,249,249,249,249,249,249,SYM, 22,249,249,249,249,249,249,249, /* DX */
  249,249,249,249,249, 21, 23,249,249, 28,249,249,249,249,249,249, /* EX */
  249,249,249,249,249,249,249,SYM, 22,249,249,249,249,249,249,249, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Windows_1252_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  4, 16, 19,  7,  0, 13, 10, 17,  5, 24, 12,  9, 11,  2,  8, /* 4X */
   18, 29,  1,  6,  3, 15, 14, 25, 27, 20, 26,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  4, 16, 19,  7,  0, 13, 10, 17,  5, 24, 12,  9, 11,  2,  8, /* 6X */
   18, 29,  1,  6,  3, 15, 14, 25, 27, 20, 26,SYM,SYM,SYM,SYM,CTR, /* 7X */
  SYM,ILL,SYM,249,SYM,SYM,SYM,SYM,SYM,SYM,249,SYM,249,ILL,249,ILL, /* 8X */
  ILL,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,249,SYM,249,ILL,249,249, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM,249,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
  249,249,249,249,249, 21, 23,249,249, 28,249,249,249,249,249,249, /* CX */
  249,249,249,249,249,249,249,SYM, 22,249,249,249,249,249,249,249, /* DX */
  249,249,249,249,249, 21, 23,249,249, 28,249,249,249,249,249,249, /* EX */
  249,249,249,249,249,249,249,SYM, 22,249,249,249,249,249,249,249, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Ibm865_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  4, 16, 19,  7,  0, 13, 10, 17,  5, 24, 12,  9, 11,  2,  8, /* 4X */
   18, 29,  1,  6,  3, 15, 14, 25, 27, 20, 26,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  4, 16, 19,  7,  0, 13, 10, 17,  5, 24, 12,  9, 11,  2,  8, /* 6X */
   18, 29,  1,  6,  3, 15, 14, 25, 27, 20, 26,SYM,SYM,SYM,SYM,CTR, /* 7X */
  249,249, 28,249,249,249, 21,249,249,249,249,249,249,249,249, 21, /* 8X */
   28, 23, 23,249,249,249,249,249,249,249,249, 22,SYM, 22,SYM,SYM, /* 9X */
  249,249,249,249,249,249,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* CX */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* DX */
  249,249,249,249,249,249,249,249,249,249,249,249,249,249,249,SYM, /* EX */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

#define Unicode_Char_size    60

static const PRUint32 Unicode_CharOrder[] =
{
   65,  4,  66, 16,  67, 19,  68,  7,  69,  0,  70, 13,  71, 10,  72, 17,
   73,  5,  74, 24,  75, 12,  76,  9,  77, 11,  78,  2,  79,  8,  80, 18,
   81, 29,  82,  1,  83,  6,  84,  3,  85, 15,  86, 14,  87, 25,  88, 27,
   89, 20,  90, 26,  97,  4,  98, 16,  99, 19, 100,  7, 101,  0, 102, 13,
  103, 10, 104, 17, 105,  5, 106, 24, 107, 12, 108,  9, 109, 11, 110,  2,
  111,  8, 112, 18, 113, 29, 114,  1, 115,  6, 116,  3, 117, 15, 118, 14,
  119, 25, 120, 27, 121, 20, 122, 26, 197, 21, 198, 23, 201, 28, 216, 22,
  229, 21, 230, 23, 233, 28, 248, 22,
};

static const float OrderToRatio[] =
{
  0.149628954f,  0.084300843f,  0.076127486f,  0.069979630f,  0.067006314f,  0.065258562f,  0.061380870f,  0.055800218f, 
  0.053038928f,  0.051024230f,  0.037058870f,  0.031995904f,  0.028537763f,  0.025451006f,  0.021906434f,  0.019681736f, 
  0.018115849f,  0.017668163f,  0.016775493f,  0.009830627f,  0.008941333f,  0.007014642f,  0.006472872f,  0.006410750f, 
  0.005453256f,  0.002918172f,  0.000833024f,  0.000508232f,  0.000270547f,  0.000243087f, 
  0    /* value slot for out-of-bounds index values; range: 0..freq_count(30) */
};


/* Model Table:
 * Number of web pages processed for this model: 854
 * Number of characters consumed for this model: 4442850
 * Total considered sequences: 1241 / 900
 *
 * - Positive sequences: first 505 (0.995007250261546)
 * - Probable sequences: next 164 (669-505) (0.003995804198125508)
 * - Neutral sequences: last 231 (0.0009969455403284755)
 * - Negative sequences: -341 (off-ratio, TODO)
 */
#define DanishUnicodeCharToOrderIsReduced  0


#define DanishFCMLowerBound  65
#define DanishFCMUpperBound  248


static const PRInt16 DanishUnicodeCharToOrder[] =
{
  4,16,19,7,0,13,10,17,5,24,12,9,11,2,8,18,29,1,6,3,
  15,14,25,27,20,26,IRR,IRR,IRR,IRR,IRR,IRR,4,16,19,7,0,13,10,17,
  5,24,12,9,11,2,8,18,29,1,6,3,15,14,25,27,20,26,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,21,23,IRR,IRR,28,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,22,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,21,23,IRR,IRR,28,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,22,
};



#define DanishUnicodeCharToOrderFirstTableChunkSize    58
#define DanishUnicodeCharToOrderSecondTableChunkOffset 132
#define DanishUnicodeCharToOrderSecondTableChunkSize   52


static const PRInt16 DanishUnicodeCharToOrder2[] =
{
  21,23,IRR,IRR,28,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,22,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,21,23,IRR,IRR,28,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,22,
};

static const PRUint8 DanishCompactedLangModel[] =
{
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,1,1,3,3,3,3,1,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,2,1,2,1,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,2,2,1,
  3,3,3,3,3,3,3,2,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,2,1,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,1,1,3,3,3,3,1,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,1,3,1,2,2,3,3,1,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,1,2,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,1,1,2,1,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,1,0,3,3,2,3,1,1,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,0,2,1,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,1,3,3,3,3,3,2,1,1,1,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,1,2,1,1,2,1,
  3,3,3,3,3,3,3,2,3,3,2,3,3,2,3,3,2,3,2,2,3,2,3,3,2,2,1,1,1,1,
  3,3,2,3,3,3,3,2,3,3,3,2,2,3,2,3,2,3,2,2,3,3,3,3,3,1,1,2,1,0,
  3,3,3,3,3,3,3,3,3,3,2,3,2,2,2,3,2,2,2,1,2,3,3,3,3,1,1,0,1,0,
  3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,2,3,3,3,3,2,1,1,1,2,2,2,2,1,1,
  3,3,3,3,3,3,3,2,3,3,1,2,2,2,1,3,3,2,2,2,3,3,3,2,3,1,1,1,1,0,
  3,3,3,3,3,3,2,2,3,3,1,3,2,2,3,3,2,2,2,2,3,3,3,3,3,2,1,1,1,0,
  3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,2,2,3,2,3,1,1,1,1,2,0,
  3,3,2,3,3,3,3,2,3,3,2,2,3,2,1,3,2,3,2,3,3,0,1,1,1,2,2,1,1,2,
  3,3,3,3,3,2,3,3,3,3,3,3,3,2,3,2,3,2,3,3,1,1,1,1,1,2,2,1,0,1,
  3,3,3,3,1,1,3,3,1,3,2,1,2,2,3,1,3,1,2,1,0,0,1,1,0,0,1,0,0,0,
  3,3,3,3,1,2,3,3,1,3,3,3,3,2,3,1,3,1,1,1,1,1,1,0,3,0,0,0,0,0,
  2,3,3,3,1,3,3,3,2,3,3,3,3,3,3,1,3,1,2,2,0,0,1,0,1,0,0,0,0,0,
  3,3,2,3,3,3,3,3,3,3,1,1,2,1,1,3,1,2,1,1,2,1,3,3,1,1,0,0,1,0,
  3,3,3,2,3,3,3,1,3,2,1,1,2,2,0,2,2,3,1,2,2,0,0,0,0,3,1,0,0,1,
  3,1,1,1,3,3,1,1,3,1,1,2,2,2,1,2,2,2,1,1,2,0,1,0,1,1,3,1,0,1,
  2,1,1,2,2,3,1,1,2,1,1,1,1,2,2,1,1,1,2,2,1,1,1,0,0,1,0,1,1,0,
  2,2,2,2,1,1,2,1,1,2,1,1,1,1,1,0,1,1,1,1,0,0,0,0,0,0,0,1,1,1,
  0,1,0,0,2,1,1,1,1,1,0,1,1,1,1,3,1,0,1,1,0,0,0,0,0,1,0,0,0,1,
};


const SequenceModel Iso_8859_15DanishModel =
{
  Iso_8859_15_CharToOrderMap,
  DanishCompactedLangModel,
  DanishOrderWidth,
  0.9990030544596715f,
  PR_TRUE,
  "ISO-8859-15",
  "da"
};

const SequenceModel Iso_8859_1DanishModel =
{
  Iso_8859_1_CharToOrderMap,
  DanishCompactedLangModel,
  DanishOrderWidth,
  0.9990030544596715f,
  PR_TRUE,
  "ISO-8859-1",
  "da"
};

const SequenceModel Windows_1252DanishModel =
{
  Windows_1252_CharToOrderMap,
  DanishCompactedLangModel,
  DanishOrderWidth,
  0.9990030544596715f,
  PR_TRUE,
  "WINDOWS-1252",
  "da"
};

const SequenceModel Ibm865DanishModel =
{
  Ibm865_CharToOrderMap,
  DanishCompactedLangModel,
  DanishOrderWidth,
  0.9990030544596715f,
  PR_TRUE,
  "IBM865",
  "da"
};

const LanguageModel DanishModel =
{
  "da",
  Unicode_CharOrder,
  Unicode_Char_size,

  DanishFCMLowerBound,
  DanishFCMUpperBound,
  DanishUnicodeCharToOrderIsReduced,
  DanishUnicodeCharToOrder,
  DanishUnicodeCharToOrderFirstTableChunkSize,
  DanishUnicodeCharToOrderSecondTableChunkOffset,
  DanishUnicodeCharToOrderSecondTableChunkSize,
  DanishUnicodeCharToOrder2,
  OrderToRatio,
  DanishCompactedLangModel,
  DanishOrderWidth,
  5,
  0.4470432267575993f,
  20,
  0.03012458219386205f,
  0.9996337936234623f,
};
