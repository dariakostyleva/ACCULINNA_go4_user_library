#include "UserProcCentralTelescope.h"

// STD
#include <iostream>
using std::cerr;
using std::endl;
using std::cout;

// ROOT
#include <TClonesArray.h>
#include <TH1D.h>
#include <TH2D.h>
#include <TRandom3.h>

// Project
#include "base/Support.h"
#include "data/DetEventFull.h" // input event
#include "data/DetEventCommon.h"
#include "data/DetEventStation.h"
#include "data/DetMessage.h"

#include "UserHistosCentralTelescope.h"
#include "UserParameter.h"
#include "setupconfigcppwrapper/SetupConfiguration.h"
#include "UserParameterCentralTelescope.h"
#include <stdlib.h>

using namespace std;
/**
  Uncomment this if you want to see all the debug information.
  This allows you to analyze the raw bytes and bits by your eyes.
  This option produces A LOT OF DATA - run your analysis with a
  small number of events (~10-100)
*/
//#define DEBUGADVMON

UserProcCentralTelescope::UserProcCentralTelescope(const char* name) :
	TGo4EventProcessor(name),
	fEventCounter(0),
	fSetupConfig(0),
	v_input(0)
{
	fHistoMan = new UserHistosCentralTelescope();
	fParBD = (UserParameterCentralTelescope*)MakeParameter("CentrTelPar", "UserParameterCentralTelescope");
	support::CheckThatDirExists("textoutput");

	fFileSummary = fopen("textoutput/summaryCentralTelescope.txt", "w");
	if (fFileSummary == NULL) {
		//TODO warning or fatal?
		//cerr << "[WARN  ] " << "Could not open output text summary file '" << "summaryCentralTelescope.txt" << "'" << endl;
		cerr << "[FATAL ] " << "Could not open output text summary file '" << "textoutput/summaryCentralTelescope.txt" << "'" << endl;
		exit(EXIT_FAILURE);
	}

	//cerr << "aaaaaaaaaa " <<endl;
}

UserProcCentralTelescope::~UserProcCentralTelescope()
{
	if (fHistoMan) delete fHistoMan;
	if (fFileSummary != NULL) {
		fclose(fFileSummary);
	}
	if (v_input) {
		v_input = NULL;
	}
}

Bool_t UserProcCentralTelescope::BuildEvent(TGo4EventElement* p_dest)
{
	Bool_t v_isValid = kFALSE;

	v_input = (DetEventFull*)GetInputEvent("stepRepackedProvider6");
	if (v_input == NULL)
	{
		cerr << "[WARN  ] " << "UserProcCentralTelescope::BuildEvent(): no input event!" << endl;
		return v_isValid;
	}
	v_isValid = kTRUE;

	#ifdef DEBUGADVMON
	cerr << "[DEBUG ] " << "UserProcCentralTelescope: Event " << fEventCounter
	     << " ======================================================================================================"
	     << endl;
	#endif

	// --------------------------

	Int_t trigger;

	TGo4EventElement* v_comElement = v_input->getEventElement("DetEventCommon",1);
	if(!v_comElement) {
		cout << "Detector DetEventCommon was not found " << endl;
		return kFALSE;
	}
	DetEventCommon* v_commSubEl = (DetEventCommon*)(v_comElement);
	trigger = v_commSubEl->trigger;
	if(trigger>5) {
		cout << " Event wont be processed " << endl;
		return kFALSE;
	}

	FillHistograms(trigger);

	fEventCounter++;

	v_input = NULL;

	return v_isValid;
}

void UserProcCentralTelescope::UserPreLoop()
{
	// Get the all-accessible parameter-set object
	UserParameter* v_params = (UserParameter*)GetParameter("UserParameter");
	fSetupConfig = v_params->GetSetupConfig();

	#ifdef DEBUGADVMON
	cerr << "[DEBUG ] " << "UserProcCentralTelescope::UserPreLoop ====================================" << endl;
	#endif

	//fHistoMan->GenerateAutoHistos();

	#ifdef DEBUGADVMON
	cerr << "[DEBUG ] " << "=======================================================================" << endl;
	#endif
}

void UserProcCentralTelescope::UserPostLoop()
{
}

void UserProcCentralTelescope::ProcessMessage(DetMessage* p_message)
{
	//TODO implement your processing of independent messages here
}

ClassImp(UserProcCentralTelescope)

