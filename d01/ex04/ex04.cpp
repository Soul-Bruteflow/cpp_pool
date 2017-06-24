#include <string>
#include <iostream>

int main(void) {
	std::string brain = "HI THIS IS BRAIN";
	std::string *brainPtr = &brain;
	std::string &brainRef = brain;
	std::cout << "This is Brain Pointer - "
			  << *brainPtr
			  << std::endl
			  << "And this is Brain Reference - "
			  << brainRef
			  << std::endl;
}