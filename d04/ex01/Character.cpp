//
// Created by bruteflow on 9/17/18.
//

#include <iostream>
#include "Character.hpp"

/* Default constructor */
Character::Character()
:_name("NONE"), _AP(40), _weapon(nullptr)
{}

Character::Character(std::string const &name)
:_name(name), _AP(40), _weapon(nullptr)
{}

/* Copy constructor */
Character::Character(Character const &src)
:_name(src._name), _AP(src._AP), _weapon(src._weapon)
{}

/* Default destructor */
Character::~Character()
{}

/* Assignment operator overload (Update) */
Character &Character::operator=(Character const &rhs)
{
	/* this->data = rhs.data */
	_name = rhs._name;
	_AP = rhs._AP;
	_weapon = rhs._weapon;
	return *this;
}

void Character::recoverAP()
{
	_AP += 10;
	if (_AP > 40)
		_AP = 40;
}

void Character::equip(AWeapon *weapon)
{
	_weapon = weapon;
}

void Character::attack(Enemy *target)
{
	if (target->getHP() <= 0)
		return;
	if (_weapon)
	{
		if (_AP != 0 && (_AP - _weapon->getAPCost() >= 0))
		{
			std::cout << _name <<" attacks "<< target->getType() <<" with a "<< _weapon->getName() << std::endl;
			_weapon->attack();
			_AP -= _weapon->getAPCost();
			target->takeDamage(_weapon->getDamage());
			if (target->getHP() == 0)
				delete target;
		}
	}
}

std::string const &Character::getName() const
{
	return _name;
}

int Character::getAP() const
{
	return _AP;
}

AWeapon *Character::getWeapon() const
{
	return _weapon;
}

std::ostream & operator<<(std::ostream & stream, Character const & rhs) {
	if (rhs.getWeapon())
		stream << rhs.getName()<< " has "<< rhs.getAP() <<" AP and wields a " << rhs.getWeapon()->getName() << std::endl;
	else
		stream << rhs.getName()<< " has "<< rhs.getAP() <<" AP and is unarmed" << std::endl;
	return stream;
}