//
// Created by bruteflow on 8/7/18.
//

#include "Human.hpp"
#include "Brain.hpp"
#include <iostream>

int main()
{
	Human bob;
	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
}