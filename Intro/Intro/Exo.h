#pragma once
#include <string>

class Vector2
{
public:

	float x;
	float y;

	Vector2(float, float);

	float GetX();
	float GetY();

	void Set(float x,float y);
};


class Entity
{
public:

	Vector2 position;

	Entity(Vector2);

	Vector2 GetPosition();

	virtual void SetPosition(Vector2 _position) = 0;
};

class AMovable 
{
public :
	Vector2 direction;
	float vitesse;

	AMovable(Vector2, float);

	virtual void SetDirection(Vector2 _direction);

	virtual void SetSpeed(float _vitesse);

	virtual Vector2 Move() = 0;
};

class Alive
{
public:
	float max_life;
	float life;

	Alive(float, float);

	virtual float GetMaxLife();

	virtual float GetLife();

public : virtual void TakeDammage(float dammage);

};

class IaAttacker {
public : 
	virtual void Attack(Alive* target, float dammage) = 0;
};

class StaticObject : public Entity
{
public:
	
	StaticObject(Vector2);

	void SetPosition(Vector2 _position);
};

class BreakableObject : public Entity, public Alive {

public : 

	BreakableObject(Vector2, float, float);

	void SetPosition(Vector2 _position);

	void SetMaxLife(float _life, float _max_life);

	void TakeDammage(float damage) override;

};