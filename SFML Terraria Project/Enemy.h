#pragma once
#include <SFML/Graphics.hpp>
#include "Entity.h"

class Enemy :public Entity
{
public:
	Enemy();
	Enemy(sf::Vector2f size);
	~Enemy();

	void setPos(sf::Vector2f newPos);


	

private:

};

