//
// Created by bruteflow on 9/23/18.
//

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"

void testOfficeBlock(OfficeBlock &office, std::string form, std::string target)
{
	try
	{
		office.doBureaucracy(form, target);
	}
	catch (OfficeBlock::NoInternException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (OfficeBlock::NoSignerException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (OfficeBlock::NoExecuterException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (OfficeBlock::IncorrectFromName & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

int main()
{
	Intern      idiotOne;
	Bureaucrat  hermes = Bureaucrat("Hermes Conrad", 37);
	Bureaucrat  hermes1 = Bureaucrat("Hermes Conrad1", 1);
	Bureaucrat  bob = Bureaucrat("Bobby Bobson", 123);
	Bureaucrat  bob1 = Bureaucrat("Bobby Bobson1", 1);
	OfficeBlock ob;
	OfficeBlock ob1;

	testOfficeBlock(ob, "mutant pig termination", "Pigley");

	ob.setIntern(idiotOne);
	testOfficeBlock(ob, "mutant pig termination", "Pigley");

	ob.setSigner(bob);
	testOfficeBlock(ob, "mutant pig termination", "Pigley");

	ob.setExecutor(hermes);
	testOfficeBlock(ob, "mutant pig termination", "Pigley");
	testOfficeBlock(ob, "shrubbery creation", "Pigley");
	testOfficeBlock(ob, "robotomy request", "Pigley");
	testOfficeBlock(ob, "presidential pardon", "Pigley");

	ob1.setIntern(idiotOne);
	ob1.setSigner(bob1);
	ob1.setExecutor(hermes1);
	testOfficeBlock(ob1, "robotomy request", "Pigley");
	testOfficeBlock(ob1, "presidential pardon", "Pigley");

}