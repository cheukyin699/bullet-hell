#ifndef BUTTON_H
#define BUTTON_H

#include <string>

#include "widget.h"

using namespace std;

class Button : public Widget {
private:
    string label;

public:
    Button(int x, int y, int w, int h, string lbl);
    Button(Vector2i p, Vector2u s, string lbl);

    void draw(RenderWindow& w);
    void handle(Event e);
    void update(Time t);

};

#endif
