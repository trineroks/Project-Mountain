#include "stdafx.h"
#include "MainExec.h"

CMainExec::CMainExec(const char* screenTitle, int w, int h, bool fullscreen) {
	csdlController = new CSDLController(screenTitle, w, h, fullscreen);
	camera = new CCamera();
	csdlController->loadSheet("sprites/Sheet.png");
	painter = new CPainter(csdlController->getRenderer(), csdlController->getLoadedSheet(), camera);
	spriteBank = new CSpriteBank();
}

void CMainExec::mainLoop() {
	CStateMachine::getInstance().pushState(new CInGame(painter, spriteBank));
	while (!CStateMachine::getInstance().getExitState()) {
		csdlController->start();
		CStateMachine::getInstance().gameTick(csdlController->getDeltaTime());
		csdlController->end();
	}
}

CMainExec::~CMainExec() {
	delete csdlController;
	delete painter;
	delete camera;
	delete spriteBank;
	camera = NULL;
	painter = NULL;
	csdlController = NULL;
	spriteBank = NULL;
}
