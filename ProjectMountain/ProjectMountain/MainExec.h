#pragma once
#include "stdafx.h"
#include "SDLController.h"
#include "StateMachine.h"
#include "GameState.h"

class CMainExec
{
public:
	CMainExec(const char* screenTitle, int w = 640, int h = 480, bool fullscreen = false);
	~CMainExec();

	void mainLoop();

private:
	CSDLController *csdlController;
	vector<CGameState*> stateStack;
};

