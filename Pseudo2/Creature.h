#include <iostream>
#ifndef CREATURE_H
#define CREATURE_H

namespace cs_creature
{//start namespace
    class Creature
    {//start classs
    private:
        int type;               // 0 Human, 1 Cyberdemon, 2 Balrog, 3 elf
        int strength;           // how much damage this Creature inflicts
        int hitpoints;          // how much damage this Creature can sustain

    public:
        Creature();             // initialize to Human, 10 strength, 10 hitpoints
        Creature(int newType, int newStrength, int newHitpoints);

        int getDamage() const;         // returns the amount of damage this Creature
                                       // inflicts in one round of combat
        int getStrength() const;
        int getHitpoints() const;
        int getType() const;
        virtual string getSpecies() const;


        void setStrength(const int atk);
        void setHitpoints(const int hp);
        void setType(const int spec);
        // also include appropriate accessors and mutators    
    };//end class


}//end namespace
#endif

