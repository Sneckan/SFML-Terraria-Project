#pragma once
#include <SFML/Graphics.hpp>

class Entity : public sf::Drawable
{
public:
	Entity();
	~Entity();

	void moveX(float xMovement);
	void moveY(float yMovement);

private:
	sf::RectangleShape rect;

	virtual void draw(sf::RenderTarget& target, sf::RenderStates states)const;



};

