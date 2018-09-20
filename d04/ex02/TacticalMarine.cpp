//
// Created by bruteflow on 9/20/18.
//

#include <iostream>
#include "TacticalMarine.hpp"

/* Default constructor */
TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle" << std::endl;
}

/* Copy constructor */
TacticalMarine::TacticalMarine(TacticalMarine const &src)
{
	*this = src;
	std::cout << "Tactical Marine ready for battle" << std::endl;
}

/* Default destructor */
TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh ..." << std::endl;
}

/* Assignment operator overload (Update) */
TacticalMarine &TacticalMarine::operator=(TacticalMarine const &rhs)
{
	/* this->data = rhs.data */
	(void) rhs;
	return *this;
}

ISpaceMarine *TacticalMarine::clone() const
{
	return new TacticalMarine();
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT !" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with chainsword *" << std::endl;
}
