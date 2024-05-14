#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Game.h"

using namespace std;

class PhysicalGame : public Game {
private:
    std::string platform;
public:
    PhysicalGame(std::string t, double p, std::string plat);
    void displayInfo() const override;
};