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

/********* Language model for: Latvian *********/

/**
 * Generated by BuildLangModel.py
 * On: 2023-07-08 19:10:34.011707
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



#define IRR     38

#define LatvianOrderWidth         (IRR + 1)


static const unsigned char Iso_8859_4_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 20, 22, 13,  3, 24, 17, 27,  1, 16, 10, 11, 12,  7,  8, /* 4X */
   14, 37,  5,  2,  4,  6, 15, 34, 35, 33, 19,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 20, 22, 13,  3, 24, 17, 27,  1, 16, 10, 11, 12,  7,  8, /* 6X */
   14, 37,  5,  2,  4,  6, 15, 34, 35, 33, 19,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,IRR,IRR,IRR,SYM,IRR, 26,SYM,SYM, 23, 21, 30,IRR,SYM, 29,SYM, /* AX */
  SYM,IRR,SYM,IRR,SYM,IRR, 26,SYM,SYM, 23, 21, 30,IRR,IRR, 29,IRR, /* BX */
    9,IRR,IRR,IRR,IRR,IRR, 36,IRR, 32,IRR,IRR,IRR,IRR,IRR,IRR, 18, /* CX */
  IRR, 25,IRR, 31,IRR,IRR,IRR,SYM,IRR,IRR,IRR,IRR,IRR,IRR, 28,IRR, /* DX */
    9,IRR,IRR,IRR,IRR,IRR, 36,IRR, 32,IRR,IRR,IRR,IRR,IRR,IRR, 18, /* EX */
  IRR, 25,IRR, 31,IRR,IRR,IRR,SYM,IRR,IRR,IRR,IRR,IRR,IRR, 28,SYM, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_10_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 20, 22, 13,  3, 24, 17, 27,  1, 16, 10, 11, 12,  7,  8, /* 4X */
   14, 37,  5,  2,  4,  6, 15, 34, 35, 33, 19,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 20, 22, 13,  3, 24, 17, 27,  1, 16, 10, 11, 12,  7,  8, /* 6X */
   14, 37,  5,  2,  4,  6, 15, 34, 35, 33, 19,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,IRR, 21, 30, 18,IRR, 31,SYM, 26,IRR, 23,IRR, 29,SYM, 28,IRR, /* AX */
  SYM,IRR, 21, 30, 18,IRR, 31,SYM, 26,IRR, 23,IRR, 29,IRR, 28,IRR, /* BX */
    9,IRR,IRR,IRR,IRR,IRR, 36,IRR, 32,IRR,IRR,IRR,IRR,IRR,IRR,IRR, /* CX */
  IRR, 25,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, /* DX */
    9,IRR,IRR,IRR,IRR,IRR, 36,IRR, 32,IRR,IRR,IRR,IRR,IRR,IRR,IRR, /* EX */
  IRR, 25,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_13_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 20, 22, 13,  3, 24, 17, 27,  1, 16, 10, 11, 12,  7,  8, /* 4X */
   14, 37,  5,  2,  4,  6, 15, 34, 35, 33, 19,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 20, 22, 13,  3, 24, 17, 27,  1, 16, 10, 11, 12,  7,  8, /* 6X */
   14, 37,  5,  2,  4,  6, 15, 34, 35, 33, 19,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,IRR,SYM,IRR,SYM,SYM,SYM,SYM, 36, /* AX */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,IRR,SYM,IRR,SYM,SYM,SYM,SYM, 36, /* BX */
  IRR,IRR,  9,IRR,IRR,IRR,IRR, 21, 32,IRR,IRR,IRR, 30, 31, 18, 26, /* CX */
   23,IRR, 25,IRR,IRR,IRR,IRR,SYM,IRR,IRR,IRR, 28,IRR,IRR, 29,IRR, /* DX */
  IRR,IRR,  9,IRR,IRR,IRR,IRR, 21, 32,IRR,IRR,IRR, 30, 31, 18, 26, /* EX */
   23,IRR, 25,IRR,IRR,IRR,IRR,SYM,IRR,IRR,IRR, 28,IRR,IRR, 29,SYM, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

#define Unicode_Char_size    76

static const PRUint32 Unicode_CharOrder[] =
{
   65,  0,  66, 20,  67, 22,  68, 13,  69,  3,  70, 24,  71, 17,  72, 27,
   73,  1,  74, 16,  75, 10,  76, 11,  77, 12,  78,  7,  79,  8,  80, 14,
   81, 37,  82,  5,  83,  2,  84,  4,  85,  6,  86, 15,  87, 34,  88, 35,
   89, 33,  90, 19,  97,  0,  98, 20,  99, 22, 100, 13, 101,  3, 102, 24,
  103, 17, 104, 27, 105,  1, 106, 16, 107, 10, 108, 11, 109, 12, 110,  7,
  111,  8, 112, 14, 113, 37, 114,  5, 115,  2, 116,  4, 117,  6, 118, 15,
  119, 34, 120, 35, 121, 33, 122, 19, 198, 36, 230, 36, 256,  9, 257,  9,
  268, 32, 269, 32, 274, 21, 275, 21, 290, 30, 291, 30, 298, 18, 299, 18,
  310, 31, 311, 31, 315, 26, 316, 26, 325, 25, 326, 25, 352, 23, 353, 23,
  362, 28, 363, 28, 381, 29, 382, 29,
};

