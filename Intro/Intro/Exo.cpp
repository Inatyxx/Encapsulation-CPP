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
	if (life < 0) life = 0;
}

void Attack(Alive* target, float damage) {
	target->TakeDammage(damage);
}

StaticObject::StaticObject(Vector2 _position) : Entity(_position) {
	std::cout << "Static Object just created at x = " << position.x << ", y = " << position.y << std::endl;
}

void StaticObject::SetPosition(Vector2 _position) {
	position = _position;
}

BreakableObject::BreakableObject(Vector2 _position, float _life, float _max_life)
	: Entity(_position), Alive(_life, _max_life) {
	std::cout << "Breakable Object just created at x = " << position.x
		<< ", y = " << position.y
		<< " with " << max_life << " life" << std::endl;
}

void BreakableObject::SetPosition(Vector2 _position) {
	position = _position;
}

void BreakableObject::TakeDammage(float damage) {
	Alive::TakeDammage(damage);
	if (life <= 0) {
		std::cout << "Breakable Object just broke" << std::endl;
	}
}

void BreakableObject::SetMaxLife(float _life, float _max_life) {
	max_life = _max_life;
	life = _life;
}

int main() {

	Vector2 initialPosition(5, 10);
	StaticObject obj(initialPosition);

	BreakableObject breakableObj(Vector2(15, 20), 50, 100); 
	breakableObj.TakeDammage(30);
	breakableObj.TakeDammage(70); 
	return 0;
}