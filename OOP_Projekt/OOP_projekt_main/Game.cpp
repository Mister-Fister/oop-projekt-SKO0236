#include "Game.h"

Game::Game(string t, double p) : title(t), price(p) {}


void Game::displayInfo() const
{
	std::cout << "nezadan� typ hry" << std::endl;
}
