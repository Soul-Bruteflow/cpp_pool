#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie() {
	return;
}

Zombie::Zombie(std::string zombieName, std::string zombieType)
		: _zombieName(zombieName)
		, _zombieType(zombieType)
{
	std::cout << "Zombie CREATED."
			  << std::endl;
}

Zombie::~Zombie(void) {
	return;
}

void Zombie::defineZombie(std::string zombieName, std::string zombieType) {
	_zombieName = zombieName;
	_zombieType = zombieType;
}

void Zombie::announce(void) const{
	std::cout << "<"
			  << _zombieName
			  << " ("
			  << _zombieType
			  << ")> "
			  << "Braiiiiiiinnnssss..."
			  << std::endl;
}