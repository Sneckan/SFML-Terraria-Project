#pragma once
#include <SFML/Graphics.hpp>

class Projectile : public sf::Drawable
{
public:
	Projectile();

	Projectile(int direction);

	~Projectile();

	void fire();

	int getRight();
	int getLeft();
	int getTop();
	int getBot();


	virtual void draw(sf::RenderTarget& target, sf::RenderStates states)const;

	void setPos(sf::Vector2f newPos);

private:
	sf::RectangleShape projectile;
	int direction;
};

