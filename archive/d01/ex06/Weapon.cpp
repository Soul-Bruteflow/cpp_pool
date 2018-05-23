#include "Weapon.hpp"
#include <string>
#include <iostream>

Weapon::Weapon(void){
	return;
}

Weapon::Weapon(std::string weaponType)
		: _type(weaponType)
{
	return;
}

Weapon::~Weapon(void){
	return;
}

const std::string &Weapon::getType(void) const{
	return _type;
}

void Weapon::setType(std::string weaponType){
	_type = weaponType;
}
