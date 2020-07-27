#include "Image.h"

Image::Image(void){}
Image::Image(std::string fN, SDL_Renderer* rR) {
	setImage(fN, rR);
}
Image::~Image(void) {
	SDL_DestroyTexture(textureImage);
}


SDL_Texture* Image::getImage() {
	return textureImage;
}
SDL_Rect Image::getRectangle() {
	return rRect;
}
//TODO: MAKE DRAW FUNCTIONS LOL

void Image::setImage(std::string fN, SDL_Renderer* rR) {
	//TODO: SET IMAGE HERE  LOL
}
