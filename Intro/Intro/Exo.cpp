#include "Exo.h"
#include <iostream>
#include <sstream>

float Vector2::GetX() {
	return x;
}

float Vector2::GetY() {
	return y;
}

void Vector2::Set(float _x, float _y) {
	x = _x;
	y = _y;
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
int main() {
	

	return 0;
}