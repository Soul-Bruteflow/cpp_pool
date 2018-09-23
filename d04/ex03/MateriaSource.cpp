//
// Created by bruteflow on 9/21/18.
//

#include <iostream>
#include "MateriaSource.hpp"

/* Default constructor */
MateriaSource::MateriaSource()
:_inventory()
{}

/* Copy constructor */
MateriaSource::MateriaSource(MateriaSource const &src)
{
	for (unsigned int i = 0; i < 4; i++)
		_inventory[i] = src._inventory[i];
}

/* Default destructor */
MateriaSource::~MateriaSource()
{
	for (unsigned int i = 0; i < 4; i++)
	{
		if (_inventory[i] != nullptr)
			delete _inventory[i];
	}
}

/* Assignment operator overload (Update) */
MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
	/* this->data = rhs.data */
	for (unsigned int i = 0; i < 4; i++)
		_inventory[i] = rhs._inventory[i];
	return *this;
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (m == nullptr)
		return;

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

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (unsigned int i = 0; i < 4; i++)
	{
		if (_inventory[i] != nullptr)
		{
			if (_inventory[i]->getType() == type)
			{
				AMateria * c;
				c = _inventory[i]->clone();
				return (c);
			}
		}
	}
	return NULL;
}
