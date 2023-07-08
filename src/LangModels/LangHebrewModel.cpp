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

/********* Language model for: Hebrew *********/

/**
 * Generated by BuildLangModel.py
 * On: 2023-07-08 21:11:56.941439
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



#define IRR     96

#define HebrewOrderWidth         (IRR + 1)


static const unsigned char Iso_8859_8_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM, 45, 50, 47, 49, 61, 59, 57, 62, 51, 73, 68, 58, 44, 66, 64, /* 4X */
   53, 77, 60, 41, 42, 72, 67, 65, 74, 71, 78,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM, 26, 55, 37, 39, 24, 54, 43, 38, 28, 75, 52, 34, 40, 30, 27, /* 6X */
   48, 76, 29, 33, 31, 36, 56, 63, 70, 46, 69,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,CTR,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM,IRR,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,CTR, /* BX */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* CX */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,SYM, /* DX */
    8,  6, 20, 12,  2,  1, 23, 15, 19,  0, 25, 18,  3, 11,  7, 22, /* EX */
   10, 17, 13, 32, 16, 35, 21, 14,  4,  9,  5,CTR,CTR,SYM,SYM,CTR, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Windows_1255_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM, 45, 50, 47, 49, 61, 59, 57, 62, 51, 73, 68, 58, 44, 66, 64, /* 4X */
   53, 77, 60, 41, 42, 72, 67, 65, 74, 71, 78,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM, 26, 55, 37, 39, 24, 54, 43, 38, 28, 75, 52, 34, 40, 30, 27, /* 6X */
   48, 76, 29, 33, 31, 36, 56, 63, 70, 46, 69,SYM,SYM,SYM,SYM,CTR, /* 7X */
  SYM,CTR,SYM,IRR,SYM,SYM,SYM,SYM,IRR,SYM,CTR,SYM,CTR,CTR,CTR,CTR, /* 8X */
  CTR,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,CTR,SYM,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,IRR,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM,IRR,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* CX */
  SYM,SYM,SYM,SYM, 81,IRR, 92,SYM,SYM,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* DX */
    8,  6, 20, 12,  2,  1, 23, 15, 19,  0, 25, 18,  3, 11,  7, 22, /* EX */
   10, 17, 13, 32, 16, 35, 21, 14,  4,  9,  5,CTR,CTR,SYM,SYM,CTR, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Ibm862_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM, 45, 50, 47, 49, 61, 59, 57, 62, 51, 73, 68, 58, 44, 66, 64, /* 4X */
   53, 77, 60, 41, 42, 72, 67, 65, 74, 71, 78,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM, 26, 55, 37, 39, 24, 54, 43, 38, 28, 75, 52, 34, 40, 30, 27, /* 6X */
   48, 76, 29, 33, 31, 36, 56, 63, 70, 46, 69,SYM,SYM,SYM,SYM,CTR, /* 7X */
    8,  6, 20, 12,  2,  1, 23, 15, 19,  0, 25, 18,  3, 11,  7, 22, /* 8X */
   10, 17, 13, 32, 16, 35, 21, 14,  4,  9,  5,SYM,SYM,SYM,SYM,IRR, /* 9X */
   79, 82, 83, 85, 90,IRR,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* CX */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* DX */
   84, 87,IRR, 88, 93, 91,IRR, 86,IRR, 94,IRR, 89,SYM, 95, 80,SYM, /* EX */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

#define Unicode_Char_size    96

static const PRUint32 Unicode_CharOrder[] =
{
    65, 45,   66, 50,   67, 47,   68, 49,   69, 61,   70, 59,   71, 57,   72, 62,
    73, 51,   74, 73,   75, 68,   76, 58,   77, 44,   78, 66,   79, 64,   80, 53,
    81, 77,   82, 60,   83, 41,   84, 42,   85, 72,   86, 67,   87, 65,   88, 74,
    89, 71,   90, 78,   97, 26,   98, 55,   99, 37,  100, 39,  101, 24,  102, 54,
   103, 43,  104, 38,  105, 28,  106, 75,  107, 52,  108, 34,  109, 40,  110, 30,
   111, 27,  112, 48,  113, 76,  114, 29,  115, 33,  116, 31,  117, 36,  118, 56,
   119, 63,  120, 70,  121, 46,  122, 69,  223, 87,  225, 79,  237, 82,  241, 90,
   243, 83,  250, 85,  920, 94,  931, 93,  945, 84,  948, 89,  949, 80,  960, 88,
   963, 91,  964, 86,  966, 95, 1488,  8, 1489,  6, 1490, 20, 1491, 12, 1492,  2,
  1493,  1, 1494, 23, 1495, 15, 1496, 19, 1497,  0, 1498, 25, 1499, 18, 1500,  3,
  1501, 11, 1502,  7, 1503, 22, 1504, 10, 1505, 17, 1506, 13, 1507, 32, 1508, 16,
  1509, 35, 1510, 21, 1511, 14, 1512,  4, 1513,  9, 1514,  5, 1520, 81, 1522, 92,
};

