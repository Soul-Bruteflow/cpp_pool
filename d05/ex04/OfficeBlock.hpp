//
// Created by bruteflow on 9/25/18.
//

#ifndef D05_EX04_OFFICEBLOCK_HPP
#define D05_EX04_OFFICEBLOCK_HPP

#include "Bureaucrat.hpp"
#include "Intern.hpp"

class OfficeBlock
{
public:
	/* Canonical Form */
	OfficeBlock();
	OfficeBlock(Intern &intern, Bureaucrat &sBureaucrat, Bureaucrat &eBureaucrat);
	~OfficeBlock();

	void setIntern(Intern &intern);
	void setSigner(Bureaucrat &sBureaucrat);
	void setExecutor(Bureaucrat &eBureaucrat);
	void doBureaucracy(std::string form, std::string target);

	/* Exceptions */
	class NoInternException : public std::exception
	{
	public:
		NoInternException();
		NoInternException(NoInternException const &src);
		~NoInternException() throw();
		NoInternException &operator=(NoInternException const &rhs);
		const char* what() const throw();
	};

	class NoSignerException : public std::exception
	{
	public:
		NoSignerException();
		NoSignerException(NoSignerException const &src);
		~NoSignerException() throw();
		NoSignerException &operator=(NoSignerException const &rhs);
		const char* what() const throw();
	};

	class NoExecuterException : public std::exception
	{
	public:
		NoExecuterException();
		NoExecuterException(NoExecuterException const &src);
		~NoExecuterException() throw();
		NoExecuterException &operator=(NoExecuterException const &rhs);
		const char* what() const throw();
	};

	class IncorrectFromName : public std::exception
	{
	public:
		IncorrectFromName();
		IncorrectFromName(IncorrectFromName const &src);
		~IncorrectFromName() throw();
		IncorrectFromName &operator=(IncorrectFromName const &rhs);
		const char* what() const throw();
	};

private:
	Intern		*_intern;
	Bureaucrat	*_sBureaucrat;
	Bureaucrat	*_eBureaucrat;

};


#endif //D05_EX04_OFFICEBLOCK_HPP
