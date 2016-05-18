#ifndef MENU_H
#define MENU_H

#include "state.h"

class MenuState : public State {
private:

public:
    MenuState();

    void handle(Event e);
    void update(Time t);
    void draw(RenderWindow& w);
};

#endif
