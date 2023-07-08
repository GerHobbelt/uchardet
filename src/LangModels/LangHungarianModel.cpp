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

/********* Language model for: Hungarian *********/

/**
 * Generated by BuildLangModel.py
 * On: 2023-07-08 21:11:57.336724
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



#define IRR     32

#define HungarianOrderWidth         (IRR + 1)


static const unsigned char Iso_8859_2_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  1, 15, 22, 16,  0, 24, 13, 19,  7, 23,  9,  4, 12,  5,  8, /* 4X */
   21,IRR,  6,  3,  2, 20, 18,IRR,IRR, 17, 10,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  1, 15, 22, 16,  0, 24, 13, 19,  7, 23,  9,  4, 12,  5,  8, /* 6X */
   21,IRR,  6,  3,  2, 20, 18,IRR,IRR, 17, 10,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,IRR,SYM,IRR,SYM,IRR,IRR,SYM,SYM,IRR,IRR,IRR,IRR,SYM,IRR,IRR, /* AX */
  SYM,IRR,SYM,IRR,SYM,IRR,IRR,SYM,SYM,IRR,IRR,IRR,IRR,SYM,IRR,IRR, /* BX */
  IRR, 11,IRR,IRR,IRR,IRR,IRR,IRR,IRR, 14,IRR,IRR,IRR, 28,IRR,IRR, /* CX */
  IRR,IRR,IRR, 26,IRR, 27, 25,SYM,IRR,IRR, 30, 31, 29,IRR,IRR,IRR, /* DX */
  IRR, 11,IRR,IRR,IRR,IRR,IRR,IRR,IRR, 14,IRR,IRR,IRR, 28,IRR,IRR, /* EX */
  IRR,IRR,IRR, 26,IRR, 27, 25,SYM,IRR,IRR, 30, 31, 29,IRR,IRR,SYM, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Windows_1250_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  1, 15, 22, 16,  0, 24, 13, 19,  7, 23,  9,  4, 12,  5,  8, /* 4X */
   21,IRR,  6,  3,  2, 20, 18,IRR,IRR, 17, 10,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  1, 15, 22, 16,  0, 24, 13, 19,  7, 23,  9,  4, 12,  5,  8, /* 6X */
   21,IRR,  6,  3,  2, 20, 18,IRR,IRR, 17, 10,SYM,SYM,SYM,SYM,CTR, /* 7X */
  SYM,ILL,SYM,ILL,SYM,SYM,SYM,SYM,ILL,SYM,IRR,SYM,IRR,IRR,IRR,IRR, /* 8X */
  ILL,SYM,SYM,SYM,SYM,SYM,SYM,SYM,ILL,SYM,IRR,SYM,IRR,IRR,IRR,IRR, /* 9X */
  SYM,SYM,SYM,IRR,SYM,IRR,SYM,SYM,SYM,SYM,IRR,SYM,SYM,SYM,SYM,IRR, /* AX */
  SYM,SYM,SYM,IRR,SYM,SYM,SYM,SYM,SYM,IRR,IRR,SYM,IRR,SYM,IRR,IRR, /* BX */
  IRR, 11,IRR,IRR,IRR,IRR,IRR,IRR,IRR, 14,IRR,IRR,IRR, 28,IRR,IRR, /* CX */
  IRR,IRR,IRR, 26,IRR, 27, 25,SYM,IRR,IRR, 30, 31, 29,IRR,IRR,IRR, /* DX */
  IRR, 11,IRR,IRR,IRR,IRR,IRR,IRR,IRR, 14,IRR,IRR,IRR, 28,IRR,IRR, /* EX */
  IRR,IRR,IRR, 26,IRR, 27, 25,SYM,IRR,IRR, 30, 31, 29,IRR,IRR,SYM, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

#define Unicode_Char_size    64

