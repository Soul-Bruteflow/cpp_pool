//
// Created by bruteflow on 10/11/18.
//

#include <list>
#include <vector>
#include "easyfind.hpp"

int main()
{
	std::list<int>	testList;

	testList.push_back(1);
	testList.push_back(2);
	testList.push_back(3);
	testList.push_back(4);


	std::cout << "\nList Tests:";
	std::cout << "\nExisting value found:\n";
	try
	{
		std::cout << easyfind(testList, 1) << std::endl;
	}
	catch (std::logic_error &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\nValue not found:\n";
	try
	{
		std::cout << easyfind(testList, 5) << std::endl;
	}
	catch (std::logic_error &e)
	{
		std::cout << e.what() << std::endl;
	}


	std::vector<int>	vec;

	vec.push_back(5);
	vec.push_back(6);
	vec.push_back(7);
	vec.push_back(8);
	vec.push_back(9);

	std::cout << "Vector Tests:";
	std::cout << "\nExisting value found:\n";
	try
	{
		std::cout << easyfind(vec, 5) << std::endl;
	}
	catch (std::logic_error &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\nValue not found:\n";
	try
	{
		std::cout << easyfind(vec, 10) << std::endl;
	}
	catch (std::logic_error &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}