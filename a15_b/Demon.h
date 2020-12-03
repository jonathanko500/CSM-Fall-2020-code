#ifndef DEMON_H
#define DEMON_H
#include "Creature.h"
#include <string>

namespace cs_creature
{//start namespace
	class Demon : public Creature
	{//start class
	public:
		Demon();
		Demon(int atk, int hp);
		int getDamage() const;
		string getSpecies() const;
	};//end class
}//end namespace

#endif

