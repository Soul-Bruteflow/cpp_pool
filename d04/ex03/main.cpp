//
// Created by bruteflow on 9/21/18.
//

#include <iostream>
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* zaz = new Character("zaz");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	zaz->equip(tmp);
	tmp = src->createMateria("cure");
	zaz->equip(tmp);
	ICharacter* bob = new Character("bob");
	zaz->use(0, *bob);
	zaz->use(1, *bob);
	delete bob;
	delete zaz;
	delete src;

	std::cout << "\n/* Custom Testing */\n";

	IMateriaSource* source = new MateriaSource();
	ICharacter* char1 = new Character("char1");
	ICharacter* char2 = new Character("char2");
	AMateria* materia;

	std::cout << "\n/* Fill source over 4 slots */\n";
	source->learnMateria(new Ice());
	source->learnMateria(new Cure());
	source->learnMateria(new Ice());
	source->learnMateria(new Ice());
	source->learnMateria(new Ice());

	//inventory for equip unequip testing
	materia = source->createMateria("ice");
	char1->equip(materia);

	materia = source->createMateria("cure");
	char1->equip(materia);

	materia = source->createMateria("ice");
	char1->equip(materia);

	std::cout << "\n/* Unequip illegal */\n";
	char1->unequip(5);
	char1->unequip(3);

	std::cout << "\n/* Unequip Legal */\n";
	char1->unequip(2);

	std::cout << "\n/* Use illegal */\n";
	char1->use(3, *char2);
	char1->use(5, *char2);

	std::cout << "\n/* Fill materia over 4 slots */\n";

	materia = source->createMateria("ice");
	char1->equip(materia);

	materia = source->createMateria("ice");
	char1->equip(materia);

	materia = source->createMateria("ice");
	char1->equip(materia);

	std::cout << "\n/* Use legal */\n";
	char1->use(0, *char2);
	char1->use(1, *char2);

	delete char1;
	delete char2;
	delete source;
}