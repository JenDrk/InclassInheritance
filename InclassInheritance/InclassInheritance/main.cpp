#include <iostream>
#include "Character.h"
#include"Warrior.h"
#include "Archer.h"
using namespace std;

void DisplayCharacterInfo(Character theCharacter);
void Attack(Character theCharacter);

int main()
{
	auto bob = Character("bob", 100);
	DisplayCharacterInfo(bob);

	auto mike = Warrior("Mike", 150, "longsword");
	DisplayCharacterInfo(mike);

	auto legolas = Archer("legolas", 50, "cool elven bow");
	DisplayCharacterInfo(legolas);

	system("pause");
	system("cls");
	Attack(bob);
	Attack(mike);
	Attack(legolas);

	system("pause");
	return 0;
}

void DisplayCharacterInfo(Character theCharacter)
{
	cout << theCharacter.getName() << " has " << theCharacter.getHealth() << " life." << endl;
}

void Attack(Character theCharacter)
{
	cout << theCharacter.Attack() << endl;
}