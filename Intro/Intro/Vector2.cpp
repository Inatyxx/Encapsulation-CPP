#include "Vector2.h"
#include <cmath>

Vector2::Vector2() : x(0.f), y(0.f) {

}

Vector2::Vector2(float _x, float _y) : x(_x), y(_y) {

}

float Vector2::GetX() const {
    return this->x;
}

float Vector2::GetY() const {
    return this->y;
}

void Vector2::SetX(float _x) {
    this->x = _x;
}

void Vector2::SetX(std::string _xStr) {
    this->x = std::stof(_xStr);
}


void Vector2::SetY(float _y) {
    this->y = _y;
}

Vector2 Vector2::operator+(const Vector2& _toAdd) {
    Vector2 tmp(this->x + _toAdd.GetX(), this->y + _toAdd.GetY());

    return tmp;
}

Vector2 Vector2::operator-(const Vector2& _toSubstract) {
    Vector2 tmp(this->x - _toSubstract.GetX(), this->y - _toSubstract.GetY());

    return tmp;
}

Vector2 Vector2::operator+=(const Vector2& _toAdd) {
    this->x += _toAdd.GetX();
    this->y += _toAdd.GetY();

    return *this;
}

Vector2 Vector2::operator-=(const Vector2& _toSubstract) {
    this->x -= _toSubstract.GetX();
    this->y -= _toSubstract.GetY();

    return *this;
}

Vector2 Vector2::operator*(const Vector2& _toMultiply) {
    Vector2 tmp(this->x * _toMultiply.GetX(), this->y * _toMultiply.GetY());

    return tmp;
}

Vector2 Vector2::operator*=(const Vector2& _toMultiply) {
    this->x *= _toMultiply.GetX();
    this->y *= _toMultiply.GetY();

    return *this;
}

Vector2 Vector2::operator/(const Vector2& _toDivide) {
    Vector2 tmp(this->x / _toDivide.GetX(), this->y / _toDivide.GetY());

    return tmp;
}

Vector2 Vector2::operator/=(const Vector2& _toDivide) {
    this->x /= _toDivide.GetX();
    this->y /= _toDivide.GetY();

    return *this;
}

Vector2 Vector2::operator%(const Vector2& _toModulo) {
    Vector2 tmp(this->std::round(x) % std::round(_toModulo.GetX()), this->std::round(y) % std::round(_toModulo.GetY()));

    return tmp;
}

Vector2 Vector2::operator%=(const Vector2& _toModulo) {
    this->x = static_cast<int>(std::round(this->x)) % static_cast<int>(std::round(_toModulo.GetX()));
    this->y = static_cast<int>(std::round(this->y)) % static_cast<int>(std::round(_toModulo.GetY()));
    
    return *this;
}

int main() {
    return 0;
}


