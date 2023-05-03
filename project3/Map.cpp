// map.cpp

// CSCI 1300 Spring 2023
// Author: Gio Enriquez
// Recitation: 101- Ojsvi Bhalerao
// Project 3
#include "Map.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(nullptr));

    // Initialize the map
    Map map;
    map.randomizeRoomsAndNPCs();

    // Display the intro text
    cout << "Welcome to the dungeon crawler game!" << endl;
    cout << "Your objective is to clear all the rooms and find the exit." << endl;
    cout << "Use the WASD keys to move around and interact with spaces." << endl;
    cout << "Press 'q' to quit the game." << endl;
    cout << endl;

    // Display the initial status
    cout << "STATUS" << endl;
    cout << "Rooms cleared: 0 / " << map.getRoomCount() << endl;
    cout << "NPCs left: " << map.getNPCCount() << " / 5" << endl;
    cout << endl;

    // Display the map
    map.displayMap();
    cout << endl;

    // Main game loop
    while (true) {
        // Get the player's move
        char move;
        cout << "Move (WASD): ";
        cin >> move;

        // Handle the player's move
        if (move == 'q') {
            // Quit the game
            cout << "Quitting the game..." << endl;
            break;
        } else if (move == 'w' || move == 'a' || move == 's' || move == 'd') {
            // Move the player
            bool moved = map.move(move);
            if (!moved) {
                cout << "You cannot move that way." << endl;
            } else {
                // Check if the player has encountered an NPC
                if (map.isNPCLocation(map.getPlayerRow(), map.getPlayerCol())) {
                    map.encounterNPC();
                    cout << "You encountered an NPC!" << endl;
                }

                // Check if the player has entered a new room
                if (map.isRoomLocation(map.getPlayerRow(), map.getPlayerCol())) {
                    bool cleared = map.enterRoom();
                    if (cleared) {
                        cout << "You cleared the room!" << endl;
                        cout << "STATUS" << endl;
                        cout << "Rooms cleared: " << map.getClearedRoomCount() << " / " << map.getRoomCount() << endl;
                        cout << "NPCs left: " << map.getNPCCount() << " / 5" << endl;
                        cout << endl;
                    } else {
                        cout << "You entered a new room." << endl;
                    }
                }

                // Mark the space as explored
                map.exploreSpace(map.getPlayerRow(), map.getPlayerCol());

                // Display the updated map
                map.displayMap();
                cout << endl;
            }
        } else {
            // Invalid move
            cout << "Invalid move." << endl;
        }

        // Check if the game is over
        if (map.isGameOver()) {
            cout << "Congratulations, you cleared the dungeon!" << endl;
            break;
        }
    }

    return 0;
}
