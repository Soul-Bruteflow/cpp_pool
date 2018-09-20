//
// Created by bruteflow on 9/20/18.
//

#include <iostream>
#include "AssaultTerminator.hpp"

/* Default constructor */
AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
}

/* Copy constructor */
AssaultTerminator::AssaultTerminator(AssaultTerminator const &src)
{
	*this = src;
	std::cout << "* teleports from space *" << std::endl;
}

/* Default destructor */
AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back ..." << std::endl;
}

/* Assignment operator overload (Update) */
AssaultTerminator &AssaultTerminator::operator=(AssaultTerminator const &rhs)
{
	/* this->data = rhs.data */
	(void) rhs;
	return *this;
}

ISpaceMarine *AssaultTerminator::clone() const
{
	return new AssaultTerminator();
}

void AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}
