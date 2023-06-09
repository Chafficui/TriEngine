//
// Created by felix on 12.03.2023.
//

#include "Vector2D.h"

Vector2D::Vector2D() {
    x = .0f;
    y = .0f;
}

Vector2D::Vector2D(float x, float y) {
    this->x = x;
    this->y = y;
}

Vector2D &Vector2D::add(const Vector2D &vec) {
    this->x += vec.x;
    this->y += vec.y;
    return *this;
}

Vector2D &Vector2D::add(const float &i) {
    this->x += i;
    this->y += i;
    return *this;
}

Vector2D &Vector2D::subtract(const Vector2D &vec) {
    this->x -= vec.x;
    this->y -= vec.y;
    return *this;
}

Vector2D &Vector2D::subtract(const float &i) {
    this->x -= i;
    this->y -= i;
    return *this;
}

Vector2D &Vector2D::multiply(const Vector2D &vec) {
    this->x *= vec.x;
    this->y *= vec.y;
    return *this;
}

Vector2D &Vector2D::multiply(const float &i) {
    this->x *= i;
    this->y *= i;
    return *this;
}

Vector2D &Vector2D::divide(const Vector2D &vec) {
    this->x /= vec.x;
    this->y /= vec.y;
    return *this;
}

Vector2D &Vector2D::divide(const float &i) {
    this->x /= i;
    this->y /= i;
    return *this;
}

Vector2D &operator+(Vector2D &v1, const Vector2D &v2) {
    return v1.add(v2);
}

Vector2D &operator-(Vector2D &v1, const Vector2D &v2) {
    return v1.subtract(v2);
}

Vector2D &operator*(Vector2D &v1, const Vector2D &v2) {
    return v1.multiply(v2);
}

Vector2D &operator/(Vector2D &v1, const Vector2D &v2) {
    return v1.divide(v2);
}

Vector2D &Vector2D::operator+=(const Vector2D &vec) {
    return this->add(vec);
}

Vector2D &Vector2D::operator-=(const Vector2D &vec) {
    return this->subtract(vec);
}

Vector2D &Vector2D::operator*=(const Vector2D &vec) {
    return this->multiply(vec);
}

Vector2D &Vector2D::operator/=(const Vector2D &vec) {
    return this->divide(vec);
}

Vector2D &Vector2D::operator*(const float &i) {
    return this->multiply(i);
}

Vector2D &Vector2D::operator/(const float &i) {
    return this->divide(i);
}

Vector2D &Vector2D::operator+(const float &i) {
    return this->add(i);
}

Vector2D &Vector2D::operator-(const float &i) {
    return this->subtract(i);
}

Vector2D &Vector2D::operator*=(const float &i) {
    return this->multiply(i);
}

Vector2D &Vector2D::operator/=(const float &i) {
    return this->divide(i);
}

Vector2D &Vector2D::operator+=(const float &i) {
    return this->add(i);
}

Vector2D &Vector2D::operator-=(const float &i) {
    return this->subtract(i);
}

std::ostream &operator<<(std::ostream &stream, const Vector2D &vec) {
    stream << "Vector2D(" << vec.x << ", " << vec.y << ")";
    return stream;
}