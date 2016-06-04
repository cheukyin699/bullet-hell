#ifndef ENEMY_H
#define ENEMY_H

#include <SFML/Graphics.hpp>

using namespace sf;

class Enemy : public Sprite {
    private:
        int health;

    public:
        Enemy(const char*);
};

#endif

