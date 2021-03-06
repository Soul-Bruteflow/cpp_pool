//
// Created by bruteflow on 10/7/18.
//

#ifndef RUSH00_VEC2UI_HPP
#define RUSH00_VEC2UI_HPP

#include <stdint.h>

class Vec2ui
{
public:
	/* Canonical Form */
	Vec2ui();
	Vec2ui(uint_fast16_t x, uint_fast16_t y);
	Vec2ui(Vec2ui const &src);
	~Vec2ui();
	Vec2ui &operator=(Vec2ui const &rhs);

	uint_fast16_t getX() const;
	uint_fast16_t getY() const;

	void setX(uint_fast16_t x);
	void setY(uint_fast16_t y);
	void setXY(uint_fast16_t x, uint_fast16_t y);

private:
	uint_fast16_t _x;
	uint_fast16_t _y;

};


#endif //RUSH00_VEC2UI_HPP
