//
// Created by felix on 12.03.2023.
//

#include "SpriteComponent.h"

SpriteComponent::SpriteComponent(const char *path) {
    setTexture(path);
}

void SpriteComponent::draw() {
    TextureManager::draw(texture, srcRect, destRect);
}

void SpriteComponent::init() {
    transform = &entity->getComponent<TransformComponent>();
    srcRect.x = srcRect.y = 0;
    srcRect.w = srcRect.h = 32;
    destRect.w = destRect.h = 64;
    destRect.x = (int)transform->position.x;
    destRect.y = (int)transform->position.y;
}

void SpriteComponent::setTexture(const char *path) {
    texture = TextureManager::loadTexture(path);
}

void SpriteComponent::update() {
    destRect.x = (int)transform->position.x;
    destRect.y = (int)transform->position.y;
}