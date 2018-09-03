//
// Created by bruteflow on 9/3/18.
//

#ifndef D03_EX04_SUPERTRAP_HPP
#define D03_EX04_SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
public:
	/* Canonical / Coplien form */
	SuperTrap();
	SuperTrap(SuperTrap const &src);
	~SuperTrap();
	SuperTrap &operator=(SuperTrap const &rhs);
	/* End */

	SuperTrap(std::string name);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);

private:

};


#endif //D03_EX04_SUPERTRAP_HPP
