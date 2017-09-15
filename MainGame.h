#pragma once
#include <SDL/SDL.h>

enum class GameState{PLAY, EXIT};

class MainGame
{
public:
	MainGame();
	~MainGame();

	void run();

	

private:
	void initSystems();
	void MainGame::gameLoop();
	void MainGame::processInput();
	SDL_Window* _window;
	int _screenWidth;
	int _screenHeight;
	GameState _gameState;

};

