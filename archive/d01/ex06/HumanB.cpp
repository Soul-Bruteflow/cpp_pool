#include "HumanB.hpp"
#include "Weapon.hpp"
#include <string>
#include <iostream>

HumanB::HumanB(std::string name)
		: _name(name)
{

}

void HumanB::setWeapon(Weapon &weapon){
	_weapon = &weapon;
}

void HumanB::attack(void) const{
	std::cout << _name
			  << " attacks with his "
			  << _weapon->getType()
			  << std::endl;
}
