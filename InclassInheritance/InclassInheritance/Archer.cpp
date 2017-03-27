#include "Archer.h"


Archer::Archer(std::string name, int startingHealth, std::string bowType) :
	Character(name, startingHealth), _bowType(bowType)
{
}


Archer::~Archer()
{
}
