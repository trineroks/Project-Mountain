#include "stdafx.h"
#include "Camera.h"

CCamera::CCamera() {
	cameraX = 0;
	cameraY = 0;
}

CCamera::CCamera(int camX, int camY) {
	cameraX = camX;
	cameraY = camY;
}

CCamera::~CCamera() {
}
