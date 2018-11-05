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

	TClonesArray* dsdx = NULL;
	TClonesArray* dsdy = NULL;
	Int_t nentries;
	Int_t nentries_x;
	Int_t nentries_y;
	Float_t chan_x[4];
	Float_t val_x[4];
	Float_t chan_y[4];
	Float_t val_y[4];

	if( st_DSDX_C && st_DSDY_C && curTrigger==fParBD->fTriggerCondition){
		dsdx = st_DSDX_C->GetDetMessages();
		nentries_x = dsdx->GetEntriesFast();
		fHistoMan->fMultX->Fill(nentries_x);
		cout << "dsdx->GetEntriesFast() " << dsdx->GetEntriesFast() << endl;
		for(Int_t i = 0; i < nentries_x; i++) {
			//if(curTrigger==fParBD->fTriggerCondition){
			chan_x[i] = ((DetMessage*)dsdx->At(i))->GetStChannel();
			val_x[i] = ((DetMessage*)dsdx->At(i))->GetValue();
			cout << "chan_x[i] " << chan_x[i] << endl;
			cout << "val_x[i] " << val_x[i] << endl;
			fHistoMan->fDSDX_C[(Int_t)chan_x[i]]->Fill(val_x[i]); 
			fHistoMan->fProfX->Fill(chan_x[i]);
		}

		dsdy = st_DSDY_C->GetDetMessages();
		nentries_y = dsdy->GetEntriesFast();
		fHistoMan->fMultY->Fill(nentries_y);
		cout << "dsdy->GetEntriesFast() " << dsdy->GetEntriesFast() << endl;
		for(Int_t i = 0; i < nentries_y; i++) {
			chan_y[i] = ((DetMessage*)dsdy->At(i))->GetStChannel();
			val_y[i] = ((DetMessage*)dsdy->At(i))->GetValue();
			cout << "chan_y[i] " << chan_y[i] << endl;
			cout << "val_y[i] " << val_y[i] << endl;
			fHistoMan->fDSDY_C[(Int_t)chan_y[i]]->Fill(val_y[i]); 
			fHistoMan->fProfY->Fill(chan_y[i]);
		}

		if(nentries_y == nentries_x) {
			nentries = nentries_y;
			for(Int_t i = 0; i < nentries; i++) {
				chan_x[i] = ((DetMessage*)dsdx->At(i))->GetStChannel();
				chan_y[i] = ((DetMessage*)dsdy->At(i))->GetStChannel();
				fHistoMan->fProjXY->Fill(chan_x[i],chan_y[i]);
			}
		}
	}

/*	if(nentries_y == nentries_x) {
		nentries = nentries_y;
		for(Int_t i = 0; i < nentries_y; i++) {
			val_y[i] = ((DetMessage*)dsdy->At(i))->GetValue();


		}
		fHistoMan->fProjXY->Fill(chan_x,chan_y);
	}
*/
	

}
