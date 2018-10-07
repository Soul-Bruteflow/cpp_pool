//
// Created by bruteflow on 10/7/18.
//

#ifndef RUSH00_RECT_HPP
#define RUSH00_RECT_HPP

#include "Vec2i.hpp"

class Rect
{
public:
	/* Canonical Form */
	Rect();
	Rect(uint_fast16_t oX, uint_fast16_t oY, uint_fast16_t bX, uint_fast16_t bY);
	Rect(Rect const &src);
	~Rect();
	Rect &operator=(Rect const &rhs);

	uint_fast16_t top() const;
	uint_fast16_t bot() const;
	uint_fast16_t left() const;
	uint_fast16_t right() const;
	uint_fast16_t width() const;
	uint_fast16_t height() const;
	bool contains(Vec2i a) const;

private:
	Vec2i  _offset;
	Vec2i  _bounds;

};


#endif //RUSH00_RECT_HPP
