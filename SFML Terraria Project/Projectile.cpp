#include "Projectile.h"



Projectile::Projectile()
{
	projectile.setSize(sf::Vector2f(10.0,10.0));
	projectile.setFillColor(sf::Color::Green);
}

Projectile::Projectile(sf::Vector2f size)
{
	projectile.setSize(size);
	projectile.setFillColor(sf::Color::Green);
}


Projectile::~Projectile()
{
}

void Projectile::fire(int speed)
{
	projectile.move(speed, 0);
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

void Projectile::draw(sf::RenderWindow & window)
{
	window.draw(projectile);
}

void Projectile::setPos(sf::Vector2f newPos)
{
	projectile.setPosition(newPos);
}
