//
// Created by bruteflow on 9/25/18.
//

#ifndef D05_EX03_INTERN_HPP
#define D05_EX03_INTERN_HPP


#include "Form.hpp"

class Intern
{
public:
	/* Canonical Form */
	Intern();
	Intern(Intern const &src);
	~Intern();
	Intern &operator=(Intern const &rhs);

	Form *makeForm(std::string form, std::string target);
};


#endif //D05_EX03_INTERN_HPP
