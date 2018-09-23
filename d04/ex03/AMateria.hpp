//
// Created by bruteflow on 9/21/18.
//

#ifndef D04_EX03_AMATERIA_HPP
#define D04_EX03_AMATERIA_HPP

#include <string>

class ICharacter;
#include "ICharacter.hpp"



class AMateria
{
public:
	/* Canonical Form */
	AMateria();
	AMateria(std::string const & type);
	AMateria(AMateria const &src);
	virtual ~AMateria();

	AMateria &operator=(AMateria const &rhs);

	std::string const &getType() const;
	unsigned int getXP() const;

	void setType(std::string type);
	void setXP(unsigned int xp);

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

private:
	unsigned int	_xp;
	std::string		_type;
};


#endif //D04_EX03_AMATERIA_HPP
