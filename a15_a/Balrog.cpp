#include <iostream>
#include "Balrog.h"
using namespace std;


namespace cs_creature
{//start namespace
    //default constructor
    Balrog::Balrog()
    {//start
        Demon();
        setType(2);
    }//end






    //paramterized constructor
    Balrog::Balrog(int atk, int hp)
        : Balrog()
    {//start
        setHitpoints(hp);
        setStrength(atk);
    }//end






    
}//end namespace
