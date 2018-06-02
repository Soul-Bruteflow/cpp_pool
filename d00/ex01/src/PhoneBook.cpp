#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : currentContact (0)
{
	std::cout << std::endl;
	std::cout << "Welcome to the Phonebookinator 2000!" << std::endl;
	std::cout << "Available commands for input are: ADD, SEARCH, EXIT" << std::endl;
	this->printInput();
}

PhoneBook::~PhoneBook()
{
	std::cout << std::endl;
	std::cout << "Bye :(" << std::endl;
}

void PhoneBook::recordContact()
{
	unsigned int i;

	if (this->currentContact > MAX_CONTACTS)
	{
		std::cout << "ERROR 42: Max contact number reached! 8/8" << std::endl;
	}
	else
	{
		std::cout << "To ADD the contact you must fill out all contact's fields." << std::endl;
		std::cout << "Current contacts count: "<< this->currentContact << "/8" << std::endl;

		if (this->currentContact == 8)
			std::cout << "This is the last contact slot!" << std::endl;

		for(i = 0; i < MAX_FIELDS; i++)
		{
			std::cout << std::endl;
			std::cout << "Please enter contact's " << fieldLabels_[i][0] << "." << std::endl;
			this->printInput();
			getline(std::cin, tmpContactFieldsData[i][0]);
			std::cout << tmpContactFieldsData[i][0] << std::endl;
		}
		_contactList[currentContact].createContact(tmpContactFieldsData);


		std::cout << "data: " << _contactList[0].returnFieldData(0);

		this->currentContact++;
		std::cout << "A contact was successfully created!" << std::endl;
	}
	std::cout << "Available commands for input are: ADD, SEARCH, EXIT" << std::endl;
	this->printInput();
}

void PhoneBook::printInput()
{
	std::cout << std::endl;
	std::cout << "Input: ";
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

void PhoneBook::printShort()
{
	//std::string tmp[FILED_STATIC_LEN];
	for (unsigned int i = 0; i < currentContact; i++)
	{
		for (unsigned int j = 0; j < SHORT_FIELDS; j++)
		{
			std::cout
			<< std::setw(10)
			<< i
			<< "|"
	  		<< std::setw(10)
			<< _contactList[i].returnFieldData(j);
			if (j < 2)
				std::cout << "|";
			}
			std::cout << std::endl;
		}
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