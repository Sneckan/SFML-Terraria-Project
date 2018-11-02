#include "Entity.h"
#include <iostream>


Entity::Entity()
{
	rect.setSize(sf::Vector2f(20.0, 20.0));
	rect.setFillColor(sf::Color::Blue);
	this->moveX = 0.0;
	this->moveY = 0.0;
	this->movementSpeed = 0.0;

}

Entity::Entity(sf::RectangleShape rect)
{
	this->rect = rect;
	this->moveX = 0.0;
	this->moveY = 0.0;
	this->movementSpeed = 0.0;

}

Entity::Entity(sf::Color color, sf::Vector2f size)
{
	this->rect.setFillColor(color);
	this->rect.setSize(size);
	this->moveX = 0.0;
	this->moveY = 0.0;
	this->movementSpeed = 0.0;
}

Entity::Entity(float movementSpeed)
{
	rect.setSize(sf::Vector2f(20.0, 20.0));
	rect.setFillColor(sf::Color::Blue);
	this->moveX = 0.0;
	this->moveY = 0.0;
	this->movementSpeed = movementSpeed;
}

Entity::Entity(sf::Color color, sf::Vector2f size, float movementSpeed)
{
	this->rect.setFillColor(color);
	this->rect.setSize(size);
	this->moveX = 0.0;
	this->moveY = 0.0;
	this->movementSpeed = movementSpeed;
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
	this->rect.move(sf::Vector2f(this->moveX * this->movementSpeed, this->moveY * this->movementSpeed));
}

void Entity::setPosX(float newPosX)
{
	rect.setPosition(sf::Vector2f(newPosX, rect.getPosition().y));
}

void Entity::setPosY(float newPosY)
{
	rect.setPosition(sf::Vector2f(rect.getPosition().x, newPosY));
}

void Entity::setMovementSpeed(float movementSpeed)
{
	this->movementSpeed = movementSpeed;
}

float Entity::getMovementSpeed()
{
	return movementSpeed;
}

bool Entity::checkCollision(Entity entity)
{
	if (entity.getPos().x + entity.getSize().x > rect.getPosition().x &&
		entity.getPos().y < rect.getPosition().y + rect.getSize().y &&
		entity.getPos().y + entity.getSize().y > rect.getPosition().y &&
		entity.getPos().x < rect.getPosition().x + rect.getSize().x)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int Entity::getX()
{
	return rect.getPosition().x;
}

int Entity::getY()
{
	return rect.getPosition().y;
}

sf::Vector2f Entity::getPos()
{
	return rect.getPosition();
}

sf::Vector2f Entity::getSize()
{
	return rect.getSize();
}



void Entity::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	target.draw(rect, states);
}
