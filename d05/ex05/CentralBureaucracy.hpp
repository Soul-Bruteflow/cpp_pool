//
// Created by bruteflow on 9/27/18.
//

#ifndef D05_EX05_CENTRALBUREAUCRACY_HPP
#define D05_EX05_CENTRALBUREAUCRACY_HPP


#include "Bureaucrat.hpp"
#include "OfficeBlock.hpp"
#include <string>

class CentralBureaucracy
{
public:
	/* Canonical Form */
	CentralBureaucracy();
	CentralBureaucracy(CentralBureaucracy const &src);
	~CentralBureaucracy();
	CentralBureaucracy &operator=(CentralBureaucracy const &rhs);

	void feedBureaucrat(Bureaucrat &bureaucrat);
	void queueUp(std::string obj);
	void doBureaucracy();

private:
	OfficeBlock 	_officeBlocks[20];
	std::string 	_targets[100];
	unsigned int 	_officesCount;
	unsigned int	_bureaucratsCount;
	unsigned int	_targetsCount;

	void _generateInterns();
};


#endif //D05_EX05_CENTRALBUREAUCRACY_HPP
