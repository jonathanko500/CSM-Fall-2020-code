#include <iostream>
#include "Elf.h"
using namespace std;

//default constructor
Elf::Elf()
{//start
    type = 3;
    strength = 10;
    hitpoints = 10;
}//end






//paramterized constructor
Elf::Elf(int atk, int hp)
    : Elf()
{//start
    strength = atk;
    hitpoints = hp;
}//end