static const float OrderToRatio[] =
{
  0.120270133f,  0.092039388f,  0.085101887f,  0.061957015f,  0.057917387f,  0.055835403f,  0.048490202f,  0.044880258f, 
  0.040310302f,  0.038308686f,  0.037898787f,  0.037142990f,  0.033588010f,  0.031296191f,  0.029577939f,  0.026630722f, 
  0.024243391f,  0.018063885f,  0.016728660f,  0.016484382f,  0.016435527f,  0.015877839f,  0.013606296f,  0.008570012f, 
  0.005110056f,  0.004249219f,  0.003877917f,  0.003597974f,  0.003423559f,  0.002325529f,  0.001293453f,  0.001255346f, 
  0.001215284f,  0.001011800f,  0.000584558f,  0.000295577f,  0.000138017f,  0.000098688f, 
  0
};


/* Model Table:
 * Number of web pages processed for this model: 2158
 * Number of characters consumed for this model: 4093693
 * Total considered sequences: 1585 / 1444
 *
 * - Positive sequences: first 665 (0.9950356280838962)
 * - Probable sequences: next 214 (879-665) (0.003971265701843807)
 * - Neutral sequences: last 565 (0.0009931062142599645)
 * - Negative sequences: -141 (off-ratio, TODO)
 */
#define LatvianUnicodeCharToOrderIsReduced  0


#define LatvianFCMLowerBound  65
#define LatvianFCMUpperBound  382


static const PRUint8 LatvianUnicodeCharToOrder[] =
{
  0,20,22,13,3,24,17,27,1,16,10,11,12,7,8,14,37,5,2,4,
  6,15,34,35,33,19,IRR,IRR,IRR,IRR,IRR,IRR,0,20,22,13,3,24,17,27,
  1,16,10,11,12,7,8,14,37,5,2,4,6,15,34,35,33,19,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,36,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,36,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,9,9,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,32,32,IRR,IRR,IRR,IRR,21,21,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,30,30,IRR,IRR,IRR,IRR,IRR,IRR,18,18,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,31,31,IRR,IRR,IRR,26,26,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  25,25,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,23,23,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,28,28,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,29,29,
};



#define LatvianUnicodeCharToOrderFirstTableChunkSize    58
#define LatvianUnicodeCharToOrderSecondTableChunkOffset 133
#define LatvianUnicodeCharToOrderSecondTableChunkSize   185


static const PRUint8 LatvianUnicodeCharToOrder2[] =
{
  36,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,36,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,9,9,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,32,32,IRR,IRR,IRR,IRR,21,21,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,30,30,IRR,IRR,IRR,IRR,IRR,IRR,
  18,18,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,31,31,IRR,IRR,IRR,26,26,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,25,25,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,23,23,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,28,28,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,29,29,
};

