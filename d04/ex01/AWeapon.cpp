//
// Created by bruteflow on 9/17/18.
//

#include "AWeapon.hpp"

/* Default constructor */
AWeapon::AWeapon()
:_name("NONE"), _damage(0), _apCost(0)
{}

AWeapon::AWeapon(std::string const &name, int damage, int apcost)
:_name(name), _damage(damage), _apCost(apcost)
{}

/* Copy constructor */
AWeapon::AWeapon(AWeapon const &src)
:_name(src._name), _damage(src._damage), _apCost(src._apCost)
{}

/* Default destructor */
AWeapon::~AWeapon()
{}

/* Assignment operator overload (Update) */
AWeapon &AWeapon::operator=(AWeapon const &rhs)
{
	/* this->data = rhs.data */
	_name = rhs._name;
	_damage = rhs._damage;
	_apCost = rhs._apCost;
	return *this;
}

std::string const &AWeapon::getName() const
{
	return _name;
}

int AWeapon::getAPCost() const
{
	return _apCost;
}

int AWeapon::getDamage() const
{
	return _damage;
}
