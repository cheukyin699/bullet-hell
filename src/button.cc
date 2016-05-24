#include "button.h"


Button::Button(int x, int y, int w, int h, string lbl) :
    pos(Vector2i(x, y)), size(Vector2u(w, h)) {
}

Button::Button(Vector2i p, Vector2u s, string lbl) :
    pos(p), size(s) {
}


void Button::draw(RenderWindow& w) {
}

void Button::handle(Event e) {
}

void Button::update(Time t) {
}

