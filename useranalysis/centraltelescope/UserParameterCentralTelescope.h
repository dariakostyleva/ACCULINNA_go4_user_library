// $Id: TXXXParameter.h 1318 2015-01-08 13:28:41Z linev $
//-----------------------------------------------------------------------
//       The GSI Online Offline Object Oriented (Go4) Project
//         Experiment Data Processing at EE department, GSI
//-----------------------------------------------------------------------
// Copyright (C) 2000- GSI Helmholtzzentrum f�r Schwerionenforschung GmbH
//                     Planckstr. 1, 64291 Darmstadt, Germany
// Contact:            http://go4.gsi.de
//-----------------------------------------------------------------------
// This software can be used under the license agreements as stated
// in Go4License.txt file which is part of the distribution.
//-----------------------------------------------------------------------

#ifndef UserParameterCentralTelescope_H
#define UserParameterCentralTelescope_H

#include "TGo4Parameter.h"

//#include "TArrayI.h"

class UserParameterCentralTelescope : public TGo4Parameter {
public:
	UserParameterCentralTelescope(const char* name = "CentrTelPar");
	virtual ~UserParameterCentralTelescope() {}

	TString fCDetName;

	TString fDSDXCname; 			//name of CentralTelescope
	TString fDSDYCname; 
	Int_t fTriggerCondition;

	ClassDef(UserParameterCentralTelescope,1)

	TString GetDSDXCname() {
		//return fCDetName + "_" + fDSDXCname;
		return fDSDXCname;
	}

	TString GetDSDYCname() {
		return fDSDYCname;
	}

//const Float_t GetWireStep(Int_t plane);
//	const Float_t GetMWPCoffset(Int_t plane);
};

#endif
