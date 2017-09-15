#include "MainGame.h"
#include <iostream>

using namespace std;


MainGame::MainGame()
{
	_window = nullptr;
	_screenWidth = 1024;
	_screenHeight = 768;
	_gameState = GameState::PLAY;
}


MainGame::~MainGame()
{
}
void MainGame::run() {
	initSystems();
}

void MainGame::initSystems() {
	//Initialize SDL
	SDL_Init(SDL_INIT_EVERYTHING);

	_window = SDL_CreateWindow("Game Engine", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, _screenWidth, _screenHeight, SDL_WINDOW_OPENGL);

}

void MainGame::gameLoop() {
	while (_gameState != GameState::PLAY) {
		processInput();
	}
}


	
	void MainGame::processInput() {
		SDL_Event evnt;
		
		while (SDL_PollEvent(&evnt)) {
			switch (evnt.type) {
			case SDL_QUIT:
				_gameState = GameState::PLAY;
				break;
			case SDL_MOUSEMOTION:
				cout << evnt.motion.x << " " << evnt.motion.y << endl;
				break;

			}
		}
	}

	
