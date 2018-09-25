#include <SFML/Graphics.hpp>
#include "Game.h"

int main()
{
	Game game;
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");
	sf::Clock gameTime;

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		sf::Time elapsed = gameTime.restart();
		game.Update(elapsed);
		window.clear();
		window.draw(game);
		window.display();
	}

	return 0;
}
