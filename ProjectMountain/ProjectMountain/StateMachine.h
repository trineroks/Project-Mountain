#pragma once
#include "GameState.h"

class CStateMachine
{
public:
	static CStateMachine &getInstance();

	void changeState(CGameState* state);
	void pushState(CGameState* state);
	void popState();
	void gameTick(float deltaTime);

	void quit() { exit = true; }
	bool getExitState() { return exit; }

private:
	CStateMachine();
	CStateMachine(CStateMachine const&);

	vector<CGameState*> stateStack;
	bool exit;
};

