//
// Created by bruteflow on 10/11/18.
//

#ifndef D07_EX00_EASYFIND_HPP
#define D07_EX00_EASYFIND_HPP

#include <stdexcept>
#include <algorithm>
#include <iostream>

template < typename T >
int		easyfind(T &container, int y)
{
	typename T::iterator i;

	i = std::find(container.begin(), container.end(), y);
	if (i != container.end())
		return *i;
	throw std::logic_error("Error: 0 occurrences found.\n");
}


#endif //D07_EX00_EASYFIND_HPP
