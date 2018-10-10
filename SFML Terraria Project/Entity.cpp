#include "Entity.h"
#include <iostream>


Entity::Entity()
{
	rect.setSize(sf::Vector2f(20.0, 20.0));
	rect.setFillColor(sf::Color::Blue);
	this->moveX = 0.0;
	this->moveY = 0.0;
}

Entity::Entity(sf::RectangleShape rect)
{
	this->rect = rect;
	this->moveX = 0.0;
	this->moveY = 0.0;
}


Entity::~Entity()
{
}

void Entity::movementX(float moveX)
{
	this->moveX = moveX;
}

void Entity::movementY(float moveY)
{
	this->moveY = moveY;
}

void Entity::movementXY(float moveX, float moveY)
{
	this->moveX = moveX;
	this->moveY = moveY;
}

void Entity::movement()
{
	this->rect.move(sf::Vector2f(this->moveX, this->moveY));
}

sf::RectangleShape Entity::getRect()
{
	return this->rect;
}

int Entity::getX()
{
	return rect.getPosition().x;
}

int Entity::getY()
{
	return rect.getPosition().y;
}



void Entity::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	target.draw(rect, states);
}
