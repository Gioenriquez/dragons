// Monster.h

// CSCI 1300 Spring 2023
// Author: Gio Enriquez
// Recitation: 101- Ojsvi Bhalerao
// Project 3
#ifndef MONSTER_H
#define MONSTER_H

#include <string>

class Player;

class Monster {
public:
Monster(std::string name, int health, int damage);
std::string getName() const;
int getHealth() const;
void setHealth(int health);
int getDamage() const;
void attack(Player* player);
private:
std::string name;
int health;
int damage;
};

#endif