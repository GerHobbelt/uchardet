/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
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
 * The Original Code is Mozilla Universal charset detector code. This
 * file was later added by Jehan in 2021 to add language detection.
 *
 * The Initial Developer of the Original Code is Netscape Communications
 * Corporation.
 * Portions created by the Initial Developer are Copyright (C) 2001 the
 * Initial Developer. All Rights Reserved.
 *
 * Contributor(s):
 *          Jehan <zemarmot.net> (2021)
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

#include <math.h>
#include "nsLanguageDetector.h"

nsDetectState nsLanguageDetector::HandleData(const int* codePoints, PRUint32 cpLen)
{
  int order;

  for (PRUint32 i = 0; i < cpLen; i++)
  {
    order = GetOrderFromCodePoint(codePoints[i]);

    mTotalChar++;

    if (order < 0 || order >= mModel->freqCharCount)
	{
      if (codePoints[i] <= 0x1F || codePoints[i] == 0x7F   || /* C0 */
          (codePoints[i] <= 0x9F && codePoints[i] >= 0x80) || /* C1 */
          /* Separators: not strictly control characters for the Unicode
           * standard, but we'll consider as such in our purpose.
           */
          codePoints[i] == 0x2028 || codePoints[i] == 0x2029 ||
          /* Tags: U+E0001 is deprecated but other are still usable as
           * emoji identifiers. Not sure how to use them.
           */
          codePoints[i] == 0xE0001                           ||
          /* Interlinear annotations. */
          codePoints[i] == 0xFFF9 || codePoints[i] == 0xFFFA ||
          codePoints[i] == 0xFFFB                            ||
          /* Bidirectional text control. */
          codePoints[i] == 0x061C || codePoints[i] == 0x200E ||
          codePoints[i] == 0x200F ||
          (codePoints[i] >= 0x202A && codePoints[i] <= 0x202E) ||
          (codePoints[i] >= 0x2066 && codePoints[i] <= 0x2069) ||
          /* Control pictures. */
          (codePoints[i] >= 0x2400 && codePoints[i] <= 0x2426))
      {
        /* XXX: some control characters such as variation selectors may
         * need to be considered separately (basically just as if they
         * were not here and simply skipped?). */
        //mCtrlChar++;
      }
      /* When encountering an illegal codepoint, no need
       * to continue analyzing data. It means this is not right, hence
       * that the encoding we deducted this codepoint from is wrong.
       * Unfortunately listing all illegal codePoints in Unicode might be
       * a daunting task and comparing each characters to all these
       * illegal codePoints would be a lot of additional work. Is it
       * really necessary? XXX
       */
      else if (/* Tab, line feed and carriage returns are common enough
                * that they should be considered as commonly used characters.
                */
               codePoints[i] == 0x9 || codePoints[i] == 0xA || codePoints[i] == 0xd ||
               (codePoints[i] >= 0x20 && codePoints[i] <= 0x40) ||
               (codePoints[i] >= 0x5B && codePoints[i] <= 0x5F) ||
               (codePoints[i] >= 0x7B && codePoints[i] <= 0x7E) ||
               (codePoints[i] >= 0xA0 && codePoints[i] <= 0xA5) ||
               (codePoints[i] >= 0xA0 && codePoints[i] <= 0xB4) ||
               (codePoints[i] >= 0xB6 && codePoints[i] <= 0xBF) ||
               codePoints[i] == 0xD7                            ||
               codePoints[i] == 0xF7                            ||
               /* General Punctuation */
               (codePoints[i] >= 0x2000 && codePoints[i] <= 0x206F) ||
               /* Vertical Forms */
               (codePoints[i] >= 0xFE10 && codePoints[i] <= 0xFE1F) ||
               /* CJK Symbols and Punctuation */
               (codePoints[i] >= 0x3000 && codePoints[i] <= 0x303F) ||
               /* Halfwidth and Fullwidth Forms */
               (codePoints[i] >= 0xFF00 && codePoints[i] <= 0xFFEF))
       {
         /* Punctuations, various symbols, even numbers are simply
          * ignored.
          * As for halfwidth and fullwidth characters, I'm not sure what
          * to do with them, but let's go with the same logics of
          * skipping them, at least for now..
          */
         //mVariousBetween++;
       }
      else if (/* Common Ctrl except the ones considered as common chars. */
               (codePoints[i] >= 0x1F600 && codePoints[i] <= 0x1F64F) ||
               codePoints[i] == 0xFE0E || codePoints[i] == 0xFE0F     ||
               (codePoints[i] >= 0x1F3FB && codePoints[i] <= 0x1F3FF) ||
               /* Miscellaneous Symbols */
               (codePoints[i] >= 0x2600 && codePoints[i] <= 0x26FF) ||
               /* Supplemental Symbols and Pictographs */
               (codePoints[i] >= 0x1F90C && codePoints[i] <= 0x1F93A) ||
               (codePoints[i] >= 0x1F93C && codePoints[i] <= 0x1F945) ||
               (codePoints[i] >= 0x1F947 && codePoints[i] <= 0x1F978) ||
               (codePoints[i] >= 0x1F97A && codePoints[i] <= 0x1F9CB) ||
               (codePoints[i] >= 0x1F9CD && codePoints[i] <= 0x1F9FF) ||
               /* Miscellaneous Symbols and Pictographs */
               (codePoints[i] >= 0x1F300 && codePoints[i] <= 0x1F5FF) ||
               /* Transport and Map Symbols */
               (codePoints[i] >= 0x1F680 && codePoints[i] <= 0x1F6FF) ||
               /* Dingbat */
               (codePoints[i] >= 0x2700 && codePoints[i] <= 0x27BF))
      {
        //mEmoticons++;
      }
      else
      {
        /* All the rest is to be considered as non-frequent characters.
         * These are not disqualifying (we may also have a text with a bit
         * of foreign quotes in it or very unusual characters sometimes)
         * but they will drop a bit the confidence.
         */
        mOutChar++;
        order = -2;

        if (mLastOrder == -2 || mLastOrder >= 0)
          /* Adding a non frequent sequence. */
          mTotalSeqs++;
      }
    }
    else // if (order < mModel->freqCharCount)
    {
      mFreqChar++;

      if (mLastOrder >= 0 && mLastOrder < mModel->freqCharCount)
      {
        mTotalSeqs++;
        ++(mSeqCounters[mModel->precedenceMatrix[mLastOrder * mModel->freqCharCount + order]]);
      }
      else if (mLastOrder == -2)
      {
        /* Adding a non frequent sequence. */
        mTotalSeqs++;
      }

      if (order < mModel->veryFreqCharCount)
        mVeryFreqChar++;
      if (order > mModel->lowFreqOrder)
        mLowFreqChar++;
    }
    mLastOrder = order;
  }

  if (mState == STATE_DETECTING)
    if (mTotalSeqs > LANG_SB_ENOUGH_REL_THRESHOLD)
    {
      float cf = GetConfidence();
      if (cf > LANG_POSITIVE_SHORTCUT_THRESHOLD)
        mState = STATE_FOUND;
      else if (cf < LANG_NEGATIVE_SHORTCUT_THRESHOLD)
        mState = STATE_UNLIKELY;
    }

  return mState;
}

