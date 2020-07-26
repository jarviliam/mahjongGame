#pragma once
#ifndef MCORE_H
#define MCORE_H

#include "Header.h"

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

	void runLoop();
	void Input();
	void InputMenu();
	//Dont forget Static Methods must return static vars
	static MenuManager* getMenuManager();
};



#endif // !MCORE_H

