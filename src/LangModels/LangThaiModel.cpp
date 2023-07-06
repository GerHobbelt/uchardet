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

/********* Language model for: Thai *********/

/**
 * Generated by BuildLangModel.py
 * On: 2023-07-06 21:07:49.293709
 **/

/* Character Mapping Table:
 * ILL: illegal character.
 * CTR: control character specific to the charset.
 * RET: carriage/return.
 * SYM: symbol (punctuation) that does not belong to word.
 * NUM: 0 - 9.
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
static const unsigned char Iso_8859_11_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, /* 4X */
   97, 98, 99,100,101,102,103,104,105,106,107,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122, /* 6X */
  123,124,125,126,127,128,129,130,131,132,133,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,  6, 32, 79, 25, 80, 59,  4, 27, 53, 30, 46, 66, 47, 57, 56, /* AX */
   50, 60, 58, 43, 15, 16, 44, 17, 42,  1, 18, 23, 48, 55, 24, 49, /* BX */
   40,  9, 13,  2, 51, 11, 81, 10, 36, 45, 19, 22, 61,  3, 52, 62, /* CX */
   21,SYM,  0, 28,SYM,SYM,SYM,SYM,SYM,SYM,SYM,ILL,ILL,ILL,ILL,SYM, /* DX */
    5, 26, 34, 35, 38, 78, 54,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,134, /* EX */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,135,136,ILL,ILL,ILL,ILL, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Tis_620_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151, /* 4X */
  152,153,154,155,156,157,158,159,160,161,162,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177, /* 6X */
  178,179,180,181,182,183,184,185,186,187,188,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  ILL,  6, 32, 79, 25, 80, 59,  4, 27, 53, 30, 46, 66, 47, 57, 56, /* AX */
   50, 60, 58, 43, 15, 16, 44, 17, 42,  1, 18, 23, 48, 55, 24, 49, /* BX */
   40,  9, 13,  2, 51, 11, 81, 10, 36, 45, 19, 22, 61,  3, 52, 62, /* CX */
   21,SYM,  0, 28,SYM,SYM,SYM,SYM,SYM,SYM,SYM,ILL,ILL,ILL,ILL,SYM, /* DX */
    5, 26, 34, 35, 38, 78, 54,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,189, /* EX */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,190,191,ILL,ILL,ILL,ILL, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const int Unicode_Char_size = 82;
static const unsigned int Unicode_CharOrder[] =
{
  3585,  6, 3586, 32, 3587, 79, 3588, 25, 3589, 80, 3590, 59, 3591,  4, 3592, 27,
  3593, 53, 3594, 30, 3595, 46, 3596, 66, 3597, 47, 3598, 57, 3599, 56, 3600, 50,
  3601, 60, 3602, 58, 3603, 43, 3604, 15, 3605, 16, 3606, 44, 3607, 17, 3608, 42,
  3609,  1, 3610, 18, 3611, 23, 3612, 48, 3613, 55, 3614, 24, 3615, 49, 3616, 40,
  3617,  9, 3618, 13, 3619,  2, 3620, 51, 3621, 11, 3622, 81, 3623, 10, 3624, 36,
  3625, 45, 3626, 19, 3627, 22, 3628, 61, 3629,  3, 3630, 52, 3631, 62, 3632, 21,
  3633,  8, 3634,  0, 3635, 28, 3636, 20, 3637, 14, 3638, 41, 3639, 33, 3640, 29,
  3641, 37, 3642, 64, 3648,  5, 3649, 26, 3650, 34, 3651, 35, 3652, 38, 3653, 78,
  3654, 54, 3655, 39, 3656,  7, 3657, 12, 3658, 63, 3659, 65, 3660, 31, 3661, 73,
  3664, 69, 3665, 68, 3666, 67, 3667, 72, 3668, 71, 3669, 70, 3670, 75, 3671, 76,
  3672, 77, 3673, 74,
};


