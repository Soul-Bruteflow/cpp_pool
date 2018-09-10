//
// Created by bruteflow on 9/10/18.
//

#include "Victim.hpp"
#include <iostream>

/* Default constructor */
Victim::Victim(std::string name)
:_name(name)
{
	std::cout << "Some random victim called " << _name << " just popped !" << std::endl;
}

/* Copy constructor */
Victim::Victim(Victim const &src)
:_name(src._name)
{
	std::cout << "Victim " << _name << " just got duplicated !" << std::endl;
}

/* Default destructor */
Victim::~Victim()
{
	std::cout << "Victim " << _name << " just died for no apparent reason !" << std::endl;
}

/* Assignment operator overload (Update) */
Victim &Victim::operator=(Victim const &rhs)
{
	/* this->data = rhs.data */
	_name = rhs._name;
	std::cout << "Victim " << _name << " just got new assignation !" << std::endl;
	return *this;
}

void Victim::setName(std::string name)
{
	_name = name;
}

std::string Victim::getName() const
{
	return _name;
}

void Victim::getPolymorphed() const
{
	std::cout << _name << " has been turned into a cute little sheep !" << std::endl;
}

std::ostream & operator<<(std::ostream & stream, Victim const & rhs)
{
	stream << "I\'m " << rhs.getName() << " and I like otters !" << std::endl;
	return stream;
}
