//
// Created by felix on 12.03.2023.
//

#include "GameRenderer.h"

GameRenderer::GameRenderer(SDL_Window *window, int index, Uint32 flags) {
    renderer = SDL_CreateRenderer(window, index, flags);
}

GameRenderer::~GameRenderer() = default;

void GameRenderer::destroy() {
    SDL_DestroyRenderer(renderer);
}

void GameRenderer::present() {
    SDL_RenderPresent(renderer);
}

void GameRenderer::clear() {
    SDL_RenderClear(renderer);
}

void GameRenderer::setDrawColor(int r, int g, int b, int a) {
    SDL_SetRenderDrawColor(renderer, r, g, b, a);
}

SDL_Texture *GameRenderer::createTextureFromSurface(SDL_Surface *surface) {
    return SDL_CreateTextureFromSurface(renderer, surface);
}

int GameRenderer::copy(SDL_Texture *texture, SDL_Rect *srcRect, SDL_Rect *destRect) {
    return SDL_RenderCopy(renderer, texture, srcRect, destRect);
}
