// player.h

// CSCI 1300 Spring 2023
// Author: Gio Enriquez
// Recitation: 101- Ojsvi Bhalerao
// Project 3
#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include <string>

class Item;

class Player {
public:
    Player();
    void buyItem(Item* item);
    void cookFood();
    void findTreasure(Item* treasure);
    bool isAlive() const;
    bool isHungry() const;
    int getHunger() const;
    void setHunger(int hunger);
    std::vector<Item*> getInventory() const;
private:
    int hunger;
    std::vector<Item*> inventory;
    bool alive;
};

#endif
