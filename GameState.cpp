#include "GameState.h"

GameState::GameState()
{
	this->window = new sf::RenderWindow(sf::VideoMode(960, 640), "game");
	this->player = new Player();
}

GameState::~GameState()
{
	delete this->player;
}

void GameState::update(std::stack<State*>& states)
{
	this->player->update();
}

void GameState::render()
{
	window->clear();
	this->player->render(this->window);
	window->display();
}


