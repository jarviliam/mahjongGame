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

void Image::Draw(SDL_Renderer* rR, int XOffset, int YOffset) {
	rRect.x = XOffset;
	rRect.y = YOffset;
	SDL_RenderCopy(rR, textureImage, &rRect);
}
void Image::setImage(std::string fN, SDL_Renderer* rR) {
	fN = "assets/images/" + fN + ".bmp";
	SDL_Surface* loadedSurface = SDL_LoadBMP(fN.c_str());
	SDL_SetColorKey(loadedSurface, SDL_TRUE, SDL_MapRGB(loadedSurface->format, 255, 0, 255));
	

	//Once Image is Loaded and Texture Key is set, assign to textureImage
	textureImage = SDL_CreateTextureFromSurface(rR, loadedSurface);
	//Query for Image Dimensions and store in variable
	int width, int height;

	SDL_QueryTexture(textureImage, NULL, NULL, &width, &height);
	//Now that its queried. Update the Rectange 
	rRect.x = 0;
rRect.y = 0;
	rRect.w = width;
	rRect.h = height;
	//No longer need the Surface so clear
	SDL_FreeSurface(loadedSurface);
}
