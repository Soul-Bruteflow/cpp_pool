#include <iostream>
#include <iomanip>
#include "main.hpp"
#include "defines.hpp"

void printWellcome(void)
{
	std::cout << std::endl
			  << "Wellcome to the Phonebookinator 2000!"
			  << std::endl
			  << "Available commands: ADD, SEARCH, EXIT"
			  << std::endl;
}

void printTableHead(void)
{
	std::cout << std::setw(10)
			  << "index"
			  << "|"
			  << "first name"
			  << "|"
			  << std::setw(10)
			  << "last name"
			  << "|"
			  << std::setw(10)
			  << "nickname"
			  << std::endl;
}

std::string commandPromtRead(std::string *command)
{
	std::cout << std::endl
			  << "Input: ";
	std::cin  >> command[0];
	return (command[0]);
}
void slotsLeft(int con_index)
{
	std::cout << "Contact was added successfully. Contact slots left: "
			  << (MAX_CONTACTS - con_index)
			  << std::endl;
}
