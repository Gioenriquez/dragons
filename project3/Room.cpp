// Room.cpp

// CSCI 1300 Spring 2023
// Author: Gio Enriquez
// Recitation: 101- Ojsvi Bhalerao
// Project 3
#include "Room.h"
#include "Monster.h"

Room::Room(bool locked) {
    this->locked = locked;
    cleared = false;
    monster = nullptr;
    key = nullptr;
}

bool Room::isLocked() const {
    return locked;
}

void Room::unlock() {
    locked = false;
}

bool Room::isCleared() const {
    return cleared;
}

void Room::setMonster(Monster* monster) {
    this->monster = monster;
}

void Room::setKey(Item* key) {
    this->key = key;
}

bool Room::hasKey() const {
    return key != nullptr;
}

void Room::removeKey() {
    key = nullptr;
}

std::vector<Item*> Room::investigate() {
    std::vector<Item*> items;
    //  add logic for investigating the room and finding items
    return items;
}

void Room::fightMonster(Player* player) {
    // add logic for fighting the monster and updating the room state
}
