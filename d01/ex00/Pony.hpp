#ifndef _PONY_HPP
#define _PONY_HPP

#include <string>

class Pony {
public:
	Pony(std::string name, std::string eyes, std::string mane);
	~Pony(void);
	void ponyIntroduce(void);
private:
	std::string _name;
	std::string _eyesColor;
	std::string	_maneColor;
};
#endif
