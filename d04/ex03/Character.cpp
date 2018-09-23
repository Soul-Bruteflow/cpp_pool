//
// Created by bruteflow on 9/21/18.
//

#include <iostream>
#include "Character.hpp"

/* Default constructor */
Character::Character()
:_name("NONAME"), _inventory()
{}

Character::Character(std::string const &name)
:_name(name), _inventory()
{}

/* Copy constructor */
Character::Character(Character const &src)
:_name(src._name)
{
	for (unsigned int i = 0; i < 4; i++)
		_inventory[i] = src._inventory[i];
}

/* Default destructor */
Character::~Character()
{
	for (unsigned int i = 0; i < 4; i++)
	{
		if (_inventory[i] != nullptr)
			delete _inventory[i];
	}
}

/* Assignment operator overload (Update) */
Character &Character::operator=(Character const &rhs)
{
	/* this->data = rhs.data */
	_name = rhs._name;
	for (unsigned int i = 0; i < 4; i++)
		_inventory[i] = rhs._inventory[i];
	return *this;
}

std::string const &Character::getName() const
{
	return _name;
}

void Character::equip(AMateria *m)
{
	unsigned int i;

	for (i = 0; i < 4; i++)
	{
		if (_inventory[i] == nullptr)
		{
			_inventory[i] = m;
			return;
		}
	}
	if (i == 4)
		std::cout << "There is no slots left in the inventory." << std::endl;
}

void Character::unequip(int idx)
{
	if (idx >= 4 || idx < 0)
	{
		std::cout << "Inventory index is invalid." << std::endl;
		return;
	}
	else if (_inventory[idx] == nullptr)
	{
		std::cout << "Inventory slot is empty. Nothing to unequip." << std::endl;
		return;
	}
	else
		_inventory[idx] = nullptr;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 4 || idx < 0)
	{
		std::cout << "Inventory index is invalid." << std::endl;
		return;
	}
	else if (_inventory[idx] == nullptr)
	{
		std::cout << "Inventory slot is empty. Nothing to use." << std::endl;
		return;
	}
	else
		_inventory[idx]->use(target);
}
