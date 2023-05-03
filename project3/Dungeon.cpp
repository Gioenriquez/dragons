//Dungeon.cpp

// CSCI 1300 Spring 2023
// Author: Gio Enriquez
// Recitation: 101- Ojsvi Bhalerao
// Project 3
#include "Dungeon.h"

Dungeon::Dungeon(int numRooms) {
    for (int i = 0; i < numRooms; i++) {
        Room room(i != numRooms - 1); // last room is unlocked by default
        rooms.push_back(room);
    }
    sorcererAnger = 0;
    currentRoom = 0;
}

void Dungeon::run() {
    while (player.isAlive() && sorcererAnger < 100 && currentRoom < rooms.size()) {
        Room& room = rooms[currentRoom];
        if (!room.isCleared()) {
            if (room.isLocked()) {
                if (room.hasKey()) {
                    room.unlock();
                    room.removeKey();
                } else {
                    sorcererAnger++;
                }
            }
            if (!room.isLocked()) {
                if (room.hasMonster()) {
                    room.fightMonster(&player);
                } else {
                    std::vector<Item*> items = room.investigate();
                    for (Item* item : items) {
                        player.findTreasure(item);
                    }
                    room.setCleared(true);
                }
            }
        }
        player.setHunger(player.getHunger() - 10);
        if (player.isHungry()) {
            player.setHealth(player.getHealth() - 10);
        }
        currentRoom++;
    }
}
