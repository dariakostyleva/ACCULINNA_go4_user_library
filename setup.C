/**
	Note that if an error occurs in this macro
	go4 will give no error message.
*/

void setup()
{
	cout << "Macro 'setup.C' started." << endl;

	TGo4AnalysisStep* stepUnpacking = go4->GetAnalysisStep("stepUnpacking");
	TGo4AnalysisStep* stepRepacking = go4->GetAnalysisStep("stepRepacking");
	TGo4AnalysisStep* stepLearn = go4->GetAnalysisStep("stepLearn");
	TGo4AnalysisStep* stepRawMonitoring = go4->GetAnalysisStep("stepRawMonitoring");
	TGo4AnalysisStep* stepAdvMonitoring = go4->GetAnalysisStep("stepAdvMonitoring");
	TGo4AnalysisStep* stepBeamDetMonitoring = go4->GetAnalysisStep("stepBeamDetMonitoring");
	TGo4AnalysisStep* stepBeamDetMonitoring2 = go4->GetAnalysisStep("stepBeamDetMonitoring2");
	TGo4AnalysisStep* stepCentralTelescope = go4->GetAnalysisStep("stepCentralTelescope");

	if(!stepCentralTelescope) {
		cout << " stepCentralTelescope was not found " << endl;
	}

	//TODO enable/disable certain steps
	stepUnpacking->SetProcessEnabled(kTRUE);
	stepRepacking->SetProcessEnabled(kTRUE);
	stepLearn->SetProcessEnabled(kTRUE);
	stepRawMonitoring->SetProcessEnabled(kFALSE);
	stepAdvMonitoring->SetProcessEnabled(kTRUE);
	stepBeamDetMonitoring->SetProcessEnabled(kFALSE);
	stepBeamDetMonitoring2->SetProcessEnabled(kTRUE);
	stepCentralTelescope->SetProcessEnabled(kTRUE);

	//TODO enable/disable autosave
	//go4->SetAutoSaveFile("asf.root");
	go4->SetAutoSave(kFALSE);

	cout << "Macro 'setup.C' finished." << endl;
}
