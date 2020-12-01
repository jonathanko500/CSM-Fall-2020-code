#include <iostream>
#include "Demon.h"
using namespace std;

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
