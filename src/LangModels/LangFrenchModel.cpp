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

/********* Language model for: French *********/

/**
 * Generated by BuildLangModel.py
 * On: 2023-07-08 22:40:02.284810
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

#define FrenchOrderWidth        38


static const unsigned char Iso_8859_15_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  1, 18, 11, 10,  0, 19, 16, 17,  4, 25, 26,  7, 12,  3,  8, /* 4X */
   13, 20,  5,  2,  6,  9, 15, 27, 22, 21, 28,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  1, 18, 11, 10,  0, 19, 16, 17,  4, 25, 26,  7, 12,  3,  8, /* 6X */
   13, 20,  5,  2,  6,  9, 15, 27, 22, 21, 28,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,IRR,SYM,IRR,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,IRR,IRR,SYM,SYM,IRR,SYM,SYM,SYM, 36, 36,IRR,SYM, /* BX */
   23,IRR, 33,IRR,IRR,IRR,IRR, 30, 24, 14, 29,IRR,IRR,IRR, 32, 37, /* CX */
  IRR,IRR,IRR,IRR, 31,IRR,IRR,SYM,IRR, 34,IRR, 35,IRR,IRR,IRR,IRR, /* DX */
   23,IRR, 33,IRR,IRR,IRR,IRR, 30, 24, 14, 29,IRR,IRR,IRR, 32, 37, /* EX */
  IRR,IRR,IRR,IRR, 31,IRR,IRR,SYM,IRR, 34,IRR, 35,IRR,IRR,IRR,IRR, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_1_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  1, 18, 11, 10,  0, 19, 16, 17,  4, 25, 26,  7, 12,  3,  8, /* 4X */
   13, 20,  5,  2,  6,  9, 15, 27, 22, 21, 28,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  1, 18, 11, 10,  0, 19, 16, 17,  4, 25, 26,  7, 12,  3,  8, /* 6X */
   13, 20,  5,  2,  6,  9, 15, 27, 22, 21, 28,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM,IRR,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
   23,IRR, 33,IRR,IRR,IRR,IRR, 30, 24, 14, 29,IRR,IRR,IRR, 32, 37, /* CX */
  IRR,IRR,IRR,IRR, 31,IRR,IRR,SYM,IRR, 34,IRR, 35,IRR,IRR,IRR,IRR, /* DX */
   23,IRR, 33,IRR,IRR,IRR,IRR, 30, 24, 14, 29,IRR,IRR,IRR, 32, 37, /* EX */
  IRR,IRR,IRR,IRR, 31,IRR,IRR,SYM,IRR, 34,IRR, 35,IRR,IRR,IRR,IRR, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Windows_1252_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  1, 18, 11, 10,  0, 19, 16, 17,  4, 25, 26,  7, 12,  3,  8, /* 4X */
   13, 20,  5,  2,  6,  9, 15, 27, 22, 21, 28,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  1, 18, 11, 10,  0, 19, 16, 17,  4, 25, 26,  7, 12,  3,  8, /* 6X */
   13, 20,  5,  2,  6,  9, 15, 27, 22, 21, 28,SYM,SYM,SYM,SYM,CTR, /* 7X */
  SYM,ILL,SYM,IRR,SYM,SYM,SYM,SYM,SYM,SYM,IRR,SYM, 36,ILL,IRR,ILL, /* 8X */
  ILL,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,IRR,SYM, 36,ILL,IRR,IRR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM,IRR,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
   23,IRR, 33,IRR,IRR,IRR,IRR, 30, 24, 14, 29,IRR,IRR,IRR, 32, 37, /* CX */
  IRR,IRR,IRR,IRR, 31,IRR,IRR,SYM,IRR, 34,IRR, 35,IRR,IRR,IRR,IRR, /* DX */
   23,IRR, 33,IRR,IRR,IRR,IRR, 30, 24, 14, 29,IRR,IRR,IRR, 32, 37, /* EX */
  IRR,IRR,IRR,IRR, 31,IRR,IRR,SYM,IRR, 34,IRR, 35,IRR,IRR,IRR,IRR, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

#define Unicode_Char_size    76

static const PRUint32 Unicode_CharOrder[] =
{
   65,  1,  66, 18,  67, 11,  68, 10,  69,  0,  70, 19,  71, 16,  72, 17,
   73,  4,  74, 25,  75, 26,  76,  7,  77, 12,  78,  3,  79,  8,  80, 13,
   81, 20,  82,  5,  83,  2,  84,  6,  85,  9,  86, 15,  87, 27,  88, 22,
   89, 21,  90, 28,  97,  1,  98, 18,  99, 11, 100, 10, 101,  0, 102, 19,
  103, 16, 104, 17, 105,  4, 106, 25, 107, 26, 108,  7, 109, 12, 110,  3,
  111,  8, 112, 13, 113, 20, 114,  5, 115,  2, 116,  6, 117,  9, 118, 15,
  119, 27, 120, 22, 121, 21, 122, 28, 192, 23, 194, 33, 199, 30, 200, 24,
  201, 14, 202, 29, 206, 32, 207, 37, 212, 31, 217, 34, 219, 35, 224, 23,
  226, 33, 231, 30, 232, 24, 233, 14, 234, 29, 238, 32, 239, 37, 244, 31,
  249, 34, 251, 35, 338, 36, 339, 36,
};

