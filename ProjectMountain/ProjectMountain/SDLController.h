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

	float getDeltaTime() {
		return deltaTime;
	}

	void loadSheet(const char* file);

	SDL_Texture* getLoadedSheet() {
		return spriteSheet;
	}

private:
	int screenW;
	int screenH;
	SDL_Texture* spriteSheet;
	SDL_Renderer* renderer;
	SDL_Event* mainEvent;
	SDL_Window* window;

	Uint32 timeLastFrame;
	float deltaTime; //How many ms has passed since last frame. Use this for movement -> x pixels per second.
};

