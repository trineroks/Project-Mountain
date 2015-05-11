#pragma once
#include "GameState.h"

class CInGame : public CGameState
{
public:
	CInGame();
	~CInGame();

	void cleanUp();
	void pause();
	void resume();

	void handleEvents();
	void update();
	void draw();
};

