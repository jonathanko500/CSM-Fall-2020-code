#ifndef HUMAN_H
#define HUMAN_H
#include "Creature.h"
#include <string>
using namespace std;

namespace cs_creature
{//start namespace
	class Human : public Creature
	{//start class
	public:
		Human();
		Human(int atk, int hp);
		string getSpecies() const;
	};//end class
}//end namespace


#endif