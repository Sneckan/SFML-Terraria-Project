#pragma once

#include <SFML/Graphics.hpp>
class Game : public sf::Drawable
{
public:
	Game();
	~Game();

	void Update(sf::Time dt);

private:
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

};

