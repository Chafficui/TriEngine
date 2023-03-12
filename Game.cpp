//
// Created by felix on 11.03.2023.
//

#include "Game.h"
#include "ecs/Components.h"

Game::Game() = default;

Game::~Game() = default;

GameRenderer* Game::gameRenderer = nullptr;

Manager manager;
auto& newPlayer(manager.addEntity());

int Game::init(const char* title, int x, int y, int width, int height, bool fullscreen) {
    int flags = 0;
    if (fullscreen) {
        flags = SDL_WINDOW_FULLSCREEN;
    }

    if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
        std::cout << "SDL2 Subsystems Initialized..." << std::endl;

        window = SDL_CreateWindow(title, x, y, width, height, flags);
        if (window) {
            std::cout << "Window created" << std::endl;

            gameRenderer = new GameRenderer(window, -1, 0);
            if (gameRenderer) {
                gameRenderer->setDrawColor(43, 43, 43, 255);
                std::cout << "Renderer created" << std::endl;
                isRunning = true;

                newPlayer.addComponent<TransformComponent>(100, 100);
                newPlayer.addComponent<SpriteComponent>("assets/Unbenannt.png");

                return 1;
            }
        }
    }
    isRunning = false;
    return 0;
}

void Game::handleEvents() {
    SDL_Event event;
    SDL_PollEvent(&event);
    switch (event.type) {
        case SDL_QUIT:
            isRunning = false;
            break;
        default:
            break;
    }
}

void Game::update() {
    manager.update();
}

void Game::render() {
    gameRenderer->clear();

    manager.draw();

    gameRenderer->present();
}

void Game::clean() {
    SDL_DestroyWindow(window);
    gameRenderer->destroy();
    SDL_Quit();
    std::cout << "Game cleaned" << std::endl;
}