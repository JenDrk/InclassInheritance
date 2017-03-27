#include "Warrior.h"



Warrior::Warrior(std::string name, int startingHealth, std::string swordType) : 
	Character(name, startingHealth), _swordType(swordType)
{
}


Warrior::~Warrior()
{
}
