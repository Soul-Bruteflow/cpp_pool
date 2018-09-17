//
// Created by bruteflow on 9/17/18.
//

#ifndef D04_EX01_AWEAPON_HPP
#define D04_EX01_AWEAPON_HPP

#include <string>

class AWeapon
{
public:
	/* Canonical Form */
	AWeapon();
	AWeapon(std::string const &name, int damage, int apcost);
	AWeapon(AWeapon const &src);
	virtual ~AWeapon();
	AWeapon &operator=(AWeapon const &rhs);

	std::string const& getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;


private:
	std::string _name;
	int 		_damage;
	int 		_apCost;

};


#endif //D04_EX01_AWEAPON_HPP
