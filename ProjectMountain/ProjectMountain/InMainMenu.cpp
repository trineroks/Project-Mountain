#include "stdafx.h"
#include "InMainMenu.h"
#include "StateMachine.h"


CInMainMenu::CInMainMenu(CPainter *ppainter, CSpriteBank *bank) {
	painter = ppainter;
	camera = painter->getCamera();
	spriteBank = bank;
	frame = 0;
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

void CInMainMenu::update(float deltaTime) {
	draw();
}

void CInMainMenu::draw() {
	frame++;
	if (frame >= 4)
		frame = 0;
	painter->paint(spriteBank->charSprites.P1_Right[frame], 10, 10);
}
