#include <iostream>
#include "Human.h"
using namespace std;


namespace cs_creature
{//start namespace
    //default constructor
    Human::Human()
    {//start
        Creature();
    }//end






    //paramterized constructor
    Human::Human(int atk, int hp)
        : Creature()
    {//start
        setHitpoints(hp);
        setStrength(atk);
    }//end
}//end namespace