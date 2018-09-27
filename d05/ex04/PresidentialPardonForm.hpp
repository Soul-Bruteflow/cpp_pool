//
// Created by bruteflow on 9/25/18.
//

#ifndef D05_EX02_PRESIDENTIALPARDONFORM_HPP
#define D05_EX02_PRESIDENTIALPARDONFORM_HPP


#include "Form.hpp"
#include <string>

class PresidentialPardonForm : public Form
{
public:
	/* Canonical Form */
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const &src);
	~PresidentialPardonForm();
	PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);

	void execute(Bureaucrat const &executor) const;
};


#endif //D05_EX02_PRESIDENTIALPARDONFORM_HPP
