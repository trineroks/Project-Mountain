#include "stdafx.h"
#include "StateMachine.h"

CStateMachine::CStateMachine() {
	exit = false;
}

CStateMachine &CStateMachine::getInstance() {
	static CStateMachine instance;
	return instance;
}

void CStateMachine::changeState(CGameState* state) {
	if (!stateStack.empty())
		popState();
	stateStack.push_back(state);
}

void CStateMachine::popState() {
	if (!stateStack.empty())
		stateStack.pop_back();
}

void CStateMachine::pushState(CGameState* state) {
	stateStack.push_back(state);
}

void CStateMachine::gameTick() {
	if (!stateStack.empty())
		stateStack.back()->update();
	else
		printf("The state machine is empty!\n");
}
