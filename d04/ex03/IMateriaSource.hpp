//
// Created by bruteflow on 9/21/18.
//

#ifndef D04_EX03_IMATERIASOURCE_HPP
#define D04_EX03_IMATERIASOURCE_HPP

#include <string>
#include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif //D04_EX03_IMATERIASOURCE_HPP
