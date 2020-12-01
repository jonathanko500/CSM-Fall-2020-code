#include <iostream>
#include "Creature.h"
#ifndef HUMAN_H
#define HUMAN_H

using namespace std;

namespace cs_creature
{//start namespace
	class Human : public Creature
	{
	public:
		Human();
		Human(int newStrength, int newHit);
	};
	
}//end namespace


#endif
