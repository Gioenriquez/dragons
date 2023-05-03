// dungeon_game.h

// CSCI 1300 Spring 2023
// Author: Gio Enriquez
// Recitation: 101- Ojsvi Bhalerao
// Project 3
#ifndef DUNGEON_GAME_H
#define DUNGEON_GAME_H

#include <vector>

class DungeonGame {
public:
    DungeonGame();
    void start();

private:
    // Variables to keep track of player inventory and game state
    int gold_;
    int ingredients_;
    int cookware_p_;
    int cookware_f_;
    int cookware_c_;
    int weapons_c_;
    int weapons_s_;
    int weapons_r_;
    int weapons_b_;
    int weapons_l_;
    int armor_;
    int treasures_r_;
    int treasures_n_;
    int treasures_b_;
    int treasures_c_;
    int treasures_g_;
    std::vector<std::string> defeated_monsters_;
    std::vector<std::string> remaining_monsters_;
    std::vector<std::string> weapons_;

    // Helper functions for gameplay mechanics
    void print_inventory();
    void print_monster_encounter(std::string monster_name);
    bool has_weapons();
    bool has_armor();
    int party_weapon_strength();
    int party_armor_strength();
    int monster_challenge_rating();
    bool party_wins_battle(int party_strength, int monster_challenge_rating);
    void resolve_battle(bool party_wins);
    void resolve_loss();
    void decrease_fullness_levels();
    bool has_remaining_monsters();
    void add_defeated_monster(std::string monster_name);
    void remove_remaining_monster(std::string monster_name);
};

#endif // DUNGEON_GAME_H
