#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : currentContact (1)
{
	std::cout << std::endl << YELLOW
	<< "Welcome to the Phonebookinator 2000!" << RESET_COLOR << std::endl;
	printInput();
}

PhoneBook::~PhoneBook()
{
	std::cout << std::endl << BLUE
	<< "Bye :(" << RESET_COLOR << std::endl << std::endl;
}

void PhoneBook::recordContact()
{
	unsigned int i;

	if (currentContact > MAX_CONTACTS)
	{
		std::cout << std::endl << RED
		<< "ERROR 42: Max contact number reached! 8/8"
	 	<< RESET_COLOR << std::endl << std::endl;
	}
	else
	{
		std::cout << std::endl << YELLOW
		<< "To ADD the contact you must fill out all contact's fields."
	 	<< RESET_COLOR << std::endl
		<< YELLOW << "Current contacts count: " << currentContact << "/8"
		<< RESET_COLOR << std::endl;

		if (currentContact == 8)
			std::cout << "This is the last contact slot!" << std::endl;

		for(i = 0; i < MAX_FIELDS; i++)
		{
			std::cout << std::endl;
			std::cout << YELLOW << "Step: " << i << "/10" << " | Please enter contact's " << fieldLabels_[i][0] << "." << RESET_COLOR << std::endl;
			printInput(true, false);
			getline(std::cin, tmpContactFieldsData[i][0]);

			bool whiteSpacesOnly = std::all_of(tmpContactFieldsData[i][0].begin(),tmpContactFieldsData[i][0].end(),isspace);
			while (whiteSpacesOnly)
			{
				std::cout << std::endl;
				std::cout << YELLOW << "Step: " << i << "/10" << " | Please enter contact's " << fieldLabels_[i][0] << "." << RESET_COLOR << std::endl;
				printInput(true, false);
				getline(std::cin, tmpContactFieldsData[i][0]);
				whiteSpacesOnly = std::all_of(tmpContactFieldsData[i][0].begin(),tmpContactFieldsData[i][0].end(),isspace);
			}
		}
		_contactList[currentContact].createContact(tmpContactFieldsData);
		currentContact++;
		std::cout << std::endl << GREEN
		<< "A contact was successfully created!"
	 	<< RESET_COLOR << std::endl << std::endl;
	}
	printInput();
}

void PhoneBook::printInput(bool isAdd, bool isSearch)
{
	if (!isAdd)
	{
		std::cout << YELLOW
		<< "Available commands for input are: ADD, SEARCH, EXIT"
	 	<< RESET_COLOR << std::endl;
	}
	if (isSearch)
	{
		std::cout << std::endl << YELLOW
		<< "Please input the contact's index number."
	  	<< "To see the contact's full information."
	  	<< RESET_COLOR << std::endl;
	}
	std::cout << GREEN << "Input: " << RESET_COLOR;
}

void PhoneBook::printTableHead()
{
	std::cout
	<< std::setw(10)
	<< "index"
	<< "|"
	<< "first name"
	<< "|"
	<< std::setw(10)
	<< "last name"
	<< "|"
	<< std::setw(10)
	<< "nickname"
	<< "|"
	<< std::endl;
}

std::string PhoneBook::truncate(std::string str, size_t width, bool show_dots) const
{
	if (str.length() > width)
	{
		if (show_dots)
			return str.substr(0, width) + ".";
		else
			return str.substr(0, width);
	}
	return str;
}

void PhoneBook::printShort()
{
	for (int i = 1; i < currentContact; i++)
	{
		std::cout
		<< std::setw(10)
		<< i
		<< "|";
		for (int j = 0; j < SHORT_FIELDS; j++)
		{
			std::string tmp;

			tmp = truncate(_contactList[i].returnFieldData(j), 9, true);
			std::cout
			<< std::setw(10)
			<< tmp
			<< "|";
		}
		std::cout << std::endl;
	}
}

void PhoneBook::printFullContact(int n)
{
	if (n <= 0 || n > currentContact || n > MAX_CONTACTS)
	{
		//такого индекса нет 
	}
	std::cout << std::endl << GREEN
	<< "Success contact #" << n << " selected!" << RESET_COLOR
	<< std::endl << std::endl;

	std::string tmp = _contactList[n].returnFieldData(0);
	for (unsigned int i = 0; i < MAX_FIELDS; i++)
	{
		std::string tmp2 = _contactList[n].returnFieldData(i);
		std::cout << i << ". " << fieldLabels_[i][0] << ": " << tmp2 << std::endl;
	}
}

//void PhoneBook::setContactFields(int i)
//{
//	std::cout << "Enter " << fieldLabels_[i][0] << ": ";
//	getline(std::cin, tmpFieldData[0]);
//	_contactList[currentContact].addFieldData(i, tmpFieldData[0]);
//}
//
//void PhoneBook::addContact(void)
//{
//	if (currentContact >= MAX_CONTACTS)
//	{
//		std::cout << "Sorry max contact count reached."
//				  << std::endl;
//		return;
//	}
//	else
//	{
//		std::cin.ignore(INT_MAX, '\n');
//		for (int i = 0; i < MAX_FIELDS; i++)
//			setContactFields(i);
//		currentContact++;
//	}
//}

const std::string PhoneBook::fieldLabels_[MAX_FIELDS][FILED_STATIC_LEN] =
	{
		{"first name"},
		{"last name"},
		{"nickname"},
		{"login"},
		{"postal address"},
		{"email address"},
		{"phone number"},
		{"birthday date"},
		{"favorite meal"},
		{"underwear color"},
		{"darkest secret"}
	};