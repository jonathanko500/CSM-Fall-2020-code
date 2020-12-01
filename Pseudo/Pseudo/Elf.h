#include <iostream>
#include "Creature.h"
#ifndef ELF_H
#define ELF_H

using namespace std;

namespace cs_creature
{//start namespace
	class Elf : public Creature
	{
	public:
		Elf();
		Elf(int newStrength, int newHit);
		int getDamage() const;
	};

}//end namespace


#endif
