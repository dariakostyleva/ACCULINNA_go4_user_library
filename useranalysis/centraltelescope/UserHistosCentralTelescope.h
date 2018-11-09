/**

	@class UserHistosCentralTelescope

*/

#ifndef USERHISTOSCentralTelescope_H
#define USERHISTOSCentralTelescope_H

#include <TObject.h> // mother class

// STD
#include <map>

class TH1;
class TH2;
class TGo4ShapedCond;

class UserHistosCentralTelescope : public TObject
{
public:
	UserHistosCentralTelescope();
	~UserHistosCentralTelescope();

//	void GenerateAutoHistos(void);
	void InitHistograms();

 	TH1* fDSDX_C[32]; //!
 	TH1* fDSDY_C[32]; //!
 	TH1* ftDSDX_C[32]; //!
 	TH1* ftDSDY_C[32]; //!
 	TH1* fTrigger; //!
 	TH1* fMultX; //!
 	TH1* fMultXtime; //!
 	TH1* fProfX; //!
 	TH1* fMultY; //!
 	TH1* fMultYtime; //!
 	TH1* fProfY; //!
 	TH2* fProjXY; //!
 	TH1* fDSDX_Cmm; //!
 	TH1* fDSDY_Cmm; //!
 	TH2* fDSDXY_Cmm; //!

 	TH1* fMultXclust;
 	TH1* fMultYclust;

 	TH1* fMultCsI; //!
 	TH1* fMultCsItime; //!
 	TH1* fCsI[16]; //!
 	TH1* ftCsI[16]; //!
 	TH2* fCsIAmpTim[16]; //!

 	//TH1* fFiredY;
 	//TH1* fFiredX;
 	TH2* fFiredXY_CsI[16];
 	TH2* fdEE_YCsI[16];
 	TH2* fdEE_XCsI[16];


	ClassDef(UserHistosCentralTelescope, 1);

};

#endif // USERHISTOSCentralTelescope_H
