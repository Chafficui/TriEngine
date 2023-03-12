//
// Created by felix on 12.03.2023.
//

#ifndef TRIENGINE_TEXTUREMANAGER_H
#define TRIENGINE_TEXTUREMANAGER_H

#include "../../Game.h"


class TextureManager {
public:
    static SDL_Texture *loadTexture(const char *fileName);
    static void draw(SDL_Texture* texture, SDL_Rect sourceRectangle, SDL_Rect destinationRectangle);
};


#endif //TRIENGINE_TEXTUREMANAGER_H