static const PRUint8 LatvianCompactedLangModel[] =
{
  3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,2,3,3,2,3,3,3,3,3,3,1,3,3,3,3,3,2,2,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,3,2,3,3,3,3,3,3,1,3,3,3,3,2,1,3,1,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,2,3,1,1,3,3,1,1,1,1,2,2,1,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,1,3,3,3,3,3,3,0,3,3,3,3,3,3,3,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,1,1,1,3,2,1,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,2,3,2,1,0,0,
  3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,2,3,3,2,3,3,2,3,3,3,0,2,3,1,3,1,1,2,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,0,3,3,3,1,1,3,3,1,1,0,0,
  3,3,3,3,3,3,3,3,3,1,3,3,3,3,3,3,3,3,2,3,3,1,3,3,3,3,3,3,0,3,3,2,2,3,3,2,0,0,
  2,2,3,1,3,3,1,3,0,0,3,3,3,3,3,3,3,3,1,3,3,0,3,3,3,3,3,1,0,3,2,1,2,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,3,2,3,2,1,2,2,3,3,2,3,3,3,3,1,0,1,1,2,1,0,0,0,
  3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,3,3,2,1,1,2,3,1,0,0,0,
  3,3,3,3,3,2,3,3,3,3,2,2,3,3,3,3,3,3,3,2,3,3,2,3,2,1,1,2,3,1,1,1,1,3,1,2,0,0,
  3,3,3,3,2,3,3,3,3,3,3,3,3,2,2,3,2,2,3,3,3,3,2,1,2,2,0,2,3,3,0,1,1,2,2,1,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,3,3,3,1,2,1,1,2,1,1,3,0,
  3,3,3,3,2,3,3,3,3,3,3,3,2,3,3,2,3,2,3,2,2,3,2,1,1,1,1,1,1,1,1,0,1,1,0,0,0,0,
  3,3,3,3,2,3,3,3,3,3,2,2,2,2,2,2,1,1,2,1,2,3,3,2,1,0,0,1,3,0,0,0,1,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,1,3,3,2,2,3,1,2,2,3,2,3,1,3,2,1,3,3,3,2,0,0,1,2,1,0,0,0,
  1,0,3,1,3,3,1,3,1,0,3,3,3,3,3,3,3,3,0,3,3,0,3,3,1,3,3,1,0,2,2,2,2,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,1,3,0,2,2,1,1,1,1,3,1,1,0,0,
  3,3,3,3,2,3,3,3,3,3,3,3,2,2,3,2,3,1,3,1,2,3,2,2,1,1,2,2,3,1,0,0,1,2,1,1,0,0,
  1,1,3,1,3,3,1,3,0,0,3,3,3,3,3,3,3,3,0,3,2,0,3,3,1,2,3,0,0,2,3,2,1,0,0,0,0,0,
  3,3,3,3,3,3,3,2,3,3,3,3,3,2,2,2,1,2,3,2,2,3,2,1,1,0,0,3,2,0,1,0,0,3,1,1,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,3,2,1,3,1,1,1,3,2,1,3,1,1,3,2,0,1,0,0,0,
  3,3,3,3,3,3,3,1,3,3,2,3,2,1,1,1,2,2,2,1,2,3,2,1,3,0,0,1,2,0,0,0,1,1,1,0,1,0,
  3,3,2,3,1,2,3,2,3,3,2,1,1,2,2,2,1,1,0,0,3,3,1,3,0,1,0,1,2,1,2,3,1,0,0,0,0,0,
  3,3,2,3,2,2,3,2,3,3,2,2,2,2,2,3,2,1,1,1,1,3,1,3,2,3,2,1,3,1,3,2,1,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,2,3,2,2,1,2,2,1,2,2,1,2,2,1,2,0,0,1,1,0,0,0,1,3,2,1,1,0,
  1,1,3,1,3,3,0,3,1,0,3,3,3,3,3,3,2,3,0,3,1,0,3,3,1,2,1,1,0,3,0,1,1,0,0,0,0,0,
  3,3,3,3,1,2,3,2,3,3,3,1,2,1,2,2,1,1,3,1,1,2,1,1,1,3,0,1,2,0,2,0,1,0,0,0,0,0,
  2,3,1,3,0,0,3,1,1,1,0,1,1,0,0,1,0,0,2,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,1,3,1,0,3,0,2,2,1,1,0,0,1,1,0,0,3,0,0,3,1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,
  3,3,3,3,1,1,3,1,2,3,2,0,1,0,2,1,1,0,2,0,0,1,0,0,1,1,0,1,2,0,0,0,0,0,0,0,0,0,
  3,2,3,2,2,2,2,2,3,1,3,2,3,2,2,1,1,2,0,1,3,0,3,1,1,0,0,1,1,0,0,0,1,1,1,1,0,0,
  3,3,2,3,2,2,1,2,3,0,1,1,1,1,0,0,0,1,0,1,1,1,1,0,1,0,0,2,0,0,0,0,0,2,3,0,0,0,
  2,2,1,1,2,1,1,1,2,0,1,1,1,1,2,2,1,1,0,0,1,0,1,1,1,0,0,1,0,0,0,0,0,1,1,2,0,0,
  0,1,1,0,0,1,0,0,0,0,0,1,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
};


const SequenceModel Iso_8859_4LatvianModel =
{
  Iso_8859_4_CharToOrderMap,
  LatvianCompactedLangModel,
  LatvianOrderWidth,
  0.99900689378574f,
  PR_TRUE,
  "ISO-8859-4",
  "lv"
};

const SequenceModel Iso_8859_10LatvianModel =
{
  Iso_8859_10_CharToOrderMap,
  LatvianCompactedLangModel,
  LatvianOrderWidth,
  0.99900689378574f,
  PR_TRUE,
  "ISO-8859-10",
  "lv"
};

const SequenceModel Iso_8859_13LatvianModel =
{
  Iso_8859_13_CharToOrderMap,
  LatvianCompactedLangModel,
  LatvianOrderWidth,
  0.99900689378574f,
  PR_TRUE,
  "ISO-8859-13",
  "lv"
};

const LanguageModel LatvianModel =
{
  "lv",
  Unicode_CharOrder,
  Unicode_Char_size,

  LatvianFCMLowerBound,
  LatvianFCMUpperBound,
  LatvianUnicodeCharToOrderIsReduced,
  LatvianUnicodeCharToOrder,
  LatvianUnicodeCharToOrderFirstTableChunkSize,
  LatvianUnicodeCharToOrderSecondTableChunkOffset,
  LatvianUnicodeCharToOrderSecondTableChunkSize,
  LatvianUnicodeCharToOrder2,
  OrderToRatio,
  LatvianCompactedLangModel,
  LatvianOrderWidth,
  5,
  0.41728581014746347f,
  22,
  0.037046989112275885f,
  0.9997322710813926f,
};
