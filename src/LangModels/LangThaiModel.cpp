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
 * On: 2023-07-08 19:10:41.037703
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



#define IRR     82

#define ThaiOrderWidth         (IRR + 1)


static const unsigned char Iso_8859_11_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, /* 4X */
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, /* 6X */
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,  6, 32, 79, 25, 80, 59,  4, 27, 53, 28, 46, 66, 47, 57, 56, /* AX */
   50, 60, 58, 43, 15, 17, 44, 16, 42,  1, 19, 23, 48, 55, 24, 49, /* BX */
   40,  9, 13,  2, 51, 11, 81, 10, 37, 45, 18, 22, 61,  3, 52, 62, /* CX */
   21,SYM,  0, 30,SYM,SYM,SYM,SYM,SYM,SYM,SYM,ILL,ILL,ILL,ILL,SYM, /* DX */
    5, 26, 34, 35, 38, 78, 54,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,IRR, /* EX */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,IRR,IRR,ILL,ILL,ILL,ILL, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Tis_620_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, /* 4X */
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, /* 6X */
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  ILL,  6, 32, 79, 25, 80, 59,  4, 27, 53, 28, 46, 66, 47, 57, 56, /* AX */
   50, 60, 58, 43, 15, 17, 44, 16, 42,  1, 19, 23, 48, 55, 24, 49, /* BX */
   40,  9, 13,  2, 51, 11, 81, 10, 37, 45, 18, 22, 61,  3, 52, 62, /* CX */
   21,SYM,  0, 30,SYM,SYM,SYM,SYM,SYM,SYM,SYM,ILL,ILL,ILL,ILL,SYM, /* DX */
    5, 26, 34, 35, 38, 78, 54,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,IRR, /* EX */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,IRR,IRR,ILL,ILL,ILL,ILL, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

#define Unicode_Char_size    82

static const PRUint32 Unicode_CharOrder[] =
{
  3585,  6, 3586, 32, 3587, 79, 3588, 25, 3589, 80, 3590, 59, 3591,  4, 3592, 27,
  3593, 53, 3594, 28, 3595, 46, 3596, 66, 3597, 47, 3598, 57, 3599, 56, 3600, 50,
  3601, 60, 3602, 58, 3603, 43, 3604, 15, 3605, 17, 3606, 44, 3607, 16, 3608, 42,
  3609,  1, 3610, 19, 3611, 23, 3612, 48, 3613, 55, 3614, 24, 3615, 49, 3616, 40,
  3617,  9, 3618, 13, 3619,  2, 3620, 51, 3621, 11, 3622, 81, 3623, 10, 3624, 37,
  3625, 45, 3626, 18, 3627, 22, 3628, 61, 3629,  3, 3630, 52, 3631, 62, 3632, 21,
  3633,  8, 3634,  0, 3635, 30, 3636, 20, 3637, 14, 3638, 41, 3639, 33, 3640, 29,
  3641, 36, 3642, 64, 3648,  5, 3649, 26, 3650, 34, 3651, 35, 3652, 38, 3653, 78,
  3654, 54, 3655, 39, 3656,  7, 3657, 12, 3658, 63, 3659, 65, 3660, 31, 3661, 73,
  3664, 69, 3665, 68, 3666, 67, 3667, 72, 3668, 71, 3669, 70, 3670, 75, 3671, 76,
  3672, 77, 3673, 74,
};

static const float OrderToRatio[] =
{
  0.068984771f,  0.058156280f,  0.056792368f,  0.044269460f,  0.041572995f,  0.039429739f,  0.037969542f,  0.035226282f, 
  0.034770582f,  0.034441303f,  0.028786223f,  0.027708225f,  0.027339011f,  0.026812752f,  0.026639292f,  0.024831195f, 
  0.022593614f,  0.022307700f,  0.021596221f,  0.021550406f,  0.021529336f,  0.018890446f,  0.017455729f,  0.017083819f, 
  0.016177566f,  0.015780422f,  0.014540479f,  0.014373634f,  0.011785459f,  0.011765859f,  0.011580639f,  0.011378025f, 
  0.010293901f,  0.010021952f,  0.008753099f,  0.008627169f,  0.008279760f,  0.008242520f,  0.007903441f,  0.007514626f, 
  0.005594565f,  0.004971041f,  0.004780431f,  0.004118198f,  0.004096393f,  0.004017748f,  0.003561314f,  0.002881440f, 
  0.002743260f,  0.001467302f,  0.001051048f,  0.000810949f,  0.000782774f,  0.000715399f,  0.000638224f,  0.000599514f, 
  0.000523809f,  0.000472114f,  0.000454964f,  0.000327319f,  0.000311884f,  0.000257005f,  0.000248675f,  0.000229075f, 
  0.000171500f,  0.000098490f,  0.000054145f,  0.000047040f,  0.000045325f,  0.000025725f,  0.000025235f,  0.000024010f, 
  0.000018375f,  0.000015190f,  0.000015190f,  0.000014210f,  0.000011760f,  0.000010780f,  0.000009065f,  0.000002450f, 
  0.000000980f,  0.000000245f, 
  0
};


