
#ifndef CYBERDEMON_H
#define CYBERDEMON_H
#include "Demon.h"
#include <string>

namespace cs_creature
{//start namespace
	class Cyberdemon : public Demon
	{//start class
	public:
		Cyberdemon();
		Cyberdemon(int atk, int hp);
	};//end class
}//end namespace

#endif
