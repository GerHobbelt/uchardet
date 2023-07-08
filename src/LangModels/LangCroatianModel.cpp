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

/********* Language model for: Croatian *********/

/**
 * Generated by BuildLangModel.py
 * On: 2023-07-08 21:08:07.317338
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

#define CroatianOrderWidth         (IRR + 1)


static const unsigned char Iso_8859_2_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 18, 19, 13,  3, 25, 16, 20,  1,  7, 10, 11, 14,  4,  2, /* 4X */
   15, 31,  5,  6,  8,  9, 12, 28, 29, 27, 17,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 18, 19, 13,  3, 25, 16, 20,  1,  7, 10, 11, 14,  4,  2, /* 6X */
   15, 31,  5,  6,  8,  9, 12, 28, 29, 27, 17,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,IRR,SYM,IRR,SYM,IRR,IRR,SYM,SYM, 22,IRR,IRR,IRR,SYM, 23,IRR, /* AX */
  SYM,IRR,SYM,IRR,SYM,IRR,IRR,SYM,SYM, 22,IRR,IRR,IRR,SYM, 23,IRR, /* BX */
  IRR,IRR,IRR,IRR,IRR,IRR, 24,IRR, 21, 30,IRR,IRR,IRR,IRR,IRR,IRR, /* CX */
   26,IRR,IRR,IRR,IRR,IRR,IRR,SYM,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, /* DX */
  IRR,IRR,IRR,IRR,IRR,IRR, 24,IRR, 21, 30,IRR,IRR,IRR,IRR,IRR,IRR, /* EX */
   26,IRR,IRR,IRR,IRR,IRR,IRR,SYM,IRR,IRR,IRR,IRR,IRR,IRR,IRR,SYM, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_13_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 18, 19, 13,  3, 25, 16, 20,  1,  7, 10, 11, 14,  4,  2, /* 4X */
   15, 31,  5,  6,  8,  9, 12, 28, 29, 27, 17,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 18, 19, 13,  3, 25, 16, 20,  1,  7, 10, 11, 14,  4,  2, /* 6X */
   15, 31,  5,  6,  8,  9, 12, 28, 29, 27, 17,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,IRR,SYM,IRR,SYM,SYM,SYM,SYM,IRR, /* AX */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,IRR,SYM,IRR,SYM,SYM,SYM,SYM,IRR, /* BX */
  IRR,IRR,IRR, 24,IRR,IRR,IRR,IRR, 21, 30,IRR,IRR,IRR,IRR,IRR,IRR, /* CX */
   22,IRR,IRR,IRR,IRR,IRR,IRR,SYM,IRR,IRR,IRR,IRR,IRR,IRR, 23,IRR, /* DX */
  IRR,IRR,IRR, 24,IRR,IRR,IRR,IRR, 21, 30,IRR,IRR,IRR,IRR,IRR,IRR, /* EX */
   22,IRR,IRR,IRR,IRR,IRR,IRR,SYM,IRR,IRR,IRR,IRR,IRR,IRR, 23,SYM, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_16_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 18, 19, 13,  3, 25, 16, 20,  1,  7, 10, 11, 14,  4,  2, /* 4X */
   15, 31,  5,  6,  8,  9, 12, 28, 29, 27, 17,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 18, 19, 13,  3, 25, 16, 20,  1,  7, 10, 11, 14,  4,  2, /* 6X */
   15, 31,  5,  6,  8,  9, 12, 28, 29, 27, 17,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,IRR,IRR,IRR,SYM,SYM, 22,SYM, 22,SYM,IRR,SYM,IRR,SYM,IRR,IRR, /* AX */
  SYM,SYM, 21,IRR, 23,SYM,SYM,SYM, 23, 21,IRR,SYM,IRR,IRR,IRR,IRR, /* BX */
  IRR,IRR,IRR,IRR,IRR, 24,IRR,IRR,IRR, 30,IRR,IRR,IRR,IRR,IRR,IRR, /* CX */
   26,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, /* DX */
  IRR,IRR,IRR,IRR,IRR, 24,IRR,IRR,IRR, 30,IRR,IRR,IRR,IRR,IRR,IRR, /* EX */
   26,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Windows_1250_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 18, 19, 13,  3, 25, 16, 20,  1,  7, 10, 11, 14,  4,  2, /* 4X */
   15, 31,  5,  6,  8,  9, 12, 28, 29, 27, 17,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 18, 19, 13,  3, 25, 16, 20,  1,  7, 10, 11, 14,  4,  2, /* 6X */
   15, 31,  5,  6,  8,  9, 12, 28, 29, 27, 17,SYM,SYM,SYM,SYM,CTR, /* 7X */
  SYM,ILL,SYM,ILL,SYM,SYM,SYM,SYM,ILL,SYM, 22,SYM,IRR,IRR, 23,IRR, /* 8X */
  ILL,SYM,SYM,SYM,SYM,SYM,SYM,SYM,ILL,SYM, 22,SYM,IRR,IRR, 23,IRR, /* 9X */
  SYM,SYM,SYM,IRR,SYM,IRR,SYM,SYM,SYM,SYM,IRR,SYM,SYM,SYM,SYM,IRR, /* AX */
  SYM,SYM,SYM,IRR,SYM,SYM,SYM,SYM,SYM,IRR,IRR,SYM,IRR,SYM,IRR,IRR, /* BX */
  IRR,IRR,IRR,IRR,IRR,IRR, 24,IRR, 21, 30,IRR,IRR,IRR,IRR,IRR,IRR, /* CX */
   26,IRR,IRR,IRR,IRR,IRR,IRR,SYM,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, /* DX */
  IRR,IRR,IRR,IRR,IRR,IRR, 24,IRR, 21, 30,IRR,IRR,IRR,IRR,IRR,IRR, /* EX */
   26,IRR,IRR,IRR,IRR,IRR,IRR,SYM,IRR,IRR,IRR,IRR,IRR,IRR,IRR,SYM, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Ibm852_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 18, 19, 13,  3, 25, 16, 20,  1,  7, 10, 11, 14,  4,  2, /* 4X */
   15, 31,  5,  6,  8,  9, 12, 28, 29, 27, 17,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 18, 19, 13,  3, 25, 16, 20,  1,  7, 10, 11, 14,  4,  2, /* 6X */
   15, 31,  5,  6,  8,  9, 12, 28, 29, 27, 17,SYM,SYM,SYM,SYM,CTR, /* 7X */
  IRR,IRR, 30,IRR,IRR,IRR, 24,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, 24, /* 8X */
   30,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,SYM, 21, /* 9X */
  IRR,IRR,IRR,IRR,IRR,IRR, 23, 23,IRR,IRR,SYM,IRR, 21,IRR,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM,IRR,IRR,IRR,IRR,SYM,SYM,SYM,SYM,IRR,IRR,SYM, /* BX */
  SYM,SYM,SYM,SYM,SYM,SYM,IRR,IRR,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* CX */
   26, 26,IRR,IRR,IRR,IRR,IRR,IRR,IRR,SYM,SYM,SYM,SYM,IRR,IRR,SYM, /* DX */
  IRR,IRR,IRR,IRR,IRR,IRR, 22, 22,IRR,IRR,IRR,IRR,IRR,IRR,IRR,SYM, /* EX */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,IRR,IRR,IRR,SYM,SYM, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Maccentraleurope_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 18, 19, 13,  3, 25, 16, 20,  1,  7, 10, 11, 14,  4,  2, /* 4X */
   15, 31,  5,  6,  8,  9, 12, 28, 29, 27, 17,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 18, 19, 13,  3, 25, 16, 20,  1,  7, 10, 11, 14,  4,  2, /* 6X */
   15, 31,  5,  6,  8,  9, 12, 28, 29, 27, 17,SYM,SYM,SYM,SYM,CTR, /* 7X */
  IRR,IRR,IRR, 30,IRR,IRR,IRR,IRR,IRR, 21,IRR, 21, 24, 24, 30,IRR, /* 8X */
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, /* 9X */
  SYM,SYM,IRR,SYM,SYM,SYM,SYM,IRR,SYM,SYM,SYM,IRR,SYM,SYM,IRR,IRR, /* AX */
  IRR,IRR,SYM,SYM,IRR,IRR,SYM,SYM,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR, /* BX */
  IRR,IRR,SYM,SYM,IRR,IRR,SYM,SYM,SYM,SYM,SYM,IRR,IRR,IRR,IRR,IRR, /* CX */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,IRR,IRR,IRR,IRR,SYM,SYM,IRR,IRR, /* DX */
  IRR, 22,SYM,SYM, 22,IRR,IRR,IRR,IRR,IRR,IRR, 23, 23,IRR,IRR,IRR, /* EX */
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,SYM, /* FX */
};
/* X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

#define Unicode_Char_size    64

static const PRUint32 Unicode_CharOrder[] =
{
   65,  0,  66, 18,  67, 19,  68, 13,  69,  3,  70, 25,  71, 16,  72, 20,
   73,  1,  74,  7,  75, 10,  76, 11,  77, 14,  78,  4,  79,  2,  80, 15,
   81, 31,  82,  5,  83,  6,  84,  8,  85,  9,  86, 12,  87, 28,  88, 29,
   89, 27,  90, 17,  97,  0,  98, 18,  99, 19, 100, 13, 101,  3, 102, 25,
  103, 16, 104, 20, 105,  1, 106,  7, 107, 10, 108, 11, 109, 14, 110,  4,
  111,  2, 112, 15, 113, 31, 114,  5, 115,  6, 116,  8, 117,  9, 118, 12,
  119, 28, 120, 29, 121, 27, 122, 17, 201, 30, 233, 30, 262, 24, 263, 24,
  268, 21, 269, 21, 272, 26, 273, 26, 352, 22, 353, 22, 381, 23, 382, 23,
};

static const float OrderToRatio[] =
{
  0.114790639f,  0.096752785f,  0.086873117f,  0.085281628f,  0.067321623f,  0.054761076f,  0.050495807f,  0.048892568f, 
  0.044322759f,  0.042342762f,  0.037731091f,  0.037144045f,  0.032490023f,  0.032137501f,  0.030750181f,  0.028467847f, 
  0.018638855f,  0.017494138f,  0.015506307f,  0.012763736f,  0.009960699f,  0.008595901f,  0.006705013f,  0.004723302f, 
  0.004422679f,  0.004013607f,  0.001902394f,  0.001783662f,  0.001576556f,  0.000433063f,  0.000160104f,  0.000159859f, 
  0
};


/* Model Table:
 * Number of web pages processed for this model: 1050
 * Number of characters consumed for this model: 4084854
 * Total considered sequences: 1637 / 1024
 *
 * - Positive sequences: first 495 (0.9950274932845835)
 * - Probable sequences: next 262 (757-495) (0.003976217772555302)
 * - Neutral sequences: last 267 (0.0009962889428611899)
 * - Negative sequences: -613 (off-ratio, TODO)
 */
