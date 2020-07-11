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

	//FPS

	long frameTime;

	//INPUIT


	//METHODS

public:
	//Constructors
	MCore(void);
	//Desconstructor
	~MCore(void);

	static bool quit;

	void runLoop();
};



#endif // !MCORE_H

