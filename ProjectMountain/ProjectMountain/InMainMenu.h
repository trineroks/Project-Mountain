#pragma once
#include "GameState.h"
#include "Painter.h"
#include "SpriteBank.h"
#include "Camera.h"

class CInMainMenu : public CGameState
{
public:
	CInMainMenu(CPainter *ppainter, CSpriteBank *bank);
	~CInMainMenu();

	void cleanUp();
	void pause();
	void resume();

	void handleEvents();
	void update(float deltaTime);
	void draw();
private:
	int frame;
	CPainter *painter;
	CSpriteBank *spriteBank;
	CCamera *camera;
};

