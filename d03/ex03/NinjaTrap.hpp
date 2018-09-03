//
// Created by bruteflow on 8/31/18.
//

#ifndef D03_EX03_NINJATRAP_HPP
#define D03_EX03_NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
public:
	/* Canonical / Coplien form */
	NinjaTrap();
	NinjaTrap(NinjaTrap const &src);
	~NinjaTrap();
	NinjaTrap &operator=(NinjaTrap const &rhs);
	/* End */

	NinjaTrap(std::string name);

	void ninjaShoebox(ClapTrap const & target);
	void ninjaShoebox(FragTrap const & target);
	void ninjaShoebox(ScavTrap const & target);
	void ninjaShoebox(NinjaTrap const & target);


private:

};


#endif //D03_EX03_NINJATRAP_HPP
