//
// Created by bruteflow on 8/7/18.
//

#ifndef D01_E06_HUMANA_HPP
#define D01_E06_HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA
{
public:
	HumanA(std::string newName, Weapon &newWeapon);
	~HumanA();
	void attack(void);

private:
	std::string _name;
	Weapon &_weapon;

};


#endif //D01_E06_HUMANA_HPP
