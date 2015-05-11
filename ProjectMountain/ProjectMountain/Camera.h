#pragma once

class CCamera
{
public:
	CCamera();
	CCamera(int camX, int camY);
	~CCamera();

	void setX(int x) {
		cameraX = x;
	}

	void setY(int y) {
		cameraY = y;
	}

	int getX() { 
		return cameraX; 
	}

	int getY() {
		return cameraY;
	}
private:
	int cameraX;
	int cameraY;
};

