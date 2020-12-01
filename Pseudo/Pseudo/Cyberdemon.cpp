#include <iostream>
#include "Cyberdemon.h"
using namespace std;


namespace cs_creature
{//start namespace
	Cyberdemon::Cyberdemon() : Demon()
	{
		setType(1);
	}

	Cyberdemon::Cyberdemon(int newStrength, int newHit)
		: Demon(newStrength, newHit)
	{
		setType(1);
	}
}//end namespace