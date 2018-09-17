//
// Created by bruteflow on 9/17/18.
//

#include "Enemy.hpp"

/* Default constructor */
Enemy::Enemy()
:_type("NOTYPE"), _HP(1)
{}

Enemy::Enemy(std::string const &type, int hp)
:_type(type), _HP(hp)
{}

/* Copy constructor */
Enemy::Enemy(Enemy const &src)
:_type(src._type), _HP(src._HP)
{}

/* Default destructor */
Enemy::~Enemy()
{}

/* Assignment operator overload (Update) */
Enemy &Enemy::operator=(Enemy const &rhs)
{
	/* this->data = rhs.data */
	_type = rhs._type;
	_HP = rhs._HP;
	return *this;
}

std::string const &Enemy::getType() const
{
	return _type;
}

int Enemy::getHP() const
{
	return _HP;
}

void Enemy::takeDamage(int damage)
{
	if (damage <= 0)
		return;
	if (damage >= _HP)
	{
		_HP = 0;
		return;
	}
	_HP -= damage;
}
