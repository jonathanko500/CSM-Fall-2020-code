#ifndef ELF_H
#define ELF_H
#include "Creature.h"
#include <string>
using namespace std;

namespace cs_creature
{//start namespace
	class Elf : public Creature
	{//start class
	public:
		Elf();
		Elf(int atk, int hp);
		int getDamage() const;
		std::string getSpecies() const;
	};//end class
}//end namespace



#endif
