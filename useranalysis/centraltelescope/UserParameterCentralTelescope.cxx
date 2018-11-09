// $Id: TXXXParameter.cxx 1318 2015-01-08 13:28:41Z linev $
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

#include "UserParameterCentralTelescope.h"

UserParameterCentralTelescope::UserParameterCentralTelescope(const char* name) :
	TGo4Parameter(name)
//   fArr()
{
	fCDetName = "Central_telescope";
	fDSDXCname = "DSDX_C";
	fDSDYCname = "DSDY_C";
	fCsIname = "CsI";
	fTriggerCondition = 1;

}
/*
const Float_t UserParameterBeamDetector::GetWireStep(Int_t plane) {
	if (plane==0) return fMWPCwireStepX1;
	else if (plane==1) return fMWPCwireStepY1;
	else if (plane==2) return fMWPCwireStepX2;
	else if (plane==3) return fMWPCwireStepY2;
	else return 0;
}

const Float_t UserParameterBeamDetector::GetMWPCoffset(Int_t plane) {
	if (plane==0) return fMWPC1_X_offset;
	else if (plane==1) return fMWPC1_Y_offset;
	else if (plane==2) return fMWPC2_X_offset;
	else if (plane==3) return fMWPC2_Y_offset;
	else return 0;
}
*/