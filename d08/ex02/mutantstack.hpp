//
// Created by bruteflow on 10/11/18.
//

#ifndef D08_EX02_MUTANTSTACK_HPP
#define D08_EX02_MUTANTSTACK_HPP


#include <list>
#include <stack>

template <typename T>
class	MutantStack : public std::stack<T>
{
public:
	typedef std::list<int>::iterator iterator;

	MutantStack<T>(void) {}
	MutantStack(MutantStack const &src) :_stack(src._stack) {}
	~MutantStack<T>(void) {}
	MutantStack &operator=(MutantStack const &rhs)
	{
		_stack = rhs._stack;
		return *this;
	}

	T top()				{return (_stack.front());}
	T size()			{return (_stack.size());}
	iterator begin()	{return (_stack.begin());}
	iterator end()		{return (_stack.end());}
	void push(T value)	{_stack.push_front(value);}
	void pop()			{_stack.pop_front();}

private:
	std::list<T>		_stack;

};


#endif //D08_EX02_MUTANTSTACK_HPP
