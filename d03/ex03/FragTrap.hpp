//
// Created by bruteflow on 8/10/18.
//

#ifndef D03_EX00_FRAGTRAP_HPP
#define D03_EX00_FRAGTRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	/* Canonical / Coplien form */
	FragTrap();
	FragTrap(FragTrap const &src);
	~FragTrap();
	FragTrap &operator=(FragTrap const &rhs);
	/* End */

	//Additional Constructors
	FragTrap(std::string name);

	void vaulthunter_dot_exe(std::string const & target);
};


#endif //D03_EX00_FRAGTRAP_HPP