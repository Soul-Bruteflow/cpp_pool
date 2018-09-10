//
// Created by bruteflow on 9/10/18.
//

#ifndef D04_EX00_SORCERER_HPP
#define D04_EX00_SORCERER_HPP

#include <string>
#include "Victim.hpp"

class Sorcerer
{
public:
	/* Canonical Form */
	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const &src);
	~Sorcerer();
	Sorcerer &operator=(Sorcerer const &rhs);

	/* Setters */
	void setName(std::string name);
	void setTitle(std::string title);

	/* Getters */
	std::string getName() const;
	std::string getTitle() const;

	/* Rest */
	void polymorph(Victim const &) const;

private:
	std::string	_name;
	std::string	_title;

};

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs);

#endif //D04_EX00_SORCERER_HPP
