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
	Vec2ui(uint_fast8_t x, uint_fast8_t y);
	Vec2ui(Vec2ui const &src);
	~Vec2ui();
	Vec2ui &operator=(Vec2ui const &rhs);

	uint_fast8_t getX() const;
	uint_fast8_t getY() const;

	void setX(uint_fast8_t x);
	void setY(uint_fast8_t y);
	void setXY(uint_fast8_t x, uint_fast8_t y);

private:
	uint_fast8_t _x;
	uint_fast8_t _y;

};


#endif //RUSH00_VEC2UI_HPP
