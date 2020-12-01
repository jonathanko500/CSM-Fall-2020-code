#include <iostream>
#ifndef CREATURE_H
#define CREATURE_H

using namespace std;

namespace cs_creature
{//start namespace
	class Creature
	{//start class
	public:
		Creature();
		Creature(int newStrength, int newHit, int newSpecies);

		int getDamage() const;
		int getStrength() const;
		int getHitpoints() const;
		int getType() const;

		void setStrength(int newStrength);
		void setHitpoints(int newHit);
		void setType(int newSpecies);
	private:
		int strength;
		int hitpoints;
		int type;
	};//end class
}//end namespace
#endif