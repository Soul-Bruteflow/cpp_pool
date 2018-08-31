//
// Created by bruteflow on 8/10/18.
//

#ifndef D03_EX01_SCAVTRAP_HPP
#define D03_EX01_SCAVTRAP_HPP

#include <string>

class ScavTrap
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
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer();

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


#endif //D03_EX01_SCAVTRAP_HPP
