#ifndef HUMAN_H
#define HUMAN_H
#include "Creature.h"
#include <string>
using namespace std;

class Human : public Creature
{//start class
	public:
		Human();
		Human(int atk, int hp);
};//end class

#endif
