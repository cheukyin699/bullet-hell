#include <iostream>

#include "bullet.h"

using namespace std;

Bullet::Bullet() {
    Texture t;
    if (!t.loadFromFile("res/img/bullet.png")) {
        cerr << "Error: Cannot load enemy texture\n";
        return;
    }
}
