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

/********* Language model for: Maltese *********/

/**
 * Generated by BuildLangModel.py
 * On: 2023-07-08 17:16:11.621097
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


static const unsigned char Iso_8859_3_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 14, 28, 13,  4, 15, 18, 21,  1, 11, 12,  3, 10,  5,  9, /* 4X */
   16, 25,  6,  8,  2,  7, 24, 19, 26, 29, 20,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 14, 28, 13,  4, 15, 18, 21,  1, 11, 12,  3, 10,  5,  9, /* 6X */
   16, 25,  6,  8,  2,  7, 24, 19, 26, 29, 20,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM, 17,SYM,SYM,SYM,ILL,IRR,SYM,SYM,IRR,IRR,IRR,IRR,SYM,ILL, 23, /* AX */
  SYM, 17,SYM,SYM,SYM,SYM,IRR,SYM,SYM,IRR,IRR,IRR,IRR,SYM,ILL, 23, /* BX */
  IRR,IRR,IRR,ILL,IRR, 27,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, /* CX */
  ILL,IRR,IRR,IRR,IRR, 22,IRR,SYM,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, /* DX */
  IRR,IRR,IRR,ILL,IRR, 27,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, /* EX */
  ILL,IRR,IRR,IRR,IRR, 22,IRR,SYM,IRR,IRR,IRR,IRR,IRR,IRR,IRR,SYM, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

#define Unicode_Char_size    60

static const PRUint32 Unicode_CharOrder[] =
{
   65,  0,  66, 14,  67, 28,  68, 13,  69,  4,  70, 15,  71, 18,  72, 21,
   73,  1,  74, 11,  75, 12,  76,  3,  77, 10,  78,  5,  79,  9,  80, 16,
   81, 25,  82,  6,  83,  8,  84,  2,  85,  7,  86, 24,  87, 19,  88, 26,
   89, 29,  90, 20,  97,  0,  98, 14,  99, 28, 100, 13, 101,  4, 102, 15,
  103, 18, 104, 21, 105,  1, 106, 11, 107, 12, 108,  3, 109, 10, 110,  5,
  111,  9, 112, 16, 113, 25, 114,  6, 115,  8, 116,  2, 117,  7, 118, 24,
  119, 19, 120, 26, 121, 29, 122, 20, 266, 27, 267, 27, 288, 22, 289, 22,
  294, 17, 295, 17, 379, 23, 380, 23,
};

static const float OrderToRatio[] =
{
  0.123617439f,  0.115057927f,  0.079985811f,  0.078594804f,  0.070249500f,  0.057431040f,  0.055552618f,  0.041183046f, 
  0.039263986f,  0.038936920f,  0.035439330f,  0.028411589f,  0.027464911f,  0.025110825f,  0.022349376f,  0.021647508f, 
  0.018739663f,  0.017769484f,  0.016423032f,  0.014501035f,  0.011043593f,  0.010649695f,  0.007878453f,  0.007656166f, 
  0.007449792f,  0.006131984f,  0.006092080f,  0.005957924f,  0.005634776f,  0.001902903f, 
  0
};


/* Model Table:
 * Number of web pages processed for this model: 878
 * Number of characters consumed for this model: 4084812
 * Total considered sequences: 1440 / 900
 *
 * - Positive sequences: first 577 (0.9950300012985454)
 * - Probable sequences: next 251 (828-577) (0.003973426371251754)
 * - Neutral sequences: last 72 (0.000996572330202894)
 * - Negative sequences: -540 (off-ratio, TODO)
 */


#define MalteseUnicodeAlphabetWidth         60
#define MalteseUnicodeCharToOrderIsReduced  0


#define MalteseOrderMatrixWidth         (IRR + 1)


#define MalteseFCMLowerBound  65
#define MalteseFCMUpperBound  380


