//
// Created by bruteflow on 9/21/18.
//

#include <iostream>
#include "Ice.hpp"

/* Default constructor */
Ice::Ice()
:AMateria("ice")
{}

Ice::Ice(std::string const &type) : AMateria(type)
{}

/* Copy constructor */
Ice::Ice(Ice const &src)
:AMateria(src)
{}

/* Default destructor */
Ice::~Ice()
{}

/* Assignment operator overload (Update) */
Ice &Ice::operator=(Ice const &rhs)
{
	/* this->data = rhs.data */
	AMateria::operator=(rhs);
	return *this;
}

Ice *Ice::clone() const
{
	return new Ice();
}

void Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
