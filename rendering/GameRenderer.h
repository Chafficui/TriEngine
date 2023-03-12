//
// Created by felix on 12.03.2023.
//

#ifndef TRIENGINE_GAMERENDERER_H
#define TRIENGINE_GAMERENDERER_H
#include <SDL.h>

class GameRenderer {
public:
    GameRenderer(SDL_Window* window, int index, Uint32 flags);
    ~GameRenderer();
    void destroy();
    void present();
    void clear();
    void setDrawColor(int r, int g, int b, int a);
    SDL_Texture* createTextureFromSurface(SDL_Surface* surface);
    int copy(SDL_Texture* texture, SDL_Rect* srcRect, SDL_Rect* destRect);
private:
    SDL_Renderer* renderer;
};


#endif //TRIENGINE_GAMERENDERER_H
