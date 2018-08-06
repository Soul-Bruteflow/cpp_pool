//
// Created by bruteflow on 8/6/18.
//

#include <string>
#include <iostream>

int main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *brainPointer = &brain;
	std::string &brainReference = brain;

	std::cout << "The brain pointer: " << *brainPointer << std::endl;
	std::cout << "The brain reference: " << brainReference << std::endl;
}

