//
// Created by felix on 12.03.2023.
//

#ifndef TRIENGINE_POSITIONCOMPONENT_H
#define TRIENGINE_POSITIONCOMPONENT_H


class PositionComponent : public Component {
private:
    int x;
    int y;
public:
    PositionComponent(int xPos, int yPos) {
        x = xPos;
        y = yPos;
    }

    PositionComponent() {
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


#endif //TRIENGINE_POSITIONCOMPONENT_H
