#include "button.h"


Button::Button(int x, int y, int w, int h, string lbl) :
    Widget(x, y, w, h), label(lbl) {
}

Button::Button(Vector2i p, Vector2u s, string lbl) :
    Widget(p, s), label(lbl) {
}


void Button::draw(RenderWindow& w) {
}

void Button::handle(Event e) {
}

void Button::update(Time t) {
}

