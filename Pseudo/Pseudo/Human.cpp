#include <iostream>
#include "Human.h"
using namespace std;

namespace cs_creature
{//start namespace

	Human::Human()
		: Creature()
	{
		setStrength(10);
		setHitpoints(10);
		setType(0);
	}

	Human::Human(int newStrength, int newHit)
		: Creature(newStrength, newHit,getType())
	{
		setStrength(newStrength);
		setHitpoints(newHit);
		setType(0);
	}
}//end namespace