#include "Ranger.h"



Ranger::Ranger()
{
	for�a = 7;
	dano = 15;
	vida = 130;
	estamina = 300;
	mana = 70;
	defesa = 30;
}


Ranger::~Ranger()
{
}

void Ranger::Clamufagem()
{
	std::cout << "Ragnar fica invisivel (S� na floresta)" << std::endl;
}

void Ranger::Flechada()
{
	std::cout << "Ragnar usou o arco e acertou a cabe�a do oponente causando 100 de dano." << std::endl;
}

void Ranger::Joelho()
{
	std::cout << "Ragnar acertou o joelho do oponete, ele nunca mais sera um aventureiro." << std::endl;
}
