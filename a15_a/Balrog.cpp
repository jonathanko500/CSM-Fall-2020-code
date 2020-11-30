#include <iostream>
#include "Balrog.h"
using namespace std;

//default constructor
Balrog::Balrog()
{//start
    type = 2;
    strength = 10;
    hitpoints = 10;
}//end






//paramterized constructor
Balrog::Balrog(int atk, int hp)
    : Balrog()
{//start
    strength = atk;
    hitpoints = hp;
}//end