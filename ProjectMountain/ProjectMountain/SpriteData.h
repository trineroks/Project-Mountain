#pragma once
class CSpriteData
{
public:
	CSpriteData(int x, int y, int w, int h);
	CSpriteData();
	void setSheetPortion(int x, int y, int w, int h);
	void setPosition(int x, int y);
	~CSpriteData();
private:
	int x_, y_, w_, h_;
	float *camX;
	float *camY;
	int posX_, posY_;
};

