#ifndef MENU_H
#define MENU_H

#include "state.h"

class MenuState : public State {
private:

public:
    MenuState();

    void handle();
    void update(Time);
    void draw(RenderWindow&);
};

#endif
