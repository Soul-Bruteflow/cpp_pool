//
// Created by bruteflow on 9/21/18.
//

#ifndef D04_EX03_ICHARACTER_HPP
#define D04_EX03_ICHARACTER_HPP


#include <string>

class AMateria;
#include "AMateria.hpp"

class ICharacter
{
public:
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};

#endif //D04_EX03_ICHARACTER_HPP
