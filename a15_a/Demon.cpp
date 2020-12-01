#include <iostream>
#include "Demon.h"
using namespace std;


namespace cs_creature
{//start namespace
    //default constructor
    Demon::Demon()
    {//start
        Creature();
        setType(1);
    }//end






    //paramterized constructor
    Demon::Demon(int atk, int hp)
        : Demon()
    {//start
        setHitpoints(hp);
        setStrength(atk);
    }//end






    //getDamage
    int Demon::getDamage() const
    {//start
        int damage;
        Creature demon(getStrength(), getHitpoints(), getType());

        demon.setType(getType());

        damage = demon.getDamage();

        if ((rand() % 100) < 25) {
            damage = damage + 50;
            cout << "Demonic attack inflicts 50 additional damage points!" << endl;
        }

        return damage;
    }//end
}//end namespace



