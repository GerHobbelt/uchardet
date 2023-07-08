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

/********* Language model for: Greek *********/

/**
 * Generated by BuildLangModel.py
 * On: 2023-07-08 17:16:02.300947
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



#define IRR     54


static const unsigned char Iso_8859_7_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM, 27, 47, 38, 39, 25, 48, 46, 42, 30,IRR, 52, 37, 43, 33, 32, /* 4X */
   45,IRR, 34, 36, 35, 44, 50, 51,IRR, 49,IRR,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM, 27, 47, 38, 39, 25, 48, 46, 42, 30,IRR, 52, 37, 43, 33, 32, /* 6X */
   45,IRR, 34, 36, 35, 44, 50, 51,IRR, 49,IRR,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,ILL,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM,SYM, 17,SYM, 19, 22, 15,SYM, 16,SYM, 24, 31, /* BX */
  IRR,  0, 29, 18, 20,  4, 40,  9, 26,  3,  8, 14, 12,  5, 41,  1, /* CX */
   10,  6,ILL,  7,  2, 13, 28, 23, 53, 21,IRR,IRR, 17, 19, 22, 15, /* DX */
  IRR,  0, 29, 18, 20,  4, 40,  9, 26,  3,  8, 14, 12,  5, 41,  1, /* EX */
   10,  6, 11,  7,  2, 13, 28, 23, 53, 21,IRR,IRR, 16, 24, 31,ILL, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Windows_1253_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM, 27, 47, 38, 39, 25, 48, 46, 42, 30,IRR, 52, 37, 43, 33, 32, /* 4X */
   45,IRR, 34, 36, 35, 44, 50, 51,IRR, 49,IRR,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM, 27, 47, 38, 39, 25, 48, 46, 42, 30,IRR, 52, 37, 43, 33, 32, /* 6X */
   45,IRR, 34, 36, 35, 44, 50, 51,IRR, 49,IRR,SYM,SYM,SYM,SYM,CTR, /* 7X */
  SYM,ILL,SYM,SYM,SYM,SYM,SYM,SYM,ILL,SYM,ILL,SYM,ILL,ILL,ILL,ILL, /* 8X */
  ILL,SYM,SYM,SYM,SYM,SYM,SYM,SYM,ILL,SYM,ILL,SYM,ILL,ILL,ILL,ILL, /* 9X */
  SYM,SYM, 17,SYM,SYM,SYM,SYM,SYM,SYM,SYM,ILL,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM,IRR,SYM,SYM, 19, 22, 15,SYM, 16,SYM, 24, 31, /* BX */
  IRR,  0, 29, 18, 20,  4, 40,  9, 26,  3,  8, 14, 12,  5, 41,  1, /* CX */
   10,  6,ILL,  7,  2, 13, 28, 23, 53, 21,IRR,IRR, 17, 19, 22, 15, /* DX */
  IRR,  0, 29, 18, 20,  4, 40,  9, 26,  3,  8, 14, 12,  5, 41,  1, /* EX */
   10,  6, 11,  7,  2, 13, 28, 23, 53, 21,IRR,IRR, 16, 24, 31,ILL, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Cp737_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM, 27, 47, 38, 39, 25, 48, 46, 42, 30,IRR, 52, 37, 43, 33, 32, /* 4X */
   45,IRR, 34, 36, 35, 44, 50, 51,IRR, 49,IRR,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM, 27, 47, 38, 39, 25, 48, 46, 42, 30,IRR, 52, 37, 43, 33, 32, /* 6X */
   45,IRR, 34, 36, 35, 44, 50, 51,IRR, 49,IRR,SYM,SYM,SYM,SYM,CTR, /* 7X */
    0, 29, 18, 20,  4, 40,  9, 26,  3,  8, 14, 12,  5, 41,  1, 10, /* 8X */
    6,  7,  2, 13, 28, 23, 53, 21,  0, 29, 18, 20,  4, 40,  9, 26, /* 9X */
    3,  8, 14, 12,  5, 41,  1, 10,  6,  7, 11,  2, 13, 28, 23, 53, /* AX */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* CX */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* DX */
   21, 17, 19, 22,IRR, 15, 16, 24,IRR, 31, 17, 19, 22, 15, 16, 24, /* EX */
   31,SYM,SYM,SYM,IRR,IRR,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

