#pragma once
#ifndef MENUMANAGER_H
#define MENUMANAGER_H

#include "MCore.h"
#include "MainMenu.h"

class MenuManager{

private:

	MainMenu* mainMenu;
public:
	MainMenu(void);
	~MainMenu(void);

	enum gameState {
		eMainMenu,
		eLoading,
		eGame,
		eOptions,
	};
	gameState gameState;


	void Update();
	void Draw(SDL_Renderer* r);
	void enter();
	void esc();


	MainMenu* getMainMenu();
}
#endif // !MENUMANAGER_H

