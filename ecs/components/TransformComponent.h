//
// Created by felix on 12.03.2023.
//

#ifndef TRIENGINE_TRANSFORMCOMPONENT_H
#define TRIENGINE_TRANSFORMCOMPONENT_H
#include "../Components.h"


class TransformComponent : public Component {
private:
    int x;
    int y;
public:
    TransformComponent(int xPos, int yPos) {
        x = xPos;
        y = yPos;
    }

    TransformComponent() {
        x = 0;
        y = 0;
    }

    [[nodiscard]] int getX() const {
        return x;
    }

    [[nodiscard]] int getY() const {
        return y;
    }

    void setX(int xPos) {
        x = xPos;
    }

    void setY(int yPos) {
        y = yPos;
    }
};


#endif //TRIENGINE_TRANSFORMCOMPONENT_H
