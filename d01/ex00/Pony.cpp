//
// Created by bruteflow on 8/2/18.
//

#include "Pony.hpp"
#include <iostream>

Pony::Pony(void)
{
	std::cout << "The new pony is born, rejoice!" << std::endl;
}

Pony::~Pony(void)
{
	std::cout << "The pony is dead :(" << std::endl << std::endl;
}