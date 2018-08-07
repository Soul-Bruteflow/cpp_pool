//
// Created by bruteflow on 8/7/18.
//

#include "Human.hpp"

/* Default constructor */
Human::Human()
{

}

/* Default destructor */
Human::~Human()
{

}

const Brain& Human::getBrain()
{
	return (_brain);
}

std::string Human::identify() const
{
	return (_brain.identify());
}