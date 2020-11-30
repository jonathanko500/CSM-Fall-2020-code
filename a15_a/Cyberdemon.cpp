#include <iostream>
#include "Cyberdemon.h"
using namespace std;

//default constructor
Cyberdemon::Cyberdemon()
{//start
    type = 1;
    strength = 10;
    hitpoints = 10;
}//end






//paramterized constructor
Cyberdemon::Cyberdemon(int atk, int hp)
    : Cyberdemon()
{//start
    strength = atk;
    hitpoints = hp;
}//end

