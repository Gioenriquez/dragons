// Dungeon.h

// CSCI 1300 Spring 2023
// Author: Gio Enriquez
// Recitation: 101- Ojsvi Bhalerao
// Project 3
#ifndef DUNGEON_H
#define DUNGEON_H

#include <vector>
#include "Player.h"
#include "Room.h"

class Dungeon {
public:
    Dungeon(int numRooms = 5);
    void run();
private:
    std::vector<Room> rooms;
    Player player;
    int sorcererAnger;
    int currentRoom;
};

#endif
