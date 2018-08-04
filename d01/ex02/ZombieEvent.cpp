//
// Created by bruteflow on 8/3/18.
//

#include "ZombieEvent.hpp"
#include <string>
#include <iostream>
#include "Zombie.hpp"

ZombieEvent::ZombieEvent()
{}

ZombieEvent::~ZombieEvent()
{}

void ZombieEvent::setZombieType(std::string zombieType)
{
	std::cout << "The setZombieType function is called." << std::endl;
	_zombieType = zombieType;
}

Zombie* ZombieEvent::newZombie(std::string zombieName)
{
	std::cout << "The newZombie function is called" << std::endl;
	Zombie *newZombie = new Zombie (zombieName, _zombieType);
	return (newZombie);
}

Zombie* ZombieEvent::randomChump()
{
	std::string zombieNames []
	= {"Gunstein", "Bloodyson", "Parot", "Grrhlin", "Brainsmarshall",
	"Reanimholmes", "Byrnenimated"};

	std::srand(std::time(nullptr) + std::rand() % 4);
	Zombie *randomZombie = newZombie(zombieNames[std::rand() % 5]);
	randomZombie->announce();

	return (randomZombie);
}
