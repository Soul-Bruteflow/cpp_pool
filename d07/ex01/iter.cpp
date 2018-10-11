//
// Created by bruteflow on 10/11/18.
//

#include <string>
#include <iostream>
#include <iomanip>

template<typename T>
void iter(T *arrayAddress, size_t arrayLen, void (*fnc)(T &))
{
	for (size_t i = 0; i < arrayLen; i++)
		(*fnc)(arrayAddress[i]);
}

template <typename T>
void	printArray(T &data)
{
	std::cout << data << std::endl;
}

int main()
{
	int intTest[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	double 	doubleTest[] = {1.999999999999, 2.99, 3.99, 4.99, 5.99, 6.66, 7.77, 8.88, 9.99, 10.10};
	float 	floatTest[] = {1.999999, 2.99, 3.99, 4.99, 5.99, 6.66, 7.77, 8.88, 9.99, 10.10};
	char charTest[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'};
	std::string	stringTest[] = {"amused", "recess", "glow", "prick", "mark", "funny", "fruit"};

	std::cout << "\nInteger test:\n";
	iter<int>(intTest, 10, &printArray<int>);

	std::cout << std::fixed << std::setprecision(12);
	std::cout << "\nDouble test:\n";
	iter<double>(doubleTest, 10, &printArray<double>);

	std::cout << std::fixed << std::setprecision(6);
	std::cout << "\nFloat test:\n";
	iter<float>(floatTest, 10, &printArray<float>);

	std::cout << "\nChar test:\n";
	iter<char>(charTest, 10, &printArray<char>);

	std::cout << "\nString test:\n";
	iter<std::string>(stringTest, 7, &printArray<std::string>);

	return (0);
}