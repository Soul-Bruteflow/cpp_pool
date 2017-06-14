#include "Contact.hpp"

Contact::Contact()
{
    return;
}

Contact::~Contact()
{
    return;
}

bool Contact::addNewDataToFieldByIndex(int field_index, std::string field_data)
{
	if (field_index < 0 || field_index > MAX_FIELDS)
		return (false);
	tmpStr[0] = field_data;
	_contactFields[field_index][0] = tmpStr[0];
	return (true);
}

std::string Contact::returnDataFromFiledByIndex(int field_index) const
{
	if (field_index < 0 || field_index > MAX_FIELDS)
		return (NULL);
	return (_contactFields[field_index][0]);
}
