#ifndef PLAY_H
#define PLAY_H

#include "play.h"

class PlayState : public State {
private:

public:
    PlayState();

    void handle();
    void update(Time);
    void draw(RenderWindow&);
};

#endif
