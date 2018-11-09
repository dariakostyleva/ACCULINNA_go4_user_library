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
#include "useranalysis/calibration/SiCalibPars.h"
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
	this->InitPars();
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
//====== TODO: add times to dsd and csi!!!
//	FillDSD(trigger);
//	FillCsI(trigger);
//	FilldEE(trigger);
	FillCT(trigger);
	fHistoMan->fTrigger->Fill(trigger);

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

void UserProcCentralTelescope::FillCT(Int_t curTrigger) {

	DetEventStation* st_DSDX_C = (DetEventStation*)(v_input->getEventElement(fParBD->GetDSDXCname(),1));
	if(!st_DSDX_C) {
		cout << " station " << fParBD->GetDSDXCname() << " was not found in event " << fEventCounter << endl;
	}

	DetEventStation* st_DSDY_C = (DetEventStation*)(v_input->getEventElement(fParBD->GetDSDYCname(),1));
	if(!st_DSDY_C) {
		cout << " station " << fParBD->GetDSDYCname() << " was not found in event " << fEventCounter << endl;
	}

	DetEventStation* st_CsI = (DetEventStation*)(v_input->getEventElement(fParBD->GetCsIname(),1));
	if(!st_CsI) {
		cout << " station " << fParBD->GetCsIname() << " was not found in event " << fEventCounter << endl;
	}

	DetEventStation* st_tDSDX_C = (DetEventStation*)(v_input->getEventElement("Central_telescope_tDSDX_C"));
	if(!st_tDSDX_C) {
		cout << " station Central_telescope_tDSDX_C was not found in event " << fEventCounter << endl;
	}

	DetEventStation* st_tDSDY_C = (DetEventStation*)(v_input->getEventElement("Central_telescope_tDSDY_C"));
	if(!st_tDSDY_C) {
		cout << " station Central_telescope_tDSDY_C was not found in event " << fEventCounter << endl;
	}

	DetEventStation* st_tCsI = (DetEventStation*)(v_input->getEventElement("Central_telescope_tCsI"));
	if(!st_tCsI) {
		cout << " station Central_telescope_CsI was not found in event " << fEventCounter << endl;
	}

	// here DSD is filled 
	Int_t strip_mult[4] = {NULL}; //has x coord, y coord, x time, y time
	Int_t cluster_mult[4] = {NULL}; //has x coord, y coord, x time, y time
	Int_t stripx[32] = {NULL};
	Int_t stripx_val_a[32] = {NULL}; //ampl
	Int_t stripx_val_t[32] = {NULL}; //time
	Int_t stripy[32] = {NULL};
	Int_t stripy_val_a[32] = {NULL}; //ampl
	Int_t stripy_val_t[32] = {NULL}; //time
	Int_t num_stripx; //number of strips on x if mult == 1
	Int_t num_stripy; //number of strips on y if mult == 1
	Int_t num_stripx_mm; //position if mult == 1 
	Int_t num_stripy_mm; //position if mult == 1 
	TClonesArray* dsd[4] = { NULL }; //has x coord, y coord, x time, y time

	if(st_DSDX_C && st_DSDY_C && st_tDSDX_C && st_tDSDY_C && curTrigger==fParBD->fTriggerCondition) {

		dsd[0] = st_DSDX_C->GetDetMessages();
		strip_mult[0] = dsd[0]->GetEntriesFast();
		fHistoMan->fMultX->Fill(strip_mult[0]);
		cluster_mult[0] = GetClusterMult(dsd[0]);
		fHistoMan->fMultXclust->Fill(cluster_mult[0]);

		for(Int_t i = 0; i < strip_mult[0]; i++) {
			stripx[i] = ((DetMessage*)dsd[0]->At(i))->GetStChannel();
			stripx_val_a[i] = ((DetMessage*)dsd[0]->At(i))->GetValue();
			fHistoMan->fDSDX_C[(Int_t)stripx[i]]->Fill(stripx_val_a[i]);//*par_2 + par_1); 
			fHistoMan->fProfX->Fill(stripx[i]);

		}

		dsd[1] = st_DSDY_C->GetDetMessages();
		strip_mult[1] = dsd[1]->GetEntriesFast();
		fHistoMan->fMultY->Fill(strip_mult[1]);
		cluster_mult[1] = GetClusterMult(dsd[1]);
		fHistoMan->fMultYclust->Fill(cluster_mult[1]);

		for(Int_t i = 0; i < strip_mult[1]; i++) {
			stripy[i] = ((DetMessage*)dsd[1]->At(i))->GetStChannel();
			stripy_val_a[i] = ((DetMessage*)dsd[1]->At(i))->GetValue();
			fHistoMan->fDSDY_C[(Int_t)stripy[i]]->Fill(stripy_val_a[i]); 
			fHistoMan->fProfY->Fill(stripy[i]);

		}

		dsd[2] = st_tDSDX_C->GetDetMessages();
		strip_mult[2] = dsd[2]->GetEntriesFast();
		fHistoMan->fMultXtime->Fill(strip_mult[2]);
		for(Int_t i = 0; i < strip_mult[2]; i++) {
			stripx[i] = ((DetMessage*)dsd[2]->At(i))->GetStChannel();
			stripx_val_t[i] = ((DetMessage*)dsd[2]->At(i))->GetValue();
			fHistoMan->ftDSDX_C[(Int_t)stripx[i]]->Fill(stripx_val_t[i]); 
		}

		dsd[3] = st_tDSDY_C->GetDetMessages();
		strip_mult[3] = dsd[3]->GetEntriesFast();
		fHistoMan->fMultYtime->Fill(strip_mult[3]);
		for(Int_t i = 0; i < strip_mult[3]; i++) {
			stripy[i] = ((DetMessage*)dsd[3]->At(i))->GetStChannel();
			stripy_val_t[i] = ((DetMessage*)dsd[3]->At(i))->GetValue();
			fHistoMan->ftDSDY_C[(Int_t)stripy[i]]->Fill(stripy_val_t[i]); 
		}
		
		//MULTIPLICITY == 1 in DSDC!!!!!!
		//building profile of the beam in strip
		if(strip_mult[1]==1 && strip_mult[0]==1) {
			num_stripx = ((DetMessage*)dsd[0]->At(0))->GetStChannel();
			num_stripy = ((DetMessage*)dsd[1]->At(0))->GetStChannel();
			fHistoMan->fProjXY->Fill(num_stripx,num_stripy);
			//strip_xcal[num_stripx] = ((DetMessage*)dsd[0]->At(0))->GetValue();
			//if(((DetMessage*)dsd[0]->At(0))->GetStChannel()==20) cout << "In 20 strip in x we have here: "<< strip_xcal[20]<<endl;

		//building profile of the beam in mm, DSD x and y from strips to mm
			num_stripx_mm = (num_stripx -16)*2;
			num_stripy_mm = (num_stripy -16)*2;
			fHistoMan->fDSDX_Cmm->Fill(num_stripx_mm);
			fHistoMan->fDSDY_Cmm->Fill(num_stripy_mm);
			fHistoMan->fDSDXY_Cmm->Fill(-num_stripx_mm,-num_stripy_mm); // y goes down, and we look at the beam (left-side coord)
		}

	}
	//end of DSD filling 

	//here CsI is filled
	Int_t csi_mult[2] = {NULL}; //ampl and time
	Int_t cryst_a[16] = {NULL};
	Int_t cryst_t[16] = {NULL};
	Int_t cryst_val_a[16] = {NULL};
	Int_t cryst_val_t[16] = {NULL};
	TClonesArray* scint[2] = { NULL }; //ampl and time

	if(st_CsI && st_tCsI && curTrigger==fParBD->fTriggerCondition) {

		scint[0] = st_CsI->GetDetMessages();
		csi_mult[0] = scint[0]->GetEntriesFast();
		fHistoMan->fMultCsI->Fill(csi_mult[0]);
		for(Int_t i = 0; i < csi_mult[0]; i++) {
			cryst_a[i] = ((DetMessage*)scint[0]->At(i))->GetStChannel();
			cryst_val_a[i] = ((DetMessage*)scint[0]->At(i))->GetValue();
			fHistoMan->fCsI[(Int_t)cryst_a[i]]->Fill(cryst_val_a[i]); 
		}

		scint[1] = st_tCsI->GetDetMessages();
		csi_mult[1] = scint[1]->GetEntriesFast();
		fHistoMan->fMultCsItime->Fill(csi_mult[1]);
		for(Int_t i = 0; i < csi_mult[1]; i++) {
			cryst_t[i] = ((DetMessage*)scint[1]->At(i))->GetStChannel();
			cryst_val_t[i] = ((DetMessage*)scint[1]->At(i))->GetValue();
			fHistoMan->ftCsI[(Int_t)cryst_t[i]]->Fill(cryst_val_t[i]); 
		}
	}
	//end of CsI filling

	if(st_DSDX_C && st_DSDY_C && st_CsI && curTrigger==fParBD->fTriggerCondition){
		//cout <<"we are all here "<< endl;
		//cout << "In 20 strip in x we have: "<< strip_xcal[20]<<endl;
		FilldEE(st_DSDX_C,st_DSDY_C,st_CsI);
	}

}

