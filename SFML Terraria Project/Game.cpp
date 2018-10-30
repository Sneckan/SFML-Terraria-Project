#include "Game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>


Game::Game()
{
	enemy.setPos(sf::Vector2f(player.getX() + 100, player.getY() + 100));
	this->windowX = 800;
	this->windowY = 600;
}

Game::Game(int windowX, int windowY)
{
	enemy.setPos(sf::Vector2f(player.getX() + 100, player.getY() + 100));
	this->windowX = windowX;
	this->windowY = windowY;
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
		
		if (projectiles[i].getLeft() >= windowX || projectiles[i].getRight() <= 0 || projectiles[i].getBot() <= 0 || projectiles[i].getTop() >= windowY)
		{
			projectiles.erase(projectiles.begin()+i);
		}

		else if (enemy.checkCollision(projectiles[i]))
		{
			std::srand(std::time(nullptr));
			float randX = std::rand()%this->windowX;
			float randY = std::rand()%this->windowY;
			enemy.setPos(sf::Vector2f(randX,randY));
			std::cout << randX << " " << randY <<std::endl;


			projectiles.erase(projectiles.begin() + i);
		}

	}



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

