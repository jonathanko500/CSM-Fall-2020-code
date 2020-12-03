#include <iostream>
#include "Human.h"
#include "Cyberdemon.h"
#include "Balrog.h"
#include "Elf.h"

using namespace cs_creature;

void battleArena(Creature& Creature1, Creature& Creature2);

int main()
{//start main
    srand(static_cast<unsigned>(time(nullptr)));

    Elf e(50, 50);
    Balrog b(50, 50);

        battleArena(e, b);
    
}//end main







//battle arean
void battleArena(Creature& Creature1, Creature& Creature2)
{//start
    //variales for creature 1
    int HPx, DMGx, TakenX;
    //variales for creature 2
    int HPy, DMGy, TakenY;
    //turn counter
    int turn = 1;
    do
    {//start loop
        cout << "Turn " << turn << endl;

        //set variables

        //dmg
        DMGx = Creature1.getDamage();
        DMGy = Creature2.getDamage();

        //hp
        HPx = Creature1.getHitpoints();
        HPy = Creature2.getHitpoints();

        //dmg inflict + set New HP for Creature1
        TakenX = HPx - DMGy;
        Creature1.setHitpoints(TakenX);
        cout << Creature1.getSpecies() << " now has " << Creature1.getHitpoints() << " HP" << endl;

        //dmg inflict + set New HP Creature 2
        TakenY = HPy - DMGx;
        Creature2.setHitpoints(TakenY);
        cout << Creature2.getSpecies() << " now has " << Creature2.getHitpoints() << " HP" << endl;

        //inc turn counter
        turn++;

        //turn divider
        cout << "********************" << endl;

    } while (HPx >= 0 || HPy >= 0);//end

    if (HPx <= 0)
    {
        cout << Creature1.getSpecies() << " dies and " << Creature2.getSpecies() << " wins!" << endl;
    }
    if (HPy <= 0)
    {
        cout << Creature2.getSpecies() << " dies and " << Creature1.getSpecies() << " wins!" << endl;
    }
}//end