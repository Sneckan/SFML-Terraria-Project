#include "Enemy.h"



Enemy::Enemy()
{
	enemy.setSize(sf::Vector2f(20.0,20.0));
	enemy.setFillColor(sf::Color::Red);
}

Enemy::Enemy(sf::Vector2f size)
{
	enemy.setSize(size);
	enemy.setFillColor(sf::Color::Red);
}


Enemy::~Enemy()
{
}

void Enemy::setPos(sf::Vector2f newPos)
{
	enemy.setPosition(newPos);
}

bool Enemy::checkCollision(Entity entity)
{
	if (entity.getPos().x + entity.getSize().x > enemy.getPosition().x &&
		entity.getPos().y < enemy.getPosition().y + enemy.getSize().y  &&
		entity.getPos().y+entity.getSize().y > enemy.getPosition().y &&
		entity.getPos().x < enemy.getPosition().x + enemy.getSize().x)
	{
		return true;
	}
	else
	{
		return false;
	}
}


void Enemy::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	target.draw(enemy, states);
}
