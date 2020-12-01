#include <iostream>
#include "Demon.h"
#ifndef CYBERDEMON_H
#define CYBERDEMON_H

using namespace std;

namespace cs_creature
{//start namespace
	class Cyberdemon : public Demon
	{
		public:
			Cyberdemon();
			Cyberdemon(int newStrength, int newHit);
	};
}//end namespace


#endif

