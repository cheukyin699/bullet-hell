#include "menu.h"

MenuState::MenuState() {
}

void MenuState::handle(Event e) {
    switch (e.type) {
    default:
        break;
    }
}

void MenuState::update(Time t) {
    for (auto&& w : widgets) {
        w->update(t);
    }
}

void MenuState::draw(RenderWindow& w) {
    for (auto&& w : widgets) {
        w->draw(w);
    }
}

