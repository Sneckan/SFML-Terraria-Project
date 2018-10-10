#include "Game.h"


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
	}

	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		player.movementX(-1.0 * (dt.asSeconds() * 60));
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		player.movementY(1.0 * (dt.asSeconds() * 60));
	}

	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		player.movementY(-1.0 * (dt.asSeconds() * 60));
	}


	
	

	
	
	player.movement();
	player.movementXY(0.0, 0.0);
}

void Game::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	target.draw(player);
	target.draw(enemy);
}