void UserProcCentralTelescope::FillHistograms(Int_t curTrigger) {

	DetEventStation* st_DSDX_C = (DetEventStation*)(v_input->getEventElement(fParBD->GetDSDXCname(),1));
	if(!st_DSDX_C) {
		cout << " station " << fParBD->GetDSDXCname() << " was not found in event " << fEventCounter << endl;
	}

	DetEventStation* st_DSDY_C = (DetEventStation*)(v_input->getEventElement(fParBD->GetDSDYCname(),1));
	if(!st_DSDY_C) {
		cout << " station " << fParBD->GetDSDYCname() << " was not found in event " << fEventCounter << endl;
	}

	cout << "curTrigger " << curTrigger << endl;
	fHistoMan->fTrigger->Fill(curTrigger);

/*	TClonesArray* dsdx = NULL;
	TClonesArray* dsdy = NULL;
/	Int_t nentries;
	Int_t nentries_x;
	Int_t nentries_y;
	Float_t chan_x[4];
	Float_t val_x[4];
	Float_t chan_y[4];
	Float_t val_y[4];
*/
	Int_t strip_mult[2];
	Int_t stripx[32];
	Int_t stripx_val[32];
	Int_t stripy[32];
	Int_t stripy_val[32];
	Int_t num_stripx; //number of strips on x if mult == 1
	Int_t num_stripy; //number of strips on y if mult == 1
	Int_t num_stripx_mm; //position if mult == 1 
	Int_t num_stripy_mm; //position if mult == 1 
	TClonesArray* dsd[2] = { NULL };

	if(st_DSDX_C && st_DSDY_C && curTrigger==fParBD->fTriggerCondition) {

		dsd[0] = st_DSDX_C->GetDetMessages();
		strip_mult[0] = dsd[0]->GetEntriesFast();
		fHistoMan->fMultX->Fill(strip_mult[0]);
		cout << "dsd[0]->GetEntriesFast() " << dsd[0]->GetEntriesFast() << endl;
		for(Int_t i = 0; i < strip_mult[0]; i++) {
			stripx[i] = ((DetMessage*)dsd[0]->At(i))->GetStChannel();
			stripx_val[i] = ((DetMessage*)dsd[0]->At(i))->GetValue();
			cout << "stripx[i] " << stripx[i]<< endl;
			cout << "stripx_val[i] " << stripx_val[i] << endl;
			fHistoMan->fDSDX_C[(Int_t)stripx[i]]->Fill(stripx_val[i]); 
			fHistoMan->fProfX->Fill(stripx[i]);
		}

		dsd[1] = st_DSDY_C->GetDetMessages();
		strip_mult[1] = dsd[1]->GetEntriesFast();
		fHistoMan->fMultY->Fill(strip_mult[1]);
		cout << "dsd[1]->GetEntriesFast() " << dsd[1]->GetEntriesFast() << endl;
		for(Int_t i = 0; i < strip_mult[1]; i++) {
			stripy[i] = ((DetMessage*)dsd[1]->At(i))->GetStChannel();
			stripy_val[i] = ((DetMessage*)dsd[1]->At(i))->GetValue();
			cout << "stripy[i] " << stripy[i]<< endl;
			cout << "stripy_val[i] " << stripy_val[i] << endl;
			fHistoMan->fDSDY_C[(Int_t)stripy[i]]->Fill(stripy_val[i]); 
			fHistoMan->fProfY->Fill(stripy[i]);
			cout << "fHistoMan->fProfY->Fill(stripy[i])"<< fHistoMan->fProfY->Fill(stripy[i]) << endl;
		}

		if(strip_mult[1]==1 && strip_mult[0]==1) {
			num_stripx = ((DetMessage*)dsd[0]->At(0))->GetStChannel();
			num_stripy = ((DetMessage*)dsd[1]->At(0))->GetStChannel();
			fHistoMan->fProjXY->Fill(num_stripx,num_stripy);

			//num_stripx_mm = (num_stripx + /*gRandom->Uniform(-0.5,0.5)*/ + 0.9375 - 16);
			//num_stripx_mm = (num_stripx + gRandom->Uniform(-0.9375,0.9375) + 0.9375 - 16)*1.875;
			//num_stripy_mm = (num_stripy + gRandom->Uniform(-0.9375,0.9375) + 0.9375 - 16)*1.875;
			num_stripx_mm = (num_stripx -16)*2;
			num_stripy_mm = (num_stripy -16)*2;
			fHistoMan->fDSDX_Cmm->Fill(num_stripx_mm);
			fHistoMan->fDSDY_Cmm->Fill(num_stripy_mm);
			fHistoMan->fDSDXY_Cmm->Fill(-num_stripx_mm,-num_stripy_mm); // y goes down, and we look at the beam (left-side coord)
		}

	}

}
