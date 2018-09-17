//
// Created by bruteflow on 9/17/18.
//

#include <iostream>
#include "RadScorpion.hpp"

/* Default constructor */
RadScorpion::RadScorpion()
:Enemy("RadScorpion", 80)
{
	std::cout << "* click click click *" << std::endl;
}

/* Copy constructor */
RadScorpion::RadScorpion(RadScorpion const &src)
:Enemy(src.getType(), src.getHP())
{
	std::cout << "* click click click *" << std::endl;
}

/* Default destructor */
RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

/* Assignment operator overload (Update) */
RadScorpion &RadScorpion::operator=(RadScorpion const &rhs)
{
	/* this->data = rhs.data */
	Enemy::operator=(rhs);
	std::cout << "* click click click *" << std::endl;
	return *this;
}