//
// Created by bruteflow on 10/7/18.
//

#ifndef RUSH00_VEC2I_HPP
#define RUSH00_VEC2I_HPP


#include <stdint.h>

class Vec2i
{
public:
	/* Canonical Form */
	Vec2i();
	Vec2i(int_fast16_t x, int_fast16_t y);
	Vec2i(Vec2i const &src);
	~Vec2i();
	Vec2i &operator=(Vec2i const &rhs);

	int_fast16_t getX() const;
	int_fast16_t getY() const;

	void setX(int_fast16_t x);
	void setY(int_fast16_t y);
	void setXY(int_fast16_t x, int_fast16_t y);

private:
	int_fast16_t _x;
	int_fast16_t _y;

};


#endif //RUSH00_VEC2I_HPP
