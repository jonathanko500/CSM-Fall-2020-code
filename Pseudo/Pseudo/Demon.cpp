#include <iostream>
#include "Demon.h"
using namespace std;


namespace cs_creature
{//start namespace
	Demon::Demon() : Creature()
	{
		setType(1);
	}

	Demon::Demon(int newStrength, int newHit)
		: Creature(newStrength, newHit, getType())
	{
		setType(1);
	}

	int Demon::getDamage() const
	{

		int damage;
		Creature demon(getStrength(), getHitpoints(), getType());

		srand(time(NULL));

		demon.setType(getType());

		damage = demon.getDamage();

		if ((rand() % 100) < 5) {
			damage = damage + 50;
			cout << "\nDemonic attack inflicts 50 " << "additional damage points!";
		}

		return damage;
	}
}//end namespace