static const float OrderToRatio[] =
{
  0.114207718f,  0.109445812f,  0.082148042f,  0.060661981f,  0.059304700f,  0.054282227f,  0.053187701f,  0.048611255f, 
  0.045982496f,  0.041891695f,  0.034729999f,  0.027198113f,  0.025222715f,  0.025177262f,  0.023637682f,  0.021489465f, 
  0.021298172f,  0.021100559f,  0.017955042f,  0.016017563f,  0.015835507f,  0.012474390f,  0.012187329f,  0.008718048f, 
  0.003847006f,  0.003678318f,  0.002946932f,  0.002767792f,  0.002642857f,  0.002354580f,  0.002330760f,  0.002167663f, 
  0.002109570f,  0.001849975f,  0.001628056f,  0.001342210f,  0.001208767f,  0.001060497f,  0.001051260f,  0.000977368f, 
  0.000837362f,  0.000703676f,  0.000626867f,  0.000614471f,  0.000603533f,  0.000596241f,  0.000587734f,  0.000560996f, 
  0.000492452f,  0.000473979f,  0.000466201f,  0.000426581f,  0.000418560f,  0.000407136f,  0.000405920f,  0.000398385f, 
  0.000377968f,  0.000364599f,  0.000363384f,  0.000361925f,  0.000354390f,  0.000323521f,  0.000276123f,  0.000273206f, 
  0.000263727f,  0.000262754f,  0.000260810f,  0.000203689f,  0.000148999f,  0.000127124f,  0.000122505f,  0.000105734f, 
  0.000103546f,  0.000096983f,  0.000074378f,  0.000053231f,  0.000032328f,  0.000026737f,  0.000023577f,  0.000010938f, 
  0.000006806f,  0.000006320f,  0.000005347f,  0.000005347f,  0.000003160f,  0.000002917f,  0.000001701f,  0.000001458f, 
  0.000001458f,  0.000000972f,  0.000000729f,  0.000000729f,  0.000000729f,  0.000000486f,  0.000000243f,  0.000000243f, 
  0
};


/* Model Table:
 * Number of web pages processed for this model: 876
 * Number of characters consumed for this model: 4114109
 * Total considered sequences: 2425 / 9216
 *
 * - Positive sequences: first 907 (0.9950109023428438)
 * - Probable sequences: next 436 (1343-907) (0.0039891749787366315)
 * - Neutral sequences: last 7873 (0.0009999226784195292)
 * - Negative sequences: 6791 (off-ratio, TODO)
 */
#define HebrewUnicodeCharToOrderIsReduced  0


#define HebrewFCMLowerBound  65
#define HebrewFCMUpperBound  1522


static const PRUint8 HebrewUnicodeCharToOrder[] =
{
  45,50,47,49,61,59,57,62,51,73,68,58,44,66,64,53,77,60,41,42,
  72,67,65,74,71,78,IRR,IRR,IRR,IRR,IRR,IRR,26,55,37,39,24,54,43,38,
  28,75,52,34,40,30,27,48,76,29,33,31,36,56,63,70,46,69,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,87,IRR,
  79,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,82,IRR,IRR,IRR,90,IRR,83,IRR,
  IRR,IRR,IRR,IRR,IRR,85,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
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
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,94,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,93,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  84,IRR,IRR,89,80,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,88,IRR,IRR,91,86,
  IRR,95,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
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
  IRR,IRR,IRR,8,6,20,12,2,1,23,15,19,0,25,18,3,11,7,22,10,
  17,13,32,16,35,21,14,4,9,5,IRR,IRR,IRR,IRR,IRR,81,IRR,92,
};



