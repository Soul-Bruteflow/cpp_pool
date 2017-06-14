/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruteflow <bruteflow@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/12 11:31:28 by bruteflow         #+#    #+#             */
/*   Updated: 2017/06/12 12:41:34 by bruteflow        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"
#include "main.hpp"

int main(void)
{
	std::string index;
	Phonebook book;

	printWellcome();
	while (book.isRunning)
	{
		commandPromtRead(book.tmpCommand);
		if (book.tmpCommand[0] == "ADD")
		{
			book.addContact();
			continue;
		}
		else if (book.tmpCommand[0] == "SEARCH")
		{
			if (book.conIndex > 0)
			{
				printTableHead();
				book.setAndPrintAllShortFields();
				std::cout << std::endl
						  << "Index: ";
				std::cin >> index;
				std::cout << std::endl;
				book.getIndexPrintLong(index);
			}
			else
				std::cout << "Contact list empty. Add contact first." << std::endl;
			continue;
		}
		else if (book.tmpCommand[0] == "EXIT")
			book.isRunning = false;
		else
		{
			std::cout << "There is no such command. Please try again."
					  << std::endl;
			continue;
		}
	}
	return 0;
}