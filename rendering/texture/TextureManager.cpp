//
// Created by felix on 12.03.2023.
//

#include "TextureManager.h"

SDL_Texture *TextureManager::loadTexture(const char *fileName) {
    SDL_Surface *tempSurface = IMG_Load(fileName);
    SDL_Texture *texture = Game::gameRenderer->createTextureFromSurface(tempSurface);
    SDL_FreeSurface(tempSurface);

    return texture;
}

void TextureManager::draw(SDL_Texture *texture, SDL_Rect sourceRectangle, SDL_Rect destinationRectangle) {
    Game::gameRenderer->copy(texture, &sourceRectangle, &destinationRectangle);
}
