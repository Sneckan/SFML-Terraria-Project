#include <SFML/Graphics.hpp>
#include "Game.h"
#include <string>
#include <sstream>


int main()
{
	int windowX = 800;
	int windowY = 600;
	Game game(windowX,windowY);
	sf::RenderWindow window(sf::VideoMode(windowX, windowY), "SFML works!");
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
