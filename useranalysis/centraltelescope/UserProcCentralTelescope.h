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

private: // methods
	void ProcessMessage(DetMessage* p_message);
	void FillHistograms(Int_t curTrigger);

	/**
	 * Counter or processed events
	 */
	unsigned long int fEventCounter;


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
