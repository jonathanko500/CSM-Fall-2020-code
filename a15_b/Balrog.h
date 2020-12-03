#ifndef BALROG_H
#define BALROG_H
#include "Demon.h"
#include <string>

namespace cs_creature
{//start namespace
	class Balrog : public Demon
	{//start class
	public:
		Balrog();
		Balrog(int atk, int hp);
		int getDamage() const;
		std::string getSpecies() const;
	};//end class
}//end namespace



#endif
