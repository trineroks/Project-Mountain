#pragma once
#include "stdafx.h"
#include "SDLController.h"
#include "StateMachine.h"
#include "GameState.h"
#include "Painter.h"
#include "Camera.h"
#include "SpriteBank.h"

class CMainExec
{
public:
	CMainExec(const char* screenTitle, int w = 640, int h = 480, bool fullscreen = false);
	~CMainExec();

	void mainLoop();

private:
	CSDLController *csdlController;
	CPainter *painter;
	CSpriteBank *spriteBank;
	CCamera *camera;
};

