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
	if (!stateStack.empty()) {
		CGameState *current = stateStack.back();
		delete current;
		current = NULL;
	}
	stateStack.pop_back();
}

void CStateMachine::pushState(CGameState* state) {
	stateStack.push_back(state);
}

void CStateMachine::gameTick(float deltaTime) {
	if (!stateStack.empty())
		stateStack.back()->update(deltaTime);
	else
		printf("The state machine is empty!\n");
}
