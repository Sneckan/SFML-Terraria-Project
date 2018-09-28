#include "Game.h"


Game::Game()
{

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
}

void Game::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	target.draw(player);
}

