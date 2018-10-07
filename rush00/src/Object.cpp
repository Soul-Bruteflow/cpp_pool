//
// Created by bruteflow on 10/7/18.
//

#include <Object.hpp>

#include "Object.hpp"

/* Default constructor */
Object::Object()
:_pos(), _isAlive(true)
{}

Object::Object(int_fast16_t x, int_fast16_t y)
:_pos(x, y)
{}

/* Copy constructor */
Object::Object(Object const &src)
:_pos(src._pos), _isAlive(false)
{}

/* Default destructor */
Object::~Object()
{}

/* Assignment operator overload (Update) */
Object &Object::operator=(Object const &rhs)
{
	/* this->data = rhs.data */
	_pos = rhs._pos;
	return *this;
}

void Object::update()
{
	_pos.setY(_pos.getY() + static_cast<uint_fast16_t>(1));
}

Vec2i Object::getPos() const
{
	return _pos;
}

void Object::setPos(Vec2i pos)
{
	_pos = pos;
}

int_fast16_t Object::getPosX() const
{
	return _pos.getX();
}

int_fast16_t Object::getPosY() const
{
	return _pos.getY();
}

bool Object::isAlive() const
{
	return _isAlive;
}

void Object::setIsAlive(bool state)
{
	_isAlive = state;
}
