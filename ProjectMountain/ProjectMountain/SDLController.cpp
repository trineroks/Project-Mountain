#include "stdafx.h"
#include "SDLController.h"

CSDLController::CSDLController(const char* title, int p_screenW, int p_screenH, bool fullscreen) {
	TTF_Init();

	window = NULL;
	renderer = NULL;
	spriteSheet = NULL;

	screenW = p_screenW;
	screenH = p_screenH;

	if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO) < 0)
		printf("SDL_Init failure\n");
	printf("%d, %d, %d\n", fullscreen, screenW, screenH);
	Uint32 flags = (fullscreen) ? (SDL_WINDOW_SHOWN | SDL_WINDOW_FULLSCREEN) : SDL_WINDOW_SHOWN;
	window = SDL_CreateWindow(title, 0, 0, screenW, screenH, flags);

	int audio_rate = 44100;
	Uint16 audio_format = MIX_DEFAULT_FORMAT;
	int audio_channels = 2;
	int audio_buffers = 4096;

	if (Mix_OpenAudio(audio_rate, audio_format, audio_channels, audio_buffers))
		printf("Cannot open audio!\n");

	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	SDL_RenderSetLogicalSize(renderer, screenW, screenH);
	SDL_SetRenderDrawColor(renderer, 255, 0, 255, 255);

	spriteSheet = IMG_LoadTexture(renderer, "sprites/spriteSheet.png");

	mainEvent = new SDL_Event();
}

void CSDLController::start() {
	SDL_RenderClear(renderer);
}

void CSDLController::end() {
	SDL_RenderPresent(renderer);
}

SDL_Texture* CSDLController::loadSheet(const char* file) {
	SDL_DestroyTexture(spriteSheet);
	spriteSheet = IMG_LoadTexture(renderer, file);
	return spriteSheet;
}

CSDLController::~CSDLController() {
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_DestroyTexture(spriteSheet);
	delete mainEvent;
	SDL_Quit();
	TTF_Quit();
}
