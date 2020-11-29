#include <iostream>
#include <ctime>
#include "Human.h"
using namespace std;

//default constructor
Human::Human()
{//start
    type = 0;
    strength = 10;
    hitpoints = 10;
}//end






//paramterized constructor
Human::Human(int atk, int hp)
    : Creature()
{//start
    strength = atk;
    hitpoints = hp;
}//end