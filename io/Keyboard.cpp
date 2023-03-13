//
// Created by felix on 13.03.2023.
//

#include "Keyboard.h"

bool Keyboard::isKeyPressed(int key) {
    return keys[key];
}

bool Keyboard::isKeyReleased(int key) {
    return keysUp[key];
}

bool Keyboard::isKeyDown(int key) {
    return keysDown[key];
}

bool Keyboard::isKeyUp(int key) {
    return !keysDown[key];
}

void Keyboard::addListener(KeyboardListener* listener) {
    listeners.push_back(listener);
}

void Keyboard::removeListener(KeyboardListener* listener) {
    auto it = std::find(listeners.begin(), listeners.end(), listener);
    if (it != listeners.end()) {
        listeners.erase(it);
    }
}

void Keyboard::update() {
    for (int i = 0; i < SDL_NUM_SCANCODES; i++) {
        if (keysDown[i]) {
            for (auto listener : listeners) {
                listener->onKeyPress(i);
            }
        }
        if (keysUp[i]) {
            for (auto listener : listeners) {
                listener->onKeyRelease(i);
            }
        }
        keysUp[i] = false;
        keysDown[i] = false;
    }
}

void Keyboard::handleEvent(SDL_Event& event) {
    switch (event.type) {
        case SDL_KEYDOWN:
            keys[event.key.keysym.scancode] = true;
            keysDown[event.key.keysym.scancode] = true;
            keysUp[event.key.keysym.scancode] = false;
            break;
        case SDL_KEYUP:
            keys[event.key.keysym.scancode] = false;
            keysDown[event.key.keysym.scancode] = false;
            keysUp[event.key.keysym.scancode] = true;
            break;
        default:
            break;
    }
}

bool Keyboard::keys[SDL_NUM_SCANCODES];

bool Keyboard::keysDown[SDL_NUM_SCANCODES];

bool Keyboard::keysUp[SDL_NUM_SCANCODES];
