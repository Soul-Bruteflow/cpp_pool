#ifndef _CONTACT_HPP
#define _CONTACT_HPP

#include <string>
#include "defines.hpp"

class Contact
{
public:
	// Default Constructor
	Contact();

	// Default Destructor
	~Contact();

	//Accessor functions
	std::string returnDataFromFiledByIndex(int field_index) const;

	//Mutator functions
	bool addNewDataToFieldByIndex(int field_index, std::string field_data);

private:
	std::string	_contactFields[MAX_FIELDS][FILED_STATIC_LEN];
};

#endif