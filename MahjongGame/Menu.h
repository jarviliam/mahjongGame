#pragma once
#ifndef MENU_H
#define MENU_h

#include "Header.h"

class Menu
{
public:
	Menu(void);
	~Menu(void);
	
	int activeMenu;

	virtual void Update();
	virtual void Draw(SDL_Renderer* rR)
};
#endif // 

