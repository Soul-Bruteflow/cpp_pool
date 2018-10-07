//
// Created by bruteflow on 10/7/18.
//

#include "Vec2i.hpp"

/* Default constructor */
Vec2i::Vec2i()
:_x(0), _y(0)
{}

Vec2i::Vec2i(int_fast16_t x, int_fast16_t y)
:_x(x), _y(y)
{}

/* Copy constructor */
Vec2i::Vec2i(Vec2i const &src)
:_x(src._x), _y(src._y)
{}

/* Default destructor */
Vec2i::~Vec2i()
{}

/* Assignment operator overload (Update) */
Vec2i &Vec2i::operator=(Vec2i const &rhs)
{
	/* this->data = rhs.data */
	_x = rhs._x;
	_y = rhs._y;
	return *this;
}

int_fast16_t Vec2i::getX() const
{
	return _x;
}

int_fast16_t Vec2i::getY() const
{
	return _y;
}

void Vec2i::setX(int_fast16_t x)
{
	_x = x;
}

void Vec2i::setY(int_fast16_t y)
{
	_y = y;
}

void Vec2i::setXY(int_fast16_t x, int_fast16_t y)
{
	setX(x);
	setY(y);
}
