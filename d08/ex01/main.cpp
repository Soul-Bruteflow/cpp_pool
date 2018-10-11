//
// Created by bruteflow on 10/11/18.
//

#include <iostream>
#include "span.hpp"

int main()
{
	Span sp = Span(5);

	std::cout << "\nBasic Tests:\n";
	try
	{
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(12);
	}
	catch (const std::exception &e)
	{
		std::cout << e.what();
	}

	std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest Span: " << sp.longestSpan() << std::endl;

	Span sp2 = Span(20000);

	try
	{
		for (int i = 0; i < 20000; ++i)
		{
			sp2.addNumber(i * 10);
		}
	}
	catch (const std::exception &e)
	{
		std::cout << e.what();
	}

	std::cout << "\n20K Test:\n";
	std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest Span: " << sp.longestSpan() << std::endl;

	std::cout << "\n1 value test:\n";
	Span sp1;
	try
	{
		std::cout << "Shortest Span: " << sp1.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << sp1.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what();
	}
}