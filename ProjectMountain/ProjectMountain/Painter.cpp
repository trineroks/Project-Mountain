#include "stdafx.h"
#include "Painter.h"


CPainter::CPainter(SDL_Renderer  &renderer, SDL_Texture &image, CCamera &camera) {
	this->renderer = NULL;
	this->image = NULL;
	this->camera = NULL;

	this->renderer = &renderer;
	this->image = &image;
	this->camera = &camera;
}

void CPainter::paint(SDL_Rect sprite, int x, int y) {
	SDL_Rect dstrect;
	dstrect.x = x - camera->getX();
	dstrect.y = y - camera->getY();
	dstrect.w = sprite.w;
	dstrect.h = sprite.h;
	SDL_RenderCopy(renderer, image, &sprite, &dstrect);
}

void CPainter::paintResized(SDL_Rect sprite, int x, int y, int w, int h) {
	SDL_Rect dstrect;
	dstrect.x = x - camera->getX();
	dstrect.y = y - camera->getY();
	dstrect.w = w;
	dstrect.h = h;
	SDL_RenderCopy(renderer, image, &sprite, &dstrect);
}

CPainter::~CPainter() {
	camera = NULL;
	image = NULL;
	renderer = NULL;
}