/* Model Table:
 * Number of web pages processed for this model: 948
 * Number of characters consumed for this model: 4081640
 * Total considered sequences: 3142 / 6724
 *
 * - Positive sequences: first 1783 (0.9950033358669141)
 * - Probable sequences: next 461 (2244-1783) (0.00399707180690323)
 * - Neutral sequences: last 4480 (0.00099959232618263)
 * - Negative sequences: 3582 (off-ratio, TODO)
 */
#define ThaiUnicodeCharToOrderIsReduced  0


#define ThaiFCMLowerBound  3585
#define ThaiFCMUpperBound  3673


static const PRUint8 ThaiUnicodeCharToOrder[] =
{
  6,32,79,25,80,59,4,27,53,28,46,66,47,57,56,50,60,58,43,15,
  17,44,16,42,1,19,23,48,55,24,49,40,9,13,2,51,11,81,10,37,
  45,18,22,61,3,52,62,21,8,0,30,20,14,41,33,29,36,64,IRR,IRR,
  IRR,IRR,IRR,5,26,34,35,38,78,54,39,7,12,63,65,31,73,IRR,IRR,69,
  68,67,72,71,70,75,76,77,74,
};

static const PRUint8 ThaiUnicodeCharToOrder[] =
{
  6,32,79,25,80,59,4,27,53,28,46,66,47,57,56,50,60,58,43,15,
  17,44,16,42,1,19,23,48,55,24,49,40,9,13,2,51,11,81,10,37,
  45,18,22,61,3,52,62,21,8,0,30,20,14,41,33,29,36,64,IRR,IRR,
  IRR,IRR,IRR,5,26,34,35,38,78,54,39,7,12,63,65,31,73,IRR,IRR,69,
  68,67,72,71,70,75,76,77,74,
};


};

