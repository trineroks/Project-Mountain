#include "stdafx.h"
#include "SpriteBank.h"


CSpriteBank::CSpriteBank()
{
	charSprites.P1_Idle[0] = setSpriteData(0, 0, 98, 153);
	charSprites.P1_Idle[1] = setSpriteData(99, 0, 97, 151);
	charSprites.P1_Idle[2] = setSpriteData(197, 0, 94, 149);
	charSprites.P1_Idle[3] = setSpriteData(0, 154, 86, 143);

	charSprites.P1_Right[0] = setSpriteData(379, 0, 86, 151);
	charSprites.P1_Right[1] = setSpriteData(229, 152, 69, 147);
	charSprites.P1_Right[2] = setSpriteData(129, 302, 56, 147);
	charSprites.P1_Right[3] = setSpriteData(0, 298, 71, 147);

	charSprites.P1_Left[0] = setSpriteData(292, 0, 86, 151);
	charSprites.P1_Left[1] = setSpriteData(159, 152, 69, 147);
	charSprites.P1_Left[2] = setSpriteData(72, 302, 56, 147);
	charSprites.P1_Left[3] = setSpriteData(87, 154, 71, 147);
}

SDL_Rect CSpriteBank::setSpriteData(int x, int y, int w, int h) {
	SDL_Rect retVal;
	retVal.x = x;
	retVal.y = y;
	retVal.w = w;
	retVal.h = h;
	return retVal;
}

CSpriteBank::~CSpriteBank() {

}
