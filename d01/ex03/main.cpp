//
// Created by bruteflow on 8/3/18.
//

#include <iostream>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main(void)
{
	//stack zombie
	std::cout << std::endl << "------------>Stack Zombie" << std::endl;
	Zombie zombie_1("zombie_1", "stack");
	std::cout << "zombie_1 announce";
	zombie_1.announce();

	//horde zombies
	std::cout << std::endl << "------------>Horde Zombies" << std::endl;
	ZombieHorde horde(9);
	horde.announce();

}
