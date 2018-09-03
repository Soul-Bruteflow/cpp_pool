//
// Created by bruteflow on 8/10/18.
//

#ifndef D03_EX00_SCAVTRAP_HPP
#define D03_EX00_SCAVTRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	/* Canonical / Coplien form */
	ScavTrap();
	ScavTrap(ScavTrap const &src);
	~ScavTrap();
	ScavTrap &operator=(ScavTrap const &rhs);
	/* End */

	//Additional Constructors
	ScavTrap(std::string name);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void challengeNewcomer();

private:
};


#endif //D03_EX00_SCAVTRAP_HPP
