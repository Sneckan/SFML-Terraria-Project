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
		player.moveX(1.0 * (dt.asSeconds()*60));
	}

	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		player.moveX(-1.0 * (dt.asSeconds() * 60));
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		player.moveY(1.0 * (dt.asSeconds() * 60));
	}

	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		player.moveY(-1.0 * (dt.asSeconds() * 60));
	}



	

}

void Game::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	target.draw(player);
}

