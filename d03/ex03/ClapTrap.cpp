//
// Created by bruteflow on 8/27/18.
//

#include "ClapTrap.hpp"

/* Default constructor */
ClapTrap::ClapTrap()
: 	 _name("CL4P-TP"),
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

	std::cout << "ClapTrap constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name)
: 	 _name(name),
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

	std::cout << "ClapTrap name constructor called." << std::endl;
}

/* Copy constructor */
ClapTrap::ClapTrap(ClapTrap const &src)
: 	  _name(src._name),
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

	std::cout << "ClapTrap copy constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name, int level, int hitPoints, int maxHitPoints,
				   int energyPoints, int maxEnergyPoints, int meleeAttackDamage,
				   int rangedAttackDamage, unsigned int armorDamageReduction)
:	_name(name),
	_level(level),
	_hitPoints(hitPoints),
	_maxHitPoints(maxHitPoints),
	_energyPoints(energyPoints),
	_maxEnergyPoints(maxEnergyPoints),
	_meleeAttackDamage(meleeAttackDamage),
	_rangedAttackDamage(rangedAttackDamage),
	_armorDamageReduction(armorDamageReduction)
{
	//random seed
	srand(time(0));

	std::cout << "ClapTrap constructor called." << std::endl;
}

/* Default destructor */
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called." << std::endl;
}

/* Assignment operator overload (Update) */
ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
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

	std::cout << "ClapTrap assignment operator called." << std::endl;

	return *this;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > _armorDamageReduction)
	{
		_hitPoints -= amount - _armorDamageReduction;
		if (_hitPoints <= 0)
			_hitPoints = 0;

		std::cout << "<" << _name << "> takes <"
				  << "-" << amount << "> points of damage!" << std::endl;
	}
	else
	{
		std::cout << "<" << _name << "> takes <"
				  << "0" << "> points of damage! My sweet, sweet armor." << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	_hitPoints += amount;
	if (_hitPoints >= _maxHitPoints)
		_hitPoints = _maxHitPoints;
	std::cout << "<" << _name << "> repairs <"
			  << "+" << amount << "> health points!" << std::endl;
}

void ClapTrap::setName(std::string newName)
{
	_name = newName;
}

void ClapTrap::logStats()
{
	std::cout
	<< std::endl << "*Log Start*" << std::endl
	<< "Name: <" << _name << ">" << std::endl
	<< "Level: <" << _level << ">" << std::endl
	<< "HP: <" << _hitPoints << ">" << std::endl
	<< "Max HP: <" << _maxHitPoints << ">" << std::endl
	<< "Energy: <" << _energyPoints << ">" << std::endl
	<< "Max Energy: <" << _maxEnergyPoints << ">" << std::endl
	<< "MAD: <" << _meleeAttackDamage << ">" << std::endl
	<< "RAD: <" << _rangedAttackDamage << ">" << std::endl
	<< "ADR: <" << _armorDamageReduction << ">" << std::endl
	<< "*Log End*" << std::endl << std::endl;
}

void ClapTrap::restoreEnergy(unsigned int amount)
{
	_energyPoints += amount;
	if (_energyPoints > _maxEnergyPoints)
		_energyPoints = _maxEnergyPoints;
}

std::string ClapTrap::getName() const
{
	return _name;
}
