#include "Menu.h"


Menu::Menu(void) {
	this->activeMenu = 0;
}
Menu::~Menu(void) {
	//No Heap Pointers so nothing to clean?
}


void Menu::Update() {

}
void Menu::Draw(SDL_Renderer* rR) {
}
void Menu::updateActiveButton(int Direction) {
	switch (Direction) {
	case 0:
		//Log Here?
		break;
	default:
		break;
	}
}
