#include <iostream>
#include "Elf.h"
using namespace std;

//default constructor
Elf::Elf()
{//start
    Creature();
    setType(3);
}//end






//paramterized constructor
Elf::Elf(int atk, int hp)
    : Elf()
{//start
    setHitpoints(hp);
    setStrength(atk);
}//end
