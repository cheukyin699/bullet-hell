#ifndef STATE_H
#define STATE_H

#include <SFML/Graphics.hpp>

using namespace sf;

enum Mode {
    NONE, MENU, PLAYING
};

class State {
private:
    Mode m = NONE;

public:
    virtual void handle() = 0;
    virtual void update(Time) = 0;
    virtual void draw(RenderWindow&) = 0;
};

#endif
