//
// Created by bruteflow on 8/31/18.
//

#ifndef D03_EX03_NINJATRAP_HPP
#define D03_EX03_NINJATRAP_HPP

#include "ClapTrap.hpp"

class NinjaTrap : public ClapTrap
{
public:
	/* Canonical / Coplien form */
	NinjaTrap();
	NinjaTrap(NinjaTrap const &src);
	~NinjaTrap();
	NinjaTrap &operator=(NinjaTrap const &rhs);
	/* End */


private:

};


#endif //D03_EX03_NINJATRAP_HPP
