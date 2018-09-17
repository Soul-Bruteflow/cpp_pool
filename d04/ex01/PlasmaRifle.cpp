//
// Created by bruteflow on 9/17/18.
//

#include "PlasmaRifle.hpp"
#include <iostream>

/* Default constructor */
PlasmaRifle::PlasmaRifle()
:AWeapon("Plasma Rifle", 21, 5)
{}

/* Copy constructor */
PlasmaRifle::PlasmaRifle(PlasmaRifle const &src)
:AWeapon(src.getName(), src.getDamage(), src.getAPCost())
{}

/* Default destructor */
PlasmaRifle::~PlasmaRifle()
{}

/* Assignment operator overload (Update) */
PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &rhs)
{
	/* this->data = rhs.data */
	AWeapon::operator=(rhs);
	return *this;
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