#define HebrewUnicodeCharToOrderFirstTableChunkSize    186
#define HebrewUnicodeCharToOrderSecondTableChunkOffset 855
#define HebrewUnicodeCharToOrderSecondTableChunkSize   603


static const PRUint8 HebrewUnicodeCharToOrder2[] =
{
  94,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,93,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,84,IRR,IRR,89,80,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  88,IRR,IRR,91,86,IRR,95,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
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
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,8,6,20,12,2,1,23,15,19,0,25,18,
  3,11,7,22,10,17,13,32,16,35,21,14,4,9,5,IRR,IRR,IRR,IRR,IRR,
  81,IRR,92,
};

static const PRUint8 HebrewCompactedLangModel[] =
{
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,0,0,0,0,0,0,
  3,0,0,3,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,0,0,0,0,0,0,
  3,0,0,3,0,0,1,0,0,0,0,0,0,1,0,1,0,1,1,1,0,0,0,0,0,0,1,0,1,1,0,0,
  0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,1,0,0,1,0,0,0,
  0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,1,0,1,1,1,0,0,1,0,
  0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,0,0,0,0,0,0,
  3,0,0,3,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,
  0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,0,0,0,0,0,0,
  3,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,0,2,0,0,0,0,0,0,
  3,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,2,0,0,0,0,0,0,
  1,0,0,3,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,0,0,0,0,0,0,
  0,0,0,3,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,0,3,0,0,0,0,0,0,
  3,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,0,0,0,0,0,0,
  3,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,2,0,0,0,0,0,0,
  3,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  1,0,2,1,1,1,2,1,1,1,1,0,1,0,1,1,1,1,1,1,1,0,0,1,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,2,0,0,0,0,0,0,
  3,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,2,3,3,3,3,1,3,1,3,3,3,3,3,3,3,3,0,1,0,0,0,0,0,0,
  2,0,0,3,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,2,3,3,3,0,0,0,0,0,0,0,0,
  3,0,0,2,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,2,3,3,3,3,3,3,3,3,0,1,0,0,0,0,0,0,
  2,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,0,3,0,0,0,0,0,0,
  2,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,2,0,3,0,0,0,0,0,0,
  3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,0,0,0,0,0,0,
  2,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,0,1,0,0,0,0,0,0,
  2,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,3,3,1,3,3,2,3,3,0,0,0,0,0,0,0,0,
  2,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,1,3,3,3,3,3,3,3,2,0,3,3,3,3,0,0,0,0,0,0,0,0,0,
  2,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  1,0,1,0,0,1,1,1,1,1,0,0,0,1,1,0,0,0,1,0,1,1,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,1,3,3,3,3,3,3,2,2,3,2,3,3,3,2,0,1,0,0,0,0,0,0,
  2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,0,0,0,0,3,0,3,3,3,3,3,3,
  0,3,3,0,3,3,2,3,3,1,1,3,2,0,3,2,3,1,1,1,3,1,3,3,3,1,1,1,1,0,1,3,
  0,0,1,0,0,2,3,1,0,1,1,1,2,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,3,0,2,1,3,3,3,3,
  0,3,3,0,3,3,3,3,3,2,1,3,0,0,3,0,3,0,0,0,3,0,3,3,3,0,1,0,0,0,0,3,
  1,0,0,0,0,3,2,0,0,0,0,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,3,3,3,3,3,3,
  0,3,3,0,3,3,2,3,3,0,1,3,0,0,3,1,3,1,0,1,3,2,3,3,3,1,0,0,0,0,1,3,
  0,0,0,0,1,2,3,0,1,0,0,3,1,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,3,0,3,3,2,3,3,3,
  0,3,3,0,3,3,1,3,3,1,2,3,1,0,1,1,3,1,0,0,3,1,3,3,3,1,1,1,1,0,1,1,
  2,0,0,0,1,3,2,0,0,0,0,2,2,0,0,1,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,
  0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,3,3,3,3,3,3,
  0,3,3,0,3,3,2,3,3,1,1,3,1,0,3,1,3,0,0,0,3,1,2,3,3,1,0,1,0,1,0,2,
  0,0,1,0,1,1,0,0,1,1,1,1,1,0,0,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,1,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,3,3,3,2,3,3,
  0,3,2,0,3,3,2,3,2,1,0,3,1,2,3,1,1,2,1,0,3,0,2,2,2,0,1,0,1,0,1,2,
  1,0,0,0,1,3,1,0,1,1,0,2,2,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,
  0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,3,0,3,3,3,3,2,3,
  0,3,3,0,3,3,3,1,2,1,1,1,1,1,3,1,2,0,1,0,1,0,2,3,2,2,0,0,1,1,1,2,
  0,1,1,0,0,2,0,0,1,1,1,1,0,0,0,1,0,0,1,1,0,1,0,0,0,0,0,0,0,0,0,0,
  1,0,1,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,3,0,3,3,3,2,1,3,
  0,3,2,0,3,3,3,2,2,1,1,1,1,0,2,0,3,0,0,0,3,1,2,2,1,0,0,1,1,0,0,1,
  0,1,0,0,0,2,0,0,0,0,0,1,1,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,3,3,3,1,1,3,
  0,3,3,0,3,2,2,3,3,1,0,1,3,0,3,0,2,2,0,0,3,0,2,2,2,0,0,1,0,0,0,2,
  0,0,0,0,0,1,0,0,0,0,0,1,0,0,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,1,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,3,0,3,1,3,3,3,3,
  0,3,3,0,1,3,1,3,3,0,2,3,0,1,1,0,3,0,1,0,2,1,2,3,2,0,0,1,0,0,0,0,
  0,1,1,0,1,1,2,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,
  0,0,1,1,1,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,1,0,0,3,0,3,3,3,3,1,3,
  0,3,3,0,3,3,3,0,1,0,1,0,1,1,2,1,0,1,3,0,3,0,0,0,0,2,0,1,0,0,0,1,
  1,0,1,1,1,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,3,3,3,3,3,3,
  0,2,2,0,3,0,1,1,2,0,0,1,1,0,3,1,0,1,0,0,2,1,1,1,1,1,0,0,2,0,0,2,
  0,1,1,0,0,1,0,0,0,0,0,0,1,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,3,0,3,3,3,3,2,2,
  0,3,2,0,3,1,1,2,2,2,0,2,0,1,3,1,1,0,2,2,0,1,1,2,2,0,0,2,1,0,2,1,
  1,1,0,0,0,1,0,0,0,0,0,1,1,0,1,1,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,
  1,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,3,0,3,3,3,1,2,1,
  0,3,1,0,3,1,0,1,3,0,1,0,0,0,2,0,3,0,0,0,0,1,1,3,0,0,0,1,0,0,0,1,
  0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,3,3,3,1,1,3,
  0,1,2,0,3,3,3,0,2,2,2,1,2,3,2,2,3,2,1,2,2,2,1,0,0,1,1,1,1,2,2,2,
  2,1,1,2,1,2,0,1,1,0,1,0,2,1,1,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,3,0,3,3,3,3,0,0,
  0,1,1,0,3,0,3,0,0,2,1,0,2,2,1,2,0,1,1,2,0,3,0,0,1,1,2,1,2,2,2,2,
  2,1,1,2,0,1,0,1,0,0,1,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,3,3,3,3,2,2,
  0,3,3,0,3,0,3,1,1,0,0,2,1,1,2,0,1,0,1,1,2,0,1,1,1,1,0,1,0,1,1,1,
  0,1,1,0,0,1,1,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,3,3,3,2,1,0,
  0,1,0,0,3,2,1,0,0,2,2,1,1,2,3,2,0,3,1,2,0,2,1,1,0,1,2,1,1,2,1,0,
  1,1,1,1,1,0,0,1,1,1,1,0,0,1,1,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,
  0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,2,3,3,2,
  0,2,3,0,2,2,1,2,3,2,2,2,2,2,1,2,2,2,2,2,1,2,2,2,2,2,2,1,2,1,1,2,
  1,1,2,2,1,1,1,1,1,1,2,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,2,2,2,2,3,2,
  0,3,3,0,2,2,1,2,2,2,1,2,0,0,0,1,2,1,0,1,1,0,1,3,1,0,0,1,0,0,0,1,
  0,0,1,0,0,1,1,0,0,0,1,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,3,3,3,3,1,1,
  0,1,3,0,2,0,3,0,0,2,1,0,2,2,3,2,0,2,2,2,0,2,0,0,1,2,1,1,2,2,2,0,
  2,1,2,1,1,1,0,0,1,1,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,3,3,3,3,2,3,
  0,3,3,0,3,0,3,1,2,0,0,1,1,0,2,1,3,1,0,0,1,0,1,1,0,0,0,0,0,0,1,1,
  0,0,0,0,0,1,1,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,3,0,3,3,3,3,0,0,
  0,1,0,0,2,0,0,0,0,2,1,0,1,2,2,2,0,2,2,1,0,1,0,3,0,1,1,2,1,3,1,1,
  1,2,2,2,0,1,1,0,1,1,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,3,3,3,3,0,0,
  0,1,3,0,3,0,0,0,0,2,2,0,2,2,2,3,1,2,2,2,0,1,0,0,0,0,1,1,1,1,0,0,
  2,1,1,0,1,0,0,1,1,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,0,2,3,3,
  0,3,2,0,1,2,0,2,2,3,2,1,3,3,2,2,1,2,2,3,1,2,2,1,1,2,2,1,1,1,1,0,
  1,1,2,2,1,1,0,0,1,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,3,2,3,2,1,3,
  0,2,3,0,2,1,1,0,1,1,1,1,1,0,2,0,1,0,0,0,1,0,1,1,0,0,0,0,1,0,0,2,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,3,0,3,3,3,3,0,1,
  0,2,3,0,2,0,2,0,0,2,3,1,1,2,1,2,0,2,1,2,0,1,1,0,1,1,3,1,2,1,1,1,
  1,1,1,1,1,0,0,0,1,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,2,3,3,3,1,3,
  0,1,2,0,2,0,0,1,2,0,0,1,1,0,1,0,0,1,0,0,0,0,3,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,3,3,3,3,1,1,
  0,2,3,0,3,1,1,1,2,0,0,0,0,0,2,1,0,0,0,0,0,0,1,2,0,0,0,0,0,0,1,1,
  0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,3,2,3,2,1,0,
  0,1,0,0,1,1,0,2,0,0,0,1,0,0,1,0,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,1,
  1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,3,0,3,3,2,3,1,0,
  0,1,2,0,2,0,2,0,1,1,1,0,1,2,1,1,0,1,2,2,0,3,0,1,0,1,1,1,1,2,1,1,
  2,0,2,1,0,0,0,1,1,0,0,1,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,3,3,3,0,0,1,
  0,0,1,0,2,0,1,0,0,1,1,0,1,2,1,2,0,1,1,2,0,1,0,0,1,1,1,3,1,2,1,0,
  1,0,1,1,1,0,0,0,0,0,1,0,0,1,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,3,3,3,3,0,0,
  0,1,2,0,3,0,0,0,0,2,1,0,2,2,0,1,0,1,2,2,0,1,0,0,1,1,2,1,1,2,1,0,
  1,1,0,0,1,0,0,1,1,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,3,3,3,0,0,0,
  0,1,0,0,2,0,2,1,0,2,2,0,1,2,1,2,0,1,1,2,0,2,0,0,0,2,1,1,1,2,1,0,
  2,1,2,1,1,0,0,1,1,1,0,1,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,1,1,2,3,2,
  0,2,2,0,2,2,1,2,2,3,1,2,2,2,2,2,2,3,1,1,1,2,1,0,3,1,1,1,2,2,0,1,
  1,1,2,1,1,1,3,0,1,1,1,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,3,3,3,1,0,1,
  0,0,0,0,3,0,0,0,0,1,1,1,1,2,2,1,0,1,1,2,0,1,0,0,1,0,2,1,1,1,1,0,
  2,1,1,1,1,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,3,2,3,1,2,1,
  0,2,2,0,0,1,1,1,1,0,0,1,0,1,1,0,1,0,0,0,1,0,1,2,0,0,0,1,0,0,1,2,
  0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,3,3,1,
  0,1,2,0,2,2,1,1,1,2,2,1,1,1,0,2,2,2,1,1,2,1,3,1,2,1,2,1,2,1,1,2,
  2,1,2,1,2,1,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,3,3,3,2,0,0,
  0,0,1,0,1,0,3,0,0,2,1,0,1,1,1,1,0,1,1,1,0,1,0,0,0,0,1,1,0,1,1,0,
  1,1,1,1,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,
  0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,3,3,3,1,0,0,
  0,0,0,0,2,0,0,0,0,2,2,1,2,2,1,2,0,2,2,1,1,2,0,0,2,1,1,1,1,2,2,0,
  2,1,2,2,1,0,0,2,1,1,1,0,0,1,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,2,2,3,0,0,0,
  0,0,1,0,2,0,0,0,0,1,1,1,1,1,0,1,0,2,1,2,0,1,0,0,0,0,1,1,1,1,1,0,
  1,0,1,1,1,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,2,2,3,2,2,0,
  0,0,1,0,2,0,1,0,0,1,1,0,1,1,2,1,0,1,1,1,0,1,0,0,1,1,1,1,1,1,1,1,
  1,0,1,1,1,0,1,2,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,3,0,2,2,2,1,0,1,
  0,1,1,0,2,0,1,1,1,0,0,1,0,1,2,0,1,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1,
  0,0,0,0,0,2,0,0,1,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,2,1,2,0,1,2,
  0,1,1,0,1,1,1,0,2,0,0,0,0,0,2,0,2,0,1,0,0,0,1,1,1,0,0,0,1,0,0,1,
  0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,2,3,1,0,0,0,
  0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,1,0,0,1,0,0,1,0,0,0,1,0,0,0,1,0,0,
  1,1,0,0,0,0,0,0,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,2,3,1,
  0,2,2,0,0,0,0,0,1,2,1,1,1,1,1,1,2,1,1,0,1,1,0,1,0,0,2,1,1,0,0,0,
  0,1,2,0,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,3,3,2,1,0,0,
  0,0,0,0,2,0,1,0,1,1,1,0,0,1,0,1,0,1,0,0,0,0,0,0,0,1,1,1,1,1,1,0,
  1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,1,1,1,
  0,0,0,0,1,0,1,0,1,1,1,0,1,1,1,0,1,1,1,1,0,1,0,3,0,0,1,1,1,1,0,0,
  1,0,1,1,0,0,0,1,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,2,2,1,0,1,0,
  0,0,0,0,2,0,0,1,0,0,0,1,0,1,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,
  0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,
  0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,
  0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,1,1,0,0,0,0,
  0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,1,2,1,0,1,0,
  0,1,0,0,1,0,1,0,0,1,0,0,1,0,1,0,0,0,0,1,0,1,0,0,0,1,0,0,0,1,0,0,
  1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,2,1,
  0,1,1,0,0,1,1,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,
  0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,
  0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,2,0,
  0,1,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,
  0,1,1,0,0,0,0,1,1,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,
  0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,
  0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,
  0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,
  0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
};