static const float OrderToRatio[] =
{
  0.140128282f,  0.079217003f,  0.076138327f,  0.073825346f,  0.072919895f,  0.069659701f,  0.068332371f,  0.058080083f, 
  0.055560670f,  0.052128451f,  0.040587746f,  0.035318761f,  0.028922233f,  0.028214672f,  0.022894197f,  0.012577370f, 
  0.012440461f,  0.012020005f,  0.011283733f,  0.011215397f,  0.008282884f,  0.004908086f,  0.004148798f,  0.003952095f, 
  0.003660243f,  0.003628211f,  0.002719912f,  0.002234443f,  0.001182591f,  0.000957889f,  0.000492588f,  0.000451539f, 
  0.000395779f,  0.000374899f,  0.000213313f,  0.000205957f,  0.000194568f,  0.000142841f, 
  0    /* value slot for out-of-bounds index values; range: 0..freq_count(38) */
};


/* Model Table:
 * Number of web pages processed for this model: 412
 * Number of characters consumed for this model: 4214474
 * Total considered sequences: 1330 / 1444
 *
 * - Positive sequences: first 493 (0.9950115208197672)
 * - Probable sequences: next 212 (705-493) (0.0039908429757585795)
 * - Neutral sequences: last 739 (0.0009976362044742393)
 * - Negative sequences: 114 (off-ratio, TODO)
 */
#define FrenchUnicodeCharToOrderIsReduced  0


#define FrenchFCMLowerBound  65
#define FrenchFCMUpperBound  339


static const PRInt16 FrenchUnicodeCharToOrder[] =
{
  1,18,11,10,0,19,16,17,4,25,26,7,12,3,8,13,20,5,2,6,
  9,15,27,22,21,28,IRR,IRR,IRR,IRR,IRR,IRR,1,18,11,10,0,19,16,17,
  4,25,26,7,12,3,8,13,20,5,2,6,9,15,27,22,21,28,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,23,IRR,33,IRR,IRR,IRR,IRR,30,24,14,29,IRR,IRR,
  IRR,32,37,IRR,IRR,IRR,IRR,31,IRR,IRR,IRR,IRR,34,IRR,35,IRR,IRR,IRR,IRR,23,
  IRR,33,IRR,IRR,IRR,IRR,30,24,14,29,IRR,IRR,IRR,32,37,IRR,IRR,IRR,IRR,31,
  IRR,IRR,IRR,IRR,34,IRR,35,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,36,36,
};



#define FrenchUnicodeCharToOrderFirstTableChunkSize    187
#define FrenchUnicodeCharToOrderSecondTableChunkOffset 273
#define FrenchUnicodeCharToOrderSecondTableChunkSize   2


static const PRInt16 FrenchUnicodeCharToOrder2[] =
{
  36,36,
};

