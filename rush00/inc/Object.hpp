//
// Created by bruteflow on 10/7/18.
//

#ifndef RUSH00_OBJECT_HPP
#define RUSH00_OBJECT_HPP

#include "Vec2i.hpp"

class Object
{
public:
	/* Canonical Form */
	Object();
	Object(int_fast16_t, int_fast16_t);
	Object(Object const &src);
	~Object();
	Object &operator=(Object const &rhs);

	void			update();
	Vec2i			getPos() const;
	int_fast16_t	getPosX() const;
	int_fast16_t	getPosY() const;
	void			setPos(Vec2i);

	bool	isAlive() const;
	void	setIsAlive(bool state);

private:
	Vec2i	_pos;
	bool	_isAlive;

};


#endif //RUSH00_OBJECT_HPP
