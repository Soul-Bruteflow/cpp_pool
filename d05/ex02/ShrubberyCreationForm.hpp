//
// Created by bruteflow on 9/24/18.
//

#ifndef D05_EX02_SHRUBBERYCREATIONFORM_HPP
#define D05_EX02_SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <string>

class ShrubberyCreationForm : public Form
{
public:
	/* Canonical Form */
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const &src);
	~ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);

	void execute(Bureaucrat const &executor) const;
};


#endif //D05_EX02_SHRUBBERYCREATIONFORM_HPP
