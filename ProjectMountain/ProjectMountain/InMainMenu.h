#pragma once
#include "GameState.h"

class CInMainMenu : public CGameState
{
public:
	CInMainMenu();
	~CInMainMenu();

	void cleanUp();
	void pause();
	void resume();

	void handleEvents();
	void update();
	void draw();
};

