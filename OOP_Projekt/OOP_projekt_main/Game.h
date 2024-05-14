#pragma once
#include <iostream>
#include <string>
#include "GameInfo.h"

using namespace std;

class Game : GameInfo {
protected:
    string title;
    double price;
public:
    Game(string t, double p);
    void displayInfo() const override;
};