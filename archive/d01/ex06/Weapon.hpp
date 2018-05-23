#ifndef _WEAPON_HPP
#define _WEAPON_HPP

#include <string>

class Weapon{
public:
	Weapon(void);
	Weapon(std::string weaponType);
	~Weapon(void);
	const std::string &getType(void) const;
	void setType(std::string weaponType);
private:
	std::string _type;
};


#endif
