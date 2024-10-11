#include "Exo.h"
#include <iostream>
#include <sstream>
#include <string>


Vector2::Vector2(float _x, float _y) : x(_x), y(_y) {

}

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

Entity::Entity(Vector2 _position) : position(_position) {

}

Vector2 Entity::GetPosition() {
	return position;
}

void Entity::SetPosition(Vector2 _position) {
	position = _position;
}

AMovable::AMovable(Vector2 _direction, float _vitesse) : direction(_direction), vitesse(_vitesse) {

}

void AMovable::SetDirection(Vector2 _direction) {
	direction = _direction;
}

void AMovable::SetSpeed(float _vitesse) {
	vitesse = _vitesse;
}

Vector2 AMovable::Move() {
	float x = direction.GetX();
	x += vitesse;

	float y = direction.GetY();
	y += vitesse;

	Vector2 new_pos(x, y);
	return new_pos;
}

Alive::Alive(float _life, float _max_life) : life(_life), max_life(_max_life) {

}

float Alive::GetMaxLife() {
	return max_life;
}

float Alive::GetLife() {
	return life;
}

void Alive::TakeDammage(float dammage) {
	life -= dammage;
}

void Attack(Alive* target, float dammage) {
	target->life -= dammage;
}

void StaticObject::Entity::SetPosition(Vector2 _position) {
	position = _position;
}

int main() {
	
	std::cout << "Static Object just created at x, y = " << StaticObject::Entity::position << std::endl;

	return 0;
}