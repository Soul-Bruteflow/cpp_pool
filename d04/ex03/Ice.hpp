//
// Created by bruteflow on 9/21/18.
//

#ifndef D04_EX03_ICE_HPP
#define D04_EX03_ICE_HPP


#include "ICharacter.hpp"
#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	/* Canonical Form */
	Ice();
	Ice(std::string const &type);
	Ice(Ice const &src);
	~Ice();
	Ice &operator=(Ice const &rhs);

	Ice* clone() const;
	void use(ICharacter &target);

private:

};


#endif //D04_EX03_ICE_HPP
