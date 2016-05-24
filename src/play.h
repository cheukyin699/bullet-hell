#ifndef PLAY_H
#define PLAY_H

#include "state.h"

class PlayState : public State {
private:

public:
    PlayState();

    void handle(Event e);
    void update(Time t);
    void draw(RenderWindow& w);
};

#endif
