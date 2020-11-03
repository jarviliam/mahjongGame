#pragma once

#ifndef Image_H
#define Image_H

#include "Header.h"

class Image {
private:
	SDL_Rect rRect;
	SDL_Texture* textureImage;
public:
	Image(void);
	~Image(void);
	Image(std::string fN, SDL_Renderer* rR);

void Draw(SDL_Renderer* rR, int XOffset, int yOffset);
	SDL_Texture* getImage();
	void setImage(std::string fN, SDL_Renderer* rR);
	SDL_Rect getRectangle();
};

#endif
