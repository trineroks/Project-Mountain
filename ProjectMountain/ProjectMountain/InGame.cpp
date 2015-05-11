#include "stdafx.h"
#include "InGame.h"
#include "StateMachine.h"

CInGame::CInGame() {
}


CInGame::~CInGame() {
}

void CInGame::cleanUp() {

}

void CInGame::pause() {

}

void CInGame::resume() {
	
}

void CInGame::handleEvents() {

}

void CInGame::update() {
	printf("In Game\n");
	CStateMachine::getInstance().quit();
}

void CInGame::draw() {

}
