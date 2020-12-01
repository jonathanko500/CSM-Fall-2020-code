#include <iostream>
#include "Demon.h"
#ifndef BALROG_H
#define BALROG_H

using namespace std;

namespace cs_creature
{//start namespace
	class Balrog : public Demon
	{
	public:
		Balrog();
		Balrog(int newStrength, int newHit);
		int getDamage() const;
	};
}//end namespace


#endif
