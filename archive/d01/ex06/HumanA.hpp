#ifndef _HUMANA_HPP
#define _HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA{
public:
	HumanA(std::string name, Weapon &weapon);
	void attack(void) const;
private:
	std::string _name;
	Weapon		&_weapon;
};

#endif
