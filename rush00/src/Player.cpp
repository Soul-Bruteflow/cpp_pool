//
// Created by bruteflow on 10/7/18.
//

#include <Player.hpp>

#include "Player.hpp"

/* Default constructor */
Player::Player()
:_pos(), _model('O')
{}

/* Copy constructor */
Player::Player(Player const &src)
:_pos(src._pos), _model(src._model)
{}

/* Default destructor */
Player::~Player()
{}

/* Assignment operator overload (Update) */
Player &Player::operator=(Player const &rhs)
{
	/* this->data = rhs.data */
	_pos = rhs._pos;
	_model = rhs._model;
	return *this;
}

Vec2i Player::getPosition() const
{
	return _pos;
}

void Player::setPosition(Vec2i pos)
{
	_pos = pos;
}

void Player::setPosition(int_fast16_t x, int_fast16_t y)
{
	_pos.setXY(x, y);
}

char Player::getModel() const
{
	return _model;
}

void Player::setModel(char model)
{
	_model = model;
}

int_fast16_t Player::getPosX() const
{
	return _pos.getX();
}

int_fast16_t Player::getPosY() const
{
	return _pos.getY();
}

void Player::setPosX(int_fast16_t x)
{
	_pos.setX(x);
}

void Player::setPosY(int_fast16_t y)
{
	_pos.setY(y);
}
