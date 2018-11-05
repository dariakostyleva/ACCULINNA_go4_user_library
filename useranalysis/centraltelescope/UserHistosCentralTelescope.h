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
 	TH1* fTrigger;
 	TH1* fMultX;
 	TH1* fProfX;
 	TH1* fMultY;
 	TH1* fProfY;
 	TH2* fProjXY;


	ClassDef(UserHistosCentralTelescope, 1);

};

#endif // USERHISTOSCentralTelescope_H
