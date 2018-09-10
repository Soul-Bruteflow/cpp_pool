//
// Created by bruteflow on 9/3/18.
//

#include "SuperTrap.hpp"

/* Default constructor */
SuperTrap::SuperTrap()
:ClapTrap::ClapTrap("SUP4R-TP", 1, 100, 100, 120, 120, 60, 20, 5)
{
	std::cout << "<" << _name << ">: SuperTrap constructor called!" << std::endl;
}

SuperTrap::SuperTrap(std::string name)
:ClapTrap::ClapTrap(name, 1, 100, 100, 120, 120, 60, 20, 5)
{
	std::cout << "<" << _name << ">: SuperTrap parameter constructor called!" << std::endl;
}

/* Copy constructor */
SuperTrap::SuperTrap(SuperTrap const &src)
:ClapTrap::ClapTrap(src._name, src._level, src._hitPoints, src._maxHitPoints, src._energyPoints,
src._maxEnergyPoints, src._meleeAttackDamage, src._rangedAttackDamage, src._armorDamageReduction)
{
	std::cout << "<" << _name << ">: SuperTrap copy constructor called!" << std::endl;
}

/* Default destructor */
SuperTrap::~SuperTrap()
{
	std::cout << "<" << _name << ">: SuperTrap destructor called!" << std::endl;
}

/* Assignment operator overload (Update) */
SuperTrap &SuperTrap::operator=(SuperTrap const &rhs)
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
	std::cout << "<" << _name << ">: SuperTrap assignment operator called!" << std::endl;
	return *this;
}

void SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}