const SequenceModel Iso_8859_8HebrewModel =
{
  Iso_8859_8_CharToOrderMap,
  HebrewCompactedLangModel,
  HebrewOrderWidth,
  0.9990000773215805f,
  PR_FALSE,
  "ISO-8859-8",
  "he"
};

const SequenceModel Windows_1255HebrewModel =
{
  Windows_1255_CharToOrderMap,
  HebrewCompactedLangModel,
  HebrewOrderWidth,
  0.9990000773215805f,
  PR_FALSE,
  "WINDOWS-1255",
  "he"
};

const SequenceModel Ibm862HebrewModel =
{
  Ibm862_CharToOrderMap,
  HebrewCompactedLangModel,
  HebrewOrderWidth,
  0.9990000773215805f,
  PR_FALSE,
  "IBM862",
  "he"
};

const LanguageModel HebrewModel =
{
  "he",
  Unicode_CharOrder,
  Unicode_Char_size,

  HebrewFCMLowerBound,
  HebrewFCMUpperBound,
  HebrewUnicodeCharToOrderIsReduced,
  HebrewUnicodeCharToOrder,
  HebrewUnicodeCharToOrderFirstTableChunkSize,
  HebrewUnicodeCharToOrderSecondTableChunkOffset,
  HebrewUnicodeCharToOrderSecondTableChunkSize,
  HebrewUnicodeCharToOrder2,
  OrderToRatio,
  HebrewCompactedLangModel,
  HebrewOrderWidth,
  5,
  0.42576825261557244f,
  28,
  0.03135162437358855f,
  1.0000000000000009f,
};
