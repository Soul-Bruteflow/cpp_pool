#include "Brain.hpp"
#include <iostream>
#include <sstream>

std::string Brain::identify(void) const {
	std::stringstream tmp;
	tmp << this;
	return tmp.str();
}
