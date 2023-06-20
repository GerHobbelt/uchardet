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
 * On: 2023-06-20 08:21:54.799584
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
  SYM, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, /* 4X */
   89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114, /* 6X */
  115,116,117,118,119,120,121,122,123,124,125,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,  4, 28, 73, 24,126, 62,  7, 27, 54, 31, 38, 67, 48, 57, 55, /* AX */
   53, 61, 56, 46, 16, 19, 44, 15, 47,  1, 20, 22, 45, 58, 30, 49, /* BX */
   43,  8, 11,  2, 50, 12,127, 14, 41, 42, 18, 26, 60,  3, 52, 63, /* CX */
   21,SYM,  0, 39,SYM,SYM,SYM,SYM,SYM,SYM,SYM,ILL,ILL,ILL,ILL,SYM, /* DX */
    5, 23, 36, 29, 33,128, 51,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,129, /* EX */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,130,131,ILL,ILL,ILL,ILL, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Tis_620_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146, /* 4X */
  147,148,149,150,151,152,153,154,155,156,157,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172, /* 6X */
  173,174,175,176,177,178,179,180,181,182,183,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  ILL,  4, 28, 73, 24,184, 62,  7, 27, 54, 31, 38, 67, 48, 57, 55, /* AX */
   53, 61, 56, 46, 16, 19, 44, 15, 47,  1, 20, 22, 45, 58, 30, 49, /* BX */
   43,  8, 11,  2, 50, 12,185, 14, 41, 42, 18, 26, 60,  3, 52, 63, /* CX */
   21,SYM,  0, 39,SYM,SYM,SYM,SYM,SYM,SYM,SYM,ILL,ILL,ILL,ILL,SYM, /* DX */
    5, 23, 36, 29, 33,186, 51,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,187, /* EX */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,188,189,ILL,ILL,ILL,ILL, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const int Unicode_Char_size = 74;
static const unsigned int Unicode_CharOrder[] =
{
  3585,  4, 3586, 28, 3587, 73, 3588, 24, 3590, 62, 3591,  7, 3592, 27,3593, 54,
  3594, 31, 3595, 38, 3596, 67, 3597, 48, 3598, 57, 3599, 55, 3600, 53,3601, 61,
  3602, 56, 3603, 46, 3604, 16, 3605, 19, 3606, 44, 3607, 15, 3608, 47,3609,  1,
  3610, 20, 3611, 22, 3612, 45, 3613, 58, 3614, 30, 3615, 49, 3616, 43,3617,  8,
  3618, 11, 3619,  2, 3620, 50, 3621, 12, 3623, 14, 3624, 41, 3625, 42,3626, 18,
  3627, 26, 3628, 60, 3629,  3, 3630, 52, 3631, 63, 3632, 21, 3633,  9,3634,  0,
  3635, 39, 3636, 17, 3637, 10, 3638, 40, 3639, 32, 3640, 34, 3641, 37,3642, 66,
  3648,  5, 3649, 23, 3650, 36, 3651, 29, 3652, 33, 3654, 51, 3655, 35,3656,  6,
  3657, 13, 3658, 59, 3659, 65, 3660, 25, 3661, 64, 3664, 72, 3666, 68,3667, 71,
  3669, 69, 3670, 70,
};


/* Model Table:
 * Total considered sequences: 2243 / 5476
 * - Positive sequences: first 1591 (0.9950053539730792)
 * - Probable sequences: next 346 (1937-1591) (0.003998112335218629)
 * - Neutral sequences: last 3539 (0.0009965336917021617)
 * - Negative sequences: 3233 (off-ratio)
 * Negative sequences: TODO
 */
