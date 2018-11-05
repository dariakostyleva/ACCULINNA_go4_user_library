#include "UserEventCentralTelescope.h"

// STD
#include <iostream>
using std::cerr;
using std::endl;

UserEventCentralTelescope::UserEventCentralTelescope(const char* name) :
	TGo4EventElement(name)
{
	//cerr << "UserEventCentralTelescope::UserEventCentralTelescope" << endl;

	//cerr << "UserEventCentralTelescope::UserEventCentralTelescope() -> ";
	this->Clear();
}

UserEventCentralTelescope::~UserEventCentralTelescope()
{
}


ClassImp(UserEventCentralTelescope)
