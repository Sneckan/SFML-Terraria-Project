#pragma once
#include <SFML/Graphics.hpp>
#include "Entity.h"

class Projectile : public /*sf::Drawable,*/ Entity
{
public:
	Projectile();

	Projectile(int direction);

	~Projectile();

	void fire();

	int getRight();
	int getLeft();
	int getTop();
	int getBot();



	void setPos(sf::Vector2f newPos);

private:
	sf::RectangleShape projectile;
	int direction;
};

