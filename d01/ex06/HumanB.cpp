//
// Created by bruteflow on 8/7/18.
//

#include "HumanB.hpp"
#include <string>
#include <iostream>

/* Default constructor */
HumanB::HumanB(std::string newName)
:_name(newName)
{
}
/* Default destructor */
HumanB::~HumanB()
{
}

void HumanB::attack()
{
	std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &newWeapon)
{
	_weapon = &newWeapon;
}
