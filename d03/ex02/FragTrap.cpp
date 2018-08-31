//
// Created by bruteflow on 8/10/18.
//

#include <iostream>
#include "FragTrap.hpp"

/* Default constructor */
FragTrap::FragTrap()
:ClapTrap::ClapTrap("FR4G-TP", 1, 100, 100, 100, 100, 30, 20, 5, "FR4G-TP")
{
	std::cout << "<" << _name << ">: Starting an bootup sequence!" << std::endl;
	std::cout << "<" << _name << ">: Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!" << std::endl;
}

FragTrap::FragTrap(std::string name)
:ClapTrap::ClapTrap(name, 1, 100, 100, 100, 100, 30, 20, 5, "FR4G-TP")
{
	std::cout << "<" << _name << ">: Starting an bootup sequence!" << std::endl;
	std::cout << "<" << _name << ">: Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!" << std::endl;
}

/* Copy constructor */
FragTrap::FragTrap(FragTrap const &src)
:ClapTrap::ClapTrap(src._name, src._level, src._hitPoints, src._maxHitPoints, src._energyPoints,
src._maxEnergyPoints, src._meleeAttackDamage, src._rangedAttackDamage, src._armorDamageReduction, src._type)
{
	std::cout << "<" << _name << ">: I AM NOT A COPY. IT'S A LIE!" << std::endl;
}

/* Default destructor */
FragTrap::~FragTrap()
{
	std::cout << "<" << _name << ">: I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
}

/* Assignment operator overload (Update) */
FragTrap &FragTrap::operator=(FragTrap const &rhs)
{
	/* this->data = rhs.data */
	this->_name = rhs._name;
	this->_level = rhs._level;
	this->_hitPoints = rhs._hitPoints;
	this->_maxHitPoints = rhs._maxHitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_maxEnergyPoints = rhs._maxEnergyPoints;
	this->_meleeAttackDamage = rhs._meleeAttackDamage;
	this->_rangedAttackDamage = rhs._rangedAttackDamage;
	this->_armorDamageReduction = rhs._armorDamageReduction;
	this->_type = rhs._type;
	return *this;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (_energyPoints < 25)
	{
		std::cout << "<" << _name << ">: Not enough energy!" << std::endl;
		return;
	}
	_energyPoints -= 25;
	// List of the attacks
	std::string attacks []
	= {"Gravity Jolt", "Violet Fire Fracture", "Hot Ambush", "Vortex Bolt", "Lotus Crush",
	   "Enchanted Head, Laughing Blitz", "Immortal Bolt, Binding Spell"};

	std::cout << "<" << _name << ">: attacks <"
			  << target << "> with an " << attacks[std::rand() % 4] << ", causing <" << _meleeAttackDamage
			  << "> points of damage!" << std::endl;
}
