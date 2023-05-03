// item.cpp

// CSCI 1300 Spring 2023
// Author: Gio Enriquez
// Recitation: 101- Ojsvi Bhalerao
// Project 3
#include "Item.h"

Item::Item(std::string name, int value) {
    this->name = name;
    this->value = value;
}

std::string Item::getName() const {
    return name;
}

int Item::getValue() const {
    return value;
}
