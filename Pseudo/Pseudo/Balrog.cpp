#include <iostream>
#include "Balrog.h"

using namespace std;


namespace cs_creature
{//start namespace
	Balrog::Balrog() : Demon()
	{
		setType(2);
	}

	Balrog::Balrog(int newStrength, int newHit)
		: Demon(newStrength, newHit)
	{
		setType(2);
	}

	int Balrog::getDamage() const
	{

		int damage;
		Demon balrog(getStrength(), getHitpoints());

		srand(time(NULL));

		balrog.setType(getType());

		damage = balrog.getDamage();

		int damage2 = (rand() % getStrength()) + 1;
		cout << "\nBalrog speed attack inflicts " << damage2 << " additional damage points!";
		damage = damage + damage2;

		return damage;
	}
}//end namespace