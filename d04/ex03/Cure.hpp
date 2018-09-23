//
// Created by bruteflow on 9/21/18.
//

#ifndef D04_EX03_CURE_HPP
#define D04_EX03_CURE_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>

class Cure : public AMateria
{
public:
	/* Canonical Form */
	Cure();
	Cure(std::string const &type);
	Cure(Cure const &src);
	~Cure();
	Cure &operator=(Cure const &rhs);

	Cure* clone() const;
	void use(ICharacter &target);

private:

};


#endif //D04_EX03_CURE_HPP
