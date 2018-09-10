//
// Created by bruteflow on 8/31/18.
//

#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

/* Default constructor */
NinjaTrap::NinjaTrap()
:ClapTrap::ClapTrap("NINJ4-TP", 1, 60, 60, 120, 120, 60, 5, 0)
{
	std::cout << "<" << _name << ">: NinjaTrap Constructor called!" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name)
:ClapTrap::ClapTrap(name, 1, 60, 60, 120, 120, 60, 5, 0)
{
	std::cout << "<" << _name << ">: Silence!" << std::endl;
}

/* Copy constructor */
NinjaTrap::NinjaTrap(NinjaTrap const &src)
:ClapTrap::ClapTrap(src._name, src._level, src._hitPoints, src._maxHitPoints, src._energyPoints,
src._maxEnergyPoints, src._meleeAttackDamage, src._rangedAttackDamage, src._armorDamageReduction)
{
	std::cout << "<" << _name << ">: Shadow copy activated!" << std::endl;
}

/* Default destructor */
NinjaTrap::~NinjaTrap()
{
	std::cout << "<" << _name << ">: I will see you in the next life." << std::endl;
}

/* Assignment operator overload (Update) */
NinjaTrap &NinjaTrap::operator=(NinjaTrap const &rhs)
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

void NinjaTrap::rangedAttack(std::string const &target)
{
	std::cout << "<" << _name << ">: attacks <"
			  << target << "> at range with love, causing massive <" << _rangedAttackDamage
			  << "> points of damage!" << std::endl;
}

void NinjaTrap::meleeAttack(std::string const &target)
{
	std::cout << "<" << _name << ">: bites <"
			  << target << "> at close range with a hug, causing massive <" << _meleeAttackDamage
			  << "> points of damage!" << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap const &target)
{
	std::cout << "<" << _name << ">: attacked <" << target.getName()
			  << "> with shuriken toss for " << this->_rangedAttackDamage << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap const &target)
{
	std::cout << "<" << _name << ">: attacked <" << target.getName()
			  << "> with tanto strike for " << this->_meleeAttackDamage << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap const &target)
{
	std::cout << "<" << _name << ">: attacked <" << target.getName()
			  << "> with shadow assault for " << this->_rangedAttackDamage << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap const &target)
{
	std::cout << "<" << _name << ">: attacked <" << target.getName()
			  << "> with poison for " << this->_meleeAttackDamage << std::endl;
}
