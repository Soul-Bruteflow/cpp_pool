//
// Created by bruteflow on 10/7/18.
//

#include <Rect.hpp>

#include "Rect.hpp"

/* Default constructor */
Rect::Rect()
:_offset(), _bounds()
{}

Rect::Rect(uint_fast16_t oX, uint_fast16_t oY, uint_fast16_t bX, uint_fast16_t bY)
:_offset(oX, oY), _bounds(bX, bY)
{}

/* Copy constructor */
Rect::Rect(Rect const &src)
:_offset(src._offset), _bounds(src._bounds)
{}

/* Default destructor */
Rect::~Rect()
{}

/* Assignment operator overload (Update) */
Rect &Rect::operator=(Rect const &rhs)
{
	/* this->data = rhs.data */
	_offset = rhs._offset;
	_bounds = rhs._bounds;
	return *this;
}

uint_fast16_t Rect::top() const
{
	return _offset.getY();
}

uint_fast16_t Rect::bot() const
{
	return _offset.getY() + _bounds.getY();
}

uint_fast16_t Rect::left() const
{
	return _offset.getX();
}

uint_fast16_t Rect::right() const
{
	return _offset.getX() + _bounds.getX();
}

uint_fast16_t Rect::width() const
{
	return _bounds.getX();
}

uint_fast16_t Rect::height() const
{
	return _bounds.getY();
}

bool Rect::contains(Vec2i a) const
{
	return
	(a.getX() >= _offset.getX() && a.getX() < right())
	&& (a.getY() >= _offset.getY() && a.getY() < bot());
}


