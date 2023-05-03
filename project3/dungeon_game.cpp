// dungeon_game.cpp

// CSCI 1300 Spring 2023
// Author: Gio Enriquez
// Recitation: 101- Ojsvi Bhalerao
// Project 3
#include <iostream>
#include <fstream>
#include <algorithm>
#include <random>
#include <ctime>
#include <cmath>
#include "dungeon_game.h"

DungeonGame::DungeonGame() {
    // Initialize variables to starting values
    gold_ = 100;
    ingredients_ = 0;
    cookware_p_ = 0;
    cookware_f_ = 0;
    cookware_c_ = 0;
    weapons_c_ = 0;
    weapons_s_ = 0;
    weapons_r_ = 0;
    weapons_b_ = 0;
    weapons_l_ = 0;
    armor_ = 0;
    treasures_r_ = 0;
    treasures_n_ = 0;
    treasures_b_ = 0;
    treasures_c_ = 0;
    treasures_g_ = 0;

    // Load initial weapons
    weapons_.push_back("club");
    weapons_.push_back("spear");
    weapons_.push_back("shortsword");
    weapons_.push_back("longsword");
}

void DungeonGame::start() {
    // Load initial monsters from file
    std::ifstream monsters_file("monsters.txt");
    if (!monsters_file) {
        std::cerr << "Error opening monsters file!\n";
        return;
    }
    std::string monster_name;
    while (monsters_file >> monster_name) {
        remaining_monsters_.push_back(monster_name);
    }
    monster_file.close();

// Keep track of defeated monsters
std::vector<std::string> defeated_monsters;

// Main game loop
while (true) {
    // Print inventory and options menu
    print_inventory();
    std::cout << "Choose one of the following:\n";
    std::cout << " 1. Ingredients: To make food, you have to cook raw ingredients.\n";
    std::cout << " 2. Cookware: You will need something to cook those ingredients.\n";
    std::cout << " 3. Weapons: It's dangerous to go alone, take this!\n";
    std::cout << " 4. Armor: If you want to survive monster attacks, you will need some armor.\n";
    std::cout << " 5. Sell treasures: If you find anything shiny, I would be happy to take it off your hands.\n";
    std::cout << " 6. Enter the dungeon: This is where the real adventure begins!\n";
    std::cout << " 7. Exit: Make sure you get everything you need, I'm closing shop!\n";

    int choice;
    std::cin >> choice;

    switch (choice) {
        case 1: {
            // Buy ingredients
            buy_ingredients();
            break;
        }
        case 2: {
            // Buy cookware
            buy_cookware();
            break;
        }
        case 3: {
            // Buy weapons
            buy_weapons();
            break;
        }
        case 4: {
            // Buy armor
            buy_armor();
            break;
        }
        case 5: {
            // Sell treasures
            sell_treasures();
            break;
        }
        case 6: {
            // Enter the dungeon
            enter_dungeon(defeated_monsters);
            break;
        }
        case 7: {
            // Exit the game
            std::cout << "Thanks for playing! Come back soon!\n";
            return 0;
        }
        default: {
            std::cout << "Invalid choice. Please try again.\n";
            break;
        }
    }
}
