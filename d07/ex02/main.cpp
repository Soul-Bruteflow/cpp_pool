//
// Created by bruteflow on 10/11/18.
//

#include <iostream>
#include "Array.tpp"

int main()
{
	std::cout << "\nEmpty array size:\n";
	Array<int> empty = Array<int>();
	std::cout << empty.size() << std::endl;

	std::cout << "\nOut of bounds error:\n";
	Array<int> intArray = Array<int>(10);
	intArray[0] = 1;
	intArray[1] = 2;
	intArray[2] = 3;
	intArray[3] = 3;
	intArray[4] = 4;
	intArray[5] = 5;
	intArray[6] = 6;
	intArray[7] = 7;
	intArray[8] = 9;
	intArray[9] = 10;
	try
	{
		intArray[10] = 11;
	}
	catch (std::range_error &e)
	{
		std::cout << e.what() << std::endl;
	}

	Array<int> intArrayCopy = Array<int>(intArray);

	std::cout << "\nArray data:\n";
	for (unsigned int j = 0; j < 10; j++)
	{
		std::cout << intArray[j] << ", ";
	}
	std::cout << std::endl;

	intArrayCopy[0] = 42;
	std::cout << "\nCopy Array data:\n";
	for (unsigned int j = 0; j < 10; j++)
	{
		std::cout << intArrayCopy[j] << ", ";
	}
	std::cout << std::endl;

	std::cout << "\nSize:\n";
	std::cout << intArray.size() << std::endl;

	std::cout << "\nAssignation:\n";
	intArray = intArrayCopy;
	for (unsigned int j = 0; j < 10; j++)
	{
		std::cout << intArray[j] << ", ";
	}
	std::cout << std::endl;

}