void nsLanguageDetector::Reset(void)
{
  mState     = STATE_DETECTING;
  mLastOrder = -1;
  for (PRUint32 i = 0; i < LANG_NUMBER_OF_SEQ_CAT; i++)
    mSeqCounters[i] = 0;
  mTotalSeqs = 0;
  mTotalChar = 0;
  //mCtrlChar  = 0;
  //mEmoticons  = 0;
  //mVariousBetween  = 0;
  mFreqChar     = 0;
  mVeryFreqChar = 0;
  mLowFreqChar  = 0;
  mOutChar      = 0;
}

#include <cstdio>
float nsLanguageDetector::GetConfidence(void)
{
  float r;

  if (mTotalSeqs > 0) {
    /* Positive sequences will boost the confidence, probable sequence
     * only a bit but not so much, neutral sequences will stall the
     * confidence.
     * Negative sequences will negatively impact the confidence.
     */
    float positiveSeqs = mSeqCounters[LANG_POSITIVE_CAT];
    float probableSeqs = mSeqCounters[LANG_PROBABLE_CAT];
    //float neutralSeqs  = mSeqCounters[LANG_NEUTRAL_CAT];
    float negativeSeqs = mSeqCounters[LANG_NEGATIVE_CAT];

    r = (positiveSeqs + probableSeqs / 4 - negativeSeqs * 4) / mTotalSeqs / mModel->mTypicalPositiveRatio;
    /* The more characters outside the expected characters
     * (proportionally to the size of the text), the less confident we
     * become in the current language.
     * Note that we removed punctuations and various symbols which are
     * therefore somehow more "neutral".
     */
    r = r * (mTotalChar - mOutChar) / mTotalChar;
    r = r * mFreqChar / (mFreqChar + mOutChar);

    /* How similar are the very frequent character ratio. */
    r = r * (1.0 - fabs((float) mVeryFreqChar / mFreqChar - mModel->veryFreqRatio) / 4.0);
    /* How similar are the very rare character ratio. */
    r = r * (1.0 - fabs((float) mLowFreqChar / mFreqChar - mModel->lowFreqRatio) / 4.0);

    return r;
  }
  return (float)0.01;
}

const char* nsLanguageDetector::GetLanguage()
{
  return mModel->langName;
}

int nsLanguageDetector::GetOrderFromCodePoint(int codePoint)
{
	// faster direct lookup available? use it!
	if (mModel->unicodeCharToOrderMap)
	{
		if (codePoint < mModel->unicodeCharToOrderMapLowerBound)
			return -1;

		int index = codePoint - mModel->unicodeCharToOrderMapLowerBound;
		if (index < mModel->unicodeCharToOrderFirstTableChunkSize)
		{
			return mModel->unicodeCharToOrderMap[index];
		}
		else
		{
			// check chunk #2:
			index -= mModel->unicodeCharToOrderSecondTableChunkOffset;
			if (index < 0)
				return -1;
			if (index < mModel->unicodeCharToOrderSecondTableChunkSize)
				return mModel->unicodeCharToOrderMap[index];
			return -1;
		}
    }

  // use O(log(F)) binary search to find this codepoint's slot:
  // `max` is the last within-bounds index, i.e. max=R from the perspective of the published algorithm.
  int min = 0;
  int max = mModel->charOrderTableSize - 1;
  int i   = max / 2;
  int c;

  while ((c = mModel->charOrderTable[i * 2]) != codePoint)
  {
    if (c > codePoint)
    {
      if (i == min)
        return -1;
      max = i - 1;
    }
    else
    {
      if (i == max)
        return -1;
      min = i + 1;
    }
    i = min + (max - min) / 2;
  }

  return (c == codePoint) ? mModel->charOrderTable[i * 2 + 1] : -1;
}
