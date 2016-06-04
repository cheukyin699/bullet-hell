#include "enemy.h"

Enemy::Enemy(const char* fn) {
    Texture t;
    if (!t.loadFromFile(fn)) {
        cerr << "Error: Cannot load enemy texture\n";
        return;
    }
}