#define CroatianUnicodeCharToOrderIsReduced  0


#define CroatianFCMLowerBound  65
#define CroatianFCMUpperBound  382


static const PRUint8 CroatianUnicodeCharToOrder[] =
{
  0,18,19,13,3,25,16,20,1,7,10,11,14,4,2,15,31,5,6,8,
  9,12,28,29,27,17,IRR,IRR,IRR,IRR,IRR,IRR,0,18,19,13,3,25,16,20,
  1,7,10,11,14,4,2,15,31,5,6,8,9,12,28,29,27,17,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,30,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,30,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,24,24,IRR,
  IRR,IRR,IRR,21,21,IRR,IRR,26,26,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,22,22,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,23,23,
};



#define CroatianUnicodeCharToOrderFirstTableChunkSize    58
#define CroatianUnicodeCharToOrderSecondTableChunkOffset 136
#define CroatianUnicodeCharToOrderSecondTableChunkSize   182


static const PRUint8 CroatianUnicodeCharToOrder2[] =
{
  30,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,30,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,24,24,IRR,IRR,IRR,IRR,21,21,IRR,IRR,26,26,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,22,22,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,IRR,
  23,23,
};

static const PRUint8 CroatianCompactedLangModel[] =
{
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,3,1,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,1,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,2,2,1,3,2,3,2,2,2,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,1,2,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,3,3,3,1,0,0,0,3,0,3,3,1,2,0,
  3,3,3,3,3,2,3,2,2,3,3,2,3,3,3,3,2,3,3,3,2,3,2,1,0,2,0,1,1,1,1,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,2,3,2,3,3,1,1,0,0,2,0,3,2,1,2,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,1,0,
  3,3,3,3,3,3,3,2,3,3,2,3,3,2,3,2,2,1,2,3,3,2,3,0,2,2,0,3,2,1,1,0,
  3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,2,3,3,2,2,2,2,0,3,0,3,2,2,2,0,
  3,3,3,3,3,3,3,3,1,3,3,3,1,3,1,1,2,1,1,3,1,2,3,0,1,1,1,2,1,0,1,0,
  3,3,3,3,3,3,3,3,2,3,2,3,3,3,3,2,3,3,3,2,2,1,2,3,0,2,0,3,3,0,2,0,
  3,3,3,3,3,3,3,3,2,3,3,3,2,3,3,3,2,2,3,3,2,3,2,0,2,2,0,3,2,1,2,0,
  3,3,3,3,3,3,3,3,3,3,2,3,1,2,2,3,1,2,2,3,3,2,3,1,3,2,0,2,2,1,2,0,
  3,3,3,3,3,3,3,2,2,3,2,3,3,3,3,2,3,2,3,3,3,0,1,1,0,2,1,2,2,1,1,0,
  3,3,3,3,3,3,2,3,1,3,2,3,3,3,3,1,3,2,3,1,3,0,0,1,0,1,0,2,2,1,1,0,
  3,3,3,3,3,3,3,3,2,3,2,3,2,3,2,1,1,3,3,2,2,1,0,1,1,1,0,3,2,1,1,0,
  3,3,3,3,2,3,2,3,3,3,3,3,2,2,2,2,2,2,2,3,3,0,0,0,0,2,0,2,1,1,2,0,
  3,3,3,3,3,3,3,1,3,3,2,3,3,2,3,2,1,1,2,2,1,1,1,1,0,2,0,3,2,1,2,0,
  3,3,3,3,3,1,0,3,1,3,3,3,3,0,1,0,0,0,0,2,1,0,0,0,1,0,0,0,0,0,0,0,
  3,3,3,3,3,1,1,2,3,3,3,3,3,1,2,3,1,0,1,2,2,2,0,0,3,0,0,0,0,0,0,0,
  3,3,2,3,3,2,1,3,0,3,1,2,1,3,2,1,1,0,3,0,0,0,0,0,0,0,2,0,0,0,0,0,
  3,3,3,3,3,1,1,0,0,3,2,2,0,1,1,0,1,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,2,3,3,1,3,3,2,3,1,1,2,1,2,2,2,2,1,0,1,1,0,3,0,2,1,1,1,0,
  3,3,2,3,1,0,1,0,0,3,0,0,0,0,2,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,
  3,2,3,3,3,3,3,3,2,3,2,3,2,2,2,2,2,1,2,2,2,0,0,0,0,1,0,1,2,2,1,0,
  3,3,3,3,3,2,2,1,2,3,1,2,1,1,2,1,1,1,2,1,3,1,0,0,0,1,0,2,2,1,1,0,
  3,3,2,2,1,1,1,0,2,2,1,1,2,1,1,2,1,1,1,2,1,0,0,0,0,2,0,2,2,2,0,0,
  2,1,2,2,2,2,2,1,2,1,1,2,2,2,2,1,2,0,1,2,0,0,0,0,0,1,0,0,0,1,1,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
};


