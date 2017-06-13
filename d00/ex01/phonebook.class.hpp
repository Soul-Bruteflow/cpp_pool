#ifndef _PHONEBOOK_HPP
#define _PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include "contact.class.hpp"
#include "defines.hpp"

class Phonebook
{
public:

	static const std::string fieldLabels_[MAX_FIELDS][FILED_STATIC_LEN];
	std::string tmpFieldData[FILED_STATIC_LEN];
	std::string tmpCommand[FILED_STATIC_LEN];
	bool isRunning;
	int conIndex;


	// Default Constructor
	Phonebook();

	// Default Destructor
	~Phonebook();

	//Accessor functions
	std::string truncate(std::string str, size_t width, bool show_dots) const;

	//Mutator functions
	void setContactFields(int i);
	void addContact(void);


private:
	Contact _contactList[8];
};

#endif