#pragma once
#ifndef MENU_H
#define MENU_h

#include "Header.h"
#include <vector>
class Menu
{
public:
	Menu(void);
	~Menu(void);
	
	int activeMenu;
	std::vector<MenuOption*> menuOptions;
	virtual void Update();
	virtual void Draw(SDL_Renderer* rR);
};
#endif // 

