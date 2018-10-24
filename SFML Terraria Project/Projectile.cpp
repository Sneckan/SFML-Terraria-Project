#include "Projectile.h"



Projectile::Projectile()
{
	projectile.setSize(sf::Vector2f(10.0,10.0));
	projectile.setFillColor(sf::Color::Green);
	this->direction = 1;
}

Projectile::Projectile(int direction)
{
	projectile.setSize(sf::Vector2f(10.0, 10.0));
	projectile.setFillColor(sf::Color::Green);
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
		projectile.move(1, 0);
		break;

	case 2:
		projectile.move(0, -1);
		break;

	case 3:
		projectile.move(-1, 0);
		break;
		
	case 4:
		projectile.move(0, 1);
		break;

	}
}

int Projectile::getRight()
{
	return projectile.getPosition().x + projectile.getSize().x;
}

int Projectile::getLeft()
{
	return projectile.getPosition().x;
}

int Projectile::getTop()
{
	return projectile.getPosition().y;
}

int Projectile::getBot()
{
	return projectile.getPosition().y + projectile.getSize().y;
}


void Projectile::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	target.draw(projectile, states);
}

void Projectile::setPos(sf::Vector2f newPos)
{
	projectile.setPosition(newPos);
}
