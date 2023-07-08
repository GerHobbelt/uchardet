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

/********* Language model for: Lithuanian *********/

/**
 * Generated by BuildLangModel.py
 * On: 2023-07-08 21:11:58.779311
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



#define IRR     35

#define LithuanianOrderWidth         (IRR + 1)


static const unsigned char Iso_8859_4_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  1, 18, 23, 14,  4, 25, 16, 30,  0, 15,  9, 10, 11,  7,  3, /* 4X */
   12, 34,  5,  2,  6,  8, 13, 32, 33, 19, 28,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  1, 18, 23, 14,  4, 25, 16, 30,  0, 15,  9, 10, 11,  7,  3, /* 6X */
   12, 34,  5,  2,  6,  8, 13, 32, 33, 19, 28,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM, 24,IRR,IRR,SYM,IRR,IRR,SYM,SYM, 21,IRR,IRR,IRR,SYM, 22,SYM, /* AX */
  SYM, 24,SYM,IRR,SYM,IRR,IRR,SYM,SYM, 21,IRR,IRR,IRR,IRR, 22,IRR, /* BX */
  IRR,IRR,IRR,IRR,IRR,IRR,IRR, 27, 26,IRR, 31,IRR, 17,IRR,IRR,IRR, /* CX */
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,SYM,IRR, 20,IRR,IRR,IRR,IRR, 29,IRR, /* DX */
  IRR,IRR,IRR,IRR,IRR,IRR,IRR, 27, 26,IRR, 31,IRR, 17,IRR,IRR,IRR, /* EX */
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,SYM,IRR, 20,IRR,IRR,IRR,IRR, 29,SYM, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_10_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  1, 18, 23, 14,  4, 25, 16, 30,  0, 15,  9, 10, 11,  7,  3, /* 4X */
   12, 34,  5,  2,  6,  8, 13, 32, 33, 19, 28,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  1, 18, 23, 14,  4, 25, 16, 30,  0, 15,  9, 10, 11,  7,  3, /* 6X */
   12, 34,  5,  2,  6,  8, 13, 32, 33, 19, 28,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM, 24,IRR,IRR,IRR,IRR,IRR,SYM,IRR,IRR, 21,IRR, 22,SYM, 29,IRR, /* AX */
  SYM, 24,IRR,IRR,IRR,IRR,IRR,SYM,IRR,IRR, 21,IRR, 22,IRR, 29,IRR, /* BX */
  IRR,IRR,IRR,IRR,IRR,IRR,IRR, 27, 26,IRR, 31,IRR, 17,IRR,IRR,IRR, /* CX */
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, 20,IRR,IRR,IRR,IRR,IRR,IRR, /* DX */
  IRR,IRR,IRR,IRR,IRR,IRR,IRR, 27, 26,IRR, 31,IRR, 17,IRR,IRR,IRR, /* EX */
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, 20,IRR,IRR,IRR,IRR,IRR,IRR, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_13_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  1, 18, 23, 14,  4, 25, 16, 30,  0, 15,  9, 10, 11,  7,  3, /* 4X */
   12, 34,  5,  2,  6,  8, 13, 32, 33, 19, 28,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  1, 18, 23, 14,  4, 25, 16, 30,  0, 15,  9, 10, 11,  7,  3, /* 6X */
   12, 34,  5,  2,  6,  8, 13, 32, 33, 19, 28,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,IRR,SYM,IRR,SYM,SYM,SYM,SYM,IRR, /* AX */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,IRR,SYM,IRR,SYM,SYM,SYM,SYM,IRR, /* BX */
   24, 27,IRR,IRR,IRR,IRR, 31,IRR, 26,IRR,IRR, 17,IRR,IRR,IRR,IRR, /* CX */
   21,IRR,IRR,IRR,IRR,IRR,IRR,SYM, 20,IRR,IRR, 29,IRR,IRR, 22,IRR, /* DX */
   24, 27,IRR,IRR,IRR,IRR, 31,IRR, 26,IRR,IRR, 17,IRR,IRR,IRR,IRR, /* EX */
   21,IRR,IRR,IRR,IRR,IRR,IRR,SYM, 20,IRR,IRR, 29,IRR,IRR, 22,SYM, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

#define Unicode_Char_size    70

static const PRUint32 Unicode_CharOrder[] =
{
   65,  1,  66, 18,  67, 23,  68, 14,  69,  4,  70, 25,  71, 16,  72, 30,
   73,  0,  74, 15,  75,  9,  76, 10,  77, 11,  78,  7,  79,  3,  80, 12,
   81, 34,  82,  5,  83,  2,  84,  6,  85,  8,  86, 13,  87, 32,  88, 33,
   89, 19,  90, 28,  97,  1,  98, 18,  99, 23, 100, 14, 101,  4, 102, 25,
  103, 16, 104, 30, 105,  0, 106, 15, 107,  9, 108, 10, 109, 11, 110,  7,
  111,  3, 112, 12, 113, 34, 114,  5, 115,  2, 116,  6, 117,  8, 118, 13,
  119, 32, 120, 33, 121, 19, 122, 28, 260, 24, 261, 24, 268, 26, 269, 26,
  278, 17, 279, 17, 280, 31, 281, 31, 302, 27, 303, 27, 352, 21, 353, 21,
  362, 29, 363, 29, 370, 20, 371, 20, 381, 22, 382, 22,
};

