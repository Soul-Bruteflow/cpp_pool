//
// Created by bruteflow on 10/1/18.
//

#include <string>
#include <iostream>
#include "Serialization.hpp"

void *serialize ();
Data *deserialize(void *raw);

int main()
{
	srand(time(0));
	void *buff = serialize();
	Data *raw = deserialize(buff);

	std::cout
	<< std::endl
	<< "Data: "
	<< raw->s1
	<< raw->n
	<< raw->s2
	<< std::endl
	<< std::endl;

	std::cout
	<< "Separate: " << std::endl
	<< "S1: " << raw->s1 << std::endl
	<< "N: " << raw->n << std::endl
	<< "S2: " << raw->s2
	<< std::endl;

	delete raw;
	return 0;
}

void *serialize()
{
	static const char alphaNums[63] =
	"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	static const unsigned int alphaNumsSize = sizeof(alphaNums) - 1;

	char *tmp = new char[20];
	void *ret = NULL;

	for (int i = 0; i < 8; i++)
		tmp[i] = alphaNums[rand() % alphaNumsSize];
	*(reinterpret_cast<int *>(&tmp[8])) = rand();
	for (int i = 12; i < 20; i++)
		tmp[i] = alphaNums[rand() % alphaNumsSize];

	ret = reinterpret_cast<void *>(tmp);
	delete[] tmp;
	return ret;
}

Data *deserialize(void *raw)
{
	Data *ret = new Data();

	ret->s1.assign(reinterpret_cast<char*>(raw), 8);
	ret->n = *reinterpret_cast<int*>(&reinterpret_cast<char*>(raw)[8]);
	ret->s2.assign(&reinterpret_cast<char*>(raw)[12], 8);

	return (ret);
}