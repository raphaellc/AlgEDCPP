#include "Knight.h"

Knight::Knight()
{
	Knight::knightSTR = Human::STR * 2;
	this->knight_spritesheet.setSpriteSheet("Knight");
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

void Knight::desenhaKnight()
{
	this->knight_spritesheet.desenhar(Human::px, Human::py);
}
