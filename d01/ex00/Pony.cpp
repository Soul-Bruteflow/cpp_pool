#include "Pony.hpp"
#include <iostream>

Pony::Pony(std::string name, std::string eyes, std::string mane)
		:_name(name)
		,_eyesColor(eyes)
		,_maneColor(mane)
{
	std::cout << "Object "
			  << name
			  << " created."
			  << std::endl
			  << std::endl;
}

Pony::~Pony() {
	std::cout << "Object "
			  << _name
			  << " deleted."
			  << std::endl;
}

void Pony::ponyIntroduce(void) {
	std::cout << "Hello. "
			  << "My name is "
			  << _name
			  << "."
			  << std::endl
			  << "My eyes have "
			  << _eyesColor
			  << " color."
			  << std::endl
			  << "My mane is "
			  << _maneColor
			  << " color."
			  << std::endl
			  << std::endl;

}