// Monster.cpp

// CSCI 1300 Spring 2023
// Author: Gio Enriquez
// Recitation: 101- Ojsvi Bhalerao
// Project 3
#include "Monster.h"
#include "Player.h"

Monster::Monster(std::string name, int health, int attack) {
    this->name = name;
    this->health = health;
    this->attack = attack;
}

std::string Monster::getName() const {
    return name;
}

int Monster::getHealth() const {
    return health;
}

void Monster::setHealth(int health) {
    this->health = health;
}

int Monster::getAttack() const {
    return attack;
}

void Monster::attack(Player* player) {
    //  implement monster attack logic
}
