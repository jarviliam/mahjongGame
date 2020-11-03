#pragma once
#ifndef MENUMANAGER_H
#define MENUMANAGER_H

#include "MCore.h"
#include "MainMenu.h"
#include "Image.h"

class MenuManager {

private:

	Image* activeOpt;
	MainMenu* mainMenu;
public:
	MenuManager(void);
	~MenuManager(void);

	enum gameState {
		eMainMenu,
		eLoading,
		eGame,
		eOptions,
	};
	gameState currentGameState;


	void setActive(SDL_Renderer* rR);
	void Update();
	void Draw(SDL_Renderer* r);
	void enter();
	void esc();

	void KeyPressed(int direction);
	void resetActive(gameState ID);

	MainMenu* getMainMenu();

	int getViewID();
};
#endif // !MENUMANAGER_H
