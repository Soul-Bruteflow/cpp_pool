//
// Created by bruteflow on 9/17/18.
//

#ifndef D04_EX01_POWERFIST_HPP
#define D04_EX01_POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
	/* Canonical Form */
	PowerFist();
	PowerFist(PowerFist const &src);
	~PowerFist();
	PowerFist &operator=(PowerFist const &rhs);

	void attack() const;

private:

};


#endif //D04_EX01_POWERFIST_HPP
