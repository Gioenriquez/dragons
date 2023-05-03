// Room.h

// CSCI 1300 Spring 2023
// Author: Gio Enriquez
// Recitation: 101- Ojsvi Bhalerao
// Project 3
#ifndef ROOM_H
#define ROOM_H

#include <vector>
#include "Item.h"

class Monster;

class Room {
public:
    Room(bool locked = true);
    bool isLocked() const;
    void unlock();
    bool isCleared() const;
    void setMonster(Monster* monster);
    void setKey(Item* key);
    bool hasKey() const;
    void removeKey();
    std::vector<Item*> investigate();
    void fightMonster(Player* player);
private:
    bool locked;
    bool cleared;
    Monster* monster;
    Item* key;
};

#endif
