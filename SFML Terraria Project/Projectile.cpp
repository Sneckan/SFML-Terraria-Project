#include "Projectile.h"



Projectile::Projectile():Entity()
{

	this->direction = 1;
}

Projectile::Projectile(int direction):Entity(sf::Color(sf::Color::Green),sf::Vector2f(10.0, 10.0))
{
	this->direction = direction;
}


Projectile::~Projectile()
{
}

void Projectile::fire()
{
	switch (direction)
	{
	default:
		break;

	case 1:
		rect.move(1, 0);
		break;

	case 2:
		rect.move(0, -1);
		break;

	case 3:
		rect.move(-1, 0);
		break;
		
	case 4:
		rect.move(0, 1);
		break;

	}
}

int Projectile::getRight()
{
	return rect.getPosition().x + rect.getSize().x;
}

int Projectile::getLeft()
{
	return rect.getPosition().x;
}

int Projectile::getTop()
{
	return rect.getPosition().y;
}

int Projectile::getBot()
{
	return rect.getPosition().y + rect.getSize().y;
}


void Projectile::setPos(sf::Vector2f newPos)
{
	rect.setPosition(newPos);
}
