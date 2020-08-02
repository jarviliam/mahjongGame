#include "MenuManager.h";
#include "MCore.h";

MenuManager::MenuManager(void) {

	this->currentGameState = eMainMenu;
	this->mainMenu = new MainMenu();
	//Call Menus Here
}
MenuManager::~MenuManager(void) {

	//Clear space in Heap
	delete mainMenu;
	delete activeOpt;
}

void MenuManager::Update() {
	switch (currentGameState) {

	case eMainMenu:
		mainMenu->Update();
			break;
}
}
void MenuManager::setActive(SDL_Renderer* rR) {
	activeOpt = new Image("active_selection", rR);
}

void MenuManager::Draw(SDL_Renderer* r) {
	switch (currentGameState) {
	case eMainMenu:
		//Draw stuff here?
		mainMenu->Draw(r);
			break;
	}

}
void MenuManager::KeyPressed(int direction) {
	switch (currentGameState) {
	case eMainMenu:
		mainMenu->updateActiveButton(direction);
		break;
	}
}
void MenuManager::resetActive(gameState ID) {
	switch (ID) {
	case eMainMenu:
		mainMenu->activeMenu = 0;
		break;
}
}
void MenuManager::enter() {
	switch (currentGameState) {
	case eMainMenu:
		mainMenu->enter();
		break;
	}
}

int MenuManager::getViewID() {
	return currentGameState;
}
MainMenu* MenuManager::getMainMenu() {
	return mainMenu;
}
void MenuManager::esc() {
	switch (currentGameState) {
	case eMainMenu:
		break;
	}
}