static const PRUint8 MalteseUnicodeCharToOrder[] =
{
  0,14,28,13,4,15,18,21,1,11,12,3,10,5,9,16,25,6,8,2,
  7,24,19,26,29,20,IRR,IRR,IRR,IRR,IRR,IRR,0,14,28,13,4,15,18,21,
  1,11,12,3,10,5,9,16,25,6,8,2,7,24,19,26,29,20,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,27,27,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,22,22,IRR,IRR,IRR,IRR,17,17,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,23,23,
};

static const PRUint8 MalteseCompactedLangModel[] =
{
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,1,1,3,3,3,1,3,0,
  3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,3,3,2,3,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,
  3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,
  3,3,3,3,3,3,3,2,3,2,3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,2,3,1,0,3,3,1,0,3,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,2,2,1,3,3,2,2,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,2,1,3,3,3,2,2,2,2,1,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,2,2,1,2,3,1,3,0,1,2,0,1,2,1,0,
  3,3,3,3,3,3,3,3,3,3,3,3,2,3,2,3,1,3,3,3,2,3,0,0,2,2,2,0,2,0,
  3,3,3,3,3,3,3,3,3,3,2,3,2,3,3,1,1,3,3,3,1,3,0,3,1,3,2,2,2,0,
  3,3,3,3,3,3,3,3,3,3,2,3,2,3,2,3,1,1,2,2,0,2,1,1,1,2,1,1,3,0,
  3,3,3,3,3,2,3,3,3,3,2,3,2,2,2,2,3,1,2,1,1,3,0,0,1,0,1,1,1,0,
  3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,2,0,3,1,2,0,3,3,3,0,3,2,0,0,0,
  3,3,2,3,3,3,3,3,3,3,2,2,2,3,2,2,1,3,3,3,1,3,1,3,3,1,0,0,2,0,
  3,3,3,3,3,3,3,2,3,3,2,1,3,3,2,2,1,2,2,3,1,3,3,3,1,2,2,3,2,0,
  3,3,2,2,3,2,1,3,2,3,2,3,2,1,2,1,1,0,1,2,3,2,0,0,1,1,0,0,2,0,
  3,3,3,3,3,3,3,3,2,3,3,1,2,2,2,1,1,1,1,2,1,2,0,1,2,1,1,0,2,0,
  3,3,2,3,3,3,3,3,1,3,2,3,0,3,3,0,0,1,3,3,0,2,3,1,1,0,1,0,0,0,
  3,3,1,3,3,2,3,3,0,3,3,3,0,3,3,2,0,0,3,3,1,1,1,3,3,1,1,0,0,0,
  3,3,1,3,3,2,3,3,2,3,1,3,1,3,1,1,1,0,1,1,0,1,0,1,3,0,0,0,2,0,
  3,3,3,3,3,2,3,3,3,3,2,3,3,3,3,3,1,1,3,3,0,2,0,1,1,3,2,2,0,0,
  3,3,3,3,3,2,3,3,1,3,3,3,2,1,2,2,2,1,2,1,0,3,0,0,2,2,3,0,2,0,
  3,3,2,2,3,1,2,2,0,2,1,3,2,0,0,0,1,2,0,1,0,1,0,0,0,0,0,3,1,0,
  3,3,3,3,3,2,3,3,2,3,2,1,3,2,2,2,1,0,2,1,2,3,0,0,1,2,1,0,3,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
};


const SequenceModel Iso_8859_3MalteseModel =
{
  Iso_8859_3_CharToOrderMap,
  MalteseCompactedLangModel,
  30,
  0.9990034276697971f,
  PR_TRUE,
  "ISO-8859-3",
  "mt"
};

const LanguageModel MalteseModel =
{
  "mt",
  Unicode_CharOrder,
  Unicode_Char_size,

  MalteseFCMLowerBound,
  MalteseFCMUpperBound,
  MalteseUnicodeAlphabetWidth,
  MalteseUnicodeCharToOrderIsReduced,
  MalteseOrderMatrixWidth,
  MalteseUnicodeCharToOrder,
  OrderToRatio,
  MalteseCompactedLangModel,
  30,
  5,
  0.4675054812804115f,
  23,
  0.03316945798239919f,
  0.9981272087919838f,
};
