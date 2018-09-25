#pragma once

#include <SFML/Graphics.hpp>
#include "Entity.h"

class Game : public sf::Drawable
{
public:
	Game();
	~Game();

	void Update(sf::Time dt);

private:
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	Entity player;
};

