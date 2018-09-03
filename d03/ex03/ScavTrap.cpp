//
// Created by bruteflow on 8/10/18.
//

#include <iostream>
#include "ScavTrap.hpp"

/* Default constructor */
ScavTrap::ScavTrap()
:ClapTrap::ClapTrap("SC4V-TP", 1, 100, 100, 50, 50, 20, 15, 3, "SC4V-TP")
{
	std::cout << "<" << _name << ">: Starting!" << std::endl;
	std::cout << "<" << _name << ">: Directive one: Challenge humanity! Directive two: Dance!" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
:ClapTrap::ClapTrap(name, 1, 100, 100, 50, 50, 20, 15, 3, "SC4V-TP")
{
	std::cout << "<" << _name << ">: Starting!" << std::endl;
	std::cout << "<" << _name << ">: Directive one: Challenge humanity! Directive two: Dance!" << std::endl;
}

/* Copy constructor */
ScavTrap::ScavTrap(ScavTrap const &src)
:ClapTrap::ClapTrap(src._name, src._level, src._hitPoints, src._maxHitPoints, src._energyPoints,
src._maxEnergyPoints, src._meleeAttackDamage, src._rangedAttackDamage, src._armorDamageReduction, src._type)
{
	std::cout << "<" << _name << ">: Hm.. maybe it's not me who is copy, but you!" << std::endl;
}

/* Default destructor */
ScavTrap::~ScavTrap()
{
	std::cout << "<" << _name << ">: Carpe diem!" << std::endl;
}

/* Assignment operator overload (Update) */
ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
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

void ScavTrap::challengeNewcomer()
{
	if (_energyPoints < 25)
	{
		std::cout << "<" << _name << ">: Not enough energy!" << std::endl;
		return;
	}
	_energyPoints -= 25;
	// List of the attacks
	std::string chalanges []
	= {"fist fight!", "ping-pong game!", "UFC 3 championship!", "coding spree!", "arm wrestling!",
	   "who could eat more challenge!", "laughing challenge!"};

	std::cout << "<" << _name << ">: challenges the guest to the "
			  << chalanges[std::rand() % 6] << std::endl;
}