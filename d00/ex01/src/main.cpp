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
			input.clear();
		}
		else if (input == "SEARCH")
		{
			if (book.currentContact <= 0)
			{
				std::cout << std::endl;
				std::cout << RED << "ERROR 42: There is no contacts! First ADD them." << RESET_COLOR << std::endl;
				std::cout << std::endl;
				input.clear();
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
					if (!(isdigit(index[0])) || isspace(index[0]))
					{
						std::cout << std::endl;
						std::cout << RED <<  "ERROR 42: There is no such index." << RESET_COLOR << std::endl;
						input.clear();
						book.printInput(true, true);
						continue;
					}
					try
					{
						n = std::stoi((std::string)index, nullptr,10);
					}
					catch (const std::out_of_range& oor)
					{
						std::cerr << "Out of Range error: " << oor.what() << '\n';
						input.clear();
						book.printInput();
						break;
					}

					if(n >= 0 && n <= book.currentContact - 1)
					{
						book.printFullContact(n);
						input.clear();
						book.printInput();
						break;
					}
					else
					{
						std::cout << std::endl;
						std::cout << RED <<  "ERROR 42: There is no such index." << RESET_COLOR << std::endl;
						input.clear();
						book.printInput(true, true);
						continue;
					}
				}
			}
		}
		else
		{
			std::cout << std::endl;
			std::cout << RED <<  "ERROR 42: Command '" << input << "' discarded." << RESET_COLOR << std::endl;
			std::cout << std::endl;
			input.clear();
			book.printInput();
		}
	}
	return (0);
}