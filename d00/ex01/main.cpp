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
	Phonebook book;

	printWellcome();
	while (book.isRunning)
	{
		commandPromtRead(book.tmpCommand);
		if (book.tmpCommand[0] == "ADD")
		{
			commandEcho(book.tmpCommand);
			book.addContact();
			slotsLeft(book.conIndex);
			continue;
		}
		else if (book.tmpCommand[0] == "SEARCH")
		{
//			book.get_contacts();
			continue;
		}
		else if (book.tmpCommand[0] == "EXIT")
			book.isRunning = false;
		else
		{
			std::cout << "There is no such command. Please try again.";
			std::cout << std::endl << std::endl;;
			continue;
		}
	}
	return 0;
}