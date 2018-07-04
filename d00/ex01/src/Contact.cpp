#include <string>
#include <iostream>
#include "Contact.hpp"

Contact::Contact(){}

Contact::~Contact(){}

bool Contact::createContact(std::string data[MAX_FIELDS][FILED_STATIC_LEN])
{
	for (unsigned int i = 0; i < MAX_FIELDS; i++)
		addFieldData(i, data[i][0]);
	return (true);
}

bool Contact::addFieldData(int field_index, std::string data)
{
	if (field_index < 0 || field_index > MAX_FIELDS)
		return (false);
	tmpStr[0] = data;
	_contactFields[field_index][0] = tmpStr[0];
	return (true);
}

std::string Contact::returnFieldData(int field_index) const
{
	std::string tmp;
	if (field_index < 0 || field_index > MAX_FIELDS)
		return (NULL);
	tmp = _contactFields[field_index][0];
	return (tmp);
}