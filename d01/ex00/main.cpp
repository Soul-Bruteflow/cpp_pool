//
// Created by bruteflow on 8/2/18.
//

#include "Pony.hpp"
#include <iostream>

void ponyOnTheHeap(void);
void ponyOnTheStack(void);

int main(void)
{
	std::cout << "| The function ponyOnTheHeap is executed. |" << std::endl;
	ponyOnTheHeap();
	std::cout << "| The function ponyOnTheStack is executed. |" << std::endl;
	ponyOnTheStack();
	return (0);
}

void ponyOnTheHeap(void)
{
	Pony *heapPony = new Pony;
	std::cout << "Stack pony is enjoying a life." << std::endl;
	delete heapPony;
}

void ponyOnTheStack(void)
{
	Pony stackPony;
	std::cout << "Stack pony is enjoying a life." << std::endl;
}

