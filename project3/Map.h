// map.h

// CSCI 1300 Spring 2023
// Author: Gio Enriquez
// Recitation: 101- Ojsvi Bhalerao
// Project 3
#ifndef DUNGEON_H
#define DUNGEON_H

#include "Map.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

class Game {
public:
    void run();

private:
    void displayIntro();
    void displayStatus(const Map& map);
    void handleMove(Map& map, char move);
};

#endif
