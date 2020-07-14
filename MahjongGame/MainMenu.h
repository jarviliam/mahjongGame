#pragma once

#ifndef MAINMENU_H
#define MAINMENU_H

#include "Menu.h"

class MainMenu : public Menu
{
private:

public:
	MainMenu(void);
	~MainMenu(void);

	void Update();
	void Draw(SDL_Renderer* rR);

	void enter();
	void esc();

	void UpdateSelected(int dir);
};
#endif // !MAINMENU_H

