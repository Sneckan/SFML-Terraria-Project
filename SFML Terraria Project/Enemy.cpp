#include "Enemy.h"



Enemy::Enemy():Entity(sf::Color(sf::Color::Red), sf::Vector2f(20.0, 20.0))
{
	
}

Enemy::Enemy(sf::Vector2f size) :Entity(sf::Color(sf::Color::Red), size)
{

}




Enemy::~Enemy()
{
}

void Enemy::setPos(sf::Vector2f newPos)
{
	rect.setPosition(newPos);
}

