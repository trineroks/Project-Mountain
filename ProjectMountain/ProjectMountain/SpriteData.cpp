#include "stdafx.h"
#include "SpriteData.h"


CSpriteData::CSpriteData(int x, int y, int w, int h) {
	x_ = x;
	y_ = y;
	w_ = w;
	h_ = h;
}

CSpriteData::CSpriteData() {
	x_ = 0;
	y_ = 0;
	w_ = 0;
	h_ = 0;
}

void CSpriteData::setSheetPortion(int x, int y, int w, int h) {
	x_ = x;
	y_ = y;
	w_ = w;
	h_ = h;
}

void CSpriteData::setPosition(int x, int y) {

}

CSpriteData::~CSpriteData()
{
}