static const PRUint8 ThaiCompactedLangModel[] =
{
  1,3,3,3,3,3,3,0,0,3,3,3,0,3,0,3,3,3,3,3,0,3,3,3,3,3,3,3,
  3,0,0,0,3,0,3,3,0,3,3,0,3,0,3,3,3,3,3,3,3,3,2,2,3,2,1,3,
  2,1,1,2,1,3,3,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,3,3,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
  3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,2,3,2,3,3,3,3,3,3,3,3,0,1,
  0,2,1,0,3,1,3,0,0,0,0,0,0,1,0,2,0,0,0,0,0,0,0,0,3,3,3,3,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,1,2,2,1,3,1,0,1,2,
  1,0,2,1,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,3,3,3,3,3,3,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,
  3,3,3,3,3,3,3,2,3,2,3,1,3,3,3,3,1,1,2,2,1,2,1,0,0,1,1,1,
  1,2,1,2,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,3,3,3,3,3,3,3,3,
  3,3,3,3,2,3,2,3,3,3,3,3,3,2,3,3,3,3,3,3,3,2,1,1,3,2,3,3,
  3,3,3,1,3,1,3,1,3,3,3,2,3,3,2,3,3,3,3,3,0,0,0,3,1,0,1,0,
  2,0,1,1,1,0,1,1,1,0,0,1,0,0,0,1,0,0,0,3,3,3,3,3,3,0,0,3,
  3,3,0,3,0,3,3,3,3,3,0,0,3,3,3,3,1,3,3,0,0,0,3,0,0,0,0,3,
  0,0,3,0,3,3,3,3,3,1,3,3,1,0,3,3,0,2,1,0,2,1,2,0,0,0,0,0,
  2,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,3,3,3,3,3,3,3,3,3,3,3,3,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
  3,2,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,0,2,0,0,1,3,1,2,0,0,
  0,0,0,0,0,1,0,0,0,0,0,0,0,0,3,3,3,3,3,3,3,1,0,3,3,3,0,3,
  0,3,3,3,3,3,0,1,3,3,3,3,3,3,3,0,3,0,3,0,3,3,0,3,3,0,3,0,
  2,1,3,0,3,1,3,2,1,1,3,2,2,3,0,0,0,1,0,0,1,0,0,0,1,0,1,0,
  0,0,0,0,0,0,0,0,0,1,0,0,1,3,2,1,3,1,3,3,0,3,3,3,3,3,0,3,
  3,3,3,3,0,0,1,3,3,3,1,3,3,0,0,0,2,0,0,0,0,3,0,0,0,0,3,3,
  1,2,2,3,0,2,3,0,1,0,0,1,3,2,3,1,1,1,0,3,0,2,1,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
  3,3,3,3,3,3,3,3,3,3,3,3,0,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,
  3,2,3,3,2,2,3,2,2,3,0,0,0,3,0,1,1,1,3,0,1,0,0,0,0,0,0,1,
  0,0,0,0,0,0,0,0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
  3,3,3,3,3,3,3,3,3,3,1,3,3,1,3,3,2,3,3,3,3,1,2,3,3,1,3,2,
  3,3,1,3,3,2,1,3,1,0,0,0,1,2,1,1,0,1,1,0,0,0,0,0,0,1,0,0,
  0,0,0,0,0,0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,0,3,2,3,3,
  2,1,2,1,1,2,0,1,0,0,1,0,3,1,1,0,1,0,0,0,0,0,0,1,0,0,0,0,
  0,0,0,0,3,3,3,3,3,3,3,1,0,3,3,3,0,3,0,3,3,3,3,3,0,1,3,3,
  3,3,3,3,3,0,3,0,3,0,3,3,0,3,3,0,3,0,2,0,3,0,3,1,3,2,1,1,
  2,2,1,3,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,
  0,0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
  3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,3,3,2,1,1,2,2,
  3,3,0,0,0,1,0,0,2,1,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,
  0,3,3,3,3,3,3,3,0,3,3,3,3,3,1,3,3,3,3,3,0,0,3,3,3,3,3,3,
  3,0,0,0,3,0,3,3,0,3,3,0,3,0,3,2,3,2,3,1,3,3,3,1,2,2,1,3,
  1,1,0,2,1,3,1,2,0,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
  3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,1,3,1,3,3,2,1,2,2,2,2,0,0,
  0,1,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,3,
  2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,
  3,3,3,3,3,3,3,3,2,3,3,1,2,3,2,1,2,2,0,3,1,1,0,1,0,0,0,0,
  0,0,1,1,2,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,3,3,3,3,3,3,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
  3,3,3,3,3,3,3,3,2,1,3,0,3,2,3,2,1,2,1,1,0,1,1,0,0,1,0,0,
  1,3,3,2,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,3,3,3,3,3,3,3,3,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
  3,2,3,2,3,3,3,1,3,0,3,1,2,2,1,2,1,1,1,1,1,0,0,0,0,0,1,0,
  2,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,3,3,3,3,3,3,3,3,3,3,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,
  3,3,3,3,2,1,3,0,3,3,3,2,1,2,3,2,2,3,3,2,0,1,0,0,1,2,0,1,
  1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,3,3,3,3,3,3,3,0,3,3,3,
  3,3,0,3,3,3,3,3,0,0,3,3,3,3,3,3,3,0,0,3,3,0,3,3,0,3,3,0,
  3,0,3,3,3,3,3,3,2,3,3,1,2,2,0,1,1,3,1,1,1,1,1,2,0,2,1,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,3,3,3,0,0,3,3,3,0,3,
  0,3,3,3,3,3,0,1,3,3,3,3,3,3,3,0,0,0,3,0,3,3,0,3,3,0,3,0,
  3,1,3,2,3,3,3,2,1,2,3,2,1,3,1,1,0,2,1,0,1,0,0,0,1,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,3,3,2,3,3,3,3,3,3,3,3,2,2,
  2,3,3,1,3,3,2,2,2,1,1,1,1,3,1,3,1,1,1,1,3,2,1,3,3,2,1,1,
  0,1,0,3,0,0,1,1,0,0,0,0,0,0,0,0,0,1,0,0,2,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,
  3,3,3,3,3,3,3,3,3,3,3,3,0,3,3,3,3,3,3,3,3,3,2,2,2,2,3,1,
  3,3,2,1,3,1,3,1,0,2,3,1,0,1,0,0,1,2,1,2,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
  3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,2,3,3,3,3,0,2,3,
  2,1,2,3,1,1,0,1,0,0,0,1,1,0,3,0,1,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,3,2,2,2,3,1,1,2,1,1,1,
  0,1,1,1,0,1,0,0,0,2,1,1,0,1,1,0,0,0,1,0,0,0,0,1,0,0,0,0,
  0,0,0,0,0,3,3,3,2,0,3,0,0,3,3,3,0,3,0,3,3,3,3,3,0,0,3,3,
  3,3,1,3,3,0,0,0,3,0,0,0,0,0,0,0,0,0,1,0,3,0,3,0,3,3,0,0,
  3,2,0,2,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,
  3,3,2,3,3,3,3,3,2,3,3,2,3,3,2,3,2,2,2,1,1,2,2,2,0,1,1,3,
  0,1,1,0,0,0,0,0,2,2,1,2,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,
  3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,2,
  3,3,3,3,2,3,3,2,3,2,3,3,3,1,3,1,1,3,1,3,2,1,1,1,1,1,0,1,
  1,1,0,0,0,0,1,0,1,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,
  3,3,3,3,3,3,0,3,3,3,3,3,0,3,3,3,3,3,0,0,3,3,3,3,3,3,3,0,
  0,3,3,0,3,3,0,3,3,0,3,0,3,3,2,3,2,3,3,2,1,1,1,2,0,2,3,3,
  3,1,2,3,1,3,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,3,3,
  3,3,3,0,0,3,3,3,0,3,0,3,3,3,3,3,0,0,3,3,3,3,3,3,3,0,0,0,
  3,0,3,3,0,3,3,0,3,0,2,0,2,0,2,0,3,1,0,1,1,1,1,2,0,0,0,1,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,2,3,
  3,0,0,3,3,3,0,3,0,3,3,3,3,3,0,0,3,3,3,3,3,3,3,1,0,0,3,0,
  3,3,0,3,3,0,3,0,3,1,3,1,3,1,3,3,1,1,3,2,0,2,0,0,1,1,0,0,
  2,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,3,3,2,2,3,
  3,3,3,3,3,3,3,2,3,3,3,3,3,3,2,2,1,1,2,2,2,3,1,3,2,3,2,2,
  1,1,1,3,3,3,1,3,1,0,1,0,0,0,1,1,0,0,0,1,0,0,0,0,1,0,1,0,
  1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,3,0,3,0,1,0,3,0,3,
  1,0,3,1,0,3,0,0,1,3,0,0,0,1,0,0,0,0,3,0,0,0,1,0,0,0,0,0,
  1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,1,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,3,0,3,0,0,3,3,3,
  0,3,0,3,3,3,3,3,0,0,3,3,3,3,0,3,3,0,0,0,3,0,0,0,0,3,0,0,
  3,0,2,3,2,0,3,3,2,3,1,0,3,2,0,0,1,1,1,3,1,0,0,0,0,0,1,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,1,1,0,0,3,0,0,0,1,0,0,2,
  0,3,0,3,3,3,0,0,3,0,0,3,0,3,3,0,0,0,1,0,0,0,0,0,0,0,1,0,
  0,0,0,0,0,0,1,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,3,3,3,3,0,3,3,3,3,3,0,3,
  3,3,3,3,0,0,3,3,3,3,3,3,3,0,0,0,2,0,3,3,0,2,3,0,2,0,3,2,
  2,2,3,3,3,3,1,0,2,1,1,2,2,1,0,1,0,0,1,2,0,2,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,3,3,3,3,1,3,3,0,3,3,3,3,0,3,3,2,3,3,
  3,3,3,1,3,2,3,2,3,3,2,3,0,3,3,0,3,3,3,2,3,1,2,3,2,1,1,3,
  1,2,2,1,1,1,1,1,1,2,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,3,3,3,1,0,3,0,0,3,3,3,0,1,0,3,3,3,3,3,
  0,0,3,3,3,3,0,2,3,0,0,0,3,0,0,0,0,1,0,0,1,0,3,0,2,0,3,1,
  3,3,0,0,3,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,3,2,3,3,3,3,0,0,3,3,2,0,3,0,3,3,3,3,3,0,0,
  2,3,2,3,2,3,3,0,0,0,2,0,2,2,0,1,3,0,0,0,1,0,3,0,1,3,1,1,
  0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,3,1,3,3,1,1,1,0,3,1,2,1,1,1,3,0,3,2,2,1,3,1,0,1,
  3,3,1,0,2,2,0,3,0,0,2,1,3,1,0,0,0,1,1,3,1,0,0,0,1,0,0,1,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,2,1,1,3,2,3,3,0,3,1,1,3,1,0,3,1,0,1,2,0,0,0,0,1,1,
  0,0,1,0,0,0,0,0,2,0,0,0,1,0,0,0,0,0,1,1,1,1,0,0,0,0,1,0,
  0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,1,3,3,3,2,0,3,3,1,2,1,3,3,3,2,2,2,2,2,2,2,
  2,3,2,3,2,0,2,2,2,3,2,0,3,1,2,1,1,0,1,1,1,0,0,1,0,1,0,0,
  0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,
  3,3,1,3,3,0,3,3,3,2,0,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,2,3,
  0,3,3,0,3,3,3,3,2,0,3,0,3,2,2,1,1,2,1,1,2,1,0,1,0,1,1,1,
  0,1,3,0,1,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,3,
  2,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,1,2,3,3,2,3,3,2,3,0,3,
  3,3,3,3,3,2,3,0,1,3,1,0,2,0,1,0,1,1,0,0,1,1,0,0,0,0,0,1,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,2,3,2,0,3,
  3,0,3,3,2,1,0,3,3,2,3,3,2,2,3,3,2,1,2,1,3,2,2,3,0,3,2,0,
  2,2,0,2,3,0,3,0,1,3,1,0,1,0,1,0,3,1,1,1,0,1,3,3,0,0,0,0,
  0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,2,3,3,3,3,3,
  3,3,2,3,3,2,3,2,2,3,2,3,3,3,1,2,1,2,2,1,2,3,2,3,1,3,3,1,
  3,0,2,3,1,3,1,0,1,0,2,0,0,2,0,0,1,1,0,0,0,0,0,1,0,0,0,1,
  1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,2,3,3,1,3,3,3,3,3,
  3,3,3,2,3,2,3,2,3,2,3,2,3,3,3,2,3,3,3,1,0,3,3,0,2,3,2,2,
  2,0,2,0,3,1,1,1,1,3,2,1,0,1,0,1,1,1,0,0,0,0,0,0,1,0,3,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,1,1,3,1,1,3,3,3,1,3,
  3,3,3,2,2,0,3,1,3,1,0,0,0,0,0,2,2,2,1,0,0,3,1,1,3,1,1,1,
  0,3,0,0,0,0,0,1,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,3,0,3,2,3,3,2,2,3,3,1,
  3,1,3,3,3,2,3,2,2,2,2,2,3,2,2,3,0,3,2,3,2,2,3,1,2,1,0,1,
  1,0,1,0,2,0,1,3,0,0,1,1,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,3,2,1,3,0,3,3,0,1,3,2,1,0,1,2,1,
  2,1,2,3,3,1,1,3,2,2,2,2,1,1,0,3,1,0,2,2,0,3,1,0,2,0,2,0,
  1,1,1,0,1,1,1,0,1,2,0,1,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,3,0,0,2,0,0,0,0,0,3,3,3,
  0,1,0,0,3,0,0,1,0,1,1,0,0,0,0,0,1,0,0,3,0,0,0,0,0,1,0,3,
  0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,2,0,0,0,3,2,2,3,2,3,2,3,3,3,2,3,2,2,3,2,2,2,2,1,
  3,2,0,1,1,1,1,1,1,2,0,3,1,2,3,1,2,1,1,2,0,1,0,0,1,0,1,0,
  0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,3,2,2,1,1,0,2,2,3,1,2,3,2,1,3,1,1,1,0,3,3,3,
  0,1,3,0,0,0,0,2,0,0,0,2,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,1,1,2,1,2,2,0,0,1,1,1,0,1,0,1,2,1,1,1,0,0,1,1,
  1,1,2,1,1,0,0,0,2,0,1,2,0,0,1,0,1,0,0,1,1,0,1,0,0,0,0,0,
  0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,3,3,3,1,1,0,2,3,3,0,0,0,3,0,3,1,0,0,1,0,1,0,0,0,0,0,
  0,0,0,3,0,0,0,1,0,0,3,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  1,2,3,2,0,2,3,0,1,1,3,1,0,1,1,1,1,3,2,2,3,1,2,1,1,2,2,1,
  2,0,0,2,2,0,1,3,0,2,1,0,1,0,0,0,1,0,1,1,1,1,2,0,0,0,0,0,
  1,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,1,
  3,1,0,3,3,0,0,1,1,1,0,0,3,1,1,1,1,0,2,1,3,0,1,1,1,1,1,1,
  0,1,2,0,1,1,0,1,2,1,1,0,1,0,0,1,1,0,0,0,1,0,1,0,0,0,0,0,
  0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3,0,0,
  0,0,0,2,1,0,1,0,0,1,0,0,0,0,1,0,3,0,0,0,0,0,0,1,0,0,0,0,
  0,0,2,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,2,3,1,0,1,
  1,3,2,2,2,0,2,1,1,0,1,1,2,1,0,2,1,2,1,1,1,0,0,0,0,3,0,0,
  1,0,0,1,0,0,2,0,1,0,0,3,0,1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,1,2,0,0,1,1,0,
  1,1,0,3,0,1,2,0,1,0,2,1,3,2,0,2,2,0,0,0,1,1,0,3,0,0,1,0,
  1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,
  2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,1,1,0,1,1,0,0,1,
  1,0,0,1,1,1,1,0,3,1,2,1,1,0,1,1,1,1,0,2,0,1,1,0,1,1,0,0,
  1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,1,1,0,0,1,0,3,
  0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,1,1,0,0,0,1,0,1,1,0,0,1,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,3,3,1,3,0,0,2,1,0,0,2,
  0,2,1,1,3,2,0,2,0,2,1,2,0,1,1,0,0,0,0,0,0,0,0,0,0,0,1,0,
  0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,1,0,1,1,0,0,2,2,1,0,1,0,1,
  2,3,2,0,0,0,1,2,1,1,0,1,1,0,0,1,1,0,3,0,0,0,0,0,1,0,2,1,
  1,0,0,2,1,0,1,0,0,1,0,0,1,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,3,2,1,2,2,1,1,0,0,1,3,0,0,2,0,1,1,1,
  0,0,0,0,1,1,0,0,1,1,0,0,1,0,1,0,1,1,0,0,1,0,0,0,0,0,0,0,
  1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,3,0,1,2,1,1,1,0,1,0,0,1,0,0,1,0,0,0,0,0,
  2,0,0,0,1,1,0,0,1,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,2,2,2,1,0,1,0,1,1,
  0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,2,1,1,1,0,1,1,1,1,0,0,
  0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,
  0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,1,1,1,1,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,1,1,1,1,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,1,1,1,1,0,0,0,0,0,0,0,0,
  0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,1,1,1,1,1,1,0,1,1,1,1,0,0,0,0,1,0,0,0,1,1,
  0,1,0,1,1,0,2,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,
  1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,1,1,1,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,1,0,1,0,1,1,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
  1,1,0,0,1,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,
  1,0,1,0,0,1,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,
  0,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,
};


const SequenceModel Iso_8859_11ThaiModel =
{
  Iso_8859_11_CharToOrderMap,
  ThaiCompactedLangModel,
  ThaiOrderWidth,
  0.9990004076738174f,
  PR_FALSE,
  "ISO-8859-11",
  "th"
};

const SequenceModel Tis_620ThaiModel =
{
  Tis_620_CharToOrderMap,
  ThaiCompactedLangModel,
  ThaiOrderWidth,
  0.9990004076738174f,
  PR_FALSE,
  "TIS-620",
  "th"
};

const LanguageModel ThaiModel =
{
  "th",
  Unicode_CharOrder,
  Unicode_Char_size,

  ThaiFCMLowerBound,
  ThaiFCMUpperBound,
  ThaiUnicodeCharToOrderIsReduced,
  ThaiUnicodeCharToOrder,
  ThaiFCMUpperBound + 1 - ThaiFCMLowerBound,
  0,
  0,
  NULL,
  OrderToRatio,
  ThaiCompactedLangModel,
  ThaiOrderWidth,
  9,
  0.4171720190903656f,
  42,
  0.03089811938338511f,
  1.0000000000000002f,
};
