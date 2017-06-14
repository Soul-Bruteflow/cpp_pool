#include "phonebook.class.hpp"
#include "defines.hpp"
#include "main.hpp"
#include <sstream>

Phonebook::Phonebook(void)
	: isRunning (true), conIndex (0)
{

}

Phonebook::~Phonebook(void)
{

}

void Phonebook::setContactFields(int i)
{
	std::cout << "Enter " << fieldLabels_[i][0] << ": ";
	getline(std::cin, tmpFieldData[0]);
	_contactList[conIndex].addNewDataToFieldByIndex(i, tmpFieldData[0]);
}

void Phonebook::addContact(void)
{
	if (conIndex >= MAX_CONTACTS)
	{
		std::cout << "Sorry max contact count reached."
				  << std::endl;
		return;
	}
	else
	{
		std::cin.ignore(INT_MAX, '\n');
		for (int i = 0; i < MAX_FIELDS; i++)
			setContactFields(i);
		conIndex++;
	}
	slotsLeft(conIndex);
}

void Phonebook::setAndTruncateShortFields(int conInd)
{
	for (int i = 0; i < SHORT_FIELDS; i++)
		tmpShortFields[i][0] = truncate(_contactList[conInd].returnDataFromFiledByIndex(i), 9, true);
}

void Phonebook::setAndPrintAllShortFields(void)
{
	if (conIndex <= 0)
		return;
	for (int i = 0; i < conIndex; i++)
	{
		setAndTruncateShortFields(i);
		printShortFields(i);
	}
}

void Phonebook::printShortFields(int i) const
{
	std::cout << std::setw(10)
			  << i
			  << "|";
	for (int j = 0; j < SHORT_FIELDS; j++)
	{
		std::cout << std::setw(10)
				  << tmpShortFields[j][0];
		if (j < 2)
			std::cout << "|";
	}
	std::cout << std::endl;
}

void Phonebook::getIndexPrintLong(std::string index)
{
	int i = 0;
	std::istringstream convert(index);
	if ((!(convert >> i)) || i < 0 || i >= conIndex)
	{
		std::cout << "No such index, try again."
				<< std::endl;
		return;
	}
	for (int j = 0; j < MAX_FIELDS; j++)
	{
		std::cout << fieldLabels_[j][0]
				  << ": "
				  << _contactList[i].returnDataFromFiledByIndex(j)
				  << std::endl;
	}
}

std::string Phonebook::truncate(std::string str, size_t width, bool show_dots) const
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

const std::string Phonebook::fieldLabels_[MAX_FIELDS][FILED_STATIC_LEN] =
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