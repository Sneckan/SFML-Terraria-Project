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

void Enemy::checkCollision(Projectile projectile)
{
	if (projectile.getRight() > enemy.getPosition().x &&
		projectile.getTop() < enemy.getPosition().y + enemy.getSize().y  &&
		projectile.getBot() > enemy.getPosition().y)
	{
		enemy.setPosition(sf::Vector2f(10000.0, 10000.0));
	}
}

void Enemy::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	target.draw(enemy, states);
}
