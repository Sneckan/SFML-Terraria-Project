#include "Entity.h"



Entity::Entity()
{
	rect.setSize(sf::Vector2f(20.0, 20.0));
	rect.setFillColor(sf::Color::Blue);
}


Entity::~Entity()
{
}

void Entity::moveX(float xMovement)
{
	rect.move(sf::Vector2f(xMovement, 0.0));
}

void Entity::moveY(float yMovement)
{
	rect.move(sf::Vector2f(0.0, yMovement));
}



void Entity::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	target.draw(rect, states);
}
