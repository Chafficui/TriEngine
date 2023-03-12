#include "Game.h"

Game* game = nullptr;

int main([[maybe_unused]] int argc, [[maybe_unused]] char* argv[]) {
	game = new Game();

	if (!game->init("TriEngine", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, false)) {
		std::cout << "Failed to start" << std::endl;
	}
	else {
        const int FPS = 60;
        const int frameDelay = 1000 / FPS;

        Uint32 frameStart;
        Uint32 frameTime;

		while (game->running()) {
            frameStart = SDL_GetTicks(); // milliseconds since SDL was initialized
			game->handleEvents();
			game->update(); // should render and update be in seperate threads?
			game->render();

            frameTime = SDL_GetTicks() - frameStart;
            if (frameDelay > frameTime) {
                SDL_Delay(frameDelay - frameTime);
            }
		}
	}

	game->clean();

	return 0;
}