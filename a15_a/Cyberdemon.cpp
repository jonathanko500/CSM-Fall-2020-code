#include <iostream>
#include "Cyberdemon.h"
using namespace std;

//default constructor
Cyberdemon::Cyberdemon()
{//start
    Demon();
}//end






//paramterized constructor
Cyberdemon::Cyberdemon(int atk, int hp)
    : Cyberdemon()
{//start
    setHitpoints(hp);
    setStrength(atk);
}//end

