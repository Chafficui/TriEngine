//
// Created by felix on 12.03.2023.
//

#ifndef TRIENGINE_SPRITECOMPONENT_H
#define TRIENGINE_SPRITECOMPONENT_H

#include "../../rendering/texture/TextureManager.h"
#include "../Components.h"

class SpriteComponent : public Component {
private:
    TransformComponent *transform{};
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
