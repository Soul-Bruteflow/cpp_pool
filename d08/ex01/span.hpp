//
// Created by bruteflow on 10/11/18.
//

#ifndef D08_EX01_SPAN_HPP
#define D08_EX01_SPAN_HPP

#include <vector>

class Span
{
public: /* Canonical Form */
	Span();
	Span(unsigned int n);
	Span(Span const &src);
	~Span();
	Span &operator=(Span const &rhs);

public: /* Methods */
	void addNumber(int n);
	int	 shortestSpan();
	int	 longestSpan();

public: /* Exceptions */
	class NoSpaceException : public std::exception
	{
	public:
		NoSpaceException();
		NoSpaceException(NoSpaceException const &src);
		~NoSpaceException() throw();
		NoSpaceException &operator=(NoSpaceException const &rhs);
		const char* what() const throw();
	};

	class ValueException : public std::exception
	{
	public:

		ValueException();
		ValueException(ValueException const &src);
		~ValueException() throw();
		ValueException &operator=(ValueException const &rhs);
		const char* what() const throw();
	};

private: /* Fields */
	std::vector<int>	_data;
	unsigned int		_size;

};


#endif //D08_EX01_SPAN_HPP
