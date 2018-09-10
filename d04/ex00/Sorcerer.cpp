//
// Created by bruteflow on 9/10/18.
//

#include "Sorcerer.hpp"
#include <iostream>

/* Default constructor */
Sorcerer::Sorcerer(std::string name, std::string title)
: _name(name), _title(title)
{
	std::cout << _name << ", " << _title << ", is born !" << std::endl;
}

/* Copy constructor */
Sorcerer::Sorcerer(Sorcerer const &src)
:_name(src._name), _title(src._title)
{
	std::cout << _name << ", " << _title << ", is duplicated !" << std::endl;
}

/* Default destructor */
Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same !" << std::endl;
}

/* Assignment operator overload (Update) */
Sorcerer &Sorcerer::operator=(Sorcerer const &rhs)
{
	/* this->data = rhs.data */
	_name = rhs._name;
	_title = rhs._title;
	std::cout << _name << ", " << _title << ", is assigned !" << std::endl;
	return *this;
}

void Sorcerer::setName(std::string name)
{
	_name = name;
}

void Sorcerer::setTitle(std::string title)
{
	_title = title;
}

std::string Sorcerer::getName() const
{
	return _name;
}

std::string Sorcerer::getTitle() const
{
	return _title;
}

void Sorcerer::polymorph(Victim const &target) const
{
	target.getPolymorphed();
}

std::ostream & operator<<(std::ostream & stream, Sorcerer const & rhs)
{
	stream << "I\'m " << rhs.getName() << ", " << rhs.getTitle() << ", and I like ponies !" << std::endl;
	return stream;
}
