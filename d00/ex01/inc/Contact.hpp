#ifndef _CONTACT_HPP
#define _CONTACT_HPP

#include "defines.hpp"
#include <string>

class Contact
{
	public:

		//Fields
		std::string tmpStr[FILED_STATIC_LEN];

		Contact();
		~Contact();

		// Mutator functions
		bool addFieldData(int field_index, const std::string data);
		bool createContact(std::string data[MAX_CONTACTS][FILED_STATIC_LEN]);
		
		// Accessor functions
		std::string returnFieldData(int filed_index) const;

	private:
		std::string _contactFields[MAX_FIELDS][FILED_STATIC_LEN];
};

#endif