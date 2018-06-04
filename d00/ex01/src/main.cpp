#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int main()
{
	PhoneBook book;
	std::string input;


	while(getline(std::cin, input) && (input != "EXIT"))
	{
		if (input == "ADD")
		{
			book.recordContact();
		}
		else if (input == "SEARCH")
		{
			if (book.currentContact <= 0)
			{
				std::cout << std::endl;
				std::cout << RED << "ERROR 42: There is no contacts! First ADD them." << RESET_COLOR << std::endl;
				std::cout << std::endl;
				book.printInput();
			}
			else
			{
				std::string index;
				int n;

				book.printTableHead();
				book.printShort();
				book.printInput(true, true);
				while (true)
				{
					getline(std::cin, index);
					//n = std::stoi((std::string)index, nullptr,10);
					if (!(isdigit(index[0])) || isspace(index[0]))
					{
						std::cout << std::endl;
						std::cout << RED <<  "ERROR 42: There is no such index." << RESET_COLOR << std::endl;
						book.printInput(true, true);
						continue;
					}
					n = std::stoi((std::string)index, nullptr,10);
					if(n >= 0 && n <= book.currentContact - 1)
					{
						book.printFullContact(index[0]);
						book.printInput();
						break;
					}
					else
					{
						std::cout << std::endl;
						std::cout << RED <<  "ERROR 42: There is no such index." << RESET_COLOR << std::endl;
						book.printInput(true, true);
						continue;
					}
				}
//				while (true)
//				{
//					//std::cout << index[0] << std::endl;
//					getline(std::cin, index);
//					int n = std::stoi(index, nullptr,10);
//					std::cout << "N: " << n << std::endl;
//					if (n >= 0 && n <= book.currentContact - 1)
//					{
//						book.printFullContact(index[0]);
//						book.printInput();
//						break;
//					}
//					else
//					{
//						std::cout << std::endl;
//						std::cout << RED <<  "ERROR 42:1 There is no such index." << RESET_COLOR << std::endl;
//						book.printInput(true, true);
//					}
//				}
				//std::cout << "now print contact" << std::endl;
			}
		}
		else
		{
			std::cout << std::endl;
			std::cout << RED <<  "ERROR 42: Command '" << input << "' discarded." << RESET_COLOR << std::endl;
			std::cout << std::endl;
			book.printInput();
		}
	}
	return (0);
}