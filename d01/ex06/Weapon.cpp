//
// Created by bruteflow on 8/7/18.
//

#include "Weapon.hpp"

Weapon::Weapon(std::string newWeaponType)
:_type(newWeaponType)
{}

Weapon::~Weapon()
{}

void Weapon::setType(std::string newWeaponType)
{
	_type = newWeaponType;
}

const std::string& Weapon::getType()
{
	return (_type);
}