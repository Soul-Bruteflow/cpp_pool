//
// Created by bruteflow on 9/21/18.
//

#include <iostream>
#include "Cure.hpp"

/* Default constructor */
Cure::Cure()
:AMateria("cure")
{}

Cure::Cure(std::string const &type) : AMateria(type)
{}

/* Copy constructor */
Cure::Cure(Cure const &src)
:AMateria(src)
{}

/* Default destructor */
Cure::~Cure()
{}

/* Assignment operator overload (Update) */
Cure &Cure::operator=(Cure const &rhs)
{
	/* this->data = rhs.data */
	AMateria::operator=(rhs);
	return *this;
}

Cure *Cure::clone() const
{
	return new Cure();
}

void Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}