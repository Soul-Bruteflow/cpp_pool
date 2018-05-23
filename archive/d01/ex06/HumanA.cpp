#include "HumanA.hpp"
#include "Weapon.hpp"
#include <string>
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon)
		: _name(name)
		, _weapon(weapon)
{

}

void HumanA::attack(void) const{
	std::cout << _name
			  << " attacks with his "
			  << _weapon.getType()
			  << std::endl;
}

