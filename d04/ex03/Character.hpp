//
// Created by bruteflow on 9/21/18.
//

#ifndef D04_EX03_CHARACTER_HPP
#define D04_EX03_CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
public:
	/* Canonical Form */
	Character();
	Character(std::string const &name);
	Character(Character const &src);
	~Character();
	Character &operator=(Character const &rhs);

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

private:
	std::string		_name;
	AMateria*		_inventory[4];

};


#endif //D04_EX03_CHARACTER_HPP
