#pragma once

class CGameState
{
public:
	virtual void cleanUp() = 0;
	virtual void pause() = 0;
	virtual void resume() = 0;

	virtual void handleEvents() = 0;
	virtual void update() = 0;
	virtual void draw() = 0;

	virtual ~CGameState() {};
};

