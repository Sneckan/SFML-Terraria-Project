#pragma once
#include <SFML/Graphics.hpp>

class Entity : public sf::Drawable
{
public:
	Entity();
	Entity(sf::RectangleShape rect);
	~Entity();

	void movementX(float xMovement);
	void movementY(float yMovement);
	void movementXY(float xMovement, float yMovement);
	void movement();

	sf::RectangleShape getRect();
	int getX();
	int getY();

private:
	sf::RectangleShape rect;
	float moveX;
	float moveY;

	virtual void draw(sf::RenderTarget& target, sf::RenderStates states)const;



};

