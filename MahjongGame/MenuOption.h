#pragma once
#ifndef MENUOPTION_H
#define MENUOPTION_H

#include <string>
class MenuOption {
private:
	std::string optionText;
	int X, Y;
public:
	MenuOption(std::string text, int X, int Y);
	~MenuOption(void);

	std::string getOption();

	void setOption(std::string optionName);

	int getX();
	int getY();
};
#endif // !MENUOPTION_H

