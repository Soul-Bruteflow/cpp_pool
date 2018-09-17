//
// Created by bruteflow on 9/17/18.
//

#ifndef D04_EX01_CHARACTER_HPP
#define D04_EX01_CHARACTER_HPP


#include <string>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
public:
	/* Canonical Form */
	Character();
	Character(std::string const & name);
	Character(Character const &src);
	~Character();
	Character &operator=(Character const &rhs);

	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);

	std::string const& getName() const;
	int 			   getAP() const;
	AWeapon*		   getWeapon() const;

private:
	std::string _name;
	int 		_AP;
	AWeapon		*_weapon;

};

std::ostream & operator<<(std::ostream & stream, Character const & rhs);

#endif //D04_EX01_CHARACTER_HPP
