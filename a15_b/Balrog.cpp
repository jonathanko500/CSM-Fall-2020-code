#include <iostream>
#include "Balrog.h"
using namespace std;


namespace cs_creature
{//start namespace
    //default constructor
    Balrog::Balrog()
    {//start
        Demon();
        setType(2);
    }//end






    //paramterized constructor
    Balrog::Balrog(int atk, int hp)
        : Balrog()
    {//start
        setHitpoints(hp);
        setStrength(atk);
    }//end






    //get dmg
    int Balrog::getDamage() const
    {//start

        int damage;

        //create demon 
        Demon balrog(getStrength(), getHitpoints());

        //set demon to balrog
        balrog.setType(getType());

        //set base dmg
        damage = balrog.getDamage();

        //add additional dmg
        int damage2 = (rand() % getStrength()) + 1;
        cout << "Balrog speed attack inflicts " << damage2 << " additional damage points!" << endl;
        damage = damage + damage2;

        return damage;
    }//end






    //getspecies
    string Balrog::getSpecies() const
    {
        return "Balrog";
    }
}//end namespace