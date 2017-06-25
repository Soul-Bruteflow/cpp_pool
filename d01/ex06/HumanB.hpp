#ifndef D01_E06_HUMANB_HPP
#define D01_E06_HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB
{
public:
public:
	HumanB(std::string name);
	void setWeapon(Weapon &weapon);
	void attack(void) const;
private:
	std::string _name;
	Weapon		*_weapon;
private:
};


#endif
