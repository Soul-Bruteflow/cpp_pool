//
// Created by bruteflow on 8/10/18.
//

#include <iostream>
#include "ScavTrap.hpp"

/* Default constructor */
ScavTrap::ScavTrap()
: 	_name("Default"),
	 _level(1),
	 _hitPoints(100),
	 _maxHitPoints(100),
	 _energyPoints(50),
	 _maxEnergyPoints(50),
	 _meleeAttackDamage(20),
	 _rangedAttackDamage(15),
	 _armorDamageReduction(3)
{
	std::cout << "SCV4-TP <" << _name << "> Starting!" << std::endl;
	std::cout << "Directive one: Challenge humanity! Directive two: Dance!" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
: 	_name(name),
	 _level(1),
	 _hitPoints(100),
	 _maxHitPoints(100),
	 _energyPoints(100),
	 _maxEnergyPoints(100),
	 _meleeAttackDamage(30),
	 _rangedAttackDamage(20),
	 _armorDamageReduction(5)
{
	std::cout << "SCV4-TP <" << _name << "> Starting!" << std::endl;
	std::cout << "Directive one: Challenge humanity! Directive two: Dance!" << std::endl;
}

/* Copy constructor */
ScavTrap::ScavTrap(ScavTrap const &src)
{
	*this = src;
	std::cout << "SCV4-TP <" << _name << "> Hm.. maybe it's not me who is copy, but you!" << std::endl;
	return;
}

/* Default destructor */
ScavTrap::~ScavTrap()
{
	std::cout << "SCV4-TP <" << _name << "> Carpe diem!" << std::endl;
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
	return *this;
}

void ScavTrap::rangedAttack(std::string const &target)
{
	if (_energyPoints < 25)
	{
		std::cout << "SCV4-TP: Not enough energy to make a ranged attack!" << std::endl;
		return;
	}
	_energyPoints -= 25;
	std::cout << "SCV4-TP <" << _name << "> attacks <"
			  << target << "> at range with electricity, causing massive <" << _rangedAttackDamage
			  << "> points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target)
{
	if (_energyPoints < 25)
	{
		std::cout << "SCV4-TP: Not enough energy to make a melee attack!" << std::endl;
		return;
	}
	_energyPoints -= 25;
	std::cout << "SCV4-TP <" << _name << "> bites <"
			  << target << "> at close range, causing massive <" << _meleeAttackDamage
			  << "> points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if (amount > _armorDamageReduction)
	{
		_hitPoints -= amount - _armorDamageReduction;
		if (_hitPoints <= 0)
			_hitPoints = 0;

		std::cout << "SCV4-TP <" << _name << "> takes <"
				  << "-" << amount << "> points of damage!" << std::endl;
	}
	std::cout << "SCV4-TP <" << _name << "> takes <"
			  << "0" << "> points of damage! ARMOR REDUCTION RULEZ!" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints < 25)
	{
		std::cout << "SCV4-TP: Not enough energy to repair!" << std::endl;
		return;
	}
	_energyPoints -= 25;
	_hitPoints += amount;
	if (_hitPoints >= _maxHitPoints)
		_hitPoints = _maxHitPoints;
	std::cout << "SCV4-TP <" << _name << "> repairs <"
			  << "+" << amount << "> health points!" << std::endl;
}

void ScavTrap::challengeNewcomer()
{
	if (_energyPoints < 25)
	{
		std::cout << "SCV4-TP: Not enough energy to repair!" << std::endl;
		return;
	}
	_energyPoints -= 25;
	// List of the attacks
	std::string chalanges []
	= {"fist fight!", "ping-pong game!", "UFC 3 championship!", "coding spree!", "arm wrestling!",
	   "who could eat more challenge!", "laughing challenge!"};

	//random seed
	std::srand(std::time(nullptr) + std::rand() % 4);

	std::cout << "SCV4-TP <" << _name << "> challenges the guest to the "
			  << chalanges[std::rand() % 6] << std::endl;
}

void ScavTrap::setName(std::string newName)
{
	_name = newName;
}

void ScavTrap::logStats()
{
	std::cout
	<< "Name: <" << _name << ">" << std::endl
	<< "Level: <" << _level << ">" << std::endl
	<< "HP: <" << _hitPoints << ">" << std::endl
	<< "Max HP: <" << _maxHitPoints << ">" << std::endl
	<< "Energy: <" << _energyPoints << ">" << std::endl
	<< "Max Energy: <" << _maxEnergyPoints << ">" << std::endl
	<< "MAD: <" << _meleeAttackDamage << ">" << std::endl
	<< "RAD: <" << _rangedAttackDamage << ">" << std::endl
	<< "ADR: <" << _armorDamageReduction << ">" << std::endl;
}

void ScavTrap::restoreEnergy(unsigned int amount)
{
	_energyPoints += amount;
	if (_energyPoints > _maxEnergyPoints)
		_energyPoints = _maxEnergyPoints;
}