static const float OrderToRatio[] =
{
  0.128310453f,  0.111246448f,  0.079112234f,  0.067866912f,  0.056494422f,  0.056421648f,  0.054009101f,  0.052843502f, 
  0.045305947f,  0.040182164f,  0.036548642f,  0.035000554f,  0.026796277f,  0.026171945f,  0.025588778f,  0.022734935f, 
  0.017858631f,  0.016113540f,  0.015114315f,  0.014438773f,  0.012223719f,  0.010983876f,  0.007974196f,  0.007147471f, 
  0.004924085f,  0.004667541f,  0.004557033f,  0.004239232f,  0.004015521f,  0.003730063f,  0.003562464f,  0.001529221f, 
  0.000869605f,  0.000815454f,  0.000085270f, 
  0
};


/* Model Table:
 * Number of web pages processed for this model: 2148
 * Number of characters consumed for this model: 4081164
 * Total considered sequences: 1639 / 1225
 *
 * - Positive sequences: first 585 (0.995016774755209)
 * - Probable sequences: next 251 (836-585) (0.003983570232855338)
 * - Neutral sequences: last 389 (0.0009996550119356629)
 * - Negative sequences: -414 (off-ratio, TODO)
 */
#define LithuanianUnicodeCharToOrderIsReduced  0


#define LithuanianFCMLowerBound  65
#define LithuanianFCMUpperBound  382


static const PRUint8 LithuanianUnicodeCharToOrder[] =
{
  1,18,23,14,4,25,16,30,0,15,9,10,11,7,3,12,34,5,2,6,
  8,13,32,33,19,28,IRR,IRR,IRR,IRR,IRR,IRR,1,18,23,14,4,25,16,30,
  0,15,9,10,11,7,3,12,34,5,2,6,8,13,32,33,19,28,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,24,24,IRR,IRR,IRR,
  IRR,IRR,IRR,26,26,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,17,17,31,31,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,27,27,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,21,21,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,29,29,IRR,
  IRR,IRR,IRR,IRR,IRR,20,20,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,22,22,
};



#define LithuanianUnicodeCharToOrderFirstTableChunkSize    58
#define LithuanianUnicodeCharToOrderSecondTableChunkOffset 195
#define LithuanianUnicodeCharToOrderSecondTableChunkSize   123


static const PRUint8 LithuanianUnicodeCharToOrder2[] =
{
  24,24,IRR,IRR,IRR,IRR,IRR,IRR,26,26,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,17,17,
  31,31,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,27,27,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,21,21,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,29,29,IRR,IRR,IRR,IRR,IRR,IRR,20,20,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,22,22,
};

