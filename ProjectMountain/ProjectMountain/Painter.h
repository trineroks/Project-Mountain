#pragma once
#include "stdafx.h"
#include "Camera.h"
#include "Gob.h"
class CPainter
{
public:
	CPainter();
	CPainter(SDL_Renderer *renderer, SDL_Texture *image, CCamera *camera);
	~CPainter();
	void paint(SDL_Rect sprite, int x, int y);
	void paintResized(SDL_Rect sprite, int x, int y, int w, int h);
	CCamera *getCamera() {
		return camera;
	}
private:
	CCamera *camera;
	SDL_Texture *image;
	SDL_Renderer *renderer;
};
