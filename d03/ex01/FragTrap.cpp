//
// Created by bruteflow on 8/10/18.
//

#include <iostream>
#include "FragTrap.hpp"

/* Default constructor */
FragTrap::FragTrap()
:	_name("FR4G-TP"),
	_level(1),
	_hitPoints(100),
	_maxHitPoints(100),
	_energyPoints(100),
	_maxEnergyPoints(100),
	_meleeAttackDamage(30),
	_rangedAttackDamage(20),
	_armorDamageReduction(5)
{
	//random seed
	srand(time(0));

	std::cout << "<" << _name << ">: Starting an bootup sequence!" << std::endl;
	std::cout << "<" << _name << ">: Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!" << std::endl;
}

FragTrap::FragTrap(std::string name)
:	_name(name),
	_level(1),
	_hitPoints(100),
	_maxHitPoints(100),
	_energyPoints(100),
	_maxEnergyPoints(100),
	_meleeAttackDamage(30),
	_rangedAttackDamage(20),
	_armorDamageReduction(5)
{
	//random seed
	srand(time(0));

	std::cout << "<" << _name << ">: Starting an bootup sequence!" << std::endl;
	std::cout << "<" << _name << ">: Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!" << std::endl;
}

/* Copy constructor */
FragTrap::FragTrap(FragTrap const &src)
:	_name(src._name),
	_level(src._level),
	_hitPoints(src._hitPoints),
	_maxHitPoints(src._maxHitPoints),
	_energyPoints(src._energyPoints),
	_maxEnergyPoints(src._maxEnergyPoints),
	_meleeAttackDamage(src._meleeAttackDamage),
	_rangedAttackDamage(src._rangedAttackDamage),
	_armorDamageReduction(src._armorDamageReduction)
{
	//random seed
	srand(time(0));
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
	return *this;
}

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "<" << _name << ">: attacks <"
			  << target << "> at range, causing <" << _rangedAttackDamage
			  << "> points of damage!" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "<" << _name << ">: attacks <"
			  << target << "> at melee range, causing <" << _meleeAttackDamage
			  << "> points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	if (amount > _armorDamageReduction)
	{
		_hitPoints -= amount - _armorDamageReduction;
		if (_hitPoints <= 0)
			_hitPoints = 0;

		std::cout << "<" << _name << ">: takes <"
				  << "-" << amount << "> points of damage!" << std::endl;
	}
	else
	{
		std::cout << "<" << _name << ">: takes <"
		<< "0" << "> points of damage! ARMOR REDUCTION RULEZ!" << std::endl;
	}
}

void FragTrap::beRepaired(unsigned int amount)
{
	_hitPoints += amount;
	if (_hitPoints >= _maxHitPoints)
		_hitPoints = _maxHitPoints;
	std::cout << "<" << _name << ">: repairs <"
			  << "+" << amount << "> health points!" << std::endl;
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

void FragTrap::setName(std::string newName)
{
	_name = newName;
}

void FragTrap::logStats()
{
	std::cout
	<< std::endl << "Log:" << std::endl
	<< "Name: <" << _name << ">" << std::endl
	<< "Level: <" << _level << ">" << std::endl
	<< "HP: <" << _hitPoints << ">" << std::endl
	<< "Max HP: <" << _maxHitPoints << ">" << std::endl
	<< "Energy: <" << _energyPoints << ">" << std::endl
	<< "Max Energy: <" << _maxEnergyPoints << ">" << std::endl
	<< "MAD: <" << _meleeAttackDamage << ">" << std::endl
	<< "RAD: <" << _rangedAttackDamage << ">" << std::endl
	<< "ADR: <" << _armorDamageReduction << ">" << std::endl << std::endl;
}

void FragTrap::restoreEnergy(unsigned int amount)
{
	_energyPoints += amount;
	if (_energyPoints > _maxEnergyPoints)
		_energyPoints = _maxEnergyPoints;
}
