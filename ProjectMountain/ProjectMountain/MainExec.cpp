#include "stdafx.h"
#include "MainExec.h"


CMainExec::CMainExec(const char* screenTitle, int w, int h, bool fullscreen) {
	csdlController = new CSDLController(screenTitle, w, h, fullscreen);
	printf("Mountain Engine Initialized\n");
}

void CMainExec::mainLoop() {
	CStateMachine::getInstance().pushState(new CInMainMenu());
	while (CStateMachine::getInstance().getExitState() != true) {
		CStateMachine::getInstance().gameTick();
	}
}

CMainExec::~CMainExec() {
	delete csdlController;
	csdlController = NULL;
	for (int i = 0; i < stateStack.size(); i++)
		stateStack.pop_back();
}
