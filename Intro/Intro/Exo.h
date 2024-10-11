#pragma once
#include <string>

class Vector2
{
public:


	float x;
	float y;

	float GetX();
	float GetY();

	void Set(float x,float y);
};


class Entity
{
public:

	Vector2 position;

	Entity(float x, float y) {
		position.Set(x, y);
	
	}
	Vector2 GetPosition();

	virtual void SetPosition(Vector2 _position);
};

class AMovable 
{
public :
	Vector2 direction;
	float vitesse;

	AMovable(float _vitesse, float x, float y) {
		vitesse = _vitesse;
		direction.Set(x, y);
	}

	virtual void SetDirection(Vector2 _direction);

	virtual void SetSpeed(float _vitesse);

	virtual void Move() = 0;
};

class Alive
{
public:
	float max_life;
	float life;

	Alive(float _life, float _max_life) {
		life = _life;
		max_life = _max_life;
	}
	
	virtual void GetMaxLife(float _max_life);

	virtual void GetLife(float _life);

	virtual void TakeDammage(float _dammage);

	virtual bool CheckAlive(float _life);
};

class IaAttacker {

};
