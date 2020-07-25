#include "MenuManager.h";
#include "MCore.h";

MenuManager::MenuManager(void) {

	this->gameState = eMainMenu;
	this->mainMenu = new MainMenu();
	//Call Menus Here
}
MenuManager::~MenuManager(void) {

	//Clear space in Heap
	delete mainMenu;
}

void MenuManager::Update() {
	switch (gameState) {

	case eMainMenu:
		mainMenu->Update();
			break;
}
}

void MenuManager::Draw(SDL_Renderer* r) {
	switch (gameState) {
	case eMainMenu:
		//Draw stuff here?
		mainMenu->Draw(r);
			break;
	}

}
void MenuManager::enter() {
	switch (gameState) {
	case eMainMenu:
		mainMenu->enter();
		break;
	}
}

void MenuManager::esc() {
	switch (gameState) {
	case eMainMenu:
		break;
	}
}