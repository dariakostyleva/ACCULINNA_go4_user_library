#include "UserHistosCentralTelescope.h"

// ROOT
#include <TH1D.h>
#include <TH2D.h>

// Go4
#include <TGo4Analysis.h>
#include <TGo4ShapedCond.h>
#include <TGo4Picture.h>

// Project
#include "setupconfigcppwrapper/SetupConfiguration.h"
#include "setupconfigcppwrapper/ElectronicsChars.h"
#include "UserParameterCentralTelescope.h"

UserHistosCentralTelescope::UserHistosCentralTelescope()
{

	InitHistograms();
//	InitConditions();
}

UserHistosCentralTelescope::~UserHistosCentralTelescope()
{
	/**
	 * Not 100% sure, but it looks as if you do not need to delete your histograms yourself.
	 * TGo4AnalysisObjectManager, as part of the singleton TGo4Analysis, will take care.
	 */
}

void UserHistosCentralTelescope::InitHistograms()
{
	TGo4Analysis* a = TGo4Analysis::Instance();
	//TString xhist;
	TString xhistname;
	TString xhisttitle;
	TString yhistname;
	TString yhisttitle;

	fTrigger = a->MakeTH1('I', "Central_telescope/Trigger", "Trigger", 5, 0, 5);
	fMultX = a->MakeTH1('I', "Central_telescope/MultX", "Multiplicity on X side of Si", 32, 0, 32);
	fProfX = a->MakeTH1('I', "Central_telescope/ProfX", "Profile on X side of Si", 32, 0, 32);
	fMultY = a->MakeTH1('I', "Central_telescope/MultY", "Multiplicity on Y side of Si", 32, 0, 32);
	fProfY = a->MakeTH1('I', "Central_telescope/ProfY", "Profile on Y side of Si", 32, 0, 32);
	fProjXY = a->MakeTH2('I', "Central_telescope/ProjXY", "X vs Y in Si ", 32, 0, 32, 32, 0, 32,"X","Y");

	for (Int_t i = 0; i < 32; i++) {
		xhistname.Form("Central_telescope/DSDX_C/DSDX_C[%d]",i);
		xhisttitle.Form("fDSDX_C[%d]",i);
		fDSDX_C[i] = a->MakeTH1('I', xhistname, xhisttitle, 100, 0, 1000);

		yhistname.Form("Central_telescope/DSDY_C/DSDY_C[%d]",i);
		yhisttitle.Form("fDSDY_C[%d]",i);
		fDSDY_C[i] = a->MakeTH1('I', yhistname, yhisttitle, 100, 0, 1000);
	}


//	UserParameterBeamDetector *fpar = (UserParameterCentralTelescope*)a->GetParameter("CentrTelPar");

}

ClassImp(UserHistosCentralTelescope)
