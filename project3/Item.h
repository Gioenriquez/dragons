// item.cpp

// CSCI 1300 Spring 2023
// Author: Gio Enriquez
// Recitation: 101- Ojsvi Bhalerao
// Project 3
#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item {
public:
    Item(std::string name, int value);
    std::string getName() const;
    int getValue() const;
private:
    std::string name;
    int value;
};

#endif
