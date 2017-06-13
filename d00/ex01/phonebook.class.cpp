#include "phonebook.class.hpp"

Phonebook::Phonebook(void)
	: isRunning (true), conIndex (0)
{

}

Phonebook::~Phonebook(void)
{

}

void Phonebook::setContactFields(int i)
{
	std::cout << "Enter " << fieldLabels_[i][0] << " : ";
	getline(std::cin, tmpFieldData[0]);
	_contactList[conIndex].addNewDataToFieldByIndex(conIndex, tmpFieldData[0]);
}

void Phonebook::addContact(void)
{
	if (conIndex > MAX_CONTACTS)
	{
		std::cout << "Sorry max contact count reached."
				  << std::endl << std::endl;;
		return;
	}
	else
	{
		std::cout << "Follow the instructions "
				  << "to add a contact to the Phonebookinator 2000"
				  << std::endl;
		std::cin.ignore(INT_MAX, '\n');
		for (int i = 0; i < 11 - 10; i++)
			setContactFields(i);
		conIndex++;
	}
}

void Phonebook::setAndTruncateShortFields(int conInd)
{
	for (int i = 0; i < 3; i++)
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
	std::cout
			<< std::setw(10)
			<< i
			<< "|";
	for (int j = 0; j < 3; j++)
	{
		std::cout
				<< std::setw(10)
				<< tmpShortFields[j][0];
		if (j < 2)
			std::cout << "|";
	}
	std::cout << std::endl;
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