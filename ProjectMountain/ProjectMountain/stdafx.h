#pragma once

#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <math.h>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>
#include <SDL_ttf.h>
#include <json/json.h>
#include "InGame.h"
#include "InMainMenu.h"

struct customPoint {
	int x;
	int y;
};

struct rect {
	int x;
	int y;
	int w;
	int h;
};

enum gameState {
	STATE_NULL = 0,
	STATE_MENU,
	STATE_GAME
};

using namespace std;
