//
// Created by bruteflow on 9/10/18.
//

#ifndef D04_EX00_VICTIM_HPP
#define D04_EX00_VICTIM_HPP

#include <string>

class Victim
{
public:
	/* Canonical Form */
	Victim(std::string name);
	Victim(Victim const &src);
	~Victim();
	Victim &operator=(Victim const &rhs);

	/* Setters */
	void setName(std::string name);

	/* Getters */
	std::string getName() const;

	/* Rest */
	void getPolymorphed() const;

private:
	std::string _name;

};

std::ostream & operator<<(std::ostream & o, Victim const & rhs);

#endif //D04_EX00_VICTIM_HPP
