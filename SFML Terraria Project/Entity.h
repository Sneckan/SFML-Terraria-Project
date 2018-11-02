#pragma once
#include <SFML/Graphics.hpp>

class Entity : public sf::Drawable
{
public:
	Entity();
	Entity(sf::RectangleShape rect);
	Entity(sf::Color color,sf::Vector2f size);
	Entity(float movementSpeed);
	Entity(sf::Color color, sf::Vector2f size,float movementSpeed);
	~Entity();

	void movementX(float xMovement);
	void movementY(float yMovement);
	void movementXY(float xMovement, float yMovement);
	void movement();
	void setPosX(float newPosX);
	void setPosY(float newPosY);

	void setMovementSpeed(float movementSpeed);
	float getMovementSpeed();

	bool checkCollision(Entity entity);

	int getX();
	int getY();

	sf::Vector2f getPos();
	sf::Vector2f getSize();

protected:
	sf::RectangleShape rect;
	float moveX;
	float moveY;
	float movementSpeed;

private:
	

	virtual void draw(sf::RenderTarget& target, sf::RenderStates states)const;



};

