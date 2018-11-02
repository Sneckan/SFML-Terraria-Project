#include "Player.h"



Player::Player()
{
	this->direction = 1;
}

Player::Player(float movementSpeed):Entity(movementSpeed)
{
}




Player::~Player()
{
}

void Player::setDirection(int direction)
{
	this->direction = direction;
}

int Player::getDirection()
{
	return this->direction;
}
