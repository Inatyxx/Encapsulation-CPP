/*#include "Exo.h"
#include <iostream>
#include <sstream>
#include <string>

Vector2::Vector2(float _x, float _y) : x(_x), y(_y) {

}

float Vector2::GetX() const {
	return x;
}

float Vector2::GetY() const {
	return y;
}

void Vector2::Set(float _x, float _y) {
	x = _x;
	y = _y;
}

void Vector2::Set(std::string _str) {
	x = std::stof(_str);
}

Vector2 Vector2::operator+(const Vector2& other_vector) {
	return Vector2(x + other_vector.x, y + other_vector.y);
}

Vector2 Entity::GetPosition() {
	return position;
}

void Entity::SetPosition(Vector2 _position) {
	position = _position;
}

void AMovable::SetDirection(Vector2 _direction) {
	direction = _direction;
}

void AMovable::SetSpeed(float _vitesse) {
	vitesse = _vitesse;
}

void AMovable::Move() {

}

void Alive::GetMaxLife(float _max_life) {
	life = _max_life;
}

void Alive::GetLife(float _life) {
	life = _life;
}

void Alive::TakeDammage(float _dammage) {
	life -= _dammage;
}

bool Alive::CheckAlive(float _life) {
	if (_life <= 0) {
		return false;
	}
	return true;

}

int main() {
	

	return 0;
}*/