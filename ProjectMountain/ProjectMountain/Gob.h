#pragma once
#include "Painter.h"

//Everything in the game including buttons is a game object.
//A game object will always have a position

class CGob
{
public:
	CGob();
	~CGob();

	void setX(int x) {
		posX = x;
	}
	void setY(int y) {
		posY = y;
	}
	int getX() {
		return posX;
	}
	int getY() {
		return posY;
	}
private:
	int posX;
	int posY;
};

