//
// Created by felix on 12.03.2023.
//

#ifndef TRIENGINE_VECTOR2D_H
#define TRIENGINE_VECTOR2D_H
#include <iostream>

class Vector2D {
public:
    float x;
    float y;

    Vector2D();

    Vector2D(float x, float y);

    Vector2D &add(const Vector2D &vec);

    Vector2D &add(const float &i);

    Vector2D &subtract(const Vector2D &vec);

    Vector2D &subtract(const float &i);

    Vector2D &multiply(const Vector2D &vec);

    Vector2D &multiply(const float &i);

    Vector2D &divide(const Vector2D &vec);

    Vector2D &divide(const float &i);

    friend Vector2D &operator+(Vector2D &v1, const Vector2D &v2);

    friend Vector2D &operator-(Vector2D &v1, const Vector2D &v2);

    friend Vector2D &operator*(Vector2D &v1, const Vector2D &v2);

    friend Vector2D &operator/(Vector2D &v1, const Vector2D &v2);

    Vector2D &operator+=(const Vector2D &vec);

    Vector2D &operator-=(const Vector2D &vec);

    Vector2D &operator*=(const Vector2D &vec);

    Vector2D &operator/=(const Vector2D &vec);

    Vector2D &operator*(const float &i);

    Vector2D &operator/(const float &i);

    Vector2D &operator+(const float &i);

    Vector2D &operator-(const float &i);

    Vector2D &operator*=(const float &i);

    Vector2D &operator/=(const float &i);

    Vector2D &operator+=(const float &i);

    Vector2D &operator-=(const float &i);

    friend std::ostream &operator<<(std::ostream &stream, const Vector2D &vec);
};


#endif //TRIENGINE_VECTOR2D_H
