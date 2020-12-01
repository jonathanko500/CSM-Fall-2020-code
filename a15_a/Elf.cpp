#include <iostream>
#include "Elf.h"
using namespace std;


namespace cs_creature
{//start namespace
    //default constructor
    Elf::Elf()
        :Creature()
    {//start
        setType(3);
    }//end






    //paramterized constructor
    Elf::Elf(int atk, int hp)
        : Elf()
    {//start
        setHitpoints(hp);
        setStrength(atk);
    }//end






    //get dmg
    int Elf::getDamage() const
    {//start

        int damage;
        Creature elf(getStrength(), getHitpoints(), getType());

        elf.setType(getType());
        damage = elf.getDamage();

        if ((rand() % 2) == 0) {
            cout << "Magical attack inflicts " << damage << " additional damage points!";
            damage = damage * 2;
        }

        return damage;
    }//end
}//end namespace


