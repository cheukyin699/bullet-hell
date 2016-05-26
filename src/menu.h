#ifndef MENU_H
#define MENU_H

#include <memory>
#include <vector>

#include "state.h"
#include "widget.h"

using namespace std;

typedef shared_ptr<Widget> Widget_p;

class MenuState : public State {
private:
    vector<Widget_p> widgets;

public:
    MenuState();

    void handle(Event e);
    void update(Time t);
    void draw(RenderWindow& w);
};

#endif
