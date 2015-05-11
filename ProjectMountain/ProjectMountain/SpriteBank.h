#pragma once
#include "stdafx.h"
#include "SpriteData.h"

struct CharacterSprites {
	SDL_Rect P1_Idle[4];
	SDL_Rect P1_Right[4];
	SDL_Rect P1_Left[4];
	SDL_Rect P1_Jump;
};

class CSpriteBank
{
public:
	CSpriteBank();
	~CSpriteBank();
	CharacterSprites charSprites;
private:
	SDL_Rect setSpriteData(int x, int y, int w, int h);
};

