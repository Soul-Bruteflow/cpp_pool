#include <string>
#include "Human.hpp"

int main(void){
	Human humanOne;

	humanOne.action("shout", "Tom");
	humanOne.action("melee", "Fly");
	humanOne.action("range", "Deer");
}