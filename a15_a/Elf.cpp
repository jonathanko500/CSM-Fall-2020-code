#include <iostream>
#include "Elf.h"
using namespace std;


namespace cs_creature
{//start namespace
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






    //get species 
    string Elf::getSpecies() const
    {//start
        return "Elf";
    }//end
}//end namespace


