#include "Game.h"
#include <iostream>


Game::Game()
{
	enemy.setPos(sf::Vector2f(player.getX() + 100, player.getY() + 100));
}


Game::~Game()
{
}

void Game::Update(sf::Time dt)
{
	
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		player.movementX(1.0 * (dt.asSeconds() * 60));
		player.setDirection(1);
	}

	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		player.movementX(-1.0 * (dt.asSeconds() * 60));
		player.setDirection(3);
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		player.movementY(1.0 * (dt.asSeconds() * 60));
		player.setDirection(4);
	}

	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		player.movementY(-1.0 * (dt.asSeconds() * 60));
		player.setDirection(2);
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
	{
		Projectile projectile(player.getDirection());
		projectile.setPos(sf::Vector2f(player.getX(), player.getY()));
		projectiles.push_back(projectile);
	}

	
	

	
	
	player.movement();
	player.movementXY(0.0, 0.0);
	
	for (int i = 0; i < projectiles.size(); i++)
	{
		projectiles[i].fire();
		if (projectiles[i].getLeft() >= 800 || projectiles[i].getRight() <= 0 || projectiles[i].getBot() <= 0 || projectiles[i].getTop() >= 600)
		{
			projectiles.erase(projectiles.begin()+i);
		}
	}

	std::cout << projectiles.size()<<std::endl;
}

void Game::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	target.draw(player);
	target.draw(enemy);
	for (int i = 0; i < projectiles.size(); i++)
	{
		target.draw(projectiles[i]);
	}
}

