#include <iostream>
#include "Demon.h"
using namespace std;

//default constructor
Demon::Demon()
{//start
    type = 1;
    strength = 10;
    hitpoints = 10;
}//end






//paramterized constructor
Demon::Demon(int atk, int hp)
    : Creature()
{//start
    strength = atk;
    hitpoints = hp;
}//end
