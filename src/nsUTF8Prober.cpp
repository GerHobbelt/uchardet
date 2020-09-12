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
 * The Original Code is mozilla.org code.
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

#include "nsUTF8Prober.h"
#include <cmath>

void  nsUTF8Prober::Reset(void)
{
  mCodingSM->Reset(); 
  mState = eDetecting;
  mNumOfMBChar = 0;
  mMBCharLen = 0;
  mFullLen = 0;
  mBasicAsciiLen = 0;
}

nsProbingState nsUTF8Prober::HandleData(const char* aBuf, PRUint32 aLen)
{
  PRUint32 codingState;

  mFullLen += aLen;
  for (PRUint32 i = 0; i < aLen; i++)
  {
	char c = aBuf[i];
    codingState = mCodingSM->NextState(c);
	if (codingState == eError)
	{
	  mState = eNotMe;
	  break;
	}
    else if (codingState == eItsMe)
    {
      mState = eFoundIt;
      break;
    }
    if (codingState == eStart)
    {
	  if (mCodingSM->GetCurrentCharLen() >= 2)
	  {
		mNumOfMBChar++;
		mMBCharLen += mCodingSM->GetCurrentCharLen();
	  }
	  else if (c < 128) // codes higher than 127 are extended ASCII
	  {
		mBasicAsciiLen++;
	  }
    }
  }

  if (mState == eDetecting)
    if (GetConfidence() > SHORTCUT_THRESHOLD)
      mState = eFoundIt;
  return mState;
}

#define ONE_CHAR_PROB   (float)0.50

float nsUTF8Prober::GetConfidence(void)
{
  float unlike = (float)0.99;
  float mbCharRatio = (float)0;
  PRUint32 nonBasciAsciiLen = mFullLen - mBasicAsciiLen;
  if (nonBasciAsciiLen > 0)
  {
	mbCharRatio = float(mMBCharLen / nonBasciAsciiLen);
  }

  if (mNumOfMBChar < 6 && mbCharRatio <= 0.6f)
  {
    for (PRUint32 i = 0; i < mNumOfMBChar; i++)
      unlike *= std::powf(ONE_CHAR_PROB, (float)mNumOfMBChar);
    return (float)1.0 - unlike;
  }
  else
    return (float)0.99;
}

