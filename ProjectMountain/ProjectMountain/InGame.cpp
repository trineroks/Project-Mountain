#include "stdafx.h"
#include "InGame.h"
#include "StateMachine.h"

CInGame::CInGame(CPainter *ppainter, CSpriteBank *bank) {
	painter = ppainter;
	camera = painter->getCamera();
	spriteBank = bank;
	frame = 0;
	position = 0.0f;
}


CInGame::~CInGame() {
	painter = NULL;
	spriteBank = NULL;
	camera = NULL;
}

void CInGame::cleanUp() {

}

void CInGame::pause() {

}

void CInGame::resume() {
	
}

void CInGame::handleEvents() {

}

void CInGame::update(float deltaTime) {
	position += 50 * deltaTime;
	draw();
}

void CInGame::draw() {
	frame++;
	if (frame >= 4)
		frame = 0;
	painter->paint(spriteBank->charSprites.P1_Idle[frame], position, 10);
}
