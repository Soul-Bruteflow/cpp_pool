//
// Created by bruteflow on 8/31/18.
//

#include "NinjaTrap.hpp"

/* Default constructor */
NinjaTrap::NinjaTrap()
{

}

/* Copy constructor */
NinjaTrap::NinjaTrap(NinjaTrap const &src)
{
	*this = src;
	return;
}

/* Default destructor */
NinjaTrap::~NinjaTrap()
{

}

/* Assignment operator overload (Update) */
NinjaTrap &NinjaTrap::operator=(NinjaTrap const &rhs)
{
	/* this->data = rhs.data */
	return *this;
}