#include <iostream>
#include <string>
#include "PhoneBook.hpp"

void print_input()
{

}

void print_wellcome()
{

	print_input();
}

int main()
{
	PhoneBook book;
	std::string input;
	std::string index;


	while(getline(std::cin, input) && (input != "EXIT"))
	{
		if (input == "ADD")
		{
			book.recordContact();
		}
		else if (input == "SEARCH")
		{
			std::cout << "SEARCH" << std::endl;
			if (book.currentContact <= 0)
			{
				std::cout << "There is contacts! First ADD them." << std::endl;
				book.printInput();
			}
			else
			{
				book.printTableHead();
				book.printShort();
			}
		}
		else
		{
			std::cout << "ERORR 42. Command '" << input << "' discarded." << std::endl;
			book.printInput();
		}
	}
	return (0);
}