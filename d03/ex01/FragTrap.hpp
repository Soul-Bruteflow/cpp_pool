//
// Created by bruteflow on 8/10/18.
//

#ifndef D03_EX00_FRAGTRAP_HPP
#define D03_EX00_FRAGTRAP_HPP

#include <string>

class FragTrap
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

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const & target);

	//Helper functions
	void setName(std::string newName);
	void restoreEnergy(unsigned int amount);
	void logStats();

private:
	std::string  _name;
	int			 _level;
	int			 _hitPoints;
	int			 _maxHitPoints;
	int			 _energyPoints;
	int			 _maxEnergyPoints;
	int 		 _meleeAttackDamage;
	int 		 _rangedAttackDamage;
	unsigned int _armorDamageReduction;
};


#endif //D03_EX00_FRAGTRAP_HPP
