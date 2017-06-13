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
		for (int i = 0; i < 11; i++)
			setContactFields(i);
		conIndex++;
	}
}

//void Phonebook::get_contacts(void)
//{
//	std::cout << "|"
//			  << "Index"
//			  << std::setw(5)
//			  << "|"
//			  << "First name"
//			  << "|"
//			  << "Last name"
//			  << std::setw(2)
//			  << "|"
//			  << "Nickname"
//			  << std::setw(3)
//			  << "|"
//			  << std::endl;
//	for (int i = 0; i < con_index; i++)
//	{
//		for (int j = 0; j <= 3; j++)
//		{
//			tmp_data[0] = contact_list[i].get_field(filed_name[j][0]);
//			if (tmp_data->length() >= 10)
//			std::cout
//					<< truncate(contact_list[i].get_field(filed_name[j][0]), 9, true);
//			else
//				std::cout << contact_list[i].get_field(filed_name[j][0]);
//			std::cout << std::setw(10 - (int)tmp_data->length())
//					  << "|";
//		}
//		std::cout << std::endl;
//	}
//}

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