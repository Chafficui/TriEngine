//
// Created by felix on 11.03.2023.
//

#ifndef TRIENGINE_GAME_H
#define TRIENGINE_GAME_H
#include "SDL.h"
#include "SDL_image.h"
#include "rendering/GameRenderer.h"
#include <iostream>

class Game {
public:
    Game();
    ~Game();

    int init(const char* title, int x, int y, int width, int height, bool fullscreen);

    void handleEvents();
    void update();
    void render();
    void clean();

    static GameRenderer* gameRenderer;

    [[nodiscard]] bool running() const { return isRunning; }

private:
    bool isRunning{};
    SDL_Window* window{};
};

#endif //TRIENGINE_GAME_H
