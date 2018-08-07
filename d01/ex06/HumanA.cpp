//
// Created by bruteflow on 8/7/18.
//

#include "HumanA.hpp"
#include <string>
#include <iostream>

/* Default constructor */
HumanA::HumanA(std::string newName, Weapon &newWeapon)
:_name(newName), _weapon(newWeapon)
{
}
/* Default destructor */
HumanA::~HumanA()
{
}

void HumanA::attack()
{
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}
