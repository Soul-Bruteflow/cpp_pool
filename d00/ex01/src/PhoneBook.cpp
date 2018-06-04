#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : currentContact (0)
{
	std::cout << std::endl;
	std::cout << YELLOW << "Welcome to the Phonebookinator 2000!" << RESET_COLOR << std::endl;
	this->printInput();
}

PhoneBook::~PhoneBook()
{
	std::cout << std::endl;
	std::cout << BLUE << "Bye :(" << RESET_COLOR << std::endl;
}

void PhoneBook::recordContact()
{
	unsigned int i;

	if (this->currentContact > MAX_CONTACTS)
	{
		std::cout << std::endl;
		std::cout << RED << "ERROR 42: Max contact number reached! 8/8" << RESET_COLOR << std::endl;
		std::cout << std::endl;
	}
	else
	{
		std::cout << std::endl;
		std::cout << YELLOW << "To ADD the contact you must fill out all contact's fields." << RESET_COLOR << std::endl;
		std::cout << YELLOW << "Current contacts count: "<< this->currentContact << "/8" << RESET_COLOR << std::endl;

		if (this->currentContact == 8)
			std::cout << "This is the last contact slot!" << std::endl;

		for(i = 0; i < MAX_FIELDS; i++)
		{
			std::cout << std::endl;
			std::cout << YELLOW << "Step: " << i << "/11" << " | Please enter contact's " << fieldLabels_[i][0] << "." << RESET_COLOR << std::endl;
			this->printInput(true, false);
			getline(std::cin, tmpContactFieldsData[i][0]);

			bool whiteSpacesOnly = std::all_of(tmpContactFieldsData[i][0].begin(),tmpContactFieldsData[i][0].end(),isspace);
			while (whiteSpacesOnly)
			{
				std::cout << std::endl;
				std::cout << YELLOW << "Step: " << i << "/11" << " | Please enter contact's " << fieldLabels_[i][0] << "." << RESET_COLOR << std::endl;
				this->printInput(true, false);
				getline(std::cin, tmpContactFieldsData[i][0]);
				whiteSpacesOnly = std::all_of(tmpContactFieldsData[i][0].begin(),tmpContactFieldsData[i][0].end(),isspace);
			}

			//std::cout << tmpContactFieldsData[i][0] << std::endl;
		}
		_contactList[currentContact].createContact(tmpContactFieldsData);


		//std::cout << "data: " << _contactList[0].returnFieldData(0);

		this->currentContact++;
		std::cout << std::endl;
		std::cout << GREEN << "A contact was successfully created!" << RESET_COLOR << std::endl;
		std::cout << std::endl;
	}
	this->printInput();
}

void PhoneBook::printInput(bool isAdd, bool isSearch)
{
	if (!isAdd)
	{
		std::cout << YELLOW << "Available commands for input are: ADD, SEARCH, EXIT" << RESET_COLOR << std::endl;
	}
	if (isSearch)
	{
		std::cout << std::endl;
		std::cout << YELLOW <<  "Please input the contact's index number. To see the contact's full information." << RESET_COLOR << std::endl;
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
	for (int i = 0; i < currentContact; i++)
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
	if (n)
	{

	}
	std::cout << "now print contact" << std::endl;
//	for (unsigned int i = 0; i < MAX_FIELDS; i++)
//	{
//		_contactList[n]
//	}
}

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