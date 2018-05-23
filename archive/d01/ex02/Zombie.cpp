#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string zombieName, std::string zombieType)
		: _zombieName(zombieName)
		, _zombieType(zombieType)
{
	std::cout << "Zombie CREATED."
			  << std::endl;
	return;
}

Zombie::~Zombie(void) {
	std::cout << "Zombie DESTROYED."
			  << std::endl;
	return;
}

void Zombie::announce(void) {
	std::cout << "<"
			  << _zombieName
			  << " ("
			  << _zombieType
			  << ")> "
			  << "Braiiiiiiinnnssss..."
			  << std::endl;
}