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
#include "CentralBureaucracy.hpp"

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
	CentralBureaucracy cb = CentralBureaucracy();

	Bureaucrat bureaucrats[40] =
	{
		Bureaucrat("Bureaucrat_1", 1),
		Bureaucrat("Bureaucrat_2", 1),
		Bureaucrat("Bureaucrat_3", 1),
		Bureaucrat("Bureaucrat_4", 1),
		Bureaucrat("Bureaucrat_5", 1),
		Bureaucrat("Bureaucrat_6", 1),
		Bureaucrat("Bureaucrat_7", 1),
		Bureaucrat("Bureaucrat_8", 1),
		Bureaucrat("Bureaucrat_9", 1),
		Bureaucrat("Bureaucrat_10", 1),
		Bureaucrat("Bureaucrat_11", 1),
		Bureaucrat("Bureaucrat_12", 1),
		Bureaucrat("Bureaucrat_13", 1),
		Bureaucrat("Bureaucrat_14", 1),
		Bureaucrat("Bureaucrat_15", 1),
		Bureaucrat("Bureaucrat_16", 1),
		Bureaucrat("Bureaucrat_17", 1),
		Bureaucrat("Bureaucrat_18", 1),
		Bureaucrat("Bureaucrat_19", 1),
		Bureaucrat("Bureaucrat_20", 1),
		Bureaucrat("Bureaucrat_21", 1),
		Bureaucrat("Bureaucrat_22", 1),
		Bureaucrat("Bureaucrat_23", 1),
		Bureaucrat("Bureaucrat_24", 1),
		Bureaucrat("Bureaucrat_25", 1),
		Bureaucrat("Bureaucrat_26", 1),
		Bureaucrat("Bureaucrat_27", 1),
		Bureaucrat("Bureaucrat_28", 1),
		Bureaucrat("Bureaucrat_29", 1),
		Bureaucrat("Bureaucrat_30", 1),
		Bureaucrat("Bureaucrat_31", 1),
		Bureaucrat("Bureaucrat_32", 1),
		Bureaucrat("Bureaucrat_33", 1),
		Bureaucrat("Bureaucrat_34", 1),
		Bureaucrat("Bureaucrat_35", 1),
		Bureaucrat("Bureaucrat_36", 1),
		Bureaucrat("Bureaucrat_37", 1),
		Bureaucrat("Bureaucrat_38", 1),
		Bureaucrat("Bureaucrat_39", 1),
		Bureaucrat("Bureaucrat_40", 1)
	};

	std::string targets[100] =
	{
		"Smith",
		"Johnson",
		"Williams",
		"Jones",
		"Brown",
		"Davis",
		"Miller",
		"Wilson",
		"Moore",
		"Taylor",
		"Anderson",
		"Thomas",
		"Jackson",
		"White",
		"Harris",
		"Martin",
		"Thompson",
		"Garcia",
		"Martinez",
		"Robinson",
		"Clark",
		"Rodriguez",
		"Lewis",
		"Lee",
		"Walker",
		"Hall",
		"Allen",
		"Young",
		"Hernandez",
		"King",
		"Wright",
		"Lopez",
		"Hill",
		"Scott",
		"Green",
		"Adams",
		"Baker",
		"Gonzalez",
		"Nelson",
		"Carter",
		"Mitchell",
		"Perez",
		"Roberts",
		"Turner",
		"Phillips",
		"Campbell",
		"Parker",
		"Evans",
		"Edwards",
		"Collins",
		"Stewart",
		"Sanchez",
		"Morris",
		"Rogers",
		"Reed",
		"Cook",
		"Morgan",
		"Bell",
		"Murphy",
		"Bailey",
		"Rivera",
		"Cooper",
		"Richardson",
		"Cox",
		"Howard",
		"Ward",
		"Torres",
		"Peterson",
		"Gray",
		"Ramirez",
		"James",
		"Watson",
		"Brooks",
		"Kelly",
		"Sanders",
		"Price",
		"Bennett",
		"Wood",
		"Barnes",
		"Ross",
		"Henderson",
		"Coleman",
		"Jenkins",
		"Perry",
		"Powell",
		"Long",
		"Patterson",
		"Hughes",
		"Flores",
		"Washington",
		"Butler",
		"Simmons",
		"Foster",
		"Gonzales",
		"Bryant",
		"Alexander",
		"Russell",
		"Griffin",
		"Diaz",
		"Hayes"
	};

	for (int i = 0; i < 40; i++)
		cb.feedBureaucrat(bureaucrats[i]);

	for (int i = 0; i < 30; i++)
		cb.queueUp(targets[i]);

	cb.doBureaucracy();
}