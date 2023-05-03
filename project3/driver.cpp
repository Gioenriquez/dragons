// driver.cpp

// CSCI 1300 Spring 2023
// Author: Gio Enriquez
// Recitation: 101- Ojsvi Bhalerao
// Project 3
#include <iostream>
#include "Dungeon.h"
#include "Item.h"
#include "Map.h"
#include "Monster.h"
#include "Player.h"
#include "Room.h"

using namespace std;

int main() {
    int gold = 100;
    int ingredients = 0;
    int cookware_p = 0, cookware_f = 0, cookware_c = 0;
    int weapons_c = 0, weapons_s = 0, weapons_r = 0, weapons_b = 0, weapons_l = 0;
    int armor = 0;
    int treasures_r = 0, treasures_n = 0, treasures_b = 0, treasures_c = 0, treasures_g = 0;
int playing= true;

    while (playing) {
        cout << "+-------------+" << endl;
        cout << "| INVENTORY   |" << endl;
        cout << "+-------------+" << endl;
        cout << "| Gold        | " << gold << endl;
        cout << "| Ingredients | " << ingredients << " kg" << endl;
        cout << "| Cookware    | P: " << cookware_p << " | F: " << cookware_f << " | C: " << cookware_c << endl;
        cout << "| Weapons     | C: " << weapons_c << " | S: " << weapons_s << " | R: " << weapons_r << " | B: " << weapons_b << " | L: " << weapons_l << endl;
        cout << "| Armor       | " << armor << endl;
        cout << "| Treasures   | R: " << treasures_r << " | N: " << treasures_n << " | B: " << treasures_b << " | C: " << treasures_c << " | G: " << treasures_g << endl;
        cout << endl;
        cout << "Choose one of the following:" << endl;
        cout << " 1. Ingredients: To make food, you have to cook raw ingredients." << endl;
        cout << " 2. Cookware: You will need something to cook those ingredients." << endl;
        cout << " 3. Weapons: It's dangerous to go alone, take this!" << endl;
        cout << " 4. Armor: If you want to survive monster attacks, you will need some armor." << endl;
        cout << " 5. Sell treasures: If you find anything shiny, I would be happy to take it off your hands." << endl;
        cout << " 6. Leave: Make sure you get everything you need, I'm leaving after this sale!" << endl;
        int choice;
        cin >> choice;
    
        switch (choice) {
            case 1: {
                cout << "How many kg of ingredients do you need [1 Gold/kg]? (Enter a positive mulitple of 5, or 0 to cancel)" << endl;
                int kg;
                cin >> kg;
                if (kg == 0) break;
                int cost = kg * 1;
                cout << "You want to buy " << kg << " kg of ingredients for " << cost << " Gold? (y/n)" << endl;
                char confirm;
                cin >> confirm;
                if (confirm == 'y') {
                    if (gold < cost) {
                        cout << "You don't have enough Gold!" << endl;
                    } else {
                        gold -= cost;
                        ingredients += kg;
                        cout << "Thank you for your patronage! What else can I get for you?" << endl;
                    }
                }
                break;
            }
                        case 2: {
                cout << "I have several types of cookware, which one would you like?" << endl;
                cout << "Each type has a different probability of breaking when used, marked with (XX%)." << endl;
                cout << "Choose one of the following:" << endl;
                cout << " 1. (25%) Ceramic Pot [2 Gold]" << endl;
                cout << " 2. (10%) Frying Pan [10 Gold]" << endl;
                cout << " 3. (2%) Cauldron [20 Gold]" << endl;
                cout << " 4. Cancel" << endl;

                int cookware_choice;
                cin >> cookware_choice;

                switch (cookware_choice) {
                    case 1: {
                        cout << "How many would you like? (Enter a positive integer, or 0 to cancel)" << endl;
                        int qty;
                        cin >> qty;
                        if (qty == 0) break;
                        int cost = qty * 2;
                        cout << "You want to buy " << qty << " Ceramic Pot(s) for " << cost << " Gold? (y/n)" << endl;
                        char confirm;
                        cin >> confirm;
                        if (confirm == 'y') {
                            if (gold < cost) {
                                cout << "You don't have enough Gold!" << endl;
                            } else {
                                gold -= cost;
                                cookware_p += qty;
                                cout << "Thank you for your patronage! What else can I get for you?" << endl;
                            }
                        }
                        break;
                    }
                    case 2: {
                        cout << "How many would you like? (Enter a positive integer, or 0 to cancel)" << endl;
                        int qty;
                        cin >> qty;
                        if (qty == 0) break;
                        int cost = qty * 10;
                        cout << "You want to buy " << qty << " Frying Pan(s) for " << cost << " Gold? (y/n)" << endl;
                        char confirm;
                        cin >> confirm;
                        if (confirm == 'y') {
                            if (gold < cost) {
                                cout << "You don't have enough Gold!" << endl;
                            } else {
                                gold -= cost;
                                cookware_f += qty;
                                cout << "Thank you for your patronage! What else can I get for you?" << endl;
                            }
                        }
                        break;
                    }
                    case 3: {
                        cout << "How many would you like? (Enter a positive integer, or 0 to cancel)" << endl;
                        int qty;
                        cin >> qty;
                        if (qty == 0) break;
                        int cost = qty * 20;
                        cout << "You want to buy " << qty << " Cauldron(s) for " << cost << " Gold? (y/n)" << endl;
                        char confirm;
                        cin >> confirm;
                        if (confirm == 'y') {
                            if (gold < cost) {
                                cout << "You don't have enough Gold!" << endl;
                            } else {
                                gold -= cost;
                                cookware_c += qty;
                                cout << "Thank you for your patronage! What else can I get for you?" << endl;
                            }
                        }
                        break;
                    }
                    case 4: {
                        break;
                    }
                    default: {
                        cout << "Invalid choice!" << endl;
                        break;
                    }
                }
                break;
            }
            case 3: {
    cout << "I have a plentiful collection of weapons to choose from, what would you like?" << endl;
    cout << "Note that some of them provide you a special bonus in combat, marked by a (+X)." << endl;
    cout << endl;
    cout << "Choose one of the following:" << endl;
    cout << " 1. Stone Club [2 Gold]" << endl;
    cout << " 2. Iron Spear [2 Gold]" << endl;
    cout << " 3. (+1) Mythril Rapier [5 Gold]" << endl;
    cout << " 4. (+2) Flaming Battle-Axe [15 Gold]" << endl;
    cout << " 5. (+3) Vorpal Longsword [50 Gold]" << endl;
    cout << " 6. Cancel" << endl;

    int weapon_choice;
    cin >> weapon_choice;

    switch (weapon_choice) {
        case 1: {
            int cost = 2;
            cout << "You want to buy a Stone Club for " << cost << " Gold? (y/n)" << endl;
            char confirm;
            cin >> confirm;
            if (confirm == 'y') {
                if (gold < cost) {
                    cout << "You don't have enough Gold!" << endl;
                } else {
                    gold -= cost;
                    weapons_c++;
                    cout << "Thank you for your patronage! What else can I get for you?" << endl;
                }
            }
            break;
        }
        case 2: {
            int cost = 2;
            cout << "You want to buy an Iron Spear for " << cost << " Gold? (y/n)" << endl;
            char confirm;
            cin >> confirm;
            if (confirm == 'y') {
                if (gold < cost) {
                    cout << "You don't have enough Gold!" << endl;
                } else {
                    gold -= cost;
                    weapons_s++;
                    cout << "Thank you for your patronage! What else can I get for you?" << endl;
                }
            }
            break;
        }
        case 3: {
            int cost = 5;
            cout << "How many would you like? (Enter a positive integer, or 0 to cancel)" << endl;
            int num;
            cin >> num;
            if (num == 0) break;
            cost *= num;
            cout << "You want to buy " << num << " (+1) Mythril Rapier(s) for " << cost << " Gold? (y/n)" << endl;
            char confirm;
            cin >> confirm;
            if (confirm == 'y') {
                if (gold < cost) {
                    cout << "You don't have enough Gold!" << endl;
                } else {
                    gold -= cost;
                    weapons_r += num;
                    cout << "Thank you for your patronage! What else can I get for you?" << endl;
                }
            }
            break;
        }
        case 4: {
    cout << "How many suits of armor can I get you? (Enter a positive integer, or 0 to cancel)" << endl;
    int num_armor;
    cin >> num_armor;
    if (num_armor == 0) break;
    int cost = num_armor * 5;
    cout << "You want to buy " << num_armor << " suit(s) of armor for " << cost << " Gold? (y/n)" << endl;
    char confirm;
    cin >> confirm;
    if (confirm == 'y') {
        if (gold < cost) {
            cout << "You don't have enough Gold!" << endl;
        } else {
            gold -= cost;
            armor += num_armor;
            cout << "Thank you for your patronage! What else can I get for you?" << endl;
        }
    }
    break;
}
case 5: {
    cout << "What kind of treasure are you selling?" << endl;
    cout << " 1. Ruby [5 Gold]" << endl;
    cout << " 2. Necklace [10 Gold]" << endl;
    cout << " 3. Book [15 Gold]" << endl;
    cout << " 4. Crystal [20 Gold]" << endl;
    cout << " 5. Gold Bar [50 Gold]" << endl;
    cout << " 6. Cancel" << endl;
    int treasure_choice;
    cin >> treasure_choice;
    if (treasure_choice == 6) break;
    int treasure_value;
    switch (treasure_choice) {
        case 1:
            treasure_value = 5;
            treasures_r++;
            break;
        case 2:
            treasure_value = 10;
            treasures_n++;
            break;
        case 3:
            treasure_value = 15;
            treasures_b++;
            break;
        case 4:
            treasure_value = 20;
            treasures_c++;
            break;
        case 5:
            treasure_value = 50;
            treasures_g++;
            break;
        default:
            cout << "Invalid choice." << endl;
            continue;
    }
    cout << "You want to sell the " << (treasure_choice == 5 ? "Gold Bar" : treasure_choice == 2 ? "Necklace" : treasure_choice == 3 ? "Book" : treasure_choice == 4 ? "Crystal" : "Ruby") << " for " << treasure_value << " Gold? (y/n)" << endl;
    char confirm;
    cin >> confirm;
    if (confirm == 'y') {
        switch (treasure_choice) {
            case 1:
                treasures_r--;
                break;
            case 2:
                treasures_n--;
                break;
            case 3:
                treasures_b--;
                break;
            case 4:
                treasures_c--;
                break;
            case 5:
                treasures_g--;
                break;
            default:
                break;
        }
        gold += treasure_value;
        cout << "Thank you for your patronage! What else can I get for you?" << endl;
    }
    break;
}
case 6: {
    cout << "Are you sure you're finished? You won't be able to buy anything else from me! (y/n)" << endl;
    char confirm;
    cin >> confirm;
    if (confirm == 'y') {
        cout << "Stay safe out there! Goodbye!" << endl;
        return 0;
    }
    break;
}
default: {
    cout << "Invalid choice, please try again." << endl;
    break;
}
    }
            }
        }
    }
}

