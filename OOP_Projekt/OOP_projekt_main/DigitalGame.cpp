#include "DigitalGame.h"
#include <iostream>

DigitalGame::DigitalGame(std::string t, double p, double size)
    : Game(t, p), fileSize(size) {}

void DigitalGame::displayInfo() const {
    std::cout << "Digital Game: " << title << ", Price: " << price << ", File Size: " << fileSize << " GB" << std::endl;
}