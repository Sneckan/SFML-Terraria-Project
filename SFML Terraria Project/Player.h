#pragma once
#include "Entity.h"
class Player :
	public Entity
{
public:
	Player();
	~Player();
	void setDirection(int direction);
	int getDirection();

private:
	int Health;
	int direction;
};

