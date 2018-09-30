//
// Created by bruteflow on 9/30/18.
//

#ifndef D06_EX00_SCALARCONVERSION_HPP
#define D06_EX00_SCALARCONVERSION_HPP


#include <string>

class ScalarConversion
{
public:
	/* Canonical Form */
	ScalarConversion();
	ScalarConversion(std::string &input);
	ScalarConversion(ScalarConversion const &src);
	~ScalarConversion();
	ScalarConversion &operator=(ScalarConversion const &rhs);

	operator char() const;
	operator int() const;
	operator float() const;
	operator double() const;

	class ImpossibleChar : public std::exception
	{
	public:
		ImpossibleChar();
		ImpossibleChar(ImpossibleChar const &src);
		~ImpossibleChar() throw();
		ImpossibleChar &operator=(ImpossibleChar const &rhs);
		const char* what() const throw();
	};
	class ImpossibleInt : public std::exception
	{
	public:
		ImpossibleInt();
		ImpossibleInt(ImpossibleInt const &src);
		~ImpossibleInt() throw();
		ImpossibleInt &operator=(ImpossibleInt const &rhs);
		const char* what() const throw();
	};
	class ImpossibleFloat : public std::exception
	{
	public:
		ImpossibleFloat();
		ImpossibleFloat(ImpossibleFloat const &src);
		~ImpossibleFloat() throw();
		ImpossibleFloat &operator=(ImpossibleFloat const &rhs);
		const char* what() const throw();
	};
	class ImpossibleDouble : public std::exception
	{
	public:
		ImpossibleDouble();
		ImpossibleDouble(ImpossibleDouble const &src);
		~ImpossibleDouble() throw();
		ImpossibleDouble &operator=(ImpossibleDouble const &rhs);
		const char* what() const throw();
	};

private:
	std::string _input;

};


#endif //D06_EX00_SCALARCONVERSION_HPP
