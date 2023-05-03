// player.cpp

// CSCI 1300 Spring 2023
// Author: Gio Enriquez
// Recitation: 101- Ojsvi Bhalerao
// Project 3
#include "Player.h"
#include "Item.h"

Player::Player() {
    hunger = 100;
    alive = true;
}

void Player::buyItem(Item* item) {
    inventory.push_back(item);
}

void Player::cookFood() {
    //  implement cooking logic
}

void Player::findTreasure(Item* treasure) {
    inventory.push_back(treasure);
}

bool Player::isAlive() const {
    return alive;
}

bool Player::isHungry() const {
    return hunger < 50;
}

int Player::getHunger() const {
    return hunger;
}

void Player::setHunger(int hunger) {
    this->hunger = hunger;
    if (hunger <= 0) {
        alive = false;
    }
}

std::vector<Item*> Player::getInventory() const {
    return inventory;
}
