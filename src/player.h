#ifndef PLAYER_H
#define PLAYER_H

#include <SFML/Graphics.hpp>

using namespace sf;

class Player : public Sprite {
    private:
        int health;

    public:
        Player();
};

#endif
