#include <iostream>
#include "Creature.h"
#ifndef DEMON_H
#define DEMON_H

using namespace std;

namespace cs_creature
{//start namespace
	class Demon : public Creature
	{
		public:
			Demon();
			Demon(int newStrength, int newHit);
			int getDamage() const;
	};

}//end namespace


#endif
