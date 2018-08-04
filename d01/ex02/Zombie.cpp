//
// Created by bruteflow on 8/3/18.
//

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string zombieName, std::string zombieType)
: _type(zombieType), _name(zombieName)
{
	std::cout << _name << ", the " << _type << " type zombie is CREATED!" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << _name << ", the " << _type << " type zombie is DESTROYED!" << std::endl;
}

void Zombie::announce()
{
	std::cout << "<" << _name << " (" << _type << ")> Braiiiiiiinnnssss..." << std::endl;
}