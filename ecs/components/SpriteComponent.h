//
// Created by felix on 12.03.2023.
//

#ifndef TRIENGINE_SPRITECOMPONENT_H
#define TRIENGINE_SPRITECOMPONENT_H

#include "../EntityComponentSystem.h"
#include "../../rendering/texture/TextureManager.h"
#include "SDL.h"
#include "PositionComponent.h"

class SpriteComponent : public Component {
private:
    PositionComponent *positionComponent{};
    SDL_Texture *texture{};
    SDL_Rect srcRect{}, destRect{};
public:
    SpriteComponent() = default;

    explicit SpriteComponent(const char *path);

    void init() override;

    void update() override;

    void draw() override;

    void setTexture(const char *path);
};

#endif //TRIENGINE_SPRITECOMPONENT_H
