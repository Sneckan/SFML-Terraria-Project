#include "Entity.h"
#include <iostream>


Entity::Entity()
{
	rect.setSize(sf::Vector2f(20.0, 20.0));
	rect.setFillColor(sf::Color::Blue);
	this->moveX = 0.0;
	this->moveY = 0.0;
}


Entity::~Entity()
{
}

void Entity::movementX(float xMovement)
{
	this->moveX = xMovement;
}

void Entity::movementY(float yMovement)
{
	this->moveY = yMovement;
}

void Entity::movement()
{
	this->rect.move(sf::Vector2f(this->moveX, this->moveY));
}



void Entity::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	target.draw(rect, states);
}
