#include <iostream>
#include "Demon.h"
using namespace std;


namespace cs_creature
{//start namespace
    //default constructor
    Demon::Demon()
    {//start
        Creature();
    }//end






    //paramterized constructor
    Demon::Demon(int atk, int hp)
        : Demon()
    {//start
        setHitpoints(hp);
        setStrength(atk);
    }//end
}//end namespace



