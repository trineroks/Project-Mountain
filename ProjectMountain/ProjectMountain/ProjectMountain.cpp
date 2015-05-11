// ProjectMountain.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "MainExec.h"
#include "InMainMenu.h"
#include "InGame.h"

int main(int argc, char* argv[])
{
	CMainExec *mainexec = new CMainExec("Title");
	mainexec->mainLoop();
	system("PAUSE");
	return 0;
}

