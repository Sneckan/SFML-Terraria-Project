#pragma once
#include <SFML/Graphics.hpp>

class Projectile
{
public:
	Projectile();

	Projectile(sf::Vector2f size);

	~Projectile();

	void fire(int speed);

	int getRight();
	int getLeft();
	int getTop();
	int getBot();

	void draw(sf::RenderWindow &window);
	void setPos(sf::Vector2f newPos);

private:
	sf::RectangleShape projectile;
};

