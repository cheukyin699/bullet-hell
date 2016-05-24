#ifndef GAME_H
#define GAME_H

#include <queue>
#include <memory>

#include "state.h"
#include "menu.h"
#include "game.h"

using namespace std;

typedef unique_ptr<State> State_p;

class Game {
private:
    queue<State_p> states;

public:
    Game();

    void run();

    static const unsigned WIDTH = 700;
    static const unsigned HEIGHT = 700;
    static const char*    TITLE;

};

#endif
