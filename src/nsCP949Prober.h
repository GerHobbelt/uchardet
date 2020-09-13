#ifndef nsCP949Prober_h__
#define nsCP949Prober_h__

#include "nsCharSetProber.h"
#include "nsCodingStateMachine.h"
#include "CharDistribution.h"

class nsCP949Prober: public nsCharSetProber {
public:
	nsCP949Prober(PRBool aIsPreferredLanguage)
		:mIsPreferredLanguage(aIsPreferredLanguage)
	{
		mCodingSM = new nsCodingStateMachine(&CP949SMModel);
		Reset();
	}
	virtual ~nsCP949Prober(void) { delete mCodingSM; }
	nsProbingState HandleData(const char* aBuf, PRUint32 aLen);

	const char* GetCharSetName() { return "CP949"; }
	nsProbingState GetState(void) { return mState; }
	void      Reset(void);
	float     GetConfidence(void);
	void      SetOpion() {}

protected:
	nsCodingStateMachine* mCodingSM;
	nsProbingState mState;

	//EUCKRContextAnalysis mContextAnalyser;
	CP949DistributionAnalysis mDistributionAnalyser;
	char mLastChar[2];
	PRBool mIsPreferredLanguage;
};

#endif