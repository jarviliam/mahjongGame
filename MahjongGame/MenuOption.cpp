#include "MenuOption.h"

MenuOption::MenuOption(std::string txt, int x, int y) {
	this->optionText = txt;
	this->X = x;
	this->Y = y;
}

MenuOption::~MenuOption(void) {
	
}


std::string MenuOption::getOption() {
	return optionText;
}

int MenuOption::getX() {
	return X;
}
int MenuOption::getY() {
	return Y;
}
void MenuOption::setOption(std::string txt) {
	this->optionText = txt;
}
