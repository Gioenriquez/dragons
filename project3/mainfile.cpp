// mainfile.cpp

// CSCI 1300 Spring 2023
// Author: Gio Enriquez
// Recitation: 101- Ojsvi Bhalerao
// Project 3
#include <iostream>

int main() {

    int gold = 100;
    int ingredients = 0;
    int cookware_p = 0, cookware_f = 0, cookware_c = 0;
    int weapons_c = 0, weapons_s = 0, weapons_r = 0, weapons_b = 0, weapons_l = 0;
    int armor = 0;
    int treasures_r = 0, treasures_n = 0, treasures_b = 0, treasures_c = 0, treasures_g = 0;

    while (true) {
        std::cout << "+-------------+\n"
                  << "| INVENTORY   |\n"
                  << "+-------------+\n"
                  << "| Gold        | " << gold << "\n"
                  << "| Ingredients | " << ingredients << " kg\n"
                  << "| Cookware    | P: " << cookware_p << " | F: " << cookware_f << " | C: " << cookware_c << "\n"
                  << "| Weapons     | C: " << weapons_c << " | S: " << weapons_s << " | R: " << weapons_r << " | B: " << weapons_b << " | L: " << weapons_l << "\n"
                  << "| Armor       | " << armor << "\n"
                  << "| Treasures   | R: " << treasures_r << " | N: " << treasures_n << " | B: " << treasures_b << " | C: " << treasures_c << " | G: " << treasures_g << "\n"
                  << "\n"
                  << "Choose one of the following:\n"
                  << " 1. Ingredients: To make food, you have to cook raw ingredients.\n"
                  << " 2. Cookware: You will need something to cook those ingredients.\n"
                  << " 3. Weapons: It's dangerous to go alone, take this!\n"
                  << " 4. Armor: If you want to survive monster attacks, you will need some armor.\n"
                  << " 5. Sell treasures: If you find anything shiny, I would be happy to take it off your hands.\n"
                  << " 6. Leave: Make sure you get everything you need, I'm leaving after this sale!\n"
                  << "> ";

        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "How many kg of ingredients do you need [1 Gold/kg]? (Enter a positive mulitple of 5, or 0 to cancel)\n> ";
                int ingredient_choice;
                std::cin >> ingredient_choice;
                if (ingredient_choice == 0) {
                    break;
                }
                if (gold < ingredient_choice) {
                    std::cout << "You don't have enough gold!\n";
                    break;
                }
                if (ingredient_choice % 5 != 0) {
                    std::cout << "You must enter a positive multiple of 5!\n";
                    break;
                }
                gold -= ingredient_choice;
                ingredients += ingredient_choice;
                std::cout << "You want to buy " << ingredient_choice << " kg of ingredients for " << ingredient_choice << " Gold? (y/n)\n> ";
                char confirm_ingredient;
                std::cin >> confirm_ingredient;
                if (confirm_ingredient == 'y') {
                    std::cout << "Thank you for your patronage! What else can I get for you?\n";
                }
                else
                            {
                gold += ingredient_choice;
                ingredients -= ingredient_choice;
                std::cout << "Transaction cancelled. What else can I get for you?\n";
            }
            break;

        case 2:
            std::cout << "What kind of cookware do you need?\n"
                      << " 1. Pot [2 Gold]\n"
                      << " 2. Frying pan [4 Gold]\n"
                      << " 3. Chef's knife [8 Gold]\n"
                      << "Enter the number of the cookware you want to buy, or 0 to cancel:\n> ";
            int cookware_choice;
            std::cin >> cookware_choice;
            if (cookware_choice == 0) {
                break;
            }
            if (cookware_choice < 1 || cookware_choice > 3) {
                std::cout << "Invalid choice!\n";
                break;
            }
            int cookware_cost;
            switch (cookware_choice) {
                case 1:
                    cookware_cost = 2;
                    cookware_p++;
                    break;
                case 2:
                    cookware_cost = 4;
                    cookware_f++;
                    break;
                case 3:
                    cookware_cost = 8;
                    cookware_c++;
                    break;
            }
            if (gold < cookware_cost) {
                std::cout << "You don't have enough gold!\n";
                break;
            }
            gold -= cookware_cost;
            std::cout << "You want to buy the cookware for " << cookware_cost << " Gold? (y/n)\n> ";
            char confirm_cookware;
            std::cin >> confirm_cookware;
            if (confirm_cookware == 'y') {
                std::cout << "Thank you for your patronage! What else can I get for you?\n";
            }
            else {
                switch (cookware_choice) {
                    case 1:
                        cookware_p--;
                        break;
                    case 2:
                        cookware_f--;
                        break;
                    case 3:
                        cookware_c--;
                        break;
                }
                gold += cookware_cost;
                std::cout << "Transaction cancelled. What else can I get for you?\n";
            }
            break;

        case 3:
            std::cout << "What kind of weapon do you need?\n"
                      << " 1. Sword [10 Gold]\n"
                      << " 2. Crossbow [15 Gold]\n"
                      << " 3. Rifle [25 Gold]\n"
                      << " 4. Bomb [50 Gold]\n"
                      << " 5. Laser gun [100 Gold]\n"
                      << "Enter the number of the weapon you want to buy, or 0 to cancel:\n> ";
            int weapon_choice;
            std::cin >> weapon_choice;
            if (weapon_choice == 0) {
                break;
            }
            if (weapon_choice < 1 || weapon_choice > 5) {
                std::cout << "Invalid choice!\n";
                break;
            }
            int weapon_cost;
            switch (weapon_choice) {
                case 1:
                    weapon_cost = 10;
                    weapons_c++;
                    break;
                case 2:
                    weapon_cost = 15;
                    weapons_s++;
                    break;
                case 3:
                    weapon_cost = 25;
                    weapons_r++;
                    break;
                case 4:
                    weapon_cost = 50;
                    weapons_b++;
                    break;
                case 5:
                    weapon_cost = 100;
                    weapons_l++;
                    break;
            }
            if (gold <
            {
                gold += ingredient_choice;
                ingredients -= ingredient_choice;
                std::cout << "Transaction cancelled. What else can I get for you?\n";
            }
            break;

        case 2:
            std::cout << "What kind of cookware do you need?\n"
                      << " 1. Pot [2 Gold]\n"
                      << " 2. Frying pan [4 Gold]\n"
                      << " 3. Chef's knife [8 Gold]\n"
                      << "Enter the number of the cookware you want to buy, or 0 to cancel:\n> ";
            int cookware_choice;
            std::cin >> cookware_choice;
            if (cookware_choice == 0) {
                break;
            }
            if (cookware_choice < 1 || cookware_choice > 3) {
                std::cout << "Invalid choice!\n";
                break;
            }
            int cookware_cost;
            switch (cookware_choice) {
                case 1:
                    cookware_cost = 2;
                    cookware_p++;
                    break;
                case 2:
                    cookware_cost = 4;
                    cookware_f++;
                    break;
                case 3:
                    cookware_cost = 8;
                    cookware_c++;
                    break;
            }
            if (gold < cookware_cost) {
                std::cout << "You don't have enough gold!\n";
                break;
            }
            gold -= cookware_cost;
            std::cout << "You want to buy the cookware for " << cookware_cost << " Gold? (y/n)\n> ";
            char confirm_cookware;
            std::cin >> confirm_cookware;
            if (confirm_cookware == 'y') {
                std::cout << "Thank you for your patronage! What else can I get for you?\n";
            }
            else {
                switch (cookware_choice) {
                    case 1:
                        cookware_p--;
                        break;
                    case 2:
                        cookware_f--;
                        break;
                    case 3:
                        cookware_c--;
                        break;
                }
                gold += cookware_cost;
                std::cout << "Transaction cancelled. What else can I get for you?\n";
            }
            break;

        case 3:
            std::cout << "What kind of weapon do you need?\n"
                      << " 1. Sword [10 Gold]\n"
                      << " 2. Crossbow [15 Gold]\n"
                      << " 3. Rifle [25 Gold]\n"
                      << " 4. Bomb [50 Gold]\n"
                      << " 5. Laser gun [100 Gold]\n"
                      << "Enter the number of the weapon you want to buy, or 0 to cancel:\n> ";
            int weapon_choice;
            std::cin >> weapon_choice;
            if (weapon_choice == 0) {
                break;
            }
            if (weapon_choice < 1 || weapon_choice > 5) {
                std::cout << "Invalid choice!\n";
                break;
            }
            int weapon_cost;
            switch (weapon_choice) {
                case 1:
                    weapon_cost = 10;
                    weapons_c++;
                    break;
                case 2:
                    weapon_cost = 15;
                    weapons_s++;
                    break;
                case 3:
                    weapon_cost = 25;
                    weapons_r++;
                    break;
                case 4:
                    weapon_cost = 50;
                    weapons_b++;
                    break;
                case 5:
                    weapon_cost = 100;
                    weapons_l++;
                    break;
            }
        }
    }
}


