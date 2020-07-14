#include "MCore.h"
#include "MainMenu.h"
#include "MenuOption.h"

MainMenu::MainMenu(void) {
	this->menuOptions.push_back(new MenuOption("Opt 1", 200 , 230));
	this->menuOptions.push_back(new MenuOption("Opt 2", 200 , 430));
}
MainMenu::~MainMenu(void) {
	//If Declare on the heap delete here
}


void MainMenu::Draw(SDL_Renderer* rR) {
		
}
void MainMenu::Update() {

}
void MainMenu::enter() {
	switch (activeMenu) {
	case 0:
		break;
	}
}
void MainMenu::esc() {}

void MainMenu::UpdateSelected(int dir) {
}