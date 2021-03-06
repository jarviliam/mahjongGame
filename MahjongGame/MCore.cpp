#include "Header.h"
#include "MCore.h"
#include "MenuManager.h"
#include "imgui.h"
#include "imgui_impl_glfw.h"
#include "imgui_impl_sdl.h"

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
 MenuManager* MCore::mManager = new MenuManager();
MCore::MCore(void) {
	this->quit = false;
	SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER | SDL_INIT_AUDIO);
	window = SDL_CreateWindow("Mahjong Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 448, SDL_WINDOW_SHOWN);

	ImGui::CreateContext();
	ImGuiIO& io = ImGui::GetIO(); (void)io;
	ImGui::StyleColorsDark();
	ImGui_ImplSDL2_InitForOpenGL(window, false);

	if (window == NULL) {
		quit = true;
	}

	rR = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

	mainEvent = new SDL_Event();

	mManager->setActive(rR);
	this->keyMenuPressed = this->movePressed = this->keyS = this->keyW = this->keyA = this->keyD = this->keyShift = false;

}

MCore::~MCore(void) {
	delete mainEvent;
	delete mManager;
	SDL_DestroyRenderer(rR);
		SDL_DestroyWindow(window);
}

 MenuManager* MCore::getMenuManager() {
	return mManager;
}
void MCore::runLoop() {
	while (!quit && mainEvent->type != SDL_QUIT) {
		SDL_PollEvent(mainEvent);
		SDL_RenderClear(rR);
		
		SDL_RenderFillRect(rR, NULL);
		Input();
 }
}
void MCore::Input() {
	switch (getMenuManager()->getViewID()) {
	case 2:
		InputGame();
		break;
	default:
		InputMenu();
		break;
	}
}
void MCore::InputGame() {

}
void MCore::InputMenu() {
	if (mainEvent->type == SDL_KEYDOWN) {
		getMenuManager()->KeyPressed(1);
	}
}
