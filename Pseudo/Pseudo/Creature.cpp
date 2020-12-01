#include <iostream>
#include <ctime>
#include "Creature.h"
using namespace std;

namespace cs_creature
{//start namespace
	Creature::Creature()
	{//start
		strength = 10;
		hitpoints = 10;
		type = 0;
	}//end

	Creature::Creature(int newStrength, int newHit, int newSpecies)
	{//start
		strength = newStrength;
		hitpoints = newHit;
		type = newSpecies;
	}//end


	int Creature::getDamage() const
	{//start
		int damage;

		srand(time(NULL));

		damage = (rand() % getStrength()) + 1;
		cout << endl << getType() << " attacks for " << damage << " points!";

		return damage;
	}//end

	int Creature::getStrength() const
	{
		return strength;
	}

	int Creature::getHitpoints() const
	{
		return hitpoints;
	}

	int Creature::getType() const
	{
		return type;
	}

	void Creature::setStrength(int newStrength)
	{
		strength = newStrength;
	}

	void Creature::setHitpoints(int newHit)
	{
		hitpoints = newHit;
	}

	void Creature::setType(int newSpecies)
	{
		type = newSpecies;		
	}
}//end namespace