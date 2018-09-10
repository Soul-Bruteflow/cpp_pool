//
// Created by bruteflow on 9/10/18.
//

#include "Peon.hpp"
#include <iostream>

/* Default constructor */
Peon::Peon(std::string name)
:Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

/* Copy constructor */
Peon::Peon(Peon const &src): Victim(src)
{
	*this = src;
	std::cout << "Copy Zog zog." << std::endl;
}

/* Default destructor */
Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

/* Assignment operator overload (Update) */
Peon &Peon::operator=(Peon const &rhs)
{
	/* this->data = rhs.data */
	Victim::setName(rhs.getName());
	return *this;
}

void Peon::getPolymorphed() const
{
	Victim::getPolymorphed();
}
