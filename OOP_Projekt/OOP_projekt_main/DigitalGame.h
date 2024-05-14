#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Game.h"



class DigitalGame : public Game {
private:
    double fileSize;
public:
    DigitalGame(std::string t, double p, double size);
    void displayInfo() const override;
};