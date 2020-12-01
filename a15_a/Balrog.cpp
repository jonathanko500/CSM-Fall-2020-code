#include <iostream>
#include "Balrog.h"
using namespace std;

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