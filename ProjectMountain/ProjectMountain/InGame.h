#pragma once
#include "GameState.h"
#include "Painter.h"
#include "SpriteBank.h"
#include "Camera.h"

class CInGame : public CGameState
{
public:
	CInGame(CPainter *ppainter, CSpriteBank *bank);
	~CInGame();

	void cleanUp();
	void pause();
	void resume();

	void handleEvents();
	void update(float deltaTime);
	void draw();
private:
	int frame;
	float position;
	CPainter *painter;
	CSpriteBank *spriteBank;
	CCamera *camera;
};