static const PRUint8 LithuanianCompactedLangModel[] =
{
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,2,3,3,3,3,3,3,3,1,3,3,2,1,2,3,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,1,3,3,3,0,3,3,1,3,1,3,0,3,2,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,3,3,3,3,1,1,3,3,3,3,3,2,3,3,3,2,1,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,3,0,3,3,3,1,3,3,1,3,1,3,0,3,2,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,3,0,3,3,3,0,3,3,3,3,0,2,0,3,3,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,1,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,3,3,3,3,3,3,2,2,3,3,1,3,3,3,3,3,2,1,0,
  3,3,3,3,3,3,3,3,3,3,2,3,2,3,3,2,3,3,3,3,3,2,3,3,3,3,3,3,3,2,3,3,2,2,0,
  3,3,3,3,3,3,3,3,1,3,3,3,3,3,3,3,3,2,3,2,0,3,3,3,0,3,3,0,3,0,2,0,1,2,0,
  3,3,3,3,3,3,3,3,3,2,3,3,2,3,3,2,2,3,2,3,3,3,2,3,3,2,2,3,1,3,2,3,2,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,2,3,2,3,2,3,1,1,0,
  3,3,3,3,3,2,3,3,3,2,3,3,3,2,3,2,2,3,3,3,3,2,3,2,3,2,2,1,2,3,1,3,2,0,0,
  3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,1,3,3,3,2,3,3,2,2,2,2,3,3,3,1,0,0,
  3,3,3,3,3,2,2,2,3,2,3,2,2,1,2,2,2,3,1,3,3,2,1,2,3,2,2,2,3,3,1,3,0,1,0,
  3,3,3,3,3,3,2,3,3,3,3,3,2,3,2,2,2,3,2,3,3,2,3,2,3,2,1,3,3,3,2,3,2,0,0,
  3,3,2,3,3,1,2,2,3,2,1,1,2,1,1,1,1,3,0,2,3,1,0,1,3,1,1,3,0,3,1,3,1,0,0,
  3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,1,2,3,2,3,3,2,3,1,3,1,1,2,3,3,3,3,1,1,0,
  1,1,3,1,1,3,3,3,1,3,3,3,2,3,3,3,3,0,2,0,0,2,3,2,0,1,2,0,2,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,2,3,2,1,2,2,3,1,3,2,3,3,1,2,2,3,1,1,1,2,3,2,3,1,1,0,
  2,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,0,3,1,0,3,3,3,0,1,3,0,3,1,1,0,1,2,0,
  0,1,2,0,0,1,1,1,0,0,0,0,0,1,1,3,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,3,2,3,3,2,1,1,2,1,3,3,0,2,0,2,0,0,0,
  3,3,3,3,3,3,3,3,3,3,2,3,2,3,3,1,2,3,2,3,3,1,1,1,2,2,1,2,1,2,1,2,0,0,0,
  3,3,2,3,3,3,3,2,3,3,3,2,1,2,2,1,1,2,2,2,2,0,2,3,1,2,0,0,3,3,3,1,1,1,0,
  1,1,3,0,0,3,1,1,0,2,3,2,0,2,1,3,1,0,1,0,0,1,3,1,0,0,0,0,0,0,1,0,0,0,0,
  3,3,2,3,3,3,3,1,3,3,3,2,1,1,1,1,2,2,2,2,2,1,1,3,2,3,0,0,1,1,2,0,1,0,0,
  3,3,1,2,3,1,1,1,2,2,0,1,1,0,2,0,0,2,0,2,2,0,0,1,1,0,0,1,0,0,1,1,0,0,0,
  1,2,3,0,2,3,3,2,0,3,3,3,2,3,2,2,3,2,1,0,1,2,3,0,0,1,0,0,0,0,0,0,0,0,0,
  3,3,2,3,3,3,2,3,3,2,2,3,1,2,3,1,2,3,2,3,3,0,0,2,2,1,0,1,2,2,2,2,1,0,0,
  0,1,3,0,1,3,3,3,1,3,3,3,3,2,3,1,3,0,2,1,0,3,2,1,0,1,3,0,3,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,2,2,3,1,2,1,1,1,2,1,3,2,1,1,1,2,1,0,0,1,2,1,0,2,0,0,
  1,1,3,0,0,0,1,0,0,0,1,0,0,0,1,0,1,0,1,0,0,1,1,1,0,0,0,0,1,0,0,0,0,0,0,
  3,3,3,3,3,2,1,2,2,2,1,1,1,0,1,0,1,0,1,2,0,0,0,1,1,1,0,0,1,1,2,1,2,0,0,
  3,2,1,1,2,0,2,0,1,0,1,1,2,3,0,1,0,0,2,1,0,0,0,1,0,1,0,0,0,0,1,0,1,3,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
};


const SequenceModel Iso_8859_4LithuanianModel =
{
  Iso_8859_4_CharToOrderMap,
  LithuanianCompactedLangModel,
  LithuanianOrderWidth,
  0.9990003449880643f,
  PR_TRUE,
  "ISO-8859-4",
  "lt"
};

const SequenceModel Iso_8859_10LithuanianModel =
{
  Iso_8859_10_CharToOrderMap,
  LithuanianCompactedLangModel,
  LithuanianOrderWidth,
  0.9990003449880643f,
  PR_TRUE,
  "ISO-8859-10",
  "lt"
};

const SequenceModel Iso_8859_13LithuanianModel =
{
  Iso_8859_13_CharToOrderMap,
  LithuanianCompactedLangModel,
  LithuanianOrderWidth,
  0.9990003449880643f,
  PR_TRUE,
  "ISO-8859-13",
  "lt"
};

const LanguageModel LithuanianModel =
{
  "lt",
  Unicode_CharOrder,
  Unicode_Char_size,

  LithuanianFCMLowerBound,
  LithuanianFCMUpperBound,
  LithuanianUnicodeCharToOrderIsReduced,
  LithuanianUnicodeCharToOrder,
  LithuanianUnicodeCharToOrderFirstTableChunkSize,
  LithuanianUnicodeCharToOrderSecondTableChunkOffset,
  LithuanianUnicodeCharToOrderSecondTableChunkSize,
  LithuanianUnicodeCharToOrder2,
  OrderToRatio,
  LithuanianCompactedLangModel,
  LithuanianOrderWidth,
  5,
  0.44303046875842284f,
  23,
  0.03299548854199439f,
  0.9994839707495214f,
};
