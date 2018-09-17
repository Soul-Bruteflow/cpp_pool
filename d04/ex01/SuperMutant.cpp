//
// Created by bruteflow on 9/17/18.
//

#include <iostream>
#include "SuperMutant.hpp"

/* Default constructor */
SuperMutant::SuperMutant()
:Enemy("Super Mutant", 170)
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

/* Copy constructor */
SuperMutant::SuperMutant(SuperMutant const &src)
:Enemy(src.getType(), src.getHP())
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

/* Default destructor */
SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." << std::endl;
}

/* Assignment operator overload (Update) */
SuperMutant &SuperMutant::operator=(SuperMutant const &rhs)
{
	/* this->data = rhs.data */
	Enemy::operator=(rhs);
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
	return *this;
}

void SuperMutant::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);
}
