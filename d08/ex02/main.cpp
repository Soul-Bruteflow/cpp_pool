//
// Created by bruteflow on 10/11/18.
//

#include <iostream>
#include <list>
#include "mutantstack.hpp"

int main() {
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "\nBasic Test:\n";

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << ", ";
		++it;
	}
	std::cout << std::endl;


	std::cout << "\nList Test:\n";
	std::list<int>	listTest;

	listTest.push_front(5);
	listTest.push_front(17);
	std::cout << listTest.front() << std::endl;
	listTest.pop_front();
	std::cout << listTest.size() << std::endl;
	listTest.push_front(3);
	listTest.push_front(5);
	listTest.push_front(737);
	//[...]
	listTest.push_front(0);

	MutantStack<int>::iterator lit = listTest.begin();
	MutantStack<int>::iterator lite = listTest.end();
	++lit;
	--lit;

	while (lit != lite)
	{
		std::cout << *lit << ", ";
		++lit;
	}
	std::cout << std::endl;
	std::stack<int> ls(mstack);
	return 0;
}