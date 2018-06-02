#ifndef _PHONEBOOK_HPP
#define _PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include "defines.hpp"
#include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();

	//Mutators
		void recordContact(void);

	//Print functions
		void printInput(void);
		void printTableHead(void);
		void printShort(void);

	//Fields
		static const std::string fieldLabels_[MAX_FIELDS][FILED_STATIC_LEN];
		unsigned int currentContact;

	private:

	//Fields
		std::string tmpContactFieldsData[MAX_FIELDS][FILED_STATIC_LEN];
		Contact _contactList[8];

};

#endif