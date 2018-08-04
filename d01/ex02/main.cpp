//
// Created by bruteflow on 8/3/18.
//

#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
	//stack zombie
	std::cout << std::endl << "------------>Stack Zombie" << std::endl;
	Zombie zombie_1("zombie_1", "stack");
	std::cout << "zombie_1 announce";
	zombie_1.announce();

	//heap zombie
	std::cout << std::endl << "------------>Heap Zombie" << std::endl;
	ZombieEvent event;
	event.setZombieType("heap");
	Zombie *zombie_2 = event.newZombie("zombie_2");
	zombie_2->announce();
	delete  zombie_2;

	//random zombies
	std::cout << std::endl << "------------>Random Zombies" << std::endl;
	event.setZombieType("random");

	std::cout << std::endl << "------->Random Zombie #1" << std::endl;
	Zombie *zombie_3 = event.randomChump();
	delete  zombie_3;
	std::cout << std::endl;

	std::cout << "------->Random Zombie #2" << std::endl;
	Zombie *zombie_4 = event.randomChump();
	delete  zombie_4;
	std::cout << std::endl;

	std::cout << "------->Random Zombie #3" << std::endl;
	Zombie *zombie_5 = event.randomChump();
	delete  zombie_5;
	std::cout << std::endl;
}
