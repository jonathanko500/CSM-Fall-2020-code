#ifndef ELF_H
#define ELF_H
#include "Creature.h"
#include <string>
using namespace std;

class Elf : public Creature
{//start class
public:
	Elf();
	Elf(int atk, int hp);

};//end class

#endif