static const PRUint8 FrenchCompactedLangModel[] =
{
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,3,3,3,3,3,3,3,1,0,3,3,3,3,0,3,1,0,1,0,1,0,1,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,1,3,3,3,3,0,3,1,3,0,0,0,0,3,
  3,3,3,3,3,2,3,3,3,3,2,3,3,3,3,3,2,3,3,3,3,3,1,1,3,1,3,3,2,0,0,0,1,1,0,2,2,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,2,1,3,3,3,2,3,2,3,1,1,1,0,0,2,1,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,2,3,1,3,2,3,2,3,1,1,1,0,1,1,0,0,1,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,1,3,2,3,3,2,3,2,3,1,3,0,2,1,0,
  3,3,3,3,3,3,3,3,3,3,2,3,3,2,3,3,2,3,3,2,0,3,1,1,3,1,2,3,3,3,0,3,1,2,1,0,0,1,
  3,3,3,2,3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,3,1,3,2,2,1,1,2,0,2,0,1,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,0,3,3,3,3,3,1,1,0,2,0,3,3,0,3,
  3,3,3,3,3,3,3,3,3,1,3,3,3,3,3,3,3,3,3,3,2,3,3,0,2,3,3,2,3,3,1,0,1,0,0,0,0,2,
  3,3,3,3,3,3,2,3,3,3,3,3,3,2,3,2,3,3,3,2,1,3,1,0,3,3,1,3,2,1,0,1,1,1,0,2,0,0,
  3,3,3,2,3,3,3,3,3,3,3,3,2,2,3,1,2,3,2,2,3,3,1,0,3,1,3,1,2,2,0,3,1,2,0,0,2,0,
  3,3,3,3,3,2,3,2,3,3,2,3,3,3,3,1,1,1,3,2,1,3,1,0,3,1,2,3,1,3,0,1,1,2,0,1,1,0,
  3,3,3,2,3,3,3,3,3,3,2,2,2,3,3,1,2,3,2,2,1,2,0,0,3,1,2,1,1,2,2,2,1,2,0,0,1,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,1,1,0,1,3,2,0,2,0,1,0,0,3,0,0,0,0,
  3,3,2,1,3,3,1,2,3,3,2,1,1,1,3,0,1,1,1,3,1,2,0,0,3,1,2,1,1,2,0,1,1,1,0,0,1,0,
  3,3,3,3,3,3,3,3,3,3,2,1,3,2,3,1,3,3,2,2,1,3,1,1,3,1,2,2,1,1,0,1,1,1,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,2,2,3,1,3,1,1,1,2,2,1,3,1,0,3,1,2,3,2,1,0,3,0,2,0,1,2,0,
  3,3,3,3,3,3,3,3,3,3,2,2,2,1,3,2,1,2,3,1,1,3,1,1,2,3,2,1,1,2,0,0,1,2,0,1,2,0,
  3,3,3,2,3,3,3,3,3,3,2,2,2,1,3,1,2,1,2,3,1,1,1,0,2,1,2,1,1,2,0,0,0,1,0,1,1,0,
  1,2,0,1,1,1,1,1,1,3,1,1,1,1,0,1,0,0,1,1,1,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,2,3,3,3,3,2,3,3,3,3,3,2,2,1,2,1,1,1,1,0,1,1,1,2,1,0,1,0,0,1,0,0,0,1,
  3,3,1,0,3,1,3,1,2,3,1,3,1,3,2,3,1,2,1,2,2,2,3,0,0,1,1,1,1,0,0,0,0,0,0,0,1,0,
  0,0,1,1,1,1,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,3,3,0,3,3,3,1,0,3,3,3,1,0,3,3,0,2,1,2,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,
  3,3,1,1,3,2,1,1,3,3,1,1,1,2,2,1,1,1,1,1,0,1,0,3,0,1,1,1,1,0,0,0,0,0,0,0,0,0,
  3,3,3,2,3,3,2,3,3,3,2,1,3,1,2,1,2,3,1,1,1,3,1,0,0,1,2,2,0,0,1,0,0,1,1,0,0,0,
  3,3,3,3,3,2,2,2,3,2,2,2,1,1,1,1,1,3,2,1,0,2,1,0,1,1,2,3,1,0,0,0,0,0,0,0,0,0,
  3,3,1,2,3,1,1,2,3,2,1,1,2,1,2,1,1,2,2,1,1,2,0,1,1,1,2,1,3,0,0,0,0,0,0,0,0,0,
  0,0,1,2,0,1,3,2,0,0,0,2,3,1,0,2,0,0,0,0,2,0,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,
  0,3,0,0,0,0,0,1,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,1,2,0,1,3,3,0,0,1,0,3,2,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,
  0,0,1,3,0,1,3,3,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,
  1,0,1,2,0,1,3,2,1,0,0,3,2,1,0,0,3,0,2,0,2,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,1,0,2,3,2,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,2,0,1,0,0,3,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  2,1,2,2,0,1,2,1,2,0,2,2,1,0,0,1,1,0,1,1,2,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,
};


const SequenceModel Iso_8859_15FrenchModel =
{
  Iso_8859_15_CharToOrderMap,
  FrenchCompactedLangModel,
  FrenchOrderWidth,
  0.9990023637955258f,
  PR_TRUE,
  "ISO-8859-15",
  "fr"
};

const SequenceModel Iso_8859_1FrenchModel =
{
  Iso_8859_1_CharToOrderMap,
  FrenchCompactedLangModel,
  FrenchOrderWidth,
  0.9990023637955258f,
  PR_TRUE,
  "ISO-8859-1",
  "fr"
};

const SequenceModel Windows_1252FrenchModel =
{
  Windows_1252_CharToOrderMap,
  FrenchCompactedLangModel,
  FrenchOrderWidth,
  0.9990023637955258f,
  PR_TRUE,
  "WINDOWS-1252",
  "fr"
};

const LanguageModel FrenchModel =
{
  "fr",
  Unicode_CharOrder,
  Unicode_Char_size,

  FrenchFCMLowerBound,
  FrenchFCMUpperBound,
  FrenchUnicodeCharToOrderIsReduced,
  FrenchUnicodeCharToOrder,
  FrenchUnicodeCharToOrderFirstTableChunkSize,
  FrenchUnicodeCharToOrderSecondTableChunkOffset,
  FrenchUnicodeCharToOrderSecondTableChunkSize,
  FrenchUnicodeCharToOrder2,
  OrderToRatio,
  FrenchCompactedLangModel,
  FrenchOrderWidth,
  5,
  0.44222885228382f,
  19,
  0.038146634669000215f,
  0.9996113393984634f,
};
