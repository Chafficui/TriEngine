//
// Created by felix on 12.03.2023.
//

#ifndef TRIENGINE_TRANSFORMCOMPONENT_H
#define TRIENGINE_TRANSFORMCOMPONENT_H

#include "../Components.h"
#include "../../utils/Math.h"


struct TransformComponent : public Component {
    Vector2D position;

    TransformComponent(float xPos, float yPos) {
        position.x = xPos;
        position.y = yPos;
    }

    TransformComponent() {
        position.x = .0f;
        position.y = .0f;
    }

    void move(float x, float y) {
        position.x += x;
        position.y += y;
    }

    void move(Vector2D vec) {
        position += vec;
    }
};


#endif //TRIENGINE_TRANSFORMCOMPONENT_H
