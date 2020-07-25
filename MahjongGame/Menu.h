#pragma once
#ifndef MENU_H
#define MENU_h

#include "Header.h"
#include "MenuOption.h"
#include <vector>
class Menu
{
public:
	Menu(void);
	~Menu(void);
	
	int activeMenu;
	int numOfOptions;
	std::vector<MenuOption*> menuOptions;
	virtual void Update();
	virtual void Draw(SDL_Renderer* rR);

	virtual void updateActiveButton(int Direction);
};
#endif // 

