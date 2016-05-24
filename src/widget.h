#ifndef WIDGET_H
#define WIDGET_H

#include <SFML/Graphics.hpp>

using namespace sf;

class Widget {
public:
    Vector2i pos;
    Vector2u size;

    Widget(int x, int y, int w, int h);
    Widget(Vector2i pos, Vector2u size);

    virtual void draw(RenderWindow& w) = 0;
    virtual void handle(Event e) = 0;
    virtual void update(Time t) = 0;

};

#endif
