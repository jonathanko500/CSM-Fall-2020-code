#include <iostream>
#include <ctime>
#include "Creature.h"
using namespace std;

namespace cs_creature
{//start namespace

    //default constructor
    Creature::Creature()
    {//start
        strength = 10;
        hitpoints = 10;
        type = 0;
    }//end






     //paramterized constructor
    Creature::Creature(int newType, int newStrength, int newHitpoints)
    {//start
        strength = newStrength;
        hitpoints = newHitpoints;
        type = newType;
    }//end







    //getDamage
    int Creature::getDamage() const
    {//start
        int damage;
        damage = rand() % getStrength() + 1;
        return damage;
    }//end








     //get atk
    int Creature::getStrength() const
    {//start
        return strength;
    }//end







      //get hp
    int Creature::getHitpoints() const
    {//start
        return hitpoints;
    }//end






    //get type
    int Creature::getType() const
    {//start
        return type;
    }//end






    //get species
    






    //set atk
    void Creature::setStrength(const int atk)
    {//start
        strength = atk;
    }//end






    //set hp
    void Creature::setHitpoints(const int hp)
    {//start
        hitpoints = hp;
    }//end






    //set type
    void Creature::setType(const int spec)
    {//start
        type = spec;
    }//end
}//end namespace