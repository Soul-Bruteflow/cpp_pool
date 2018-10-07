//
// Created by bruteflow on 10/7/18.
//

#include "Vec2ui.hpp"

/* Default constructor */
Vec2ui::Vec2ui()
:_x(0), _y(0)
{}

Vec2ui::Vec2ui(uint_fast16_t x, uint_fast16_t y)
:_x(x), _y(y)
{}

/* Copy constructor */
Vec2ui::Vec2ui(Vec2ui const &src)
:_x(src._x), _y(src._y)
{}

/* Default destructor */
Vec2ui::~Vec2ui()
{}

/* Assignment operator overload (Update) */
Vec2ui &Vec2ui::operator=(Vec2ui const &rhs)
{
	/* this->data = rhs.data */
	_x = rhs._x;
	_y = rhs._y;
	return *this;
}

uint_fast16_t Vec2ui::getX() const
{
	return _x;
}

uint_fast16_t Vec2ui::getY() const
{
	return _y;
}

void Vec2ui::setX(uint_fast16_t x)
{
	_x = x;
}

void Vec2ui::setY(uint_fast16_t y)
{
	_y = y;
}

void Vec2ui::setXY(uint_fast16_t x, uint_fast16_t y)
{
	setX(x);
	setY(y);
}
