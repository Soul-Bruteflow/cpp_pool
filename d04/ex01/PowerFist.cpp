//
// Created by bruteflow on 9/17/18.
//

#include "PowerFist.hpp"
#include <iostream>

/* Default constructor */
PowerFist::PowerFist()
:AWeapon("Power Fist", 50, 8)
{}

/* Copy constructor */
PowerFist::PowerFist(PowerFist const &src)
:AWeapon(src.getName(), src.getDamage(), src.getAPCost())
{}

/* Default destructor */
PowerFist::~PowerFist()
{}

/* Assignment operator overload (Update) */
PowerFist &PowerFist::operator=(PowerFist const &rhs)
{
	/* this->data = rhs.data */
	AWeapon::operator=(rhs);
	return *this;
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}