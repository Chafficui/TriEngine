//
// Created by felix on 13.03.2023.
//

#ifndef TRIENGINE_KEYBOARD_H
#define TRIENGINE_KEYBOARD_H
#include <SDL.h>
#include <vector>
#include <algorithm>

class KeyboardListener {
public:
    virtual void onKeyPress(int key) = 0;
    virtual void onKeyRelease(int key) = 0;
};

class Keyboard {
public:
    static bool isKeyPressed(int key);
    static bool isKeyReleased(int key);
    static bool isKeyDown(int key);
    static bool isKeyUp(int key);
    static void update();
    static void addListener(KeyboardListener* listener);
    static void removeListener(KeyboardListener* listener);
    static void handleEvent(SDL_Event& event);

private:
    static bool keys[SDL_NUM_SCANCODES];
    static bool keysDown[SDL_NUM_SCANCODES];
    static bool keysUp[SDL_NUM_SCANCODES];
    static std::vector<KeyboardListener*> listeners;
};



#endif //TRIENGINE_KEYBOARD_H
