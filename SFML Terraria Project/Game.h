#pragma once

#include <SFML/Graphics.hpp>
#include "Entity.h"
#include "Player.h"
#include "Enemy.h"
#include "Projectile.h"
#include <vector>

class Game : public sf::Drawable
{
public:
	Game();
	~Game();

	void Update(sf::Time dt);
	

private:
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	Player player;
	Enemy enemy;
	std::vector<Projectile> projectiles;
};

