#include "stdafx.h"
#include "InMainMenu.h"
#include "StateMachine.h"


CInMainMenu::CInMainMenu() {
}


CInMainMenu::~CInMainMenu() {
}

void CInMainMenu::cleanUp() {

}

void CInMainMenu::pause() {

}

void CInMainMenu::resume() {

}

void CInMainMenu::handleEvents() {

}

void CInMainMenu::update() {
	printf("In Main Menu\n");
	CStateMachine::getInstance().pushState(new CInGame());
}

void CInMainMenu::draw() {

}
