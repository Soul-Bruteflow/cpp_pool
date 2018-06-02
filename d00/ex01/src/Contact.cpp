#include <string>
#include <iostream>
#include "Contact.hpp"

Contact::Contact(){}

Contact::~Contact(){}

bool Contact::createContact(const std::string data[MAX_CONTACTS][FILED_STATIC_LEN])
{
	//if (!data)
	//	return (false);
	std::cout << "tmp_data1:" << data[0][0] << std::endl;
	std::cout << "tmp_data2:" << data[1][0] << std::endl;
	std::cout << "tmp_data3:" << data[2][0] << std::endl;
	for (unsigned int i = 0; i < MAX_FIELDS; i++)
	{
		addFieldData(i, data[i]);
	}
	std::cout << "tmp_data4:" << _contactFields[0][0] << std::endl;
	std::cout << "tmp_data5:" << _contactFields[1][0] << std::endl;
	std::cout << "tmp_data6:" << _contactFields[2][0] << std::endl;
	return (true);
}

bool Contact::addFieldData(int field_index, const std::string data[FILED_STATIC_LEN])
{
	if (field_index > MAX_FIELDS || field_index < 0)
		return (false);
	this->_contactFields[field_index][0] = *data;
	return (true);
}

std::string Contact::returnFieldData(int field_index) const
{
	//if (field_index > MAX_FIELDS || field_index < 0)
	//	return (NULL);
	return (this->_contactFields[field_index][0]);
}