Int_t UserProcCentralTelescope::FilldEE(DetEventStation* st_DSDX_C, DetEventStation* st_DSDY_C, DetEventStation* st_CsI) {

	Int_t csi_mult;
	Int_t cryst[16];
	Int_t cryst_val_a[16];
	Int_t cryst_val_max = 0;
	TClonesArray* scint =  NULL ;
	Int_t imax = 0; //number of crystall with the max amplitude
	Int_t nMax = 0; // number of clystals with amp == maxAmp

	scint = st_CsI->GetDetMessages();
	csi_mult = scint->GetEntriesFast();
	for(Int_t i = 0; i < csi_mult; i++) {
		cryst[i] = ((DetMessage*)scint->At(i))->GetStChannel();
		cryst_val_a[i] = ((DetMessage*)scint->At(i))->GetValue();
		//cout << "cryst_val_a[i]" <<cryst_val_a[i]<<" i = "<<i<<endl;
		if(cryst_val_a[i] > cryst_val_max) {
			cryst_val_max = cryst_val_a[i];	
			imax = i;		
		} 
	}
	// check if there is only 1 maximum
	for(Int_t i=0;i<csi_mult;i++) {
		if (cryst_val_a[i] == cryst_val_max) nMax++;
	}
	// if(nMax>1) cout << imax << " " << nMax << endl;
	if (nMax!=1) return 0;

	TClonesArray *dsdx;
	// Int_t strip_x[32]; //strips with mult==1 on x side
	Int_t strip_x;
	Int_t strip_xcal;
	Int_t strip_multx;

	TClonesArray *dsdy;
	// Int_t strip_y[32]; //strips with mult==1 on x side
	Int_t strip_y;
	Int_t strip_ycal;
	Int_t strip_multy;

	Int_t entries_dsd;
	Double_t par_1x; //cal par b
	Double_t par_2x; //cal par a
	Double_t par_1y; //cal par b
	Double_t par_2y; //cal par a

	dsdx = st_DSDX_C->GetDetMessages();
	strip_multx = dsdx->GetEntriesFast();
	dsdy = st_DSDY_C->GetDetMessages();
	strip_multy = dsdy->GetEntriesFast();
	if (strip_multx == 1 && strip_multy == 1) {
		// entries_dsd = strip_multx;
		// for(Int_t i = 0; i < entries_dsd; i++) {
		strip_x = ((DetMessage*)dsdx->At(0))->GetStChannel();
		par_1x = getSiPar(fParBD->fDSDXCname)->getPar1(strip_x);
		par_2x = getSiPar(fParBD->fDSDXCname)->getPar2(strip_x);
		strip_xcal = ((DetMessage*)dsdx->At(0))->GetValue()*par_2x + par_1x;	

		strip_y = ((DetMessage*)dsdy->At(0))->GetStChannel();
		par_1y = getSiPar(fParBD->fDSDYCname)->getPar1(strip_y);
		par_2y = getSiPar(fParBD->fDSDYCname)->getPar2(strip_y);
		strip_ycal = ((DetMessage*)dsdy->At(0))->GetValue()*par_2y + par_1y;

		fHistoMan->fFiredXY_CsI[imax]->Fill(strip_x,strip_y);
		fHistoMan->fdEE_XCsI[imax]->Fill(cryst_val_max,strip_xcal);
		fHistoMan->fdEE_YCsI[imax]->Fill(cryst_val_max,strip_ycal);
	}
}

