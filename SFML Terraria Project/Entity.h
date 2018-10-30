#pragma once
#include <SFML/Graphics.hpp>

class Entity : public sf::Drawable
{
public:
	Entity();
	Entity(sf::RectangleShape rect);
	Entity(sf::Color color,sf::Vector2f size);
	~Entity();

	void movementX(float xMovement);
	void movementY(float yMovement);
	void movementXY(float xMovement, float yMovement);
	void movement();

	int getX();
	int getY();

	sf::Vector2f getPos();
	sf::Vector2f getSize();

protected:
	sf::RectangleShape rect;
	float moveX;
	float moveY;

private:
	

	virtual void draw(sf::RenderTarget& target, sf::RenderStates states)const;



};