static const PRUint32 Unicode_CharOrder[] =
{
   65,  1,  66, 15,  67, 22,  68, 16,  69,  0,  70, 24,  71, 13,  72, 19,
   73,  7,  74, 23,  75,  9,  76,  4,  77, 12,  78,  5,  79,  8,  80, 21,
   82,  6,  83,  3,  84,  2,  85, 20,  86, 18,  89, 17,  90, 10,  97,  1,
   98, 15,  99, 22, 100, 16, 101,  0, 102, 24, 103, 13, 104, 19, 105,  7,
  106, 23, 107,  9, 108,  4, 109, 12, 110,  5, 111,  8, 112, 21, 114,  6,
  115,  3, 116,  2, 117, 20, 118, 18, 121, 17, 122, 10, 193, 11, 201, 14,
  205, 28, 211, 26, 214, 25, 218, 30, 220, 29, 225, 11, 233, 14, 237, 28,
  243, 26, 246, 25, 250, 30, 252, 29, 336, 27, 337, 27, 368, 31, 369, 31,
};

static const float OrderToRatio[] =
{
  0.098687062f,  0.091290390f,  0.076878836f,  0.062143740f,  0.061220105f,  0.056559342f,  0.048218233f,  0.047834730f, 
  0.045463723f,  0.043363150f,  0.037089819f,  0.032591072f,  0.031179921f,  0.029771707f,  0.029331426f,  0.023321432f, 
  0.021340534f,  0.019638637f,  0.019123466f,  0.015571361f,  0.014682233f,  0.013854289f,  0.012687386f,  0.011791895f, 
  0.011202324f,  0.009327398f,  0.009314672f,  0.008385897f,  0.005919687f,  0.004287049f,  0.002657349f,  0.002057010f, 
  0
};


/* Model Table:
 * Number of web pages processed for this model: 1092
 * Number of characters consumed for this model: 4086027
 * Total considered sequences: 1485 / 1024
 *
 * - Positive sequences: first 733 (0.9950332679267255)
 * - Probable sequences: next 184 (917-733) (0.003973502577924504)
 * - Neutral sequences: last 107 (0.0009932294953499676)
 * - Negative sequences: -461 (off-ratio, TODO)
 */
#define HungarianUnicodeCharToOrderIsReduced  0


#define HungarianFCMLowerBound  65
#define HungarianFCMUpperBound  369


static const PRUint8 HungarianUnicodeCharToOrder[] =
{
  1,15,22,16,0,24,13,19,7,23,9,4,12,5,8,21,IRR,6,3,2,
  20,18,IRR,IRR,17,10,IRR,IRR,IRR,IRR,IRR,IRR,1,15,22,16,0,24,13,19,
  7,23,9,4,12,5,8,21,IRR,6,3,2,20,18,IRR,IRR,17,10,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,11,IRR,IRR,IRR,IRR,IRR,IRR,IRR,14,IRR,IRR,IRR,
  28,IRR,IRR,IRR,IRR,IRR,26,IRR,IRR,25,IRR,IRR,IRR,30,IRR,29,IRR,IRR,IRR,IRR,
  11,IRR,IRR,IRR,IRR,IRR,IRR,IRR,14,IRR,IRR,IRR,28,IRR,IRR,IRR,IRR,IRR,26,IRR,
  IRR,25,IRR,IRR,IRR,30,IRR,29,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,27,27,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,31,31,
};



#define HungarianUnicodeCharToOrderFirstTableChunkSize    188
#define HungarianUnicodeCharToOrderSecondTableChunkOffset 271
#define HungarianUnicodeCharToOrderSecondTableChunkSize   34


static const PRUint8 HungarianUnicodeCharToOrder2[] =
{
  27,27,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,31,31,
};

