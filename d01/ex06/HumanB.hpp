//
// Created by bruteflow on 8/7/18.
//

#ifndef D01_E06_HUMANB_HPP
#define D01_E06_HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB
{
public:
	HumanB(std::string newName);
	~HumanB();
	void attack(void);
	void setWeapon(Weapon &newWeapon);

private:
	std::string _name;
	Weapon *_weapon;

};


#endif //D01_E06_HUMANA_HPP