static const PRUint8 ThaiLangModel[] =
{
  1,3,3,3,3,3,0,3,3,0,0,3,3,0,3,3,3,0,3,3,3,3,3,3,3,0,3,3,3,3,3,3,0,3,0,0,3,0,3,0,
   0,3,3,3,3,3,3,3,3,3,1,1,3,0,2,2,0,0,2,0,1,0,0,1,0,0,0,1,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
   3,3,0,3,3,3,0,3,2,3,3,3,3,3,2,0,0,0,3,1,0,0,1,3,3,0,1,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,
   3,3,3,3,3,3,3,3,0,3,0,0,0,3,1,0,1,0,3,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
   2,3,0,3,3,3,3,3,2,3,0,0,3,1,2,0,0,0,2,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
   3,3,3,3,3,3,3,2,1,3,3,2,2,3,3,3,0,3,3,3,0,0,1,0,0,0,0,0,0,0,0,0,0,0,
  0,3,3,3,3,0,0,3,3,0,0,3,3,0,3,3,3,0,3,3,3,0,3,1,3,0,3,3,3,0,3,3,0,0,0,0,0,0,3,0,
   0,3,3,3,3,3,0,3,1,3,0,0,3,0,3,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,0,3,3,0,0,3,3,0,3,3,3,0,3,3,3,0,3,3,3,0,3,3,3,3,3,3,0,3,0,0,3,0,3,3,
   0,3,0,3,3,3,0,1,1,2,2,2,2,1,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,2,3,3,2,3,3,3,3,3,3,3,2,3,3,3,0,3,3,3,3,3,3,3,3,2,0,3,1,3,2,
   0,3,2,3,3,3,0,2,2,3,3,3,3,2,2,0,0,0,3,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,
   1,3,3,3,3,3,3,3,1,3,2,0,3,0,2,0,0,0,2,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,
  1,3,0,0,3,0,3,3,3,0,0,3,3,3,3,3,3,0,3,3,3,0,3,0,3,0,0,3,2,0,3,3,0,0,0,0,0,0,1,0,
   0,3,0,0,0,0,3,3,3,2,0,0,0,3,0,2,3,2,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,3,3,3,3,3,2,3,0,0,3,3,3,3,3,3,0,3,3,3,0,3,3,3,0,3,3,3,3,3,3,0,3,0,0,3,0,3,0,
   0,2,0,3,2,3,0,2,0,3,3,0,1,1,1,1,0,0,2,0,3,1,0,0,0,2,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
   3,3,0,3,3,3,1,3,3,3,1,2,2,0,2,0,0,0,3,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
   3,3,0,3,3,3,0,2,1,3,0,0,1,2,1,0,0,0,0,0,0,0,1,2,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,0,3,3,0,0,3,3,0,3,3,3,0,3,3,3,0,3,3,3,0,3,3,3,3,3,3,0,3,0,0,3,0,3,3,
   0,2,0,3,3,3,0,0,0,2,1,0,2,0,2,0,0,0,3,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,3,3,3,2,3,0,
   0,3,0,3,3,3,3,1,0,1,1,2,2,0,2,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,3,3,2,2,2,3,3,3,3,2,3,
   3,3,3,3,0,2,0,3,0,1,3,0,0,0,0,0,0,0,0,2,0,0,0,1,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
   3,2,0,3,3,3,0,1,2,3,2,2,1,2,1,0,0,0,2,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,
  0,3,3,3,3,3,3,3,3,0,0,3,3,3,3,3,3,0,3,3,3,0,3,3,3,3,3,3,3,3,3,3,0,3,0,0,3,0,3,0,
   0,3,3,3,3,3,1,3,3,3,1,0,3,3,0,0,2,0,1,3,0,0,2,0,0,2,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,0,3,3,3,3,
   3,0,0,3,3,2,0,2,0,1,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,2,3,3,3,3,3,3,3,
   2,3,0,2,3,2,0,0,2,2,0,0,1,0,0,0,0,0,0,2,0,0,0,0,1,0,2,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
   2,3,0,3,3,3,0,3,1,2,3,0,2,1,2,1,0,1,2,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,
  0,3,3,3,3,3,0,3,3,0,0,3,3,0,3,3,3,0,3,3,3,1,3,3,3,0,3,3,3,3,3,3,0,3,0,0,3,0,3,0,
   0,3,0,3,3,3,0,3,2,2,2,0,3,2,2,0,0,0,2,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,
  3,3,3,3,3,3,3,1,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,2,3,3,3,3,3,3,1,3,3,3,3,3,2,2,0,
   1,1,0,2,3,2,1,1,2,1,1,0,1,2,1,3,0,0,0,2,0,0,0,0,0,1,0,0,0,0,0,0,0,0,
  0,3,3,3,3,0,0,3,3,0,0,3,3,0,3,3,3,0,3,3,3,0,3,0,3,0,3,3,3,0,3,3,0,0,0,0,0,0,3,0,
   0,0,0,0,3,3,0,2,0,3,0,0,3,0,0,0,0,0,2,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,
   0,2,0,2,0,0,3,0,0,3,1,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,
  0,3,3,3,3,3,0,0,3,0,0,3,3,0,3,3,3,0,3,3,3,0,3,3,3,0,3,3,3,3,3,3,0,3,1,0,3,0,3,0,
   0,3,0,3,3,3,0,3,0,3,0,0,3,0,2,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,1,3,3,3,3,2,3,3,3,3,0,2,3,3,3,0,3,1,0,1,3,0,0,0,0,2,0,1,0,3,3,2,3,0,0,
   1,0,0,3,0,0,0,0,3,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,2,3,3,2,3,3,3,3,3,2,3,3,3,3,2,3,0,3,
   3,2,1,1,3,1,0,1,3,2,0,0,0,0,3,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,2,2,3,1,3,3,3,3,1,3,3,1,2,1,2,3,3,0,2,2,1,1,1,2,1,1,1,0,0,1,3,3,1,0,0,0,
   3,0,0,2,0,0,3,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,0,0,3,0,0,0,0,0,0,2,0,0,1,0,3,0,3,3,3,0,0,0,3,0,3,3,0,0,0,3,0,0,0,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,3,2,3,3,3,3,3,2,2,3,3,3,0,3,3,2,1,
   3,3,0,3,2,1,3,2,0,0,3,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,1,3,3,3,3,3,3,3,3,3,3,3,2,3,2,3,2,2,3,2,2,1,2,3,3,3,3,3,3,3,2,0,2,
   0,0,2,2,0,0,0,1,3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,0,3,0,0,3,0,1,0,0,0,0,3,0,0,3,0,0,0,3,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,3,3,3,0,0,2,3,0,0,0,3,0,3,3,3,0,3,3,3,0,3,0,2,0,3,2,3,0,3,3,0,0,0,0,0,0,3,0,
   0,0,0,0,1,1,0,0,0,3,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,3,3,3,3,3,3,3,0,0,3,3,3,3,3,3,0,3,3,3,0,3,2,3,3,2,3,3,3,2,2,0,3,0,0,3,0,2,0,
   0,3,3,3,2,3,3,3,3,0,0,0,1,0,0,0,0,2,0,3,2,0,2,0,0,2,0,0,0,0,0,0,0,0,
  0,3,2,3,3,3,0,3,3,0,0,3,2,0,3,3,3,0,3,3,3,0,2,1,3,0,2,3,1,2,3,1,0,3,0,0,1,0,0,0,
   0,1,0,0,3,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,3,3,3,0,0,0,3,0,0,3,3,0,2,3,3,0,2,3,3,0,3,0,3,0,3,3,1,0,3,3,0,0,0,0,0,0,3,0,
   0,1,0,3,0,1,0,1,0,3,0,0,3,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,
  0,3,3,1,3,3,3,3,3,0,0,0,3,3,3,3,3,0,3,3,3,0,3,3,1,0,3,3,3,2,2,3,0,3,0,0,3,0,2,0,
   0,2,0,1,1,1,1,1,3,3,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,2,3,3,3,3,2,3,3,3,2,3,3,0,1,3,3,3,3,2,2,1,2,2,3,0,1,0,0,3,1,3,3,3,3,3,3,2,0,
   3,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,3,3,3,3,0,3,3,0,0,2,3,0,3,3,3,0,3,3,3,0,3,3,3,0,3,3,3,3,3,2,0,3,0,0,3,0,2,0,
   0,2,0,2,3,3,0,2,0,1,2,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,2,0,2,3,0,3,3,3,0,0,2,1,3,0,0,3,0,1,0,0,0,0,0,1,0,0,0,0,0,0,2,0,1,0,0,2,0,2,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,0,0,2,3,2,3,3,0,3,3,2,3,3,3,3,0,2,3,2,3,3,3,2,3,2,2,0,3,0,0,3,3,2,0,
   3,2,3,0,2,3,0,0,3,2,0,0,1,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,1,3,2,3,3,0,0,2,3,3,3,1,0,1,3,0,2,2,3,0,3,0,3,1,3,2,2,3,3,2,1,0,3,0,0,1,0,1,0,
   0,2,0,3,2,1,3,0,0,0,0,0,0,3,0,2,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,0,2,1,0,0,0,0,0,3,1,1,0,0,2,3,0,3,2,0,1,2,0,0,2,2,0,0,0,0,3,2,0,0,0,0,0,3,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,2,3,3,3,3,0,2,3,3,3,3,3,2,3,2,3,3,3,3,1,3,3,2,1,2,2,3,3,3,2,3,2,3,0,2,3,2,0,
   3,2,0,2,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,
  2,3,0,0,0,0,3,2,2,3,3,3,3,2,0,0,0,3,3,0,0,0,0,0,0,0,0,3,0,0,0,2,2,0,0,2,0,3,0,0,
   1,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,2,2,3,3,0,0,3,1,3,2,2,0,2,3,2,3,3,2,1,3,3,3,3,3,3,2,2,2,2,2,0,3,1,0,3,3,1,0,
   0,1,0,3,1,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,2,2,0,2,3,3,3,3,3,0,1,2,1,3,1,1,1,2,1,2,0,3,0,0,1,1,0,2,0,2,3,0,1,0,1,2,
   0,2,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,1,3,2,3,3,3,0,2,2,3,1,3,3,1,3,1,3,2,3,0,0,1,3,2,1,3,2,3,3,3,3,0,2,1,0,1,0,1,0,
   0,1,0,3,0,1,0,0,3,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,2,3,3,0,2,3,3,0,3,3,2,3,1,3,2,3,2,2,1,3,1,3,1,2,2,1,0,1,3,1,3,0,2,3,2,0,
   0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
  0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,3,3,0,0,3,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,
   0,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,1,1,1,2,2,0,0,1,0,0,0,0,0,0,1,1,0,1,0,1,0,1,2,1,0,0,0,2,1,0,0,0,1,0,0,1,0,0,0,
   0,0,0,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,2,3,3,3,3,3,1,3,3,2,1,3,1,1,1,2,3,2,0,2,3,1,0,0,0,0,1,0,0,1,1,1,1,2,1,2,0,1,0,
   1,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,0,3,3,1,0,0,3,0,1,1,0,0,2,3,0,1,0,0,3,0,2,2,1,3,1,1,1,2,0,0,0,1,0,0,2,0,0,0,
   0,3,0,0,0,0,0,1,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,
  3,1,2,0,1,0,0,1,1,3,3,0,3,0,1,2,0,2,0,0,3,2,0,0,0,0,0,0,0,0,3,0,2,0,1,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,2,2,3,2,0,0,0,0,2,1,0,0,2,2,0,3,1,2,2,0,1,2,1,0,1,2,2,3,0,2,0,0,0,0,1,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,3,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,0,2,0,2,3,0,0,0,0,3,0,0,0,0,2,0,0,0,0,0,0,0,1,0,0,3,2,2,0,0,0,0,0,0,0,1,0,1,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  1,3,3,0,0,0,3,2,0,3,3,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,2,0,0,
   3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  2,0,0,3,3,0,0,0,2,0,0,0,0,0,0,1,2,0,2,1,0,2,1,0,3,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  1,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,1,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,0,2,0,0,0,3,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,1,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  1,1,0,1,0,0,0,0,2,0,0,2,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,1,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,1,0,0,0,0,0,0,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
};


const SequenceModel Iso_8859_11ThaiModel =
{
  Iso_8859_11_CharToOrderMap,
  ThaiLangModel,
  74,
  (float)0.9990034663082978,
  PR_FALSE,
  "ISO-8859-11",
  "th"
};

const SequenceModel Tis_620ThaiModel =
{
  Tis_620_CharToOrderMap,
  ThaiLangModel,
  74,
  (float)0.9990034663082978,
  PR_FALSE,
  "TIS-620",
  "th"
};

const LanguageModel ThaiModel =
{
  "th",
  Unicode_CharOrder,
  74,
  ThaiLangModel,
  74,
  9,
  (float)0.4245204661368893,
  41,
  (float)0.03352561213072518,
  (float)0.9999999999999998,
};
