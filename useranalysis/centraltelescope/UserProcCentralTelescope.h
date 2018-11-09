/**

	@class UserProcCentralTelescope

*/

#ifndef USERPROCCentralTelescope_H
#define USERPROCCentralTelescope_H

#include <TGo4EventProcessor.h> // mother class

class TGo4CompositeEvent;
class TGo4EventElement;

class UserHistosCentralTelescope;
class SetupConfiguration;
class DetMessage;
class DetEventFull;
class DetEventStation;
class UserParameterCentralTelescope;
class TClonesArray;
class SiCalibPars;


class UserProcCentralTelescope : public TGo4EventProcessor
{
public: // methods

	UserProcCentralTelescope(const char* name = "UserProcCentralTelescope");
	virtual ~UserProcCentralTelescope();

	virtual Bool_t BuildEvent(TGo4EventElement* p_dest);

	/** Method called when analysis is created */
	virtual void UserPreLoop();

	/** Method called when analysis is stopping */
	virtual void UserPostLoop();

	SiCalibPars** fParSi;
	std::pair <TString,Int_t>* fstPair;
	const Int_t fnPars = 9;

private: // methods
	void ProcessMessage(DetMessage* p_message);
	void FillCT(Int_t curTrigger); //fill central telescope
	Int_t FilldEE(DetEventStation* st_DSDX_C,DetEventStation* st_DSDY_C, DetEventStation* st_CsI);
	/**
	 * Counter or processed events
	 */
	unsigned long int fEventCounter;
	void InitPars();
	SiCalibPars* getSiPar(TString st_Name);
	Int_t GetClusterMult(TClonesArray *data);
	/**
	 * Put all your output histograms inside this object.
	 * See UserHistosCentralTelescope class.
	 */
	UserHistosCentralTelescope* fHistoMan;

	/**
	 * 'this' object of the UserProcRawMonitoring class does not own this pointer
	 */
	const SetupConfiguration* fSetupConfig;

	/**
	 * Summary stream
	 */
	FILE* fFileSummary;
	DetEventFull* v_input; 
	UserParameterCentralTelescope* fParBD;

	ClassDef(UserProcCentralTelescope, 1);
};

#endif // USERPROCCentralTelescope_H
