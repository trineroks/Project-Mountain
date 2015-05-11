#pragma once
#include "stdafx.h"

class CSDLController
{
public:
	CSDLController(const char* title, int p_screenW, int p_screenH, bool fullscreen = false);
	~CSDLController();

	SDL_Renderer* getRenderer() { 
		return renderer; 
	}
	SDL_Event* getMainEvent() { 
		return mainEvent; 
	}

	int getScreenWidth() {
		return screenW;
	}
	int getScreenHeight() {
		return screenH;
	}

	void start();
	void end();

	SDL_Texture* loadSheet(const char* file);

private:
	int screenW;
	int screenH;
	SDL_Texture* spriteSheet;
	SDL_Renderer* renderer;
	SDL_Event* mainEvent;
	SDL_Window* window;
};

