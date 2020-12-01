#include <iostream>
#include "Elf.h"

using namespace std;


namespace cs_creature
{//start namespace
	Elf::Elf()
		: Creature()
	{
		setType(3);
	}

	Elf::Elf(int newStrength, int newHit)
		: Creature(newStrength, newHit, getType())
	{
		setType(3);
	}

	int Elf::getDamage() const {

		int damage;
		Creature elf(getStrength(), getHitpoints(), getType());

		srand(time(NULL));

		elf.setType(getType());
		damage = elf.getDamage();

		if ((rand() % 10) == 0) {
			cout << "\nMagical attack inflicts " << damage << " additional damage points!";
			damage = damage * 2;
		}

		return damage;
	}
}//end namespace



