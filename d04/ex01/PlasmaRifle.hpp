//
// Created by bruteflow on 9/17/18.
//

#ifndef D04_EX01_PLASMARIFLE_HPP
#define D04_EX01_PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
	/* Canonical Form */
	PlasmaRifle();
	PlasmaRifle(PlasmaRifle const &src);
	~PlasmaRifle();
	PlasmaRifle &operator=(PlasmaRifle const &rhs);

	void attack() const;

private:

};


#endif //D04_EX01_PLASMARIFLE_HPP
