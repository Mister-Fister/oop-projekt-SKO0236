#include "PhysicalGame.h"
#include <iostream>

PhysicalGame::PhysicalGame(std::string t, double p, std::string plat)
    : Game(t, p), platform(plat) {}

void PhysicalGame::displayInfo() const {
    std::cout << "Physical Game: " << title << ", Price: " << price << ", Platform: " << platform << std::endl;
}