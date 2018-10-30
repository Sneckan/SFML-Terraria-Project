#pragma once
#include <SFML/Graphics.hpp>
#include "Entity.h"

class Enemy :public sf::Drawable
{
public:
	Enemy();
	Enemy(sf::Vector2f size);
	~Enemy();

	void setPos(sf::Vector2f newPos);

	bool checkCollision(Entity entity);

	

private:
	sf::RectangleShape enemy;

	virtual void draw(sf::RenderTarget& target, sf::RenderStates states)const;

};

