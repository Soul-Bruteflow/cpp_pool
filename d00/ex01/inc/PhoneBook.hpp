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
		void printInput(bool isAdd = false, bool isSearch = false);
		void printTableHead(void);
		void printShort(void);
		void printFullContact(int n);

	//Fields
		static const std::string fieldLabels_[MAX_FIELDS][FILED_STATIC_LEN];
		int currentContact;

		std::string truncate(std::string str, size_t width, bool show_dots) const;
	private:

	//Fields
		std::string tmpContactFieldsData[MAX_FIELDS][FILED_STATIC_LEN];
		Contact _contactList[8];

};

#endif