#pragma once
#ifndef MCORE_H
#define MCORE_H

#include "Header.h"
#include "MenuManager.h"

class MCore
{
private:
	SDL_Window* window;
	SDL_Renderer* rR;
	SDL_Event* mainEvent;

	static MenuManager* mManager;
	//FPS

	long frameTime;

	//INPUIT
	static bool movePressed, keyMenuPressed, keyS, keyW, keyA, keyD, keyShift;
	static bool keyAPressed, keyDPressed;
	//METHODS

public:
	//Constructors
	MCore(void);
	//Desconstructor
	~MCore(void);

	static bool quit;

	static MenuManager* getMenuManager();
	void runLoop();
	void Input();
	void InputMenu();
	void InputGame();
	//Dont forget Static Methods must return static vars
};


#endif // !MCORE_H

