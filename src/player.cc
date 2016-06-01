#include <iostream>

#include "player.h"

using namespace std;

Player::Player() {
    Texture t;
    if (!t.loadFromFile("res/sprites/player.png")) {
        cerr << "Error: Cannot load player texture\n";
        return;
    }

    health = 3;
}