#define Unicode_Char_size    108

static const PRUint32 Unicode_CharOrder[] =
{
   65,  27,  66,  47,  67,  38,  68,  39,  69,  25,  70,  48,  71,  46,  72,  42,
   73,  30,  75,  52,  76,  37,  77,  43,  78,  33,  79,  32,  80,  45,  82,  34,
   83,  36,  84,  35,  85,  44,  86,  50,  87,  51,  89,  49,  97,  27,  98,  47,
   99,  38, 100,  39, 101,  25, 102,  48, 103,  46, 104,  42, 105,  30, 107,  52,
  108,  37, 109,  43, 110,  33, 111,  32, 112,  45, 114,  34, 115,  36, 116,  35,
  117,  44, 118,  50, 119,  51, 121,  49, 902,  17, 904,  19, 905,  22, 906,  15,
  908,  16, 910,  24, 911,  31, 913,   0, 914,  29, 915,  18, 916,  20, 917,   4,
  918,  40, 919,   9, 920,  26, 921,   3, 922,   8, 923,  14, 924,  12, 925,   5,
  926,  41, 927,   1, 928,  10, 929,   6, 931,   7, 931,  11, 932,   2, 933,  13,
  934,  28, 935,  23, 936,  53, 937,  21, 940,  17, 941,  19, 942,  22, 943,  15,
  945,   0, 946,  29, 947,  18, 948,  20, 949,   4, 950,  40, 951,   9, 952,  26,
  953,   3, 954,   8, 955,  14, 956,  12, 957,   5, 958,  41, 959,   1, 960,  10,
  961,   6, 962,  11, 963,   7, 964,   2, 965,  13, 966,  28, 967,  23, 968,  53,
  969,  21, 972,  16, 973,  24, 974,  31,
};

static const float OrderToRatio[] =
{
  0.085025171f,  0.076718072f,  0.075829872f,  0.062454264f,  0.056532237f,  0.056319776f,  0.041929869f,  0.040810603f, 
  0.039284561f,  0.034316425f,  0.033956506f,  0.032612376f,  0.030935429f,  0.030041256f,  0.025752766f,  0.021972573f, 
  0.018679087f,  0.017987499f,  0.016947934f,  0.016601566f,  0.013944084f,  0.012474315f,  0.012360620f,  0.010588812f, 
  0.009090562f,  0.008995013f,  0.008609597f,  0.008050079f,  0.007568655f,  0.007376177f,  0.007171296f,  0.006525645f, 
  0.006516687f,  0.006428946f,  0.006239914f,  0.005846230f,  0.005614705f,  0.004531041f,  0.003499745f,  0.003467818f, 
  0.003437500f,  0.003183695f,  0.002988002f,  0.002795983f,  0.002515305f,  0.002109218f,  0.002031814f,  0.001925698f, 
  0.001708414f,  0.001452772f,  0.001152800f,  0.001031755f,  0.001017055f,  0.001017055f, 
  0
};


/* Model Table:
 * Number of web pages processed for this model: 598
 * Number of characters consumed for this model: 4353746
 * Total considered sequences: 1843 / 2916
 *
 * - Positive sequences: first 960 (0.9950168640195097)
 * - Probable sequences: next 239 (1199-960) (0.003983320561798287)
 * - Neutral sequences: last 1717 (0.000999815418691985)
 * - Negative sequences: 1073 (off-ratio, TODO)
 */


#define GreekUnicodeAlphabetWidth         108
#define GreekUnicodeCharToOrderIsReduced  0


#define GreekOrderMatrixWidth         (IRR + 1)


#define GreekFCMLowerBound  65
#define GreekFCMUpperBound  974


