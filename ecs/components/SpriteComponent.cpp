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
    positionComponent = &entity->getComponent<PositionComponent>();
    srcRect.x = srcRect.y = 0;
    srcRect.w = srcRect.h = 32;
    destRect.w = destRect.h = 64;
    destRect.x = positionComponent->getX();
    destRect.y = positionComponent->getY();
}

void SpriteComponent::setTexture(const char *path) {
    texture = TextureManager::loadTexture(path);
}

void SpriteComponent::update() {
    destRect.x = positionComponent->getX();
    destRect.y = positionComponent->getY();
}