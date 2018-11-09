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
	fMultX = a->MakeTH1('I', "Central_telescope/DSD/MultX", "Multiplicity on X side of Si, ADC data", 10, 0, 10, "Number of strips fired");
	fMultXtime = a->MakeTH1('I', "Central_telescope/DSD/MultXtime", "Multiplicity on X side of Si, TDC data", 10, 0, 10, "Number of strips which got the time signal");
	fProfX = a->MakeTH1('I', "Central_telescope/DSD/ProfX", "Profile on X side of Si", 32, 0, 32);
	fMultY = a->MakeTH1('I', "Central_telescope/DSD/MultY", "Multiplicity on Y side of Si, ADC data", 10, 0, 10, "Number of strips fired");
	fMultYtime = a->MakeTH1('I', "Central_telescope/DSD/MultYtime", "Multiplicity on Y side of Si, TDC data", 10, 0, 10, "Number of strips which got the time signal");
	fProfY = a->MakeTH1('I', "Central_telescope/DSD/ProfY", "Profile on Y side of Si", 32, 0, 32);
	fProjXY = a->MakeTH2('I', "Central_telescope/DSD/ProjXY", "X vs Y in Si, mult == 1 ", 32, 0, 32, 32, 0, 32,"Strips on X","Strips on Y");
	fDSDX_Cmm = a->MakeTH1('I', "Central_telescope/DSD/DSDX_Cmm", "Profile on X side of Si in mm", 32, -32, 32);
	fDSDY_Cmm = a->MakeTH1('I', "Central_telescope/DSD/DSDY_Cmm", "Profile on Y side of Si in mm", 32, -32, 32);
	fDSDXY_Cmm = a->MakeTH2('I', "Central_telescope/DSD/DSDXY_Cmm", "X vs Y in Si, mult == 1", 32, -32, 32, 32, -32, 32, "X, mm", "Y, mm");
	fMultXclust = a->MakeTH1('I', "Central_telescope/DSD/MultXclust", "CLuster multiplicity on X side of Si, ADC data", 10, 0, 10, "Number of strips in clusters");
	fMultYclust = a->MakeTH1('I', "Central_telescope/DSD/MultYclust", "CLuster multiplicity on Y side of Si, ADC data", 10, 0, 10, "Number of strips in clusters");

	//for dEE
	TString deehistname;
	TString deehisttitle;
	for (Int_t i = 0; i < 16; i++) {
		deehistname.Form("Central_telescope/CsI/CsImap/FiredXY_CsI[%d]",i);
		deehisttitle.Form("fFiredXY_CsI[%d]",i);
		fFiredXY_CsI[i] = a->MakeTH2('I', deehistname, deehisttitle, 32, 0, 32, 32, 0, 32, "X", "Y");
	}

	for (Int_t i = 0; i < 16; i++) {
		deehistname.Form("Central_telescope/dEE/dEE_XCsI/dEE_XCsI[%d]",i);
		deehisttitle.Form("fdEE_XCsI[%d]",i);
		fdEE_XCsI[i] = a->MakeTH2('I', deehistname, deehisttitle, 350, 0, 3500, 100, 0, 100, "E (chan) in CsI", "dE (MeV) in DSD_X");
	}
	for (Int_t i = 0; i < 16; i++) {
		deehistname.Form("Central_telescope/dEE/dEE_YCsI/dEE_YCsI[%d]",i);
		deehisttitle.Form("fdEE_YCsI[%d]",i);
		fdEE_YCsI[i] = a->MakeTH2('I', deehistname, deehisttitle, 350, 0, 3500, 100, 0, 100, "E (chan) in CsI", "dE (MeV) in DSD_Y");
	}

	for (Int_t i = 0; i < 32; i++) {
		xhistname.Form("Central_telescope/DSD/DSDX_C_amp/DSDX_C[%d]",i);
		xhisttitle.Form("fDSDX_C[%d]",i);
		fDSDX_C[i] = a->MakeTH1('I', xhistname, xhisttitle, 800, 0, 8000);

		yhistname.Form("Central_telescope/DSD/DSDY_C_amp/DSDY_C[%d]",i);
		yhisttitle.Form("fDSDY_C[%d]",i);
		fDSDY_C[i] = a->MakeTH1('I', yhistname, yhisttitle, 800, 0, 8000);
	}
	for (Int_t i = 0; i < 32; i++) {
		xhistname.Form("Central_telescope/DSD/DSDX_C_time/tDSDX_C[%d]",i);
		xhisttitle.Form("ftDSDX_C[%d]",i);
		ftDSDX_C[i] = a->MakeTH1('I', xhistname, xhisttitle, 400, 0, 4000);

		yhistname.Form("Central_telescope/DSD/DSDY_C_time/tDSDY_C[%d]",i);
		yhisttitle.Form("ftDSDY_C[%d]",i);
		ftDSDY_C[i] = a->MakeTH1('I', yhistname, yhisttitle, 400, 0, 4000);
	}


	TString csihistname;
	TString csihisttitle;
	fMultCsI = a->MakeTH1('I', "Central_telescope/CsI/MultCsI", "Multiplicity of CsI crystalls, ADC data ", 16, 0, 16);
	fMultCsItime = a->MakeTH1('I', "Central_telescope/CsI/MultCsItime", "Multiplicity of CsI crystalls, TDC data", 16, 0, 16);


	for (Int_t i = 0; i < 16; i++) {
		csihistname.Form("Central_telescope/CsI/CsI_amp/CsI[%d]",i);
		csihisttitle.Form("fCsI[%d]",i);
		fCsI[i] = a->MakeTH1('I', csihistname, csihisttitle, 800, 0, 8000);
	}

	for (Int_t i = 0; i < 16; i++) {
		csihistname.Form("Central_telescope/CsI/CsI_time/tCsI[%d]",i);
		csihisttitle.Form("ftCsI[%d]",i);
		ftCsI[i] = a->MakeTH1('I', csihistname, csihisttitle, 400, 0, 4000);
	}

	for (Int_t i = 0; i < 16; i++) {
		csihistname.Form("Central_telescope/CsI/CsI_amp_time/CsIAmpTime[%d]",i);
		csihisttitle.Form("ftCsI[%d]",i);
		fCsIAmpTim[i] = a->MakeTH2('I', csihistname, csihisttitle, 800, 0, 8000, 400, 0, 4000);
	}

//	UserParameterBeamDetector *fpar = (UserParameterCentralTelescope*)a->GetParameter("CentrTelPar");

}

ClassImp(UserHistosCentralTelescope)
