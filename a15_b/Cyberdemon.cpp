#include <iostream>
#include "Cyberdemon.h"
using namespace std;

namespace cs_creature
{//stasrt namespace
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






    //getspecies
    //getspecies
    string Cyberdemon::getSpecies() const
    {
        return "Cyberdemon";
    }
}//end namespace