#include <iostream>
#include <ctime>
#include "Creature.h"
using namespace std;

//define getSpecies
/*
string Creature::getSpecies() const
{//start
    switch (type)
    {//start switch
        case 0: return "Human";
        case 1: return "Cyberdemon";
        case 2: return "Balrog";
        case 3: return "Elf";
    }//end switch
    return "unknown";
}//end
*/






//default constructor
Creature::Creature()
{//start
    type = 0;
    strength = 10;
    hitpoints = 10;
}//end






//paramterized constructor
Creature::Creature(int newType, int newStrength, int newHitpoints)
{//start
    type = newType;
    strength = newStrength;
    hitpoints = newHitpoints;
}//end






/*
//getDamage
int Creature :: getDamage() const
{//start
    int damage;
    // All Creatures inflict damage which is a random number up to their strength
    damage = (rand() % strength) + 1;
    cout << getSpecies() << " attacks for " << damage << " points!" << endl;
    // Demons can inflict damage of 50 with a 25% chance
    if (type == 2 || type == 1) {
        if (rand() % 4 == 0) {
            damage = damage + 50;
            cout << "Demonic attack inflicts 50 additional damage points!" << endl;
        }
    }
    // Elves inflict double magical damage with a 50% chance
    if (type == 3) {
        if ((rand() % 2) == 0) {
            cout << "Magical attack inflicts " << damage << " additional damage points!" << endl;
            damage *= 2;
        }
    }
    // Balrogs are so fast they get to attack twice
    if (type == 2) {
        int damage2 = (rand() % strength) + 1;
        cout << "Balrog speed attack inflicts " << damage2 << " additional damage points!" << endl;
        damage += damage2;
    }
    return damage;
}//end
*/





//get atk
int Creature::getStrength() const
{//start
    return strength;
}//end







//get hp
int Creature::getHitpoints() const
{//start
    return hitpoints;
}//end






//set atk
void Creature::setStrength(const int atk)
{//start
    strength = atk;
}//end






//set hp
void Creature::setHitpoints(const int hp)
{//start
    hitpoints = hp;
}//end
