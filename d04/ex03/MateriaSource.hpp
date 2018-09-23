//
// Created by bruteflow on 9/21/18.
//

#ifndef D04_EX03_MATERIASOURCE_HPP
#define D04_EX03_MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:
	/* Canonical Form */
	MateriaSource();
	MateriaSource(MateriaSource const &src);
	~MateriaSource();
	MateriaSource &operator=(MateriaSource const &rhs);

	void 		learnMateria(AMateria*);
	AMateria* 	createMateria(std::string const & type);

private:
	AMateria *_inventory[4];

};


#endif //D04_EX03_MATERIASOURCE_HPP
