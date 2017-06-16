#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
		: _name(name)
		, _type(type)
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
			  << _name
			  << " ("
			  << _type
			  << ")> "
			  << "Braiiiiiiinnnssss..."
			  << std::endl;
}