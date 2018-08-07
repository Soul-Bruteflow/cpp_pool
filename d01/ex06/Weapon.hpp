//
// Created by bruteflow on 8/7/18.
//

#ifndef D01_E06_WEAPON_HPP
#define D01_E06_WEAPON_HPP


#include <string>

class Weapon
{
public:
	Weapon(std::string newWeaponType);
	~Weapon();
	void setType( std::string newWeaponType);
	const std::string &getType(void);

private:
	std::string _type;
};


#endif //D01_E06_WEAPON_HPP