static const PRUint8 GreekUnicodeCharToOrder[] =
{
  27,47,38,39,25,48,46,42,30,IRR,52,37,43,33,32,45,IRR,34,36,35,
  44,50,51,IRR,49,IRR,IRR,IRR,IRR,IRR,IRR,IRR,27,47,38,39,25,48,46,42,
  30,IRR,52,37,43,33,32,45,IRR,34,36,35,44,50,51,IRR,49,IRR,IRR,IRR,
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
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,17,IRR,19,
  22,15,IRR,16,IRR,24,31,IRR,0,29,18,20,4,40,9,26,3,8,14,12,
  5,41,1,10,6,IRR,11,2,13,28,23,53,21,IRR,IRR,17,19,22,15,IRR,
  0,29,18,20,4,40,9,26,3,8,14,12,5,41,1,10,6,11,7,2,
  13,28,23,53,21,IRR,IRR,16,24,31,
};

static const PRUint8 GreekCompactedLangModel[] =
{
  2,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,2,3,3,3,1,3,3,3,0,3,
  0,3,3,1,2,0,1,0,0,1,1,1,0,3,3,0,0,0,1,0,1,0,0,0,1,1,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,3,3,3,2,3,3,3,1,3,
  0,3,3,0,2,0,1,1,1,1,0,0,0,3,3,0,0,0,0,0,0,1,0,0,0,0,0,
  3,3,3,3,3,2,3,3,2,3,2,3,3,3,3,3,3,3,2,3,1,3,3,2,3,0,2,
  1,3,2,1,3,1,0,1,0,0,0,1,0,3,0,1,0,0,0,0,1,0,0,1,0,0,0,
  3,3,3,2,3,3,3,3,3,3,3,3,3,1,3,2,3,3,3,3,3,3,3,3,1,0,3,
  0,3,3,1,3,1,1,0,0,1,0,0,0,3,3,0,0,0,0,0,0,0,0,1,0,0,0,
  3,3,3,3,2,3,3,3,3,2,3,3,3,3,3,3,3,3,3,2,3,3,1,3,3,0,3,
  0,3,3,1,3,0,1,0,1,0,0,0,0,3,3,0,0,1,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,1,3,3,3,2,3,3,3,3,3,3,3,3,2,3,1,3,
  1,2,2,0,3,1,0,0,0,1,0,0,0,3,1,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,
  0,3,3,0,3,1,0,0,0,1,0,1,0,2,3,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,0,3,3,3,3,3,3,2,3,3,3,3,3,3,0,3,
  0,3,3,0,3,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,2,3,3,3,3,2,3,0,3,
  0,3,2,0,3,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
  1,1,3,1,2,3,3,3,3,1,3,3,3,0,3,2,0,1,3,1,3,1,1,3,1,0,3,
  1,3,2,0,1,0,0,0,0,0,0,0,0,1,3,0,0,0,1,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,2,1,3,3,2,2,3,3,3,3,3,1,3,0,3,3,1,3,0,1,
  0,1,1,1,3,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
  1,1,1,0,1,0,0,1,0,1,1,1,1,0,1,0,0,0,1,1,1,0,1,1,0,0,1,
  1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,
  3,3,2,3,3,3,2,2,1,3,3,3,3,3,2,3,3,3,1,3,1,3,3,2,3,0,0,
  1,3,3,1,3,1,0,0,0,0,1,1,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,3,3,3,3,3,3,2,3,3,0,0,3,
  0,3,3,0,2,0,0,1,0,0,0,0,0,3,3,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,1,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,2,3,0,3,
  0,3,3,0,3,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,1,3,3,3,3,3,3,3,3,3,0,3,0,0,0,3,0,3,3,0,3,0,0,3,
  1,3,3,0,0,1,0,0,0,1,0,0,0,3,3,0,0,0,0,0,0,0,0,0,0,0,0,
  2,3,3,3,3,3,3,3,3,3,3,3,3,2,3,0,0,0,3,0,3,1,0,3,0,0,3,
  0,3,3,0,0,0,0,0,0,0,0,0,0,3,2,0,1,0,0,0,0,0,0,0,0,0,0,
  2,3,3,3,3,3,3,3,3,2,3,3,3,1,3,0,0,0,3,0,3,1,0,3,0,0,3,
  0,3,3,0,0,0,1,0,0,0,0,1,0,3,3,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,1,3,3,3,3,0,3,3,1,1,3,3,3,3,3,3,3,3,2,3,3,3,3,0,0,
  1,0,1,0,3,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,1,3,3,3,1,3,1,0,0,3,0,3,3,0,3,0,0,3,
  0,3,3,0,0,0,1,0,0,0,0,0,0,3,3,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,0,3,3,1,3,1,1,3,0,0,2,3,1,3,3,3,1,3,1,3,3,0,3,0,1,
  0,1,1,1,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,
  2,2,3,2,1,3,3,3,3,1,3,3,3,1,3,2,1,3,3,1,3,1,3,2,0,0,3,
  0,2,3,0,1,0,0,0,0,0,0,0,0,2,3,0,0,0,0,0,0,0,0,0,0,0,0,
  1,0,3,1,1,3,3,3,3,1,3,3,3,0,3,0,0,0,3,0,3,0,0,3,0,0,3,
  0,3,2,0,0,0,0,0,1,1,0,0,0,1,2,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,1,0,3,1,1,3,3,3,3,3,3,1,3,0,3,3,1,3,1,3,
  0,1,1,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,2,3,3,3,3,3,2,3,3,3,1,3,0,0,0,3,0,3,2,0,3,0,0,3,
  0,3,3,0,0,0,0,0,0,0,0,0,0,3,3,0,0,0,0,0,0,0,0,0,0,0,0,
  1,1,1,0,1,0,0,1,0,1,1,0,1,0,1,0,0,0,1,0,1,1,0,0,0,3,1,
  3,1,0,3,0,3,3,3,3,3,3,3,3,0,1,3,3,3,3,3,3,3,3,3,3,3,0,
  3,3,0,3,3,3,3,1,1,3,1,0,3,3,3,3,3,3,1,3,0,3,3,0,3,0,0,
  1,1,1,0,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,1,1,0,1,1,1,0,1,1,1,0,1,0,0,0,0,0,1,0,0,0,0,1,1,3,0,
  2,0,0,3,0,2,3,3,3,3,3,3,3,0,0,3,3,3,3,3,3,3,3,3,3,3,0,
  3,3,3,3,3,2,3,2,1,3,1,1,2,3,3,3,3,3,2,3,0,3,3,1,3,0,3,
  0,2,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,
  3,3,1,3,3,1,3,1,1,3,1,1,1,3,3,3,3,3,2,3,3,3,3,1,2,1,1,
  1,0,2,0,3,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,
  0,0,0,1,0,1,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,3,0,
  3,0,0,3,0,3,3,3,3,3,3,3,3,0,0,2,3,3,3,3,3,3,1,3,2,3,0,
  3,2,3,3,1,3,3,3,2,3,3,3,3,0,3,0,0,0,2,0,3,2,0,2,0,0,3,
  0,1,3,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,
  0,1,0,1,0,1,1,1,1,1,1,1,0,1,0,1,0,0,1,0,1,0,0,0,1,3,0,
  3,0,0,3,0,3,3,3,3,3,3,3,3,0,0,3,3,3,3,3,3,3,3,3,3,3,0,
  1,1,1,0,1,0,0,0,0,1,0,0,0,0,0,1,0,1,0,1,0,0,0,0,0,3,0,
  3,0,0,3,0,3,3,2,3,3,2,3,3,0,0,3,2,3,2,3,3,3,3,2,2,3,0,
  0,1,1,0,1,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,3,1,
  3,0,0,3,0,3,3,3,3,3,3,3,3,0,0,2,3,3,3,3,3,3,3,3,2,3,0,
  1,1,0,0,0,0,1,0,0,1,0,0,0,0,0,0,1,1,0,1,0,0,1,0,0,3,0,
  3,0,0,3,0,3,2,3,3,3,3,3,2,1,0,3,2,3,3,1,2,2,3,2,3,1,0,
  0,1,1,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,3,1,
  3,0,1,3,0,3,3,2,3,3,3,3,2,1,0,3,3,3,3,2,3,2,3,2,2,3,0,
  0,1,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,1,0,0,0,3,0,
  3,0,0,3,0,3,2,1,3,3,3,2,3,0,0,2,3,3,2,2,3,3,3,2,1,2,0,
  0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,3,0,
  3,0,0,3,0,3,2,3,3,3,3,3,3,0,0,3,2,3,2,1,1,2,3,1,1,3,0,
  0,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,
  3,0,0,3,0,3,3,3,2,3,3,2,3,0,0,2,2,3,1,3,2,2,3,3,2,2,0,
  3,3,1,3,3,2,1,1,1,3,1,0,2,3,1,3,3,3,1,3,1,3,3,1,3,0,0,
  0,0,1,0,3,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,
  3,3,2,3,3,1,1,0,0,3,1,0,1,3,1,3,3,3,1,3,0,3,3,0,3,0,0,
  0,2,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,
  3,0,0,3,0,3,3,3,3,2,2,1,2,0,0,1,2,3,2,1,1,1,3,1,2,1,0,
  1,1,1,0,0,0,0,0,1,1,0,0,1,0,0,0,1,1,0,0,0,1,1,0,0,3,0,
  3,0,0,3,0,3,2,2,2,3,2,2,2,0,0,2,3,3,3,2,3,1,3,2,1,1,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,
  3,0,0,3,0,2,3,3,3,3,3,3,3,0,0,1,3,2,3,3,3,2,2,2,1,2,0,
  1,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,1,
  3,0,0,3,0,3,1,3,3,3,3,2,2,0,0,3,2,3,3,2,2,1,2,1,1,1,0,
  0,1,0,0,0,0,0,1,0,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,3,0,
  3,0,0,3,0,3,3,3,2,3,3,1,2,0,0,3,2,3,2,2,2,1,3,1,1,1,0,
  1,1,1,1,1,0,0,1,0,1,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,3,1,
  3,0,0,3,0,3,3,3,1,3,3,3,1,0,0,1,2,3,1,1,3,2,3,1,1,0,0,
  0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,3,0,
  3,0,0,3,0,3,1,3,3,2,3,2,1,0,0,1,1,3,1,1,2,3,1,1,2,1,0,
  0,1,1,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,1,
  3,0,0,1,0,3,3,2,3,3,3,2,2,0,0,1,2,2,2,1,3,1,1,1,2,1,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,
  3,0,0,3,0,3,1,2,1,1,1,1,3,0,0,2,1,2,1,1,1,1,1,1,1,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,
  3,0,1,3,0,3,3,2,1,3,2,1,1,0,0,3,1,1,1,1,1,1,2,1,3,1,0,
  1,1,1,0,0,0,0,0,0,1,0,0,0,0,1,0,1,1,0,1,1,0,0,0,0,3,0,
  3,0,0,3,0,3,2,2,2,3,2,1,1,0,0,2,2,2,1,1,1,1,2,1,2,1,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
};


const SequenceModel Iso_8859_7GreekModel =
{
  Iso_8859_7_CharToOrderMap,
  GreekCompactedLangModel,
  54,
  0.999000184581308f,
  PR_FALSE,
  "ISO-8859-7",
  "el"
};

const SequenceModel Windows_1253GreekModel =
{
  Windows_1253_CharToOrderMap,
  GreekCompactedLangModel,
  54,
  0.999000184581308f,
  PR_FALSE,
  "WINDOWS-1253",
  "el"
};

const SequenceModel Cp737GreekModel =
{
  Cp737_CharToOrderMap,
  GreekCompactedLangModel,
  54,
  0.999000184581308f,
  PR_FALSE,
  "CP737",
  "el"
};

const LanguageModel GreekModel =
{
  "el",
  Unicode_CharOrder,
  Unicode_Char_size,

  GreekFCMLowerBound,
  GreekFCMUpperBound,
  GreekUnicodeAlphabetWidth,
  GreekUnicodeCharToOrderIsReduced,
  GreekOrderMatrixWidth,
  GreekUnicodeCharToOrder,
  OrderToRatio,
  GreekCompactedLangModel,
  54,
  6,
  0.41287939167787924f,
  38,
  0.0318348842582916f,
  0.997974847407267f,
};
