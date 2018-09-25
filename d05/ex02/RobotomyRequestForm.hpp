//
// Created by bruteflow on 9/25/18.
//

#ifndef D05_EX02_ROBOTOMYREQUESTFORM_HPP
#define D05_EX02_ROBOTOMYREQUESTFORM_HPP


#include "Form.hpp"
#include <string>

class RobotomyRequestForm : public Form
{
public:
	/* Canonical Form */
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const &src);
	~RobotomyRequestForm();
	RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);

	void execute(Bureaucrat const &executor) const;
};


#endif //D05_EX02_ROBOTOMYREQUESTFORM_HPP
