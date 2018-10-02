#include "Human.h"
#include <iostream>

Human::Human()
{
	Human::STR = 10;
	Human::INT = 10;
}

Human::~Human()
{
}

int Human::getWeapon()
{
	return Human::weapon;
}

int Human::attack()
{
	int damage = (Human::getWeapon() * 5) + Human::STR;
	return damage;
}

void Human::atualizar()
{
	spr.desenhar(Human::px, 
		         Human::py);
}

void Human::walk()
{
	if (TECLA_ESQ)
		Human::px = Human::px--;
	if (TECLA_DIR)
		Human::px = Human::px++;
	if (TECLA_CIMA)
		Human::py = Human::py--;
	if (TECLA_BAIXO)
		Human::py = Human::py++;
}

void Human::setSpriteSheet(string spritesheet) // precisa disso mesmo com o metodo de carregar??
{
	spr.setSpriteSheet(spritesheet);
	// setSprite(&spr); algum erro
}