const SequenceModel Iso_8859_2CroatianModel =
{
  Iso_8859_2_CharToOrderMap,
  CroatianCompactedLangModel,
  CroatianOrderWidth,
  0.9990037110571388f,
  PR_TRUE,
  "ISO-8859-2",
  "hr"
};

const SequenceModel Iso_8859_13CroatianModel =
{
  Iso_8859_13_CharToOrderMap,
  CroatianCompactedLangModel,
  CroatianOrderWidth,
  0.9990037110571388f,
  PR_TRUE,
  "ISO-8859-13",
  "hr"
};

const SequenceModel Iso_8859_16CroatianModel =
{
  Iso_8859_16_CharToOrderMap,
  CroatianCompactedLangModel,
  CroatianOrderWidth,
  0.9990037110571388f,
  PR_TRUE,
  "ISO-8859-16",
  "hr"
};

const SequenceModel Windows_1250CroatianModel =
{
  Windows_1250_CharToOrderMap,
  CroatianCompactedLangModel,
  CroatianOrderWidth,
  0.9990037110571388f,
  PR_TRUE,
  "WINDOWS-1250",
  "hr"
};

const SequenceModel Ibm852CroatianModel =
{
  Ibm852_CharToOrderMap,
  CroatianCompactedLangModel,
  CroatianOrderWidth,
  0.9990037110571388f,
  PR_TRUE,
  "IBM852",
  "hr"
};

const SequenceModel MaccentraleuropeCroatianModel =
{
  Maccentraleurope_CharToOrderMap,
  CroatianCompactedLangModel,
  CroatianOrderWidth,
  0.9990037110571388f,
  PR_TRUE,
  "MacCentralEurope",
  "hr"
};

const LanguageModel CroatianModel =
{
  "hr",
  Unicode_CharOrder,
  Unicode_Char_size,

  CroatianFCMLowerBound,
  CroatianFCMUpperBound,
  CroatianUnicodeCharToOrderIsReduced,
  CroatianUnicodeCharToOrder,
  CroatianUnicodeCharToOrderFirstTableChunkSize,
  CroatianUnicodeCharToOrderSecondTableChunkOffset,
  CroatianUnicodeCharToOrderSecondTableChunkSize,
  CroatianUnicodeCharToOrder2,
  OrderToRatio,
  CroatianCompactedLangModel,
  CroatianOrderWidth,
  5,
  0.4510197916498362f,
  20,
  0.03447614039571549f,
  0.9993953272258932f,
};
