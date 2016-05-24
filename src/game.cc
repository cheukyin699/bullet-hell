#include <SFML/Graphics.hpp>

#include "game.h"

using namespace sf;

const char* Game::TITLE = "Bullet Hell";

Game::Game() {
    states.push(State_p(new MenuState()));
}

void Game::run() {
    // Initialize everything
    RenderWindow w(VideoMode(WIDTH, HEIGHT), TITLE, Style::Close);
    Clock clock;
    Event evt;

    while (w.isOpen()) {
        // Event handling
        while (w.pollEvent(evt)) {
            switch (evt.type) {
                case Event::Closed:
                    w.close();
                    break;
                default:
                    states.front()->handle(evt);
                    break;
            }
        }

        // Update
        Time elapsed = clock.getElapsedTime();
        states.front()->update(elapsed);

        // Drawing
        w.clear();

        states.front()->draw(w);

        w.display();
    }
}
