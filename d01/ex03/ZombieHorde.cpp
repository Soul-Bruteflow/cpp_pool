//
// Created by bruteflow on 8/6/18.
//

#include "ZombieHorde.hpp"
#include "Zombie.hpp"
#include <iostream>

/* Default constructor */
ZombieHorde::ZombieHorde(int n)
:_hordeSize(n)
{
	// List of the horde zombie names
	std::string zombieNames []
	= {"Gunstein", "Bloodyson", "Parot", "Grrhlin", "Brainsmarshall",
	   "Reanimholmes", "Byrnenimated"};

	//random seed
	std::srand(std::time(nullptr) + std::rand() % 4);

	//Name and type assignation for the horde
	_zombieHorde = new Zombie[n];
	for (unsigned int i = 0; i < _hordeSize; i++)
	{
		_zombieHorde[i].setName(zombieNames[std::rand() % 5]);
		_zombieHorde[i].setType("Horde Zombie " + std::to_string(i + 1));
	}

}

/* Default destructor */
ZombieHorde::~ZombieHorde()
{
	delete [] _zombieHorde;
}

void ZombieHorde::announce()
{
	for (unsigned int i = 0; i < _hordeSize; i++)
		_zombieHorde[i].announce();
}