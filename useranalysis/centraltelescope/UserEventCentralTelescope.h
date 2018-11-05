/**

	@class UserEventCentralTelescope

	Event-class for the CentralTelescope step of the analysis.

*/

#ifndef USEREVENTCentralTelescope_H
#define USEREVENTCentralTelescope_H

#include <TGo4EventElement.h> // mother class

class UserEventCentralTelescope : public TGo4EventElement
{
public:
	UserEventCentralTelescope(const char* name = "UserEventCentralTelescope");
	virtual ~UserEventCentralTelescope();

	//void Clear(Option_t* t = "");

public:

	ClassDef(UserEventCentralTelescope, 1);
};

#endif // USEREVENTCentralTelescope_H
