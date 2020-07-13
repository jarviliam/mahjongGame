#include "Header.h"
#include "MCore.h"

//Globals

bool MCore::movePressed = false;
bool MCore::keyMenuPressed = false;
bool MCore::keyS = false;
bool MCore::keyW = false;
bool MCore::keyA = false;
bool MCore::keyD = false;
bool MCore::keyShift = false;
bool MCore::keyAPressed = false;
bool MCore::keyDPressed = false;

bool MCore::quit = false;
MCore::MCore(void) {
	this->quit = false;
	SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER | SDL_INIT_AUDIO);
	window = SDL_CreateWindow("Mahjong Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 4448, SDL_WINDOW_SHOWN);

	if (window == NULL) {
		quit = true;
	}

	rR = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

	mainEvent = new SDL_Event();
	this->keyMenuPressed = this->movePressed = this->keyS = this->keyW = this->keyA = this->keyD = this->keyShift = false;

}

MCore::~MCore(void) {
	delete mainEvent;
	SDL_DestroyRenderer(rR);
		SDL_DestroyWindow(window);
}

void MCore::runLoop() {

}