/* Model Table:
 * Number of web pages processed for this model: 947
 * Number of characters consumed for this model: 4081766
 * Total considered sequences: 3141 / 6724
 *
 * - Positive sequences: first 1783 (0.9950130565312374)
 * - Probable sequences: next 461 (2244-1783) (0.003988983770761512)
 * - Neutral sequences: last 4480 (0.000997959698001094)
 * - Negative sequences: 3583 (off-ratio, TODO)
 */


#define ThaiFCMLowerBound  3585
#define ThaiFCMUpperBound  3673


static const PRUint8 ThaiFrequentCharMapping[] =
{
  7,33,80,26,81,60,5,28,54,31,47,67,48,58,57,51,61,59,44,16,
  17,45,18,43,2,19,24,49,56,25,50,41,10,14,3,52,12,82,11,37,
  46,20,23,62,4,53,63,22,9,1,29,21,15,42,34,30,38,65,0,0,
  0,0,0,6,27,35,36,39,79,55,40,8,13,64,66,32,74,0,0,70,
  69,68,73,72,71,76,77,78,75,
};

static const PRUint8 ThaiCompactedLangModel[] =
{
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,1,3,3,3,3,3,3,0,0,3,3,3,0,3,0,3,3,3,3,3,0,3,3,3,3,3,3,
  3,0,0,3,0,3,0,3,3,3,0,3,0,3,0,3,3,3,3,3,3,3,3,2,2,3,2,1,
  3,2,1,1,2,1,3,3,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,2,3,2,3,3,3,3,3,3,3,
  3,0,1,0,2,1,0,3,1,3,0,0,0,0,0,0,1,0,2,0,0,0,0,0,0,0,0,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,1,2,2,1,
  3,1,0,1,2,1,0,2,1,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
  3,3,3,3,2,3,3,3,3,3,3,3,3,3,2,3,2,3,1,3,3,3,3,1,1,2,2,1,
  2,1,0,0,1,1,1,1,2,1,2,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,
  0,3,3,3,3,3,3,3,3,3,3,3,3,2,3,2,3,3,3,3,3,3,2,3,3,3,3,3,
  3,1,2,3,1,3,2,3,3,3,3,3,1,3,1,3,1,3,3,3,2,3,3,2,3,3,3,3,
  3,0,0,0,3,1,0,1,0,2,0,1,1,1,0,1,1,1,0,0,1,0,0,0,1,0,0,
  0,0,3,3,3,3,3,3,0,0,3,3,3,0,3,0,3,3,3,3,3,0,0,3,3,3,3,1,
  3,0,0,3,0,3,0,0,0,3,0,0,0,3,0,3,3,3,3,3,1,3,3,1,0,3,3,0,
  2,1,0,2,1,2,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,2,3,3,3,3,3,3,3,
  3,3,3,0,2,0,0,1,3,1,2,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,
  0,3,3,3,3,3,3,3,1,0,3,3,3,0,3,0,3,3,3,3,3,0,1,3,3,3,3,3,
  3,3,0,3,0,3,0,3,3,3,0,3,0,3,0,2,1,3,0,3,1,3,2,1,1,3,2,2,
  3,0,0,0,1,0,0,1,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,
  0,1,3,2,1,3,1,3,3,0,3,3,3,3,3,0,3,3,3,3,3,0,0,1,3,3,3,1,
  3,0,0,3,0,2,0,0,0,3,0,0,0,0,0,3,3,1,2,2,3,0,2,3,0,1,0,0,
  1,3,2,3,1,1,1,0,3,0,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
  3,0,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,2,3,3,2,2,3,2,2,
  3,0,0,0,3,0,1,1,1,3,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
  3,1,3,3,3,3,1,3,3,3,2,3,3,3,1,2,3,3,1,3,2,3,3,1,3,3,2,1,
  3,1,0,0,0,1,2,1,1,0,1,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,0,3,2,3,3,2,1,2,1,0,
  2,0,1,0,0,1,0,3,1,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,
  0,3,3,3,3,3,3,3,1,0,3,3,3,0,3,0,3,3,3,3,3,0,1,3,3,3,3,3,
  3,3,0,3,0,3,0,3,3,3,0,3,0,3,0,2,0,3,0,3,1,3,2,1,1,2,2,1,
  3,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
  3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,3,3,2,1,1,2,2,3,
  3,0,0,0,1,0,0,2,1,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,
  0,0,3,3,3,3,3,3,3,0,3,3,3,3,3,0,3,3,3,3,3,0,0,3,3,3,3,3,
  3,0,0,3,0,3,0,3,3,3,0,3,0,3,0,3,2,3,2,3,1,3,3,3,1,2,2,1,
  3,1,1,0,2,1,3,1,2,0,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,1,3,1,3,3,2,1,2,2,2,
  2,0,0,0,1,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,1,3,0,3,2,3,2,1,2,1,1,0,
  1,1,0,0,1,0,0,1,3,3,2,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
  3,3,3,2,3,3,3,3,3,3,3,3,3,2,3,3,1,2,3,2,1,2,2,0,3,1,1,0,
  1,0,0,0,0,0,0,1,1,2,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
  3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,2,1,3,0,3,3,3,2,1,2,3,2,2,
  3,3,2,0,1,0,0,1,2,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
  3,3,3,3,3,3,3,3,3,2,3,3,2,3,3,3,1,3,0,3,1,2,2,1,2,1,1,1,
  1,1,0,0,0,0,0,1,0,2,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,
  0,1,3,3,3,3,3,3,3,0,3,3,3,3,3,0,3,3,3,3,3,0,0,3,3,3,3,3,
  3,0,0,3,3,3,0,3,3,3,0,3,0,3,0,3,3,3,3,3,3,2,3,3,1,2,2,0,
  1,1,3,1,1,1,1,1,2,0,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,3,3,3,3,3,3,0,0,3,3,3,0,3,0,3,3,3,3,3,0,1,3,3,3,3,3,
  3,0,0,3,0,3,0,3,3,3,0,3,0,3,0,3,1,3,2,3,3,3,2,1,2,3,2,1,
  3,1,1,0,2,1,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,3,3,3,3,2,3,3,3,3,3,3,3,3,2,2,3,2,1,3,3,3,2,2,2,1,1,
  1,1,3,1,3,1,1,1,1,2,3,1,3,3,2,1,1,0,1,0,3,0,0,1,1,0,0,0,
  0,0,0,0,0,0,1,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
  3,0,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,3,1,3,3,2,1,3,1,3,1,0,
  2,3,1,0,1,0,0,1,2,1,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
  3,2,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,0,2,3,2,1,2,3,1,1,0,
  1,0,0,0,1,1,0,3,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
  3,3,3,3,3,3,3,3,3,2,3,2,3,2,2,2,3,1,1,2,1,1,1,0,1,1,1,0,
  1,0,0,0,2,1,1,0,1,1,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,
  0,0,3,3,3,2,0,3,0,0,3,3,3,0,3,0,3,3,3,3,3,0,0,3,3,3,3,1,
  3,0,0,3,0,3,0,0,0,0,0,0,0,0,0,1,0,3,0,3,0,3,3,0,0,3,2,0,
  2,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,
  3,3,3,2,3,3,3,2,3,2,3,3,3,2,3,2,2,2,1,1,2,2,2,0,1,1,3,0,
  1,1,0,0,0,0,0,2,2,1,2,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,
  0,1,3,3,3,3,3,3,0,0,3,3,3,0,3,0,3,3,3,3,3,0,0,3,3,3,3,3,
  3,0,0,3,0,3,0,3,3,3,0,3,0,3,0,2,0,2,0,2,0,3,1,0,1,1,1,1,
  2,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,3,3,3,3,3,3,3,0,3,3,3,3,3,0,3,3,3,3,3,0,0,3,3,3,3,3,
  3,0,0,3,3,3,0,3,3,3,0,3,0,3,0,3,3,2,3,2,3,3,2,1,1,1,2,0,
  2,3,3,3,1,2,3,1,3,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,
  2,3,3,3,3,2,3,3,2,2,3,3,3,3,1,3,1,1,3,1,3,2,1,1,1,1,1,0,
  1,1,1,0,0,0,0,1,0,1,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,3,3,3,2,3,3,0,0,3,3,3,0,3,0,3,3,3,3,3,0,0,3,3,3,3,3,
  3,0,1,3,0,3,0,3,3,3,0,3,0,3,0,3,1,3,1,3,1,3,3,1,1,3,2,0,
  2,0,0,1,1,0,0,2,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,3,3,3,3,2,2,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,2,2,1,1,2,
  2,1,3,2,3,2,3,2,2,1,1,1,3,3,3,1,3,1,0,1,0,0,0,1,1,0,0,0,
  1,0,0,0,0,1,0,1,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,
  0,0,3,0,3,0,1,0,3,0,3,1,0,3,1,0,3,0,0,3,1,0,0,0,1,0,0,0,
  0,0,0,3,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,2,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,3,3,3,3,0,3,0,0,3,3,3,0,3,0,3,3,3,3,3,0,0,3,3,3,3,0,
  3,0,0,3,0,3,0,0,0,3,0,0,0,3,0,2,3,2,0,3,3,2,3,1,0,3,2,0,
  0,1,1,1,3,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,3,1,1,0,0,3,0,0,0,1,0,0,2,0,3,3,0,3,3,0,0,3,0,0,3,0,
  3,0,0,3,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,
  2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,3,3,3,1,3,3,0,3,3,3,3,0,3,3,2,3,3,3,3,3,1,3,2,3,2,3,
  3,0,3,2,3,3,0,3,3,2,3,3,1,2,3,2,1,1,3,1,2,2,1,1,1,1,1,1,
  2,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
  0,0,3,3,3,3,3,3,3,0,3,3,3,3,3,0,3,3,3,3,3,0,0,3,3,3,3,3,
  3,0,0,3,0,2,0,3,3,2,0,3,0,2,0,3,2,2,2,3,3,3,3,1,0,2,1,1,
  2,2,1,0,1,0,0,1,2,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,3,3,3,1,0,3,0,0,3,3,3,0,1,0,3,3,3,3,3,0,0,3,3,3,3,0,
  2,0,0,3,0,3,0,0,0,1,0,0,0,1,0,3,0,2,0,3,1,3,3,0,0,3,1,0,
  0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,3,2,3,3,3,3,0,0,3,3,2,0,3,0,3,3,3,3,3,0,0,2,3,2,3,2,
  3,0,0,3,0,2,0,2,2,1,0,3,0,0,0,1,0,3,0,1,3,1,1,0,0,0,1,0,
  0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,1,3,3,1,1,1,0,3,1,2,1,1,1,3,0,2,3,1,2,3,1,0,1,3,3,1,
  0,0,2,2,3,0,0,2,1,1,3,0,0,0,1,1,3,1,0,0,0,1,0,0,1,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,2,1,1,3,2,3,3,0,3,1,1,3,1,0,3,0,1,2,1,0,0,0,0,1,1,0,
  0,0,0,1,0,0,0,2,0,0,0,1,0,0,0,0,0,1,1,1,1,0,0,0,0,1,0,0,
  0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,3,3,3,3,3,3,1,3,3,3,2,0,3,3,1,1,2,3,3,3,2,2,2,2,2,2,
  2,2,3,2,3,2,0,2,2,3,2,2,0,3,1,2,1,1,0,1,1,1,0,0,1,0,1,0,
  0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,3,3,3,1,3,3,0,3,3,3,2,0,3,3,2,3,3,3,3,3,3,3,3,3,3,3,
  3,0,3,2,3,3,0,3,2,3,3,2,0,3,0,3,2,2,1,1,2,1,1,2,1,0,1,0,
  1,1,1,0,1,3,0,1,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,1,2,3,3,2,3,
  3,0,3,2,3,3,3,3,3,2,3,3,0,1,3,1,0,2,0,1,0,1,1,0,0,1,1,0,
  0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,2,3,2,0,3,3,0,3,3,2,1,0,3,3,2,3,3,2,2,3,3,2,1,2,1,3,
  2,0,3,2,3,2,0,2,2,2,0,3,0,3,0,1,3,1,0,1,0,1,0,3,1,1,1,0,
  1,3,3,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,3,2,3,3,3,3,3,3,3,2,3,3,2,3,2,3,2,3,2,3,3,1,2,1,2,2,
  1,2,3,2,3,1,3,3,1,1,3,2,3,1,3,1,0,1,0,2,0,0,2,0,0,1,1,0,
  0,0,0,0,1,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,2,3,3,1,3,3,3,3,3,3,3,3,2,3,2,2,3,2,3,3,2,3,3,3,2,3,
  3,0,1,3,3,3,0,2,3,2,2,2,0,2,0,3,1,1,1,1,3,2,1,0,1,0,1,1,
  1,0,0,0,0,0,0,1,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,3,1,1,3,1,1,3,3,3,1,3,3,3,3,2,0,2,1,3,3,1,0,0,0,0,0,
  2,1,2,2,0,0,3,1,1,1,3,1,1,0,3,0,0,0,0,0,1,1,0,0,0,0,0,0,
  0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,3,3,3,0,3,2,3,3,2,2,3,3,1,3,1,3,3,2,3,3,2,2,2,2,2,3,
  2,0,3,2,3,2,3,2,2,1,3,2,1,0,1,1,0,1,0,2,0,1,3,0,0,1,1,0,
  0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,2,1,3,0,3,3,0,1,3,2,1,0,1,2,1,1,2,3,2,3,1,1,3,2,2,2,
  2,0,1,1,3,1,0,2,2,3,0,1,0,2,0,2,0,1,1,1,0,1,1,1,0,1,2,0,
  1,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,1,1,0,0,0,0,3,0,0,2,0,0,0,0,0,3,3,3,1,0,0,0,3,0,0,1,0,
  1,0,0,1,0,0,0,1,0,3,0,0,0,0,0,0,1,0,3,0,0,0,0,0,0,0,0,0,
  0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,
  0,3,2,2,3,2,3,2,3,3,3,2,3,2,2,3,2,2,2,1,2,3,2,0,1,1,1,1,
  1,0,2,1,3,1,2,3,1,1,2,1,2,0,1,0,0,1,0,1,0,0,2,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,2,2,1,1,0,2,2,3,1,2,3,2,1,3,1,1,1,3,0,3,3,0,1,3,0,0,
  0,0,2,0,0,0,2,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,1,1,2,1,2,2,0,0,1,1,1,0,1,0,1,1,2,1,1,0,0,1,1,1,1,2,
  1,0,0,1,0,2,0,1,2,0,0,1,0,1,0,0,1,1,0,1,0,0,0,0,0,0,0,0,
  1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,3,3,1,1,0,2,3,3,0,0,0,3,0,3,1,0,0,0,1,1,0,0,0,0,0,0,
  0,0,3,0,0,0,1,0,0,0,3,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,1,2,3,2,0,2,3,0,1,1,3,1,0,1,1,1,3,1,2,2,3,1,2,1,1,2,2,
  1,0,0,2,2,2,0,1,3,2,0,1,0,1,0,0,0,1,0,1,1,1,1,2,0,0,0,0,
  0,1,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,1,3,1,0,3,3,0,0,1,1,1,0,0,3,1,1,1,0,1,2,1,3,0,1,1,1,
  1,0,1,1,1,2,0,1,1,1,0,2,1,1,0,1,0,0,1,1,0,0,0,1,0,1,0,0,
  0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,2,3,0,0,0,0,0,2,1,0,1,0,0,1,0,0,0,0,0,1,3,0,0,0,0,0,0,
  1,0,0,0,0,0,0,2,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,2,3,1,0,1,1,3,2,2,2,0,2,1,1,0,1,1,1,2,0,2,1,2,1,1,1,
  0,0,0,0,3,0,0,1,0,1,0,0,0,2,0,1,0,0,3,0,1,0,0,0,0,0,0,0,
  1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,1,2,0,0,1,1,0,1,1,0,3,0,1,2,0,0,1,1,2,3,2,0,2,2,0,0,
  0,0,1,1,3,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,1,0,0,1,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,0,1,1,0,1,1,0,0,1,1,0,0,1,1,1,0,1,1,3,2,1,1,0,1,1,1,
  1,0,2,0,1,1,0,1,1,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,1,1,1,0,1,1,0,0,1,0,3,0,0,0,1,1,1,0,1,0,0,1,1,1,0,1,
  1,0,0,1,0,1,0,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,2,2,0,3,3,1,3,0,0,2,1,0,0,2,0,2,1,1,2,3,0,2,0,2,1,2,0,
  1,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,1,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,1,2,1,0,1,1,0,0,2,2,1,0,1,0,1,3,2,0,2,0,0,1,2,1,1,0,
  1,0,0,1,1,1,0,3,0,0,0,0,0,1,0,2,1,1,0,0,2,1,0,1,0,0,1,0,
  0,1,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,2,1,2,2,1,1,0,0,1,3,0,0,2,0,1,1,1,0,0,0,0,1,1,0,0,1,
  1,1,0,0,0,1,0,1,1,0,0,1,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,0,1,2,1,1,1,0,1,0,0,1,0,0,1,0,0,0,0,0,2,0,0,0,1,1,0,
  0,0,0,1,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,1,1,2,2,2,1,0,1,0,1,1,0,0,0,0,
  0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,1,2,2,1,1,1,0,1,1,1,1,0,0,0,0,
  0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,
  1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,1,1,1,1,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,1,1,1,1,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,1,1,1,1,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,1,1,1,1,0,0,0,0,
  0,1,0,0,0,1,1,0,1,0,1,1,0,2,0,0,0,0,0,0,1,0,0,0,0,0,1,0,
  0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,1,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1,1,0,1,1,1,1,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,1,0,1,0,1,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,1,0,0,1,1,0,0,0,0,0,
  0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,2,1,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,1,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,
};


const SequenceModel Iso_8859_11ThaiModel =
{
  Iso_8859_11_CharToOrderMap,
  ThaiFCMLowerBound,
  ThaiFCMUpperBound,
  ThaiFrequentCharMapping,
  ThaiCompactedLangModel,
  82,
  (float)0.9990020403019989,
  PR_FALSE,
  "ISO-8859-11",
  "th"
};

const SequenceModel Tis_620ThaiModel =
{
  Tis_620_CharToOrderMap,
  ThaiFCMLowerBound,
  ThaiFCMUpperBound,
  ThaiFrequentCharMapping,
  ThaiCompactedLangModel,
  82,
  (float)0.9990020403019989,
  PR_FALSE,
  "TIS-620",
  "th"
};

const LanguageModel ThaiModel =
{
  "th",
  Unicode_CharOrder,
  82,
  ThaiFCMLowerBound,
  ThaiFCMUpperBound,
  ThaiFrequentCharMapping,
  ThaiCompactedLangModel,
  82,
  9,
  (float)0.4167661742490873,
  42,
  (float)0.03081950312683285,
  (float)1.0,
};