static const PRUint8 HungarianCompactedLangModel[] =
{
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,2,3,1,2,2,0,0,
  3,3,3,3,3,3,3,3,3,3,3,2,3,3,2,3,3,3,3,3,3,3,3,3,3,1,1,0,2,1,2,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,1,3,1,1,2,2,0,
  3,3,3,3,3,3,3,3,3,3,3,1,3,3,1,3,3,3,3,3,3,3,3,3,3,0,1,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,2,3,3,2,3,3,2,3,3,3,3,2,3,3,3,3,3,3,3,3,3,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,2,2,3,3,3,3,3,3,3,0,
  1,2,3,3,3,3,3,3,1,3,3,1,3,3,3,3,3,2,3,3,3,3,3,3,3,0,0,0,2,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,2,2,3,3,3,3,3,3,3,2,3,2,3,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,0,
  2,2,3,3,3,3,3,3,1,3,3,0,3,3,2,3,3,0,3,3,0,3,3,3,2,0,0,0,1,1,0,0,
  3,3,2,3,3,3,3,3,3,2,1,3,2,1,3,3,3,3,2,2,3,3,3,3,2,3,3,3,3,3,2,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,3,3,3,3,3,3,3,2,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,3,3,2,3,3,3,3,3,3,3,3,3,0,
  3,3,3,3,2,2,3,3,3,3,1,3,2,2,3,3,2,2,3,2,3,1,2,3,2,3,3,3,3,3,2,0,
  3,3,3,3,3,3,3,3,3,2,1,3,3,1,3,2,2,3,2,2,3,1,2,1,2,3,3,3,3,2,3,0,
  3,3,3,3,3,3,3,3,2,3,3,3,3,3,2,3,3,2,3,3,2,3,3,3,3,1,1,1,1,0,0,0,
  3,3,3,3,3,2,3,3,3,3,3,3,2,2,3,3,2,2,3,3,3,3,3,3,3,2,3,2,3,3,2,0,
  3,3,3,3,3,2,3,3,3,3,3,3,3,1,3,3,2,3,2,3,3,1,3,1,2,1,2,1,3,1,1,0,
  3,3,3,3,3,3,3,3,3,2,3,3,2,2,3,2,3,1,2,2,3,2,2,3,2,3,3,1,2,3,3,0,
  3,3,3,2,3,2,3,3,3,2,1,3,2,1,3,2,1,2,1,1,3,1,2,3,3,3,2,3,1,3,2,0,
  1,1,3,3,3,3,3,0,0,3,3,0,3,3,0,3,3,0,3,2,1,2,2,1,1,1,0,0,0,1,0,0,
  2,3,3,3,3,3,3,3,1,3,3,2,3,3,2,3,3,0,3,3,1,3,3,3,3,2,0,0,1,1,1,0,
  3,3,3,3,3,3,3,3,2,3,3,2,3,3,2,3,3,0,3,3,1,2,2,3,3,1,1,1,2,2,2,0,
  1,2,3,3,3,3,3,1,1,3,3,0,3,3,0,2,2,0,3,1,1,3,3,3,1,0,1,0,1,0,1,0,
  1,1,3,3,3,3,3,1,1,3,3,0,2,3,0,1,2,0,3,2,0,1,2,1,1,0,0,0,0,1,0,0,
  1,2,3,3,3,3,3,1,1,2,3,1,1,3,1,2,3,0,2,1,1,2,3,3,1,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
};


const SequenceModel Iso_8859_2HungarianModel =
{
  Iso_8859_2_CharToOrderMap,
  HungarianCompactedLangModel,
  HungarianOrderWidth,
  0.99900677050465f,
  PR_FALSE,
  "ISO-8859-2",
  "hu"
};

const SequenceModel Windows_1250HungarianModel =
{
  Windows_1250_CharToOrderMap,
  HungarianCompactedLangModel,
  HungarianOrderWidth,
  0.99900677050465f,
  PR_FALSE,
  "WINDOWS-1250",
  "hu"
};

const LanguageModel HungarianModel =
{
  "hu",
  Unicode_CharOrder,
  Unicode_Char_size,

  HungarianFCMLowerBound,
  HungarianFCMUpperBound,
  HungarianUnicodeCharToOrderIsReduced,
  HungarianUnicodeCharToOrder,
  HungarianUnicodeCharToOrderFirstTableChunkSize,
  HungarianUnicodeCharToOrderSecondTableChunkOffset,
  HungarianUnicodeCharToOrderSecondTableChunkSize,
  HungarianUnicodeCharToOrder2,
  OrderToRatio,
  HungarianCompactedLangModel,
  HungarianOrderWidth,
  6,
  0.44677947551496844f,
  25,
  0.032621664027183375f,
  0.9967858753747832f,
};
