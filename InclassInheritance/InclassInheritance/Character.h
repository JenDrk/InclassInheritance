#pragma once
#include <string>
class Character
{
private:
	int _health = 0;
	std::string _name;
public:
	Character(std::string name, int startingHealth);
	~Character();

	std::string getName() { return _name; }
	int getHealth() { return _health; }

	std::string Attack();
};

