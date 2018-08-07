//
// Created by bruteflow on 8/7/18.
//

#include <sstream>
#include "Brain.hpp"

/* Default constructor */
Brain::Brain()
{
}

/* Default destructor */
Brain::~Brain()
{
}

std::string Brain::identify() const
{
	const void *address = static_cast <const void*> (this);
	std::stringstream ss;
	ss << address;
	return (ss.str());
}