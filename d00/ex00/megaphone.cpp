/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruteflow <bruteflow@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 12:39:04 by bruteflow         #+#    #+#             */
/*   Updated: 2017/06/11 12:56:38 by bruteflow        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		char c;
		for (int i = 1; av[i]; i++)
		{
			for (int j = 0; av[i][j]; j++)
			{
				if (islower(av[i][j]))
				{
					c = av[i][j];
					c = toupper(c);
					std::cout << c;
				}
				else
					std::cout << av[i][j];
			}
			std::cout << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}