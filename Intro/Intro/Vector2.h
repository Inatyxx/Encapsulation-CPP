#pragma once

#include <string>

class Vector2 {
    float x;
    float y;

public:
    Vector2();
    Vector2(float _x, float _y);

    float GetX() const;
    float GetY() const;

    void SetX(float _x);
    void SetX(std::string _xStr);

    void SetY(float _y);


    Vector2 operator+(const Vector2& _toAdd);

    Vector2 operator-(const Vector2& _toSubstract);

    Vector2 operator+=(const Vector2& _toAdd);

    Vector2 operator-=(const Vector2& _toSubstract);

    Vector2 operator*(const Vector2& _toMultiply);

    Vector2 operator*=(const Vector2& _toMultiply);

    Vector2 operator/(const Vector2& _toDivide);

    Vector2 operator/=(const Vector2& _toDivide);

    Vector2 operator%(const Vector2& _toModulo);

    Vector2 operator%=(const Vector2& _toModulo);
};

