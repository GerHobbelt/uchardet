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
 * On: 2023-06-20 07:32:34.869287
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
static const unsigned char Iso_8859_3_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 15, 23, 13,  4, 14, 18, 20,  1, 11, 12,  3, 10,  6,  8, /* 4X */
   16, 28,  5,  7,  2,  9, 25, 19, 27, 29, 21,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 15, 23, 13,  4, 14, 18, 20,  1, 11, 12,  3, 10,  6,  8, /* 6X */
   16, 28,  5,  7,  2,  9, 25, 19, 27, 29, 21,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM, 17,SYM,SYM,SYM,ILL, 53,SYM,SYM, 54, 46, 55, 56,SYM,ILL, 24, /* AX */
  SYM, 17,SYM,SYM,SYM,SYM, 57,SYM,SYM, 45, 46, 58, 59,SYM,ILL, 24, /* BX */
   30, 33, 51,ILL, 42, 26, 60, 32, 34, 31, 48, 47, 44, 37, 61, 50, /* CX */
  ILL, 35, 40, 41, 49, 22, 39,SYM, 62, 43, 36, 52, 38, 63, 64, 65, /* DX */
   30, 33, 51,ILL, 42, 26, 66, 32, 34, 31, 48, 47, 44, 37, 67, 50, /* EX */
  ILL, 35, 40, 41, 49, 22, 39,SYM, 68, 43, 36, 52, 38, 69, 70,SYM, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const int Unicode_Char_size = 60;
static const unsigned int Unicode_CharOrder[] =
{
  65,  0, 66, 15, 67, 23, 68, 13, 69,  4, 70, 14, 71, 18,72, 20,
  73,  1, 74, 11, 75, 12, 76,  3, 77, 10, 78,  6, 79,  8,80, 16,
  81, 28, 82,  5, 83,  7, 84,  2, 85,  9, 86, 25, 87, 19,88, 27,
  89, 29, 90, 21, 97,  0, 98, 15, 99, 23, 100, 13, 101,  4,102, 14,
  103, 18, 104, 20, 105,  1, 106, 11, 107, 12, 108,  3, 109, 10,110,  6,
  111,  8, 112, 16, 113, 28, 114,  5, 115,  7, 116,  2, 117,  9,118, 25,
  119, 19, 120, 27, 121, 29, 122, 21, 266, 26, 267, 26, 288, 22,289, 22,
  294, 17, 295, 17, 379, 24, 380, 24,
};


/* Model Table:
 * Total considered sequences: 902 / 900
 * - Positive sequences: first 557 (0.9950198365541072)
 * - Probable sequences: next 159 (716-557) (0.0039855933597821025)
 * - Neutral sequences: last 184 (0.000994570086110702)
 * - Negative sequences: -2 (off-ratio)
 * Negative sequences: TODO
 */
static const PRUint8 MalteseLangModel[] =
{
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,0,2,0,2,1,3,3,3,
  3,3,3,3,3,2,2,3,3,3,3,3,3,3,3,3,3,2,3,3,3,2,2,2,0,3,2,3,3,3,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,2,3,3,3,3,3,
  3,3,3,2,3,3,3,3,3,3,2,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,
  3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,2,0,3,0,2,0,1,3,3,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
  3,3,3,3,3,3,3,3,2,2,3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,
  3,3,2,3,3,3,3,3,3,3,3,3,3,3,1,3,3,3,3,3,3,0,1,3,1,0,1,3,3,3,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,2,0,2,1,3,2,1,1,2,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,1,1,3,0,0,1,3,3,0,0,1,0,0,1,1,0,3,
  3,3,2,3,3,3,3,3,3,3,3,3,0,3,2,2,1,3,3,3,3,2,0,1,0,1,0,2,2,3,
  3,3,3,3,3,3,3,3,3,3,1,2,2,3,3,0,0,1,2,3,2,1,1,3,0,0,0,1,2,0,
  3,3,3,3,3,3,3,3,3,3,2,3,2,3,0,3,0,3,3,3,2,0,0,2,3,0,1,0,3,3,
  3,3,3,3,3,3,2,3,3,3,3,3,1,2,1,2,3,0,2,0,3,2,0,1,0,0,2,0,0,2,
  3,3,3,3,3,3,3,3,3,3,3,3,1,3,1,3,0,3,0,2,3,0,3,0,3,0,0,2,3,0,
  3,3,3,3,3,3,3,3,3,3,3,2,2,2,0,2,2,3,3,3,3,1,0,0,3,3,0,0,1,3,
  3,3,3,3,3,3,3,3,3,2,1,1,3,3,1,2,0,2,2,3,3,0,3,0,3,0,3,2,2,1,
  3,3,3,3,3,3,3,2,3,3,3,0,1,1,0,3,1,0,1,2,2,2,0,1,0,1,0,0,0,3,
  3,3,0,2,3,0,2,1,3,3,1,3,0,1,0,1,0,0,2,0,2,3,0,1,0,0,0,0,1,2,
  3,3,2,2,3,3,3,1,3,3,1,3,0,3,0,3,0,0,2,2,2,0,3,0,0,0,0,0,0,0,
  3,3,3,3,3,3,2,3,3,3,1,0,3,2,2,1,2,0,2,0,3,1,0,3,0,0,0,0,2,3,
  3,3,0,3,3,2,3,0,3,3,3,3,0,3,3,3,0,0,3,3,0,0,0,0,3,3,0,0,0,0,
  3,3,0,2,3,2,1,2,3,3,2,3,1,2,1,0,0,0,0,0,1,0,0,0,0,3,0,0,0,2,
  3,3,2,2,3,2,0,0,2,3,1,3,1,0,0,0,0,1,0,0,0,0,0,1,0,0,3,0,0,0,
  3,3,3,2,3,3,1,0,3,3,2,3,2,1,2,2,2,2,1,0,2,0,0,1,0,2,0,3,1,0,
  3,3,3,3,3,3,1,3,3,3,1,3,2,3,3,3,0,0,3,3,2,0,0,0,0,0,1,2,3,0,
  3,2,2,3,3,3,3,3,3,2,3,0,1,2,2,2,3,0,2,0,0,1,0,3,0,0,0,0,0,1,
};


const SequenceModel Iso_8859_3MalteseModel =
{
  Iso_8859_3_CharToOrderMap,
  MalteseLangModel,
  30,
  (float)0.9990054299138893,
  PR_TRUE,
  "ISO-8859-3",
  "mt"
};

const LanguageModel MalteseModel =
{
  "mt",
  Unicode_CharOrder,
  60,
  MalteseLangModel,
  30,
  5,
  (float)0.45986965109395783,
  23,
  (float)0.03540344275842667,
  (float)0.9980570745344894,
};
