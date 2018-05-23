#include "Human.hpp"
#include <sstream>

Human::Human()
		: _brain()
{
	return;
}

Human::~Human() {
	return;
}

std::string Human::identify() const {
	return _brain.identify();
}

const Brain &Human::getBrain() {
	return this->_brain;
}