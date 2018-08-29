//
// Created by bruteflow on 8/27/18.
//

#ifndef D03_EX02_CLAPTRAP_HPP
#define D03_EX02_CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
public:
	/* Canonical / Coplien form */
	ClapTrap();
	ClapTrap(ClapTrap const &src);
	~ClapTrap();
	ClapTrap &operator=(ClapTrap const &rhs);
	/* End */

	/* Custom */
	ClapTrap(std::string name);
	ClapTrap(std::string name, int level, int hitPoints, int maxHitPoints, int energyPoints, int maxEnergyPoints,
			int meleeAttackDamage, int rangedAttackDamage, unsigned int armorDamageReduction);
	/* End */

	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void setName(std::string newName);
	void restoreEnergy(unsigned int amount);
	void logStats();

protected:
	std::string  _name;
	int			 _level;
	int			 _hitPoints;
	int			 _maxHitPoints;
	int			 _energyPoints;
	int			 _maxEnergyPoints;
	int 		 _meleeAttackDamage;
	int 		 _rangedAttackDamage;
	unsigned int _armorDamageReduction;

private:

};


#endif //D03_EX02_CLAPTRAP_HPP
