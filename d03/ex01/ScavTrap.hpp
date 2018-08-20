//
// Created by bruteflow on 8/10/18.
//

#ifndef D03_EX00_SCAVTRAP_HPP
#define D03_EX00_SCAVTRAP_HPP

#include <string>

class ScavTrap
{
public:
	/* Canonical / Coplien form */
	ScavTrap();
	ScavTrap(std::string name);

	ScavTrap(ScavTrap const &src);

	~ScavTrap();

	ScavTrap &operator=(ScavTrap const &rhs);
	/* End */

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer();
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


#endif //D03_EX00_SCAVTRAP_HPP
