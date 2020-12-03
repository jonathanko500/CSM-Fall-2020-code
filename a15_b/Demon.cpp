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
        //create creture obj
        Creature demon(getStrength(), getHitpoints(), getType());

        //setting creature to demon
        demon.setType(getType());

        //creating base dmg
        damage = demon.getDamage();

        
        //base dmg + add on dmg
        if ((rand() % 100) < 25) {
            damage = damage + 50;
            cout << "Demonic attack inflicts 50 additional damage points!" << endl;
        }

        return damage;
    }//end






    //getspecies
    string Demon::getSpecies() const
    {
        return "Demon";
    }
}//end namespace



