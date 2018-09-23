//
// Created by bruteflow on 9/21/18.
//

#include <string>
#include "AMateria.hpp"

/* Default constructor */
AMateria::AMateria()
: _xp(0), _type("NOTYPE")
{}

AMateria::AMateria(std::string const &type)
:_xp(0), _type(type)
{}

/* Copy constructor */
AMateria::AMateria(AMateria const &src)
:_xp(src._xp), _type(src._type)
{}

/* Default destructor */
AMateria::~AMateria()
{}

/* Assignment operator overload (Update) */
AMateria &AMateria::operator=(AMateria const &rhs)
{
	/* this->data = rhs.data */
	_xp = rhs._xp;
	_type = rhs._type;
	return *this;
}

std::string const &AMateria::getType() const
{
	return _type;
}

unsigned int AMateria::getXP() const
{
	return _xp;
}

void AMateria::use(ICharacter &target)
{
	(void) target;
	_xp += 10;
}

void AMateria::setType(std::string type)
{
	_type = type;
}

void AMateria::setXP(unsigned int xp)
{
	_xp = xp;
}
