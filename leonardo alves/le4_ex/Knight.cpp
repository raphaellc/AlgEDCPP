#include "Knight.h"

Knight::Knight()
{
	Knight::knightSTR = Human::STR * 2;
}

Knight::~Knight()
{
}

int Knight::getWeapon()
{
	return Human::getWeapon() + 2;
}

int Knight::attack()
{
	int damage = (Knight::getWeapon() * 5) + Knight::knightSTR;
	return damage;
}