void UserProcCentralTelescope::InitPars() {

	fParSi = new SiCalibPars* [fnPars]; // make this another way
	// TODO : the loop over the whole map
    fstPair = new std::pair <TString,Int_t>[fnPars];
	fstPair[0] = make_pair((TString)"SSD20_L",16);
	fstPair[1] = make_pair((TString)"DSDX_L",16);
	fstPair[2] = make_pair((TString)"DSDY_L",16);
	fstPair[3] = make_pair((TString)"SSD_L",16);

	fstPair[4] = make_pair((TString)"SSD20_R",16);	
	fstPair[5] = make_pair((TString)"SSDY_R",16);	
	fstPair[6] = make_pair((TString)"SSD_R",16);

	fstPair[7] = make_pair((TString)"DSDX_C",32);
	fstPair[8] = make_pair((TString)"DSDY_C",32);
			
	for(Int_t i=0; i<fnPars; i++) {
		fParSi[i] = (SiCalibPars*) MakeParameter(fstPair[i].first, "SiCalibPars");
		fParSi[i]->Init(fstPair[i].second,fstPair[i].first);
	}
}

Int_t UserProcCentralTelescope::GetClusterMult(TClonesArray *data)
{

	if (!data) return 0;

	Int_t entries = data->GetEntriesFast();

	if (entries<2) return entries;

	Int_t strip1, strip2;
	Int_t noclusters = 1;

	for (Int_t i = 1; i < entries; i++) {
		//check if entries are in specific order
		strip1 = ((DetMessage*)data->At(i))->GetStChannel();
		strip2 = ((DetMessage*)data->At(i-1))->GetStChannel();
		if ( abs(strip1 - strip2) > 1 && abs(strip1 - strip2) < 32) noclusters++;
	}

	return noclusters;
} 

SiCalibPars* UserProcCentralTelescope::getSiPar(TString st_Name) {
	// cout << "UserProcTestMonitoring::getSiPar was called! " << endl;
	Int_t i = 0;
	while(i<fnPars) {
		if(st_Name == fParSi[i]->GetName()) break;
		i++;
	}
	return fParSi[i];
}